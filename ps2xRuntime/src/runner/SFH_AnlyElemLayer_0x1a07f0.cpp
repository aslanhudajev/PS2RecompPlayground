#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_AnlyElemLayer
// Address: 0x1a07f0 - 0x1a0868
void SFH_AnlyElemLayer_0x1a07f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_AnlyElemLayer");


    ctx->pc = 0x1a07f0u;

    // 0x1a07f0: 0x27bdffc0
    ctx->pc = 0x1a07f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a07f4: 0xffb10010
    ctx->pc = 0x1a07f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a07f8: 0xffb20020
    ctx->pc = 0x1a07f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a07fc: 0x30b100ff
    ctx->pc = 0x1a07fcu;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 5), 255));
    // 0x1a0800: 0xffb00000
    ctx->pc = 0x1a0800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0804: 0xc0902d
    ctx->pc = 0x1a0804u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0808: 0xffbf0030
    ctx->pc = 0x1a0808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a080c: 0xc0681d0
    ctx->pc = 0x1A080Cu;
    SET_GPR_U32(ctx, 31, 0x1A0814u);
    ctx->pc = 0x1A0810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0740u;
    {
        const uint32_t __entryPc = ctx->pc;
        getElemInfPtr_0x1a0740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0814u; }
        else if (ctx->pc != 0x1A0814u) { ctx->pc = 0x1A0814u; }
    }
    if (ctx->pc != 0x1A0814u) { return; }
    ctx->pc = 0x1A0814u;
    // 0x1a0814: 0x40802d
    ctx->pc = 0x1a0814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0818: 0x1200000d
    ctx->pc = 0x1A0818u;
    {
        const bool branch_taken_0x1a0818 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A081Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0818) {
            ctx->pc = 0x1A0850u;
            goto label_1a0850;
        }
    }
    ctx->pc = 0x1A0820u;
    // 0x1a0820: 0xc0683c8
    ctx->pc = 0x1A0820u;
    SET_GPR_U32(ctx, 31, 0x1A0828u);
    ctx->pc = 0x1A0824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        chkStmId_0x1a0f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0828u; }
        else if (ctx->pc != 0x1A0828u) { ctx->pc = 0x1A0828u; }
    }
    if (ctx->pc != 0x1A0828u) { return; }
    ctx->pc = 0x1A0828u;
    // 0x1a0828: 0x240300c0
    ctx->pc = 0x1a0828u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 192));
    // 0x1a082c: 0x14430008
    ctx->pc = 0x1A082Cu;
    {
        const bool branch_taken_0x1a082c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1A0830u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a082c) {
            ctx->pc = 0x1A0850u;
            goto label_1a0850;
        }
    }
    ctx->pc = 0x1A0834u;
    // 0x1a0834: 0x92030019
    ctx->pc = 0x1a0834u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x1a0838: 0x24020001
    ctx->pc = 0x1a0838u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a083c: 0x14620004
    ctx->pc = 0x1A083Cu;
    {
        const bool branch_taken_0x1a083c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1A0840u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a083c) {
            ctx->pc = 0x1A0850u;
            goto label_1a0850;
        }
    }
    ctx->pc = 0x1A0844u;
    // 0x1a0844: 0x9203001a
    ctx->pc = 0x1a0844u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x1a0848: 0x24020001
    ctx->pc = 0x1a0848u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a084c: 0xae430000
    ctx->pc = 0x1a084cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1a0850:
    // 0x1a0850: 0xdfbf0030
    ctx->pc = 0x1a0850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0854: 0xdfb20020
    ctx->pc = 0x1a0854u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0858: 0xdfb10010
    ctx->pc = 0x1a0858u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a085c: 0xdfb00000
    ctx->pc = 0x1a085cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0860: 0x3e00008
    ctx->pc = 0x1A0860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0864u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0850u: goto label_1a0850;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0868u;
}
