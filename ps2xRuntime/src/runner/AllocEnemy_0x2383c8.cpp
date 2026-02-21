#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AllocEnemy
// Address: 0x2383c8 - 0x238488
void AllocEnemy_0x2383c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2383c8u;

    // 0x2383c8: 0x27bdff90
    ctx->pc = 0x2383c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2383cc: 0xffbf0060
    ctx->pc = 0x2383ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2383d0: 0xffb10050
    ctx->pc = 0x2383d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2383d4: 0xffb00040
    ctx->pc = 0x2383d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2383d8: 0xa0882d
    ctx->pc = 0x2383d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2383dc: 0x3c02003c
    ctx->pc = 0x2383dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2383e0: 0x8c431bb0
    ctx->pc = 0x2383e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 7088)));
    // 0x2383e4: 0x24650001
    ctx->pc = 0x2383e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2383e8: 0xac451bb0
    ctx->pc = 0x2383e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7088), GPR_U32(ctx, 5));
    // 0x2383ec: 0x28a20009
    ctx->pc = 0x2383ecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 9));
    // 0x2383f0: 0x14400005
    ctx->pc = 0x2383F0u;
    {
        const bool branch_taken_0x2383f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2383F4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2383f0) {
            ctx->pc = 0x238408u;
            goto label_238408;
        }
    }
    ctx->pc = 0x2383F8u;
    // 0x2383f8: 0x3c04003a
    ctx->pc = 0x2383f8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2383fc: 0x24847d70
    ctx->pc = 0x2383fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32112));
    // 0x238400: 0xc0b4976
    ctx->pc = 0x238400u;
    SET_GPR_U32(ctx, 31, 0x238408u);
    ctx->pc = 0x238404u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x2D25D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorf_0x2d25d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238408u; }
    }
    if (ctx->pc != 0x238408u) { return; }
    ctx->pc = 0x238408u;
label_238408:
    // 0x238408: 0x3c03003c
    ctx->pc = 0x238408u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x23840c: 0x24631b90
    ctx->pc = 0x23840cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7056));
    // 0x238410: 0x3c02003c
    ctx->pc = 0x238410u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x238414: 0x8c421bb0
    ctx->pc = 0x238414u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7088)));
    // 0x238418: 0x2442ffff
    ctx->pc = 0x238418u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23841c: 0x21080
    ctx->pc = 0x23841cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x238420: 0x431021
    ctx->pc = 0x238420u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x238424: 0xac500000
    ctx->pc = 0x238424u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x238428: 0x3a0202d
    ctx->pc = 0x238428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23842c: 0x200282d
    ctx->pc = 0x23842cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238430: 0xc08e064
    ctx->pc = 0x238430u;
    SET_GPR_U32(ctx, 31, 0x238438u);
    ctx->pc = 0x238434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x238190u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetEnemyDir_0x238190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238438u; }
    }
    if (ctx->pc != 0x238438u) { return; }
    ctx->pc = 0x238438u;
    // 0x238438: 0x108080
    ctx->pc = 0x238438u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 2));
    // 0x23843c: 0x3c050033
    ctx->pc = 0x23843cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)51 << 16));
    // 0x238440: 0x24a53c08
    ctx->pc = 0x238440u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 15368));
    // 0x238444: 0x3a0202d
    ctx->pc = 0x238444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238448: 0xc080d52
    ctx->pc = 0x238448u;
    SET_GPR_U32(ctx, 31, 0x238450u);
    ctx->pc = 0x23844Cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    ctx->pc = 0x203548u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocModel_0x203548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238450u; }
    }
    if (ctx->pc != 0x238450u) { return; }
    ctx->pc = 0x238450u;
    // 0x238450: 0x3c030033
    ctx->pc = 0x238450u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x238454: 0x24633cc0
    ctx->pc = 0x238454u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15552));
    // 0x238458: 0x2031821
    ctx->pc = 0x238458u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x23845c: 0xac620000
    ctx->pc = 0x23845cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x238460: 0x3c020033
    ctx->pc = 0x238460u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x238464: 0x24423d78
    ctx->pc = 0x238464u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15736));
    // 0x238468: 0x2028021
    ctx->pc = 0x238468u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x23846c: 0x111023
    ctx->pc = 0x23846cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x238470: 0xae020000
    ctx->pc = 0x238470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x238474: 0xdfbf0060
    ctx->pc = 0x238474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x238478: 0xdfb10050
    ctx->pc = 0x238478u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23847c: 0xdfb00040
    ctx->pc = 0x23847cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x238480: 0x3e00008
    ctx->pc = 0x238480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238484u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238408u: goto label_238408;
            default: break;
        }
        return;
    }
    ctx->pc = 0x238488u;
}
