#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: enemy_knockback_control
// Address: 0x23ae10 - 0x23b188
void enemy_knockback_control_0x23ae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23ae10u;

    // 0x23ae10: 0x27bdffe0
    ctx->pc = 0x23ae10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23ae14: 0xffbf0010
    ctx->pc = 0x23ae14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23ae18: 0xffb00000
    ctx->pc = 0x23ae18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23ae1c: 0x80802d
    ctx->pc = 0x23ae1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ae20: 0x3c020036
    ctx->pc = 0x23ae20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x23ae24: 0x8e030000
    ctx->pc = 0x23ae24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23ae28: 0x8c42d934
    ctx->pc = 0x23ae28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x23ae2c: 0x106200d3
    ctx->pc = 0x23AE2Cu;
    {
        const bool branch_taken_0x23ae2c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23AE30u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x23ae2c) {
            ctx->pc = 0x23B17Cu;
            goto label_23b17c;
        }
    }
    ctx->pc = 0x23AE34u;
    // 0x23ae34: 0xc60102b4
    ctx->pc = 0x23ae34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ae38: 0x3c013f80
    ctx->pc = 0x23ae38u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x23ae3c: 0x44810000
    ctx->pc = 0x23ae3cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23ae40: 0x46010036
    ctx->pc = 0x23ae40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ae44: 0x0
    ctx->pc = 0x23ae44u;
    // NOP
    // 0x23ae48: 0x450000c5
    ctx->pc = 0x23AE48u;
    {
        const bool branch_taken_0x23ae48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23AE4Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
        if (branch_taken_0x23ae48) {
            ctx->pc = 0x23B160u;
            goto label_23b160;
        }
    }
    ctx->pc = 0x23AE50u;
    // 0x23ae50: 0x8e0302b8
    ctx->pc = 0x23ae50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 696)));
    // 0x23ae54: 0x34420160
    ctx->pc = 0x23ae54u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 352));
    // 0x23ae58: 0x621024
    ctx->pc = 0x23ae58u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23ae5c: 0x54400009
    ctx->pc = 0x23AE5Cu;
    {
        const bool branch_taken_0x23ae5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x23ae5c) {
            ctx->pc = 0x23AE60u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x23AE84u;
            goto label_23ae84;
        }
    }
    ctx->pc = 0x23AE64u;
    // 0x23ae64: 0x3c014120
    ctx->pc = 0x23ae64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x23ae68: 0x44810000
    ctx->pc = 0x23ae68u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23ae6c: 0x46010034
    ctx->pc = 0x23ae6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ae70: 0x0
    ctx->pc = 0x23ae70u;
    // NOP
    // 0x23ae74: 0x45000047
    ctx->pc = 0x23AE74u;
    {
        const bool branch_taken_0x23ae74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23AE78u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 512));
        if (branch_taken_0x23ae74) {
            ctx->pc = 0x23AF94u;
            goto label_23af94;
        }
    }
    ctx->pc = 0x23AE7Cu;
    // 0x23ae7c: 0x10400045
    ctx->pc = 0x23AE7Cu;
    {
        const bool branch_taken_0x23ae7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23AE80u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23ae7c) {
            ctx->pc = 0x23AF94u;
            goto label_23af94;
        }
    }
    ctx->pc = 0x23AE84u;
label_23ae84:
    // 0x23ae84: 0xc09de18
    ctx->pc = 0x23AE84u;
    SET_GPR_U32(ctx, 31, 0x23AE8Cu);
    ctx->pc = 0x23AE88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 29));
    ctx->pc = 0x277860u;
    {
        const uint32_t __entryPc = ctx->pc;
        RequestEnemyAction_0x277860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AE8Cu; }
    }
    if (ctx->pc != 0x23AE8Cu) { return; }
    ctx->pc = 0x23AE8Cu;
    // 0x23ae8c: 0x8e030000
    ctx->pc = 0x23ae8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23ae90: 0x2402001d
    ctx->pc = 0x23ae90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29));
    // 0x23ae94: 0x14620005
    ctx->pc = 0x23AE94u;
    {
        const bool branch_taken_0x23ae94 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x23AE98u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 21));
        if (branch_taken_0x23ae94) {
            ctx->pc = 0x23AEACu;
            goto label_23aeac;
        }
    }
    ctx->pc = 0x23AE9Cu;
    // 0x23ae9c: 0x24020001
    ctx->pc = 0x23ae9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x23aea0: 0xae020330
    ctx->pc = 0x23aea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 2));
    // 0x23aea4: 0x8e030000
    ctx->pc = 0x23aea4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23aea8: 0x24020015
    ctx->pc = 0x23aea8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 21));
