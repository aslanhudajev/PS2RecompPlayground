#include "ps2_runtime.h"
#include "ps2_memory.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include <cctype>

// atoi(s): parse decimal string at a0, return int in v0 (low 32-bit)
void atoi_0x12a0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    const uint32_t sAddr = getRegU32(ctx, 4);
    const char* s = reinterpret_cast<const char*>(getConstMemPtr(rdram, sAddr));
    if (!s) {
        setReturnS32(ctx, 0);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }
    while (std::isspace(static_cast<unsigned char>(*s)))
        s++;
    int sign = 1;
    if (*s == '-') { sign = -1; s++; } else if (*s == '+') s++;
    long value = 0;
    while (std::isdigit(static_cast<unsigned char>(*s)))
        value = value * 10 + (*s++ - '0');
    setReturnS32(ctx, static_cast<int32_t>(sign * value));
    ctx->pc = getRegU32(ctx, 31);
}
