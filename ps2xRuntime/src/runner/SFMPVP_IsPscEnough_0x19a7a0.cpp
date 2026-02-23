#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPVP_IsPscEnough
// Address: 0x19a7a0 - 0x19a7f0
void SFMPVP_IsPscEnough_0x19a7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPVP_IsPscEnough");


    ctx->pc = 0x19a7a0u;

    // 0x19a7a0: 0x27bdffe0
    ctx->pc = 0x19a7a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19a7a4: 0xffb00000
    ctx->pc = 0x19a7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19a7a8: 0xffbf0010
    ctx->pc = 0x19a7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19a7ac: 0xc066774
    ctx->pc = 0x19A7ACu;
    SET_GPR_U32(ctx, 31, 0x19A7B4u);
    ctx->pc = 0x19A7B0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x199DD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFMPVP_IsSceMpegUsed_0x199dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A7B4u; }
        else if (ctx->pc != 0x19A7B4u) { ctx->pc = 0x19A7B4u; }
    }
    if (ctx->pc != 0x19A7B4u) { return; }
    ctx->pc = 0x19A7B4u;
    // 0x19a7b4: 0x10400005
    ctx->pc = 0x19A7B4u;
    {
        const bool branch_taken_0x19a7b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19A7B8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 15632));
        if (branch_taken_0x19a7b4) {
            ctx->pc = 0x19A7CCu;
            goto label_19a7cc;
        }
    }
    ctx->pc = 0x19A7BCu;
    // 0x19a7bc: 0x24050001
    ctx->pc = 0x19a7bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a7c0: 0x8c82001c
    ctx->pc = 0x19a7c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x19a7c4: 0x54450003
    ctx->pc = 0x19A7C4u;
    {
        const bool branch_taken_0x19a7c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x19a7c4) {
            ctx->pc = 0x19A7C8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->pc = 0x19A7D4u;
            goto label_19a7d4;
        }
    }
    ctx->pc = 0x19A7CCu;
label_19a7cc:
    // 0x19a7cc: 0x10000004
    ctx->pc = 0x19A7CCu;
    {
        const bool branch_taken_0x19a7cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19A7D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19a7cc) {
            ctx->pc = 0x19A7E0u;
            goto label_19a7e0;
        }
    }
    ctx->pc = 0x19A7D4u;
label_19a7d4:
    // 0x19a7d4: 0xa0102d
    ctx->pc = 0x19a7d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a7d8: 0x28630003
    ctx->pc = 0x19a7d8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 3));
    // 0x19a7dc: 0x3100b
    ctx->pc = 0x19a7dcu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
label_19a7e0:
    // 0x19a7e0: 0xdfbf0010
    ctx->pc = 0x19a7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a7e4: 0xdfb00000
    ctx->pc = 0x19a7e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a7e8: 0x3e00008
    ctx->pc = 0x19A7E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A7ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19A7CCu: goto label_19a7cc;
            case 0x19A7D4u: goto label_19a7d4;
            case 0x19A7E0u: goto label_19a7e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19A7F0u;
}
