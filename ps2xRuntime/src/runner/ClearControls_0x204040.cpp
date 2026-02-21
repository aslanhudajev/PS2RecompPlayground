#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ClearControls
// Address: 0x204040 - 0x2040b0
void ClearControls_0x204040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x204040u;

    // 0x204040: 0x382d
    ctx->pc = 0x204040u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204044: 0x3c02003c
    ctx->pc = 0x204044u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x204048: 0x244cb2e0
    ctx->pc = 0x204048u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 2), 4294947552));
    // 0x20404c: 0x3c02003c
    ctx->pc = 0x20404cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x204050: 0x244bb300
    ctx->pc = 0x204050u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 2), 4294947584));
    // 0x204054: 0x3c02003c
    ctx->pc = 0x204054u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x204058: 0x244ab2c0
    ctx->pc = 0x204058u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 4294947520));
    // 0x20405c: 0x3c02003c
    ctx->pc = 0x20405cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x204060: 0x2449b320
    ctx->pc = 0x204060u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 4294947616));
    // 0x204064: 0x3c02003c
    ctx->pc = 0x204064u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x204068: 0x2448b340
    ctx->pc = 0x204068u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294947648));
    // 0x20406c: 0x0
    ctx->pc = 0x20406cu;
    // NOP
label_204070:
    // 0x204070: 0x71080
    ctx->pc = 0x204070u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
    // 0x204074: 0x4c3021
    ctx->pc = 0x204074u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x204078: 0x4b2821
    ctx->pc = 0x204078u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x20407c: 0x4a2021
    ctx->pc = 0x20407cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x204080: 0x491821
    ctx->pc = 0x204080u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x204084: 0x481021
    ctx->pc = 0x204084u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x204088: 0xac400000
    ctx->pc = 0x204088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x20408c: 0xac600000
    ctx->pc = 0x20408cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x204090: 0xac800000
    ctx->pc = 0x204090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x204094: 0xaca00000
    ctx->pc = 0x204094u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x204098: 0x24e70001
    ctx->pc = 0x204098u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x20409c: 0x28e20008
    ctx->pc = 0x20409cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 8));
    // 0x2040a0: 0x1440fff3
    ctx->pc = 0x2040A0u;
    {
        const bool branch_taken_0x2040a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2040A4u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x2040a0) {
            ctx->pc = 0x204070u;
            goto label_204070;
        }
    }
    ctx->pc = 0x2040A8u;
    // 0x2040a8: 0x3e00008
    ctx->pc = 0x2040A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x204070u: goto label_204070;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2040B0u;
}
