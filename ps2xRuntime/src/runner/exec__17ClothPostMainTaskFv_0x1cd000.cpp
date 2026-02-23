#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: exec__17ClothPostMainTaskFv
// Address: 0x1cd000 - 0x1cd064
void exec__17ClothPostMainTaskFv_0x1cd000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("exec__17ClothPostMainTaskFv");


    ctx->pc = 0x1cd000u;

    // 0x1cd000: 0x27bdffe0
    ctx->pc = 0x1cd000u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cd004: 0x7fbf0010
    ctx->pc = 0x1cd004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1cd008: 0x7fb00000
    ctx->pc = 0x1cd008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cd00c: 0x70808628
    ctx->pc = 0x1cd00cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1cd010: 0x8e050008
    ctx->pc = 0x1cd010u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cd014: 0xc073b58
    ctx->pc = 0x1CD014u;
    SET_GPR_U32(ctx, 31, 0x1CD01Cu);
    ctx->pc = 0x1CD018u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x1CED60u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcOneskin__6CClothFP11tagNLmatrix_0x1ced60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD01Cu; }
        else if (ctx->pc != 0x1CD01Cu) { ctx->pc = 0x1CD01Cu; }
    }
    if (ctx->pc != 0x1CD01Cu) { return; }
    ctx->pc = 0x1CD01Cu;
    // 0x1cd01c: 0x8e050008
    ctx->pc = 0x1cd01cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cd020: 0x8e06000c
    ctx->pc = 0x1cd020u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cd024: 0xc073bec
    ctx->pc = 0x1CD024u;
    SET_GPR_U32(ctx, 31, 0x1CD02Cu);
    ctx->pc = 0x1CD028u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x1CEFB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcPhysics__6CClothFP11tagNLmatrixP11tagNLmatrix_0x1cefb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD02Cu; }
        else if (ctx->pc != 0x1CD02Cu) { ctx->pc = 0x1CD02Cu; }
    }
    if (ctx->pc != 0x1CD02Cu) { return; }
    ctx->pc = 0x1CD02Cu;
    // 0x1cd02c: 0xc074a1c
    ctx->pc = 0x1CD02Cu;
    SET_GPR_U32(ctx, 31, 0x1CD034u);
    ctx->pc = 0x1CD030u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x1D2870u;
    {
        const uint32_t __entryPc = ctx->pc;
        writePol__6CClothFv_0x1d2870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD034u; }
        else if (ctx->pc != 0x1CD034u) { ctx->pc = 0x1CD034u; }
    }
    if (ctx->pc != 0x1CD034u) { return; }
    ctx->pc = 0x1CD034u;
    // 0x1cd034: 0xc0552d8
    ctx->pc = 0x1CD034u;
    SET_GPR_U32(ctx, 31, 0x1CD03Cu);
    ctx->pc = 0x1CD038u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD03Cu; }
        else if (ctx->pc != 0x1CD03Cu) { ctx->pc = 0x1CD03Cu; }
    }
    if (ctx->pc != 0x1CD03Cu) { return; }
    ctx->pc = 0x1CD03Cu;
    // 0x1cd03c: 0x3c020026
    ctx->pc = 0x1cd03cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1cd040: 0x24425118
    ctx->pc = 0x1cd040u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20760));
    // 0x1cd044: 0x8c450008
    ctx->pc = 0x1cd044u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1cd048: 0x8e040000
    ctx->pc = 0x1cd048u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cd04c: 0xc068fd8
    ctx->pc = 0x1CD04Cu;
    SET_GPR_U32(ctx, 31, 0x1CD054u);
    ctx->pc = 0x1CD050u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A3F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeExec__11SystemTask2FPFv_vPv_0x1a3f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD054u; }
        else if (ctx->pc != 0x1CD054u) { ctx->pc = 0x1CD054u; }
    }
    if (ctx->pc != 0x1CD054u) { return; }
    ctx->pc = 0x1CD054u;
    // 0x1cd054: 0x7bbf0010
    ctx->pc = 0x1cd054u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd058: 0x7bb00000
    ctx->pc = 0x1cd058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd05c: 0x3e00008
    ctx->pc = 0x1CD05Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD060u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CD064u;
}
