#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: VSync2
// Address: 0x303a90 - 0x303af0
void VSync2_0x303a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303a90u;

    // 0x303a90: 0x27bdffe0
    ctx->pc = 0x303a90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x303a94: 0xffbf0010
    ctx->pc = 0x303a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x303a98: 0x3a0202d
    ctx->pc = 0x303a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303a9c: 0xc0c0e54
    ctx->pc = 0x303A9Cu;
    SET_GPR_U32(ctx, 31, 0x303AA4u);
    ctx->pc = 0x303AA0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 29), 8));
    ctx->pc = 0x303950u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetVSyncFlag_0x303950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303AA4u; }
    }
    if (ctx->pc != 0x303AA4u) { return; }
    ctx->pc = 0x303AA4u;
    // 0x303aa4: 0x3c031000
    ctx->pc = 0x303aa4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x303aa8: 0xafa00000
    ctx->pc = 0x303aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x303aac: 0x3463f000
    ctx->pc = 0x303aacu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 61440));
    // 0x303ab0: 0x24020004
    ctx->pc = 0x303ab0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x303ab4: 0xac620000
    ctx->pc = 0x303ab4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
label_303ab8:
    // 0x303ab8: 0x3c021001
    ctx->pc = 0x303ab8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4097 << 16));
    // 0x303abc: 0x8c42f000
    ctx->pc = 0x303abcu;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294963200))); // MMIO: 0x1000f000
    // 0x303ac0: 0x30420004
    ctx->pc = 0x303ac0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x303ac4: 0x14400004
    ctx->pc = 0x303AC4u;
    {
        const bool branch_taken_0x303ac4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x303AC8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x303ac4) {
            ctx->pc = 0x303AD8u;
            goto label_303ad8;
        }
    }
    ctx->pc = 0x303ACCu;
    // 0x303acc: 0x8fa20000
    ctx->pc = 0x303accu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x303ad0: 0x1040fff9
    ctx->pc = 0x303AD0u;
    {
        const bool branch_taken_0x303ad0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x303AD4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x303ad0) {
            ctx->pc = 0x303AB8u;
            goto label_303ab8;
        }
    }
    ctx->pc = 0x303AD8u;
label_303ad8:
    // 0x303ad8: 0xdfbf0010
    ctx->pc = 0x303ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x303adc: 0x3c011001
    ctx->pc = 0x303adcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x303ae0: 0xac22f000
    ctx->pc = 0x303ae0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294963200), GPR_U32(ctx, 2)); // MMIO: 0x1000f000
    // 0x303ae4: 0xdfa20008
    ctx->pc = 0x303ae4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x303ae8: 0x3e00008
    ctx->pc = 0x303AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303AECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x303AB8u: goto label_303ab8;
            case 0x303AD8u: goto label_303ad8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x303AF0u;
}