label_23aeac:
    // 0x23aeac: 0x54620004
    ctx->pc = 0x23AEACu;
    {
        const bool branch_taken_0x23aeac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x23aeac) {
            ctx->pc = 0x23AEB0u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x23AEC0u;
            goto label_23aec0;
        }
    }
    ctx->pc = 0x23AEB4u;
    // 0x23aeb4: 0x44801000
    ctx->pc = 0x23aeb4u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x23aeb8: 0x10000016
    ctx->pc = 0x23AEB8u;
    {
        const bool branch_taken_0x23aeb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23AEBCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x23aeb8) {
            ctx->pc = 0x23AF14u;
            goto label_23af14;
        }
    }
    ctx->pc = 0x23AEC0u;
label_23aec0:
    // 0x23aec0: 0x3c014000
    ctx->pc = 0x23aec0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x23aec4: 0x44810000
    ctx->pc = 0x23aec4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23aec8: 0x46000836
    ctx->pc = 0x23aec8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23aecc: 0x0
    ctx->pc = 0x23aeccu;
    // NOP
    // 0x23aed0: 0x45000008
    ctx->pc = 0x23AED0u;
    {
        const bool branch_taken_0x23aed0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23AED4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
        if (branch_taken_0x23aed0) {
            ctx->pc = 0x23AEF4u;
            goto label_23aef4;
        }
    }
    ctx->pc = 0x23AED8u;
    // 0x23aed8: 0x8e030000
    ctx->pc = 0x23aed8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23aedc: 0x10620007
    ctx->pc = 0x23AEDCu;
    {
        const bool branch_taken_0x23aedc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23AEE0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29));
        if (branch_taken_0x23aedc) {
            ctx->pc = 0x23AEFCu;
            goto label_23aefc;
        }
    }
    ctx->pc = 0x23AEE4u;
    // 0x23aee4: 0x3c014220
    ctx->pc = 0x23aee4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16928 << 16));
    // 0x23aee8: 0x44811000
    ctx->pc = 0x23aee8u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x23aeec: 0x10000009
    ctx->pc = 0x23AEECu;
    {
        const bool branch_taken_0x23aeec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23AEF0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x23aeec) {
            ctx->pc = 0x23AF14u;
            goto label_23af14;
        }
    }
    ctx->pc = 0x23AEF4u;
label_23aef4:
    // 0x23aef4: 0x8e030000
    ctx->pc = 0x23aef4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23aef8: 0x2402001d
    ctx->pc = 0x23aef8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29));
label_23aefc:
    // 0x23aefc: 0x3c0141a0
    ctx->pc = 0x23aefcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16800 << 16));
    // 0x23af00: 0x44811000
    ctx->pc = 0x23af00u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x23af04: 0x14620003
    ctx->pc = 0x23AF04u;
    {
        const bool branch_taken_0x23af04 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x23AF08u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x23af04) {
            ctx->pc = 0x23AF14u;
            goto label_23af14;
        }
    }
    ctx->pc = 0x23AF0Cu;
    // 0x23af0c: 0x3c014000
    ctx->pc = 0x23af0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x23af10: 0x44811000
    ctx->pc = 0x23af10u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
