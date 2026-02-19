#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: getNewDirSphereConsec
// Address: 0x2ccf20 - 0x2cd09c
void getNewDirSphereConsec_0x2ccf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ccf20u;

    // 0x2ccf20: 0x27bdffc0
    ctx->pc = 0x2ccf20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ccf24: 0xffbf0020
    ctx->pc = 0x2ccf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ccf28: 0xffb10010
    ctx->pc = 0x2ccf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ccf2c: 0xffb00000
    ctx->pc = 0x2ccf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ccf30: 0xe7b50038
    ctx->pc = 0x2ccf30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2ccf34: 0xe7b40030
    ctx->pc = 0x2ccf34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2ccf38: 0x80802d
    ctx->pc = 0x2ccf38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf3c: 0x96040030
    ctx->pc = 0x2ccf3cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2ccf40: 0x2605001c
    ctx->pc = 0x2ccf40u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 28));
    // 0x2ccf44: 0xc0b330e
    ctx->pc = 0x2CCF44u;
    SET_GPR_U32(ctx, 31, 0x2CCF4Cu);
    ctx->pc = 0x2CCF48u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2CCC38u;
    {
        const uint32_t __entryPc = ctx->pc;
        getUniqueIdx_0x2ccc38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCF4Cu; }
    }
    if (ctx->pc != 0x2CCF4Cu) { return; }
    ctx->pc = 0x2CCF4Cu;
    // 0x2ccf4c: 0x40882d
    ctx->pc = 0x2ccf4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf50: 0x8e020014
    ctx->pc = 0x2ccf50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2ccf54: 0x511021
    ctx->pc = 0x2ccf54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2ccf58: 0x90430000
    ctx->pc = 0x2ccf58u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ccf5c: 0x18600009
    ctx->pc = 0x2CCF5Cu;
    {
        const bool branch_taken_0x2ccf5c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2CCF60u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
        if (branch_taken_0x2ccf5c) {
            ctx->pc = 0x2CCF84u;
            goto label_2ccf84;
        }
    }
    ctx->pc = 0x2CCF64u;
    // 0x2ccf64: 0x54620003
    ctx->pc = 0x2CCF64u;
    {
        const bool branch_taken_0x2ccf64 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2ccf64) {
            ctx->pc = 0x2CCF68u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->pc = 0x2CCF74u;
            goto label_2ccf74;
        }
    }
    ctx->pc = 0x2CCF6Cu;
    // 0x2ccf6c: 0x10000044
    ctx->pc = 0x2CCF6Cu;
    {
        const bool branch_taken_0x2ccf6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CCF70u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2ccf6c) {
            ctx->pc = 0x2CD080u;
            goto label_2cd080;
        }
    }
    ctx->pc = 0x2CCF74u;
label_2ccf74:
    // 0x2ccf74: 0x511021
    ctx->pc = 0x2ccf74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2ccf78: 0x24630001
    ctx->pc = 0x2ccf78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ccf7c: 0x1000003f
    ctx->pc = 0x2CCF7Cu;
    {
        const bool branch_taken_0x2ccf7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CCF80u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x2ccf7c) {
            ctx->pc = 0x2CD07Cu;
            goto label_2cd07c;
        }
    }
    ctx->pc = 0x2CCF84u;
label_2ccf84:
    // 0x2ccf84: 0x8e020014
    ctx->pc = 0x2ccf84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2ccf88: 0x511021
    ctx->pc = 0x2ccf88u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2ccf8c: 0x24030001
    ctx->pc = 0x2ccf8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccf90: 0xa0430000
    ctx->pc = 0x2ccf90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ccf94: 0x2402000c
    ctx->pc = 0x2ccf94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ccf98: 0x2221018
    ctx->pc = 0x2ccf98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2ccf9c: 0x8e03000c
    ctx->pc = 0x2ccf9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ccfa0: 0xc0abc06
    ctx->pc = 0x2CCFA0u;
    SET_GPR_U32(ctx, 31, 0x2CCFA8u);
    ctx->pc = 0x2CCFA4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x2AF018u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbRand_0x2af018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCFA8u; }
    }
    if (ctx->pc != 0x2CCFA8u) { return; }
    ctx->pc = 0x2CCFA8u;
    // 0x2ccfa8: 0x30437fff
    ctx->pc = 0x2ccfa8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 32767));
    // 0x2ccfac: 0x4600005
    ctx->pc = 0x2CCFACu;
    {
        const bool branch_taken_0x2ccfac = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CCFB0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2ccfac) {
            ctx->pc = 0x2CCFC4u;
            goto label_2ccfc4;
        }
    }
    ctx->pc = 0x2CCFB4u;
    // 0x2ccfb4: 0x4483a800
    ctx->pc = 0x2ccfb4u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 3);
    // 0x2ccfb8: 0x4680ad60
    ctx->pc = 0x2ccfb8u;
    ctx->f[21] = FPU_CVT_S_W(*(int32_t*)&ctx->f[21]);
    // 0x2ccfbc: 0x10000006
    ctx->pc = 0x2CCFBCu;
    {
        const bool branch_taken_0x2ccfbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ccfbc) {
            ctx->pc = 0x2CCFD8u;
            goto label_2ccfd8;
        }
    }
    ctx->pc = 0x2CCFC4u;
