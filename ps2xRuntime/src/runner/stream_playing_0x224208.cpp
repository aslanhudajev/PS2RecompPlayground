#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// stream_playing (dcs_ps2.c): sreg 0x1f bit0 = playing; last/_resp callback on stop.
void stream_playing_0x224208(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    constexpr uint32_t kLastAddr = 0x3c3c0aac;
    constexpr uint32_t kRespAddr = 0x3c3c0f70;

    uint32_t uVar1 = runtime ? runtime->memory().iop().getSReg(0x1f) : 0;
    uint32_t playing = uVar1 & 1u;

    uint32_t last = READ32(kLastAddr);
    uint32_t resp = READ32(kRespAddr);

    if (last != 0 && playing == 0 && resp != 0) {
        uint32_t callback = READ32(resp + 0x10);
        if (callback != 0 && runtime && runtime->hasFunction(callback)) {
            R5900Context tmp = *ctx;
            tmp.pc = callback;
            SET_GPR_U32(&tmp, 4, resp);
            SET_GPR_U32(&tmp, 5, 0);
            SET_GPR_U32(&tmp, 6, 0);
            SET_GPR_U32(&tmp, 7, 0);
            PS2Runtime::RecompiledFunction func = runtime->lookupFunction(callback);
            func(rdram, &tmp, runtime);
        }
        WRITE32(kRespAddr, 0);
    }

    WRITE32(kLastAddr, playing);
    SET_GPR_U32(ctx, 2, playing);
    ctx->pc = GPR_U32(ctx, 31);
}
