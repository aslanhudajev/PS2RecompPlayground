#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfbuf_MakeBufPtr
// Address: 0x191668 - 0x191698
void sfbuf_MakeBufPtr_0x191668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfbuf_MakeBufPtr");


    ctx->pc = 0x191668u;

    // 0x191668: 0x24030007
    ctx->pc = 0x191668u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
    // 0x19166c: 0x0
    ctx->pc = 0x19166cu;
    // NOP
label_191670:
    // 0x191670: 0x8ca20000
    ctx->pc = 0x191670u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x191674: 0x2463ffff
    ctx->pc = 0x191674u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x191678: 0xac860000
    ctx->pc = 0x191678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x19167c: 0x24a50004
    ctx->pc = 0x19167cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x191680: 0xc23021
    ctx->pc = 0x191680u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x191684: 0x24840004
    ctx->pc = 0x191684u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x191688: 0x461fff9
    ctx->pc = 0x191688u;
    {
        const bool branch_taken_0x191688 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x191688) {
            ctx->pc = 0x191670u;
            goto label_191670;
        }
    }
    ctx->pc = 0x191690u;
    // 0x191690: 0x3e00008
    ctx->pc = 0x191690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191670u: goto label_191670;
            default: break;
        }
        return;
    }
    ctx->pc = 0x191698u;
}
