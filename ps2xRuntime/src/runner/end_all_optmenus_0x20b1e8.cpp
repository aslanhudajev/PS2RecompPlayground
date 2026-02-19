#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: end_all_optmenus
// Address: 0x20b1e8 - 0x20b22c
void end_all_optmenus_0x20b1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20b1e8u;

    // 0x20b1e8: 0x27bdffe0
    ctx->pc = 0x20b1e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20b1ec: 0xffbf0010
    ctx->pc = 0x20b1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20b1f0: 0xffb00000
    ctx->pc = 0x20b1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20b1f4: 0x3c020032
    ctx->pc = 0x20b1f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20b1f8: 0x8c42f2f4
    ctx->pc = 0x20b1f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963956)));
    // 0x20b1fc: 0x4400007
    ctx->pc = 0x20B1FCu;
    {
        const bool branch_taken_0x20b1fc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x20B200u;
        SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
        if (branch_taken_0x20b1fc) {
            ctx->pc = 0x20B21Cu;
            goto label_20b21c;
        }
    }
    ctx->pc = 0x20B204u;
    // 0x20b204: 0x2404ffff
    ctx->pc = 0x20b204u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_20b208:
    // 0x20b208: 0xc082cec
    ctx->pc = 0x20B208u;
    SET_GPR_U32(ctx, 31, 0x20B210u);
    ctx->pc = 0x20B20Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x20B3B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        end_optmenu_0x20b3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B210u; }
    }
    if (ctx->pc != 0x20B210u) { return; }
    ctx->pc = 0x20B210u;
    // 0x20b210: 0x8e02f2f4
    ctx->pc = 0x20b210u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294963956)));
    // 0x20b214: 0x441fffc
    ctx->pc = 0x20B214u;
    {
        const bool branch_taken_0x20b214 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20B218u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x20b214) {
            ctx->pc = 0x20B208u;
            goto label_20b208;
        }
    }
    ctx->pc = 0x20B21Cu;
label_20b21c:
    // 0x20b21c: 0xdfbf0010
    ctx->pc = 0x20b21cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b220: 0xdfb00000
    ctx->pc = 0x20b220u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b224: 0x3e00008
    ctx->pc = 0x20B224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B228u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20B208u: goto label_20b208;
            case 0x20B21Cu: goto label_20b21c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20B22Cu;
}
