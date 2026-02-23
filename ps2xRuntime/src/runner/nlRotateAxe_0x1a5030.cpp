#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlRotateAxe
// Address: 0x1a5030 - 0x1a5088
void nlRotateAxe_0x1a5030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlRotateAxe");


    ctx->pc = 0x1a5030u;

    // 0x1a5030: 0x27bdffc0
    ctx->pc = 0x1a5030u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a5034: 0x7fbf0030
    ctx->pc = 0x1a5034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1a5038: 0x7fb10020
    ctx->pc = 0x1a5038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a503c: 0x7fb00010
    ctx->pc = 0x1a503cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a5040: 0x70a08628
    ctx->pc = 0x1a5040u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1a5044: 0x70808e28
    ctx->pc = 0x1a5044u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1a5048: 0x72002628
    ctx->pc = 0x1a5048u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a504c: 0xc06c24e
    ctx->pc = 0x1A504Cu;
    SET_GPR_U32(ctx, 31, 0x1A5054u);
    ctx->pc = 0x1A5050u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->pc = 0x1B0938u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0938_0x1b0938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5054u; }
        else if (ctx->pc != 0x1A5054u) { ctx->pc = 0x1A5054u; }
    }
    if (ctx->pc != 0x1A5054u) { return; }
    ctx->pc = 0x1A5054u;
    // 0x1a5054: 0x72002628
    ctx->pc = 0x1a5054u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a5058: 0xc06c26d
    ctx->pc = 0x1A5058u;
    SET_GPR_U32(ctx, 31, 0x1A5060u);
    ctx->pc = 0x1A505Cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x1B09B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B09B4_0x1b09b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5060u; }
        else if (ctx->pc != 0x1A5060u) { ctx->pc = 0x1A5060u; }
    }
    if (ctx->pc != 0x1A5060u) { return; }
    ctx->pc = 0x1A5060u;
    // 0x1a5060: 0x72202628
    ctx->pc = 0x1a5060u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1a5064: 0x4600a306
    ctx->pc = 0x1a5064u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a5068: 0xc069424
    ctx->pc = 0x1A5068u;
    SET_GPR_U32(ctx, 31, 0x1A5070u);
    ctx->pc = 0x1A506Cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x1A5090u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRotateAxeSC_0x1a5090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5070u; }
        else if (ctx->pc != 0x1A5070u) { ctx->pc = 0x1A5070u; }
    }
    if (ctx->pc != 0x1A5070u) { return; }
    ctx->pc = 0x1A5070u;
    // 0x1a5070: 0x7bbf0030
    ctx->pc = 0x1a5070u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5074: 0x7bb10020
    ctx->pc = 0x1a5074u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5078: 0x7bb00010
    ctx->pc = 0x1a5078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a507c: 0xc7b40000
    ctx->pc = 0x1a507cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a5080: 0x3e00008
    ctx->pc = 0x1A5080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5084u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5088u;
}
