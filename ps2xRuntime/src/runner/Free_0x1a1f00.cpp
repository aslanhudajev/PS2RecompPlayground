#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: Free
// Address: 0x1a1f00 - 0x1a1fd4
void Free_0x1a1f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Free");


    ctx->pc = 0x1a1f00u;

    // 0x1a1f00: 0x27bdffc0
    ctx->pc = 0x1a1f00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a1f04: 0x7fbf0030
    ctx->pc = 0x1a1f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1a1f08: 0x7fb20020
    ctx->pc = 0x1a1f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a1f0c: 0x7fb10010
    ctx->pc = 0x1a1f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a1f10: 0x7fb00000
    ctx->pc = 0x1a1f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a1f14: 0x8c82fff4
    ctx->pc = 0x1a1f14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294967284)));
    // 0x1a1f18: 0x1c400005
    ctx->pc = 0x1A1F18u;
    {
        const bool branch_taken_0x1a1f18 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1A1F1Cu;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a1f18) {
            ctx->pc = 0x1A1F30u;
            goto label_1a1f30;
        }
    }
    ctx->pc = 0x1A1F20u;
    // 0x1a1f20: 0x3c020026
    ctx->pc = 0x1a1f20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1a1f24: 0x2444dfe0
    ctx->pc = 0x1a1f24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294959072));
    // 0x1a1f28: 0xc07d01c
    ctx->pc = 0x1A1F28u;
    SET_GPR_U32(ctx, 31, 0x1A1F30u);
    ctx->pc = 0x1A1F2Cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1F4070u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___am1FatalError_0x1f4070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1F30u; }
        else if (ctx->pc != 0x1A1F30u) { ctx->pc = 0x1A1F30u; }
    }
    if (ctx->pc != 0x1A1F30u) { return; }
    ctx->pc = 0x1A1F30u;
label_1a1f30:
    // 0x1a1f30: 0x8e43fff4
    ctx->pc = 0x1a1f30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4294967284)));
    // 0x1a1f34: 0x3c024000
    ctx->pc = 0x1a1f34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x1a1f38: 0x621024
    ctx->pc = 0x1a1f38u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a1f3c: 0x14400012
    ctx->pc = 0x1A1F3Cu;
    {
        const bool branch_taken_0x1a1f3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A1F40u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a1f3c) {
            ctx->pc = 0x1A1F88u;
            goto label_1a1f88;
        }
    }
    ctx->pc = 0x1A1F44u;
label_1a1f44:
    // 0x1a1f44: 0x8e02fff4
    ctx->pc = 0x1a1f44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294967284)));
    // 0x1a1f48: 0x1c400005
    ctx->pc = 0x1A1F48u;
    {
        const bool branch_taken_0x1a1f48 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1A1F4Cu;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
        if (branch_taken_0x1a1f48) {
            ctx->pc = 0x1A1F60u;
            goto label_1a1f60;
        }
    }
    ctx->pc = 0x1A1F50u;
    // 0x1a1f50: 0x3c020026
    ctx->pc = 0x1a1f50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1a1f54: 0x2444e000
    ctx->pc = 0x1a1f54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294959104));
    // 0x1a1f58: 0xc07d01c
    ctx->pc = 0x1A1F58u;
    SET_GPR_U32(ctx, 31, 0x1A1F60u);
    ctx->pc = 0x1A1F5Cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1F4070u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___am1FatalError_0x1f4070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1F60u; }
        else if (ctx->pc != 0x1A1F60u) { ctx->pc = 0x1A1F60u; }
    }
    if (ctx->pc != 0x1A1F60u) { return; }
    ctx->pc = 0x1A1F60u;
