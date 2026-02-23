#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: st3BossHashira__14TrnKomono2TaskFv
// Address: 0x221dd0 - 0x2222f4
void st3BossHashira__14TrnKomono2TaskFv_0x221dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("st3BossHashira__14TrnKomono2TaskFv");


    ctx->pc = 0x221dd0u;

    // 0x221dd0: 0x27bdff60
    ctx->pc = 0x221dd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x221dd4: 0x7fbf0050
    ctx->pc = 0x221dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x221dd8: 0x7fb40040
    ctx->pc = 0x221dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x221ddc: 0x7fb30030
    ctx->pc = 0x221ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x221de0: 0x7fb20020
    ctx->pc = 0x221de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x221de4: 0x7fb10010
    ctx->pc = 0x221de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x221de8: 0x7fb00000
    ctx->pc = 0x221de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x221dec: 0x8f858c48
    ctx->pc = 0x221decu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x221df0: 0x7080a628
    ctx->pc = 0x221df0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x221df4: 0x24020208
    ctx->pc = 0x221df4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 520));
    // 0x221df8: 0x8ca40004
    ctx->pc = 0x221df8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x221dfc: 0x41840
    ctx->pc = 0x221dfcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x221e00: 0x641821
    ctx->pc = 0x221e00u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x221e04: 0x31880
    ctx->pc = 0x221e04u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x221e08: 0x641821
    ctx->pc = 0x221e08u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x221e0c: 0x31900
    ctx->pc = 0x221e0cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x221e10: 0x652021
    ctx->pc = 0x221e10u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x221e14: 0x848300d0
    ctx->pc = 0x221e14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x221e18: 0x14620034
    ctx->pc = 0x221E18u;
    {
        const bool branch_taken_0x221e18 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x221e18) {
            ctx->pc = 0x221EECu;
            goto label_221eec;
        }
    }
    ctx->pc = 0x221E20u;
    // 0x221e20: 0xc48100c0
    ctx->pc = 0x221e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221e24: 0x3c02431d
    ctx->pc = 0x221e24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17181 << 16));
    // 0x221e28: 0x44820000
    ctx->pc = 0x221e28u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x221e2c: 0x0
    ctx->pc = 0x221e2cu;
    // NOP
    // 0x221e30: 0x46010036
    ctx->pc = 0x221e30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221e34: 0x0
    ctx->pc = 0x221e34u;
    // NOP
    // 0x221e38: 0x4500000e
    ctx->pc = 0x221E38u;
    {
        const bool branch_taken_0x221e38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x221E3Cu;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x221e38) {
            ctx->pc = 0x221E74u;
            goto label_221e74;
        }
    }
    ctx->pc = 0x221E40u;
    // 0x221e40: 0x3c02431e
    ctx->pc = 0x221e40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17182 << 16));
    // 0x221e44: 0x34423333
    ctx->pc = 0x221e44u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 13107));
    // 0x221e48: 0x44820000
    ctx->pc = 0x221e48u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x221e4c: 0x0
    ctx->pc = 0x221e4cu;
    // NOP
    // 0x221e50: 0x46000834
    ctx->pc = 0x221e50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221e54: 0x0
    ctx->pc = 0x221e54u;
    // NOP
    // 0x221e58: 0x45010003
    ctx->pc = 0x221E58u;
    {
        const bool branch_taken_0x221e58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x221E5Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x221e58) {
            ctx->pc = 0x221E68u;
            goto label_221e68;
        }
    }
    ctx->pc = 0x221E60u;
    // 0x221e60: 0x10000003
    ctx->pc = 0x221E60u;
    {
        const bool branch_taken_0x221e60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x221e60) {
            ctx->pc = 0x221E70u;
            goto label_221e70;
        }
    }
    ctx->pc = 0x221E68u;
label_221e68:
    // 0x221e68: 0x10000002
    ctx->pc = 0x221E68u;
    {
        const bool branch_taken_0x221e68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x221e68) {
            ctx->pc = 0x221E74u;
            goto label_221e74;
        }
    }
    ctx->pc = 0x221E70u;
