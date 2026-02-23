#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: eSETSTR__16ScrBlurCtrlClassFPUi
// Address: 0x216680 - 0x2166c0
void eSETSTR__16ScrBlurCtrlClassFPUi_0x216680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("eSETSTR__16ScrBlurCtrlClassFPUi");


    ctx->pc = 0x216680u;

    // 0x216680: 0x27bdffe0
    ctx->pc = 0x216680u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x216684: 0x7fbf0010
    ctx->pc = 0x216684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x216688: 0x7fb00000
    ctx->pc = 0x216688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21668c: 0x8ca20008
    ctx->pc = 0x21668cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x216690: 0x70a08628
    ctx->pc = 0x216690u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x216694: 0x44820000
    ctx->pc = 0x216694u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x216698: 0x0
    ctx->pc = 0x216698u;
    // NOP
    // 0x21669c: 0x46800020
    ctx->pc = 0x21669cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2166a0: 0xe4800008
    ctx->pc = 0x2166a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2166a4: 0xc06c438
    ctx->pc = 0x2166A4u;
    SET_GPR_U32(ctx, 31, 0x2166ACu);
    ctx->pc = 0x2166A8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B10E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlBlurSetStrength_0x1b10e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2166ACu; }
        else if (ctx->pc != 0x2166ACu) { ctx->pc = 0x2166ACu; }
    }
    if (ctx->pc != 0x2166ACu) { return; }
    ctx->pc = 0x2166ACu;
    // 0x2166ac: 0x2602000c
    ctx->pc = 0x2166acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 12));
    // 0x2166b0: 0x7bbf0010
    ctx->pc = 0x2166b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2166b4: 0x7bb00000
    ctx->pc = 0x2166b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2166b8: 0x3e00008
    ctx->pc = 0x2166B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2166BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2166C0u;
}
