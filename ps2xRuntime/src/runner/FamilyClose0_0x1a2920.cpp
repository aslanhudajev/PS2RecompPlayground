#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: FamilyClose0
// Address: 0x1a2920 - 0x1a29a4
void FamilyClose0_0x1a2920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("FamilyClose0");


    ctx->pc = 0x1a2920u;

label_1a2920:
    // 0x1a2920: 0x27bdffc0
    ctx->pc = 0x1a2920u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a2924: 0x7fbf0030
    ctx->pc = 0x1a2924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1a2928: 0x7fb20020
    ctx->pc = 0x1a2928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a292c: 0x7fb10010
    ctx->pc = 0x1a292cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a2930: 0x7fb00000
    ctx->pc = 0x1a2930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a2934: 0x9492002c
    ctx->pc = 0x1a2934u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1a2938: 0x1240000b
    ctx->pc = 0x1A2938u;
    {
        const bool branch_taken_0x1a2938 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A293Cu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a2938) {
            ctx->pc = 0x1A2968u;
            goto label_1a2968;
        }
    }
    ctx->pc = 0x1A2940u;
    // 0x1a2940: 0x8e040020
    ctx->pc = 0x1a2940u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a2944: 0x0
    ctx->pc = 0x1a2944u;
    // NOP
label_1a2948:
    // 0x1a2948: 0xc068a48
    ctx->pc = 0x1A2948u;
    SET_GPR_U32(ctx, 31, 0x1A2950u);
    ctx->pc = 0x1A294Cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    ctx->pc = 0x1A2920u;
    goto label_1a2920;
    ctx->pc = 0x1A2950u;
label_1a2950:
    // 0x1a2950: 0x2652ffff
    ctx->pc = 0x1a2950u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1a2954: 0x72202628
    ctx->pc = 0x1a2954u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1a2958: 0x0
    ctx->pc = 0x1a2958u;
    // NOP
    // 0x1a295c: 0x1640fffa
    ctx->pc = 0x1A295Cu;
    {
        const bool branch_taken_0x1a295c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a295c) {
            ctx->pc = 0x1A2948u;
            goto label_1a2948;
        }
    }
    ctx->pc = 0x1A2964u;
    // 0x1a2964: 0x0
    ctx->pc = 0x1a2964u;
    // NOP
label_1a2968:
    // 0x1a2968: 0x8e040000
    ctx->pc = 0x1a2968u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a296c: 0x3c03001a
    ctx->pc = 0x1a296cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)26 << 16));
    // 0x1a2970: 0x24632690
    ctx->pc = 0x1a2970u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 9872));
    // 0x1a2974: 0x10830003
    ctx->pc = 0x1A2974u;
    {
        const bool branch_taken_0x1a2974 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1A2978u;
        SET_GPR_U32(ctx, 3, ((uint32_t)26 << 16));
        if (branch_taken_0x1a2974) {
            ctx->pc = 0x1A2984u;
            goto label_1a2984;
        }
    }
    ctx->pc = 0x1A297Cu;
    // 0x1a297c: 0x24632630
    ctx->pc = 0x1a297cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 9776));
    // 0x1a2980: 0xae030000
    ctx->pc = 0x1a2980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1a2984:
    // 0x1a2984: 0xae000008
    ctx->pc = 0x1a2984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1a2988: 0xae00000c
    ctx->pc = 0x1a2988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1a298c: 0x7bbf0030
    ctx->pc = 0x1a298cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a2990: 0x7bb20020
    ctx->pc = 0x1a2990u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2994: 0x7bb10010
    ctx->pc = 0x1a2994u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2998: 0x7bb00000
    ctx->pc = 0x1a2998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a299c: 0x3e00008
    ctx->pc = 0x1A299Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A29A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A2920u: goto label_1a2920;
            case 0x1A2948u: goto label_1a2948;
            case 0x1A2950u: goto label_1a2950;
            case 0x1A2968u: goto label_1a2968;
            case 0x1A2984u: goto label_1a2984;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A29A4u;
}
