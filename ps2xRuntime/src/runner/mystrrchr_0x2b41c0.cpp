#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: mystrrchr
// Address: 0x2b41c0 - 0x2b4208
void mystrrchr_0x2b41c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b41c0u;

    // 0x2b41c0: 0x54800005
    ctx->pc = 0x2B41C0u;
    {
        const bool branch_taken_0x2b41c0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b41c0) {
            ctx->pc = 0x2B41C4u;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->pc = 0x2B41D8u;
            goto label_2b41d8;
        }
    }
    ctx->pc = 0x2B41C8u;
    // 0x2b41c8: 0x3e00008
    ctx->pc = 0x2B41C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B41CCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B41D0u: goto label_2b41d0;
            case 0x2B41D8u: goto label_2b41d8;
            case 0x2B41E0u: goto label_2b41e0;
            case 0x2B4200u: goto label_2b4200;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B41D0u;
label_2b41d0:
    // 0x2b41d0: 0x3e00008
    ctx->pc = 0x2B41D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B41D4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B41D0u: goto label_2b41d0;
            case 0x2B41D8u: goto label_2b41d8;
            case 0x2B41E0u: goto label_2b41e0;
            case 0x2B4200u: goto label_2b4200;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B41D8u;
label_2b41d8:
    // 0x2b41d8: 0x10400009
    ctx->pc = 0x2B41D8u;
    {
        const bool branch_taken_0x2b41d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B41DCu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b41d8) {
            ctx->pc = 0x2B4200u;
            goto label_2b4200;
        }
    }
    ctx->pc = 0x2B41E0u;
label_2b41e0:
    // 0x2b41e0: 0x31600
    ctx->pc = 0x2b41e0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 24));
    // 0x2b41e4: 0x21603
    ctx->pc = 0x2b41e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2b41e8: 0x1045fff9
    ctx->pc = 0x2B41E8u;
    {
        const bool branch_taken_0x2b41e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        if (branch_taken_0x2b41e8) {
            ctx->pc = 0x2B41D0u;
            goto label_2b41d0;
        }
    }
    ctx->pc = 0x2B41F0u;
    // 0x2b41f0: 0x24840001
    ctx->pc = 0x2b41f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2b41f4: 0x80820000
    ctx->pc = 0x2b41f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b41f8: 0x1440fff9
    ctx->pc = 0x2B41F8u;
    {
        const bool branch_taken_0x2b41f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B41FCu;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x2b41f8) {
            ctx->pc = 0x2B41E0u;
            goto label_2b41e0;
        }
    }
    ctx->pc = 0x2B4200u;
label_2b4200:
    // 0x2b4200: 0x3e00008
    ctx->pc = 0x2B4200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4204u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B41D0u: goto label_2b41d0;
            case 0x2B41D8u: goto label_2b41d8;
            case 0x2B41E0u: goto label_2b41e0;
            case 0x2B4200u: goto label_2b4200;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B4208u;
}
