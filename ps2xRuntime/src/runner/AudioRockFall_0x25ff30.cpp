#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioRockFall
// Address: 0x25ff30 - 0x25ffb8
void AudioRockFall_0x25ff30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25ff30u;

    // 0x25ff30: 0x80282d
    ctx->pc = 0x25ff30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ff34: 0x3c030034
    ctx->pc = 0x25ff34u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x25ff38: 0x2463db68
    ctx->pc = 0x25ff38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294957928));
    // 0x25ff3c: 0x3c020034
    ctx->pc = 0x25ff3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25ff40: 0x8c44e7f0
    ctx->pc = 0x25ff40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x25ff44: 0x41080
    ctx->pc = 0x25ff44u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x25ff48: 0x431021
    ctx->pc = 0x25ff48u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25ff4c: 0x8c460000
    ctx->pc = 0x25ff4cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25ff50: 0x24020006
    ctx->pc = 0x25ff50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x25ff54: 0x14820008
    ctx->pc = 0x25FF54u;
    {
        const bool branch_taken_0x25ff54 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x25FF58u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x25ff54) {
            ctx->pc = 0x25FF78u;
            goto label_25ff78;
        }
    }
    ctx->pc = 0x25FF5Cu;
    // 0x25ff5c: 0x3c020034
    ctx->pc = 0x25ff5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25ff60: 0x8c43e7f4
    ctx->pc = 0x25ff60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961140)));
    // 0x25ff64: 0x24020001
    ctx->pc = 0x25ff64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ff68: 0x14620003
    ctx->pc = 0x25FF68u;
    {
        const bool branch_taken_0x25ff68 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x25FF6Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x25ff68) {
            ctx->pc = 0x25FF78u;
            goto label_25ff78;
        }
    }
    ctx->pc = 0x25FF70u;
    // 0x25ff70: 0x1000000a
    ctx->pc = 0x25FF70u;
    {
        const bool branch_taken_0x25ff70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25FF74u;
        SET_GPR_U32(ctx, 6, ((uint32_t)57 << 16));
        if (branch_taken_0x25ff70) {
            ctx->pc = 0x25FF9Cu;
            goto label_25ff9c;
        }
    }
    ctx->pc = 0x25FF78u;
label_25ff78:
    // 0x25ff78: 0x8c43e7f0
    ctx->pc = 0x25ff78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x25ff7c: 0x24020009
    ctx->pc = 0x25ff7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x25ff80: 0x14620006
    ctx->pc = 0x25FF80u;
    {
        const bool branch_taken_0x25ff80 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x25FF84u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x25ff80) {
            ctx->pc = 0x25FF9Cu;
            goto label_25ff9c;
        }
    }
    ctx->pc = 0x25FF88u;
    // 0x25ff88: 0x8c42e7f4
    ctx->pc = 0x25ff88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961140)));
    // 0x25ff8c: 0x3c030032
    ctx->pc = 0x25ff8cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x25ff90: 0x3463000d
    ctx->pc = 0x25ff90u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 13));
    // 0x25ff94: 0x38420004
    ctx->pc = 0x25ff94u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 4));
    // 0x25ff98: 0x62300a
    ctx->pc = 0x25ff98u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
label_25ff9c:
    // 0x25ff9c: 0x4c00004
    ctx->pc = 0x25FF9Cu;
    {
        const bool branch_taken_0x25ff9c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x25FFA0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25ff9c) {
            ctx->pc = 0x25FFB0u;
            goto label_25ffb0;
        }
    }
    ctx->pc = 0x25FFA4u;
    // 0x25ffa4: 0x240600e0
    ctx->pc = 0x25ffa4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25ffa8: 0x8088a62
    ctx->pc = 0x25FFA8u;
    ctx->pc = 0x25FFACu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 18));
    ctx->pc = 0x222988u;
    AudioSFX3_0x222988(rdram, ctx, runtime); return;
    ctx->pc = 0x25FFB0u;
label_25ffb0:
    // 0x25ffb0: 0x3e00008
    ctx->pc = 0x25FFB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25FF78u: goto label_25ff78;
            case 0x25FF9Cu: goto label_25ff9c;
            case 0x25FFB0u: goto label_25ffb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25FFB8u;
}
