#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_recompiled_functions.h"
#include <cstring>
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Ghidra decomp: p[0xe6]=param2; if param2<5 call jumptable else set e4 and ctx+0x10
static constexpr uint32_t kClearModeJumptable = 0x0021e220u;

void sceHiGsCtxSetClearMode_0x1133d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsCtxSetClearMode_0x1133d8");
#endif
    uint32_t ctxAddr = GPR_U32(ctx, 4);
    uint32_t param2 = GPR_U32(ctx, 5);
    uint8_t* p = getMemPtr(rdram, ctxAddr);
    if (!p) {
        setReturnU32(ctx, 0u);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }
    p[0xe6] = static_cast<uint8_t>(param2);
    if (param2 < 5u && runtime) {
        uint32_t tableEntry = FAST_READ32(kClearModeJumptable + param2 * 4u);
        if (tableEntry != 0u && runtime->hasFunction(tableEntry)) {
            R5900Context tmp = *ctx;
            SET_GPR_U32(&tmp, 4, ctxAddr);
            tmp.pc = tableEntry;
            auto fn = runtime->lookupFunction(tableEntry);
            fn(rdram, &tmp, runtime);
            setReturnU32(ctx, getRegU32(&tmp, 2));
            ctx->pc = getRegU32(ctx, 31);
            return;
        }
    }
    if (param2 >= 5u) {
        uint16_t e4;
        std::memcpy(&e4, p + 0xe4, 2);
        e4 |= 0x100u;
        std::memcpy(p + 0xe4, &e4, 2);
        uint64_t v10;
        std::memcpy(&v10, p + 0x10, 8);
        v10 &= 0xfffffffffffffffeULL;
        std::memcpy(p + 0x10, &v10, 8);
    }
    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}
