#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: getRandomIdx
// Address: 0x2ccb50 - 0x2ccc38
void getRandomIdx_0x2ccb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ccb50u;

    // 0x2ccb50: 0x27bdffd0
    ctx->pc = 0x2ccb50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ccb54: 0xffbf0020
    ctx->pc = 0x2ccb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ccb58: 0xffb10010
    ctx->pc = 0x2ccb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ccb5c: 0xffb00000
    ctx->pc = 0x2ccb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ccb60: 0x80802d
    ctx->pc = 0x2ccb60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccb64: 0xc0abc06
    ctx->pc = 0x2CCB64u;
    SET_GPR_U32(ctx, 31, 0x2CCB6Cu);
    ctx->pc = 0x2CCB68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2AF018u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbRand_0x2af018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCB6Cu; }
    }
    if (ctx->pc != 0x2CCB6Cu) { return; }
    ctx->pc = 0x2CCB6Cu;
    // 0x2ccb6c: 0x30437fff
    ctx->pc = 0x2ccb6cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 32767));
    // 0x2ccb70: 0x4600007
    ctx->pc = 0x2CCB70u;
    {
        const bool branch_taken_0x2ccb70 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CCB74u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2ccb70) {
            ctx->pc = 0x2CCB90u;
            goto label_2ccb90;
        }
    }
    ctx->pc = 0x2CCB78u;
    // 0x2ccb78: 0x44831000
    ctx->pc = 0x2ccb78u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
    // 0x2ccb7c: 0x468010a0
    ctx->pc = 0x2ccb7cu;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x2ccb80: 0x10000008
    ctx->pc = 0x2CCB80u;
    {
        const bool branch_taken_0x2ccb80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ccb80) {
            ctx->pc = 0x2CCBA4u;
            goto label_2ccba4;
        }
    }
    ctx->pc = 0x2CCB88u;
label_2ccb88:
    // 0x2ccb88: 0x10000026
    ctx->pc = 0x2CCB88u;
    {
        const bool branch_taken_0x2ccb88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CCB8Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ccb88) {
            ctx->pc = 0x2CCC24u;
            goto label_2ccc24;
        }
    }
    ctx->pc = 0x2CCB90u;
label_2ccb90:
    // 0x2ccb90: 0x31842
    ctx->pc = 0x2ccb90u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2ccb94: 0x431025
    ctx->pc = 0x2ccb94u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ccb98: 0x44821000
    ctx->pc = 0x2ccb98u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x2ccb9c: 0x468010a0
    ctx->pc = 0x2ccb9cu;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x2ccba0: 0x46021080
    ctx->pc = 0x2ccba0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2ccba4:
    // 0x2ccba4: 0x44900000
    ctx->pc = 0x2ccba4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 16);
    // 0x2ccba8: 0x46800020
    ctx->pc = 0x2ccba8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2ccbac: 0x3c013800
    ctx->pc = 0x2ccbacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)14336 << 16));
    // 0x2ccbb0: 0x34210100
    ctx->pc = 0x2ccbb0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 256));
    // 0x2ccbb4: 0x44810800
    ctx->pc = 0x2ccbb4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2ccbb8: 0x46010002
    ctx->pc = 0x2ccbb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ccbbc: 0x46001002
    ctx->pc = 0x2ccbbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2ccbc0: 0x46000064
    ctx->pc = 0x2ccbc0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2ccbc4: 0x44060800
    ctx->pc = 0x2ccbc4u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x2ccbc8: 0xd0182a
    ctx->pc = 0x2ccbc8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 16)));
    // 0x2ccbcc: 0x2602ffff
    ctx->pc = 0x2ccbccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2ccbd0: 0x43300a
    ctx->pc = 0x2ccbd0u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 2));
    // 0x2ccbd4: 0x2261021
    ctx->pc = 0x2ccbd4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2ccbd8: 0x90470000
    ctx->pc = 0x2ccbd8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ccbdc: 0x240200ff
    ctx->pc = 0x2ccbdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x2ccbe0: 0x14e2000d
    ctx->pc = 0x2CCBE0u;
    {
        const bool branch_taken_0x2ccbe0 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        ctx->pc = 0x2CCBE4u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        if (branch_taken_0x2ccbe0) {
            ctx->pc = 0x2CCC18u;
            goto label_2ccc18;
        }
    }
    ctx->pc = 0x2CCBE8u;
    // 0x2ccbe8: 0xc0182d
    ctx->pc = 0x2ccbe8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccbec: 0x2604ffff
    ctx->pc = 0x2ccbecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2ccbf0: 0x240500ff
    ctx->pc = 0x2ccbf0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    // 0x2ccbf4: 0x24c2ffff
    ctx->pc = 0x2ccbf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 4294967295));
label_2ccbf8:
    // 0x2ccbf8: 0x86100a
    ctx->pc = 0x2ccbf8u;
    if (GPR_U32(ctx, 6) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x2ccbfc: 0x40302d
    ctx->pc = 0x2ccbfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccc00: 0x10c3ffe1
    ctx->pc = 0x2CCC00u;
    {
        const bool branch_taken_0x2ccc00 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        ctx->pc = 0x2CCC04u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        if (branch_taken_0x2ccc00) {
            ctx->pc = 0x2CCB88u;
            goto label_2ccb88;
        }
    }
    ctx->pc = 0x2CCC08u;
    // 0x2ccc08: 0x90470000
    ctx->pc = 0x2ccc08u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ccc0c: 0x10e5fffa
    ctx->pc = 0x2CCC0Cu;
    {
        const bool branch_taken_0x2ccc0c = (GPR_U32(ctx, 7) == GPR_U32(ctx, 5));
        ctx->pc = 0x2CCC10u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 4294967295));
        if (branch_taken_0x2ccc0c) {
            ctx->pc = 0x2CCBF8u;
            goto label_2ccbf8;
        }
    }
    ctx->pc = 0x2CCC14u;
    // 0x2ccc14: 0x2261821
    ctx->pc = 0x2ccc14u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_2ccc18:
    // 0x2ccc18: 0x24e20001
    ctx->pc = 0x2ccc18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 1));
    // 0x2ccc1c: 0xa0620000
    ctx->pc = 0x2ccc1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ccc20: 0xc0102d
    ctx->pc = 0x2ccc20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ccc24:
    // 0x2ccc24: 0xdfbf0020
    ctx->pc = 0x2ccc24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ccc28: 0xdfb10010
    ctx->pc = 0x2ccc28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ccc2c: 0xdfb00000
    ctx->pc = 0x2ccc2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ccc30: 0x3e00008
    ctx->pc = 0x2CCC30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCC34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CCB88u: goto label_2ccb88;
            case 0x2CCB90u: goto label_2ccb90;
            case 0x2CCBA4u: goto label_2ccba4;
            case 0x2CCBF8u: goto label_2ccbf8;
            case 0x2CCC18u: goto label_2ccc18;
            case 0x2CCC24u: goto label_2ccc24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CCC38u;
}
