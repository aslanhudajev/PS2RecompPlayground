#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_SetUsrIsSkipFn
// Address: 0x19e1f8 - 0x19e24c
void SFD_SetUsrIsSkipFn_0x19e1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_SetUsrIsSkipFn");


    ctx->pc = 0x19e1f8u;

    // 0x19e1f8: 0x27bdffd0
    ctx->pc = 0x19e1f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19e1fc: 0xffb00000
    ctx->pc = 0x19e1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19e200: 0xffb10010
    ctx->pc = 0x19e200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19e204: 0x80802d
    ctx->pc = 0x19e204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e208: 0xffbf0020
    ctx->pc = 0x19e208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19e20c: 0xc064f1e
    ctx->pc = 0x19E20Cu;
    SET_GPR_U32(ctx, 31, 0x19E214u);
    ctx->pc = 0x19E210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E214u; }
        else if (ctx->pc != 0x19E214u) { ctx->pc = 0x19E214u; }
    }
    if (ctx->pc != 0x19E214u) { return; }
    ctx->pc = 0x19E214u;
    // 0x19e214: 0x10400006
    ctx->pc = 0x19E214u;
    {
        const bool branch_taken_0x19e214 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E218u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19e214) {
            ctx->pc = 0x19E230u;
            goto label_19e230;
        }
    }
    ctx->pc = 0x19E21Cu;
    // 0x19e21c: 0x3c05ff00
    ctx->pc = 0x19e21cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19e220: 0xc064ea0
    ctx->pc = 0x19E220u;
    SET_GPR_U32(ctx, 31, 0x19E228u);
    ctx->pc = 0x19E224u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 292));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E228u; }
        else if (ctx->pc != 0x19E228u) { ctx->pc = 0x19E228u; }
    }
    if (ctx->pc != 0x19E228u) { return; }
    ctx->pc = 0x19E228u;
    // 0x19e228: 0x10000004
    ctx->pc = 0x19E228u;
    {
        const bool branch_taken_0x19e228 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E22Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19e228) {
            ctx->pc = 0x19E23Cu;
            goto label_19e23c;
        }
    }
    ctx->pc = 0x19E230u;
label_19e230:
    // 0x19e230: 0xae110aa8
    ctx->pc = 0x19e230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2728), GPR_U32(ctx, 17));
    // 0x19e234: 0x102d
    ctx->pc = 0x19e234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e238: 0xdfbf0020
    ctx->pc = 0x19e238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19e23c:
    // 0x19e23c: 0xdfb10010
    ctx->pc = 0x19e23cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e240: 0xdfb00000
    ctx->pc = 0x19e240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e244: 0x3e00008
    ctx->pc = 0x19E244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E248u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E230u: goto label_19e230;
            case 0x19E23Cu: goto label_19e23c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19E24Cu;
}
