#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iRotateThreadReadyQueue
// Address: 0x308648 - 0x3086a8
void iRotateThreadReadyQueue_0x308648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x308648u;

    // 0x308648: 0x27bdffe0
    ctx->pc = 0x308648u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30864c: 0xffb00000
    ctx->pc = 0x30864cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x308650: 0x80802d
    ctx->pc = 0x308650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308654: 0x2e020080
    ctx->pc = 0x308654u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 128));
    // 0x308658: 0x10400005
    ctx->pc = 0x308658u;
    {
        const bool branch_taken_0x308658 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x30865Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x308658) {
            ctx->pc = 0x308670u;
            goto label_308670;
        }
    }
    ctx->pc = 0x308660u;
    // 0x308660: 0x3c02003a
    ctx->pc = 0x308660u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x308664: 0x8c4342a0
    ctx->pc = 0x308664u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 17056)));
    // 0x308668: 0x14600003
    ctx->pc = 0x308668u;
    {
        const bool branch_taken_0x308668 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x30866Cu;
        SET_GPR_U32(ctx, 5, ((uint32_t)62 << 16));
        if (branch_taken_0x308668) {
            ctx->pc = 0x308678u;
            goto label_308678;
        }
    }
    ctx->pc = 0x308670u;
label_308670:
    // 0x308670: 0x10000009
    ctx->pc = 0x308670u;
    {
        const bool branch_taken_0x308670 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x308674u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x308670) {
            ctx->pc = 0x308698u;
            goto label_308698;
        }
    }
    ctx->pc = 0x308678u;
label_308678:
    // 0x308678: 0x3c02003e
    ctx->pc = 0x308678u;
    SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
    // 0x30867c: 0x8c447478
    ctx->pc = 0x30867cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 29816)));
    // 0x308680: 0x24a37470
    ctx->pc = 0x308680u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 29808));
    // 0x308684: 0x24020001
    ctx->pc = 0x308684u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x308688: 0xac700004
    ctx->pc = 0x308688u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x30868c: 0xc0c0d84
    ctx->pc = 0x30868Cu;
    SET_GPR_U32(ctx, 31, 0x308694u);
    ctx->pc = 0x308690u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 29808), GPR_U32(ctx, 2));
    ctx->pc = 0x303610u;
    {
        const uint32_t __entryPc = ctx->pc;
        iSignalSema_0x303610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308694u; }
    }
    if (ctx->pc != 0x308694u) { return; }
    ctx->pc = 0x308694u;
    // 0x308694: 0x200102d
    ctx->pc = 0x308694u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_308698:
    // 0x308698: 0xdfbf0010
    ctx->pc = 0x308698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30869c: 0xdfb00000
    ctx->pc = 0x30869cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3086a0: 0x3e00008
    ctx->pc = 0x3086A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3086A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x308670u: goto label_308670;
            case 0x308678u: goto label_308678;
            case 0x308698u: goto label_308698;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3086A8u;
}