label_23af14:
    // 0x23af14: 0x460c1002
    ctx->pc = 0x23af14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x23af18: 0xc6010270
    ctx->pc = 0x23af18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23af1c: 0x46010000
    ctx->pc = 0x23af1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23af20: 0xe6000270
    ctx->pc = 0x23af20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
    // 0x23af24: 0xc60002c0
    ctx->pc = 0x23af24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23af28: 0x46001002
    ctx->pc = 0x23af28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x23af2c: 0xc6010274
    ctx->pc = 0x23af2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23af30: 0x46010000
    ctx->pc = 0x23af30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23af34: 0xe6000274
    ctx->pc = 0x23af34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
    // 0x23af38: 0xc60d02c4
    ctx->pc = 0x23af38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23af3c: 0x460d1002
    ctx->pc = 0x23af3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[13]);
    // 0x23af40: 0xc6010278
    ctx->pc = 0x23af40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23af44: 0x46010000
    ctx->pc = 0x23af44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23af48: 0xc0ba04a
    ctx->pc = 0x23AF48u;
    SET_GPR_U32(ctx, 31, 0x23AF50u);
    ctx->pc = 0x23AF4Cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AF50u; }
    }
    if (ctx->pc != 0x23AF50u) { return; }
    ctx->pc = 0x23AF50u;
    // 0x23af50: 0x3c014049
    ctx->pc = 0x23af50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x23af54: 0x34210fdb
    ctx->pc = 0x23af54u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23af58: 0x44810800
    ctx->pc = 0x23af58u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x23af5c: 0x46010080
    ctx->pc = 0x23af5cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23af60: 0x46020834
    ctx->pc = 0x23af60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23af64: 0x0
    ctx->pc = 0x23af64u;
    // NOP
    // 0x23af68: 0x4501002f
    ctx->pc = 0x23AF68u;
    {
        const bool branch_taken_0x23af68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x23AF6Cu;
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 636), bits); }
        if (branch_taken_0x23af68) {
            ctx->pc = 0x23B028u;
            goto label_23b028;
        }
    }
    ctx->pc = 0x23AF70u;
    // 0x23af70: 0xc601027c
    ctx->pc = 0x23af70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23af74: 0x3c01c049
    ctx->pc = 0x23af74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x23af78: 0x34210fdb
    ctx->pc = 0x23af78u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23af7c: 0x44810000
    ctx->pc = 0x23af7cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23af80: 0x46000836
    ctx->pc = 0x23af80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23af84: 0x45010035
    ctx->pc = 0x23AF84u;
    {
        const bool branch_taken_0x23af84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23af84) {
            ctx->pc = 0x23B05Cu;
            goto label_23b05c;
        }
    }
    ctx->pc = 0x23AF8Cu;
    // 0x23af8c: 0x10000037
    ctx->pc = 0x23AF8Cu;
    {
        const bool branch_taken_0x23af8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23AF90u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x23af8c) {
            ctx->pc = 0x23B06Cu;
            goto label_23b06c;
        }
    }
    ctx->pc = 0x23AF94u;
