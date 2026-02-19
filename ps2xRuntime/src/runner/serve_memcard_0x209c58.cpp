#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: serve_memcard
// Address: 0x209c58 - 0x209ca0
void serve_memcard_0x209c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x209c58u;

    // 0x209c58: 0x27bdffe0
    ctx->pc = 0x209c58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x209c5c: 0xffbf0010
    ctx->pc = 0x209c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x209c60: 0xffbe0000
    ctx->pc = 0x209c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x209c64: 0x3a0f02d
    ctx->pc = 0x209c64u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209c68: 0x3c020031
    ctx->pc = 0x209c68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x209c6c: 0x8c42f184
    ctx->pc = 0x209c6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
    // 0x209c70: 0x10400003
    ctx->pc = 0x209C70u;
    {
        const bool branch_taken_0x209c70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x209c70) {
            ctx->pc = 0x209C80u;
            goto label_209c80;
        }
    }
    ctx->pc = 0x209C78u;
    // 0x209c78: 0x10000003
    ctx->pc = 0x209C78u;
    {
        const bool branch_taken_0x209c78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209c78) {
            ctx->pc = 0x209C88u;
            goto label_209c88;
        }
    }
    ctx->pc = 0x209C80u;
label_209c80:
    // 0x209c80: 0xc081dae
    ctx->pc = 0x209C80u;
    SET_GPR_U32(ctx, 31, 0x209C88u);
    ctx->pc = 0x2076B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        backpollCheck_0x2076b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209C88u; }
    }
    if (ctx->pc != 0x209C88u) { return; }
    ctx->pc = 0x209C88u;
label_209c88:
    // 0x209c88: 0x3c0e82d
    ctx->pc = 0x209c88u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209c8c: 0xdfbf0010
    ctx->pc = 0x209c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209c90: 0xdfbe0000
    ctx->pc = 0x209c90u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209c94: 0x27bd0020
    ctx->pc = 0x209c94u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x209c98: 0x3e00008
    ctx->pc = 0x209C98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209C80u: goto label_209c80;
            case 0x209C88u: goto label_209c88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x209CA0u;
}
