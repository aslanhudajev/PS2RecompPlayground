#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setKey__7CFcurveFiiiPf
// Address: 0x1e6de0 - 0x1e6e8c
void setKey__7CFcurveFiiiPf_0x1e6de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setKey__7CFcurveFiiiPf");


    ctx->pc = 0x1e6de0u;

    // 0x1e6de0: 0x27bdffa0
    ctx->pc = 0x1e6de0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e6de4: 0x7fbf0050
    ctx->pc = 0x1e6de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1e6de8: 0x7fb40040
    ctx->pc = 0x1e6de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e6dec: 0x7fb30030
    ctx->pc = 0x1e6decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e6df0: 0x7fb20020
    ctx->pc = 0x1e6df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e6df4: 0x7fb10010
    ctx->pc = 0x1e6df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e6df8: 0x7fb00000
    ctx->pc = 0x1e6df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e6dfc: 0x70a09e28
    ctx->pc = 0x1e6dfcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e6e00: 0x70c09628
    ctx->pc = 0x1e6e00u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e6e04: 0x70e08e28
    ctx->pc = 0x1e6e04u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1e6e08: 0x71008628
    ctx->pc = 0x1e6e08u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1e6e0c: 0xc079b6c
    ctx->pc = 0x1E6E0Cu;
    SET_GPR_U32(ctx, 31, 0x1E6E14u);
    ctx->pc = 0x1E6E10u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E6DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcurveFv_0x1e6db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6E14u; }
        else if (ctx->pc != 0x1E6E14u) { ctx->pc = 0x1E6E14u; }
    }
    if (ctx->pc != 0x1E6E14u) { return; }
    ctx->pc = 0x1E6E14u;
    // 0x1e6e14: 0x12600003
    ctx->pc = 0x1E6E14u;
    {
        const bool branch_taken_0x1e6e14 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e6e14) {
            ctx->pc = 0x1E6E24u;
            goto label_1e6e24;
        }
    }
    ctx->pc = 0x1E6E1Cu;
    // 0x1e6e1c: 0xae900000
    ctx->pc = 0x1e6e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
    // 0x1e6e20: 0xa6930010
    ctx->pc = 0x1e6e20u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 16), (uint16_t)GPR_U32(ctx, 19));
label_1e6e24:
    // 0x1e6e24: 0x12400006
    ctx->pc = 0x1E6E24u;
    {
        const bool branch_taken_0x1e6e24 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E6E28u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
        if (branch_taken_0x1e6e24) {
            ctx->pc = 0x1E6E40u;
            goto label_1e6e40;
        }
    }
    ctx->pc = 0x1E6E2Cu;
    // 0x1e6e2c: 0x731821
    ctx->pc = 0x1e6e2cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1e6e30: 0x31880
    ctx->pc = 0x1e6e30u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e6e34: 0x2031821
    ctx->pc = 0x1e6e34u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1e6e38: 0xae830004
    ctx->pc = 0x1e6e38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x1e6e3c: 0xa6920012
    ctx->pc = 0x1e6e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 18), (uint16_t)GPR_U32(ctx, 18));
label_1e6e40:
    // 0x1e6e40: 0x1220000a
    ctx->pc = 0x1E6E40u;
    {
        const bool branch_taken_0x1e6e40 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E6E44u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
        if (branch_taken_0x1e6e40) {
            ctx->pc = 0x1E6E6Cu;
            goto label_1e6e6c;
        }
    }
    ctx->pc = 0x1E6E48u;
    // 0x1e6e48: 0x731821
    ctx->pc = 0x1e6e48u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1e6e4c: 0x31880
    ctx->pc = 0x1e6e4cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e6e50: 0x2032021
    ctx->pc = 0x1e6e50u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1e6e54: 0x121880
    ctx->pc = 0x1e6e54u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 2));
    // 0x1e6e58: 0x721821
    ctx->pc = 0x1e6e58u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1e6e5c: 0x31880
    ctx->pc = 0x1e6e5cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e6e60: 0x831821
    ctx->pc = 0x1e6e60u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e6e64: 0xae830008
    ctx->pc = 0x1e6e64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x1e6e68: 0xa6910014
    ctx->pc = 0x1e6e68u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 17));
label_1e6e6c:
    // 0x1e6e6c: 0x7bbf0050
    ctx->pc = 0x1e6e6cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e6e70: 0x7bb40040
    ctx->pc = 0x1e6e70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e6e74: 0x7bb30030
    ctx->pc = 0x1e6e74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e6e78: 0x7bb20020
    ctx->pc = 0x1e6e78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6e7c: 0x7bb10010
    ctx->pc = 0x1e6e7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6e80: 0x7bb00000
    ctx->pc = 0x1e6e80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6e84: 0x3e00008
    ctx->pc = 0x1E6E84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6E88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E6E24u: goto label_1e6e24;
            case 0x1E6E40u: goto label_1e6e40;
            case 0x1E6E6Cu: goto label_1e6e6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E6E8Cu;
}
