#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: rpsVBlankIntrTrap
// Address: 0x2d4648 - 0x2d47a0
void rpsVBlankIntrTrap_0x2d4648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d4648u;

    // 0x2d4648: 0x27bdffc0
    ctx->pc = 0x2d4648u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d464c: 0xffbf0030
    ctx->pc = 0x2d464cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d4650: 0xffb20020
    ctx->pc = 0x2d4650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d4654: 0xffb10010
    ctx->pc = 0x2d4654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d4658: 0xffb00000
    ctx->pc = 0x2d4658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d465c: 0x3c020036
    ctx->pc = 0x2d465cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2d4660: 0x8c45dee0
    ctx->pc = 0x2d4660u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2d4664: 0x3c04003a
    ctx->pc = 0x2d4664u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2d4668: 0x24020001
    ctx->pc = 0x2d4668u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d466c: 0xac8222fc
    ctx->pc = 0x2d466cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8956), GPR_U32(ctx, 2));
    // 0x2d4670: 0x3c03003a
    ctx->pc = 0x2d4670u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2d4674: 0x8c6222f8
    ctx->pc = 0x2d4674u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8952)));
    // 0x2d4678: 0x24420001
    ctx->pc = 0x2d4678u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d467c: 0xac6222f8
    ctx->pc = 0x2d467cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8952), GPR_U32(ctx, 2));
    // 0x2d4680: 0x3c02003a
    ctx->pc = 0x2d4680u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d4684: 0x8c422d90
    ctx->pc = 0x2d4684u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 11664)));
    // 0x2d4688: 0x10400005
    ctx->pc = 0x2D4688u;
    {
        const bool branch_taken_0x2d4688 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D468Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2d4688) {
            ctx->pc = 0x2D46A0u;
            goto label_2d46a0;
        }
    }
    ctx->pc = 0x2D4690u;
    // 0x2d4690: 0xc0b7136
    ctx->pc = 0x2D4690u;
    SET_GPR_U32(ctx, 31, 0x2D4698u);
    ctx->pc = 0x2D4694u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8956), GPR_U32(ctx, 2));
    ctx->pc = 0x2DC4D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        vblank_servemovies_0x2dc4d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4698u; }
    }
    if (ctx->pc != 0x2D4698u) { return; }
    ctx->pc = 0x2D4698u;
    // 0x2d4698: 0x1000002f
    ctx->pc = 0x2D4698u;
    {
        const bool branch_taken_0x2d4698 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D469Cu;
        SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
        if (branch_taken_0x2d4698) {
            ctx->pc = 0x2D4758u;
            goto label_2d4758;
        }
    }
    ctx->pc = 0x2D46A0u;
label_2d46a0:
    // 0x2d46a0: 0x3c03003a
    ctx->pc = 0x2d46a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2d46a4: 0x24020003
    ctx->pc = 0x2d46a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d46a8: 0x10a0000f
    ctx->pc = 0x2D46A8u;
    {
        const bool branch_taken_0x2d46a8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D46ACu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 8956), GPR_U32(ctx, 2));
        if (branch_taken_0x2d46a8) {
            ctx->pc = 0x2D46E8u;
            goto label_2d46e8;
        }
    }
    ctx->pc = 0x2D46B0u;
    // 0x2d46b0: 0x8ca30010
    ctx->pc = 0x2d46b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2d46b4: 0x1060000b
    ctx->pc = 0x2D46B4u;
    {
        const bool branch_taken_0x2d46b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D46B8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)4608 << 16));
        if (branch_taken_0x2d46b4) {
            ctx->pc = 0x2D46E4u;
            goto label_2d46e4;
        }
    }
    ctx->pc = 0x2D46BCu;
    // 0x2d46bc: 0x8c620008
    ctx->pc = 0x2d46bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2d46c0: 0x38420001
    ctx->pc = 0x2d46c0u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x2d46c4: 0xac620008
    ctx->pc = 0x2d46c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2d46c8: 0x8ca30008
    ctx->pc = 0x2d46c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d46cc: 0x8ca20010
    ctx->pc = 0x2d46ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2d46d0: 0x8c420008
    ctx->pc = 0x2d46d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d46d4: 0x210c0
    ctx->pc = 0x2d46d4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d46d8: 0x621821
    ctx->pc = 0x2d46d8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d46dc: 0xdc6201c0
    ctx->pc = 0x2d46dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 448)));
    // 0x2d46e0: 0xfc820000
    ctx->pc = 0x2d46e0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_2d46e4:
    // 0x2d46e4: 0x3c03003a
    ctx->pc = 0x2d46e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
