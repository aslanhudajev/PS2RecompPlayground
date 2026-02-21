#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: getNewDirSphere
// Address: 0x2ccd38 - 0x2ccf1c
void getNewDirSphere_0x2ccd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ccd38u;

    // 0x2ccd38: 0x27bdffb0
    ctx->pc = 0x2ccd38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ccd3c: 0xffbf0020
    ctx->pc = 0x2ccd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ccd40: 0xffb10010
    ctx->pc = 0x2ccd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ccd44: 0xffb00000
    ctx->pc = 0x2ccd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ccd48: 0xe7b60040
    ctx->pc = 0x2ccd48u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2ccd4c: 0xe7b50038
    ctx->pc = 0x2ccd4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2ccd50: 0xe7b40030
    ctx->pc = 0x2ccd50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2ccd54: 0x80802d
    ctx->pc = 0x2ccd54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccd58: 0x96040030
    ctx->pc = 0x2ccd58u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2ccd5c: 0xc0b32d4
    ctx->pc = 0x2CCD5Cu;
    SET_GPR_U32(ctx, 31, 0x2CCD64u);
    ctx->pc = 0x2CCD60u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->pc = 0x2CCB50u;
    {
        const uint32_t __entryPc = ctx->pc;
        getRandomIdx_0x2ccb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCD64u; }
    }
    if (ctx->pc != 0x2CCD64u) { return; }
    ctx->pc = 0x2CCD64u;
    // 0x2ccd64: 0x40882d
    ctx->pc = 0x2ccd64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccd68: 0x6200065
    ctx->pc = 0x2CCD68u;
    {
        const bool branch_taken_0x2ccd68 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2CCD6Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2ccd68) {
            ctx->pc = 0x2CCF00u;
            goto label_2ccf00;
        }
    }
    ctx->pc = 0x2CCD70u;
    // 0x2ccd70: 0x8e020014
    ctx->pc = 0x2ccd70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2ccd74: 0x511021
    ctx->pc = 0x2ccd74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2ccd78: 0x90420000
    ctx->pc = 0x2ccd78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ccd7c: 0x2c420002
    ctx->pc = 0x2ccd7cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x2ccd80: 0x1040005d
    ctx->pc = 0x2CCD80u;
    {
        const bool branch_taken_0x2ccd80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CCD84u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x2ccd80) {
            ctx->pc = 0x2CCEF8u;
            goto label_2ccef8;
        }
    }
    ctx->pc = 0x2CCD88u;
    // 0x2ccd88: 0x2221018
    ctx->pc = 0x2ccd88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2ccd8c: 0x8e03000c
    ctx->pc = 0x2ccd8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ccd90: 0xc0abc06
    ctx->pc = 0x2CCD90u;
    SET_GPR_U32(ctx, 31, 0x2CCD98u);
    ctx->pc = 0x2CCD94u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x2AF018u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbRand_0x2af018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCD98u; }
    }
    if (ctx->pc != 0x2CCD98u) { return; }
    ctx->pc = 0x2CCD98u;
    // 0x2ccd98: 0x30437fff
    ctx->pc = 0x2ccd98u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 32767));
    // 0x2ccd9c: 0x4600005
    ctx->pc = 0x2CCD9Cu;
    {
        const bool branch_taken_0x2ccd9c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CCDA0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2ccd9c) {
            ctx->pc = 0x2CCDB4u;
            goto label_2ccdb4;
        }
    }
    ctx->pc = 0x2CCDA4u;
    // 0x2ccda4: 0x4483b000
    ctx->pc = 0x2ccda4u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 3);
    // 0x2ccda8: 0x4680b5a0
    ctx->pc = 0x2ccda8u;
    ctx->f[22] = FPU_CVT_S_W(*(int32_t*)&ctx->f[22]);
    // 0x2ccdac: 0x10000006
    ctx->pc = 0x2CCDACu;
    {
        const bool branch_taken_0x2ccdac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ccdac) {
            ctx->pc = 0x2CCDC8u;
            goto label_2ccdc8;
        }
    }
    ctx->pc = 0x2CCDB4u;
label_2ccdb4:
    // 0x2ccdb4: 0x31842
    ctx->pc = 0x2ccdb4u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2ccdb8: 0x431025
    ctx->pc = 0x2ccdb8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ccdbc: 0x4482b000
    ctx->pc = 0x2ccdbcu;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 2);
    // 0x2ccdc0: 0x4680b5a0
    ctx->pc = 0x2ccdc0u;
    ctx->f[22] = FPU_CVT_S_W(*(int32_t*)&ctx->f[22]);
    // 0x2ccdc4: 0x4616b580
    ctx->pc = 0x2ccdc4u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[22]);
