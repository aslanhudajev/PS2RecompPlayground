#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MoveCam_radius
// Address: 0x26e8b0 - 0x26e9ec
void MoveCam_radius_0x26e8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26e8b0u;

    // 0x26e8b0: 0x240301a0
    ctx->pc = 0x26e8b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26e8b4: 0x831818
    ctx->pc = 0x26e8b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26e8b8: 0x3c020034
    ctx->pc = 0x26e8b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26e8bc: 0x2442eb60
    ctx->pc = 0x26e8bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x26e8c0: 0x14800006
    ctx->pc = 0x26E8C0u;
    {
        const bool branch_taken_0x26e8c0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x26E8C4u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x26e8c0) {
            ctx->pc = 0x26E8DCu;
            goto label_26e8dc;
        }
    }
    ctx->pc = 0x26E8C8u;
    // 0x26e8c8: 0x3c020031
    ctx->pc = 0x26e8c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x26e8cc: 0x8c430018
    ctx->pc = 0x26e8ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x26e8d0: 0x34028008
    ctx->pc = 0x26e8d0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32776));
    // 0x26e8d4: 0x54620009
    ctx->pc = 0x26E8D4u;
    {
        const bool branch_taken_0x26e8d4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x26e8d4) {
            ctx->pc = 0x26E8D8u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x26E8FCu;
            goto label_26e8fc;
        }
    }
    ctx->pc = 0x26E8DCu;
label_26e8dc:
    // 0x26e8dc: 0x24020001
    ctx->pc = 0x26e8dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e8e0: 0x14820040
    ctx->pc = 0x26E8E0u;
    {
        const bool branch_taken_0x26e8e0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x26E8E4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x26e8e0) {
            ctx->pc = 0x26E9E4u;
            goto label_26e9e4;
        }
    }
    ctx->pc = 0x26E8E8u;
    // 0x26e8e8: 0x8c430018
    ctx->pc = 0x26e8e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x26e8ec: 0x34028008
    ctx->pc = 0x26e8ecu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32776));
    // 0x26e8f0: 0x1462003c
    ctx->pc = 0x26E8F0u;
    {
        const bool branch_taken_0x26e8f0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x26e8f0) {
            ctx->pc = 0x26E9E4u;
            goto label_26e9e4;
        }
    }
    ctx->pc = 0x26E8F8u;
    // 0x26e8f8: 0xc4a000d0
    ctx->pc = 0x26e8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26e8fc:
    // 0x26e8fc: 0x3c013c23
    ctx->pc = 0x26e8fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
    // 0x26e900: 0x3421d70a
    ctx->pc = 0x26e900u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x26e904: 0x44810800
    ctx->pc = 0x26e904u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x26e908: 0x46010082
    ctx->pc = 0x26e908u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26e90c: 0x3c030031
    ctx->pc = 0x26e90cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x26e910: 0x8c62ffbc
    ctx->pc = 0x26e910u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x26e914: 0x4400005
    ctx->pc = 0x26E914u;
    {
        const bool branch_taken_0x26e914 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26E918u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x26e914) {
            ctx->pc = 0x26E92Cu;
            goto label_26e92c;
        }
    }
    ctx->pc = 0x26E91Cu;
    // 0x26e91c: 0x44820000
    ctx->pc = 0x26e91cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x26e920: 0x46800020
    ctx->pc = 0x26e920u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x26e924: 0x10000009
    ctx->pc = 0x26E924u;
    {
        const bool branch_taken_0x26e924 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26E928u;
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x26e924) {
            ctx->pc = 0x26E94Cu;
            goto label_26e94c;
        }
    }
    ctx->pc = 0x26E92Cu;
