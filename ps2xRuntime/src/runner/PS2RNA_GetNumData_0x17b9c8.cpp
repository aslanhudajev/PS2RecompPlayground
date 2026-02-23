#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PS2RNA_GetNumData
// Address: 0x17b9c8 - 0x17ba00
void PS2RNA_GetNumData_0x17b9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PS2RNA_GetNumData");


    ctx->pc = 0x17b9c8u;

label_17b9c8:
    // 0x17b9c8: 0x27bdfff0
    ctx->pc = 0x17b9c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_17b9cc:
    // 0x17b9cc: 0xffbf0000
    ctx->pc = 0x17b9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17b9d0:
    // 0x17b9d0: 0x8c820008
    ctx->pc = 0x17b9d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_17b9d4:
    // 0x17b9d4: 0x8c440008
    ctx->pc = 0x17b9d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_17b9d8:
    // 0x17b9d8: 0x8c830000
    ctx->pc = 0x17b9d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17b9dc:
    // 0x17b9dc: 0x8c620024
    ctx->pc = 0x17b9dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_17b9e0:
    // 0x17b9e0: 0x40f809
label_17b9e4:
    if (ctx->pc == 0x17B9E4u) {
        ctx->pc = 0x17B9E4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17B9E8u;
        goto label_17b9e8;
    }
    ctx->pc = 0x17B9E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17B9E8u);
        ctx->pc = 0x17B9E4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B9C8u: goto label_17b9c8;
            case 0x17B9CCu: goto label_17b9cc;
            case 0x17B9D0u: goto label_17b9d0;
            case 0x17B9D4u: goto label_17b9d4;
            case 0x17B9D8u: goto label_17b9d8;
            case 0x17B9DCu: goto label_17b9dc;
            case 0x17B9E0u: goto label_17b9e0;
            case 0x17B9E4u: goto label_17b9e4;
            case 0x17B9E8u: goto label_17b9e8;
            case 0x17B9ECu: goto label_17b9ec;
            case 0x17B9F0u: goto label_17b9f0;
            case 0x17B9F4u: goto label_17b9f4;
            case 0x17B9F8u: goto label_17b9f8;
            case 0x17B9FCu: goto label_17b9fc;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17B9E8u; }
            if (ctx->pc != 0x17B9E8u) { return; }
        }
    }
    ctx->pc = 0x17B9E8u;
label_17b9e8:
    // 0x17b9e8: 0x24034000
    ctx->pc = 0x17b9e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16384));
label_17b9ec:
    // 0x17b9ec: 0xdfbf0000
    ctx->pc = 0x17b9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17b9f0:
    // 0x17b9f0: 0x621823
    ctx->pc = 0x17b9f0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_17b9f4:
    // 0x17b9f4: 0x31042
    ctx->pc = 0x17b9f4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 1));
label_17b9f8:
    // 0x17b9f8: 0x3e00008
label_17b9fc:
    if (ctx->pc == 0x17B9FCu) {
        ctx->pc = 0x17B9FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x17BA00u;
        goto label_fallthrough_0x17b9f8;
    }
    ctx->pc = 0x17B9F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B9FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B9C8u: goto label_17b9c8;
            case 0x17B9CCu: goto label_17b9cc;
            case 0x17B9D0u: goto label_17b9d0;
            case 0x17B9D4u: goto label_17b9d4;
            case 0x17B9D8u: goto label_17b9d8;
            case 0x17B9DCu: goto label_17b9dc;
            case 0x17B9E0u: goto label_17b9e0;
            case 0x17B9E4u: goto label_17b9e4;
            case 0x17B9E8u: goto label_17b9e8;
            case 0x17B9ECu: goto label_17b9ec;
            case 0x17B9F0u: goto label_17b9f0;
            case 0x17B9F4u: goto label_17b9f4;
            case 0x17B9F8u: goto label_17b9f8;
            case 0x17B9FCu: goto label_17b9fc;
            default: break;
        }
        return;
    }
label_fallthrough_0x17b9f8:
    ctx->pc = 0x17BA00u;
}
