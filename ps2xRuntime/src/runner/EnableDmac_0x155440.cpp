#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: EnableDmac
// Address: 0x155440 - 0x1554a8
void EnableDmac_0x155440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("EnableDmac");


    ctx->pc = 0x155440u;

    // 0x155440: 0x27bdffd0
    ctx->pc = 0x155440u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x155444: 0xffb10010
    ctx->pc = 0x155444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x155448: 0xffbf0020
    ctx->pc = 0x155448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15544c: 0x80882d
    ctx->pc = 0x15544cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155450: 0xffb00000
    ctx->pc = 0x155450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x155454: 0x40106000
    ctx->pc = 0x155454u;
    SET_GPR_U32(ctx, 16, ctx->cop0_status);
    // 0x155458: 0x3c020001
    ctx->pc = 0x155458u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x15545c: 0x2028024
    ctx->pc = 0x15545cu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x155460: 0x12000003
    ctx->pc = 0x155460u;
    {
        const bool branch_taken_0x155460 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x155460) {
            ctx->pc = 0x155470u;
            goto label_155470;
        }
    }
    ctx->pc = 0x155468u;
    // 0x155468: 0xc05725c
    ctx->pc = 0x155468u;
    SET_GPR_U32(ctx, 31, 0x155470u);
    ctx->pc = 0x15C970u;
    {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x15c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155470u; }
        else if (ctx->pc != 0x155470u) { ctx->pc = 0x155470u; }
    }
    if (ctx->pc != 0x155470u) { return; }
    ctx->pc = 0x155470u;
label_155470:
    // 0x155470: 0xc055190
    ctx->pc = 0x155470u;
    SET_GPR_U32(ctx, 31, 0x155478u);
    ctx->pc = 0x155474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x154640u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__EnableDmac_0x154640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155478u; }
        else if (ctx->pc != 0x155478u) { ctx->pc = 0x155478u; }
    }
    if (ctx->pc != 0x155478u) { return; }
    ctx->pc = 0x155478u;
    // 0x155478: 0x40882d
    ctx->pc = 0x155478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15547c: 0xf
    ctx->pc = 0x15547cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x155480: 0x12000004
    ctx->pc = 0x155480u;
    {
        const bool branch_taken_0x155480 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x155484u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x155480) {
            ctx->pc = 0x155494u;
            goto label_155494;
        }
    }
    ctx->pc = 0x155488u;
    // 0x155488: 0xc05726e
    ctx->pc = 0x155488u;
    SET_GPR_U32(ctx, 31, 0x155490u);
    ctx->pc = 0x15C9B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x15c9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155490u; }
        else if (ctx->pc != 0x155490u) { ctx->pc = 0x155490u; }
    }
    if (ctx->pc != 0x155490u) { return; }
    ctx->pc = 0x155490u;
    // 0x155490: 0x220102d
    ctx->pc = 0x155490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_155494:
    // 0x155494: 0xdfbf0020
    ctx->pc = 0x155494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155498: 0xdfb10010
    ctx->pc = 0x155498u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15549c: 0xdfb00000
    ctx->pc = 0x15549cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1554a0: 0x3e00008
    ctx->pc = 0x1554A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1554A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155470u: goto label_155470;
            case 0x155494u: goto label_155494;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1554A8u;
}
