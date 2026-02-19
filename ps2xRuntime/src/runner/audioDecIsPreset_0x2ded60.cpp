#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: audioDecIsPreset
// Address: 0x2ded60 - 0x2ded8c
void audioDecIsPreset_0x2ded60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ded60u;

    // 0x2ded60: 0x8c83000c
    ctx->pc = 0x2ded60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ded64: 0x24020001
    ctx->pc = 0x2ded64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ded68: 0x10620004
    ctx->pc = 0x2DED68u;
    {
        const bool branch_taken_0x2ded68 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2DED6Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 84)));
        if (branch_taken_0x2ded68) {
            ctx->pc = 0x2DED7Cu;
            goto label_2ded7c;
        }
    }
    ctx->pc = 0x2DED70u;
    // 0x2ded70: 0x28423000
    ctx->pc = 0x2ded70u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 12288));
    // 0x2ded74: 0x3e00008
    ctx->pc = 0x2DED74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DED78u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DED7Cu: goto label_2ded7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DED7Cu;
label_2ded7c:
    // 0x2ded7c: 0x8c830048
    ctx->pc = 0x2ded7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2ded80: 0x43102a
    ctx->pc = 0x2ded80u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x2ded84: 0x3e00008
    ctx->pc = 0x2DED84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DED88u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DED7Cu: goto label_2ded7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DED8Cu;
}