label_221e70:
    // 0x221e70: 0x70001628
    ctx->pc = 0x221e70u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_221e74:
    // 0x221e74: 0x1040001d
    ctx->pc = 0x221E74u;
    {
        const bool branch_taken_0x221e74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x221E78u;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x221e74) {
            ctx->pc = 0x221EECu;
            goto label_221eec;
        }
    }
    ctx->pc = 0x221E7Cu;
    // 0x221e7c: 0xc07ce18
    ctx->pc = 0x221E7Cu;
    SET_GPR_U32(ctx, 31, 0x221E84u);
    ctx->pc = 0x221E80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221E84u; }
        else if (ctx->pc != 0x221E84u) { ctx->pc = 0x221E84u; }
    }
    if (ctx->pc != 0x221E84u) { return; }
    ctx->pc = 0x221E84u;
    // 0x221e84: 0x1c400018
    ctx->pc = 0x221E84u;
    {
        const bool branch_taken_0x221e84 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x221E88u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x221e84) {
            ctx->pc = 0x221EE8u;
            goto label_221ee8;
        }
    }
    ctx->pc = 0x221E8Cu;
    // 0x221e8c: 0xc681004c
    ctx->pc = 0x221e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221e90: 0x44800000
    ctx->pc = 0x221e90u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x221e94: 0x0
    ctx->pc = 0x221e94u;
    // NOP
    // 0x221e98: 0x46010032
    ctx->pc = 0x221e98u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221e9c: 0x0
    ctx->pc = 0x221e9cu;
    // NOP
    // 0x221ea0: 0x45000010
    ctx->pc = 0x221EA0u;
    {
        const bool branch_taken_0x221ea0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x221EA4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)24 << 16));
        if (branch_taken_0x221ea0) {
            ctx->pc = 0x221EE4u;
            goto label_221ee4;
        }
    }
    ctx->pc = 0x221EA8u;
    // 0x221ea8: 0x34450110
    ctx->pc = 0x221ea8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 272));
    // 0x221eac: 0x3c020051
    ctx->pc = 0x221eacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x221eb0: 0x244434f0
    ctx->pc = 0x221eb0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x221eb4: 0x70003628
    ctx->pc = 0x221eb4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x221eb8: 0x70003e28
    ctx->pc = 0x221eb8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x221ebc: 0xc086018
    ctx->pc = 0x221EBCu;
    SET_GPR_U32(ctx, 31, 0x221EC4u);
    ctx->pc = 0x221EC0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221EC4u; }
        else if (ctx->pc != 0x221EC4u) { ctx->pc = 0x221EC4u; }
    }
    if (ctx->pc != 0x221EC4u) { return; }
    ctx->pc = 0x221EC4u;
    // 0x221ec4: 0x3c020051
    ctx->pc = 0x221ec4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x221ec8: 0x244434f0
    ctx->pc = 0x221ec8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x221ecc: 0x3c020018
    ctx->pc = 0x221eccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)24 << 16));
    // 0x221ed0: 0x34450110
    ctx->pc = 0x221ed0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 272));
    // 0x221ed4: 0x70003628
    ctx->pc = 0x221ed4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x221ed8: 0x70003e28
    ctx->pc = 0x221ed8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x221edc: 0xc086018
    ctx->pc = 0x221EDCu;
    SET_GPR_U32(ctx, 31, 0x221EE4u);
    ctx->pc = 0x221EE0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221EE4u; }
        else if (ctx->pc != 0x221EE4u) { ctx->pc = 0x221EE4u; }
    }
    if (ctx->pc != 0x221EE4u) { return; }
    ctx->pc = 0x221EE4u;
label_221ee4:
    // 0x221ee4: 0x24020001
    ctx->pc = 0x221ee4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_221ee8:
    // 0x221ee8: 0xae820070
    ctx->pc = 0x221ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 112), GPR_U32(ctx, 2));
label_221eec:
    // 0x221eec: 0x8f858c48
    ctx->pc = 0x221eecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x221ef0: 0x24020208
    ctx->pc = 0x221ef0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 520));
    // 0x221ef4: 0x8ca40004
    ctx->pc = 0x221ef4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x221ef8: 0x41840
    ctx->pc = 0x221ef8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x221efc: 0x641821
    ctx->pc = 0x221efcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x221f00: 0x31880
    ctx->pc = 0x221f00u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x221f04: 0x641821
    ctx->pc = 0x221f04u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x221f08: 0x31900
    ctx->pc = 0x221f08u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x221f0c: 0x652021
    ctx->pc = 0x221f0cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x221f10: 0x848300d0
    ctx->pc = 0x221f10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x221f14: 0x14620034
    ctx->pc = 0x221F14u;
    {
        const bool branch_taken_0x221f14 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x221f14) {
            ctx->pc = 0x221FE8u;
            goto label_221fe8;
        }
    }
    ctx->pc = 0x221F1Cu;
    // 0x221f1c: 0xc48100c0
    ctx->pc = 0x221f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221f20: 0x3c024374
    ctx->pc = 0x221f20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17268 << 16));
    // 0x221f24: 0x44820000
    ctx->pc = 0x221f24u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x221f28: 0x0
    ctx->pc = 0x221f28u;
    // NOP
    // 0x221f2c: 0x46010036
    ctx->pc = 0x221f2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221f30: 0x0
    ctx->pc = 0x221f30u;
    // NOP
    // 0x221f34: 0x4500000e
    ctx->pc = 0x221F34u;
    {
        const bool branch_taken_0x221f34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x221F38u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x221f34) {
            ctx->pc = 0x221F70u;
            goto label_221f70;
        }
    }
    ctx->pc = 0x221F3Cu;
    // 0x221f3c: 0x3c024375
    ctx->pc = 0x221f3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17269 << 16));
    // 0x221f40: 0x34423333
    ctx->pc = 0x221f40u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 13107));
    // 0x221f44: 0x44820000
    ctx->pc = 0x221f44u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x221f48: 0x0
    ctx->pc = 0x221f48u;
    // NOP
    // 0x221f4c: 0x46000834
    ctx->pc = 0x221f4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221f50: 0x0
    ctx->pc = 0x221f50u;
    // NOP
    // 0x221f54: 0x45010003
    ctx->pc = 0x221F54u;
    {
        const bool branch_taken_0x221f54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x221F58u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x221f54) {
            ctx->pc = 0x221F64u;
            goto label_221f64;
        }
    }
    ctx->pc = 0x221F5Cu;
    // 0x221f5c: 0x10000003
    ctx->pc = 0x221F5Cu;
    {
        const bool branch_taken_0x221f5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x221f5c) {
            ctx->pc = 0x221F6Cu;
            goto label_221f6c;
        }
    }
    ctx->pc = 0x221F64u;
