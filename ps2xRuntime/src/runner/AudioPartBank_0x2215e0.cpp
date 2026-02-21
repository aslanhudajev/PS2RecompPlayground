#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioPartBank
// Address: 0x2215e0 - 0x221614
void AudioPartBank_0x2215e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2215e0u;

    // 0x2215e0: 0x27bdfff0
    ctx->pc = 0x2215e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2215e4: 0xffbf0000
    ctx->pc = 0x2215e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2215e8: 0xc0880b4
    ctx->pc = 0x2215E8u;
    SET_GPR_U32(ctx, 31, 0x2215F0u);
    ctx->pc = 0x2202D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindPart_0x2202d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2215F0u; }
    }
    if (ctx->pc != 0x2215F0u) { return; }
    ctx->pc = 0x2215F0u;
    // 0x2215f0: 0x3c030032
    ctx->pc = 0x2215f0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x2215f4: 0x8c63fe28
    ctx->pc = 0x2215f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294966824)));
    // 0x2215f8: 0x24040124
    ctx->pc = 0x2215f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 292));
    // 0x2215fc: 0x441018
    ctx->pc = 0x2215fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x221600: 0x621821
    ctx->pc = 0x221600u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x221604: 0x8c620130
    ctx->pc = 0x221604u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x221608: 0xdfbf0000
    ctx->pc = 0x221608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22160c: 0x3e00008
    ctx->pc = 0x22160Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221610u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x221614u;
}
