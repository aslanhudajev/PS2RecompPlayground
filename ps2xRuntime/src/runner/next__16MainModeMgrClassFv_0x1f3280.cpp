#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: next__16MainModeMgrClassFv
// Address: 0x1f3280 - 0x1f32f0
void next__16MainModeMgrClassFv_0x1f3280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("next__16MainModeMgrClassFv");


    ctx->pc = 0x1f3280u;

    // 0x1f3280: 0x27bdffe0
    ctx->pc = 0x1f3280u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f3284: 0x7fbf0010
    ctx->pc = 0x1f3284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1f3288: 0x7fb00000
    ctx->pc = 0x1f3288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f328c: 0x70808628
    ctx->pc = 0x1f328cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1f3290: 0x84840006
    ctx->pc = 0x1f3290u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1f3294: 0x2403ffff
    ctx->pc = 0x1f3294u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f3298: 0x14830011
    ctx->pc = 0x1F3298u;
    {
        const bool branch_taken_0x1f3298 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1f3298) {
            ctx->pc = 0x1F32E0u;
            goto label_1f32e0;
        }
    }
    ctx->pc = 0x1F32A0u;
    // 0x1f32a0: 0xc07cb28
    ctx->pc = 0x1F32A0u;
    SET_GPR_U32(ctx, 31, 0x1F32A8u);
    ctx->pc = 0x1F2CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_TrialDemo__Fv_0x1f2ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F32A8u; }
        else if (ctx->pc != 0x1F32A8u) { ctx->pc = 0x1F32A8u; }
    }
    if (ctx->pc != 0x1F32A8u) { return; }
    ctx->pc = 0x1F32A8u;
    // 0x1f32a8: 0x10400008
    ctx->pc = 0x1F32A8u;
    {
        const bool branch_taken_0x1f32a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F32ACu;
        SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
        if (branch_taken_0x1f32a8) {
            ctx->pc = 0x1F32CCu;
            goto label_1f32cc;
        }
    }
    ctx->pc = 0x1F32B0u;
    // 0x1f32b0: 0x3c010027
    ctx->pc = 0x1f32b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f32b4: 0x86040004
    ctx->pc = 0x1f32b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f32b8: 0x8c23c84c
    ctx->pc = 0x1f32b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294953036)));
    // 0x1f32bc: 0x641821
    ctx->pc = 0x1f32bcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f32c0: 0x80630000
    ctx->pc = 0x1f32c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f32c4: 0x10000006
    ctx->pc = 0x1F32C4u;
    {
        const bool branch_taken_0x1f32c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F32C8u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1f32c4) {
            ctx->pc = 0x1F32E0u;
            goto label_1f32e0;
        }
    }
    ctx->pc = 0x1F32CCu;
label_1f32cc:
    // 0x1f32cc: 0x86040004
    ctx->pc = 0x1f32ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f32d0: 0x8c23c82c
    ctx->pc = 0x1f32d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294953004)));
    // 0x1f32d4: 0x641821
    ctx->pc = 0x1f32d4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f32d8: 0x80630000
    ctx->pc = 0x1f32d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f32dc: 0xa6030006
    ctx->pc = 0x1f32dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
label_1f32e0:
    // 0x1f32e0: 0x7bbf0010
    ctx->pc = 0x1f32e0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f32e4: 0x7bb00000
    ctx->pc = 0x1f32e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f32e8: 0x3e00008
    ctx->pc = 0x1F32E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F32ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F32CCu: goto label_1f32cc;
            case 0x1F32E0u: goto label_1f32e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F32F0u;
}