label_2ccdc8:
    // 0x2ccdc8: 0x3c0136cc
    ctx->pc = 0x2ccdc8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14028 << 16));
    // 0x2ccdcc: 0x3421ce67
    ctx->pc = 0x2ccdccu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52839));
    // 0x2ccdd0: 0x44810000
    ctx->pc = 0x2ccdd0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2ccdd4: 0x4600b582
    ctx->pc = 0x2ccdd4u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x2ccdd8: 0x3c013dcc
    ctx->pc = 0x2ccdd8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x2ccddc: 0x3421cccd
    ctx->pc = 0x2ccddcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x2ccde0: 0x44810000
    ctx->pc = 0x2ccde0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2ccde4: 0xc0abc06
    ctx->pc = 0x2CCDE4u;
    SET_GPR_U32(ctx, 31, 0x2CCDECu);
    ctx->pc = 0x2CCDE8u;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    ctx->pc = 0x2AF018u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbRand_0x2af018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCDECu; }
    }
    if (ctx->pc != 0x2CCDECu) { return; }
    ctx->pc = 0x2CCDECu;
    // 0x2ccdec: 0x30437fff
    ctx->pc = 0x2ccdecu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 32767));
    // 0x2ccdf0: 0x4600005
    ctx->pc = 0x2CCDF0u;
    {
        const bool branch_taken_0x2ccdf0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CCDF4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2ccdf0) {
            ctx->pc = 0x2CCE08u;
            goto label_2cce08;
        }
    }
    ctx->pc = 0x2CCDF8u;
    // 0x2ccdf8: 0x4483a800
    ctx->pc = 0x2ccdf8u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 3);
    // 0x2ccdfc: 0x4680ad60
    ctx->pc = 0x2ccdfcu;
    ctx->f[21] = FPU_CVT_S_W(*(int32_t*)&ctx->f[21]);
    // 0x2cce00: 0x10000006
    ctx->pc = 0x2CCE00u;
    {
        const bool branch_taken_0x2cce00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cce00) {
            ctx->pc = 0x2CCE1Cu;
            goto label_2cce1c;
        }
    }
    ctx->pc = 0x2CCE08u;
label_2cce08:
    // 0x2cce08: 0x31842
    ctx->pc = 0x2cce08u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2cce0c: 0x431025
    ctx->pc = 0x2cce0cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cce10: 0x4482a800
    ctx->pc = 0x2cce10u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 2);
    // 0x2cce14: 0x4680ad60
    ctx->pc = 0x2cce14u;
    ctx->f[21] = FPU_CVT_S_W(*(int32_t*)&ctx->f[21]);
    // 0x2cce18: 0x4615ad40
    ctx->pc = 0x2cce18u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_2cce1c:
    // 0x2cce1c: 0x3c0136cc
    ctx->pc = 0x2cce1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)14028 << 16));
    // 0x2cce20: 0x3421ce67
    ctx->pc = 0x2cce20u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52839));
    // 0x2cce24: 0x44810000
    ctx->pc = 0x2cce24u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cce28: 0x4600ad42
    ctx->pc = 0x2cce28u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2cce2c: 0x3c013dcc
    ctx->pc = 0x2cce2cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x2cce30: 0x3421cccd
    ctx->pc = 0x2cce30u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x2cce34: 0x44810000
    ctx->pc = 0x2cce34u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cce38: 0xc0abc06
    ctx->pc = 0x2CCE38u;
    SET_GPR_U32(ctx, 31, 0x2CCE40u);
    ctx->pc = 0x2CCE3Cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    ctx->pc = 0x2AF018u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbRand_0x2af018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCE40u; }
    }
    if (ctx->pc != 0x2CCE40u) { return; }
    ctx->pc = 0x2CCE40u;
    // 0x2cce40: 0x30437fff
    ctx->pc = 0x2cce40u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 32767));
    // 0x2cce44: 0x4600005
    ctx->pc = 0x2CCE44u;
    {
        const bool branch_taken_0x2cce44 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CCE48u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2cce44) {
            ctx->pc = 0x2CCE5Cu;
            goto label_2cce5c;
        }
    }
    ctx->pc = 0x2CCE4Cu;
    // 0x2cce4c: 0x4483a000
    ctx->pc = 0x2cce4cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 3);
    // 0x2cce50: 0x4680a520
    ctx->pc = 0x2cce50u;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[20]);
    // 0x2cce54: 0x10000006
    ctx->pc = 0x2CCE54u;
    {
        const bool branch_taken_0x2cce54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cce54) {
            ctx->pc = 0x2CCE70u;
            goto label_2cce70;
        }
    }
    ctx->pc = 0x2CCE5Cu;
