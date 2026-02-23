#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sub_001AFCAC
// Address: 0x1afcac - 0x1afd54
void sub_001AFCAC_0x1afcac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sub_001AFCAC");


    ctx->pc = 0x1afcacu;

    // 0x1afcac: 0x27bdfff0
    ctx->pc = 0x1afcacu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1afcb0: 0x8c880000
    ctx->pc = 0x1afcb0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1afcb4: 0x8c890004
    ctx->pc = 0x1afcb4u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1afcb8: 0x8c8a0008
    ctx->pc = 0x1afcb8u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1afcbc: 0xafa80000
    ctx->pc = 0x1afcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x1afcc0: 0xafa90004
    ctx->pc = 0x1afcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x1afcc4: 0xafaa0008
    ctx->pc = 0x1afcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x1afcc8: 0xdba10000
    ctx->pc = 0x1afcc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afccc: 0x4bc1e1bc
    ctx->pc = 0x1afcccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1afcd0: 0x4bc1e8bd
    ctx->pc = 0x1afcd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1afcd4: 0x4bc1f08a
    ctx->pc = 0x1afcd4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = ps2_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1afcd8: 0xfba20000
    ctx->pc = 0x1afcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1afcdc: 0x8fa80000
    ctx->pc = 0x1afcdcu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afce0: 0x8fa90004
    ctx->pc = 0x1afce0u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1afce4: 0x8faa0008
    ctx->pc = 0x1afce4u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1afce8: 0xaca80000
    ctx->pc = 0x1afce8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x1afcec: 0xaca90004
    ctx->pc = 0x1afcecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 9));
    // 0x1afcf0: 0xacaa0008
    ctx->pc = 0x1afcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 10));
    // 0x1afcf4: 0x3e00008
    ctx->pc = 0x1AFCF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFCF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AFD20u: goto label_1afd20;
            case 0x1AFD4Cu: goto label_1afd4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AFCFCu;
    // 0x1afcfc: 0x1a400013
    ctx->pc = 0x1AFCFCu;
    {
        const bool branch_taken_0x1afcfc = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1AFD00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
        if (branch_taken_0x1afcfc) {
            ctx->pc = 0x1AFD4Cu;
            goto label_1afd4c;
        }
    }
    ctx->pc = 0x1AFD04u;
    // 0x1afd04: 0xffbf0030
    ctx->pc = 0x1afd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1afd08: 0xffb00020
    ctx->pc = 0x1afd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1afd0c: 0xffb10010
    ctx->pc = 0x1afd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1afd10: 0xffb20000
    ctx->pc = 0x1afd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 18));
    // 0x1afd14: 0x808025
    ctx->pc = 0x1afd14u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
    // 0x1afd18: 0xa08825
    ctx->pc = 0x1afd18u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 0)));
    // 0x1afd1c: 0xc09025
    ctx->pc = 0x1afd1cu;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 0)));
label_1afd20:
    // 0x1afd20: 0x2002025
    ctx->pc = 0x1afd20u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 0)));
    // 0x1afd24: 0xc06bf00
    ctx->pc = 0x1AFD24u;
    SET_GPR_U32(ctx, 31, 0x1AFD2Cu);
    ctx->pc = 0x1AFD28u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 0)));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD2Cu; }
        else if (ctx->pc != 0x1AFD2Cu) { ctx->pc = 0x1AFD2Cu; }
    }
    if (ctx->pc != 0x1AFD2Cu) { return; }
    ctx->pc = 0x1AFD2Cu;
    // 0x1afd2c: 0x2610000c
    ctx->pc = 0x1afd2cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 12));
    // 0x1afd30: 0x6652ffff
    ctx->pc = 0x1afd30u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 18) + (int64_t)4294967295);
    // 0x1afd34: 0x1e40fffa
    ctx->pc = 0x1AFD34u;
    {
        const bool branch_taken_0x1afd34 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x1AFD38u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 12));
        if (branch_taken_0x1afd34) {
            ctx->pc = 0x1AFD20u;
            goto label_1afd20;
        }
    }
    ctx->pc = 0x1AFD3Cu;
    // 0x1afd3c: 0xdfbf0030
    ctx->pc = 0x1afd3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1afd40: 0xdfb00020
    ctx->pc = 0x1afd40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1afd44: 0xdfb10010
    ctx->pc = 0x1afd44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1afd48: 0xdfb20000
    ctx->pc = 0x1afd48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1afd4c:
    // 0x1afd4c: 0x3e00008
    ctx->pc = 0x1AFD4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFD50u;
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 29), (int32_t)64, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AFD20u: goto label_1afd20;
            case 0x1AFD4Cu: goto label_1afd4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AFD54u;
}
