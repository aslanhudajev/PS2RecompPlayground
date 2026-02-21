#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartLevelUpFX
// Address: 0x27eeb8 - 0x27eefc
void StartLevelUpFX_0x27eeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27eeb8u;

    // 0x27eeb8: 0x27bdfff0
    ctx->pc = 0x27eeb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27eebc: 0xffbf0000
    ctx->pc = 0x27eebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27eec0: 0x80182d
    ctx->pc = 0x27eec0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eec4: 0x3c020034
    ctx->pc = 0x27eec4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27eec8: 0x24420e58
    ctx->pc = 0x27eec8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3672));
    // 0x27eecc: 0x52880
    ctx->pc = 0x27eeccu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x27eed0: 0xa22821
    ctx->pc = 0x27eed0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27eed4: 0x8ca40000
    ctx->pc = 0x27eed4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27eed8: 0x60282d
    ctx->pc = 0x27eed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eedc: 0x44806000
    ctx->pc = 0x27eedcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x27eee0: 0x302d
    ctx->pc = 0x27eee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eee4: 0x3c070088
    ctx->pc = 0x27eee4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)136 << 16));
    // 0x27eee8: 0xc09f5fa
    ctx->pc = 0x27EEE8u;
    SET_GPR_U32(ctx, 31, 0x27EEF0u);
    ctx->pc = 0x27EEECu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 2048));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EEF0u; }
    }
    if (ctx->pc != 0x27EEF0u) { return; }
    ctx->pc = 0x27EEF0u;
    // 0x27eef0: 0xdfbf0000
    ctx->pc = 0x27eef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27eef4: 0x3e00008
    ctx->pc = 0x27EEF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27EEF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27EEFCu;
}
