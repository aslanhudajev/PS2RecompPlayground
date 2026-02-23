#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: calcDynamicsMotion2__FP9_XYZ_DYNAP9_DYNAMICSffii
// Address: 0x1d5650 - 0x1d5778
void calcDynamicsMotion2__FP9_XYZ_DYNAP9_DYNAMICSffii_0x1d5650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("calcDynamicsMotion2__FP9_XYZ_DYNAP9_DYNAMICSffii");


    ctx->pc = 0x1d5650u;

    // 0x1d5650: 0x460d6034
    ctx->pc = 0x1d5650u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d5654: 0x0
    ctx->pc = 0x1d5654u;
    // NOP
    // 0x1d5658: 0x4501001c
    ctx->pc = 0x1D5658u;
    {
        const bool branch_taken_0x1d5658 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D565Cu;
        SET_GPR_U32(ctx, 8, ((uint32_t)16256 << 16));
        if (branch_taken_0x1d5658) {
            ctx->pc = 0x1D56CCu;
            goto label_1d56cc;
        }
    }
    ctx->pc = 0x1D5660u;
    // 0x1d5660: 0x46006824
    ctx->pc = 0x1d5660u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[13]);
    // 0x1d5664: 0x71880
    ctx->pc = 0x1d5664u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 2));
    // 0x1d5668: 0x671821
    ctx->pc = 0x1d5668u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1d566c: 0x33880
    ctx->pc = 0x1d566cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d5670: 0x61880
    ctx->pc = 0x1d5670u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d5674: 0x661821
    ctx->pc = 0x1d5674u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1d5678: 0x44060000
    ctx->pc = 0x1d5678u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[0]);
    // 0x1d567c: 0x34080
    ctx->pc = 0x1d567cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d5680: 0xc71818
    ctx->pc = 0x1d5680u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1d5684: 0xa31821
    ctx->pc = 0x1d5684u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d5688: 0x682821
    ctx->pc = 0x1d5688u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1d568c: 0xc4a00000
    ctx->pc = 0x1d568cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5690: 0xe4800000
    ctx->pc = 0x1d5690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1d5694: 0xc4a00004
    ctx->pc = 0x1d5694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5698: 0xe4800004
    ctx->pc = 0x1d5698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1d569c: 0xc4a00008
    ctx->pc = 0x1d569cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d56a0: 0xe4800008
    ctx->pc = 0x1d56a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1d56a4: 0x94a3000c
    ctx->pc = 0x1d56a4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1d56a8: 0xa483000c
    ctx->pc = 0x1d56a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d56ac: 0x94a3000e
    ctx->pc = 0x1d56acu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x1d56b0: 0xa483000e
    ctx->pc = 0x1d56b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d56b4: 0x94a30010
    ctx->pc = 0x1d56b4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1d56b8: 0xa4830010
    ctx->pc = 0x1d56b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d56bc: 0xa480000c
    ctx->pc = 0x1d56bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d56c0: 0xa480000e
    ctx->pc = 0x1d56c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d56c4: 0x1000002a
    ctx->pc = 0x1D56C4u;
    {
        const bool branch_taken_0x1d56c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D56C8u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1d56c4) {
            ctx->pc = 0x1D5770u;
            goto label_1d5770;
        }
    }
    ctx->pc = 0x1D56CCu;
label_1d56cc:
    // 0x1d56cc: 0x44880000
    ctx->pc = 0x1d56ccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 8);
    // 0x1d56d0: 0x71880
    ctx->pc = 0x1d56d0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 2));
    // 0x1d56d4: 0x460c0000
    ctx->pc = 0x1d56d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1d56d8: 0x671821
    ctx->pc = 0x1d56d8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1d56dc: 0x33880
    ctx->pc = 0x1d56dcu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d56e0: 0x61880
    ctx->pc = 0x1d56e0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d56e4: 0x46000024
    ctx->pc = 0x1d56e4u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1d56e8: 0x661821
    ctx->pc = 0x1d56e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1d56ec: 0x34080
    ctx->pc = 0x1d56ecu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d56f0: 0x46006064
    ctx->pc = 0x1d56f0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[12]);
    // 0x1d56f4: 0x44030000
    ctx->pc = 0x1d56f4u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
    // 0x1d56f8: 0x44060800
    ctx->pc = 0x1d56f8u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x1d56fc: 0x46800820
    ctx->pc = 0x1d56fcu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1d5700: 0xc73018
    ctx->pc = 0x1d5700u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)(uint32_t)result); }
    // 0x1d5704: 0x70671818
    ctx->pc = 0x1d5704u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x1d5708: 0xa31821
    ctx->pc = 0x1d5708u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d570c: 0x1031821
    ctx->pc = 0x1d570cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1d5710: 0x46006081
    ctx->pc = 0x1d5710u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1d5714: 0xa62821
    ctx->pc = 0x1d5714u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1d5718: 0xa82821
    ctx->pc = 0x1d5718u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1d571c: 0xc4a30000
    ctx->pc = 0x1d571cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d5720: 0xc4610000
    ctx->pc = 0x1d5720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d5724: 0xc4a40004
    ctx->pc = 0x1d5724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1d5728: 0xc4600004
    ctx->pc = 0x1d5728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d572c: 0xc4a50008
    ctx->pc = 0x1d572cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1d5730: 0xc4660008
    ctx->pc = 0x1d5730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1d5734: 0x46030841
    ctx->pc = 0x1d5734u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1d5738: 0x46040001
    ctx->pc = 0x1d5738u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x1d573c: 0x46011042
    ctx->pc = 0x1d573cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1d5740: 0x46001002
    ctx->pc = 0x1d5740u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1d5744: 0x46011840
    ctx->pc = 0x1d5744u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1d5748: 0x46002000
    ctx->pc = 0x1d5748u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1d574c: 0xe4810000
    ctx->pc = 0x1d574cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1d5750: 0xe4800004
    ctx->pc = 0x1d5750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1d5754: 0x46053001
    ctx->pc = 0x1d5754u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x1d5758: 0x46001002
    ctx->pc = 0x1d5758u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1d575c: 0x46002800
    ctx->pc = 0x1d575cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x1d5760: 0xe4800008
    ctx->pc = 0x1d5760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1d5764: 0xa480000c
    ctx->pc = 0x1d5764u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d5768: 0xa480000e
    ctx->pc = 0x1d5768u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d576c: 0xa4800010
    ctx->pc = 0x1d576cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
label_1d5770:
    // 0x1d5770: 0x3e00008
    ctx->pc = 0x1D5770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D56CCu: goto label_1d56cc;
            case 0x1D5770u: goto label_1d5770;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D5778u;
}