label_23af94:
    // 0x23af94: 0x8e0202b8
    ctx->pc = 0x23af94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 696)));
    // 0x23af98: 0x30420010
    ctx->pc = 0x23af98u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x23af9c: 0x10400038
    ctx->pc = 0x23AF9Cu;
    {
        const bool branch_taken_0x23af9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23AFA0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29));
        if (branch_taken_0x23af9c) {
            ctx->pc = 0x23B080u;
            goto label_23b080;
        }
    }
    ctx->pc = 0x23AFA4u;
    // 0x23afa4: 0x8e030000
    ctx->pc = 0x23afa4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23afa8: 0x1062003c
    ctx->pc = 0x23AFA8u;
    {
        const bool branch_taken_0x23afa8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23AFACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 21));
        if (branch_taken_0x23afa8) {
            ctx->pc = 0x23B09Cu;
            goto label_23b09c;
        }
    }
    ctx->pc = 0x23AFB0u;
    // 0x23afb0: 0x1062003a
    ctx->pc = 0x23AFB0u;
    {
        const bool branch_taken_0x23afb0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23AFB4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23afb0) {
            ctx->pc = 0x23B09Cu;
            goto label_23b09c;
        }
    }
    ctx->pc = 0x23AFB8u;
    // 0x23afb8: 0xc09de18
    ctx->pc = 0x23AFB8u;
    SET_GPR_U32(ctx, 31, 0x23AFC0u);
    ctx->pc = 0x23AFBCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 28));
    ctx->pc = 0x277860u;
    {
        const uint32_t __entryPc = ctx->pc;
        RequestEnemyAction_0x277860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AFC0u; }
    }
    if (ctx->pc != 0x23AFC0u) { return; }
    ctx->pc = 0x23AFC0u;
    // 0x23afc0: 0x3c014100
    ctx->pc = 0x23afc0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16640 << 16));
    // 0x23afc4: 0x44811000
    ctx->pc = 0x23afc4u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x23afc8: 0xc60c02bc
    ctx->pc = 0x23afc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23afcc: 0x46026002
    ctx->pc = 0x23afccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x23afd0: 0xc6010270
    ctx->pc = 0x23afd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23afd4: 0x46010000
    ctx->pc = 0x23afd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23afd8: 0xe6000270
    ctx->pc = 0x23afd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
    // 0x23afdc: 0xc60002c0
    ctx->pc = 0x23afdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23afe0: 0x46020002
    ctx->pc = 0x23afe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x23afe4: 0xc6010274
    ctx->pc = 0x23afe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23afe8: 0x46010000
    ctx->pc = 0x23afe8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23afec: 0xe6000274
    ctx->pc = 0x23afecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
    // 0x23aff0: 0xc60d02c4
    ctx->pc = 0x23aff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23aff4: 0x46026802
    ctx->pc = 0x23aff4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
    // 0x23aff8: 0xc6010278
    ctx->pc = 0x23aff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23affc: 0x46010000
    ctx->pc = 0x23affcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23b000: 0xc0ba04a
    ctx->pc = 0x23B000u;
    SET_GPR_U32(ctx, 31, 0x23B008u);
    ctx->pc = 0x23B004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B008u; }
    }
    if (ctx->pc != 0x23B008u) { return; }
    ctx->pc = 0x23B008u;
    // 0x23b008: 0x3c014049
    ctx->pc = 0x23b008u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x23b00c: 0x34210fdb
    ctx->pc = 0x23b00cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23b010: 0x44810800
    ctx->pc = 0x23b010u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x23b014: 0x46010080
    ctx->pc = 0x23b014u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23b018: 0x46020834
    ctx->pc = 0x23b018u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b01c: 0x0
    ctx->pc = 0x23b01cu;
    // NOP
    // 0x23b020: 0x45000006
    ctx->pc = 0x23B020u;
    {
        const bool branch_taken_0x23b020 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23B024u;
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 636), bits); }
        if (branch_taken_0x23b020) {
            ctx->pc = 0x23B03Cu;
            goto label_23b03c;
        }
    }
    ctx->pc = 0x23B028u;
label_23b028:
    // 0x23b028: 0x3c0140c9
    ctx->pc = 0x23b028u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23b02c: 0x34210fdb
    ctx->pc = 0x23b02cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23b030: 0x44810000
    ctx->pc = 0x23b030u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23b034: 0x1000000d
    ctx->pc = 0x23B034u;
    {
        const bool branch_taken_0x23b034 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23B038u;
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x23b034) {
            ctx->pc = 0x23B06Cu;
            goto label_23b06c;
        }
    }
    ctx->pc = 0x23B03Cu;
label_23b03c:
    // 0x23b03c: 0xc601027c
    ctx->pc = 0x23b03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b040: 0x3c01c049
    ctx->pc = 0x23b040u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x23b044: 0x34210fdb
    ctx->pc = 0x23b044u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23b048: 0x44810000
    ctx->pc = 0x23b048u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23b04c: 0x46000836
    ctx->pc = 0x23b04cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b050: 0x0
    ctx->pc = 0x23b050u;
    // NOP
    // 0x23b054: 0x45020005
    ctx->pc = 0x23B054u;
    {
        const bool branch_taken_0x23b054 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23b054) {
            ctx->pc = 0x23B058u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x23B06Cu;
            goto label_23b06c;
        }
    }
    ctx->pc = 0x23B05Cu;
label_23b05c:
    // 0x23b05c: 0x3c0140c9
    ctx->pc = 0x23b05cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23b060: 0x34210fdb
    ctx->pc = 0x23b060u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23b064: 0x44810000
    ctx->pc = 0x23b064u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23b068: 0x46000800
    ctx->pc = 0x23b068u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_23b06c:
    // 0x23b06c: 0xe600027c
    ctx->pc = 0x23b06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 636), bits); }
    // 0x23b070: 0xae0002bc
    ctx->pc = 0x23b070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 0));
    // 0x23b074: 0xae0002c0
    ctx->pc = 0x23b074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 704), GPR_U32(ctx, 0));
    // 0x23b078: 0x1000000a
    ctx->pc = 0x23B078u;
    {
        const bool branch_taken_0x23b078 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23B07Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 0));
        if (branch_taken_0x23b078) {
            ctx->pc = 0x23B0A4u;
            goto label_23b0a4;
        }
    }
    ctx->pc = 0x23B080u;
