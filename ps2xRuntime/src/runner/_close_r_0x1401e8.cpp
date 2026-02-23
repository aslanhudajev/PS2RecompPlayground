#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _close_r
// Address: 0x1401e8 - 0x140240
void _close_r_0x1401e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_close_r");


    ctx->pc = 0x1401e8u;

    // 0x1401e8: 0x27bdffd0
    ctx->pc = 0x1401e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1401ec: 0xffb10010
    ctx->pc = 0x1401ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1401f0: 0xffb00000
    ctx->pc = 0x1401f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1401f4: 0x80882d
    ctx->pc = 0x1401f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1401f8: 0x3c100093
    ctx->pc = 0x1401f8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)147 << 16));
    // 0x1401fc: 0xffbf0020
    ctx->pc = 0x1401fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x140200: 0xa0202d
    ctx->pc = 0x140200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140204: 0xc0553c8
    ctx->pc = 0x140204u;
    SET_GPR_U32(ctx, 31, 0x14020Cu);
    ctx->pc = 0x140208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294934660), GPR_U32(ctx, 0));
    ctx->pc = 0x154F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        close_0x154f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14020Cu; }
        else if (ctx->pc != 0x14020Cu) { ctx->pc = 0x14020Cu; }
    }
    if (ctx->pc != 0x14020Cu) { return; }
    ctx->pc = 0x14020Cu;
    // 0x14020c: 0x40182d
    ctx->pc = 0x14020cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140210: 0x2402ffff
    ctx->pc = 0x140210u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x140214: 0x14620005
    ctx->pc = 0x140214u;
    {
        const bool branch_taken_0x140214 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x140218u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x140214) {
            ctx->pc = 0x14022Cu;
            goto label_14022c;
        }
    }
    ctx->pc = 0x14021Cu;
    // 0x14021c: 0x8e028084
    ctx->pc = 0x14021cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294934660)));
    // 0x140220: 0x54400002
    ctx->pc = 0x140220u;
    {
        const bool branch_taken_0x140220 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x140220) {
            ctx->pc = 0x140224u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
            ctx->pc = 0x14022Cu;
            goto label_14022c;
        }
    }
    ctx->pc = 0x140228u;
    // 0x140228: 0xdfbf0020
    ctx->pc = 0x140228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_14022c:
    // 0x14022c: 0x60102d
    ctx->pc = 0x14022cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140230: 0xdfb10010
    ctx->pc = 0x140230u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140234: 0xdfb00000
    ctx->pc = 0x140234u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140238: 0x3e00008
    ctx->pc = 0x140238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14023Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14022Cu: goto label_14022c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x140240u;
}
