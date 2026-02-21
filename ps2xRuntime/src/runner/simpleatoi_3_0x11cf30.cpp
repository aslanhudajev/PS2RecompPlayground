#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: simpleatoi.3
// Address: 0x11cf30 - 0x11cf84
void simpleatoi_3_0x11cf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11cf30u;

    // 0x11cf30: 0x27bdfff0
    ctx->pc = 0x11cf30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11cf34: 0xa4a00000
    ctx->pc = 0x11cf34u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x11cf38: 0xafa20000
    ctx->pc = 0x11cf38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x11cf3c: 0x80820000
    ctx->pc = 0x11cf3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11cf40: 0x1040000e
    ctx->pc = 0x11CF40u;
    {
        const bool branch_taken_0x11cf40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x11cf40) {
            ctx->pc = 0x11CF7Cu;
            goto label_11cf7c;
        }
    }
    ctx->pc = 0x11CF48u;
    // 0x11cf48: 0x2406000a
    ctx->pc = 0x11cf48u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
    // 0x11cf4c: 0x94a30000
    ctx->pc = 0x11cf4cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_11cf50:
    // 0x11cf50: 0x90820000
    ctx->pc = 0x11cf50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11cf54: 0x661818
    ctx->pc = 0x11cf54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x11cf58: 0x24840001
    ctx->pc = 0x11cf58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x11cf5c: 0x21600
    ctx->pc = 0x11cf5cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
    // 0x11cf60: 0x21603
    ctx->pc = 0x11cf60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x11cf64: 0x431021
    ctx->pc = 0x11cf64u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11cf68: 0x2442ffd0
    ctx->pc = 0x11cf68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x11cf6c: 0xa4a20000
    ctx->pc = 0x11cf6cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x11cf70: 0x80830000
    ctx->pc = 0x11cf70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11cf74: 0x5460fff6
    ctx->pc = 0x11CF74u;
    {
        const bool branch_taken_0x11cf74 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x11cf74) {
            ctx->pc = 0x11CF78u;
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->pc = 0x11CF50u;
            goto label_11cf50;
        }
    }
    ctx->pc = 0x11CF7Cu;
label_11cf7c:
    // 0x11cf7c: 0x3e00008
    ctx->pc = 0x11CF7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CF80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CF50u: goto label_11cf50;
            case 0x11CF7Cu: goto label_11cf7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11CF84u;
}
