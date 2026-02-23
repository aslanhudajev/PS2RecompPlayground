#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlLightCutoffAng
// Address: 0x1a6b00 - 0x1a6b58
void nlLightCutoffAng_0x1a6b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlLightCutoffAng");


    ctx->pc = 0x1a6b00u;

    // 0x1a6b00: 0x27bdffc0
    ctx->pc = 0x1a6b00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a6b04: 0x7fbf0030
    ctx->pc = 0x1a6b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1a6b08: 0x7fb10020
    ctx->pc = 0x1a6b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a6b0c: 0x7fb00010
    ctx->pc = 0x1a6b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a6b10: 0x70a08628
    ctx->pc = 0x1a6b10u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1a6b14: 0x70808e28
    ctx->pc = 0x1a6b14u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1a6b18: 0x72002628
    ctx->pc = 0x1a6b18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a6b1c: 0xc06c24e
    ctx->pc = 0x1A6B1Cu;
    SET_GPR_U32(ctx, 31, 0x1A6B24u);
    ctx->pc = 0x1A6B20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->pc = 0x1B0938u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0938_0x1b0938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B24u; }
        else if (ctx->pc != 0x1A6B24u) { ctx->pc = 0x1A6B24u; }
    }
    if (ctx->pc != 0x1A6B24u) { return; }
    ctx->pc = 0x1A6B24u;
    // 0x1a6b24: 0x72002628
    ctx->pc = 0x1a6b24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a6b28: 0xc06c26d
    ctx->pc = 0x1A6B28u;
    SET_GPR_U32(ctx, 31, 0x1A6B30u);
    ctx->pc = 0x1A6B2Cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x1B09B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B09B4_0x1b09b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B30u; }
        else if (ctx->pc != 0x1A6B30u) { ctx->pc = 0x1A6B30u; }
    }
    if (ctx->pc != 0x1A6B30u) { return; }
    ctx->pc = 0x1A6B30u;
    // 0x1a6b30: 0x72202628
    ctx->pc = 0x1a6b30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1a6b34: 0x4600a306
    ctx->pc = 0x1a6b34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a6b38: 0xc069aac
    ctx->pc = 0x1A6B38u;
    SET_GPR_U32(ctx, 31, 0x1A6B40u);
    ctx->pc = 0x1A6B3Cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x1A6AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlLightCutoffSinCos_0x1a6ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B40u; }
        else if (ctx->pc != 0x1A6B40u) { ctx->pc = 0x1A6B40u; }
    }
    if (ctx->pc != 0x1A6B40u) { return; }
    ctx->pc = 0x1A6B40u;
    // 0x1a6b40: 0x7bbf0030
    ctx->pc = 0x1a6b40u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a6b44: 0x7bb10020
    ctx->pc = 0x1a6b44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6b48: 0x7bb00010
    ctx->pc = 0x1a6b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6b4c: 0xc7b40000
    ctx->pc = 0x1a6b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a6b50: 0x3e00008
    ctx->pc = 0x1A6B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6B54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6B58u;
}
