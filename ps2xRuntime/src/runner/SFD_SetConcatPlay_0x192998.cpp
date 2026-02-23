#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_SetConcatPlay
// Address: 0x192998 - 0x1929ec
void SFD_SetConcatPlay_0x192998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_SetConcatPlay");


    ctx->pc = 0x192998u;

    // 0x192998: 0x27bdffe0
    ctx->pc = 0x192998u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19299c: 0xffb00000
    ctx->pc = 0x19299cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1929a0: 0xffbf0010
    ctx->pc = 0x1929a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1929a4: 0xc064f1e
    ctx->pc = 0x1929A4u;
    SET_GPR_U32(ctx, 31, 0x1929ACu);
    ctx->pc = 0x1929A8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1929ACu; }
        else if (ctx->pc != 0x1929ACu) { ctx->pc = 0x1929ACu; }
    }
    if (ctx->pc != 0x1929ACu) { return; }
    ctx->pc = 0x1929ACu;
    // 0x1929ac: 0x10400006
    ctx->pc = 0x1929ACu;
    {
        const bool branch_taken_0x1929ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1929B0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1929ac) {
            ctx->pc = 0x1929C8u;
            goto label_1929c8;
        }
    }
    ctx->pc = 0x1929B4u;
    // 0x1929b4: 0x3c05ff00
    ctx->pc = 0x1929b4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1929b8: 0xc064ea0
    ctx->pc = 0x1929B8u;
    SET_GPR_U32(ctx, 31, 0x1929C0u);
    ctx->pc = 0x1929BCu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 353));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1929C0u; }
        else if (ctx->pc != 0x1929C0u) { ctx->pc = 0x1929C0u; }
    }
    if (ctx->pc != 0x1929C0u) { return; }
    ctx->pc = 0x1929C0u;
    // 0x1929c0: 0x10000007
    ctx->pc = 0x1929C0u;
    {
        const bool branch_taken_0x1929c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1929C4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1929c0) {
            ctx->pc = 0x1929E0u;
            goto label_1929e0;
        }
    }
    ctx->pc = 0x1929C8u;
label_1929c8:
    // 0x1929c8: 0x200202d
    ctx->pc = 0x1929c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1929cc: 0x24050031
    ctx->pc = 0x1929ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 49));
    // 0x1929d0: 0xc067464
    ctx->pc = 0x1929D0u;
    SET_GPR_U32(ctx, 31, 0x1929D8u);
    ctx->pc = 0x1929D4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19D190u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_SetCond_0x19d190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1929D8u; }
        else if (ctx->pc != 0x1929D8u) { ctx->pc = 0x1929D8u; }
    }
    if (ctx->pc != 0x1929D8u) { return; }
    ctx->pc = 0x1929D8u;
    // 0x1929d8: 0x102d
    ctx->pc = 0x1929d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1929dc: 0xdfbf0010
    ctx->pc = 0x1929dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1929e0:
    // 0x1929e0: 0xdfb00000
    ctx->pc = 0x1929e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1929e4: 0x3e00008
    ctx->pc = 0x1929E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1929E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1929C8u: goto label_1929c8;
            case 0x1929E0u: goto label_1929e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1929ECu;
}
