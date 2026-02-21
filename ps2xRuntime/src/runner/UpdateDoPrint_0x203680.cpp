#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: UpdateDoPrint
// Address: 0x203680 - 0x2036c4
void UpdateDoPrint_0x203680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x203680u;

    // 0x203680: 0x27bdffe0
    ctx->pc = 0x203680u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x203684: 0xffbf0010
    ctx->pc = 0x203684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x203688: 0xffb00000
    ctx->pc = 0x203688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20368c: 0x3c02003a
    ctx->pc = 0x20368cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x203690: 0x24030001
    ctx->pc = 0x203690u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x203694: 0xac431bdc
    ctx->pc = 0x203694u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7132), GPR_U32(ctx, 3));
    // 0x203698: 0x3c100031
    ctx->pc = 0x203698u;
    SET_GPR_U32(ctx, 16, ((uint32_t)49 << 16));
    // 0x20369c: 0x8e02ffdc
    ctx->pc = 0x20369cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294967260)));
    // 0x2036a0: 0x10400005
    ctx->pc = 0x2036A0u;
    {
        const bool branch_taken_0x2036a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2036A4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2036a0) {
            ctx->pc = 0x2036B8u;
            goto label_2036b8;
        }
    }
    ctx->pc = 0x2036A8u;
    // 0x2036a8: 0xc0b46de
    ctx->pc = 0x2036A8u;
    SET_GPR_U32(ctx, 31, 0x2036B0u);
    ctx->pc = 0x2D1B78u;
    {
        const uint32_t __entryPc = ctx->pc;
        text_clear_0x2d1b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2036B0u; }
    }
    if (ctx->pc != 0x2036B0u) { return; }
    ctx->pc = 0x2036B0u;
    // 0x2036b0: 0xae00ffdc
    ctx->pc = 0x2036b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967260), GPR_U32(ctx, 0));
    // 0x2036b4: 0xdfbf0010
    ctx->pc = 0x2036b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2036b8:
    // 0x2036b8: 0xdfb00000
    ctx->pc = 0x2036b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2036bc: 0x3e00008
    ctx->pc = 0x2036BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2036C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2036B8u: goto label_2036b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2036C4u;
}
