#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_IsDrawTime
// Address: 0x19e868 - 0x19e91c
void SFD_IsDrawTime_0x19e868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_IsDrawTime");


    ctx->pc = 0x19e868u;

    // 0x19e868: 0x27bdffb0
    ctx->pc = 0x19e868u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19e86c: 0xffb10010
    ctx->pc = 0x19e86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19e870: 0xffb30030
    ctx->pc = 0x19e870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x19e874: 0xe0882d
    ctx->pc = 0x19e874u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e878: 0xffb20020
    ctx->pc = 0x19e878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19e87c: 0xc0982d
    ctx->pc = 0x19e87cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e880: 0xffb00000
    ctx->pc = 0x19e880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19e884: 0xa0902d
    ctx->pc = 0x19e884u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e888: 0xffbf0040
    ctx->pc = 0x19e888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19e88c: 0x80802d
    ctx->pc = 0x19e88cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e890: 0xc064f1e
    ctx->pc = 0x19E890u;
    SET_GPR_U32(ctx, 31, 0x19E898u);
    ctx->pc = 0x19E894u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E898u; }
        else if (ctx->pc != 0x19E898u) { ctx->pc = 0x19E898u; }
    }
    if (ctx->pc != 0x19E898u) { return; }
    ctx->pc = 0x19E898u;
    // 0x19e898: 0x10400006
    ctx->pc = 0x19E898u;
    {
        const bool branch_taken_0x19e898 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E89Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19e898) {
            ctx->pc = 0x19E8B4u;
            goto label_19e8b4;
        }
    }
    ctx->pc = 0x19E8A0u;
    // 0x19e8a0: 0x3c05ff00
    ctx->pc = 0x19e8a0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19e8a4: 0xc064ea0
    ctx->pc = 0x19E8A4u;
    SET_GPR_U32(ctx, 31, 0x19E8ACu);
    ctx->pc = 0x19E8A8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 294));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E8ACu; }
        else if (ctx->pc != 0x19E8ACu) { ctx->pc = 0x19E8ACu; }
    }
    if (ctx->pc != 0x19E8ACu) { return; }
    ctx->pc = 0x19E8ACu;
    // 0x19e8ac: 0x10000015
    ctx->pc = 0x19E8ACu;
    {
        const bool branch_taken_0x19e8ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E8B0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x19e8ac) {
            ctx->pc = 0x19E904u;
            goto label_19e904;
        }
    }
    ctx->pc = 0x19E8B4u;
label_19e8b4:
    // 0x19e8b4: 0x26040994
    ctx->pc = 0x19e8b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 2452));
    // 0x19e8b8: 0x8c820038
    ctx->pc = 0x19e8b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x19e8bc: 0x54400005
    ctx->pc = 0x19E8BCu;
    {
        const bool branch_taken_0x19e8bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x19e8bc) {
            ctx->pc = 0x19E8C0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->pc = 0x19E8D4u;
            goto label_19e8d4;
        }
    }
    ctx->pc = 0x19E8C4u;
    // 0x19e8c4: 0x24030001
    ctx->pc = 0x19e8c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e8c8: 0x102d
    ctx->pc = 0x19e8c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e8cc: 0x1000000c
    ctx->pc = 0x19E8CCu;
    {
        const bool branch_taken_0x19e8cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E8D0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x19e8cc) {
            ctx->pc = 0x19E900u;
            goto label_19e900;
        }
    }
    ctx->pc = 0x19E8D4u;
label_19e8d4:
    // 0x19e8d4: 0x24020004
    ctx->pc = 0x19e8d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x19e8d8: 0x50620003
    ctx->pc = 0x19E8D8u;
    {
        const bool branch_taken_0x19e8d8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x19e8d8) {
            ctx->pc = 0x19E8DCu;
            SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 180)));
            ctx->pc = 0x19E8E8u;
            goto label_19e8e8;
        }
    }
    ctx->pc = 0x19E8E0u;
    // 0x19e8e0: 0x10000006
    ctx->pc = 0x19E8E0u;
    {
        const bool branch_taken_0x19e8e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E8E4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x19e8e0) {
            ctx->pc = 0x19E8FCu;
            goto label_19e8fc;
        }
    }
    ctx->pc = 0x19E8E8u;
label_19e8e8:
    // 0x19e8e8: 0x240282d
    ctx->pc = 0x19e8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e8ec: 0x200202d
    ctx->pc = 0x19e8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e8f0: 0x260302d
    ctx->pc = 0x19e8f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e8f4: 0xc067a48
    ctx->pc = 0x19E8F4u;
    SET_GPR_U32(ctx, 31, 0x19E8FCu);
    ctx->pc = 0x19E8F8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19E920u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_IsExecTime_0x19e920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E8FCu; }
        else if (ctx->pc != 0x19E8FCu) { ctx->pc = 0x19E8FCu; }
    }
    if (ctx->pc != 0x19E8FCu) { return; }
    ctx->pc = 0x19E8FCu;
label_19e8fc:
    // 0x19e8fc: 0x102d
    ctx->pc = 0x19e8fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e900:
    // 0x19e900: 0xdfbf0040
    ctx->pc = 0x19e900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19e904:
    // 0x19e904: 0xdfb30030
    ctx->pc = 0x19e904u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e908: 0xdfb20020
    ctx->pc = 0x19e908u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e90c: 0xdfb10010
    ctx->pc = 0x19e90cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e910: 0xdfb00000
    ctx->pc = 0x19e910u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e914: 0x3e00008
    ctx->pc = 0x19E914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E918u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E8B4u: goto label_19e8b4;
            case 0x19E8D4u: goto label_19e8d4;
            case 0x19E8E8u: goto label_19e8e8;
            case 0x19E8FCu: goto label_19e8fc;
            case 0x19E900u: goto label_19e900;
            case 0x19E904u: goto label_19e904;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19E91Cu;
}
