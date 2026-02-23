#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlPopMatrix
// Address: 0x1a4e50 - 0x1a4e80
void nlPopMatrix_0x1a4e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlPopMatrix");


    ctx->pc = 0x1a4e50u;

    // 0x1a4e50: 0x27bdffe0
    ctx->pc = 0x1a4e50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a4e54: 0x7fbf0010
    ctx->pc = 0x1a4e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1a4e58: 0xc069368
    ctx->pc = 0x1A4E58u;
    SET_GPR_U32(ctx, 31, 0x1A4E60u);
    ctx->pc = 0x1A4E5Cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1A4DA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDecMatrixPtr_0x1a4da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4E60u; }
        else if (ctx->pc != 0x1A4E60u) { ctx->pc = 0x1A4E60u; }
    }
    if (ctx->pc != 0x1A4E60u) { return; }
    ctx->pc = 0x1A4E60u;
    // 0x1a4e60: 0x70408628
    ctx->pc = 0x1a4e60u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a4e64: 0xc06c038
    ctx->pc = 0x1A4E64u;
    SET_GPR_U32(ctx, 31, 0x1A4E6Cu);
    ctx->pc = 0x1A4E68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4E6Cu; }
        else if (ctx->pc != 0x1A4E6Cu) { ctx->pc = 0x1A4E6Cu; }
    }
    if (ctx->pc != 0x1A4E6Cu) { return; }
    ctx->pc = 0x1A4E6Cu;
    // 0x1a4e6c: 0x72001628
    ctx->pc = 0x1a4e6cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a4e70: 0x7bbf0010
    ctx->pc = 0x1a4e70u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4e74: 0x7bb00000
    ctx->pc = 0x1a4e74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4e78: 0x3e00008
    ctx->pc = 0x1A4E78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4E7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4E80u;
}
