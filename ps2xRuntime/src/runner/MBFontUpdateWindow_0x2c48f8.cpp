#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBFontUpdateWindow
// Address: 0x2c48f8 - 0x2c4a08
void MBFontUpdateWindow_0x2c48f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c48f8u;

    // 0x2c48f8: 0x3c02003d
    ctx->pc = 0x2c48f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c48fc: 0x8c42b89c
    ctx->pc = 0x2c48fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294949020)));
    // 0x2c4900: 0x1840003f
    ctx->pc = 0x2C4900u;
    {
        const bool branch_taken_0x2c4900 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C4904u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c4900) {
            ctx->pc = 0x2C4A00u;
            goto label_2c4a00;
        }
    }
    ctx->pc = 0x2C4908u;
    // 0x2c4908: 0x3c02003d
    ctx->pc = 0x2c4908u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c490c: 0x244ab810
    ctx->pc = 0x2c490cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 4294948880));
    // 0x2c4910: 0x3c02003d
    ctx->pc = 0x2c4910u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c4914: 0x8c49b89c
    ctx->pc = 0x2c4914u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 2), 4294949020)));
    // 0x2c4918: 0x71080
    ctx->pc = 0x2c4918u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
    // 0x2c491c: 0x0
    ctx->pc = 0x2c491cu;
    // NOP
label_2c4920:
    // 0x2c4920: 0x4a1021
    ctx->pc = 0x2c4920u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2c4924: 0x8c460000
    ctx->pc = 0x2c4924u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c4928: 0x8cc20008
    ctx->pc = 0x2c4928u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2c492c: 0x18400030
    ctx->pc = 0x2C492Cu;
    {
        const bool branch_taken_0x2c492c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C4930u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c492c) {
            ctx->pc = 0x2C49F0u;
            goto label_2c49f0;
        }
    }
    ctx->pc = 0x2C4934u;
    // 0x2c4934: 0x24080024
    ctx->pc = 0x2c4934u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 36));
    // 0x2c4938: 0xa81818
    ctx->pc = 0x2c4938u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2c493c: 0x0
    ctx->pc = 0x2c493cu;
    // NOP
label_2c4940:
    // 0x2c4940: 0x8cc20004
    ctx->pc = 0x2c4940u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2c4944: 0x621821
    ctx->pc = 0x2c4944u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c4948: 0x94620010
    ctx->pc = 0x2c4948u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2c494c: 0x50400024
    ctx->pc = 0x2C494Cu;
    {
        const bool branch_taken_0x2c494c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c494c) {
            ctx->pc = 0x2C4950u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x2C49E0u;
            goto label_2c49e0;
        }
    }
    ctx->pc = 0x2C4954u;
    // 0x2c4954: 0x8c640000
    ctx->pc = 0x2c4954u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c4958: 0x30820040
    ctx->pc = 0x2c4958u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
    // 0x2c495c: 0x14400020
    ctx->pc = 0x2C495Cu;
    {
        const bool branch_taken_0x2c495c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C4960u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x2c495c) {
            ctx->pc = 0x2C49E0u;
            goto label_2c49e0;
        }
    }
    ctx->pc = 0x2C4964u;
    // 0x2c4964: 0x94620008
    ctx->pc = 0x2c4964u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c4968: 0x44820000
    ctx->pc = 0x2c4968u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2c496c: 0x46800020
    ctx->pc = 0x2c496cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c4970: 0x460c0002
    ctx->pc = 0x2c4970u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2c4974: 0x46000064
    ctx->pc = 0x2c4974u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c4978: 0x44020800
    ctx->pc = 0x2c4978u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x2c497c: 0xa4620008
    ctx->pc = 0x2c497cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c4980: 0x9462000a
    ctx->pc = 0x2c4980u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x2c4984: 0x44820000
    ctx->pc = 0x2c4984u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2c4988: 0x46800020
    ctx->pc = 0x2c4988u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c498c: 0x460d0002
    ctx->pc = 0x2c498cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x2c4990: 0x46000064
    ctx->pc = 0x2c4990u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c4994: 0x44020800
    ctx->pc = 0x2c4994u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x2c4998: 0xa462000a
    ctx->pc = 0x2c4998u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c499c: 0x94620010
    ctx->pc = 0x2c499cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2c49a0: 0x44820000
    ctx->pc = 0x2c49a0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2c49a4: 0x46800020
    ctx->pc = 0x2c49a4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c49a8: 0x460c0002
    ctx->pc = 0x2c49a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2c49ac: 0x46000064
    ctx->pc = 0x2c49acu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c49b0: 0x44020800
    ctx->pc = 0x2c49b0u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x2c49b4: 0xa4620010
    ctx->pc = 0x2c49b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c49b8: 0x30820100
    ctx->pc = 0x2c49b8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 256));
    // 0x2c49bc: 0x14400008
    ctx->pc = 0x2C49BCu;
    {
        const bool branch_taken_0x2c49bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c49bc) {
            ctx->pc = 0x2C49E0u;
            goto label_2c49e0;
        }
    }
    ctx->pc = 0x2C49C4u;
    // 0x2c49c4: 0x94620012
    ctx->pc = 0x2c49c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x2c49c8: 0x44820000
    ctx->pc = 0x2c49c8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2c49cc: 0x46800020
    ctx->pc = 0x2c49ccu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c49d0: 0x460d0002
    ctx->pc = 0x2c49d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x2c49d4: 0x46000064
    ctx->pc = 0x2c49d4u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c49d8: 0x44020800
    ctx->pc = 0x2c49d8u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x2c49dc: 0xa4620012
    ctx->pc = 0x2c49dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 2));
label_2c49e0:
    // 0x2c49e0: 0x8cc20008
    ctx->pc = 0x2c49e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2c49e4: 0xa2102a
    ctx->pc = 0x2c49e4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x2c49e8: 0x1440ffd5
    ctx->pc = 0x2C49E8u;
    {
        const bool branch_taken_0x2c49e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C49ECu;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2c49e8) {
            ctx->pc = 0x2C4940u;
            goto label_2c4940;
        }
    }
    ctx->pc = 0x2C49F0u;
label_2c49f0:
    // 0x2c49f0: 0x24e70001
    ctx->pc = 0x2c49f0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x2c49f4: 0xe9102a
    ctx->pc = 0x2c49f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 9)));
    // 0x2c49f8: 0x1440ffc9
    ctx->pc = 0x2C49F8u;
    {
        const bool branch_taken_0x2c49f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C49FCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
        if (branch_taken_0x2c49f8) {
            ctx->pc = 0x2C4920u;
            goto label_2c4920;
        }
    }
    ctx->pc = 0x2C4A00u;
label_2c4a00:
    // 0x2c4a00: 0x3e00008
    ctx->pc = 0x2C4A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C4920u: goto label_2c4920;
            case 0x2C4940u: goto label_2c4940;
            case 0x2C49E0u: goto label_2c49e0;
            case 0x2C49F0u: goto label_2c49f0;
            case 0x2C4A00u: goto label_2c4a00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C4A08u;
}
