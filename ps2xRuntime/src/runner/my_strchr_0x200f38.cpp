#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: my_strchr
// Address: 0x200f38 - 0x200f7c
void my_strchr_0x200f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x200f38u;

    // 0x200f38: 0x52e00
    ctx->pc = 0x200f38u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x200f3c: 0x52e03
    ctx->pc = 0x200f3cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x200f40: 0x90820000
    ctx->pc = 0x200f40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x200f44: 0x1040000b
    ctx->pc = 0x200F44u;
    {
        const bool branch_taken_0x200f44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x200F48u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x200f44) {
            ctx->pc = 0x200F74u;
            goto label_200f74;
        }
    }
    ctx->pc = 0x200F4Cu;
    // 0x200f4c: 0x0
    ctx->pc = 0x200f4cu;
    // NOP
label_200f50:
    // 0x200f50: 0x31600
    ctx->pc = 0x200f50u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 24));
    // 0x200f54: 0x21603
    ctx->pc = 0x200f54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x200f58: 0x54450003
    ctx->pc = 0x200F58u;
    {
        const bool branch_taken_0x200f58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x200f58) {
            ctx->pc = 0x200F5Cu;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x200F68u;
            goto label_200f68;
        }
    }
    ctx->pc = 0x200F60u;
    // 0x200f60: 0x3e00008
    ctx->pc = 0x200F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200F64u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x200F50u: goto label_200f50;
            case 0x200F68u: goto label_200f68;
            case 0x200F74u: goto label_200f74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x200F68u;
label_200f68:
    // 0x200f68: 0x80820000
    ctx->pc = 0x200f68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x200f6c: 0x1440fff8
    ctx->pc = 0x200F6Cu;
    {
        const bool branch_taken_0x200f6c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x200F70u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x200f6c) {
            ctx->pc = 0x200F50u;
            goto label_200f50;
        }
    }
    ctx->pc = 0x200F74u;
label_200f74:
    // 0x200f74: 0x3e00008
    ctx->pc = 0x200F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200F78u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x200F50u: goto label_200f50;
            case 0x200F68u: goto label_200f68;
            case 0x200F74u: goto label_200f74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x200F7Cu;
}