label_23b080:
    // 0x23b080: 0x8e030000
    ctx->pc = 0x23b080u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23b084: 0x10620005
    ctx->pc = 0x23B084u;
    {
        const bool branch_taken_0x23b084 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23B088u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23b084) {
            ctx->pc = 0x23B09Cu;
            goto label_23b09c;
        }
    }
    ctx->pc = 0x23B08Cu;
    // 0x23b08c: 0xc09de18
    ctx->pc = 0x23B08Cu;
    SET_GPR_U32(ctx, 31, 0x23B094u);
    ctx->pc = 0x23B090u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 28));
    ctx->pc = 0x277860u;
    {
        const uint32_t __entryPc = ctx->pc;
        RequestEnemyAction_0x277860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B094u; }
    }
    if (ctx->pc != 0x23B094u) { return; }
    ctx->pc = 0x23B094u;
    // 0x23b094: 0x10000004
    ctx->pc = 0x23B094u;
    {
        const bool branch_taken_0x23b094 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23B098u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x23b094) {
            ctx->pc = 0x23B0A8u;
            goto label_23b0a8;
        }
    }
    ctx->pc = 0x23B09Cu;
label_23b09c:
    // 0x23b09c: 0x24020001
    ctx->pc = 0x23b09cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b0a0: 0xae020330
    ctx->pc = 0x23b0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 2));
label_23b0a4:
    // 0x23b0a4: 0xc6000270
    ctx->pc = 0x23b0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23b0a8:
    // 0x23b0a8: 0x46000082
    ctx->pc = 0x23b0a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x23b0ac: 0xc6000274
    ctx->pc = 0x23b0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b0b0: 0x46000002
    ctx->pc = 0x23b0b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x23b0b4: 0x46001080
    ctx->pc = 0x23b0b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x23b0b8: 0xc6000278
    ctx->pc = 0x23b0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b0bc: 0x46000002
    ctx->pc = 0x23b0bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x23b0c0: 0x46001080
    ctx->pc = 0x23b0c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x23b0c4: 0x3c0144c8
    ctx->pc = 0x23b0c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17608 << 16));
    // 0x23b0c8: 0x44810000
    ctx->pc = 0x23b0c8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23b0cc: 0x46020034
    ctx->pc = 0x23b0ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b0d0: 0x0
    ctx->pc = 0x23b0d0u;
    // NOP
    // 0x23b0d4: 0x4502000f
    ctx->pc = 0x23B0D4u;
    {
        const bool branch_taken_0x23b0d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23b0d4) {
            ctx->pc = 0x23B0D8u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 0));
            ctx->pc = 0x23B114u;
            goto label_23b114;
        }
    }
    ctx->pc = 0x23B0DCu;
    // 0x23b0dc: 0xc0b58a4
    ctx->pc = 0x23B0DCu;
    SET_GPR_U32(ctx, 31, 0x23B0E4u);
    ctx->pc = 0x23B0E0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 624));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B0E4u; }
    }
    if (ctx->pc != 0x23B0E4u) { return; }
    ctx->pc = 0x23B0E4u;
    // 0x23b0e4: 0xc6000270
    ctx->pc = 0x23b0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b0e8: 0x3c014220
    ctx->pc = 0x23b0e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16928 << 16));
    // 0x23b0ec: 0x44810800
    ctx->pc = 0x23b0ecu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x23b0f0: 0x46010002
    ctx->pc = 0x23b0f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x23b0f4: 0xe6000270
    ctx->pc = 0x23b0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
    // 0x23b0f8: 0xc6000274
    ctx->pc = 0x23b0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b0fc: 0x46010002
    ctx->pc = 0x23b0fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x23b100: 0xe6000274
    ctx->pc = 0x23b100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
    // 0x23b104: 0xc6000278
    ctx->pc = 0x23b104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b108: 0x46010002
    ctx->pc = 0x23b108u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x23b10c: 0xe6000278
    ctx->pc = 0x23b10cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
    // 0x23b110: 0xae0002b4
    ctx->pc = 0x23b110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 0));
