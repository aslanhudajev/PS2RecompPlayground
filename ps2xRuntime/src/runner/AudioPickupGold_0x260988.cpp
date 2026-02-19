#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioPickupGold
// Address: 0x260988 - 0x260a10
void AudioPickupGold_0x260988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x260988u;

    // 0x260988: 0x80302d
    ctx->pc = 0x260988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26098c: 0x3c020034
    ctx->pc = 0x26098cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x260990: 0x2442d330
    ctx->pc = 0x260990u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294955824));
    // 0x260994: 0x63880
    ctx->pc = 0x260994u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 6), 2));
    // 0x260998: 0xe21021
    ctx->pc = 0x260998u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x26099c: 0x8c480000
    ctx->pc = 0x26099cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2609a0: 0x3c020034
    ctx->pc = 0x2609a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2609a4: 0x8c43e7f0
    ctx->pc = 0x2609a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x2609a8: 0x2402000c
    ctx->pc = 0x2609a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x2609ac: 0x14620014
    ctx->pc = 0x2609ACu;
    {
        const bool branch_taken_0x2609ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2609B0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 38));
        if (branch_taken_0x2609ac) {
            ctx->pc = 0x260A00u;
            goto label_260a00;
        }
    }
    ctx->pc = 0x2609B4u;
    // 0x2609b4: 0x24020064
    ctx->pc = 0x2609b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 100));
    // 0x2609b8: 0x10a20009
    ctx->pc = 0x2609B8u;
    {
        const bool branch_taken_0x2609b8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x2609BCu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 101));
        if (branch_taken_0x2609b8) {
            ctx->pc = 0x2609E0u;
            goto label_2609e0;
        }
    }
    ctx->pc = 0x2609C0u;
    // 0x2609c0: 0x1040000a
    ctx->pc = 0x2609C0u;
    {
        const bool branch_taken_0x2609c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2609C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 50));
        if (branch_taken_0x2609c0) {
            ctx->pc = 0x2609ECu;
            goto label_2609ec;
        }
    }
    ctx->pc = 0x2609C8u;
    // 0x2609c8: 0x14a20009
    ctx->pc = 0x2609C8u;
    {
        const bool branch_taken_0x2609c8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x2609CCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x2609c8) {
            ctx->pc = 0x2609F0u;
            goto label_2609f0;
        }
    }
    ctx->pc = 0x2609D0u;
    // 0x2609d0: 0x3c020034
    ctx->pc = 0x2609d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2609d4: 0x2442de08
    ctx->pc = 0x2609d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958600));
    // 0x2609d8: 0x10000008
    ctx->pc = 0x2609D8u;
    {
        const bool branch_taken_0x2609d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2609DCu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        if (branch_taken_0x2609d8) {
            ctx->pc = 0x2609FCu;
            goto label_2609fc;
        }
    }
    ctx->pc = 0x2609E0u;
label_2609e0:
    // 0x2609e0: 0x3c030034
    ctx->pc = 0x2609e0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x2609e4: 0x10000003
    ctx->pc = 0x2609E4u;
    {
        const bool branch_taken_0x2609e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2609E8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294958616));
        if (branch_taken_0x2609e4) {
            ctx->pc = 0x2609F4u;
            goto label_2609f4;
        }
    }
    ctx->pc = 0x2609ECu;
label_2609ec:
    // 0x2609ec: 0x3c030034
    ctx->pc = 0x2609ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_2609f0:
    // 0x2609f0: 0x2463de28
    ctx->pc = 0x2609f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294958632));
label_2609f4:
    // 0x2609f4: 0x61080
    ctx->pc = 0x2609f4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x2609f8: 0x431021
    ctx->pc = 0x2609f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2609fc:
    // 0x2609fc: 0x8c440000
    ctx->pc = 0x2609fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_260a00:
    // 0x260a00: 0x100282d
    ctx->pc = 0x260a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260a04: 0x2406007f
    ctx->pc = 0x260a04u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x260a08: 0x8088a4a
    ctx->pc = 0x260A08u;
    ctx->pc = 0x260A0Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 66));
    ctx->pc = 0x222928u;
    AudioSFX2_0x222928(rdram, ctx, runtime); return;
    ctx->pc = 0x260A10u;
}
