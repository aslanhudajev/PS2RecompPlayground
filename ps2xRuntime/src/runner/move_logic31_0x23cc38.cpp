#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: move_logic31
// Address: 0x23cc38 - 0x23cdb4
void move_logic31_0x23cc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23cc38u;

    // 0x23cc38: 0x27bdffd0
    ctx->pc = 0x23cc38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23cc3c: 0xffbf0020
    ctx->pc = 0x23cc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23cc40: 0xffb10010
    ctx->pc = 0x23cc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23cc44: 0xffb00000
    ctx->pc = 0x23cc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23cc48: 0x80882d
    ctx->pc = 0x23cc48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cc4c: 0x240303b0
    ctx->pc = 0x23cc4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x23cc50: 0x2231818
    ctx->pc = 0x23cc50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23cc54: 0x3c020033
    ctx->pc = 0x23cc54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23cc58: 0x2442dfd0
    ctx->pc = 0x23cc58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x23cc5c: 0x628021
    ctx->pc = 0x23cc5cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23cc60: 0x86030324
    ctx->pc = 0x23cc60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x23cc64: 0x86020328
    ctx->pc = 0x23cc64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x23cc68: 0x50620004
    ctx->pc = 0x23CC68u;
    {
        const bool branch_taken_0x23cc68 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x23cc68) {
            ctx->pc = 0x23CC6Cu;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x23CC7Cu;
            goto label_23cc7c;
        }
    }
    ctx->pc = 0x23CC70u;
    // 0x23cc70: 0xc08e210
    ctx->pc = 0x23CC70u;
    SET_GPR_U32(ctx, 31, 0x23CC78u);
    ctx->pc = 0x238840u;
    {
        const uint32_t __entryPc = ctx->pc;
        format_brain_0x238840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CC78u; }
    }
    if (ctx->pc != 0x23CC78u) { return; }
    ctx->pc = 0x23CC78u;
    // 0x23cc78: 0x200202d
    ctx->pc = 0x23cc78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23cc7c:
    // 0x23cc7c: 0xc08f0f0
    ctx->pc = 0x23CC7Cu;
    SET_GPR_U32(ctx, 31, 0x23CC84u);
    ctx->pc = 0x23CC80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x23C3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_face_ang_0x23c3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CC84u; }
    }
    if (ctx->pc != 0x23CC84u) { return; }
    ctx->pc = 0x23CC84u;
    // 0x23cc84: 0xe6000260
    ctx->pc = 0x23cc84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x23cc88: 0x86020288
    ctx->pc = 0x23cc88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x23cc8c: 0x4400040
    ctx->pc = 0x23CC8Cu;
    {
        const bool branch_taken_0x23cc8c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x23cc8c) {
            ctx->pc = 0x23CD90u;
            goto label_23cd90;
        }
    }
    ctx->pc = 0x23CC94u;
    // 0x23cc94: 0xae0000e4
    ctx->pc = 0x23cc94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x23cc98: 0x860202f0
    ctx->pc = 0x23cc98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 752)));
    // 0x23cc9c: 0x1040003c
    ctx->pc = 0x23CC9Cu;
    {
        const bool branch_taken_0x23cc9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x23cc9c) {
            ctx->pc = 0x23CD90u;
            goto label_23cd90;
        }
    }
    ctx->pc = 0x23CCA4u;
    // 0x23cca4: 0x8e0200e0
    ctx->pc = 0x23cca4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x23cca8: 0x2442fff4
    ctx->pc = 0x23cca8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x23ccac: 0x2c420002
    ctx->pc = 0x23ccacu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x23ccb0: 0x50400012
    ctx->pc = 0x23CCB0u;
    {
        const bool branch_taken_0x23ccb0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x23ccb0) {
            ctx->pc = 0x23CCB4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->pc = 0x23CCFCu;
            goto label_23ccfc;
        }
    }
    ctx->pc = 0x23CCB8u;
    // 0x23ccb8: 0x3c013f80
    ctx->pc = 0x23ccb8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x23ccbc: 0x44816000
    ctx->pc = 0x23ccbcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x23ccc0: 0xc08f2e2
    ctx->pc = 0x23CCC0u;
    SET_GPR_U32(ctx, 31, 0x23CCC8u);
    ctx->pc = 0x23CCC4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23CB88u;
    {
        const uint32_t __entryPc = ctx->pc;
        xlate31_0x23cb88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CCC8u; }
    }
    if (ctx->pc != 0x23CCC8u) { return; }
    ctx->pc = 0x23CCC8u;
    // 0x23ccc8: 0xc0b5c24
    ctx->pc = 0x23CCC8u;
    SET_GPR_U32(ctx, 31, 0x23CCD0u);
    ctx->pc = 0x23CCCCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 30));
    ctx->pc = 0x2D7090u;
    {
        const uint32_t __entryPc = ctx->pc;
        RandInt_0x2d7090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CCD0u; }
    }
    if (ctx->pc != 0x23CCD0u) { return; }
    ctx->pc = 0x23CCD0u;
    // 0x23ccd0: 0x2442001e
    ctx->pc = 0x23ccd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 30));
    // 0x23ccd4: 0xae020334
    ctx->pc = 0x23ccd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 2));
    // 0x23ccd8: 0xc6010290
    ctx->pc = 0x23ccd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ccdc: 0x3c0140f0
    ctx->pc = 0x23ccdcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16624 << 16));
    // 0x23cce0: 0x44810000
    ctx->pc = 0x23cce0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23cce4: 0x46000836
    ctx->pc = 0x23cce4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23cce8: 0x45000029
    ctx->pc = 0x23CCE8u;
    {
        const bool branch_taken_0x23cce8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23cce8) {
            ctx->pc = 0x23CD90u;
            goto label_23cd90;
        }
    }
    ctx->pc = 0x23CCF0u;
    // 0x23ccf0: 0x96020288
    ctx->pc = 0x23ccf0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x23ccf4: 0x10000026
    ctx->pc = 0x23CCF4u;
    {
        const bool branch_taken_0x23ccf4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23CCF8u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 736), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x23ccf4) {
            ctx->pc = 0x23CD90u;
            goto label_23cd90;
        }
    }
    ctx->pc = 0x23CCFCu;
