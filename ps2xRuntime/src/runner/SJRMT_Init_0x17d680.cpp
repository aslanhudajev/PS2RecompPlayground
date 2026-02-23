#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJRMT_Init
// Address: 0x17d680 - 0x17d6c8
void SJRMT_Init_0x17d680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJRMT_Init");


    ctx->pc = 0x17d680u;

    // 0x17d680: 0x27bdffe0
    ctx->pc = 0x17d680u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17d684: 0x3c020024
    ctx->pc = 0x17d684u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x17d688: 0xffb00000
    ctx->pc = 0x17d688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17d68c: 0x3c100024
    ctx->pc = 0x17d68cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)36 << 16));
    // 0x17d690: 0xffbf0010
    ctx->pc = 0x17d690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17d694: 0x8e040964
    ctx->pc = 0x17d694u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2404)));
    // 0x17d698: 0x8c430960
    ctx->pc = 0x17d698u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 2400)));
    // 0x17d69c: 0x14800005
    ctx->pc = 0x17D69Cu;
    {
        const bool branch_taken_0x17d69c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x17D6A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x17d69c) {
            ctx->pc = 0x17D6B4u;
            goto label_17d6b4;
        }
    }
    ctx->pc = 0x17D6A4u;
    // 0x17d6a4: 0xc05dc8a
    ctx->pc = 0x17D6A4u;
    SET_GPR_U32(ctx, 31, 0x17D6ACu);
    ctx->pc = 0x177228u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTX_Init_0x177228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D6ACu; }
        else if (ctx->pc != 0x17D6ACu) { ctx->pc = 0x17D6ACu; }
    }
    if (ctx->pc != 0x17D6ACu) { return; }
    ctx->pc = 0x17D6ACu;
    // 0x17d6ac: 0x8e040964
    ctx->pc = 0x17d6acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2404)));
    // 0x17d6b0: 0x24820001
    ctx->pc = 0x17d6b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
label_17d6b4:
    // 0x17d6b4: 0xdfbf0010
    ctx->pc = 0x17d6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d6b8: 0xae020964
    ctx->pc = 0x17d6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2404), GPR_U32(ctx, 2));
    // 0x17d6bc: 0xdfb00000
    ctx->pc = 0x17d6bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d6c0: 0x3e00008
    ctx->pc = 0x17D6C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D6C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17D6B4u: goto label_17d6b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17D6C8u;
}
