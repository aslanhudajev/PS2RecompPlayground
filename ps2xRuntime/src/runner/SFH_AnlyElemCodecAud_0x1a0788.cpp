#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_AnlyElemCodecAud
// Address: 0x1a0788 - 0x1a07f0
void SFH_AnlyElemCodecAud_0x1a0788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_AnlyElemCodecAud");


    ctx->pc = 0x1a0788u;

    // 0x1a0788: 0x27bdffc0
    ctx->pc = 0x1a0788u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a078c: 0xffb10010
    ctx->pc = 0x1a078cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a0790: 0xffb20020
    ctx->pc = 0x1a0790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a0794: 0x30b100ff
    ctx->pc = 0x1a0794u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 5), 255));
    // 0x1a0798: 0xffb00000
    ctx->pc = 0x1a0798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a079c: 0xc0902d
    ctx->pc = 0x1a079cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a07a0: 0xffbf0030
    ctx->pc = 0x1a07a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a07a4: 0xc0681d0
    ctx->pc = 0x1A07A4u;
    SET_GPR_U32(ctx, 31, 0x1A07ACu);
    ctx->pc = 0x1A07A8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0740u;
    {
        const uint32_t __entryPc = ctx->pc;
        getElemInfPtr_0x1a0740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A07ACu; }
        else if (ctx->pc != 0x1A07ACu) { ctx->pc = 0x1A07ACu; }
    }
    if (ctx->pc != 0x1A07ACu) { return; }
    ctx->pc = 0x1A07ACu;
    // 0x1a07ac: 0x40802d
    ctx->pc = 0x1a07acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a07b0: 0x12000009
    ctx->pc = 0x1A07B0u;
    {
        const bool branch_taken_0x1a07b0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A07B4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a07b0) {
            ctx->pc = 0x1A07D8u;
            goto label_1a07d8;
        }
    }
    ctx->pc = 0x1A07B8u;
    // 0x1a07b8: 0xc0683c8
    ctx->pc = 0x1A07B8u;
    SET_GPR_U32(ctx, 31, 0x1A07C0u);
    ctx->pc = 0x1A07BCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        chkStmId_0x1a0f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A07C0u; }
        else if (ctx->pc != 0x1A07C0u) { ctx->pc = 0x1A07C0u; }
    }
    if (ctx->pc != 0x1A07C0u) { return; }
    ctx->pc = 0x1A07C0u;
    // 0x1a07c0: 0x240300c0
    ctx->pc = 0x1a07c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 192));
    // 0x1a07c4: 0x14430004
    ctx->pc = 0x1A07C4u;
    {
        const bool branch_taken_0x1a07c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1A07C8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a07c4) {
            ctx->pc = 0x1A07D8u;
            goto label_1a07d8;
        }
    }
    ctx->pc = 0x1A07CCu;
    // 0x1a07cc: 0x92030019
    ctx->pc = 0x1a07ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x1a07d0: 0x24020001
    ctx->pc = 0x1a07d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a07d4: 0xae430000
    ctx->pc = 0x1a07d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1a07d8:
    // 0x1a07d8: 0xdfbf0030
    ctx->pc = 0x1a07d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a07dc: 0xdfb20020
    ctx->pc = 0x1a07dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a07e0: 0xdfb10010
    ctx->pc = 0x1a07e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a07e4: 0xdfb00000
    ctx->pc = 0x1a07e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a07e8: 0x3e00008
    ctx->pc = 0x1A07E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A07ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A07D8u: goto label_1a07d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A07F0u;
}
