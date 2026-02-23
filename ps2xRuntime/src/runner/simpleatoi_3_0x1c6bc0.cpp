#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: simpleatoi.3
// Address: 0x1c6bc0 - 0x1c6c14
void simpleatoi_3_0x1c6bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("simpleatoi_3");


    ctx->pc = 0x1c6bc0u;

    // 0x1c6bc0: 0x27bdfff0
    ctx->pc = 0x1c6bc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6bc4: 0xa4a00000
    ctx->pc = 0x1c6bc4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c6bc8: 0xafa20000
    ctx->pc = 0x1c6bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1c6bcc: 0x80820000
    ctx->pc = 0x1c6bccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c6bd0: 0x1040000e
    ctx->pc = 0x1C6BD0u;
    {
        const bool branch_taken_0x1c6bd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c6bd0) {
            ctx->pc = 0x1C6C0Cu;
            goto label_1c6c0c;
        }
    }
    ctx->pc = 0x1C6BD8u;
    // 0x1c6bd8: 0x2406000a
    ctx->pc = 0x1c6bd8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c6bdc: 0x94a30000
    ctx->pc = 0x1c6bdcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_1c6be0:
    // 0x1c6be0: 0x90820000
    ctx->pc = 0x1c6be0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c6be4: 0x661818
    ctx->pc = 0x1c6be4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1c6be8: 0x24840001
    ctx->pc = 0x1c6be8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c6bec: 0x21600
    ctx->pc = 0x1c6becu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
    // 0x1c6bf0: 0x21603
    ctx->pc = 0x1c6bf0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1c6bf4: 0x431021
    ctx->pc = 0x1c6bf4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c6bf8: 0x2442ffd0
    ctx->pc = 0x1c6bf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x1c6bfc: 0xa4a20000
    ctx->pc = 0x1c6bfcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c6c00: 0x80830000
    ctx->pc = 0x1c6c00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c6c04: 0x5460fff6
    ctx->pc = 0x1C6C04u;
    {
        const bool branch_taken_0x1c6c04 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c6c04) {
            ctx->pc = 0x1C6C08u;
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->pc = 0x1C6BE0u;
            goto label_1c6be0;
        }
    }
    ctx->pc = 0x1C6C0Cu;
label_1c6c0c:
    // 0x1c6c0c: 0x3e00008
    ctx->pc = 0x1C6C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6C10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C6BE0u: goto label_1c6be0;
            case 0x1C6C0Cu: goto label_1c6c0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C6C14u;
}
