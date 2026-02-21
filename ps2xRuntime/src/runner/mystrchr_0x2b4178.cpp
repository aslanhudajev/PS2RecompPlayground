#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: mystrchr
// Address: 0x2b4178 - 0x2b41c0
void mystrchr_0x2b4178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b4178u;

    // 0x2b4178: 0x54800005
    ctx->pc = 0x2B4178u;
    {
        const bool branch_taken_0x2b4178 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b4178) {
            ctx->pc = 0x2B417Cu;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->pc = 0x2B4190u;
            goto label_2b4190;
        }
    }
    ctx->pc = 0x2B4180u;
    // 0x2b4180: 0x3e00008
    ctx->pc = 0x2B4180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4184u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B4188u: goto label_2b4188;
            case 0x2B4190u: goto label_2b4190;
            case 0x2B4198u: goto label_2b4198;
            case 0x2B41B8u: goto label_2b41b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B4188u;
label_2b4188:
    // 0x2b4188: 0x3e00008
    ctx->pc = 0x2B4188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B418Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B4188u: goto label_2b4188;
            case 0x2B4190u: goto label_2b4190;
            case 0x2B4198u: goto label_2b4198;
            case 0x2B41B8u: goto label_2b41b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B4190u;
label_2b4190:
    // 0x2b4190: 0x10400009
    ctx->pc = 0x2B4190u;
    {
        const bool branch_taken_0x2b4190 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4194u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b4190) {
            ctx->pc = 0x2B41B8u;
            goto label_2b41b8;
        }
    }
    ctx->pc = 0x2B4198u;
label_2b4198:
    // 0x2b4198: 0x31600
    ctx->pc = 0x2b4198u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 24));
    // 0x2b419c: 0x21603
    ctx->pc = 0x2b419cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2b41a0: 0x1045fff9
    ctx->pc = 0x2B41A0u;
    {
        const bool branch_taken_0x2b41a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        if (branch_taken_0x2b41a0) {
            ctx->pc = 0x2B4188u;
            goto label_2b4188;
        }
    }
    ctx->pc = 0x2B41A8u;
    // 0x2b41a8: 0x24840001
    ctx->pc = 0x2b41a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2b41ac: 0x80820000
    ctx->pc = 0x2b41acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b41b0: 0x1440fff9
    ctx->pc = 0x2B41B0u;
    {
        const bool branch_taken_0x2b41b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B41B4u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x2b41b0) {
            ctx->pc = 0x2B4198u;
            goto label_2b4198;
        }
    }
    ctx->pc = 0x2B41B8u;
label_2b41b8:
    // 0x2b41b8: 0x3e00008
    ctx->pc = 0x2B41B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B41BCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B4188u: goto label_2b4188;
            case 0x2B4190u: goto label_2b4190;
            case 0x2B4198u: goto label_2b4198;
            case 0x2B41B8u: goto label_2b41b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B41C0u;
}
