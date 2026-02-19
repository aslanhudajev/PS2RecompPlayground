#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartGemFX
// Address: 0x27f368 - 0x27f3d0
void StartGemFX_0x27f368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27f368u;

    // 0x27f368: 0x27bdfff0
    ctx->pc = 0x27f368u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27f36c: 0xffbf0000
    ctx->pc = 0x27f36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27f370: 0x80182d
    ctx->pc = 0x27f370u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f374: 0x3c070008
    ctx->pc = 0x27f374u;
    SET_GPR_U32(ctx, 7, ((uint32_t)8 << 16));
    // 0x27f378: 0x24020400
    ctx->pc = 0x27f378u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1024));
    // 0x27f37c: 0x14a20003
    ctx->pc = 0x27F37Cu;
    {
        const bool branch_taken_0x27f37c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x27F380u;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 2176));
        if (branch_taken_0x27f37c) {
            ctx->pc = 0x27F38Cu;
            goto label_27f38c;
        }
    }
    ctx->pc = 0x27F384u;
    // 0x27f384: 0x10000005
    ctx->pc = 0x27F384u;
    {
        const bool branch_taken_0x27f384 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27F388u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 79));
        if (branch_taken_0x27f384) {
            ctx->pc = 0x27F39Cu;
            goto label_27f39c;
        }
    }
    ctx->pc = 0x27F38Cu;
label_27f38c:
    // 0x27f38c: 0x24020100
    ctx->pc = 0x27f38cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 256));
    // 0x27f390: 0x14a20008
    ctx->pc = 0x27F390u;
    {
        const bool branch_taken_0x27f390 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x27F394u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 69));
        if (branch_taken_0x27f390) {
            ctx->pc = 0x27F3B4u;
            goto label_27f3b4;
        }
    }
    ctx->pc = 0x27F398u;
    // 0x27f398: 0x2404004e
    ctx->pc = 0x27f398u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 78));
label_27f39c:
    // 0x27f39c: 0x60282d
    ctx->pc = 0x27f39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f3a0: 0x44806000
    ctx->pc = 0x27f3a0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x27f3a4: 0xc09f5fa
    ctx->pc = 0x27F3A4u;
    SET_GPR_U32(ctx, 31, 0x27F3ACu);
    ctx->pc = 0x27F3A8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F3ACu; }
    }
    if (ctx->pc != 0x27F3ACu) { return; }
    ctx->pc = 0x27F3ACu;
    // 0x27f3ac: 0x10000006
    ctx->pc = 0x27F3ACu;
    {
        const bool branch_taken_0x27f3ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27F3B0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x27f3ac) {
            ctx->pc = 0x27F3C8u;
            goto label_27f3c8;
        }
    }
    ctx->pc = 0x27F3B4u;
label_27f3b4:
    // 0x27f3b4: 0x60282d
    ctx->pc = 0x27f3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f3b8: 0x44806000
    ctx->pc = 0x27f3b8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x27f3bc: 0xc09f5fa
    ctx->pc = 0x27F3BCu;
    SET_GPR_U32(ctx, 31, 0x27F3C4u);
    ctx->pc = 0x27F3C0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F3C4u; }
    }
    if (ctx->pc != 0x27F3C4u) { return; }
    ctx->pc = 0x27F3C4u;
    // 0x27f3c4: 0xdfbf0000
    ctx->pc = 0x27f3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27f3c8:
    // 0x27f3c8: 0x3e00008
    ctx->pc = 0x27F3C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F3CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27F38Cu: goto label_27f38c;
            case 0x27F39Cu: goto label_27f39c;
            case 0x27F3B4u: goto label_27f3b4;
            case 0x27F3C8u: goto label_27f3c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27F3D0u;
}
