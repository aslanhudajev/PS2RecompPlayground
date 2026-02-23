#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: WAIT_LOAD_OVLMOD__13EventCtrlTaskFv
// Address: 0x1e3bc0 - 0x1e3c28
void WAIT_LOAD_OVLMOD__13EventCtrlTaskFv_0x1e3bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("WAIT_LOAD_OVLMOD__13EventCtrlTaskFv");


    ctx->pc = 0x1e3bc0u;

    // 0x1e3bc0: 0x27bdffd0
    ctx->pc = 0x1e3bc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e3bc4: 0x7fbf0020
    ctx->pc = 0x1e3bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1e3bc8: 0x7fb10010
    ctx->pc = 0x1e3bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e3bcc: 0x7fb00000
    ctx->pc = 0x1e3bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e3bd0: 0x8c83000c
    ctx->pc = 0x1e3bd0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3bd4: 0x70808628
    ctx->pc = 0x1e3bd4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e3bd8: 0x3c020051
    ctx->pc = 0x1e3bd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e3bdc: 0x8c710004
    ctx->pc = 0x1e3bdcu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e3be0: 0x24443430
    ctx->pc = 0x1e3be0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13360));
    // 0x1e3be4: 0xc080864
    ctx->pc = 0x1E3BE4u;
    SET_GPR_U32(ctx, 31, 0x1E3BECu);
    ctx->pc = 0x1E3BE8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x202190u;
    {
        const uint32_t __entryPc = ctx->pc;
        chkEntryStat__15OverlayMgrClassFi_0x202190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3BECu; }
        else if (ctx->pc != 0x1E3BECu) { ctx->pc = 0x1E3BECu; }
    }
    if (ctx->pc != 0x1E3BECu) { return; }
    ctx->pc = 0x1E3BECu;
    // 0x1e3bec: 0x24030002
    ctx->pc = 0x1e3becu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e3bf0: 0x10430005
    ctx->pc = 0x1E3BF0u;
    {
        const bool branch_taken_0x1e3bf0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1e3bf0) {
            ctx->pc = 0x1E3C08u;
            goto label_1e3c08;
        }
    }
    ctx->pc = 0x1E3BF8u;
    // 0x1e3bf8: 0x3c020050
    ctx->pc = 0x1e3bf8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e3bfc: 0x72202e28
    ctx->pc = 0x1e3bfcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e3c00: 0xc07cf20
    ctx->pc = 0x1E3C00u;
    SET_GPR_U32(ctx, 31, 0x1E3C08u);
    ctx->pc = 0x1E3C04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3C80u;
    {
        const uint32_t __entryPc = ctx->pc;
        reqPauseUntilOvlModEntry__13PauseMgrClassFi_0x1f3c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3C08u; }
        else if (ctx->pc != 0x1E3C08u) { ctx->pc = 0x1E3C08u; }
    }
    if (ctx->pc != 0x1E3C08u) { return; }
    ctx->pc = 0x1E3C08u;
label_1e3c08:
    // 0x1e3c08: 0x8e03000c
    ctx->pc = 0x1e3c08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e3c0c: 0x24630008
    ctx->pc = 0x1e3c0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e3c10: 0xae03000c
    ctx->pc = 0x1e3c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e3c14: 0x7bbf0020
    ctx->pc = 0x1e3c14u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3c18: 0x7bb10010
    ctx->pc = 0x1e3c18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3c1c: 0x7bb00000
    ctx->pc = 0x1e3c1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3c20: 0x3e00008
    ctx->pc = 0x1E3C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3C24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E3C08u: goto label_1e3c08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E3C28u;
}