label_23ccfc:
    // 0x23ccfc: 0x2442fff0
    ctx->pc = 0x23ccfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x23cd00: 0x2c420002
    ctx->pc = 0x23cd00u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x23cd04: 0x50400006
    ctx->pc = 0x23CD04u;
    {
        const bool branch_taken_0x23cd04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x23cd04) {
            ctx->pc = 0x23CD08u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->pc = 0x23CD20u;
            goto label_23cd20;
        }
    }
    ctx->pc = 0x23CD0Cu;
    // 0x23cd0c: 0xc0b5c24
    ctx->pc = 0x23CD0Cu;
    SET_GPR_U32(ctx, 31, 0x23CD14u);
    ctx->pc = 0x23CD10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 30));
    ctx->pc = 0x2D7090u;
    {
        const uint32_t __entryPc = ctx->pc;
        RandInt_0x2d7090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CD14u; }
    }
    if (ctx->pc != 0x23CD14u) { return; }
    ctx->pc = 0x23CD14u;
    // 0x23cd14: 0x2442001e
    ctx->pc = 0x23cd14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 30));
    // 0x23cd18: 0x1000001d
    ctx->pc = 0x23CD18u;
    {
        const bool branch_taken_0x23cd18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23CD1Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 2));
        if (branch_taken_0x23cd18) {
            ctx->pc = 0x23CD90u;
            goto label_23cd90;
        }
    }
    ctx->pc = 0x23CD20u;