label_221f64:
    // 0x221f64: 0x10000002
    ctx->pc = 0x221F64u;
    {
        const bool branch_taken_0x221f64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x221f64) {
            ctx->pc = 0x221F70u;
            goto label_221f70;
        }
    }
    ctx->pc = 0x221F6Cu;
label_221f6c:
    // 0x221f6c: 0x70001628
    ctx->pc = 0x221f6cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_221f70:
    // 0x221f70: 0x1040001d
    ctx->pc = 0x221F70u;
    {
        const bool branch_taken_0x221f70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x221F74u;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x221f70) {
            ctx->pc = 0x221FE8u;
            goto label_221fe8;
        }
    }
    ctx->pc = 0x221F78u;
    // 0x221f78: 0xc07ce18
    ctx->pc = 0x221F78u;
    SET_GPR_U32(ctx, 31, 0x221F80u);
    ctx->pc = 0x221F7Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221F80u; }
        else if (ctx->pc != 0x221F80u) { ctx->pc = 0x221F80u; }
    }
    if (ctx->pc != 0x221F80u) { return; }
    ctx->pc = 0x221F80u;
    // 0x221f80: 0x1c400018
    ctx->pc = 0x221F80u;
    {
        const bool branch_taken_0x221f80 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x221F84u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x221f80) {
            ctx->pc = 0x221FE4u;
            goto label_221fe4;
        }
    }
    ctx->pc = 0x221F88u;
    // 0x221f88: 0xc6810050
    ctx->pc = 0x221f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221f8c: 0x44800000
    ctx->pc = 0x221f8cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x221f90: 0x0
    ctx->pc = 0x221f90u;
    // NOP
    // 0x221f94: 0x46010032
    ctx->pc = 0x221f94u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221f98: 0x0
    ctx->pc = 0x221f98u;
    // NOP
    // 0x221f9c: 0x45000010
    ctx->pc = 0x221F9Cu;
    {
        const bool branch_taken_0x221f9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x221FA0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)24 << 16));
        if (branch_taken_0x221f9c) {
            ctx->pc = 0x221FE0u;
            goto label_221fe0;
        }
    }
    ctx->pc = 0x221FA4u;
    // 0x221fa4: 0x34450110
    ctx->pc = 0x221fa4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 272));
    // 0x221fa8: 0x3c020051
    ctx->pc = 0x221fa8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x221fac: 0x244434f0
    ctx->pc = 0x221facu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x221fb0: 0x70003628
    ctx->pc = 0x221fb0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x221fb4: 0x70003e28
    ctx->pc = 0x221fb4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x221fb8: 0xc086018
    ctx->pc = 0x221FB8u;
    SET_GPR_U32(ctx, 31, 0x221FC0u);
    ctx->pc = 0x221FBCu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221FC0u; }
        else if (ctx->pc != 0x221FC0u) { ctx->pc = 0x221FC0u; }
    }
    if (ctx->pc != 0x221FC0u) { return; }
    ctx->pc = 0x221FC0u;
    // 0x221fc0: 0x3c020051
    ctx->pc = 0x221fc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x221fc4: 0x244434f0
    ctx->pc = 0x221fc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x221fc8: 0x3c020018
    ctx->pc = 0x221fc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)24 << 16));
    // 0x221fcc: 0x34450110
    ctx->pc = 0x221fccu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 272));
    // 0x221fd0: 0x70003628
    ctx->pc = 0x221fd0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x221fd4: 0x70003e28
    ctx->pc = 0x221fd4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x221fd8: 0xc086018
    ctx->pc = 0x221FD8u;
    SET_GPR_U32(ctx, 31, 0x221FE0u);
    ctx->pc = 0x221FDCu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221FE0u; }
        else if (ctx->pc != 0x221FE0u) { ctx->pc = 0x221FE0u; }
    }
    if (ctx->pc != 0x221FE0u) { return; }
    ctx->pc = 0x221FE0u;
