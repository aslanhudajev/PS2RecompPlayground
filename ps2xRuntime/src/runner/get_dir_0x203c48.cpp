#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: get_dir
// Address: 0x203c48 - 0x203cc8
void get_dir_0x203c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x203c48u;

    // 0x203c48: 0x90830000
    ctx->pc = 0x203c48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x203c4c: 0x30620001
    ctx->pc = 0x203c4cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x203c50: 0x1040001b
    ctx->pc = 0x203C50u;
    {
        const bool branch_taken_0x203c50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x203C54u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x203c50) {
            ctx->pc = 0x203CC0u;
            goto label_203cc0;
        }
    }
    ctx->pc = 0x203C58u;
    // 0x203c58: 0x50400016
    ctx->pc = 0x203C58u;
    {
        const bool branch_taken_0x203c58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x203c58) {
            ctx->pc = 0x203C5Cu;
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
            ctx->pc = 0x203CB4u;
            goto label_203cb4;
        }
    }
    ctx->pc = 0x203C60u;
    // 0x203c60: 0x10a00006
    ctx->pc = 0x203C60u;
    {
        const bool branch_taken_0x203c60 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x203C64u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        if (branch_taken_0x203c60) {
            ctx->pc = 0x203C7Cu;
            goto label_203c7c;
        }
    }
    ctx->pc = 0x203C68u;
    // 0x203c68: 0x2c420021
    ctx->pc = 0x203c68u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 33));
    // 0x203c6c: 0x14400014
    ctx->pc = 0x203C6Cu;
    {
        const bool branch_taken_0x203c6c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x203c6c) {
            ctx->pc = 0x203CC0u;
            goto label_203cc0;
        }
    }
    ctx->pc = 0x203C74u;
label_203c74:
    // 0x203c74: 0x3e00008
    ctx->pc = 0x203C74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203C78u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203C74u: goto label_203c74;
            case 0x203C7Cu: goto label_203c7c;
            case 0x203CA0u: goto label_203ca0;
            case 0x203CB4u: goto label_203cb4;
            case 0x203CC0u: goto label_203cc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x203C7Cu;
label_203c7c:
    // 0x203c7c: 0x2c420081
    ctx->pc = 0x203c7cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 129));
    // 0x203c80: 0x1040fffc
    ctx->pc = 0x203C80u;
    {
        const bool branch_taken_0x203c80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x203c80) {
            ctx->pc = 0x203C74u;
            goto label_203c74;
        }
    }
    ctx->pc = 0x203C88u;
    // 0x203c88: 0x90820001
    ctx->pc = 0x203c88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x203c8c: 0x2c420071
    ctx->pc = 0x203c8cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 113));
    // 0x203c90: 0x54400003
    ctx->pc = 0x203C90u;
    {
        const bool branch_taken_0x203c90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x203c90) {
            ctx->pc = 0x203C94u;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
            ctx->pc = 0x203CA0u;
            goto label_203ca0;
        }
    }
    ctx->pc = 0x203C98u;
    // 0x203c98: 0x3e00008
    ctx->pc = 0x203C98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203C9Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203C74u: goto label_203c74;
            case 0x203C7Cu: goto label_203c7c;
            case 0x203CA0u: goto label_203ca0;
            case 0x203CB4u: goto label_203cb4;
            case 0x203CC0u: goto label_203cc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x203CA0u;
label_203ca0:
    // 0x203ca0: 0x2c420061
    ctx->pc = 0x203ca0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 97));
    // 0x203ca4: 0x14400006
    ctx->pc = 0x203CA4u;
    {
        const bool branch_taken_0x203ca4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x203CA8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x203ca4) {
            ctx->pc = 0x203CC0u;
            goto label_203cc0;
        }
    }
    ctx->pc = 0x203CACu;
    // 0x203cac: 0x3e00008
    ctx->pc = 0x203CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203C74u: goto label_203c74;
            case 0x203C7Cu: goto label_203c7c;
            case 0x203CA0u: goto label_203ca0;
            case 0x203CB4u: goto label_203cb4;
            case 0x203CC0u: goto label_203cc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x203CB4u;
label_203cb4:
    // 0x203cb4: 0x24020003
    ctx->pc = 0x203cb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x203cb8: 0x3e00008
    ctx->pc = 0x203CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203CBCu;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203C74u: goto label_203c74;
            case 0x203C7Cu: goto label_203c7c;
            case 0x203CA0u: goto label_203ca0;
            case 0x203CB4u: goto label_203cb4;
            case 0x203CC0u: goto label_203cc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x203CC0u;
label_203cc0:
    // 0x203cc0: 0x3e00008
    ctx->pc = 0x203CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203CC4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203C74u: goto label_203c74;
            case 0x203C7Cu: goto label_203c7c;
            case 0x203CA0u: goto label_203ca0;
            case 0x203CB4u: goto label_203cb4;
            case 0x203CC0u: goto label_203cc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x203CC8u;
}
