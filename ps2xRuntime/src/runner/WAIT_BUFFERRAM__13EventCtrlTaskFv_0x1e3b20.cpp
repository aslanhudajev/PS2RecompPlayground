#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: WAIT_BUFFERRAM__13EventCtrlTaskFv
// Address: 0x1e3b20 - 0x1e3b7c
void WAIT_BUFFERRAM__13EventCtrlTaskFv_0x1e3b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("WAIT_BUFFERRAM__13EventCtrlTaskFv");


    ctx->pc = 0x1e3b20u;

    // 0x1e3b20: 0x27bdffe0
    ctx->pc = 0x1e3b20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3b24: 0x7fbf0010
    ctx->pc = 0x1e3b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e3b28: 0x7fb00000
    ctx->pc = 0x1e3b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e3b2c: 0x80830004
    ctx->pc = 0x1e3b2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e3b30: 0x10600003
    ctx->pc = 0x1E3B30u;
    {
        const bool branch_taken_0x1e3b30 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E3B34u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e3b30) {
            ctx->pc = 0x1E3B40u;
            goto label_1e3b40;
        }
    }
    ctx->pc = 0x1E3B38u;
    // 0x1e3b38: 0x10000004
    ctx->pc = 0x1E3B38u;
    {
        const bool branch_taken_0x1e3b38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E3B3Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
        if (branch_taken_0x1e3b38) {
            ctx->pc = 0x1E3B4Cu;
            goto label_1e3b4c;
        }
    }
    ctx->pc = 0x1E3B40u;
label_1e3b40:
    // 0x1e3b40: 0x24030001
    ctx->pc = 0x1e3b40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3b44: 0x10000009
    ctx->pc = 0x1E3B44u;
    {
        const bool branch_taken_0x1e3b44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E3B48u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1e3b44) {
            ctx->pc = 0x1E3B6Cu;
            goto label_1e3b6c;
        }
    }
    ctx->pc = 0x1E3B4Cu;
label_1e3b4c:
    // 0x1e3b4c: 0xc086370
    ctx->pc = 0x1E3B4Cu;
    SET_GPR_U32(ctx, 31, 0x1E3B54u);
    ctx->pc = 0x1E3B50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x218DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        chkRemain__13EntryDatClassFv_0x218dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3B54u; }
        else if (ctx->pc != 0x1E3B54u) { ctx->pc = 0x1E3B54u; }
    }
    if (ctx->pc != 0x1E3B54u) { return; }
    ctx->pc = 0x1E3B54u;
    // 0x1e3b54: 0x14400005
    ctx->pc = 0x1E3B54u;
    {
        const bool branch_taken_0x1e3b54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e3b54) {
            ctx->pc = 0x1E3B6Cu;
            goto label_1e3b6c;
        }
    }
    ctx->pc = 0x1E3B5Cu;
    // 0x1e3b5c: 0xa2000004
    ctx->pc = 0x1e3b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e3b60: 0x8e03000c
    ctx->pc = 0x1e3b60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e3b64: 0x24630004
    ctx->pc = 0x1e3b64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x1e3b68: 0xae03000c
    ctx->pc = 0x1e3b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1e3b6c:
    // 0x1e3b6c: 0x7bbf0010
    ctx->pc = 0x1e3b6cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3b70: 0x7bb00000
    ctx->pc = 0x1e3b70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3b74: 0x3e00008
    ctx->pc = 0x1E3B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3B78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E3B40u: goto label_1e3b40;
            case 0x1E3B4Cu: goto label_1e3b4c;
            case 0x1E3B6Cu: goto label_1e3b6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E3B7Cu;
}