label_2cce5c:
    // 0x2cce5c: 0x31842
    ctx->pc = 0x2cce5cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2cce60: 0x431025
    ctx->pc = 0x2cce60u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cce64: 0x4482a000
    ctx->pc = 0x2cce64u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 2);
    // 0x2cce68: 0x4680a520
    ctx->pc = 0x2cce68u;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[20]);
    // 0x2cce6c: 0x4614a500
    ctx->pc = 0x2cce6cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_2cce70:
    // 0x2cce70: 0x3c0136cc
    ctx->pc = 0x2cce70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14028 << 16));
    // 0x2cce74: 0x3421ce67
    ctx->pc = 0x2cce74u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52839));
    // 0x2cce78: 0x44810000
    ctx->pc = 0x2cce78u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cce7c: 0x4600a502
    ctx->pc = 0x2cce7cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2cce80: 0x3c013dcc
    ctx->pc = 0x2cce80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x2cce84: 0x3421cccd
    ctx->pc = 0x2cce84u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x2cce88: 0x44810000
    ctx->pc = 0x2cce88u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cce8c: 0x4600a501
    ctx->pc = 0x2cce8cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2cce90: 0x4600b306
    ctx->pc = 0x2cce90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2cce94: 0xc0b5c34
    ctx->pc = 0x2CCE94u;
    SET_GPR_U32(ctx, 31, 0x2CCE9Cu);
    ctx->pc = 0x2CCE98u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCE9Cu; }
    }
    if (ctx->pc != 0x2CCE9Cu) { return; }
    ctx->pc = 0x2CCE9Cu;
    // 0x2cce9c: 0x46000306
    ctx->pc = 0x2cce9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2ccea0: 0xc0b5c34
    ctx->pc = 0x2CCEA0u;
    SET_GPR_U32(ctx, 31, 0x2CCEA8u);
    ctx->pc = 0x2CCEA4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCEA8u; }
    }
    if (ctx->pc != 0x2CCEA8u) { return; }
    ctx->pc = 0x2CCEA8u;
    // 0x2ccea8: 0x46000046
    ctx->pc = 0x2ccea8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2cceac: 0x44800000
    ctx->pc = 0x2cceacu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2cceb0: 0x46010034
    ctx->pc = 0x2cceb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cceb4: 0x0
    ctx->pc = 0x2cceb4u;
    // NOP
    // 0x2cceb8: 0x4502000d
    ctx->pc = 0x2CCEB8u;
    {
        const bool branch_taken_0x2cceb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cceb8) {
            ctx->pc = 0x2CCEBCu;
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
            ctx->pc = 0x2CCEF0u;
            goto label_2ccef0;
        }
    }
    ctx->pc = 0x2CCEC0u;
    // 0x2ccec0: 0x3c013f80
    ctx->pc = 0x2ccec0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2ccec4: 0x44810000
    ctx->pc = 0x2ccec4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2ccec8: 0x0
    ctx->pc = 0x2ccec8u;
    // NOP
    // 0x2ccecc: 0x0
    ctx->pc = 0x2cceccu;
    // NOP
    // 0x2cced0: 0x46010303
    ctx->pc = 0x2cced0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
    // 0x2cced4: 0x460ca002
    ctx->pc = 0x2cced4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x2cced8: 0xe6000008
    ctx->pc = 0x2cced8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2ccedc: 0x460ca802
    ctx->pc = 0x2ccedcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    // 0x2ccee0: 0xe6000004
    ctx->pc = 0x2ccee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2ccee4: 0x460cb002
    ctx->pc = 0x2ccee4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[12]);
    // 0x2ccee8: 0x10000003
    ctx->pc = 0x2CCEE8u;
    {
        const bool branch_taken_0x2ccee8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CCEECu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        if (branch_taken_0x2ccee8) {
            ctx->pc = 0x2CCEF8u;
            goto label_2ccef8;
        }
    }
    ctx->pc = 0x2CCEF0u;
label_2ccef0:
    // 0x2ccef0: 0xe6150004
    ctx->pc = 0x2ccef0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2ccef4: 0xe6160000
    ctx->pc = 0x2ccef4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_2ccef8:
    // 0x2ccef8: 0x220102d
    ctx->pc = 0x2ccef8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccefc: 0xdfbf0020
    ctx->pc = 0x2ccefcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ccf00:
    // 0x2ccf00: 0xdfb10010
    ctx->pc = 0x2ccf00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ccf04: 0xdfb00000
    ctx->pc = 0x2ccf04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ccf08: 0xc7b60040
    ctx->pc = 0x2ccf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2ccf0c: 0xc7b50038
    ctx->pc = 0x2ccf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ccf10: 0xc7b40030
    ctx->pc = 0x2ccf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ccf14: 0x3e00008
    ctx->pc = 0x2CCF14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCF18u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CCDB4u: goto label_2ccdb4;
            case 0x2CCDC8u: goto label_2ccdc8;
            case 0x2CCE08u: goto label_2cce08;
            case 0x2CCE1Cu: goto label_2cce1c;
            case 0x2CCE5Cu: goto label_2cce5c;
            case 0x2CCE70u: goto label_2cce70;
            case 0x2CCEF0u: goto label_2ccef0;
            case 0x2CCEF8u: goto label_2ccef8;
            case 0x2CCF00u: goto label_2ccf00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CCF1Cu;
}
