#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBNodeOrder
// Address: 0x2d0028 - 0x2d0098
void MBNodeOrder_0x2d0028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d0028u;

    // 0x2d0028: 0x27bdffd0
    ctx->pc = 0x2d0028u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d002c: 0xffbf0020
    ctx->pc = 0x2d002cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d0030: 0xffb10010
    ctx->pc = 0x2d0030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d0034: 0xffb00000
    ctx->pc = 0x2d0034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d0038: 0x80882d
    ctx->pc = 0x2d0038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d003c: 0xa0802d
    ctx->pc = 0x2d003cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0040: 0x8e230074
    ctx->pc = 0x2d0040u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x2d0044: 0x8e020074
    ctx->pc = 0x2d0044u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2d0048: 0x1462000f
    ctx->pc = 0x2D0048u;
    {
        const bool branch_taken_0x2d0048 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2D004Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2d0048) {
            ctx->pc = 0x2D0088u;
            goto label_2d0088;
        }
    }
    ctx->pc = 0x2D0050u;
    // 0x2d0050: 0xc0b3e40
    ctx->pc = 0x2D0050u;
    SET_GPR_U32(ctx, 31, 0x2D0058u);
    ctx->pc = 0x2D0054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CF900u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodePrevNode_0x2cf900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0058u; }
    }
    if (ctx->pc != 0x2D0058u) { return; }
    ctx->pc = 0x2D0058u;
    // 0x2d0058: 0x40182d
    ctx->pc = 0x2d0058u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d005c: 0x50600004
    ctx->pc = 0x2D005Cu;
    {
        const bool branch_taken_0x2d005c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d005c) {
            ctx->pc = 0x2D0060u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 116)));
            ctx->pc = 0x2D0070u;
            goto label_2d0070;
        }
    }
    ctx->pc = 0x2D0064u;
    // 0x2d0064: 0x8e02007c
    ctx->pc = 0x2d0064u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2d0068: 0x10000003
    ctx->pc = 0x2D0068u;
    {
        const bool branch_taken_0x2d0068 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D006Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 2));
        if (branch_taken_0x2d0068) {
            ctx->pc = 0x2D0078u;
            goto label_2d0078;
        }
    }
    ctx->pc = 0x2D0070u;
label_2d0070:
    // 0x2d0070: 0x8e02007c
    ctx->pc = 0x2d0070u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2d0074: 0xac620078
    ctx->pc = 0x2d0074u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 2));
label_2d0078:
    // 0x2d0078: 0x8e22007c
    ctx->pc = 0x2d0078u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x2d007c: 0xae02007c
    ctx->pc = 0x2d007cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x2d0080: 0xae30007c
    ctx->pc = 0x2d0080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 16));
    // 0x2d0084: 0xdfbf0020
    ctx->pc = 0x2d0084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d0088:
    // 0x2d0088: 0xdfb10010
    ctx->pc = 0x2d0088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d008c: 0xdfb00000
    ctx->pc = 0x2d008cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0090: 0x3e00008
    ctx->pc = 0x2D0090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0094u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D0070u: goto label_2d0070;
            case 0x2D0078u: goto label_2d0078;
            case 0x2D0088u: goto label_2d0088;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D0098u;
}
