#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartEnemyAtkFX
// Address: 0x27f438 - 0x27f490
void StartEnemyAtkFX_0x27f438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27f438u;

    // 0x27f438: 0x27bdfff0
    ctx->pc = 0x27f438u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27f43c: 0xffbf0000
    ctx->pc = 0x27f43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27f440: 0x80302d
    ctx->pc = 0x27f440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f444: 0x3c040034
    ctx->pc = 0x27f444u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x27f448: 0x24844ab8
    ctx->pc = 0x27f448u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19128));
    // 0x27f44c: 0x24a20056
    ctx->pc = 0x27f44cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 86));
    // 0x27f450: 0x2403000c
    ctx->pc = 0x27f450u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
    // 0x27f454: 0x431018
    ctx->pc = 0x27f454u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27f458: 0x441021
    ctx->pc = 0x27f458u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27f45c: 0x8c420000
    ctx->pc = 0x27f45cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27f460: 0x14400003
    ctx->pc = 0x27F460u;
    {
        const bool branch_taken_0x27f460 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27F464u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 86));
        if (branch_taken_0x27f460) {
            ctx->pc = 0x27F470u;
            goto label_27f470;
        }
    }
    ctx->pc = 0x27F468u;
    // 0x27f468: 0x10000006
    ctx->pc = 0x27F468u;
    {
        const bool branch_taken_0x27f468 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27F46Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x27f468) {
            ctx->pc = 0x27F484u;
            goto label_27f484;
        }
    }
    ctx->pc = 0x27F470u;
label_27f470:
    // 0x27f470: 0xc0282d
    ctx->pc = 0x27f470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f474: 0x44806000
    ctx->pc = 0x27f474u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x27f478: 0x302d
    ctx->pc = 0x27f478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f47c: 0xc09f5fa
    ctx->pc = 0x27F47Cu;
    SET_GPR_U32(ctx, 31, 0x27F484u);
    ctx->pc = 0x27F480u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2048));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F484u; }
    }
    if (ctx->pc != 0x27F484u) { return; }
    ctx->pc = 0x27F484u;
label_27f484:
    // 0x27f484: 0xdfbf0000
    ctx->pc = 0x27f484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f488: 0x3e00008
    ctx->pc = 0x27F488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F48Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27F470u: goto label_27f470;
            case 0x27F484u: goto label_27f484;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27F490u;
}