label_26e92c:
    // 0x26e92c: 0x8c820000
    ctx->pc = 0x26e92cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26e930: 0x30430001
    ctx->pc = 0x26e930u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x26e934: 0x21042
    ctx->pc = 0x26e934u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x26e938: 0x621825
    ctx->pc = 0x26e938u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26e93c: 0x44830000
    ctx->pc = 0x26e93cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x26e940: 0x46800020
    ctx->pc = 0x26e940u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x26e944: 0x46000000
    ctx->pc = 0x26e944u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x26e948: 0x46001082
    ctx->pc = 0x26e948u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_26e94c:
    // 0x26e94c: 0x3c020031
    ctx->pc = 0x26e94cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x26e950: 0x8c421b24
    ctx->pc = 0x26e950u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6948)));
    // 0x26e954: 0x3c030200
    ctx->pc = 0x26e954u;
    SET_GPR_U32(ctx, 3, ((uint32_t)512 << 16));
    // 0x26e958: 0x431024
    ctx->pc = 0x26e958u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26e95c: 0x1040000d
    ctx->pc = 0x26E95Cu;
    {
        const bool branch_taken_0x26e95c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26E960u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x26e95c) {
            ctx->pc = 0x26E994u;
            goto label_26e994;
        }
    }
    ctx->pc = 0x26E964u;
    // 0x26e964: 0xc4a100d0
    ctx->pc = 0x26e964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e968: 0x3c013f00
    ctx->pc = 0x26e968u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x26e96c: 0x44810000
    ctx->pc = 0x26e96cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26e970: 0x46010034
    ctx->pc = 0x26e970u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e974: 0x0
    ctx->pc = 0x26e974u;
    // NOP
    // 0x26e978: 0x45000006
    ctx->pc = 0x26E978u;
    {
        const bool branch_taken_0x26e978 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26E97Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x26e978) {
            ctx->pc = 0x26E994u;
            goto label_26e994;
        }
    }
    ctx->pc = 0x26E980u;
    // 0x26e980: 0x46020801
    ctx->pc = 0x26e980u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x26e984: 0xe4a000d0
    ctx->pc = 0x26e984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 208), bits); }
    // 0x26e988: 0x24020001
    ctx->pc = 0x26e988u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e98c: 0xac6238d4
    ctx->pc = 0x26e98cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14548), GPR_U32(ctx, 2));
    // 0x26e990: 0x3c020031
    ctx->pc = 0x26e990u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_26e994:
    // 0x26e994: 0x8c421b24
    ctx->pc = 0x26e994u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6948)));
    // 0x26e998: 0x3c030100
    ctx->pc = 0x26e998u;
    SET_GPR_U32(ctx, 3, ((uint32_t)256 << 16));
    // 0x26e99c: 0x431024
    ctx->pc = 0x26e99cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26e9a0: 0x10400006
    ctx->pc = 0x26E9A0u;
    {
        const bool branch_taken_0x26e9a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26E9A4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x26e9a0) {
            ctx->pc = 0x26E9BCu;
            goto label_26e9bc;
        }
    }
    ctx->pc = 0x26E9A8u;
    // 0x26e9a8: 0xc4a000d0
    ctx->pc = 0x26e9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e9ac: 0x46001000
    ctx->pc = 0x26e9acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x26e9b0: 0xe4a000d0
    ctx->pc = 0x26e9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 208), bits); }
    // 0x26e9b4: 0x24020001
    ctx->pc = 0x26e9b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e9b8: 0xac6238d4
    ctx->pc = 0x26e9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14548), GPR_U32(ctx, 2));
label_26e9bc:
    // 0x26e9bc: 0xc4a000d0
    ctx->pc = 0x26e9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e9c0: 0x3c013f00
    ctx->pc = 0x26e9c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x26e9c4: 0x44810800
    ctx->pc = 0x26e9c4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x26e9c8: 0x46010034
    ctx->pc = 0x26e9c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e9cc: 0x0
    ctx->pc = 0x26e9ccu;
    // NOP
    // 0x26e9d0: 0x45000004
    ctx->pc = 0x26E9D0u;
    {
        const bool branch_taken_0x26e9d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26E9D4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x26e9d0) {
            ctx->pc = 0x26E9E4u;
            goto label_26e9e4;
        }
    }
    ctx->pc = 0x26E9D8u;
    // 0x26e9d8: 0xe4a100d0
    ctx->pc = 0x26e9d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 208), bits); }
    // 0x26e9dc: 0x24020001
    ctx->pc = 0x26e9dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e9e0: 0xac6238d4
    ctx->pc = 0x26e9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14548), GPR_U32(ctx, 2));
label_26e9e4:
    // 0x26e9e4: 0x3e00008
    ctx->pc = 0x26E9E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26E8DCu: goto label_26e8dc;
            case 0x26E8FCu: goto label_26e8fc;
            case 0x26E92Cu: goto label_26e92c;
            case 0x26E94Cu: goto label_26e94c;
            case 0x26E994u: goto label_26e994;
            case 0x26E9BCu: goto label_26e9bc;
            case 0x26E9E4u: goto label_26e9e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26E9ECu;
}
