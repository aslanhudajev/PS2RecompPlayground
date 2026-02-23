#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: killFamilyLink
// Address: 0x1a28f0 - 0x1a291c
void killFamilyLink_0x1a28f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("killFamilyLink");


    ctx->pc = 0x1a28f0u;

    // 0x1a28f0: 0x27bdffe0
    ctx->pc = 0x1a28f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a28f4: 0x7fbf0010
    ctx->pc = 0x1a28f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1a28f8: 0x7fb00000
    ctx->pc = 0x1a28f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a28fc: 0xc0689f4
    ctx->pc = 0x1A28FCu;
    SET_GPR_U32(ctx, 31, 0x1A2904u);
    ctx->pc = 0x1A2900u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A27D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        killParentLink_0x1a27d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2904u; }
        else if (ctx->pc != 0x1A2904u) { ctx->pc = 0x1A2904u; }
    }
    if (ctx->pc != 0x1A2904u) { return; }
    ctx->pc = 0x1A2904u;
    // 0x1a2904: 0xc068a10
    ctx->pc = 0x1A2904u;
    SET_GPR_U32(ctx, 31, 0x1A290Cu);
    ctx->pc = 0x1A2908u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A2840u;
    {
        const uint32_t __entryPc = ctx->pc;
        killChildLink_0x1a2840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A290Cu; }
        else if (ctx->pc != 0x1A290Cu) { ctx->pc = 0x1A290Cu; }
    }
    if (ctx->pc != 0x1A290Cu) { return; }
    ctx->pc = 0x1A290Cu;
    // 0x1a290c: 0x7bbf0010
    ctx->pc = 0x1a290cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2910: 0x7bb00000
    ctx->pc = 0x1a2910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2914: 0x3e00008
    ctx->pc = 0x1A2914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2918u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A291Cu;
}