label_2ccfc4:
    // 0x2ccfc4: 0x31842
    ctx->pc = 0x2ccfc4u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2ccfc8: 0x431025
    ctx->pc = 0x2ccfc8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ccfcc: 0x4482a800
    ctx->pc = 0x2ccfccu;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 2);
    // 0x2ccfd0: 0x4680ad60
    ctx->pc = 0x2ccfd0u;
    ctx->f[21] = FPU_CVT_S_W(*(int32_t*)&ctx->f[21]);
    // 0x2ccfd4: 0x4615ad40
    ctx->pc = 0x2ccfd4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_2ccfd8:
    // 0x2ccfd8: 0x3c013880
    ctx->pc = 0x2ccfd8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14464 << 16));
    // 0x2ccfdc: 0x34210100
    ctx->pc = 0x2ccfdcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 256));
    // 0x2ccfe0: 0x44810000
    ctx->pc = 0x2ccfe0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2ccfe4: 0x4600ad42
    ctx->pc = 0x2ccfe4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2ccfe8: 0x3c013f80
    ctx->pc = 0x2ccfe8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2ccfec: 0x44810000
    ctx->pc = 0x2ccfecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2ccff0: 0xc0abc06
    ctx->pc = 0x2CCFF0u;
    SET_GPR_U32(ctx, 31, 0x2CCFF8u);
    ctx->pc = 0x2CCFF4u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    ctx->pc = 0x2AF018u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbRand_0x2af018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCFF8u; }
    }
    if (ctx->pc != 0x2CCFF8u) { return; }
    ctx->pc = 0x2CCFF8u;
    // 0x2ccff8: 0x30437fff
    ctx->pc = 0x2ccff8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 32767));
    // 0x2ccffc: 0x4600005
    ctx->pc = 0x2CCFFCu;
    {
        const bool branch_taken_0x2ccffc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CD000u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2ccffc) {
            ctx->pc = 0x2CD014u;
            goto label_2cd014;
        }
    }
    ctx->pc = 0x2CD004u;
    // 0x2cd004: 0x4483a000
    ctx->pc = 0x2cd004u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 3);
    // 0x2cd008: 0x4680a520
    ctx->pc = 0x2cd008u;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[20]);
    // 0x2cd00c: 0x10000006
    ctx->pc = 0x2CD00Cu;
    {
        const bool branch_taken_0x2cd00c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cd00c) {
            ctx->pc = 0x2CD028u;
            goto label_2cd028;
        }
    }
    ctx->pc = 0x2CD014u;
label_2cd014:
    // 0x2cd014: 0x31842
    ctx->pc = 0x2cd014u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2cd018: 0x431025
    ctx->pc = 0x2cd018u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cd01c: 0x4482a000
    ctx->pc = 0x2cd01cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 2);
    // 0x2cd020: 0x4680a520
    ctx->pc = 0x2cd020u;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[20]);
    // 0x2cd024: 0x4614a500
    ctx->pc = 0x2cd024u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_2cd028:
    // 0x2cd028: 0x3c013880
    ctx->pc = 0x2cd028u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14464 << 16));
    // 0x2cd02c: 0x34210100
    ctx->pc = 0x2cd02cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 256));
    // 0x2cd030: 0x44810000
    ctx->pc = 0x2cd030u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cd034: 0x4600a502
    ctx->pc = 0x2cd034u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2cd038: 0x3c013f80
    ctx->pc = 0x2cd038u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2cd03c: 0x44816000
    ctx->pc = 0x2cd03cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2cd040: 0x460ca501
    ctx->pc = 0x2cd040u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
    // 0x2cd044: 0x4615a802
    ctx->pc = 0x2cd044u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x2cd048: 0x46006301
    ctx->pc = 0x2cd048u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2cd04c: 0x4614a002
    ctx->pc = 0x2cd04cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2cd050: 0xc0b5c44
    ctx->pc = 0x2CD050u;
    SET_GPR_U32(ctx, 31, 0x2CD058u);
    ctx->pc = 0x2CD054u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    ctx->pc = 0x2D7110u;
    {
        const uint32_t __entryPc = ctx->pc;
        smallsqrt_0x2d7110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD058u; }
    }
    if (ctx->pc != 0x2CD058u) { return; }
    ctx->pc = 0x2CD058u;
    // 0x2cd058: 0xe6000008
    ctx->pc = 0x2cd058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2cd05c: 0xe6140004
    ctx->pc = 0x2cd05cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2cd060: 0xe6150000
    ctx->pc = 0x2cd060u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2cd064: 0x8e020000
    ctx->pc = 0x2cd064u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cd068: 0x30420002
    ctx->pc = 0x2cd068u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x2cd06c: 0x10400004
    ctx->pc = 0x2CD06Cu;
    {
        const bool branch_taken_0x2cd06c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CD070u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cd06c) {
            ctx->pc = 0x2CD080u;
            goto label_2cd080;
        }
    }
    ctx->pc = 0x2CD074u;
    // 0x2cd074: 0x46000007
    ctx->pc = 0x2cd074u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2cd078: 0xe6000008
    ctx->pc = 0x2cd078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_2cd07c:
    // 0x2cd07c: 0x220102d
    ctx->pc = 0x2cd07cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cd080:
    // 0x2cd080: 0xdfbf0020
    ctx->pc = 0x2cd080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cd084: 0xdfb10010
    ctx->pc = 0x2cd084u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd088: 0xdfb00000
    ctx->pc = 0x2cd088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd08c: 0xc7b50038
    ctx->pc = 0x2cd08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2cd090: 0xc7b40030
    ctx->pc = 0x2cd090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cd094: 0x3e00008
    ctx->pc = 0x2CD094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD098u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CCF74u: goto label_2ccf74;
            case 0x2CCF84u: goto label_2ccf84;
            case 0x2CCFC4u: goto label_2ccfc4;
            case 0x2CCFD8u: goto label_2ccfd8;
            case 0x2CD014u: goto label_2cd014;
            case 0x2CD028u: goto label_2cd028;
            case 0x2CD07Cu: goto label_2cd07c;
            case 0x2CD080u: goto label_2cd080;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CD09Cu;
}
