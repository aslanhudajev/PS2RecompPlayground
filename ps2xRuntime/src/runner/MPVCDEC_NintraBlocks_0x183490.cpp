#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVCDEC_NintraBlocks
// Address: 0x183490 - 0x18358c
void MPVCDEC_NintraBlocks_0x183490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVCDEC_NintraBlocks");


    ctx->pc = 0x183490u;

    // 0x183490: 0x27bdff60
    ctx->pc = 0x183490u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x183494: 0x24020001
    ctx->pc = 0x183494u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x183498: 0xffb60080
    ctx->pc = 0x183498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x18349c: 0xffb50070
    ctx->pc = 0x18349cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x1834a0: 0xffb40060
    ctx->pc = 0x1834a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1834a4: 0x3a0a82d
    ctx->pc = 0x1834a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1834a8: 0xffb30050
    ctx->pc = 0x1834a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1834ac: 0x24140005
    ctx->pc = 0x1834acu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1834b0: 0xffb20040
    ctx->pc = 0x1834b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1834b4: 0xffb10030
    ctx->pc = 0x1834b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1834b8: 0x80902d
    ctx->pc = 0x1834b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1834bc: 0xffb00020
    ctx->pc = 0x1834bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1834c0: 0x2651003c
    ctx->pc = 0x1834c0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 60));
    // 0x1834c4: 0xffbf0090
    ctx->pc = 0x1834c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1834c8: 0x26440620
    ctx->pc = 0x1834c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 1568));
    // 0x1834cc: 0xae240020
    ctx->pc = 0x1834ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 4));
    // 0x1834d0: 0x265302b8
    ctx->pc = 0x1834d0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 18), 696));
    // 0x1834d4: 0x8e430250
    ctx->pc = 0x1834d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 592)));
    // 0x1834d8: 0xae220030
    ctx->pc = 0x1834d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x1834dc: 0xae230024
    ctx->pc = 0x1834dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x1834e0: 0x8e4202a8
    ctx->pc = 0x1834e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 680)));
    // 0x1834e4: 0x28080
    ctx->pc = 0x1834e4u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1834e8: 0x200b02d
    ctx->pc = 0x1834e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1834ec: 0x0
    ctx->pc = 0x1834ecu;
    // NOP
label_1834f0:
    // 0x1834f0: 0x6030008
    ctx->pc = 0x1834F0u;
    {
        const bool branch_taken_0x1834f0 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1834f0) {
            ctx->pc = 0x1834F4u;
            SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x183514u;
            goto label_183514;
        }
    }
    ctx->pc = 0x1834F8u;
    // 0x1834f8: 0x8e620000
    ctx->pc = 0x1834f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1834fc: 0x240202d
    ctx->pc = 0x1834fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183500: 0x220282d
    ctx->pc = 0x183500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183504: 0xc060b1a
    ctx->pc = 0x183504u;
    SET_GPR_U32(ctx, 31, 0x18350Cu);
    ctx->pc = 0x183508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x182C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVBDEC_NintraBlock_0x182c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18350Cu; }
        else if (ctx->pc != 0x18350Cu) { ctx->pc = 0x18350Cu; }
    }
    if (ctx->pc != 0x18350Cu) { return; }
    ctx->pc = 0x18350Cu;
    // 0x18350c: 0xaea20000
    ctx->pc = 0x18350cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x183510: 0x108040
    ctx->pc = 0x183510u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 1));
label_183514:
    // 0x183514: 0x26b50004
    ctx->pc = 0x183514u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4));
    // 0x183518: 0x2694ffff
    ctx->pc = 0x183518u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x18351c: 0x681fff4
    ctx->pc = 0x18351Cu;
    {
        const bool branch_taken_0x18351c = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x183520u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4));
        if (branch_taken_0x18351c) {
            ctx->pc = 0x1834F0u;
            goto label_1834f0;
        }
    }
    ctx->pc = 0x183524u;
    // 0x183524: 0x2c0802d
    ctx->pc = 0x183524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183528: 0x265202b8
    ctx->pc = 0x183528u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 696));
    // 0x18352c: 0x3a0882d
    ctx->pc = 0x18352cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183530: 0x24140005
    ctx->pc = 0x183530u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 5));
    // 0x183534: 0x0
    ctx->pc = 0x183534u;
    // NOP
label_183538:
    // 0x183538: 0x6030005
    ctx->pc = 0x183538u;
    {
        const bool branch_taken_0x183538 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x183538) {
            ctx->pc = 0x18353Cu;
            SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x183550u;
            goto label_183550;
        }
    }
    ctx->pc = 0x183540u;
    // 0x183540: 0x8e440000
    ctx->pc = 0x183540u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x183544: 0xc05fb5a
    ctx->pc = 0x183544u;
    SET_GPR_U32(ctx, 31, 0x18354Cu);
    ctx->pc = 0x183548u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x17ED68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DCT_IsrTrans_0x17ed68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18354Cu; }
        else if (ctx->pc != 0x18354Cu) { ctx->pc = 0x18354Cu; }
    }
    if (ctx->pc != 0x18354Cu) { return; }
    ctx->pc = 0x18354Cu;
    // 0x18354c: 0x108040
    ctx->pc = 0x18354cu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 1));
label_183550:
    // 0x183550: 0x26310004
    ctx->pc = 0x183550u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
    // 0x183554: 0x2694ffff
    ctx->pc = 0x183554u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x183558: 0x681fff7
    ctx->pc = 0x183558u;
    {
        const bool branch_taken_0x183558 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x18355Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
        if (branch_taken_0x183558) {
            ctx->pc = 0x183538u;
            goto label_183538;
        }
    }
    ctx->pc = 0x183560u;
    // 0x183560: 0xdfbf0090
    ctx->pc = 0x183560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x183564: 0x102d
    ctx->pc = 0x183564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183568: 0xdfb60080
    ctx->pc = 0x183568u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18356c: 0xdfb50070
    ctx->pc = 0x18356cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x183570: 0xdfb40060
    ctx->pc = 0x183570u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x183574: 0xdfb30050
    ctx->pc = 0x183574u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x183578: 0xdfb20040
    ctx->pc = 0x183578u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18357c: 0xdfb10030
    ctx->pc = 0x18357cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x183580: 0xdfb00020
    ctx->pc = 0x183580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183584: 0x3e00008
    ctx->pc = 0x183584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183588u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1834F0u: goto label_1834f0;
            case 0x183514u: goto label_183514;
            case 0x183538u: goto label_183538;
            case 0x183550u: goto label_183550;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18358Cu;
}
