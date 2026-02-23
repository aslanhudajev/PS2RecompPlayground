#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfbuf_ChkSupSj
// Address: 0x191b40 - 0x191b98
void sfbuf_ChkSupSj_0x191b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfbuf_ChkSupSj");


    ctx->pc = 0x191b40u;

    // 0x191b40: 0x8c820004
    ctx->pc = 0x191b40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x191b44: 0x1040000a
    ctx->pc = 0x191B44u;
    {
        const bool branch_taken_0x191b44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x191b44) {
            ctx->pc = 0x191B70u;
            goto label_191b70;
        }
    }
    ctx->pc = 0x191B4Cu;
    // 0x191b4c: 0x8c820000
    ctx->pc = 0x191b4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x191b50: 0x1440000f
    ctx->pc = 0x191B50u;
    {
        const bool branch_taken_0x191b50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x191B54u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x191b50) {
            ctx->pc = 0x191B90u;
            goto label_191b90;
        }
    }
    ctx->pc = 0x191B58u;
    // 0x191b58: 0x8c820008
    ctx->pc = 0x191b58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x191b5c: 0x10400004
    ctx->pc = 0x191B5Cu;
    {
        const bool branch_taken_0x191b5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x191b5c) {
            ctx->pc = 0x191B70u;
            goto label_191b70;
        }
    }
    ctx->pc = 0x191B64u;
    // 0x191b64: 0x8c82000c
    ctx->pc = 0x191b64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x191b68: 0x5c400003
    ctx->pc = 0x191B68u;
    {
        const bool branch_taken_0x191b68 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x191b68) {
            ctx->pc = 0x191B6Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->pc = 0x191B78u;
            goto label_191b78;
        }
    }
    ctx->pc = 0x191B70u;
label_191b70:
    // 0x191b70: 0x3e00008
    ctx->pc = 0x191B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191B74u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191B70u: goto label_191b70;
            case 0x191B78u: goto label_191b78;
            case 0x191B90u: goto label_191b90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x191B78u;
label_191b78:
    // 0x191b78: 0x18400005
    ctx->pc = 0x191B78u;
    {
        const bool branch_taken_0x191b78 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x191B7Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x191b78) {
            ctx->pc = 0x191B90u;
            goto label_191b90;
        }
    }
    ctx->pc = 0x191B80u;
    // 0x191b80: 0x8c830010
    ctx->pc = 0x191b80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x191b84: 0x1c600002
    ctx->pc = 0x191B84u;
    {
        const bool branch_taken_0x191b84 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x191B88u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x191b84) {
            ctx->pc = 0x191B90u;
            goto label_191b90;
        }
    }
    ctx->pc = 0x191B8Cu;
    // 0x191b8c: 0x102d
    ctx->pc = 0x191b8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191b90:
    // 0x191b90: 0x3e00008
    ctx->pc = 0x191B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191B70u: goto label_191b70;
            case 0x191B78u: goto label_191b78;
            case 0x191B90u: goto label_191b90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x191B98u;
}
