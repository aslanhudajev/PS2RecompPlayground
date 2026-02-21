#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _pow5mult
// Address: 0x302708 - 0x302808
void _pow5mult_0x302708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x302708u;

    // 0x302708: 0x27bdffb0
    ctx->pc = 0x302708u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x30270c: 0xffb10010
    ctx->pc = 0x30270cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x302710: 0xffb30030
    ctx->pc = 0x302710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x302714: 0xc0882d
    ctx->pc = 0x302714u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302718: 0xffb20020
    ctx->pc = 0x302718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x30271c: 0x80982d
    ctx->pc = 0x30271cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302720: 0xffbf0040
    ctx->pc = 0x302720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x302724: 0x32230003
    ctx->pc = 0x302724u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 17), 3));
    // 0x302728: 0xffb00000
    ctx->pc = 0x302728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30272c: 0x1060000a
    ctx->pc = 0x30272Cu;
    {
        const bool branch_taken_0x30272c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x302730u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x30272c) {
            ctx->pc = 0x302758u;
            goto label_302758;
        }
    }
    ctx->pc = 0x302734u;
    // 0x302734: 0x2463ffff
    ctx->pc = 0x302734u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x302738: 0x3c02003c
    ctx->pc = 0x302738u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x30273c: 0x2442ac10
    ctx->pc = 0x30273cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294945808));
    // 0x302740: 0x31880
    ctx->pc = 0x302740u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x302744: 0x621821
    ctx->pc = 0x302744u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x302748: 0x8c660000
    ctx->pc = 0x302748u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30274c: 0xc0c083e
    ctx->pc = 0x30274Cu;
    SET_GPR_U32(ctx, 31, 0x302754u);
    ctx->pc = 0x302750u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3020F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x3020f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302754u; }
    }
    if (ctx->pc != 0x302754u) { return; }
    ctx->pc = 0x302754u;
    // 0x302754: 0x40902d
    ctx->pc = 0x302754u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302758:
    // 0x302758: 0x118883
    ctx->pc = 0x302758u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 2));
    // 0x30275c: 0x12200023
    ctx->pc = 0x30275Cu;
    {
        const bool branch_taken_0x30275c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x302760u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x30275c) {
            ctx->pc = 0x3027ECu;
            goto label_3027ec;
        }
    }
    ctx->pc = 0x302764u;
    // 0x302764: 0x8e700048
    ctx->pc = 0x302764u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x302768: 0x16000013
    ctx->pc = 0x302768u;
    {
        const bool branch_taken_0x302768 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x30276Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x302768) {
            ctx->pc = 0x3027B8u;
            goto label_3027b8;
        }
    }
    ctx->pc = 0x302770u;
    // 0x302770: 0x260202d
    ctx->pc = 0x302770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302774: 0xc0c0928
    ctx->pc = 0x302774u;
    SET_GPR_U32(ctx, 31, 0x30277Cu);
    ctx->pc = 0x302778u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 625));
    ctx->pc = 0x3024A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _i2b_0x3024a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30277Cu; }
    }
    if (ctx->pc != 0x30277Cu) { return; }
    ctx->pc = 0x30277Cu;
    // 0x30277c: 0x40802d
    ctx->pc = 0x30277cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302780: 0xae620048
    ctx->pc = 0x302780u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
    // 0x302784: 0x1000000b
    ctx->pc = 0x302784u;
    {
        const bool branch_taken_0x302784 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x302788u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x302784) {
            ctx->pc = 0x3027B4u;
            goto label_3027b4;
        }
    }
    ctx->pc = 0x30278Cu;
    // 0x30278c: 0x0
    ctx->pc = 0x30278cu;
    // NOP
label_302790:
    // 0x302790: 0x54400008
    ctx->pc = 0x302790u;
    {
        const bool branch_taken_0x302790 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x302790) {
            ctx->pc = 0x302794u;
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x3027B4u;
            goto label_3027b4;
        }
    }
    ctx->pc = 0x302798u;
    // 0x302798: 0x260202d
    ctx->pc = 0x302798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30279c: 0x200282d
    ctx->pc = 0x30279cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3027a0: 0xc0c0936
    ctx->pc = 0x3027A0u;
    SET_GPR_U32(ctx, 31, 0x3027A8u);
    ctx->pc = 0x3027A4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3024D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multiply_0x3024d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3027A8u; }
    }
    if (ctx->pc != 0x3027A8u) { return; }
    ctx->pc = 0x3027A8u;
    // 0x3027a8: 0xae020000
    ctx->pc = 0x3027a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3027ac: 0xac400000
    ctx->pc = 0x3027acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3027b0: 0x40802d
    ctx->pc = 0x3027b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3027b4:
    // 0x3027b4: 0x32220001
    ctx->pc = 0x3027b4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1));
label_3027b8:
    // 0x3027b8: 0x10400008
    ctx->pc = 0x3027B8u;
    {
        const bool branch_taken_0x3027b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x3027BCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x3027b8) {
            ctx->pc = 0x3027DCu;
            goto label_3027dc;
        }
    }
    ctx->pc = 0x3027C0u;
    // 0x3027c0: 0x260202d
    ctx->pc = 0x3027c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3027c4: 0xc0c0936
    ctx->pc = 0x3027C4u;
    SET_GPR_U32(ctx, 31, 0x3027CCu);
    ctx->pc = 0x3027C8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3024D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multiply_0x3024d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3027CCu; }
    }
    if (ctx->pc != 0x3027CCu) { return; }
    ctx->pc = 0x3027CCu;
    // 0x3027cc: 0x240282d
    ctx->pc = 0x3027ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3027d0: 0x260202d
    ctx->pc = 0x3027d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3027d4: 0xc0c0832
    ctx->pc = 0x3027D4u;
    SET_GPR_U32(ctx, 31, 0x3027DCu);
    ctx->pc = 0x3027D8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3020C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x3020c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3027DCu; }
    }
    if (ctx->pc != 0x3027DCu) { return; }
    ctx->pc = 0x3027DCu;
label_3027dc:
    // 0x3027dc: 0x118843
    ctx->pc = 0x3027dcu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
    // 0x3027e0: 0x5620ffeb
    ctx->pc = 0x3027E0u;
    {
        const bool branch_taken_0x3027e0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x3027e0) {
            ctx->pc = 0x3027E4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x302790u;
            goto label_302790;
        }
    }
    ctx->pc = 0x3027E8u;
    // 0x3027e8: 0x240102d
    ctx->pc = 0x3027e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3027ec:
    // 0x3027ec: 0xdfbf0040
    ctx->pc = 0x3027ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3027f0: 0xdfb30030
    ctx->pc = 0x3027f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3027f4: 0xdfb20020
    ctx->pc = 0x3027f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3027f8: 0xdfb10010
    ctx->pc = 0x3027f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3027fc: 0xdfb00000
    ctx->pc = 0x3027fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302800: 0x3e00008
    ctx->pc = 0x302800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302804u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x302758u: goto label_302758;
            case 0x302790u: goto label_302790;
            case 0x3027B4u: goto label_3027b4;
            case 0x3027B8u: goto label_3027b8;
            case 0x3027DCu: goto label_3027dc;
            case 0x3027ECu: goto label_3027ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x302808u;
}
