#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterCalcTarget
// Address: 0x29ac08 - 0x29ae94
void CritterCalcTarget_0x29ac08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29ac08u;

    // 0x29ac08: 0x27bdff90
    ctx->pc = 0x29ac08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29ac0c: 0xffbf0050
    ctx->pc = 0x29ac0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x29ac10: 0xffb20040
    ctx->pc = 0x29ac10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x29ac14: 0xffb10030
    ctx->pc = 0x29ac14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x29ac18: 0xffb00020
    ctx->pc = 0x29ac18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x29ac1c: 0xe7b50068
    ctx->pc = 0x29ac1cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x29ac20: 0xe7b40060
    ctx->pc = 0x29ac20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x29ac24: 0x80802d
    ctx->pc = 0x29ac24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ac28: 0xa0882d
    ctx->pc = 0x29ac28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ac2c: 0x12200016
    ctx->pc = 0x29AC2Cu;
    {
        const bool branch_taken_0x29ac2c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x29AC30u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29ac2c) {
            ctx->pc = 0x29AC88u;
            goto label_29ac88;
        }
    }
    ctx->pc = 0x29AC34u;
    // 0x29ac34: 0xc601011c
    ctx->pc = 0x29ac34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ac38: 0xc6200010
    ctx->pc = 0x29ac38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ac3c: 0x46000834
    ctx->pc = 0x29ac3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ac40: 0x4501000c
    ctx->pc = 0x29AC40u;
    {
        const bool branch_taken_0x29ac40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ac40) {
            ctx->pc = 0x29AC74u;
            goto label_29ac74;
        }
    }
    ctx->pc = 0x29AC48u;
    // 0x29ac48: 0xc6210014
    ctx->pc = 0x29ac48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ac4c: 0x44800000
    ctx->pc = 0x29ac4cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x29ac50: 0x46010034
    ctx->pc = 0x29ac50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ac54: 0x0
    ctx->pc = 0x29ac54u;
    // NOP
    // 0x29ac58: 0x4502000c
    ctx->pc = 0x29AC58u;
    {
        const bool branch_taken_0x29ac58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ac58) {
            ctx->pc = 0x29AC5Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x29AC8Cu;
            goto label_29ac8c;
        }
    }
    ctx->pc = 0x29AC60u;
    // 0x29ac60: 0xc600011c
    ctx->pc = 0x29ac60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ac64: 0x46000836
    ctx->pc = 0x29ac64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ac68: 0x0
    ctx->pc = 0x29ac68u;
    // NOP
    // 0x29ac6c: 0x45020007
    ctx->pc = 0x29AC6Cu;
    {
        const bool branch_taken_0x29ac6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ac6c) {
            ctx->pc = 0x29AC70u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x29AC8Cu;
            goto label_29ac8c;
        }
    }
    ctx->pc = 0x29AC74u;
label_29ac74:
    // 0x29ac74: 0x3c016282
    ctx->pc = 0x29ac74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)25218 << 16));
    // 0x29ac78: 0x34211ab1
    ctx->pc = 0x29ac78u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 6833));
    // 0x29ac7c: 0x44810000
    ctx->pc = 0x29ac7cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29ac80: 0x1000007d
    ctx->pc = 0x29AC80u;
    {
        const bool branch_taken_0x29ac80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29AC84u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x29ac80) {
            ctx->pc = 0x29AE78u;
            goto label_29ae78;
        }
    }
    ctx->pc = 0x29AC88u;
