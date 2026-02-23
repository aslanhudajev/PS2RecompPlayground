#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: frombcd
// Address: 0x1a1490 - 0x1a14e8
void frombcd_0x1a1490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("frombcd");


    ctx->pc = 0x1a1490u;

    // 0x1a1490: 0x27bdffe0
    ctx->pc = 0x1a1490u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a1494: 0xffb00000
    ctx->pc = 0x1a1494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a1498: 0x309000ff
    ctx->pc = 0x1a1498u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 4), 255));
    // 0x1a149c: 0x2e02009a
    ctx->pc = 0x1a149cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 154));
    // 0x1a14a0: 0x14400007
    ctx->pc = 0x1A14A0u;
    {
        const bool branch_taken_0x1a14a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A14A4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x1a14a0) {
            ctx->pc = 0x1A14C0u;
            goto label_1a14c0;
        }
    }
    ctx->pc = 0x1A14A8u;
    // 0x1a14a8: 0x3c04002c
    ctx->pc = 0x1a14a8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1a14ac: 0x3c06002c
    ctx->pc = 0x1a14acu;
    SET_GPR_U32(ctx, 6, ((uint32_t)44 << 16));
    // 0x1a14b0: 0x2484d820
    ctx->pc = 0x1a14b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957088));
    // 0x1a14b4: 0x24c6d838
    ctx->pc = 0x1a14b4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294957112));
    // 0x1a14b8: 0xc05003c
    ctx->pc = 0x1A14B8u;
    SET_GPR_U32(ctx, 31, 0x1A14C0u);
    ctx->pc = 0x1A14BCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 294));
    ctx->pc = 0x1400F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___assert_0x1400f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A14C0u; }
        else if (ctx->pc != 0x1A14C0u) { ctx->pc = 0x1A14C0u; }
    }
    if (ctx->pc != 0x1A14C0u) { return; }
    ctx->pc = 0x1A14C0u;
label_1a14c0:
    // 0x1a14c0: 0x101102
    ctx->pc = 0x1a14c0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 16), 4));
    // 0x1a14c4: 0x24030006
    ctx->pc = 0x1a14c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a14c8: 0x430018
    ctx->pc = 0x1a14c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x1a14cc: 0xdfbf0010
    ctx->pc = 0x1a14ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a14d0: 0x1012
    ctx->pc = 0x1a14d0u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x1a14d4: 0x2021023
    ctx->pc = 0x1a14d4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a14d8: 0xdfb00000
    ctx->pc = 0x1a14d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a14dc: 0x304200ff
    ctx->pc = 0x1a14dcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1a14e0: 0x3e00008
    ctx->pc = 0x1A14E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A14E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A14C0u: goto label_1a14c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A14E8u;
}
