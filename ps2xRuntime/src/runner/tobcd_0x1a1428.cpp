#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: tobcd
// Address: 0x1a1428 - 0x1a148c
void tobcd_0x1a1428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("tobcd");


    ctx->pc = 0x1a1428u;

    // 0x1a1428: 0x27bdffe0
    ctx->pc = 0x1a1428u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a142c: 0xffb00000
    ctx->pc = 0x1a142cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a1430: 0x309000ff
    ctx->pc = 0x1a1430u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 4), 255));
    // 0x1a1434: 0x2e020064
    ctx->pc = 0x1a1434u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 100));
    // 0x1a1438: 0x14400007
    ctx->pc = 0x1A1438u;
    {
        const bool branch_taken_0x1a1438 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A143Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x1a1438) {
            ctx->pc = 0x1A1458u;
            goto label_1a1458;
        }
    }
    ctx->pc = 0x1A1440u;
    // 0x1a1440: 0x3c04002c
    ctx->pc = 0x1a1440u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1a1444: 0x3c06002c
    ctx->pc = 0x1a1444u;
    SET_GPR_U32(ctx, 6, ((uint32_t)44 << 16));
    // 0x1a1448: 0x2484d820
    ctx->pc = 0x1a1448u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957088));
    // 0x1a144c: 0x24c6d830
    ctx->pc = 0x1a144cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294957104));
    // 0x1a1450: 0xc05003c
    ctx->pc = 0x1A1450u;
    SET_GPR_U32(ctx, 31, 0x1A1458u);
    ctx->pc = 0x1A1454u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 281));
    ctx->pc = 0x1400F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___assert_0x1400f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1458u; }
        else if (ctx->pc != 0x1A1458u) { ctx->pc = 0x1A1458u; }
    }
    if (ctx->pc != 0x1A1458u) { return; }
    ctx->pc = 0x1A1458u;
label_1a1458:
    // 0x1a1458: 0x2403000a
    ctx->pc = 0x1a1458u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a145c: 0x24040006
    ctx->pc = 0x1a145cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a1460: 0x203001b
    ctx->pc = 0x1a1460u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 16) / divisor; ctx->hi = GPR_U32(ctx, 3) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,16); } }
    // 0x1a1464: 0x50600001
    ctx->pc = 0x1A1464u;
    {
        const bool branch_taken_0x1a1464 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a1464) {
            ctx->pc = 0x1A1468u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1A146Cu;
            goto label_1a146c;
        }
    }
    ctx->pc = 0x1A146Cu;
label_1a146c:
    // 0x1a146c: 0xdfbf0010
    ctx->pc = 0x1a146cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1470: 0x1012
    ctx->pc = 0x1a1470u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x1a1474: 0x441818
    ctx->pc = 0x1a1474u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1a1478: 0x701021
    ctx->pc = 0x1a1478u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a147c: 0xdfb00000
    ctx->pc = 0x1a147cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1480: 0x304200ff
    ctx->pc = 0x1a1480u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1a1484: 0x3e00008
    ctx->pc = 0x1A1484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1488u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A1458u: goto label_1a1458;
            case 0x1A146Cu: goto label_1a146c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A148Cu;
}