label_29ac88:
    // 0x29ac88: 0xc4c00000
    ctx->pc = 0x29ac88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29ac8c:
    // 0x29ac8c: 0xc6010060
    ctx->pc = 0x29ac8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ac90: 0x46010001
    ctx->pc = 0x29ac90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29ac94: 0xe7a00010
    ctx->pc = 0x29ac94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x29ac98: 0xc4c30004
    ctx->pc = 0x29ac98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29ac9c: 0xc6020064
    ctx->pc = 0x29ac9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29aca0: 0xc4c00008
    ctx->pc = 0x29aca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29aca4: 0xc6010068
    ctx->pc = 0x29aca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29aca8: 0x46010001
    ctx->pc = 0x29aca8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29acac: 0xe7a00018
    ctx->pc = 0x29acacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x29acb0: 0x46021d41
    ctx->pc = 0x29acb0u;
    ctx->f[21] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x29acb4: 0xafa00014
    ctx->pc = 0x29acb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x29acb8: 0xc0b58ca
    ctx->pc = 0x29ACB8u;
    SET_GPR_U32(ctx, 31, 0x29ACC0u);
    ctx->pc = 0x29ACBCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2D6328u;
    {
        const uint32_t __entryPc = ctx->pc;
        SlowNormalVector_0x2d6328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ACC0u; }
    }
    if (ctx->pc != 0x29ACC0u) { return; }
    ctx->pc = 0x29ACC0u;
    // 0x29acc0: 0x12200048
    ctx->pc = 0x29ACC0u;
    {
        const bool branch_taken_0x29acc0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x29ACC4u;
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x29acc0) {
            ctx->pc = 0x29ADE4u;
            goto label_29ade4;
        }
    }
    ctx->pc = 0x29ACC8u;
    // 0x29acc8: 0xc6200000
    ctx->pc = 0x29acc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29accc: 0x4600a034
    ctx->pc = 0x29acccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29acd0: 0x0
    ctx->pc = 0x29acd0u;
    // NOP
    // 0x29acd4: 0x45000006
    ctx->pc = 0x29ACD4u;
    {
        const bool branch_taken_0x29acd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29ACD8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x29acd4) {
            ctx->pc = 0x29ACF0u;
            goto label_29acf0;
        }
    }
    ctx->pc = 0x29ACDCu;
    // 0x29acdc: 0x3c01625b
    ctx->pc = 0x29acdcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)25179 << 16));
    // 0x29ace0: 0x34210243
    ctx->pc = 0x29ace0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 579));
    // 0x29ace4: 0x44810000
    ctx->pc = 0x29ace4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29ace8: 0x10000064
    ctx->pc = 0x29ACE8u;
    {
        const bool branch_taken_0x29ace8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29ACECu;
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x29ace8) {
            ctx->pc = 0x29AE7Cu;
            goto label_29ae7c;
        }
    }
    ctx->pc = 0x29ACF0u;
label_29acf0:
    // 0x29acf0: 0xc6210004
    ctx->pc = 0x29acf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29acf4: 0x44800000
    ctx->pc = 0x29acf4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x29acf8: 0x46010034
    ctx->pc = 0x29acf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29acfc: 0x45000008
    ctx->pc = 0x29ACFCu;
    {
        const bool branch_taken_0x29acfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29acfc) {
            ctx->pc = 0x29AD20u;
            goto label_29ad20;
        }
    }
    ctx->pc = 0x29AD04u;
    // 0x29ad04: 0x46140834
    ctx->pc = 0x29ad04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ad08: 0x3c01625d
    ctx->pc = 0x29ad08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)25181 << 16));
    // 0x29ad0c: 0x34212d60
    ctx->pc = 0x29ad0cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 11616));
    // 0x29ad10: 0x44810000
    ctx->pc = 0x29ad10u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29ad14: 0x45010058
    ctx->pc = 0x29AD14u;
    {
        const bool branch_taken_0x29ad14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29AD18u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x29ad14) {
            ctx->pc = 0x29AE78u;
            goto label_29ae78;
        }
    }
    ctx->pc = 0x29AD1Cu;
    // 0x29ad1c: 0x44800000
    ctx->pc = 0x29ad1cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_29ad20:
    // 0x29ad20: 0x4600a834
    ctx->pc = 0x29ad20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ad24: 0x0
    ctx->pc = 0x29ad24u;
    // NOP
    // 0x29ad28: 0x45030001
    ctx->pc = 0x29AD28u;
    {
        const bool branch_taken_0x29ad28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ad28) {
            ctx->pc = 0x29AD2Cu;
            ctx->f[21] = FPU_NEG_S(ctx->f[21]);
            ctx->pc = 0x29AD30u;
            goto label_29ad30;
        }
    }
    ctx->pc = 0x29AD30u;
label_29ad30:
    // 0x29ad30: 0xc621001c
    ctx->pc = 0x29ad30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ad34: 0x44800000
    ctx->pc = 0x29ad34u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x29ad38: 0x46010034
    ctx->pc = 0x29ad38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ad3c: 0x0
    ctx->pc = 0x29ad3cu;
    // NOP
    // 0x29ad40: 0x4502000b
    ctx->pc = 0x29AD40u;
    {
        const bool branch_taken_0x29ad40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ad40) {
            ctx->pc = 0x29AD44u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->pc = 0x29AD70u;
            goto label_29ad70;
        }
    }
    ctx->pc = 0x29AD48u;
    // 0x29ad48: 0x46150834
    ctx->pc = 0x29ad48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ad4c: 0x0
    ctx->pc = 0x29ad4cu;
    // NOP
    // 0x29ad50: 0x45000006
    ctx->pc = 0x29AD50u;
    {
        const bool branch_taken_0x29ad50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29AD54u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x29ad50) {
            ctx->pc = 0x29AD6Cu;
            goto label_29ad6c;
        }
    }
    ctx->pc = 0x29AD58u;
    // 0x29ad58: 0x3c01625f
    ctx->pc = 0x29ad58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)25183 << 16));
    // 0x29ad5c: 0x3421587c
    ctx->pc = 0x29ad5cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 22652));
    // 0x29ad60: 0x44810000
    ctx->pc = 0x29ad60u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29ad64: 0x10000045
    ctx->pc = 0x29AD64u;
    {
        const bool branch_taken_0x29ad64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29AD68u;
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x29ad64) {
            ctx->pc = 0x29AE7Cu;
            goto label_29ae7c;
        }
    }
    ctx->pc = 0x29AD6Cu;
