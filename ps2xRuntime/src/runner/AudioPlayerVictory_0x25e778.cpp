#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioPlayerVictory
// Address: 0x25e778 - 0x25e7ec
void AudioPlayerVictory_0x25e778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25e778u;

    // 0x25e778: 0x27bdffd0
    ctx->pc = 0x25e778u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25e77c: 0xffbf0020
    ctx->pc = 0x25e77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25e780: 0xffb10010
    ctx->pc = 0x25e780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25e784: 0xffb00000
    ctx->pc = 0x25e784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25e788: 0x24032b00
    ctx->pc = 0x25e788u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x25e78c: 0x831818
    ctx->pc = 0x25e78cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25e790: 0x3c020032
    ctx->pc = 0x25e790u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25e794: 0x24421bc0
    ctx->pc = 0x25e794u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x25e798: 0x628821
    ctx->pc = 0x25e798u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25e79c: 0x3c030034
    ctx->pc = 0x25e79cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x25e7a0: 0x2463d710
    ctx->pc = 0x25e7a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294956816));
    // 0x25e7a4: 0x8e220008
    ctx->pc = 0x25e7a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x25e7a8: 0x21080
    ctx->pc = 0x25e7a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x25e7ac: 0x431021
    ctx->pc = 0x25e7acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25e7b0: 0xc0975da
    ctx->pc = 0x25E7B0u;
    SET_GPR_U32(ctx, 31, 0x25E7B8u);
    ctx->pc = 0x25E7B4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x25D768u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_chicken_0x25d768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E7B8u; }
    }
    if (ctx->pc != 0x25E7B8u) { return; }
    ctx->pc = 0x25E7B8u;
    // 0x25e7b8: 0x14400008
    ctx->pc = 0x25E7B8u;
    {
        const bool branch_taken_0x25e7b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25E7BCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x25e7b8) {
            ctx->pc = 0x25E7DCu;
            goto label_25e7dc;
        }
    }
    ctx->pc = 0x25E7C0u;
    // 0x25e7c0: 0x6000006
    ctx->pc = 0x25E7C0u;
    {
        const bool branch_taken_0x25e7c0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x25E7C4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25e7c0) {
            ctx->pc = 0x25E7DCu;
            goto label_25e7dc;
        }
    }
    ctx->pc = 0x25E7C8u;
    // 0x25e7c8: 0x26250050
    ctx->pc = 0x25e7c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 80));
    // 0x25e7cc: 0x240600ff
    ctx->pc = 0x25e7ccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 255));
    // 0x25e7d0: 0xc088a26
    ctx->pc = 0x25E7D0u;
    SET_GPR_U32(ctx, 31, 0x25E7D8u);
    ctx->pc = 0x25E7D4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x222898u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSFX_0x222898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E7D8u; }
    }
    if (ctx->pc != 0x25E7D8u) { return; }
    ctx->pc = 0x25E7D8u;
    // 0x25e7d8: 0xdfbf0020
    ctx->pc = 0x25e7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25e7dc:
    // 0x25e7dc: 0xdfb10010
    ctx->pc = 0x25e7dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e7e0: 0xdfb00000
    ctx->pc = 0x25e7e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e7e4: 0x3e00008
    ctx->pc = 0x25E7E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E7E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25E7DCu: goto label_25e7dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25E7ECu;
}
