#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbGsSyncPath
// Address: 0x2a80b8 - 0x2a8138
void pbGsSyncPath_0x2a80b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a80b8u;

    // 0x2a80b8: 0x27bdffd0
    ctx->pc = 0x2a80b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a80bc: 0xffbf0020
    ctx->pc = 0x2a80bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a80c0: 0xffbe0010
    ctx->pc = 0x2a80c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x2a80c4: 0x3a0f02d
    ctx->pc = 0x2a80c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a80c8: 0xafc40000
    ctx->pc = 0x2a80c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x2a80cc: 0xafc50004
    ctx->pc = 0x2a80ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x2a80d0: 0xafc60008
    ctx->pc = 0x2a80d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x2a80d4: 0x3c020036
    ctx->pc = 0x2a80d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a80d8: 0x8c42dee4
    ctx->pc = 0x2a80d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958820)));
    // 0x2a80dc: 0x10400008
    ctx->pc = 0x2A80DCu;
    {
        const bool branch_taken_0x2a80dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a80dc) {
            ctx->pc = 0x2A8100u;
            goto label_2a8100;
        }
    }
    ctx->pc = 0x2A80E4u;
    // 0x2a80e4: 0x8fc20000
    ctx->pc = 0x2a80e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a80e8: 0x14400005
    ctx->pc = 0x2A80E8u;
    {
        const bool branch_taken_0x2a80e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a80e8) {
            ctx->pc = 0x2A8100u;
            goto label_2a8100;
        }
    }
    ctx->pc = 0x2A80F0u;
    // 0x2a80f0: 0x240401b6
    ctx->pc = 0x2a80f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 438));
    // 0x2a80f4: 0x8fc50008
    ctx->pc = 0x2a80f4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a80f8: 0xc0a9fe2
    ctx->pc = 0x2A80F8u;
    SET_GPR_U32(ctx, 31, 0x2A8100u);
    ctx->pc = 0x2A7F88u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbPathWait_0x2a7f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8100u; }
    }
    if (ctx->pc != 0x2A8100u) { return; }
    ctx->pc = 0x2A8100u;
label_2a8100:
    // 0x2a8100: 0x8fc40000
    ctx->pc = 0x2a8100u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a8104: 0x8fc50004
    ctx->pc = 0x2a8104u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a8108: 0xc0aa04e
    ctx->pc = 0x2A8108u;
    SET_GPR_U32(ctx, 31, 0x2A8110u);
    ctx->pc = 0x2A8138u;
    {
        const uint32_t __entryPc = ctx->pc;
        call_sceGsSyncPath_0x2a8138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8110u; }
    }
    if (ctx->pc != 0x2A8110u) { return; }
    ctx->pc = 0x2A8110u;
    // 0x2a8110: 0x40182d
    ctx->pc = 0x2a8110u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8114: 0x60102d
    ctx->pc = 0x2a8114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8118: 0x10000001
    ctx->pc = 0x2A8118u;
    {
        const bool branch_taken_0x2a8118 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a8118) {
            ctx->pc = 0x2A8120u;
            goto label_2a8120;
        }
    }
    ctx->pc = 0x2A8120u;
label_2a8120:
    // 0x2a8120: 0x3c0e82d
    ctx->pc = 0x2a8120u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8124: 0xdfbf0020
    ctx->pc = 0x2a8124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8128: 0xdfbe0010
    ctx->pc = 0x2a8128u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a812c: 0x27bd0030
    ctx->pc = 0x2a812cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a8130: 0x3e00008
    ctx->pc = 0x2A8130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A8100u: goto label_2a8100;
            case 0x2A8120u: goto label_2a8120;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A8138u;
}
