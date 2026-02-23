#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sub_001AFC00
// Address: 0x1afc00 - 0x1afcac
void sub_001AFC00_0x1afc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sub_001AFC00");


    ctx->pc = 0x1afc00u;

label_1afc00:
    // 0x1afc00: 0x27bdfff0
    ctx->pc = 0x1afc00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1afc04: 0x8c880000
    ctx->pc = 0x1afc04u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1afc08: 0x8c890004
    ctx->pc = 0x1afc08u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1afc0c: 0x8c8a0008
    ctx->pc = 0x1afc0cu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1afc10: 0xafa80000
    ctx->pc = 0x1afc10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x1afc14: 0xafa90004
    ctx->pc = 0x1afc14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x1afc18: 0xafaa0008
    ctx->pc = 0x1afc18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x1afc1c: 0xdba10000
    ctx->pc = 0x1afc1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afc20: 0x4bc1e1bc
    ctx->pc = 0x1afc20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1afc24: 0x4bc1e8bd
    ctx->pc = 0x1afc24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1afc28: 0x4bc1f0be
    ctx->pc = 0x1afc28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1afc2c: 0x4bc0f88b
    ctx->pc = 0x1afc2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1afc30: 0xfba20000
    ctx->pc = 0x1afc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1afc34: 0x8fa80000
    ctx->pc = 0x1afc34u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afc38: 0x8fa90004
    ctx->pc = 0x1afc38u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1afc3c: 0x8faa0008
    ctx->pc = 0x1afc3cu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1afc40: 0xaca80000
    ctx->pc = 0x1afc40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x1afc44: 0xaca90004
    ctx->pc = 0x1afc44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 9));
    // 0x1afc48: 0xacaa0008
    ctx->pc = 0x1afc48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 10));
    // 0x1afc4c: 0x3e00008
    ctx->pc = 0x1AFC4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFC50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AFC00u: goto label_1afc00;
            case 0x1AFC78u: goto label_1afc78;
            case 0x1AFC84u: goto label_1afc84;
            case 0x1AFCA4u: goto label_1afca4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AFC54u;
    // 0x1afc54: 0x1a400013
    ctx->pc = 0x1AFC54u;
    {
        const bool branch_taken_0x1afc54 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1AFC58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
        if (branch_taken_0x1afc54) {
            ctx->pc = 0x1AFCA4u;
            goto label_1afca4;
        }
    }
    ctx->pc = 0x1AFC5Cu;
    // 0x1afc5c: 0xffbf0030
    ctx->pc = 0x1afc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1afc60: 0xffb00020
    ctx->pc = 0x1afc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1afc64: 0xffb10010
    ctx->pc = 0x1afc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1afc68: 0xffb20000
    ctx->pc = 0x1afc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 18));
    // 0x1afc6c: 0x808025
    ctx->pc = 0x1afc6cu;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
    // 0x1afc70: 0xa08825
    ctx->pc = 0x1afc70u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 0)));
    // 0x1afc74: 0xc09025
    ctx->pc = 0x1afc74u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 0)));
label_1afc78:
    // 0x1afc78: 0x2002025
    ctx->pc = 0x1afc78u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 0)));
    // 0x1afc7c: 0xc06bf00
    ctx->pc = 0x1AFC7Cu;
    SET_GPR_U32(ctx, 31, 0x1AFC84u);
    ctx->pc = 0x1AFC80u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 0)));
    ctx->pc = 0x1AFC00u;
    goto label_1afc00;
    ctx->pc = 0x1AFC84u;
label_1afc84:
    // 0x1afc84: 0x2610000c
    ctx->pc = 0x1afc84u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 12));
    // 0x1afc88: 0x6652ffff
    ctx->pc = 0x1afc88u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 18) + (int64_t)4294967295);
    // 0x1afc8c: 0x1e40fffa
    ctx->pc = 0x1AFC8Cu;
    {
        const bool branch_taken_0x1afc8c = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x1AFC90u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 12));
        if (branch_taken_0x1afc8c) {
            ctx->pc = 0x1AFC78u;
            goto label_1afc78;
        }
    }
    ctx->pc = 0x1AFC94u;
    // 0x1afc94: 0xdfbf0030
    ctx->pc = 0x1afc94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1afc98: 0xdfb00020
    ctx->pc = 0x1afc98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1afc9c: 0xdfb10010
    ctx->pc = 0x1afc9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1afca0: 0xdfb20000
    ctx->pc = 0x1afca0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1afca4:
    // 0x1afca4: 0x3e00008
    ctx->pc = 0x1AFCA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFCA8u;
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 29), (int32_t)64, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AFC00u: goto label_1afc00;
            case 0x1AFC78u: goto label_1afc78;
            case 0x1AFC84u: goto label_1afc84;
            case 0x1AFCA4u: goto label_1afca4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AFCACu;
}