label_221fe0:
    // 0x221fe0: 0x24020001
    ctx->pc = 0x221fe0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_221fe4:
    // 0x221fe4: 0xae820074
    ctx->pc = 0x221fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 116), GPR_U32(ctx, 2));
label_221fe8:
    // 0x221fe8: 0x8f858c48
    ctx->pc = 0x221fe8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x221fec: 0x24020208
    ctx->pc = 0x221fecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 520));
    // 0x221ff0: 0x8ca40004
    ctx->pc = 0x221ff0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x221ff4: 0x41840
    ctx->pc = 0x221ff4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x221ff8: 0x641821
    ctx->pc = 0x221ff8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x221ffc: 0x31880
    ctx->pc = 0x221ffcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x222000: 0x641821
    ctx->pc = 0x222000u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x222004: 0x31900
    ctx->pc = 0x222004u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x222008: 0x652021
    ctx->pc = 0x222008u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x22200c: 0x848300d0
    ctx->pc = 0x22200cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x222010: 0x14620033
    ctx->pc = 0x222010u;
    {
        const bool branch_taken_0x222010 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x222010) {
            ctx->pc = 0x2220E0u;
            goto label_2220e0;
        }
    }
    ctx->pc = 0x222018u;
    // 0x222018: 0xc48100c0
    ctx->pc = 0x222018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22201c: 0x3c02439f
    ctx->pc = 0x22201cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17311 << 16));
    // 0x222020: 0x44820000
    ctx->pc = 0x222020u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x222024: 0x0
    ctx->pc = 0x222024u;
    // NOP
    // 0x222028: 0x46010036
    ctx->pc = 0x222028u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22202c: 0x0
    ctx->pc = 0x22202cu;
    // NOP
    // 0x222030: 0x4502000d
    ctx->pc = 0x222030u;
    {
        const bool branch_taken_0x222030 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x222030) {
            ctx->pc = 0x222034u;
            SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
            ctx->pc = 0x222068u;
            goto label_222068;
        }
    }
    ctx->pc = 0x222038u;
    // 0x222038: 0x3442999a
    ctx->pc = 0x222038u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39322));
    // 0x22203c: 0x44820000
    ctx->pc = 0x22203cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x222040: 0x0
    ctx->pc = 0x222040u;
    // NOP
    // 0x222044: 0x46000834
    ctx->pc = 0x222044u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222048: 0x0
    ctx->pc = 0x222048u;
    // NOP
    // 0x22204c: 0x45010003
    ctx->pc = 0x22204Cu;
    {
        const bool branch_taken_0x22204c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x222050u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x22204c) {
            ctx->pc = 0x22205Cu;
            goto label_22205c;
        }
    }
    ctx->pc = 0x222054u;
    // 0x222054: 0x10000003
    ctx->pc = 0x222054u;
    {
        const bool branch_taken_0x222054 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x222054) {
            ctx->pc = 0x222064u;
            goto label_222064;
        }
    }
    ctx->pc = 0x22205Cu;
label_22205c:
    // 0x22205c: 0x10000002
    ctx->pc = 0x22205Cu;
    {
        const bool branch_taken_0x22205c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x22205c) {
            ctx->pc = 0x222068u;
            goto label_222068;
        }
    }
    ctx->pc = 0x222064u;
