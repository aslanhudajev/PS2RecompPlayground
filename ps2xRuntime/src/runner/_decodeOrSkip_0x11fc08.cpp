#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _decodeOrSkip
// Address: 0x11fc08 - 0x11fc44
void _decodeOrSkip_0x11fc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11fc08u;

    // 0x11fc08: 0x3c020017
    ctx->pc = 0x11fc08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
    // 0x11fc0c: 0x27bdfff0
    ctx->pc = 0x11fc0cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11fc10: 0x8c4319ac
    ctx->pc = 0x11fc10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 6572)));
    // 0x11fc14: 0x24020003
    ctx->pc = 0x11fc14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x11fc18: 0x10620005
    ctx->pc = 0x11FC18u;
    {
        const bool branch_taken_0x11fc18 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x11FC1Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x11fc18) {
            ctx->pc = 0x11FC30u;
            goto label_11fc30;
        }
    }
    ctx->pc = 0x11FC20u;
    // 0x11fc20: 0xc047f12
    ctx->pc = 0x11FC20u;
    SET_GPR_U32(ctx, 31, 0x11FC28u);
    ctx->pc = 0x11FC48u;
    {
        const uint32_t __entryPc = ctx->pc;
        _decodeOrSkipField_0x11fc48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FC28u; }
    }
    if (ctx->pc != 0x11FC28u) { return; }
    ctx->pc = 0x11FC28u;
    // 0x11fc28: 0x10000004
    ctx->pc = 0x11FC28u;
    {
        const bool branch_taken_0x11fc28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11FC2Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x11fc28) {
            ctx->pc = 0x11FC3Cu;
            goto label_11fc3c;
        }
    }
    ctx->pc = 0x11FC30u;
label_11fc30:
    // 0x11fc30: 0xc047eb8
    ctx->pc = 0x11FC30u;
    SET_GPR_U32(ctx, 31, 0x11FC38u);
    ctx->pc = 0x11FAE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _decodeOrSkipFrame_0x11fae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FC38u; }
    }
    if (ctx->pc != 0x11FC38u) { return; }
    ctx->pc = 0x11FC38u;
    // 0x11fc38: 0xdfbf0000
    ctx->pc = 0x11fc38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11fc3c:
    // 0x11fc3c: 0x3e00008
    ctx->pc = 0x11FC3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FC40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11FC30u: goto label_11fc30;
            case 0x11FC3Cu: goto label_11fc3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11FC44u;
}
