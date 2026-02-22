#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: isAudioOK
// Address: 0x118e38 - 0x118e6c
void isAudioOK_0x118e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x118e38u;

    // 0x118e38: 0x27bdfff0
    ctx->pc = 0x118e38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x118e3c: 0x8f828410
    ctx->pc = 0x118e3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935568)));
    // 0x118e40: 0x10400006
    ctx->pc = 0x118E40u;
    {
        const bool branch_taken_0x118e40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x118E44u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x118e40) {
            ctx->pc = 0x118E5Cu;
            goto label_118e5c;
        }
    }
    ctx->pc = 0x118E48u;
    // 0x118e48: 0x3c040075
    ctx->pc = 0x118e48u;
    SET_GPR_S32(ctx, 4, ((uint32_t)117 << 16));
    // 0x118e4c: 0xc0466ac
    ctx->pc = 0x118E4Cu;
    SET_GPR_U32(ctx, 31, 0x118E54u);
    ctx->pc = 0x118E50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294960488));
    ctx->pc = 0x119AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        audioDecIsPreset_0x119ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118E54u; }
    }
    if (ctx->pc != 0x118E54u) { return; }
    ctx->pc = 0x118E54u;
    // 0x118e54: 0x10000003
    ctx->pc = 0x118E54u;
    {
        const bool branch_taken_0x118e54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x118E58u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x118e54) {
            ctx->pc = 0x118E64u;
            goto label_118e64;
        }
    }
    ctx->pc = 0x118E5Cu;
label_118e5c:
    // 0x118e5c: 0x24020001
    ctx->pc = 0x118e5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x118e60: 0xdfbf0000
    ctx->pc = 0x118e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_118e64:
    // 0x118e64: 0x3e00008
    ctx->pc = 0x118E64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118E68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118E5Cu: goto label_118e5c;
            case 0x118E64u: goto label_118e64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x118E6Cu;
}
