#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PS2RNA_SetBitPerSmpl
// Address: 0x17bc88 - 0x17bcd0
void PS2RNA_SetBitPerSmpl_0x17bc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PS2RNA_SetBitPerSmpl");


    ctx->pc = 0x17bc88u;

    // 0x17bc88: 0x27bdfff0
    ctx->pc = 0x17bc88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17bc8c: 0x24020010
    ctx->pc = 0x17bc8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x17bc90: 0x10a2000c
    ctx->pc = 0x17BC90u;
    {
        const bool branch_taken_0x17bc90 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x17BC94u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x17bc90) {
            ctx->pc = 0x17BCC4u;
            goto label_17bcc4;
        }
    }
    ctx->pc = 0x17BC98u;
    // 0x17bc98: 0x3c04002c
    ctx->pc = 0x17bc98u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17bc9c: 0xc05114a
    ctx->pc = 0x17BC9Cu;
    SET_GPR_U32(ctx, 31, 0x17BCA4u);
    ctx->pc = 0x17BCA0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950408));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BCA4u; }
        else if (ctx->pc != 0x17BCA4u) { ctx->pc = 0x17BCA4u; }
    }
    if (ctx->pc != 0x17BCA4u) { return; }
    ctx->pc = 0x17BCA4u;
    // 0x17bca4: 0x0
    ctx->pc = 0x17bca4u;
    // NOP
label_17bca8:
    // 0x17bca8: 0x0
    ctx->pc = 0x17bca8u;
    // NOP
    // 0x17bcac: 0x0
    ctx->pc = 0x17bcacu;
    // NOP
    // 0x17bcb0: 0x0
    ctx->pc = 0x17bcb0u;
    // NOP
    // 0x17bcb4: 0x0
    ctx->pc = 0x17bcb4u;
    // NOP
    // 0x17bcb8: 0x0
    ctx->pc = 0x17bcb8u;
    // NOP
    // 0x17bcbc: 0x1000fffa
    ctx->pc = 0x17BCBCu;
    {
        const bool branch_taken_0x17bcbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x17bcbc) {
            ctx->pc = 0x17BCA8u;
            goto label_17bca8;
        }
    }
    ctx->pc = 0x17BCC4u;
label_17bcc4:
    // 0x17bcc4: 0xdfbf0000
    ctx->pc = 0x17bcc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bcc8: 0x3e00008
    ctx->pc = 0x17BCC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BCCCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17BCA8u: goto label_17bca8;
            case 0x17BCC4u: goto label_17bcc4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17BCD0u;
}
