#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: calcLookAt__22CameraMgrInternalClassFP4ANPOP4ANPOi
// Address: 0x1c9e80 - 0x1c9ee0
void calcLookAt__22CameraMgrInternalClassFP4ANPOP4ANPOi_0x1c9e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("calcLookAt__22CameraMgrInternalClassFP4ANPOP4ANPOi");


    ctx->pc = 0x1c9e80u;

    // 0x1c9e80: 0x27bdffd0
    ctx->pc = 0x1c9e80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c9e84: 0x7fbf0020
    ctx->pc = 0x1c9e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1c9e88: 0x7fb10010
    ctx->pc = 0x1c9e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c9e8c: 0x7fb00000
    ctx->pc = 0x1c9e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c9e90: 0xc4a50000
    ctx->pc = 0x1c9e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1c9e94: 0xc4c40000
    ctx->pc = 0x1c9e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c9e98: 0xc4a30004
    ctx->pc = 0x1c9e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c9e9c: 0xc4c20004
    ctx->pc = 0x1c9e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c9ea0: 0xc4c00008
    ctx->pc = 0x1c9ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9ea4: 0xc4a10008
    ctx->pc = 0x1c9ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9ea8: 0x70a08e28
    ctx->pc = 0x1c9ea8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1c9eac: 0x46042b01
    ctx->pc = 0x1c9eacu;
    ctx->f[12] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x1c9eb0: 0x70e08628
    ctx->pc = 0x1c9eb0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1c9eb4: 0x2624000c
    ctx->pc = 0x1c9eb4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 12));
    // 0x1c9eb8: 0x46021b41
    ctx->pc = 0x1c9eb8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1c9ebc: 0x26250010
    ctx->pc = 0x1c9ebcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 16));
    // 0x1c9ec0: 0xc072348
    ctx->pc = 0x1C9EC0u;
    SET_GPR_U32(ctx, 31, 0x1C9EC8u);
    ctx->pc = 0x1C9EC4u;
    ctx->f[14] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x1C8D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetAngleYX__FfffPiPi_0x1c8d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9EC8u; }
        else if (ctx->pc != 0x1C9EC8u) { ctx->pc = 0x1C9EC8u; }
    }
    if (ctx->pc != 0x1C9EC8u) { return; }
    ctx->pc = 0x1C9EC8u;
    // 0x1c9ec8: 0xae300014
    ctx->pc = 0x1c9ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
    // 0x1c9ecc: 0x7bbf0020
    ctx->pc = 0x1c9eccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c9ed0: 0x7bb10010
    ctx->pc = 0x1c9ed0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9ed4: 0x7bb00000
    ctx->pc = 0x1c9ed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9ed8: 0x3e00008
    ctx->pc = 0x1C9ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9EDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9EE0u;
}
