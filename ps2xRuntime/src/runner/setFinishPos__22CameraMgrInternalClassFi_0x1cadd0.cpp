#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setFinishPos__22CameraMgrInternalClassFi
// Address: 0x1cadd0 - 0x1cae98
void setFinishPos__22CameraMgrInternalClassFi_0x1cadd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setFinishPos__22CameraMgrInternalClassFi");


    ctx->pc = 0x1cadd0u;

    // 0x1cadd0: 0x27bdffa0
    ctx->pc = 0x1cadd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1cadd4: 0x7fbf0040
    ctx->pc = 0x1cadd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1cadd8: 0x7fb30030
    ctx->pc = 0x1cadd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1caddc: 0x7fb20020
    ctx->pc = 0x1caddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cade0: 0x510c0
    ctx->pc = 0x1cade0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
    // 0x1cade4: 0x7fb10010
    ctx->pc = 0x1cade4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cade8: 0x70a09628
    ctx->pc = 0x1cade8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1cadec: 0x451021
    ctx->pc = 0x1cadecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cadf0: 0x22980
    ctx->pc = 0x1cadf0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 2), 6));
    // 0x1cadf4: 0x7fb00000
    ctx->pc = 0x1cadf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cadf8: 0xa41021
    ctx->pc = 0x1cadf8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1cadfc: 0x8c430010
    ctx->pc = 0x1cadfcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1cae00: 0x70809e28
    ctx->pc = 0x1cae00u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1cae04: 0x27a80058
    ctx->pc = 0x1cae04u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 88));
    // 0x1cae08: 0x27a9005c
    ctx->pc = 0x1cae08u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 92));
    // 0x1cae0c: 0x3c020030
    ctx->pc = 0x1cae0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1cae10: 0x24425c30
    ctx->pc = 0x1cae10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23600));
    // 0x1cae14: 0x458821
    ctx->pc = 0x1cae14u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cae18: 0x310c0
    ctx->pc = 0x1cae18u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1cae1c: 0x441021
    ctx->pc = 0x1cae1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1cae20: 0x8c500904
    ctx->pc = 0x1cae20u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 2308)));
    // 0x1cae24: 0x27848c70
    ctx->pc = 0x1cae24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937712));
    // 0x1cae28: 0xc600000c
    ctx->pc = 0x1cae28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cae2c: 0x8e030014
    ctx->pc = 0x1cae2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1cae30: 0x8e050010
    ctx->pc = 0x1cae30u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cae34: 0x46800320
    ctx->pc = 0x1cae34u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1cae38: 0x31100
    ctx->pc = 0x1cae38u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1cae3c: 0x431023
    ctx->pc = 0x1cae3cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cae40: 0x21080
    ctx->pc = 0x1cae40u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cae44: 0x2221021
    ctx->pc = 0x1cae44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1cae48: 0x24460198
    ctx->pc = 0x1cae48u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 408));
    // 0x1cae4c: 0xc0731b8
    ctx->pc = 0x1CAE4Cu;
    SET_GPR_U32(ctx, 31, 0x1CAE54u);
    ctx->pc = 0x1CAE50u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 432));
    ctx->pc = 0x1CC6E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getCameraPath__15CamPathMgrClassFifP4ANPOP4ANPOPiPf_0x1cc6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAE54u; }
        else if (ctx->pc != 0x1CAE54u) { ctx->pc = 0x1CAE54u; }
    }
    if (ctx->pc != 0x1CAE54u) { return; }
    ctx->pc = 0x1CAE54u;
    // 0x1cae54: 0x8e030014
    ctx->pc = 0x1cae54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1cae58: 0x2406ffff
    ctx->pc = 0x1cae58u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cae5c: 0x72602628
    ctx->pc = 0x1cae5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1cae60: 0x72402e28
    ctx->pc = 0x1cae60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1cae64: 0x31100
    ctx->pc = 0x1cae64u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1cae68: 0x431023
    ctx->pc = 0x1cae68u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cae6c: 0x21080
    ctx->pc = 0x1cae6cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cae70: 0x511021
    ctx->pc = 0x1cae70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1cae74: 0xc072cd8
    ctx->pc = 0x1CAE74u;
    SET_GPR_U32(ctx, 31, 0x1CAE7Cu);
    ctx->pc = 0x1CAE78u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 404), (uint16_t)GPR_U32(ctx, 6));
    ctx->pc = 0x1CB360u;
    {
        const uint32_t __entryPc = ctx->pc;
        finishJob__22CameraMgrInternalClassFi_0x1cb360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAE7Cu; }
        else if (ctx->pc != 0x1CAE7Cu) { ctx->pc = 0x1CAE7Cu; }
    }
    if (ctx->pc != 0x1CAE7Cu) { return; }
    ctx->pc = 0x1CAE7Cu;
    // 0x1cae7c: 0x7bbf0040
    ctx->pc = 0x1cae7cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cae80: 0x7bb30030
    ctx->pc = 0x1cae80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cae84: 0x7bb20020
    ctx->pc = 0x1cae84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cae88: 0x7bb10010
    ctx->pc = 0x1cae88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cae8c: 0x7bb00000
    ctx->pc = 0x1cae8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cae90: 0x3e00008
    ctx->pc = 0x1CAE90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAE94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CAE98u;
}