label_222064:
    // 0x222064: 0x70001628
    ctx->pc = 0x222064u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_222068:
    // 0x222068: 0x1040001d
    ctx->pc = 0x222068u;
    {
        const bool branch_taken_0x222068 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22206Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x222068) {
            ctx->pc = 0x2220E0u;
            goto label_2220e0;
        }
    }
    ctx->pc = 0x222070u;
    // 0x222070: 0xc07ce18
    ctx->pc = 0x222070u;
    SET_GPR_U32(ctx, 31, 0x222078u);
    ctx->pc = 0x222074u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222078u; }
        else if (ctx->pc != 0x222078u) { ctx->pc = 0x222078u; }
    }
    if (ctx->pc != 0x222078u) { return; }
    ctx->pc = 0x222078u;
    // 0x222078: 0x1c400018
    ctx->pc = 0x222078u;
    {
        const bool branch_taken_0x222078 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x22207Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x222078) {
            ctx->pc = 0x2220DCu;
            goto label_2220dc;
        }
    }
    ctx->pc = 0x222080u;
    // 0x222080: 0xc6810054
    ctx->pc = 0x222080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222084: 0x44800000
    ctx->pc = 0x222084u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x222088: 0x0
    ctx->pc = 0x222088u;
    // NOP
    // 0x22208c: 0x46010032
    ctx->pc = 0x22208cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222090: 0x0
    ctx->pc = 0x222090u;
    // NOP
    // 0x222094: 0x45000010
    ctx->pc = 0x222094u;
    {
        const bool branch_taken_0x222094 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x222098u;
        SET_GPR_U32(ctx, 2, ((uint32_t)24 << 16));
        if (branch_taken_0x222094) {
            ctx->pc = 0x2220D8u;
            goto label_2220d8;
        }
    }
    ctx->pc = 0x22209Cu;
    // 0x22209c: 0x34450110
    ctx->pc = 0x22209cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 272));
    // 0x2220a0: 0x3c020051
    ctx->pc = 0x2220a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x2220a4: 0x244434f0
    ctx->pc = 0x2220a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x2220a8: 0x70003628
    ctx->pc = 0x2220a8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2220ac: 0x70003e28
    ctx->pc = 0x2220acu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2220b0: 0xc086018
    ctx->pc = 0x2220B0u;
    SET_GPR_U32(ctx, 31, 0x2220B8u);
    ctx->pc = 0x2220B4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2220B8u; }
        else if (ctx->pc != 0x2220B8u) { ctx->pc = 0x2220B8u; }
    }
    if (ctx->pc != 0x2220B8u) { return; }
    ctx->pc = 0x2220B8u;
    // 0x2220b8: 0x3c020051
    ctx->pc = 0x2220b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x2220bc: 0x244434f0
    ctx->pc = 0x2220bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x2220c0: 0x3c020018
    ctx->pc = 0x2220c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)24 << 16));
    // 0x2220c4: 0x34450110
    ctx->pc = 0x2220c4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 272));
    // 0x2220c8: 0x70003628
    ctx->pc = 0x2220c8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2220cc: 0x70003e28
    ctx->pc = 0x2220ccu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2220d0: 0xc086018
    ctx->pc = 0x2220D0u;
    SET_GPR_U32(ctx, 31, 0x2220D8u);
    ctx->pc = 0x2220D4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2220D8u; }
        else if (ctx->pc != 0x2220D8u) { ctx->pc = 0x2220D8u; }
    }
    if (ctx->pc != 0x2220D8u) { return; }
    ctx->pc = 0x2220D8u;
label_2220d8:
    // 0x2220d8: 0x24020001
    ctx->pc = 0x2220d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2220dc:
    // 0x2220dc: 0xae820078
    ctx->pc = 0x2220dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 120), GPR_U32(ctx, 2));
label_2220e0:
    // 0x2220e0: 0x8f858c48
    ctx->pc = 0x2220e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x2220e4: 0x2402020a
    ctx->pc = 0x2220e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 522));
    // 0x2220e8: 0x8ca40004
    ctx->pc = 0x2220e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2220ec: 0x41840
    ctx->pc = 0x2220ecu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x2220f0: 0x641821
    ctx->pc = 0x2220f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2220f4: 0x31880
    ctx->pc = 0x2220f4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2220f8: 0x641821
    ctx->pc = 0x2220f8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2220fc: 0x31900
    ctx->pc = 0x2220fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x222100: 0x651821
    ctx->pc = 0x222100u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x222104: 0x846300d0
    ctx->pc = 0x222104u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x222108: 0x10620003
    ctx->pc = 0x222108u;
    {
        const bool branch_taken_0x222108 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x22210Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 560));
        if (branch_taken_0x222108) {
            ctx->pc = 0x222118u;
            goto label_222118;
        }
    }
    ctx->pc = 0x222110u;
    // 0x222110: 0x14620003
    ctx->pc = 0x222110u;
    {
        const bool branch_taken_0x222110 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x222110) {
            ctx->pc = 0x222120u;
            goto label_222120;
        }
    }
    ctx->pc = 0x222118u;
label_222118:
    // 0x222118: 0xc06898c
    ctx->pc = 0x222118u;
    SET_GPR_U32(ctx, 31, 0x222120u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222120u; }
        else if (ctx->pc != 0x222120u) { ctx->pc = 0x222120u; }
    }
    if (ctx->pc != 0x222120u) { return; }
    ctx->pc = 0x222120u;
label_222120:
    // 0x222120: 0x3c02002c
    ctx->pc = 0x222120u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x222124: 0x70008e28
    ctx->pc = 0x222124u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x222128: 0x72809628
    ctx->pc = 0x222128u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x22212c: 0x24531740
    ctx->pc = 0x22212cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 5952));