label_29ad6c:
    // 0x29ad6c: 0xc62c0008
    ctx->pc = 0x29ad6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_29ad70:
    // 0x29ad70: 0x26040030
    ctx->pc = 0x29ad70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 48));
    // 0x29ad74: 0x3a0282d
    ctx->pc = 0x29ad74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ad78: 0xc0b57e6
    ctx->pc = 0x29AD78u;
    SET_GPR_U32(ctx, 31, 0x29AD80u);
    ctx->pc = 0x29AD7Cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->pc = 0x2D5F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        YawVec3_0x2d5f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AD80u; }
    }
    if (ctx->pc != 0x29AD80u) { return; }
    ctx->pc = 0x29AD80u;
    // 0x29ad80: 0xafa00004
    ctx->pc = 0x29ad80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x29ad84: 0xc0b58ca
    ctx->pc = 0x29AD84u;
    SET_GPR_U32(ctx, 31, 0x29AD8Cu);
    ctx->pc = 0x29AD88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6328u;
    {
        const uint32_t __entryPc = ctx->pc;
        SlowNormalVector_0x2d6328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AD8Cu; }
    }
    if (ctx->pc != 0x29AD8Cu) { return; }
    ctx->pc = 0x29AD8Cu;
    // 0x29ad8c: 0xc7a10010
    ctx->pc = 0x29ad8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ad90: 0xc7a00000
    ctx->pc = 0x29ad90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ad94: 0x46000882
    ctx->pc = 0x29ad94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29ad98: 0xc7a00018
    ctx->pc = 0x29ad98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ad9c: 0xc7a10008
    ctx->pc = 0x29ad9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ada0: 0x46010002
    ctx->pc = 0x29ada0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29ada4: 0x46001080
    ctx->pc = 0x29ada4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29ada8: 0xc620000c
    ctx->pc = 0x29ada8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29adac: 0x46001034
    ctx->pc = 0x29adacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29adb0: 0x3c01626e
    ctx->pc = 0x29adb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)25198 << 16));
    // 0x29adb4: 0x34218645
    ctx->pc = 0x29adb4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 34373));
    // 0x29adb8: 0x44810000
    ctx->pc = 0x29adb8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29adbc: 0x4501002e
    ctx->pc = 0x29ADBCu;
    {
        const bool branch_taken_0x29adbc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29ADC0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x29adbc) {
            ctx->pc = 0x29AE78u;
            goto label_29ae78;
        }
    }
    ctx->pc = 0x29ADC4u;
    // 0x29adc4: 0x3c013f00
    ctx->pc = 0x29adc4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x29adc8: 0x44810000
    ctx->pc = 0x29adc8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29adcc: 0x46020034
    ctx->pc = 0x29adccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29add0: 0x0
    ctx->pc = 0x29add0u;
    // NOP
    // 0x29add4: 0x45030018
    ctx->pc = 0x29ADD4u;
    {
        const bool branch_taken_0x29add4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29add4) {
            ctx->pc = 0x29ADD8u;
            ctx->f[0] = FPU_ABS_S(ctx->f[2]);
            ctx->pc = 0x29AE38u;
            goto label_29ae38;
        }
    }
    ctx->pc = 0x29ADDCu;
    // 0x29addc: 0x10000019
    ctx->pc = 0x29ADDCu;
    {
        const bool branch_taken_0x29addc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29ADE0u;
        ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
        if (branch_taken_0x29addc) {
            ctx->pc = 0x29AE44u;
            goto label_29ae44;
        }
    }
    ctx->pc = 0x29ADE4u;
