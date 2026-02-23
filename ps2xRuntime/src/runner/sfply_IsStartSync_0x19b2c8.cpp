#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfply_IsStartSync
// Address: 0x19b2c8 - 0x19b328
void sfply_IsStartSync_0x19b2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfply_IsStartSync");


    ctx->pc = 0x19b2c8u;

    // 0x19b2c8: 0x27bdfff0
    ctx->pc = 0x19b2c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19b2cc: 0x24830994
    ctx->pc = 0x19b2ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 2452));
    // 0x19b2d0: 0xffbf0000
    ctx->pc = 0x19b2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19b2d4: 0x8c620038
    ctx->pc = 0x19b2d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x19b2d8: 0x10400004
    ctx->pc = 0x19B2D8u;
    {
        const bool branch_taken_0x19b2d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19B2DCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 2708));
        if (branch_taken_0x19b2d8) {
            ctx->pc = 0x19B2ECu;
            goto label_19b2ec;
        }
    }
    ctx->pc = 0x19B2E0u;
    // 0x19b2e0: 0x8c620014
    ctx->pc = 0x19b2e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x19b2e4: 0x54400003
    ctx->pc = 0x19B2E4u;
    {
        const bool branch_taken_0x19b2e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x19b2e4) {
            ctx->pc = 0x19B2E8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 604)));
            ctx->pc = 0x19B2F4u;
            goto label_19b2f4;
        }
    }
    ctx->pc = 0x19B2ECu;
label_19b2ec:
    // 0x19b2ec: 0x1000000b
    ctx->pc = 0x19B2ECu;
    {
        const bool branch_taken_0x19b2ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19B2F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19b2ec) {
            ctx->pc = 0x19B31Cu;
            goto label_19b31c;
        }
    }
    ctx->pc = 0x19B2F4u;
label_19b2f4:
    // 0x19b2f4: 0x14400009
    ctx->pc = 0x19B2F4u;
    {
        const bool branch_taken_0x19b2f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19B2F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19b2f4) {
            ctx->pc = 0x19B31Cu;
            goto label_19b31c;
        }
    }
    ctx->pc = 0x19B2FCu;
    // 0x19b2fc: 0x8ca20278
    ctx->pc = 0x19b2fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 632)));
    // 0x19b300: 0x8c6300b4
    ctx->pc = 0x19b300u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x19b304: 0x43102a
    ctx->pc = 0x19b304u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x19b308: 0x10400004
    ctx->pc = 0x19B308u;
    {
        const bool branch_taken_0x19b308 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19B30Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19b308) {
            ctx->pc = 0x19B31Cu;
            goto label_19b31c;
        }
    }
    ctx->pc = 0x19B310u;
    // 0x19b310: 0xc066d00
    ctx->pc = 0x19B310u;
    SET_GPR_U32(ctx, 31, 0x19B318u);
    ctx->pc = 0x19B400u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfply_IsEtrg_0x19b400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B318u; }
        else if (ctx->pc != 0x19B318u) { ctx->pc = 0x19B318u; }
    }
    if (ctx->pc != 0x19B318u) { return; }
    ctx->pc = 0x19B318u;
    // 0x19b318: 0x2102b
    ctx->pc = 0x19b318u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_19b31c:
    // 0x19b31c: 0xdfbf0000
    ctx->pc = 0x19b31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b320: 0x3e00008
    ctx->pc = 0x19B320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B324u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19B2ECu: goto label_19b2ec;
            case 0x19B2F4u: goto label_19b2f4;
            case 0x19B31Cu: goto label_19b31c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19B328u;
}
