#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: fadeOut
// Address: 0x108e38 - 0x108e78
void fadeOut_0x108e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x108e38u;

    // 0x108e38: 0x27bdffe0
    ctx->pc = 0x108e38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x108e3c: 0xffb00000
    ctx->pc = 0x108e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108e40: 0x80802d
    ctx->pc = 0x108e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e44: 0xffbf0010
    ctx->pc = 0x108e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x108e48: 0xc041fd8
    ctx->pc = 0x108E48u;
    SET_GPR_U32(ctx, 31, 0x108E50u);
    ctx->pc = 0x108E4Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934860)));
    ctx->pc = 0x107F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        screenFade_0x107f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108E50u; }
    }
    if (ctx->pc != 0x108E50u) { return; }
    ctx->pc = 0x108E50u;
    // 0x108e50: 0x8f82814c
    ctx->pc = 0x108e50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934860)));
    // 0x108e54: 0x18400003
    ctx->pc = 0x108E54u;
    {
        const bool branch_taken_0x108e54 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x108E58u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        if (branch_taken_0x108e54) {
            ctx->pc = 0x108E64u;
            goto label_108e64;
        }
    }
    ctx->pc = 0x108E5Cu;
    // 0x108e5c: 0x10000002
    ctx->pc = 0x108E5Cu;
    {
        const bool branch_taken_0x108e5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x108E60u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934860), GPR_U32(ctx, 2));
        if (branch_taken_0x108e5c) {
            ctx->pc = 0x108E68u;
            goto label_108e68;
        }
    }
    ctx->pc = 0x108E64u;
label_108e64:
    // 0x108e64: 0xaf8080a4
    ctx->pc = 0x108e64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934692), GPR_U32(ctx, 0));
label_108e68:
    // 0x108e68: 0xdfbf0010
    ctx->pc = 0x108e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108e6c: 0xdfb00000
    ctx->pc = 0x108e6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108e70: 0x3e00008
    ctx->pc = 0x108E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108E74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x108E64u: goto label_108e64;
            case 0x108E68u: goto label_108e68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x108E78u;
}
