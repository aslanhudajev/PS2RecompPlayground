#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sitofp
// Address: 0x14c460 - 0x14c518
void sitofp_0x14c460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sitofp");


    ctx->pc = 0x14c460u;

    // 0x14c460: 0x27bdffe0
    ctx->pc = 0x14c460u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14c464: 0x24020003
    ctx->pc = 0x14c464u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x14c468: 0x41fc2
    ctx->pc = 0x14c468u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 4), 31));
    // 0x14c46c: 0xffbf0010
    ctx->pc = 0x14c46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14c470: 0xafa20000
    ctx->pc = 0x14c470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x14c474: 0x14800004
    ctx->pc = 0x14C474u;
    {
        const bool branch_taken_0x14c474 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x14C478u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x14c474) {
            ctx->pc = 0x14C488u;
            goto label_14c488;
        }
    }
    ctx->pc = 0x14C47Cu;
    // 0x14c47c: 0x24020002
    ctx->pc = 0x14c47cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x14c480: 0x10000020
    ctx->pc = 0x14C480u;
    {
        const bool branch_taken_0x14c480 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C484u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x14c480) {
            ctx->pc = 0x14C504u;
            goto label_14c504;
        }
    }
    ctx->pc = 0x14C488u;
label_14c488:
    // 0x14c488: 0x2402001e
    ctx->pc = 0x14c488u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
    // 0x14c48c: 0x1060000a
    ctx->pc = 0x14C48Cu;
    {
        const bool branch_taken_0x14c48c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C490u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x14c48c) {
            ctx->pc = 0x14C4B8u;
            goto label_14c4b8;
        }
    }
    ctx->pc = 0x14C494u;
    // 0x14c494: 0x3c028000
    ctx->pc = 0x14c494u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x14c498: 0x14820005
    ctx->pc = 0x14C498u;
    {
        const bool branch_taken_0x14c498 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x14C49Cu;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        if (branch_taken_0x14c498) {
            ctx->pc = 0x14C4B0u;
            goto label_14c4b0;
        }
    }
    ctx->pc = 0x14C4A0u;
    // 0x14c4a0: 0x3c01cf00
    ctx->pc = 0x14c4a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52992 << 16));
    // 0x14c4a4: 0x44810000
    ctx->pc = 0x14c4a4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x14c4a8: 0x10000019
    ctx->pc = 0x14C4A8u;
    {
        const bool branch_taken_0x14c4a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C4ACu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x14c4a8) {
            ctx->pc = 0x14C510u;
            goto label_14c510;
        }
    }
    ctx->pc = 0x14C4B0u;
label_14c4b0:
    // 0x14c4b0: 0x10000002
    ctx->pc = 0x14C4B0u;
    {
        const bool branch_taken_0x14c4b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C4B4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x14c4b0) {
            ctx->pc = 0x14C4BCu;
            goto label_14c4bc;
        }
    }
    ctx->pc = 0x14C4B8u;
label_14c4b8:
    // 0x14c4b8: 0xafa4000c
    ctx->pc = 0x14c4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
label_14c4bc:
    // 0x14c4bc: 0x8fa6000c
    ctx->pc = 0x14c4bcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x14c4c0: 0x3c023fff
    ctx->pc = 0x14c4c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16383 << 16));
    // 0x14c4c4: 0x3442ffff
    ctx->pc = 0x14c4c4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x14c4c8: 0x46102b
    ctx->pc = 0x14c4c8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x14c4cc: 0x1440000d
    ctx->pc = 0x14C4CCu;
    {
        const bool branch_taken_0x14c4cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14C4D0u;
        SET_GPR_U32(ctx, 5, ((uint32_t)16383 << 16));
        if (branch_taken_0x14c4cc) {
            ctx->pc = 0x14C504u;
            goto label_14c504;
        }
    }
    ctx->pc = 0x14C4D4u;
    // 0x14c4d4: 0x8fa40008
    ctx->pc = 0x14c4d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14c4d8: 0x34a5ffff
    ctx->pc = 0x14c4d8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x14c4dc: 0x0
    ctx->pc = 0x14c4dcu;
    // NOP
label_14c4e0:
    // Fix: Same as litodp - when mantissa r6==0, r3 stays 0 and loop never exits.
    if (GPR_U32(ctx, 6) == 0) {
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), 2);   // type = zero
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), 0);   // sign = positive
        ctx->pc = 0x14C504u;
        goto label_14c504;
    }
    // 0x14c4e0: 0x61840
    ctx->pc = 0x14c4e0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 1));
    // 0x14c4e4: 0x2484ffff
    ctx->pc = 0x14c4e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x14c4e8: 0x60302d
    ctx->pc = 0x14c4e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c4ec: 0xa3102b
    ctx->pc = 0x14c4ecu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x14c4f0: 0x0
    ctx->pc = 0x14c4f0u;
    // NOP
    // 0x14c4f4: 0x1040fffa
    ctx->pc = 0x14C4F4u;
    {
        const bool branch_taken_0x14c4f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x14c4f4) {
            ctx->pc = 0x14C4E0u;
            goto label_14c4e0;
        }
    }
    ctx->pc = 0x14C4FCu;
    // 0x14c4fc: 0xafa40008
    ctx->pc = 0x14c4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x14c500: 0xafa3000c
    ctx->pc = 0x14c500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_14c504:
    // 0x14c504: 0xc052ec2
    ctx->pc = 0x14C504u;
    SET_GPR_U32(ctx, 31, 0x14C50Cu);
    ctx->pc = 0x14C508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14BB08u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_f_0x14bb08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C50Cu; }
        else if (ctx->pc != 0x14C50Cu) { ctx->pc = 0x14C50Cu; }
    }
    if (ctx->pc != 0x14C50Cu) { return; }
    ctx->pc = 0x14C50Cu;
    // 0x14c50c: 0xdfbf0010
    ctx->pc = 0x14c50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14c510:
    // 0x14c510: 0x3e00008
    ctx->pc = 0x14C510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C514u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14C488u: goto label_14c488;
            case 0x14C4B0u: goto label_14c4b0;
            case 0x14C4B8u: goto label_14c4b8;
            case 0x14C4BCu: goto label_14c4bc;
            case 0x14C4E0u: goto label_14c4e0;
            case 0x14C504u: goto label_14c504;
            case 0x14C510u: goto label_14c510;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14C518u;
}
