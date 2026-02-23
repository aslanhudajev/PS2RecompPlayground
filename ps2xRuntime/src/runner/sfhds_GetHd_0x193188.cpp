#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfhds_GetHd
// Address: 0x193188 - 0x1931cc
void sfhds_GetHd_0x193188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfhds_GetHd");


    ctx->pc = 0x193188u;

    // 0x193188: 0x27bdffe0
    ctx->pc = 0x193188u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19318c: 0xffb00000
    ctx->pc = 0x19318cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x193190: 0xffbf0010
    ctx->pc = 0x193190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x193194: 0x80802d
    ctx->pc = 0x193194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193198: 0x8e026758
    ctx->pc = 0x193198u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 26456)));
    // 0x19319c: 0x10400007
    ctx->pc = 0x19319Cu;
    {
        const bool branch_taken_0x19319c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1931A0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19319c) {
            ctx->pc = 0x1931BCu;
            goto label_1931bc;
        }
    }
    ctx->pc = 0x1931A4u;
    // 0x1931a4: 0xc0655a2
    ctx->pc = 0x1931A4u;
    SET_GPR_U32(ctx, 31, 0x1931ACu);
    ctx->pc = 0x1931A8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x195688u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFMPS_GetConcatCnt_0x195688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1931ACu; }
        else if (ctx->pc != 0x1931ACu) { ctx->pc = 0x1931ACu; }
    }
    if (ctx->pc != 0x1931ACu) { return; }
    ctx->pc = 0x1931ACu;
    // 0x1931ac: 0x1c400003
    ctx->pc = 0x1931ACu;
    {
        const bool branch_taken_0x1931ac = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1931B0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1931ac) {
            ctx->pc = 0x1931BCu;
            goto label_1931bc;
        }
    }
    ctx->pc = 0x1931B4u;
    // 0x1931b4: 0x8e026758
    ctx->pc = 0x1931b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 26456)));
    // 0x1931b8: 0x2442000c
    ctx->pc = 0x1931b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12));
label_1931bc:
    // 0x1931bc: 0xdfbf0010
    ctx->pc = 0x1931bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1931c0: 0xdfb00000
    ctx->pc = 0x1931c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1931c4: 0x3e00008
    ctx->pc = 0x1931C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1931C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1931BCu: goto label_1931bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1931CCu;
}
