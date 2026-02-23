#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_GetNumChan
// Address: 0x172238 - 0x17226c
void ADXT_GetNumChan_0x172238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_GetNumChan");


    ctx->pc = 0x172238u;

    // 0x172238: 0x27bdfff0
    ctx->pc = 0x172238u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17223c: 0xffbf0000
    ctx->pc = 0x17223cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x172240: 0x80820001
    ctx->pc = 0x172240u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x172244: 0x28420002
    ctx->pc = 0x172244u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x172248: 0x14400005
    ctx->pc = 0x172248u;
    {
        const bool branch_taken_0x172248 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17224Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x172248) {
            ctx->pc = 0x172260u;
            goto label_172260;
        }
    }
    ctx->pc = 0x172250u;
    // 0x172250: 0xc05b9e4
    ctx->pc = 0x172250u;
    SET_GPR_U32(ctx, 31, 0x172258u);
    ctx->pc = 0x172254u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x16E790u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetNumChan_0x16e790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172258u; }
        else if (ctx->pc != 0x172258u) { ctx->pc = 0x172258u; }
    }
    if (ctx->pc != 0x172258u) { return; }
    ctx->pc = 0x172258u;
    // 0x172258: 0x10000002
    ctx->pc = 0x172258u;
    {
        const bool branch_taken_0x172258 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17225Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x172258) {
            ctx->pc = 0x172264u;
            goto label_172264;
        }
    }
    ctx->pc = 0x172260u;
label_172260:
    // 0x172260: 0xdfbf0000
    ctx->pc = 0x172260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_172264:
    // 0x172264: 0x3e00008
    ctx->pc = 0x172264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172268u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172260u: goto label_172260;
            case 0x172264u: goto label_172264;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17226Cu;
}
