#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlCharacterPost
// Address: 0x1ab830 - 0x1ab8ac
void nlCharacterPost_0x1ab830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlCharacterPost");


    ctx->pc = 0x1ab830u;

    // 0x1ab830: 0x8f848a5c
    ctx->pc = 0x1ab830u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x1ab834: 0x3c0250ab
    ctx->pc = 0x1ab834u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20651 << 16));
    // 0x1ab838: 0x34424000
    ctx->pc = 0x1ab838u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16384));
    // 0x1ab83c: 0x2183c
    ctx->pc = 0x1ab83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ab840: 0x34028000
    ctx->pc = 0x1ab840u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
    // 0x1ab844: 0x431025
    ctx->pc = 0x1ab844u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ab848: 0x822825
    ctx->pc = 0x1ab848u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ab84c: 0x8f848a64
    ctx->pc = 0x1ab84cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x1ab850: 0x3c020005
    ctx->pc = 0x1ab850u;
    SET_GPR_U32(ctx, 2, ((uint32_t)5 << 16));
    // 0x1ab854: 0x34433536
    ctx->pc = 0x1ab854u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 13622));
    // 0x1ab858: 0xfc850080
    ctx->pc = 0x1ab858u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 128), GPR_U64(ctx, 5));
    // 0x1ab85c: 0x8f828a64
    ctx->pc = 0x1ab85cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x1ab860: 0xfc430088
    ctx->pc = 0x1ab860u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 136), GPR_U64(ctx, 3));
    // 0x1ab864: 0x8f828a5c
    ctx->pc = 0x1ab864u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x1ab868: 0x8f838a64
    ctx->pc = 0x1ab868u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x1ab86c: 0x2444ffff
    ctx->pc = 0x1ab86cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ab870: 0x41080
    ctx->pc = 0x1ab870u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ab874: 0x441021
    ctx->pc = 0x1ab874u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ab878: 0x21100
    ctx->pc = 0x1ab878u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ab87c: 0x244200e0
    ctx->pc = 0x1ab87cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 224));
    // 0x1ab880: 0x22102
    ctx->pc = 0x1ab880u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 2), 4));
    // 0x1ab884: 0x8c620000
    ctx->pc = 0x1ab884u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ab888: 0x2486ffff
    ctx->pc = 0x1ab888u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1ab88c: 0x2485fffe
    ctx->pc = 0x1ab88cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x1ab890: 0x461025
    ctx->pc = 0x1ab890u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1ab894: 0xac620000
    ctx->pc = 0x1ab894u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ab898: 0x8f838a64
    ctx->pc = 0x1ab898u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x1ab89c: 0x8c62001c
    ctx->pc = 0x1ab89cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1ab8a0: 0x451025
    ctx->pc = 0x1ab8a0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ab8a4: 0x806952c
    ctx->pc = 0x1AB8A4u;
    ctx->pc = 0x1AB8A8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x1A54B0u;
    nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1AB8ACu;
}