label_23cd20:
    // 0x23cd20: 0x5c400010
    ctx->pc = 0x23CD20u;
    {
        const bool branch_taken_0x23cd20 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x23cd20) {
            ctx->pc = 0x23CD24u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->pc = 0x23CD64u;
            goto label_23cd64;
        }
    }
    ctx->pc = 0x23CD28u;
    // 0x23cd28: 0xc6010290
    ctx->pc = 0x23cd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23cd2c: 0x3c014120
    ctx->pc = 0x23cd2cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x23cd30: 0x44810000
    ctx->pc = 0x23cd30u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23cd34: 0x46000836
    ctx->pc = 0x23cd34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23cd38: 0x0
    ctx->pc = 0x23cd38u;
    // NOP
    // 0x23cd3c: 0x45000005
    ctx->pc = 0x23CD3Cu;
    {
        const bool branch_taken_0x23cd3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23CD40u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23cd3c) {
            ctx->pc = 0x23CD54u;
            goto label_23cd54;
        }
    }
    ctx->pc = 0x23CD44u;
    // 0x23cd44: 0xc09de18
    ctx->pc = 0x23CD44u;
    SET_GPR_U32(ctx, 31, 0x23CD4Cu);
    ctx->pc = 0x23CD48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x277860u;
    {
        const uint32_t __entryPc = ctx->pc;
        RequestEnemyAction_0x277860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CD4Cu; }
    }
    if (ctx->pc != 0x23CD4Cu) { return; }
    ctx->pc = 0x23CD4Cu;
    // 0x23cd4c: 0x10000010
    ctx->pc = 0x23CD4Cu;
    {
        const bool branch_taken_0x23cd4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x23cd4c) {
            ctx->pc = 0x23CD90u;
            goto label_23cd90;
        }
    }
    ctx->pc = 0x23CD54u;
label_23cd54:
    // 0x23cd54: 0xc09de18
    ctx->pc = 0x23CD54u;
    SET_GPR_U32(ctx, 31, 0x23CD5Cu);
    ctx->pc = 0x23CD58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x277860u;
    {
        const uint32_t __entryPc = ctx->pc;
        RequestEnemyAction_0x277860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CD5Cu; }
    }
    if (ctx->pc != 0x23CD5Cu) { return; }
    ctx->pc = 0x23CD5Cu;
    // 0x23cd5c: 0x1000000c
    ctx->pc = 0x23CD5Cu;
    {
        const bool branch_taken_0x23cd5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x23cd5c) {
            ctx->pc = 0x23CD90u;
            goto label_23cd90;
        }
    }
    ctx->pc = 0x23CD64u;
label_23cd64:
    // 0x23cd64: 0x24020001
    ctx->pc = 0x23cd64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x23cd68: 0x10620009
    ctx->pc = 0x23CD68u;
    {
        const bool branch_taken_0x23cd68 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23CD6Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x23cd68) {
            ctx->pc = 0x23CD90u;
            goto label_23cd90;
        }
    }
    ctx->pc = 0x23CD70u;
    // 0x23cd70: 0x8e030334
    ctx->pc = 0x23cd70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23cd74: 0x8c42ffbc
    ctx->pc = 0x23cd74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x23cd78: 0x621823
    ctx->pc = 0x23cd78u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23cd7c: 0xae030334
    ctx->pc = 0x23cd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 3));
    // 0x23cd80: 0x3c013f00
    ctx->pc = 0x23cd80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x23cd84: 0x44816000
    ctx->pc = 0x23cd84u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x23cd88: 0xc08f2e2
    ctx->pc = 0x23CD88u;
    SET_GPR_U32(ctx, 31, 0x23CD90u);
    ctx->pc = 0x23CD8Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23CB88u;
    {
        const uint32_t __entryPc = ctx->pc;
        xlate31_0x23cb88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CD90u; }
    }
    if (ctx->pc != 0x23CD90u) { return; }
    ctx->pc = 0x23CD90u;
label_23cd90:
    // 0x23cd90: 0xc08f20c
    ctx->pc = 0x23CD90u;
    SET_GPR_U32(ctx, 31, 0x23CD98u);
    ctx->pc = 0x23CD94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C830u;
    {
        const uint32_t __entryPc = ctx->pc;
        turn_enemy_0x23c830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CD98u; }
    }
    if (ctx->pc != 0x23CD98u) { return; }
    ctx->pc = 0x23CD98u;
    // 0x23cd98: 0xe6000258
    ctx->pc = 0x23cd98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
    // 0x23cd9c: 0x220202d
    ctx->pc = 0x23cd9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cda0: 0xdfbf0020
    ctx->pc = 0x23cda0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23cda4: 0xdfb10010
    ctx->pc = 0x23cda4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23cda8: 0xdfb00000
    ctx->pc = 0x23cda8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23cdac: 0x8090e82
    ctx->pc = 0x23CDACu;
    ctx->pc = 0x23CDB0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x243A08u;
    do_enemy_move_0x243a08(rdram, ctx, runtime); return;
    ctx->pc = 0x23CDB4u;
}
