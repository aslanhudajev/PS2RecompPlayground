#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfply_AdjustSyncMode
// Address: 0x19b090 - 0x19b11c
void sfply_AdjustSyncMode_0x19b090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfply_AdjustSyncMode");


    ctx->pc = 0x19b090u;

    // 0x19b090: 0x27bdffd0
    ctx->pc = 0x19b090u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19b094: 0xffb10010
    ctx->pc = 0x19b094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19b098: 0xffb00000
    ctx->pc = 0x19b098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19b09c: 0x80882d
    ctx->pc = 0x19b09cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b0a0: 0xffbf0020
    ctx->pc = 0x19b0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19b0a4: 0x26300994
    ctx->pc = 0x19b0a4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 2452));
    // 0x19b0a8: 0x8e020018
    ctx->pc = 0x19b0a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x19b0ac: 0x54400009
    ctx->pc = 0x19B0ACu;
    {
        const bool branch_taken_0x19b0ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x19b0ac) {
            ctx->pc = 0x19B0B0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->pc = 0x19B0D4u;
            goto label_19b0d4;
        }
    }
    ctx->pc = 0x19B0B4u;
    // 0x19b0b4: 0x8e03003c
    ctx->pc = 0x19b0b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x19b0b8: 0x24020002
    ctx->pc = 0x19b0b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b0bc: 0x54620005
    ctx->pc = 0x19B0BCu;
    {
        const bool branch_taken_0x19b0bc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x19b0bc) {
            ctx->pc = 0x19B0C0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->pc = 0x19B0D4u;
            goto label_19b0d4;
        }
    }
    ctx->pc = 0x19B0C4u;
    // 0x19b0c4: 0x2405000f
    ctx->pc = 0x19b0c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    // 0x19b0c8: 0xc067464
    ctx->pc = 0x19B0C8u;
    SET_GPR_U32(ctx, 31, 0x19B0D0u);
    ctx->pc = 0x19B0CCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19D190u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_SetCond_0x19d190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B0D0u; }
        else if (ctx->pc != 0x19B0D0u) { ctx->pc = 0x19B0D0u; }
    }
    if (ctx->pc != 0x19B0D0u) { return; }
    ctx->pc = 0x19B0D0u;
    // 0x19b0d0: 0x8e020014
    ctx->pc = 0x19b0d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_19b0d4:
    // 0x19b0d4: 0x1440000d
    ctx->pc = 0x19B0D4u;
    {
        const bool branch_taken_0x19b0d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19B0D8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19b0d4) {
            ctx->pc = 0x19B10Cu;
            goto label_19b10c;
        }
    }
    ctx->pc = 0x19B0DCu;
    // 0x19b0dc: 0x8e03003c
    ctx->pc = 0x19b0dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x19b0e0: 0x24020001
    ctx->pc = 0x19b0e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b0e4: 0x5462000a
    ctx->pc = 0x19B0E4u;
    {
        const bool branch_taken_0x19b0e4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x19b0e4) {
            ctx->pc = 0x19B0E8u;
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x19B110u;
            goto label_19b110;
        }
    }
    ctx->pc = 0x19B0ECu;
    // 0x19b0ec: 0x220202d
    ctx->pc = 0x19b0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b0f0: 0xdfbf0020
    ctx->pc = 0x19b0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b0f4: 0xdfb10010
    ctx->pc = 0x19b0f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b0f8: 0x2405000f
    ctx->pc = 0x19b0f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    // 0x19b0fc: 0xdfb00000
    ctx->pc = 0x19b0fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b100: 0x24060002
    ctx->pc = 0x19b100u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b104: 0x8067464
    ctx->pc = 0x19B104u;
    ctx->pc = 0x19B108u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x19D190u;
    SFSET_SetCond_0x19d190(rdram, ctx, runtime); return;
    ctx->pc = 0x19B10Cu;
label_19b10c:
    // 0x19b10c: 0xdfb10010
    ctx->pc = 0x19b10cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19b110:
    // 0x19b110: 0xdfb00000
    ctx->pc = 0x19b110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b114: 0x3e00008
    ctx->pc = 0x19B114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B118u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19B0D4u: goto label_19b0d4;
            case 0x19B10Cu: goto label_19b10c;
            case 0x19B110u: goto label_19b110;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19B11Cu;
}
