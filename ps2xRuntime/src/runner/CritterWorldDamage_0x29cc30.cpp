#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterWorldDamage
// Address: 0x29cc30 - 0x29cd90
void CritterWorldDamage_0x29cc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29cc30u;

    // 0x29cc30: 0x27bdff80
    ctx->pc = 0x29cc30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x29cc34: 0xffbf0060
    ctx->pc = 0x29cc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x29cc38: 0xffb40050
    ctx->pc = 0x29cc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x29cc3c: 0xffb30040
    ctx->pc = 0x29cc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x29cc40: 0xffb20030
    ctx->pc = 0x29cc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x29cc44: 0xffb10020
    ctx->pc = 0x29cc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x29cc48: 0xffb00010
    ctx->pc = 0x29cc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29cc4c: 0xe7b40070
    ctx->pc = 0x29cc4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x29cc50: 0x80a02d
    ctx->pc = 0x29cc50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cc54: 0xc0882d
    ctx->pc = 0x29cc54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cc58: 0xe0902d
    ctx->pc = 0x29cc58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cc5c: 0x4480a000
    ctx->pc = 0x29cc5cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x29cc60: 0x982d
    ctx->pc = 0x29cc60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cc64: 0xc086fa0
    ctx->pc = 0x29CC64u;
    SET_GPR_U32(ctx, 31, 0x29CC6Cu);
    ctx->pc = 0x29CC68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21BE80u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldObjGetAllFlags_0x21be80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CC6Cu; }
    }
    if (ctx->pc != 0x29CC6Cu) { return; }
    ctx->pc = 0x29CC6Cu;
    // 0x29cc6c: 0x40182d
    ctx->pc = 0x29cc6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cc70: 0x3c02000f
    ctx->pc = 0x29cc70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15 << 16));
    // 0x29cc74: 0x628024
    ctx->pc = 0x29cc74u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29cc78: 0x1200003c
    ctx->pc = 0x29CC78u;
    {
        const bool branch_taken_0x29cc78 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x29CC7Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)2560 << 16));
        if (branch_taken_0x29cc78) {
            ctx->pc = 0x29CD6Cu;
            goto label_29cd6c;
        }
    }
    ctx->pc = 0x29CC80u;
    // 0x29cc80: 0x621024
    ctx->pc = 0x29cc80u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29cc84: 0x3c030200
    ctx->pc = 0x29cc84u;
    SET_GPR_U32(ctx, 3, ((uint32_t)512 << 16));
    // 0x29cc88: 0x10430039
    ctx->pc = 0x29CC88u;
    {
        const bool branch_taken_0x29cc88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x29CC8Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x29cc88) {
            ctx->pc = 0x29CD70u;
            goto label_29cd70;
        }
    }
    ctx->pc = 0x29CC90u;
    // 0x29cc90: 0xc6200000
    ctx->pc = 0x29cc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29cc94: 0xc6410000
    ctx->pc = 0x29cc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29cc98: 0x46010001
    ctx->pc = 0x29cc98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29cc9c: 0xe7a00000
    ctx->pc = 0x29cc9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29cca0: 0xe7b40004
    ctx->pc = 0x29cca0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29cca4: 0xc6200008
    ctx->pc = 0x29cca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29cca8: 0xc6410008
    ctx->pc = 0x29cca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ccac: 0x46010001
    ctx->pc = 0x29ccacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29ccb0: 0xe7a00008
    ctx->pc = 0x29ccb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29ccb4: 0xc0b58fc
    ctx->pc = 0x29CCB4u;
    SET_GPR_U32(ctx, 31, 0x29CCBCu);
    ctx->pc = 0x29CCB8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D63F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector2D_0x2d63f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CCBCu; }
    }
    if (ctx->pc != 0x29CCBCu) { return; }
    ctx->pc = 0x29CCBCu;
    // 0x29ccbc: 0x200182d
    ctx->pc = 0x29ccbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ccc0: 0x3c020003
    ctx->pc = 0x29ccc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)3 << 16));
    // 0x29ccc4: 0x1062001a
    ctx->pc = 0x29CCC4u;
    {
        const bool branch_taken_0x29ccc4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x29CCC8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
        if (branch_taken_0x29ccc4) {
            ctx->pc = 0x29CD30u;
            goto label_29cd30;
        }
    }
    ctx->pc = 0x29CCCCu;
    // 0x29cccc: 0x14400008
    ctx->pc = 0x29CCCCu;
    {
        const bool branch_taken_0x29cccc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29CCD0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)5 << 16));
        if (branch_taken_0x29cccc) {
            ctx->pc = 0x29CCF0u;
            goto label_29ccf0;
        }
    }
    ctx->pc = 0x29CCD4u;
    // 0x29ccd4: 0x3c020001
    ctx->pc = 0x29ccd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x29ccd8: 0x1062000d
    ctx->pc = 0x29CCD8u;
    {
        const bool branch_taken_0x29ccd8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x29CCDCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
        if (branch_taken_0x29ccd8) {
            ctx->pc = 0x29CD10u;
            goto label_29cd10;
        }
    }
    ctx->pc = 0x29CCE0u;
    // 0x29cce0: 0x1062000f
    ctx->pc = 0x29CCE0u;
    {
        const bool branch_taken_0x29cce0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x29cce0) {
            ctx->pc = 0x29CD20u;
            goto label_29cd20;
        }
    }
    ctx->pc = 0x29CCE8u;
    // 0x29cce8: 0x10000014
    ctx->pc = 0x29CCE8u;
    {
        const bool branch_taken_0x29cce8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x29cce8) {
            ctx->pc = 0x29CD3Cu;
            goto label_29cd3c;
        }
    }
    ctx->pc = 0x29CCF0u;