label_23b114:
    // 0x23b114: 0xae0002b8
    ctx->pc = 0x23b114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 0));
    // 0x23b118: 0xc6010214
    ctx->pc = 0x23b118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b11c: 0xc60002b4
    ctx->pc = 0x23b11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b120: 0x46000836
    ctx->pc = 0x23b120u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b124: 0x0
    ctx->pc = 0x23b124u;
    // NOP
    // 0x23b128: 0x45000005
    ctx->pc = 0x23B128u;
    {
        const bool branch_taken_0x23b128 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23B12Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23b128) {
            ctx->pc = 0x23B140u;
            goto label_23b140;
        }
    }
    ctx->pc = 0x23B130u;
    // 0x23b130: 0xc09de18
    ctx->pc = 0x23B130u;
    SET_GPR_U32(ctx, 31, 0x23B138u);
    ctx->pc = 0x23B134u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x277860u;
    {
        const uint32_t __entryPc = ctx->pc;
        RequestEnemyAction_0x277860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B138u; }
    }
    if (ctx->pc != 0x23B138u) { return; }
    ctx->pc = 0x23B138u;
    // 0x23b138: 0x1000000a
    ctx->pc = 0x23B138u;
    {
        const bool branch_taken_0x23b138 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23B13Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x23b138) {
            ctx->pc = 0x23B164u;
            goto label_23b164;
        }
    }
    ctx->pc = 0x23B140u;
label_23b140:
    // 0x23b140: 0x3c020034
    ctx->pc = 0x23b140u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x23b144: 0x260401f8
    ctx->pc = 0x23b144u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 504));
    // 0x23b148: 0x8c4554f0
    ctx->pc = 0x23b148u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 21744)));
    // 0x23b14c: 0x24060001
    ctx->pc = 0x23b14cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b150: 0x3c013f80
    ctx->pc = 0x23b150u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x23b154: 0x44816000
    ctx->pc = 0x23b154u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x23b158: 0xc09ffc6
    ctx->pc = 0x23B158u;
    SET_GPR_U32(ctx, 31, 0x23B160u);
    ctx->pc = 0x23B15Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x27FF18u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetSkinFX_0x27ff18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B160u; }
    }
    if (ctx->pc != 0x23B160u) { return; }
    ctx->pc = 0x23B160u;
label_23b160:
    // 0x23b160: 0xc6010270
    ctx->pc = 0x23b160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23b164:
    // 0x23b164: 0x46010842
    ctx->pc = 0x23b164u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x23b168: 0xc6000278
    ctx->pc = 0x23b168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b16c: 0x46000002
    ctx->pc = 0x23b16cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x23b170: 0x46000840
    ctx->pc = 0x23b170u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23b174: 0xe6010280
    ctx->pc = 0x23b174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
    // 0x23b178: 0xdfbf0010
    ctx->pc = 0x23b178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23b17c:
    // 0x23b17c: 0xdfb00000
    ctx->pc = 0x23b17cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b180: 0x3e00008
    ctx->pc = 0x23B180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B184u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23AE84u: goto label_23ae84;
            case 0x23AEACu: goto label_23aeac;
            case 0x23AEC0u: goto label_23aec0;
            case 0x23AEF4u: goto label_23aef4;
            case 0x23AEFCu: goto label_23aefc;
            case 0x23AF14u: goto label_23af14;
            case 0x23AF94u: goto label_23af94;
            case 0x23B028u: goto label_23b028;
            case 0x23B03Cu: goto label_23b03c;
            case 0x23B05Cu: goto label_23b05c;
            case 0x23B06Cu: goto label_23b06c;
            case 0x23B080u: goto label_23b080;
            case 0x23B09Cu: goto label_23b09c;
            case 0x23B0A4u: goto label_23b0a4;
            case 0x23B0A8u: goto label_23b0a8;
            case 0x23B114u: goto label_23b114;
            case 0x23B140u: goto label_23b140;
            case 0x23B160u: goto label_23b160;
            case 0x23B164u: goto label_23b164;
            case 0x23B17Cu: goto label_23b17c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23B188u;
}
