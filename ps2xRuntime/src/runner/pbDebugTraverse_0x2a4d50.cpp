#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbDebugTraverse
// Address: 0x2a4d50 - 0x2a4da4
void pbDebugTraverse_0x2a4d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a4d50u;

    // 0x2a4d50: 0x27bdffe0
    ctx->pc = 0x2a4d50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a4d54: 0xffbf0010
    ctx->pc = 0x2a4d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a4d58: 0xffb00000
    ctx->pc = 0x2a4d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a4d5c: 0x3c020036
    ctx->pc = 0x2a4d5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a4d60: 0x8c50dee0
    ctx->pc = 0x2a4d60u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a4d64: 0x8e03002c
    ctx->pc = 0x2a4d64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2a4d68: 0x3c02ffff
    ctx->pc = 0x2a4d68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2a4d6c: 0x3442ffff
    ctx->pc = 0x2a4d6cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2a4d70: 0xac620040
    ctx->pc = 0x2a4d70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    // 0x2a4d74: 0x8e03002c
    ctx->pc = 0x2a4d74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2a4d78: 0x8c64004c
    ctx->pc = 0x2a4d78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2a4d7c: 0x10800005
    ctx->pc = 0x2A4D7Cu;
    {
        const bool branch_taken_0x2a4d7c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A4D80u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2a4d7c) {
            ctx->pc = 0x2A4D94u;
            goto label_2a4d94;
        }
    }
    ctx->pc = 0x2A4D84u;
    // 0x2a4d84: 0xc0a92c2
    ctx->pc = 0x2A4D84u;
    SET_GPR_U32(ctx, 31, 0x2A4D8Cu);
    ctx->pc = 0x2A4D88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    ctx->pc = 0x2A4B08u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDebugCmd_0x2a4b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4D8Cu; }
    }
    if (ctx->pc != 0x2A4D8Cu) { return; }
    ctx->pc = 0x2A4D8Cu;
    // 0x2a4d8c: 0x8e02002c
    ctx->pc = 0x2a4d8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2a4d90: 0xac400044
    ctx->pc = 0x2a4d90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_2a4d94:
    // 0x2a4d94: 0xdfbf0010
    ctx->pc = 0x2a4d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a4d98: 0xdfb00000
    ctx->pc = 0x2a4d98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a4d9c: 0x3e00008
    ctx->pc = 0x2A4D9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4DA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A4D94u: goto label_2a4d94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A4DA4u;
}