label_29ade4:
    // 0x29ade4: 0xc6000030
    ctx->pc = 0x29ade4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ade8: 0xe7a00000
    ctx->pc = 0x29ade8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29adec: 0xafa00004
    ctx->pc = 0x29adecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x29adf0: 0xc6000038
    ctx->pc = 0x29adf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29adf4: 0xe7a00008
    ctx->pc = 0x29adf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29adf8: 0xc0b58ca
    ctx->pc = 0x29ADF8u;
    SET_GPR_U32(ctx, 31, 0x29AE00u);
    ctx->pc = 0x29ADFCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6328u;
    {
        const uint32_t __entryPc = ctx->pc;
        SlowNormalVector_0x2d6328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AE00u; }
    }
    if (ctx->pc != 0x29AE00u) { return; }
    ctx->pc = 0x29AE00u;
    // 0x29ae00: 0xc7a10010
    ctx->pc = 0x29ae00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ae04: 0xc7a00000
    ctx->pc = 0x29ae04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ae08: 0x46000882
    ctx->pc = 0x29ae08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29ae0c: 0xc7a00018
    ctx->pc = 0x29ae0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ae10: 0xc7a10008
    ctx->pc = 0x29ae10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ae14: 0x46010002
    ctx->pc = 0x29ae14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29ae18: 0x46001080
    ctx->pc = 0x29ae18u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29ae1c: 0x3c013f00
    ctx->pc = 0x29ae1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x29ae20: 0x44810000
    ctx->pc = 0x29ae20u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29ae24: 0x46020034
    ctx->pc = 0x29ae24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ae28: 0x0
    ctx->pc = 0x29ae28u;
    // NOP
    // 0x29ae2c: 0x45020005
    ctx->pc = 0x29AE2Cu;
    {
        const bool branch_taken_0x29ae2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ae2c) {
            ctx->pc = 0x29AE30u;
            ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
            ctx->pc = 0x29AE44u;
            goto label_29ae44;
        }
    }
    ctx->pc = 0x29AE34u;
    // 0x29ae34: 0x46001005
    ctx->pc = 0x29ae34u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
label_29ae38:
    // 0x29ae38: 0x0
    ctx->pc = 0x29ae38u;
    // NOP
    // 0x29ae3c: 0x0
    ctx->pc = 0x29ae3cu;
    // NOP
    // 0x29ae40: 0x4600a043
    ctx->pc = 0x29ae40u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[1] = ctx->f[20] / ctx->f[0];
label_29ae44:
    // 0x29ae44: 0x1240000b
    ctx->pc = 0x29AE44u;
    {
        const bool branch_taken_0x29ae44 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x29AE48u;
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        if (branch_taken_0x29ae44) {
            ctx->pc = 0x29AE74u;
            goto label_29ae74;
        }
    }
    ctx->pc = 0x29AE4Cu;
    // 0x29ae4c: 0xe6420004
    ctx->pc = 0x29ae4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x29ae50: 0xe6540008
    ctx->pc = 0x29ae50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x29ae54: 0xe641000c
    ctx->pc = 0x29ae54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x29ae58: 0xc7a00010
    ctx->pc = 0x29ae58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ae5c: 0xe6400020
    ctx->pc = 0x29ae5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x29ae60: 0xc7a00014
    ctx->pc = 0x29ae60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ae64: 0xe6400024
    ctx->pc = 0x29ae64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x29ae68: 0xc7a00018
    ctx->pc = 0x29ae68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ae6c: 0xe6400028
    ctx->pc = 0x29ae6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x29ae70: 0x46000806
    ctx->pc = 0x29ae70u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_29ae74:
    // 0x29ae74: 0xdfbf0050
    ctx->pc = 0x29ae74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_29ae78:
    // 0x29ae78: 0xdfb20040
    ctx->pc = 0x29ae78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29ae7c:
    // 0x29ae7c: 0xdfb10030
    ctx->pc = 0x29ae7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29ae80: 0xdfb00020
    ctx->pc = 0x29ae80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29ae84: 0xc7b50068
    ctx->pc = 0x29ae84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29ae88: 0xc7b40060
    ctx->pc = 0x29ae88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29ae8c: 0x3e00008
    ctx->pc = 0x29AE8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AE90u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29AC74u: goto label_29ac74;
            case 0x29AC88u: goto label_29ac88;
            case 0x29AC8Cu: goto label_29ac8c;
            case 0x29ACF0u: goto label_29acf0;
            case 0x29AD20u: goto label_29ad20;
            case 0x29AD30u: goto label_29ad30;
            case 0x29AD6Cu: goto label_29ad6c;
            case 0x29AD70u: goto label_29ad70;
            case 0x29ADE4u: goto label_29ade4;
            case 0x29AE38u: goto label_29ae38;
            case 0x29AE44u: goto label_29ae44;
            case 0x29AE74u: goto label_29ae74;
            case 0x29AE78u: goto label_29ae78;
            case 0x29AE7Cu: goto label_29ae7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29AE94u;
}
