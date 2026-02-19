#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: dir_edge
// Address: 0x203f38 - 0x203f60
void dir_edge_0x203f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x203f38u;

    // 0x203f38: 0x861024
    ctx->pc = 0x203f38u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x203f3c: 0xe21007
    ctx->pc = 0x203f3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x203f40: 0x10400003
    ctx->pc = 0x203F40u;
    {
        const bool branch_taken_0x203f40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x203F44u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        if (branch_taken_0x203f40) {
            ctx->pc = 0x203F50u;
            goto label_203f50;
        }
    }
    ctx->pc = 0x203F48u;
    // 0x203f48: 0x10a00003
    ctx->pc = 0x203F48u;
    {
        const bool branch_taken_0x203f48 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x203F4Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
        if (branch_taken_0x203f48) {
            ctx->pc = 0x203F58u;
            goto label_203f58;
        }
    }
    ctx->pc = 0x203F50u;
label_203f50:
    // 0x203f50: 0x3e00008
    ctx->pc = 0x203F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203F54u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203F50u: goto label_203f50;
            case 0x203F58u: goto label_203f58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x203F58u;
label_203f58:
    // 0x203f58: 0x3e00008
    ctx->pc = 0x203F58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203F50u: goto label_203f50;
            case 0x203F58u: goto label_203f58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x203F60u;
}
