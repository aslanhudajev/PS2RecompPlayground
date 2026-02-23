#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlDmaSendToMFifo
// Address: 0x1a54b0 - 0x1a5554
void nlDmaSendToMFifo_0x1a54b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlDmaSendToMFifo");


    ctx->pc = 0x1a54b0u;

    // 0x1a54b0: 0x8f8289b4
    ctx->pc = 0x1a54b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937012)));
    // 0x1a54b4: 0x14400003
    ctx->pc = 0x1A54B4u;
    {
        const bool branch_taken_0x1a54b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a54b4) {
            ctx->pc = 0x1A54C4u;
            goto label_1a54c4;
        }
    }
    ctx->pc = 0x1A54BCu;
label_1a54bc:
    // 0x1a54bc: 0x1000ffff
    ctx->pc = 0x1A54BCu;
    {
        const bool branch_taken_0x1a54bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a54bc) {
            ctx->pc = 0x1A54BCu;
            goto label_1a54bc;
        }
    }
    ctx->pc = 0x1A54C4u;
label_1a54c4:
    // 0x1a54c4: 0x8f8389b0
    ctx->pc = 0x1a54c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937008)));
    // 0x1a54c8: 0x24020001
    ctx->pc = 0x1a54c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a54cc: 0x14620003
    ctx->pc = 0x1A54CCu;
    {
        const bool branch_taken_0x1a54cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1a54cc) {
            ctx->pc = 0x1A54DCu;
            goto label_1a54dc;
        }
    }
    ctx->pc = 0x1A54D4u;
label_1a54d4:
    // 0x1a54d4: 0x1000ffff
    ctx->pc = 0x1A54D4u;
    {
        const bool branch_taken_0x1a54d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a54d4) {
            ctx->pc = 0x1A54D4u;
            goto label_1a54d4;
        }
    }
    ctx->pc = 0x1A54DCu;
label_1a54dc:
    // 0x1a54dc: 0x8f8289c0
    ctx->pc = 0x1a54dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937024)));
    // 0x1a54e0: 0x3c011001
    ctx->pc = 0x1a54e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a54e4: 0x42900
    ctx->pc = 0x1a54e4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a54e8: 0xac22d080
    ctx->pc = 0x1a54e8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955136), GPR_U32(ctx, 2)); // MMIO: 0x1000d080
    // 0x1a54ec: 0x3c011001
    ctx->pc = 0x1a54ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a54f0: 0xac24d020
    ctx->pc = 0x1a54f0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955040), GPR_U32(ctx, 4)); // MMIO: 0x1000d020
    // 0x1a54f4: 0x8f8689bc
    ctx->pc = 0x1a54f4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294937020)));
    // 0x1a54f8: 0x24c4fff0
    ctx->pc = 0x1a54f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x1a54fc: 0x3c011001
    ctx->pc = 0x1a54fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
label_1a5500:
    // 0x1a5500: 0x8c229030
    ctx->pc = 0x1a5500u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294938672))); // MMIO: 0x10009030
    // 0x1a5504: 0x3c011001
    ctx->pc = 0x1a5504u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a5508: 0x8c23d010
    ctx->pc = 0x1a5508u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955024))); // MMIO: 0x1000d010
    // 0x1a550c: 0x54430003
    ctx->pc = 0x1A550Cu;
    {
        const bool branch_taken_0x1a550c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1a550c) {
            ctx->pc = 0x1A5510u;
            SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
            ctx->pc = 0x1A551Cu;
            goto label_1a551c;
        }
    }
    ctx->pc = 0x1A5514u;
    // 0x1a5514: 0x10000003
    ctx->pc = 0x1A5514u;
    {
        const bool branch_taken_0x1a5514 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5518u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a5514) {
            ctx->pc = 0x1A5524u;
            goto label_1a5524;
        }
    }
    ctx->pc = 0x1A551Cu;
label_1a551c:
    // 0x1a551c: 0x431023
    ctx->pc = 0x1a551cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a5520: 0x821024
    ctx->pc = 0x1a5520u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1a5524:
    // 0x1a5524: 0xa2082a
    ctx->pc = 0x1a5524u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x1a5528: 0x1020fff5
    ctx->pc = 0x1A5528u;
    {
        const bool branch_taken_0x1a5528 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A552Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
        if (branch_taken_0x1a5528) {
            ctx->pc = 0x1A5500u;
            goto label_1a5500;
        }
    }
    ctx->pc = 0x1A5530u;
    // 0x1a5530: 0x3c011001
    ctx->pc = 0x1a5530u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a5534: 0x8c24d000
    ctx->pc = 0x1a5534u;
    SET_GPR_U32(ctx, 4, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1a5538: 0x2403fff2
    ctx->pc = 0x1a5538u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967282));
    // 0x1a553c: 0x70001628
    ctx->pc = 0x1a553cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a5540: 0x831824
    ctx->pc = 0x1a5540u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a5544: 0x34630100
    ctx->pc = 0x1a5544u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 256));
    // 0x1a5548: 0x3c011001
    ctx->pc = 0x1a5548u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a554c: 0x3e00008
    ctx->pc = 0x1A554Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5550u;
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A54BCu: goto label_1a54bc;
            case 0x1A54C4u: goto label_1a54c4;
            case 0x1A54D4u: goto label_1a54d4;
            case 0x1A54DCu: goto label_1a54dc;
            case 0x1A5500u: goto label_1a5500;
            case 0x1A551Cu: goto label_1a551c;
            case 0x1A5524u: goto label_1a5524;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5554u;
}