label_29ccf0:
    // 0x29ccf0: 0x1062000f
    ctx->pc = 0x29CCF0u;
    {
        const bool branch_taken_0x29ccf0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x29CCF4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
        if (branch_taken_0x29ccf0) {
            ctx->pc = 0x29CD30u;
            goto label_29cd30;
        }
    }
    ctx->pc = 0x29CCF8u;
    // 0x29ccf8: 0x14400010
    ctx->pc = 0x29CCF8u;
    {
        const bool branch_taken_0x29ccf8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29CCFCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)4 << 16));
        if (branch_taken_0x29ccf8) {
            ctx->pc = 0x29CD3Cu;
            goto label_29cd3c;
        }
    }
    ctx->pc = 0x29CD00u;
    // 0x29cd00: 0x1062000b
    ctx->pc = 0x29CD00u;
    {
        const bool branch_taken_0x29cd00 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x29cd00) {
            ctx->pc = 0x29CD30u;
            goto label_29cd30;
        }
    }
    ctx->pc = 0x29CD08u;
    // 0x29cd08: 0x1000000c
    ctx->pc = 0x29CD08u;
    {
        const bool branch_taken_0x29cd08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x29cd08) {
            ctx->pc = 0x29CD3Cu;
            goto label_29cd3c;
        }
    }
    ctx->pc = 0x29CD10u;
label_29cd10:
    // 0x29cd10: 0x3c0140a0
    ctx->pc = 0x29cd10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x29cd14: 0x4481a000
    ctx->pc = 0x29cd14u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x29cd18: 0x10000008
    ctx->pc = 0x29CD18u;
    {
        const bool branch_taken_0x29cd18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x29cd18) {
            ctx->pc = 0x29CD3Cu;
            goto label_29cd3c;
        }
    }
    ctx->pc = 0x29CD20u;
label_29cd20:
    // 0x29cd20: 0x3c0140a0
    ctx->pc = 0x29cd20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x29cd24: 0x4481a000
    ctx->pc = 0x29cd24u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x29cd28: 0x10000004
    ctx->pc = 0x29CD28u;
    {
        const bool branch_taken_0x29cd28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29CD2Cu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x29cd28) {
            ctx->pc = 0x29CD3Cu;
            goto label_29cd3c;
        }
    }
    ctx->pc = 0x29CD30u;
label_29cd30:
    // 0x29cd30: 0x3c014170
    ctx->pc = 0x29cd30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16752 << 16));
    // 0x29cd34: 0x4481a000
    ctx->pc = 0x29cd34u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x29cd38: 0x24130020
    ctx->pc = 0x29cd38u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 32));
label_29cd3c:
    // 0x29cd3c: 0x44800000
    ctx->pc = 0x29cd3cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x29cd40: 0x46140034
    ctx->pc = 0x29cd40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29cd44: 0x0
    ctx->pc = 0x29cd44u;
    // NOP
    // 0x29cd48: 0x45000008
    ctx->pc = 0x29CD48u;
    {
        const bool branch_taken_0x29cd48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29CD4Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29cd48) {
            ctx->pc = 0x29CD6Cu;
            goto label_29cd6c;
        }
    }
    ctx->pc = 0x29CD50u;
    // 0x29cd50: 0x4600a306
    ctx->pc = 0x29cd50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x29cd54: 0x2405ffff
    ctx->pc = 0x29cd54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29cd58: 0x260302d
    ctx->pc = 0x29cd58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cd5c: 0x240382d
    ctx->pc = 0x29cd5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cd60: 0x3a0402d
    ctx->pc = 0x29cd60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cd64: 0xc0a6498
    ctx->pc = 0x29CD64u;
    SET_GPR_U32(ctx, 31, 0x29CD6Cu);
    ctx->pc = 0x29CD68u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x299260u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDamage_0x299260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CD6Cu; }
    }
    if (ctx->pc != 0x29CD6Cu) { return; }
    ctx->pc = 0x29CD6Cu;
label_29cd6c:
    // 0x29cd6c: 0xdfbf0060
    ctx->pc = 0x29cd6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_29cd70:
    // 0x29cd70: 0xdfb40050
    ctx->pc = 0x29cd70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29cd74: 0xdfb30040
    ctx->pc = 0x29cd74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29cd78: 0xdfb20030
    ctx->pc = 0x29cd78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29cd7c: 0xdfb10020
    ctx->pc = 0x29cd7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29cd80: 0xdfb00010
    ctx->pc = 0x29cd80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29cd84: 0xc7b40070
    ctx->pc = 0x29cd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29cd88: 0x3e00008
    ctx->pc = 0x29CD88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CD8Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29CCF0u: goto label_29ccf0;
            case 0x29CD10u: goto label_29cd10;
            case 0x29CD20u: goto label_29cd20;
            case 0x29CD30u: goto label_29cd30;
            case 0x29CD3Cu: goto label_29cd3c;
            case 0x29CD6Cu: goto label_29cd6c;
            case 0x29CD70u: goto label_29cd70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29CD90u;
}