label_222130:
    // 0x222130: 0x8e420070
    ctx->pc = 0x222130u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x222134: 0x14400011
    ctx->pc = 0x222134u;
    {
        const bool branch_taken_0x222134 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x222134) {
            ctx->pc = 0x22217Cu;
            goto label_22217c;
        }
    }
    ctx->pc = 0x22213Cu;
    // 0x22213c: 0x4bede37d
    ctx->pc = 0x22213cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x222140: 0x4bedeb7d
    ctx->pc = 0x222140u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x222144: 0x4bedf37d
    ctx->pc = 0x222144u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x222148: 0x4bedfb7d
    ctx->pc = 0x222148u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x22214c: 0xc66d0004
    ctx->pc = 0x22214cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x222150: 0xc66e0008
    ctx->pc = 0x222150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x222154: 0xc06c202
    ctx->pc = 0x222154u;
    SET_GPR_U32(ctx, 31, 0x22215Cu);
    ctx->pc = 0x222158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22215Cu; }
        else if (ctx->pc != 0x22215Cu) { ctx->pc = 0x22215Cu; }
    }
    if (ctx->pc != 0x22215Cu) { return; }
    ctx->pc = 0x22215Cu;
    // 0x22215c: 0x3c0200d3
    ctx->pc = 0x22215cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)211 << 16));
    // 0x222160: 0xc0853ac
    ctx->pc = 0x222160u;
    SET_GPR_U32(ctx, 31, 0x222168u);
    ctx->pc = 0x222164u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 14));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222168u; }
        else if (ctx->pc != 0x222168u) { ctx->pc = 0x222168u; }
    }
    if (ctx->pc != 0x222168u) { return; }
    ctx->pc = 0x222168u;
    // 0x222168: 0x4bff6b7e
    ctx->pc = 0x222168u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x22216c: 0x4bfe6b7e
    ctx->pc = 0x22216cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x222170: 0x4bfd6b7e
    ctx->pc = 0x222170u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x222174: 0x10000052
    ctx->pc = 0x222174u;
    {
        const bool branch_taken_0x222174 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x222178u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x222174) {
            ctx->pc = 0x2222C0u;
            goto label_2222c0;
        }
    }
    ctx->pc = 0x22217Cu;
label_22217c:
    // 0x22217c: 0x4bede37d
    ctx->pc = 0x22217cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x222180: 0x4bedeb7d
    ctx->pc = 0x222180u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x222184: 0x4bedf37d
    ctx->pc = 0x222184u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x222188: 0x4bedfb7d
    ctx->pc = 0x222188u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x22218c: 0xc66d0004
    ctx->pc = 0x22218cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x222190: 0xc66e0008
    ctx->pc = 0x222190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x222194: 0xc06c202
    ctx->pc = 0x222194u;
    SET_GPR_U32(ctx, 31, 0x22219Cu);
    ctx->pc = 0x222198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22219Cu; }
        else if (ctx->pc != 0x22219Cu) { ctx->pc = 0x22219Cu; }
    }
    if (ctx->pc != 0x22219Cu) { return; }
    ctx->pc = 0x22219Cu;
    // 0x22219c: 0x3c0200d3
    ctx->pc = 0x22219cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)211 << 16));
    // 0x2221a0: 0xc0853ac
    ctx->pc = 0x2221A0u;
    SET_GPR_U32(ctx, 31, 0x2221A8u);
    ctx->pc = 0x2221A4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 13));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2221A8u; }
        else if (ctx->pc != 0x2221A8u) { ctx->pc = 0x2221A8u; }
    }
    if (ctx->pc != 0x2221A8u) { return; }
    ctx->pc = 0x2221A8u;
    // 0x2221a8: 0xc06aafc
    ctx->pc = 0x2221A8u;
    SET_GPR_U32(ctx, 31, 0x2221B0u);
    ctx->pc = 0x1AABF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutPushFadeColor_0x1aabf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2221B0u; }
        else if (ctx->pc != 0x2221B0u) { ctx->pc = 0x2221B0u; }
    }
    if (ctx->pc != 0x2221B0u) { return; }
    ctx->pc = 0x2221B0u;
    // 0x2221b0: 0x3c023f80
    ctx->pc = 0x2221b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x2221b4: 0x44827800
    ctx->pc = 0x2221b4u;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 2);
    // 0x2221b8: 0x3c023f43
    ctx->pc = 0x2221b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16195 << 16));
    // 0x2221bc: 0x3442c3c6
    ctx->pc = 0x2221bcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 50118));
    // 0x2221c0: 0x44826000
    ctx->pc = 0x2221c0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x2221c4: 0x46007c06
    ctx->pc = 0x2221c4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
    // 0x2221c8: 0x3c023f44
    ctx->pc = 0x2221c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16196 << 16));
    // 0x2221cc: 0x34425afb
    ctx->pc = 0x2221ccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 23291));
    // 0x2221d0: 0x44826800
    ctx->pc = 0x2221d0u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x2221d4: 0x3c023f4b
    ctx->pc = 0x2221d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16203 << 16));
    // 0x2221d8: 0x344292e2
    ctx->pc = 0x2221d8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 37602));
    // 0x2221dc: 0x44827000
    ctx->pc = 0x2221dcu;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x2221e0: 0xc06aac8
    ctx->pc = 0x2221E0u;
    SET_GPR_U32(ctx, 31, 0x2221E8u);
    ctx->pc = 0x2221E4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[15]);
    ctx->pc = 0x1AAB20u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutScaleFadeColor_0x1aab20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2221E8u; }
        else if (ctx->pc != 0x2221E8u) { ctx->pc = 0x2221E8u; }
    }
    if (ctx->pc != 0x2221E8u) { return; }
    ctx->pc = 0x2221E8u;
    // 0x2221e8: 0x10000017
    ctx->pc = 0x2221E8u;
    {
        const bool branch_taken_0x2221e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2221ECu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2221e8) {
            ctx->pc = 0x222248u;
            goto label_222248;
        }
    }
    ctx->pc = 0x2221F0u;
