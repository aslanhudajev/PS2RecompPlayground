#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfsee_IsVideoAnalyzing
// Address: 0x19c870 - 0x19c8ec
void sfsee_IsVideoAnalyzing_0x19c870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfsee_IsVideoAnalyzing");


    ctx->pc = 0x19c870u;

    // 0x19c870: 0x27bdffc0
    ctx->pc = 0x19c870u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19c874: 0xffb20020
    ctx->pc = 0x19c874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19c878: 0xffb00000
    ctx->pc = 0x19c878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19c87c: 0xa0902d
    ctx->pc = 0x19c87cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c880: 0xffb10010
    ctx->pc = 0x19c880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19c884: 0x80802d
    ctx->pc = 0x19c884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c888: 0xffbf0030
    ctx->pc = 0x19c888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19c88c: 0xc0882d
    ctx->pc = 0x19c88cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c890: 0xc067cf6
    ctx->pc = 0x19C890u;
    SET_GPR_U32(ctx, 31, 0x19C898u);
    ctx->pc = 0x19C894u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x19F3D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_IsSetup_0x19f3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C898u; }
        else if (ctx->pc != 0x19C898u) { ctx->pc = 0x19C898u; }
    }
    if (ctx->pc != 0x19C898u) { return; }
    ctx->pc = 0x19C898u;
    // 0x19c898: 0x1040000c
    ctx->pc = 0x19C898u;
    {
        const bool branch_taken_0x19c898 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19C89Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19c898) {
            ctx->pc = 0x19C8CCu;
            goto label_19c8cc;
        }
    }
    ctx->pc = 0x19C8A0u;
    // 0x19c8a0: 0xc0674c2
    ctx->pc = 0x19C8A0u;
    SET_GPR_U32(ctx, 31, 0x19C8A8u);
    ctx->pc = 0x19C8A4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C8A8u; }
        else if (ctx->pc != 0x19C8A8u) { ctx->pc = 0x19C8A8u; }
    }
    if (ctx->pc != 0x19C8A8u) { return; }
    ctx->pc = 0x19C8A8u;
    // 0x19c8a8: 0x40282d
    ctx->pc = 0x19c8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c8ac: 0x24020001
    ctx->pc = 0x19c8acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c8b0: 0x54a20007
    ctx->pc = 0x19C8B0u;
    {
        const bool branch_taken_0x19c8b0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        if (branch_taken_0x19c8b0) {
            ctx->pc = 0x19C8B4u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x19C8D0u;
            goto label_19c8d0;
        }
    }
    ctx->pc = 0x19C8B8u;
    // 0x19c8b8: 0xae250000
    ctx->pc = 0x19c8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x19c8bc: 0x8e420000
    ctx->pc = 0x19c8bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19c8c0: 0x2280b
    ctx->pc = 0x19c8c0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 0));
    // 0x19c8c4: 0x10000003
    ctx->pc = 0x19C8C4u;
    {
        const bool branch_taken_0x19c8c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19C8C8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19c8c4) {
            ctx->pc = 0x19C8D4u;
            goto label_19c8d4;
        }
    }
    ctx->pc = 0x19C8CCu;
label_19c8cc:
    // 0x19c8cc: 0xae200000
    ctx->pc = 0x19c8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_19c8d0:
    // 0x19c8d0: 0x102d
    ctx->pc = 0x19c8d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c8d4:
    // 0x19c8d4: 0xdfbf0030
    ctx->pc = 0x19c8d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19c8d8: 0xdfb20020
    ctx->pc = 0x19c8d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c8dc: 0xdfb10010
    ctx->pc = 0x19c8dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c8e0: 0xdfb00000
    ctx->pc = 0x19c8e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c8e4: 0x3e00008
    ctx->pc = 0x19C8E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C8E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19C8CCu: goto label_19c8cc;
            case 0x19C8D0u: goto label_19c8d0;
            case 0x19C8D4u: goto label_19c8d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19C8ECu;
}
