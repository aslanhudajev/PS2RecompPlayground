#include "ps2_runtime.h"
#include "ps2_memory.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include <cstdio>
#include <cstring>
#include <string>

// sceeLoadFile(param_1=path, param_2=buffer, param_3=maxSize): load file into EE buffer, return bytes read or -1
void sceeLoadFile_0x102870(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    const uint32_t pathAddr = getRegU32(ctx, 4);
    const uint32_t bufAddr  = getRegU32(ctx, 5);
    const uint32_t maxSize  = getRegU32(ctx, 6);

    const char* ps2Path = reinterpret_cast<const char*>(getConstMemPtr(rdram, pathAddr));
    uint8_t* buf = getMemPtr(rdram, bufAddr);
    if (!ps2Path || !buf) {
        setReturnS32(ctx, -1);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    std::string hostPath = translatePs2Path(ps2Path);
    if (hostPath.empty()) {
        setReturnS32(ctx, -1);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    FILE* fp = std::fopen(hostPath.c_str(), "rb");
    if (!fp) {
        setReturnS32(ctx, -1);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    if (std::fseek(fp, 0, SEEK_END) != 0) {
        std::fclose(fp);
        setReturnS32(ctx, -1);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }
    long fileSize = std::ftell(fp);
    if (fileSize < 0 || std::fseek(fp, 0, SEEK_SET) != 0) {
        std::fclose(fp);
        setReturnS32(ctx, -1);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }
    if (static_cast<uint32_t>(fileSize) > maxSize) {
        std::fclose(fp);
        setReturnS32(ctx, -1);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }
    size_t n = std::fread(buf, 1, static_cast<size_t>(fileSize), fp);
    std::fclose(fp);
    if (n != static_cast<size_t>(fileSize)) {
        setReturnS32(ctx, -1);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }
    setReturnS32(ctx, static_cast<int32_t>(n));
    ctx->pc = getRegU32(ctx, 31);
}
