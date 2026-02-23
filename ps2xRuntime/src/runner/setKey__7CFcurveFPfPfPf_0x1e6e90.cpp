#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setKey__7CFcurveFPfPfPf
// Address: 0x1e6e90 - 0x1e6f44
void setKey__7CFcurveFPfPfPf_0x1e6e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setKey__7CFcurveFPfPfPf");


    ctx->pc = 0x1e6e90u;

    // 0x1e6e90: 0x27bdffb0
    ctx->pc = 0x1e6e90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e6e94: 0x7fbf0040
    ctx->pc = 0x1e6e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1e6e98: 0x7fb30030
    ctx->pc = 0x1e6e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e6e9c: 0x7fb20020
    ctx->pc = 0x1e6e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e6ea0: 0x7fb10010
    ctx->pc = 0x1e6ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e6ea4: 0x7fb00000
    ctx->pc = 0x1e6ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e6ea8: 0x70a09e28
    ctx->pc = 0x1e6ea8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e6eac: 0x70c09628
    ctx->pc = 0x1e6eacu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e6eb0: 0x70e08e28
    ctx->pc = 0x1e6eb0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1e6eb4: 0xc079b6c
    ctx->pc = 0x1E6EB4u;
    SET_GPR_U32(ctx, 31, 0x1E6EBCu);
    ctx->pc = 0x1E6EB8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E6DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcurveFv_0x1e6db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6EBCu; }
        else if (ctx->pc != 0x1E6EBCu) { ctx->pc = 0x1E6EBCu; }
    }
    if (ctx->pc != 0x1E6EBCu) { return; }
    ctx->pc = 0x1E6EBCu;
    // 0x1e6ebc: 0x12600008
    ctx->pc = 0x1E6EBCu;
    {
        const bool branch_taken_0x1e6ebc = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e6ebc) {
            ctx->pc = 0x1E6EE0u;
            goto label_1e6ee0;
        }
    }
    ctx->pc = 0x1E6EC4u;
    // 0x1e6ec4: 0xc6600000
    ctx->pc = 0x1e6ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6ec8: 0x26630004
    ctx->pc = 0x1e6ec8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 19), 4));
    // 0x1e6ecc: 0x46000024
    ctx->pc = 0x1e6eccu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1e6ed0: 0x44040000
    ctx->pc = 0x1e6ed0u;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[0]);
    // 0x1e6ed4: 0x0
    ctx->pc = 0x1e6ed4u;
    // NOP
    // 0x1e6ed8: 0xa6040010
    ctx->pc = 0x1e6ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 4));
    // 0x1e6edc: 0xae030000
    ctx->pc = 0x1e6edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1e6ee0:
    // 0x1e6ee0: 0x12400008
    ctx->pc = 0x1E6EE0u;
    {
        const bool branch_taken_0x1e6ee0 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e6ee0) {
            ctx->pc = 0x1E6F04u;
            goto label_1e6f04;
        }
    }
    ctx->pc = 0x1E6EE8u;
    // 0x1e6ee8: 0xc6400000
    ctx->pc = 0x1e6ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6eec: 0x26430004
    ctx->pc = 0x1e6eecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 4));
    // 0x1e6ef0: 0x46000024
    ctx->pc = 0x1e6ef0u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1e6ef4: 0x44040000
    ctx->pc = 0x1e6ef4u;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[0]);
    // 0x1e6ef8: 0x0
    ctx->pc = 0x1e6ef8u;
    // NOP
    // 0x1e6efc: 0xa6040012
    ctx->pc = 0x1e6efcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 4));
    // 0x1e6f00: 0xae030004
    ctx->pc = 0x1e6f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1e6f04:
    // 0x1e6f04: 0x12200008
    ctx->pc = 0x1E6F04u;
    {
        const bool branch_taken_0x1e6f04 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e6f04) {
            ctx->pc = 0x1E6F28u;
            goto label_1e6f28;
        }
    }
    ctx->pc = 0x1E6F0Cu;
    // 0x1e6f0c: 0xc6200000
    ctx->pc = 0x1e6f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6f10: 0x26230004
    ctx->pc = 0x1e6f10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 4));
    // 0x1e6f14: 0x46000024
    ctx->pc = 0x1e6f14u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1e6f18: 0x44040000
    ctx->pc = 0x1e6f18u;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[0]);
    // 0x1e6f1c: 0x0
    ctx->pc = 0x1e6f1cu;
    // NOP
    // 0x1e6f20: 0xa6040014
    ctx->pc = 0x1e6f20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x1e6f24: 0xae030008
    ctx->pc = 0x1e6f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_1e6f28:
    // 0x1e6f28: 0x7bbf0040
    ctx->pc = 0x1e6f28u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e6f2c: 0x7bb30030
    ctx->pc = 0x1e6f2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e6f30: 0x7bb20020
    ctx->pc = 0x1e6f30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6f34: 0x7bb10010
    ctx->pc = 0x1e6f34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6f38: 0x7bb00000
    ctx->pc = 0x1e6f38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6f3c: 0x3e00008
    ctx->pc = 0x1E6F3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6F40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E6EE0u: goto label_1e6ee0;
            case 0x1E6F04u: goto label_1e6f04;
            case 0x1E6F28u: goto label_1e6f28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E6F44u;
}