label_1a1f60:
    // 0x1a1f60: 0xc0687f8
    ctx->pc = 0x1A1F60u;
    SET_GPR_U32(ctx, 31, 0x1A1F68u);
    ctx->pc = 0x1A1F64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A1FE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        Free0_0x1a1fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1F68u; }
        else if (ctx->pc != 0x1A1F68u) { ctx->pc = 0x1A1F68u; }
    }
    if (ctx->pc != 0x1A1F68u) { return; }
    ctx->pc = 0x1A1F68u;
    // 0x1a1f68: 0x12320014
    ctx->pc = 0x1A1F68u;
    {
        const bool branch_taken_0x1a1f68 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 18));
        ctx->pc = 0x1A1F6Cu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a1f68) {
            ctx->pc = 0x1A1FBCu;
            goto label_1a1fbc;
        }
    }
    ctx->pc = 0x1A1F70u;
    // 0x1a1f70: 0x8e23fff4
    ctx->pc = 0x1a1f70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4294967284)));
    // 0x1a1f74: 0x3c02bfff
    ctx->pc = 0x1a1f74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49151 << 16));
    // 0x1a1f78: 0x3442ffff
    ctx->pc = 0x1a1f78u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1a1f7c: 0x621024
    ctx->pc = 0x1a1f7cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a1f80: 0x1000fff0
    ctx->pc = 0x1A1F80u;
    {
        const bool branch_taken_0x1a1f80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1F84u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294967284), GPR_U32(ctx, 2));
        if (branch_taken_0x1a1f80) {
            ctx->pc = 0x1A1F44u;
            goto label_1a1f44;
        }
    }
    ctx->pc = 0x1A1F88u;
label_1a1f88:
    // 0x1a1f88: 0x8e43fff4
    ctx->pc = 0x1a1f88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4294967284)));
    // 0x1a1f8c: 0x3c02bfff
    ctx->pc = 0x1a1f8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49151 << 16));
    // 0x1a1f90: 0x3442ffff
    ctx->pc = 0x1a1f90u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1a1f94: 0x72402628
    ctx->pc = 0x1a1f94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1a1f98: 0x621024
    ctx->pc = 0x1a1f98u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a1f9c: 0xae42fff4
    ctx->pc = 0x1a1f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967284), GPR_U32(ctx, 2));
    // 0x1a1fa0: 0x8e43fffc
    ctx->pc = 0x1a1fa0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
    // 0x1a1fa4: 0x8e42fff8
    ctx->pc = 0x1a1fa4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294967288)));
    // 0x1a1fa8: 0xac43fffc
    ctx->pc = 0x1a1fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 3));
    // 0x1a1fac: 0x8e43fff8
    ctx->pc = 0x1a1facu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4294967288)));
    // 0x1a1fb0: 0x8e42fffc
    ctx->pc = 0x1a1fb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
    // 0x1a1fb4: 0xc0687f8
    ctx->pc = 0x1A1FB4u;
    SET_GPR_U32(ctx, 31, 0x1A1FBCu);
    ctx->pc = 0x1A1FB8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 3));
    ctx->pc = 0x1A1FE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        Free0_0x1a1fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1FBCu; }
        else if (ctx->pc != 0x1A1FBCu) { ctx->pc = 0x1A1FBCu; }
    }
    if (ctx->pc != 0x1A1FBCu) { return; }
    ctx->pc = 0x1A1FBCu;
label_1a1fbc:
    // 0x1a1fbc: 0x7bbf0030
    ctx->pc = 0x1a1fbcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a1fc0: 0x7bb20020
    ctx->pc = 0x1a1fc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1fc4: 0x7bb10010
    ctx->pc = 0x1a1fc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1fc8: 0x7bb00000
    ctx->pc = 0x1a1fc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1fcc: 0x3e00008
    ctx->pc = 0x1A1FCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1FD0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A1F30u: goto label_1a1f30;
            case 0x1A1F44u: goto label_1a1f44;
            case 0x1A1F60u: goto label_1a1f60;
            case 0x1A1F88u: goto label_1a1f88;
            case 0x1A1FBCu: goto label_1a1fbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A1FD4u;
}
