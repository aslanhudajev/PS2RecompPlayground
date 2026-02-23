#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sflib_SetErrSub
// Address: 0x193af8 - 0x193b28
void sflib_SetErrSub_0x193af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sflib_SetErrSub");


    ctx->pc = 0x193af8u;

label_193af8:
    // 0x193af8: 0x27bdfff0
    ctx->pc = 0x193af8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_193afc:
    // 0x193afc: 0xffbf0000
    ctx->pc = 0x193afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_193b00:
    // 0x193b00: 0x10a00006
label_193b04:
    if (ctx->pc == 0x193B04u) {
        ctx->pc = 0x193B04u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->pc = 0x193B08u;
        goto label_193b08;
    }
    ctx->pc = 0x193B00u;
    {
        const bool branch_taken_0x193b00 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x193B04u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        if (branch_taken_0x193b00) {
            ctx->pc = 0x193B1Cu;
            goto label_193b1c;
        }
    }
    ctx->pc = 0x193B08u;
label_193b08:
    // 0x193b08: 0x8c820000
    ctx->pc = 0x193b08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_193b0c:
    // 0x193b0c: 0x10400004
label_193b10:
    if (ctx->pc == 0x193B10u) {
        ctx->pc = 0x193B10u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x193B14u;
        goto label_193b14;
    }
    ctx->pc = 0x193B0Cu;
    {
        const bool branch_taken_0x193b0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x193B10u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x193b0c) {
            ctx->pc = 0x193B20u;
            goto label_193b20;
        }
    }
    ctx->pc = 0x193B14u;
label_193b14:
    // 0x193b14: 0x40f809
label_193b18:
    if (ctx->pc == 0x193B18u) {
        ctx->pc = 0x193B18u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x193B1Cu;
        goto label_193b1c;
    }
    ctx->pc = 0x193B14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193B1Cu);
        ctx->pc = 0x193B18u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193AF8u: goto label_193af8;
            case 0x193AFCu: goto label_193afc;
            case 0x193B00u: goto label_193b00;
            case 0x193B04u: goto label_193b04;
            case 0x193B08u: goto label_193b08;
            case 0x193B0Cu: goto label_193b0c;
            case 0x193B10u: goto label_193b10;
            case 0x193B14u: goto label_193b14;
            case 0x193B18u: goto label_193b18;
            case 0x193B1Cu: goto label_193b1c;
            case 0x193B20u: goto label_193b20;
            case 0x193B24u: goto label_193b24;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x193B1Cu; }
            if (ctx->pc != 0x193B1Cu) { return; }
        }
    }
    ctx->pc = 0x193B1Cu;
label_193b1c:
    // 0x193b1c: 0xdfbf0000
    ctx->pc = 0x193b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_193b20:
    // 0x193b20: 0x3e00008
label_193b24:
    if (ctx->pc == 0x193B24u) {
        ctx->pc = 0x193B24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x193B28u;
        goto label_fallthrough_0x193b20;
    }
    ctx->pc = 0x193B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193B24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193AF8u: goto label_193af8;
            case 0x193AFCu: goto label_193afc;
            case 0x193B00u: goto label_193b00;
            case 0x193B04u: goto label_193b04;
            case 0x193B08u: goto label_193b08;
            case 0x193B0Cu: goto label_193b0c;
            case 0x193B10u: goto label_193b10;
            case 0x193B14u: goto label_193b14;
            case 0x193B18u: goto label_193b18;
            case 0x193B1Cu: goto label_193b1c;
            case 0x193B20u: goto label_193b20;
            case 0x193B24u: goto label_193b24;
            default: break;
        }
        return;
    }
label_fallthrough_0x193b20:
    ctx->pc = 0x193B28u;
}