label_2d46e8:
    // 0x2d46e8: 0x24020004
    ctx->pc = 0x2d46e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d46ec: 0xac6222fc
    ctx->pc = 0x2d46ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8956), GPR_U32(ctx, 2));
    // 0x2d46f0: 0x3c120038
    ctx->pc = 0x2d46f0u;
    SET_GPR_U32(ctx, 18, ((uint32_t)56 << 16));
    // 0x2d46f4: 0x8e44b17c
    ctx->pc = 0x2d46f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4294947196)));
    // 0x2d46f8: 0x1080000d
    ctx->pc = 0x2D46F8u;
    {
        const bool branch_taken_0x2d46f8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D46FCu;
        SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
        if (branch_taken_0x2d46f8) {
            ctx->pc = 0x2D4730u;
            goto label_2d4730;
        }
    }
    ctx->pc = 0x2D4700u;
    // 0x2d4700: 0x3c11003a
    ctx->pc = 0x2d4700u;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x2d4704: 0x8e0222f8
    ctx->pc = 0x2d4704u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8952)));
    // 0x2d4708: 0x8e232300
    ctx->pc = 0x2d4708u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8960)));
    // 0x2d470c: 0x431023
    ctx->pc = 0x2d470cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d4710: 0x2c420002
    ctx->pc = 0x2d4710u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x2d4714: 0x14400007
    ctx->pc = 0x2D4714u;
    {
        const bool branch_taken_0x2d4714 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D4718u;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        if (branch_taken_0x2d4714) {
            ctx->pc = 0x2D4734u;
            goto label_2d4734;
        }
    }
    ctx->pc = 0x2D471Cu;
    // 0x2d471c: 0xc0aab98
    ctx->pc = 0x2D471Cu;
    SET_GPR_U32(ctx, 31, 0x2D4724u);
    ctx->pc = 0x2D4720u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    ctx->pc = 0x2AAE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        ipbSwapBuffer_0x2aae60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4724u; }
    }
    if (ctx->pc != 0x2D4724u) { return; }
    ctx->pc = 0x2D4724u;
    // 0x2d4724: 0xae40b17c
    ctx->pc = 0x2d4724u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294947196), GPR_U32(ctx, 0));
    // 0x2d4728: 0x8e0222f8
    ctx->pc = 0x2d4728u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8952)));
    // 0x2d472c: 0xae222300
    ctx->pc = 0x2d472cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8960), GPR_U32(ctx, 2));
label_2d4730:
    // 0x2d4730: 0x3c03003a
    ctx->pc = 0x2d4730u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
label_2d4734:
    // 0x2d4734: 0x24020005
    ctx->pc = 0x2d4734u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d4738: 0xac6222fc
    ctx->pc = 0x2d4738u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8956), GPR_U32(ctx, 2));
    // 0x2d473c: 0x3c020037
    ctx->pc = 0x2d473cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2d4740: 0x8c428330
    ctx->pc = 0x2d4740u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294935344)));
    // 0x2d4744: 0x8c420000
    ctx->pc = 0x2d4744u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d4748: 0x10400003
    ctx->pc = 0x2D4748u;
    {
        const bool branch_taken_0x2d4748 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D474Cu;
        SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
        if (branch_taken_0x2d4748) {
            ctx->pc = 0x2D4758u;
            goto label_2d4758;
        }
    }
    ctx->pc = 0x2D4750u;
    // 0x2d4750: 0xc0aab7a
    ctx->pc = 0x2D4750u;
    SET_GPR_U32(ctx, 31, 0x2D4758u);
    ctx->pc = 0x2AADE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ipbDebugShowBuffer_0x2aade8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4758u; }
    }
    if (ctx->pc != 0x2D4758u) { return; }
    ctx->pc = 0x2D4758u;
label_2d4758:
    // 0x2d4758: 0x3c03003a
    ctx->pc = 0x2d4758u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2d475c: 0x24020001
    ctx->pc = 0x2d475cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4760: 0xac62239c
    ctx->pc = 0x2d4760u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9116), GPR_U32(ctx, 2));
    // 0x2d4764: 0x24020014
    ctx->pc = 0x2d4764u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x2d4768: 0xae0222fc
    ctx->pc = 0x2d4768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8956), GPR_U32(ctx, 2));
    // 0x2d476c: 0x3c02003a
    ctx->pc = 0x2d476cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d4770: 0xc0c0d84
    ctx->pc = 0x2D4770u;
    SET_GPR_U32(ctx, 31, 0x2D4778u);
    ctx->pc = 0x2D4774u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 9104)));
    ctx->pc = 0x303610u;
    {
        const uint32_t __entryPc = ctx->pc;
        iSignalSema_0x303610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4778u; }
    }
    if (ctx->pc != 0x2D4778u) { return; }
    ctx->pc = 0x2D4778u;
    // 0x2d4778: 0xf
    ctx->pc = 0x2d4778u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2d477c: 0x42000038
    ctx->pc = 0x2d477cu;
    ctx->cop0_status |= 0x10000; // EI: set EIE (R5900)
    // 0x2d4780: 0xae0022fc
    ctx->pc = 0x2d4780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8956), GPR_U32(ctx, 0));
    // 0x2d4784: 0x102d
    ctx->pc = 0x2d4784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4788: 0xdfbf0030
    ctx->pc = 0x2d4788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d478c: 0xdfb20020
    ctx->pc = 0x2d478cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4790: 0xdfb10010
    ctx->pc = 0x2d4790u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4794: 0xdfb00000
    ctx->pc = 0x2d4794u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4798: 0x3e00008
    ctx->pc = 0x2D4798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D479Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D46A0u: goto label_2d46a0;
            case 0x2D46E4u: goto label_2d46e4;
            case 0x2D46E8u: goto label_2d46e8;
            case 0x2D4730u: goto label_2d4730;
            case 0x2D4734u: goto label_2d4734;
            case 0x2D4758u: goto label_2d4758;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D47A0u;
}