label_2221f0:
    // 0x2221f0: 0x4bede37d
    ctx->pc = 0x2221f0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x2221f4: 0x4bedeb7d
    ctx->pc = 0x2221f4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x2221f8: 0x4bedf37d
    ctx->pc = 0x2221f8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x2221fc: 0x4bedfb7d
    ctx->pc = 0x2221fcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x222200: 0xc680002c
    ctx->pc = 0x222200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222204: 0x8e85001c
    ctx->pc = 0x222204u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x222208: 0xc64c004c
    ctx->pc = 0x222208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22220c: 0x27a40060
    ctx->pc = 0x22220cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    // 0x222210: 0x72003628
    ctx->pc = 0x222210u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x222214: 0xc0755e0
    ctx->pc = 0x222214u;
    SET_GPR_U32(ctx, 31, 0x22221Cu);
    ctx->pc = 0x222218u;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    ctx->pc = 0x1D5780u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcDynamicsMotion4__FP11tagNLmatrixP9_DYNAMICSffii_0x1d5780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22221Cu; }
        else if (ctx->pc != 0x22221Cu) { ctx->pc = 0x22221Cu; }
    }
    if (ctx->pc != 0x22221Cu) { return; }
    ctx->pc = 0x22221Cu;
    // 0x22221c: 0xc06c04e
    ctx->pc = 0x22221Cu;
    SET_GPR_U32(ctx, 31, 0x222224u);
    ctx->pc = 0x222220u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222224u; }
        else if (ctx->pc != 0x222224u) { ctx->pc = 0x222224u; }
    }
    if (ctx->pc != 0x222224u) { return; }
    ctx->pc = 0x222224u;
    // 0x222224: 0x3c0200d3
    ctx->pc = 0x222224u;
    SET_GPR_U32(ctx, 2, ((uint32_t)211 << 16));
    // 0x222228: 0xc0853ac
    ctx->pc = 0x222228u;
    SET_GPR_U32(ctx, 31, 0x222230u);
    ctx->pc = 0x22222Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222230u; }
        else if (ctx->pc != 0x222230u) { ctx->pc = 0x222230u; }
    }
    if (ctx->pc != 0x222230u) { return; }
    ctx->pc = 0x222230u;
    // 0x222230: 0x4bff6b7e
    ctx->pc = 0x222230u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x222234: 0x4bfe6b7e
    ctx->pc = 0x222234u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x222238: 0x4bfd6b7e
    ctx->pc = 0x222238u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x22223c: 0x4bfc6b7e
    ctx->pc = 0x22223cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x222240: 0x26100001
    ctx->pc = 0x222240u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x222244: 0x0
    ctx->pc = 0x222244u;
    // NOP
