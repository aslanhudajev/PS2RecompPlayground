#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxm_ShutdownMwIdleThrd
// Address: 0x16d378 - 0x16d3e4
void adxm_ShutdownMwIdleThrd_0x16d378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxm_ShutdownMwIdleThrd");


    ctx->pc = 0x16d378u;

    // 0x16d378: 0x27bdffe0
    ctx->pc = 0x16d378u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16d37c: 0xdf8281c0
    ctx->pc = 0x16d37cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934976)));
    // 0x16d380: 0xffbf0010
    ctx->pc = 0x16d380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16d384: 0x14400010
    ctx->pc = 0x16D384u;
    {
        const bool branch_taken_0x16d384 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16D388u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x16d384) {
            ctx->pc = 0x16D3C8u;
            goto label_16d3c8;
        }
    }
    ctx->pc = 0x16D38Cu;
    // 0x16d38c: 0x24100001
    ctx->pc = 0x16d38cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_16d390:
    // 0x16d390: 0xff9081b8
    ctx->pc = 0x16d390u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294934968), GPR_U64(ctx, 16));
    // 0x16d394: 0x24050001
    ctx->pc = 0x16d394u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d398: 0x8f848180
    ctx->pc = 0x16d398u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934912)));
    // 0x16d39c: 0xc0551dc
    ctx->pc = 0x16D39Cu;
    SET_GPR_U32(ctx, 31, 0x16D3A4u);
    ctx->pc = 0x154770u;
    {
        const uint32_t __entryPc = ctx->pc;
        ChangeThreadPriority_0x154770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D3A4u; }
        else if (ctx->pc != 0x16D3A4u) { ctx->pc = 0x16D3A4u; }
    }
    if (ctx->pc != 0x16D3A4u) { return; }
    ctx->pc = 0x16D3A4u;
    // 0x16d3a4: 0x8f848180
    ctx->pc = 0x16d3a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934912)));
    // 0x16d3a8: 0xc055204
    ctx->pc = 0x16D3A8u;
    SET_GPR_U32(ctx, 31, 0x16D3B0u);
    ctx->pc = 0x154810u;
    {
        const uint32_t __entryPc = ctx->pc;
        WakeupThread_0x154810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D3B0u; }
        else if (ctx->pc != 0x16D3B0u) { ctx->pc = 0x16D3B0u; }
    }
    if (ctx->pc != 0x16D3B0u) { return; }
    ctx->pc = 0x16D3B0u;
    // 0x16d3b0: 0x8f848180
    ctx->pc = 0x16d3b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934912)));
    // 0x16d3b4: 0xc05521c
    ctx->pc = 0x16D3B4u;
    SET_GPR_U32(ctx, 31, 0x16D3BCu);
    ctx->pc = 0x154870u;
    {
        const uint32_t __entryPc = ctx->pc;
        ResumeThread_0x154870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D3BCu; }
        else if (ctx->pc != 0x16D3BCu) { ctx->pc = 0x16D3BCu; }
    }
    if (ctx->pc != 0x16D3BCu) { return; }
    ctx->pc = 0x16D3BCu;
    // 0x16d3bc: 0xdf8381c0
    ctx->pc = 0x16d3bcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294934976)));
    // 0x16d3c0: 0x1060fff3
    ctx->pc = 0x16D3C0u;
    {
        const bool branch_taken_0x16d3c0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x16d3c0) {
            ctx->pc = 0x16D390u;
            goto label_16d390;
        }
    }
    ctx->pc = 0x16D3C8u;
label_16d3c8:
    // 0x16d3c8: 0xff8081c0
    ctx->pc = 0x16d3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294934976), GPR_U64(ctx, 0));
    // 0x16d3cc: 0xff8081b8
    ctx->pc = 0x16d3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294934968), GPR_U64(ctx, 0));
    // 0x16d3d0: 0xdfbf0010
    ctx->pc = 0x16d3d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d3d4: 0xdfb00000
    ctx->pc = 0x16d3d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d3d8: 0xaf808180
    ctx->pc = 0x16d3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934912), GPR_U32(ctx, 0));
    // 0x16d3dc: 0x3e00008
    ctx->pc = 0x16D3DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D3E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D390u: goto label_16d390;
            case 0x16D3C8u: goto label_16d3c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D3E4u;
}
