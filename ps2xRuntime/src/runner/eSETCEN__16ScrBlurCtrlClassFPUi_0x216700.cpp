#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: eSETCEN__16ScrBlurCtrlClassFPUi
// Address: 0x216700 - 0x216738
void eSETCEN__16ScrBlurCtrlClassFPUi_0x216700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("eSETCEN__16ScrBlurCtrlClassFPUi");


    ctx->pc = 0x216700u;

    // 0x216700: 0x27bdffe0
    ctx->pc = 0x216700u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x216704: 0x7fbf0010
    ctx->pc = 0x216704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x216708: 0x7fb00000
    ctx->pc = 0x216708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21670c: 0xc4a10008
    ctx->pc = 0x21670cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x216710: 0xc4a0000c
    ctx->pc = 0x216710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216714: 0x70a08628
    ctx->pc = 0x216714u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x216718: 0x46800b20
    ctx->pc = 0x216718u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x21671c: 0xc06c448
    ctx->pc = 0x21671Cu;
    SET_GPR_U32(ctx, 31, 0x216724u);
    ctx->pc = 0x216720u;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    ctx->pc = 0x1B1120u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlBlurSetCenter_0x1b1120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216724u; }
        else if (ctx->pc != 0x216724u) { ctx->pc = 0x216724u; }
    }
    if (ctx->pc != 0x216724u) { return; }
    ctx->pc = 0x216724u;
    // 0x216724: 0x26020010
    ctx->pc = 0x216724u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 16));
    // 0x216728: 0x7bbf0010
    ctx->pc = 0x216728u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21672c: 0x7bb00000
    ctx->pc = 0x21672cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216730: 0x3e00008
    ctx->pc = 0x216730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216734u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x216738u;
}