label_222248:
    // 0x222248: 0x8e87003c
    ctx->pc = 0x222248u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x22224c: 0x207102a
    ctx->pc = 0x22224cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 7)));
    // 0x222250: 0x1440ffe7
    ctx->pc = 0x222250u;
    {
        const bool branch_taken_0x222250 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x222250) {
            ctx->pc = 0x2221F0u;
            goto label_2221f0;
        }
    }
    ctx->pc = 0x222258u;
    // 0x222258: 0xc06ab18
    ctx->pc = 0x222258u;
    SET_GPR_U32(ctx, 31, 0x222260u);
    ctx->pc = 0x1AAC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutPopFadeColor_0x1aac60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222260u; }
        else if (ctx->pc != 0x222260u) { ctx->pc = 0x222260u; }
    }
    if (ctx->pc != 0x222260u) { return; }
    ctx->pc = 0x222260u;
    // 0x222260: 0x4bff6b7e
    ctx->pc = 0x222260u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x222264: 0x4bfe6b7e
    ctx->pc = 0x222264u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x222268: 0x4bfd6b7e
    ctx->pc = 0x222268u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x22226c: 0x4bfc6b7e
    ctx->pc = 0x22226cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x222270: 0x3c020050
    ctx->pc = 0x222270u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x222274: 0xc07ce18
    ctx->pc = 0x222274u;
    SET_GPR_U32(ctx, 31, 0x22227Cu);
    ctx->pc = 0x222278u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22227Cu; }
        else if (ctx->pc != 0x22227Cu) { ctx->pc = 0x22227Cu; }
    }
    if (ctx->pc != 0x22227Cu) { return; }
    ctx->pc = 0x22227Cu;
    // 0x22227c: 0x5c400011
    ctx->pc = 0x22227Cu;
    {
        const bool branch_taken_0x22227c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x22227c) {
            ctx->pc = 0x222280u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x2222C4u;
            goto label_2222c4;
        }
    }
    ctx->pc = 0x222284u;
    // 0x222284: 0xc641004c
    ctx->pc = 0x222284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222288: 0x3c033e75
    ctx->pc = 0x222288u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15989 << 16));
    // 0x22228c: 0x3463c290
    ctx->pc = 0x22228cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 49808));
    // 0x222290: 0x44830000
    ctx->pc = 0x222290u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x222294: 0x0
    ctx->pc = 0x222294u;
    // NOP
    // 0x222298: 0x46000840
    ctx->pc = 0x222298u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22229c: 0xe641004c
    ctx->pc = 0x22229cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
    // 0x2222a0: 0xc680002c
    ctx->pc = 0x2222a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2222a4: 0x46800020
    ctx->pc = 0x2222a4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2222a8: 0x46000836
    ctx->pc = 0x2222a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2222ac: 0x0
    ctx->pc = 0x2222acu;
    // NOP
    // 0x2222b0: 0x45010003
    ctx->pc = 0x2222B0u;
    {
        const bool branch_taken_0x2222b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2222b0) {
            ctx->pc = 0x2222C0u;
            goto label_2222c0;
        }
    }
    ctx->pc = 0x2222B8u;
    // 0x2222b8: 0xe640004c
    ctx->pc = 0x2222b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
    // 0x2222bc: 0x0
    ctx->pc = 0x2222bcu;
    // NOP
label_2222c0:
    // 0x2222c0: 0x26310001
    ctx->pc = 0x2222c0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_2222c4:
    // 0x2222c4: 0x2a230003
    ctx->pc = 0x2222c4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 3));
    // 0x2222c8: 0x26520004
    ctx->pc = 0x2222c8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
    // 0x2222cc: 0x1460ff98
    ctx->pc = 0x2222CCu;
    {
        const bool branch_taken_0x2222cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2222D0u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 12));
        if (branch_taken_0x2222cc) {
            ctx->pc = 0x222130u;
            goto label_222130;
        }
    }
    ctx->pc = 0x2222D4u;
    // 0x2222d4: 0x7bbf0050
    ctx->pc = 0x2222d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2222d8: 0x7bb40040
    ctx->pc = 0x2222d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2222dc: 0x7bb30030
    ctx->pc = 0x2222dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2222e0: 0x7bb20020
    ctx->pc = 0x2222e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2222e4: 0x7bb10010
    ctx->pc = 0x2222e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2222e8: 0x7bb00000
    ctx->pc = 0x2222e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2222ec: 0x3e00008
    ctx->pc = 0x2222ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2222F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221E68u: goto label_221e68;
            case 0x221E70u: goto label_221e70;
            case 0x221E74u: goto label_221e74;
            case 0x221EE4u: goto label_221ee4;
            case 0x221EE8u: goto label_221ee8;
            case 0x221EECu: goto label_221eec;
            case 0x221F64u: goto label_221f64;
            case 0x221F6Cu: goto label_221f6c;
            case 0x221F70u: goto label_221f70;
            case 0x221FE0u: goto label_221fe0;
            case 0x221FE4u: goto label_221fe4;
            case 0x221FE8u: goto label_221fe8;
            case 0x22205Cu: goto label_22205c;
            case 0x222064u: goto label_222064;
            case 0x222068u: goto label_222068;
            case 0x2220D8u: goto label_2220d8;
            case 0x2220DCu: goto label_2220dc;
            case 0x2220E0u: goto label_2220e0;
            case 0x222118u: goto label_222118;
            case 0x222120u: goto label_222120;
            case 0x222130u: goto label_222130;
            case 0x22217Cu: goto label_22217c;
            case 0x2221F0u: goto label_2221f0;
            case 0x222248u: goto label_222248;
            case 0x2222C0u: goto label_2222c0;
            case 0x2222C4u: goto label_2222c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2222F4u;
}
