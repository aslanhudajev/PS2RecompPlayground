#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADX_DecodeSteFloat
// Address: 0x16a090 - 0x16a0d4
void ADX_DecodeSteFloat_0x16a090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADX_DecodeSteFloat");


    ctx->pc = 0x16a090u;

    // 0x16a090: 0x27bdfff0
    ctx->pc = 0x16a090u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16a094: 0xa5400
    ctx->pc = 0x16a094u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 16));
    // 0x16a098: 0xb5c00
    ctx->pc = 0x16a098u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 16));
    // 0x16a09c: 0x8f828100
    ctx->pc = 0x16a09cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934784)));
    // 0x16a0a0: 0xffbf0000
    ctx->pc = 0x16a0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16a0a4: 0xa5403
    ctx->pc = 0x16a0a4u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 16));
    // 0x16a0a8: 0x14400005
    ctx->pc = 0x16A0A8u;
    {
        const bool branch_taken_0x16a0a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16A0ACu;
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 16));
        if (branch_taken_0x16a0a8) {
            ctx->pc = 0x16A0C0u;
            goto label_16a0c0;
        }
    }
    ctx->pc = 0x16A0B0u;
    // 0x16a0b0: 0xc05a6d0
    ctx->pc = 0x16A0B0u;
    SET_GPR_U32(ctx, 31, 0x16A0B8u);
    ctx->pc = 0x169B40u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADX_DecodeSteFloatAsSte_0x169b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A0B8u; }
        else if (ctx->pc != 0x16A0B8u) { ctx->pc = 0x16A0B8u; }
    }
    if (ctx->pc != 0x16A0B8u) { return; }
    ctx->pc = 0x16A0B8u;
    // 0x16a0b8: 0x10000004
    ctx->pc = 0x16A0B8u;
    {
        const bool branch_taken_0x16a0b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16A0BCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x16a0b8) {
            ctx->pc = 0x16A0CCu;
            goto label_16a0cc;
        }
    }
    ctx->pc = 0x16A0C0u;
label_16a0c0:
    // 0x16a0c0: 0xc05a77a
    ctx->pc = 0x16A0C0u;
    SET_GPR_U32(ctx, 31, 0x16A0C8u);
    ctx->pc = 0x169DE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADX_DecodeSteFloatAsMono_0x169de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A0C8u; }
        else if (ctx->pc != 0x16A0C8u) { ctx->pc = 0x16A0C8u; }
    }
    if (ctx->pc != 0x16A0C8u) { return; }
    ctx->pc = 0x16A0C8u;
    // 0x16a0c8: 0xdfbf0000
    ctx->pc = 0x16a0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16a0cc:
    // 0x16a0cc: 0x3e00008
    ctx->pc = 0x16A0CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A0D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16A0C0u: goto label_16a0c0;
            case 0x16A0CCu: goto label_16a0cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16A0D4u;
}
