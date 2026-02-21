#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: VSync2
// Address: 0x10e760 - 0x10e7c0
void VSync2_0x10e760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e760u;

    // 0x10e760: 0x27bdffe0
    ctx->pc = 0x10e760u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10e764: 0xffbf0010
    ctx->pc = 0x10e764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10e768: 0x3a0202d
    ctx->pc = 0x10e768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e76c: 0xafa00000
    ctx->pc = 0x10e76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10e770: 0xc043984
    ctx->pc = 0x10E770u;
    SET_GPR_U32(ctx, 31, 0x10E778u);
    ctx->pc = 0x10E774u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 29), 8));
    ctx->pc = 0x10E610u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetVSyncFlag_0x10e610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E778u; }
    }
    if (ctx->pc != 0x10E778u) { return; }
    ctx->pc = 0x10E778u;
    // 0x10e778: 0x3c021000
    ctx->pc = 0x10e778u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x10e77c: 0x24030004
    ctx->pc = 0x10e77cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x10e780: 0x3442f000
    ctx->pc = 0x10e780u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 61440));
    // 0x10e784: 0xac430000
    ctx->pc = 0x10e784u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
label_10e788:
    // 0x10e788: 0x3c021001
    ctx->pc = 0x10e788u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4097 << 16));
    // 0x10e78c: 0x8c42f000
    ctx->pc = 0x10e78cu;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294963200))); // MMIO: 0x1000f000
    // 0x10e790: 0x30420004
    ctx->pc = 0x10e790u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x10e794: 0x14400004
    ctx->pc = 0x10E794u;
    {
        const bool branch_taken_0x10e794 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10E798u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x10e794) {
            ctx->pc = 0x10E7A8u;
            goto label_10e7a8;
        }
    }
    ctx->pc = 0x10E79Cu;
    // 0x10e79c: 0x8fa20000
    ctx->pc = 0x10e79cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e7a0: 0x1040fff9
    ctx->pc = 0x10E7A0u;
    {
        const bool branch_taken_0x10e7a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10E7A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x10e7a0) {
            ctx->pc = 0x10E788u;
            goto label_10e788;
        }
    }
    ctx->pc = 0x10E7A8u;
label_10e7a8:
    // 0x10e7a8: 0xdfbf0010
    ctx->pc = 0x10e7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e7ac: 0x3c011001
    ctx->pc = 0x10e7acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x10e7b0: 0xac22f000
    ctx->pc = 0x10e7b0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294963200), GPR_U32(ctx, 2)); // MMIO: 0x1000f000
    // 0x10e7b4: 0xdfa20008
    ctx->pc = 0x10e7b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10e7b8: 0x3e00008
    ctx->pc = 0x10E7B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E7BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10E788u: goto label_10e788;
            case 0x10E7A8u: goto label_10e7a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10E7C0u;
}
