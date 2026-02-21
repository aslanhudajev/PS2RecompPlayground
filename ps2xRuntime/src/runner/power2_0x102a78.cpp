#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: power2
// Address: 0x102a78 - 0x102abc
void power2_0x102a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x102a78u;

    // 0x102a78: 0x302d
    ctx->pc = 0x102a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102a7c: 0x24020001
    ctx->pc = 0x102a7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x102a80: 0x1082000a
    ctx->pc = 0x102A80u;
    {
        const bool branch_taken_0x102a80 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x102A84u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x102a80) {
            ctx->pc = 0x102AACu;
            goto label_102aac;
        }
    }
    ctx->pc = 0x102A88u;
    // 0x102a88: 0x24050001
    ctx->pc = 0x102a88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x102a8c: 0x0
    ctx->pc = 0x102a8cu;
    // NOP
label_102a90:
    // 0x102a90: 0x30820001
    ctx->pc = 0x102a90u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 1));
    // 0x102a94: 0x24c60001
    ctx->pc = 0x102a94u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x102a98: 0xa2180b
    ctx->pc = 0x102a98u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 5));
    // 0x102a9c: 0x42042
    ctx->pc = 0x102a9cu;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 1));
    // 0x102aa0: 0x0
    ctx->pc = 0x102aa0u;
    // NOP
    // 0x102aa4: 0x1485fffa
    ctx->pc = 0x102AA4u;
    {
        const bool branch_taken_0x102aa4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 5));
        if (branch_taken_0x102aa4) {
            ctx->pc = 0x102A90u;
            goto label_102a90;
        }
    }
    ctx->pc = 0x102AACu;
label_102aac:
    // 0x102aac: 0x38630001
    ctx->pc = 0x102aacu;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 1));
    // 0x102ab0: 0x24c20001
    ctx->pc = 0x102ab0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 1));
    // 0x102ab4: 0x3e00008
    ctx->pc = 0x102AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102AB8u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102A90u: goto label_102a90;
            case 0x102AACu: goto label_102aac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102ABCu;
}
