#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _alalcAlloc
// Address: 0x163d08 - 0x163d70
void _alalcAlloc_0x163d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_alalcAlloc");


    ctx->pc = 0x163d08u;

    // 0x163d08: 0x27bdfff0
    ctx->pc = 0x163d08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x163d0c: 0x80382d
    ctx->pc = 0x163d0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163d10: 0xffbf0000
    ctx->pc = 0x163d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x163d14: 0x50c00001
    ctx->pc = 0x163D14u;
    {
        const bool branch_taken_0x163d14 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x163d14) {
            ctx->pc = 0x163D18u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x163D1Cu;
            goto label_163d1c;
        }
    }
    ctx->pc = 0x163D1Cu;
label_163d1c:
    // 0x163d1c: 0x8ce20008
    ctx->pc = 0x163d1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x163d20: 0x8ce40004
    ctx->pc = 0x163d20u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x163d24: 0x461021
    ctx->pc = 0x163d24u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x163d28: 0x8ce30000
    ctx->pc = 0x163d28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x163d2c: 0x2442ffff
    ctx->pc = 0x163d2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x163d30: 0x46001b
    ctx->pc = 0x163d30u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 2) / divisor; ctx->hi = GPR_U32(ctx, 6) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,2); } }
    // 0x163d34: 0x641821
    ctx->pc = 0x163d34u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x163d38: 0x1012
    ctx->pc = 0x163d38u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x163d3c: 0x461018
    ctx->pc = 0x163d3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x163d40: 0x452021
    ctx->pc = 0x163d40u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x163d44: 0x64182b
    ctx->pc = 0x163d44u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x163d48: 0x54600003
    ctx->pc = 0x163D48u;
    {
        const bool branch_taken_0x163d48 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x163d48) {
            ctx->pc = 0x163D4Cu;
            SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
            ctx->pc = 0x163D58u;
            goto label_163d58;
        }
    }
    ctx->pc = 0x163D50u;
    // 0x163d50: 0x10000004
    ctx->pc = 0x163D50u;
    {
        const bool branch_taken_0x163d50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x163D54u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
        if (branch_taken_0x163d50) {
            ctx->pc = 0x163D64u;
            goto label_163d64;
        }
    }
    ctx->pc = 0x163D58u;
label_163d58:
    // 0x163d58: 0xc059112
    ctx->pc = 0x163D58u;
    SET_GPR_U32(ctx, 31, 0x163D60u);
    ctx->pc = 0x163D5Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294938008));
    ctx->pc = 0x164448u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x164448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163D60u; }
        else if (ctx->pc != 0x163D60u) { ctx->pc = 0x163D60u; }
    }
    if (ctx->pc != 0x163D60u) { return; }
    ctx->pc = 0x163D60u;
    // 0x163d60: 0x102d
    ctx->pc = 0x163d60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163d64:
    // 0x163d64: 0xdfbf0000
    ctx->pc = 0x163d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163d68: 0x3e00008
    ctx->pc = 0x163D68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163D6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163D1Cu: goto label_163d1c;
            case 0x163D58u: goto label_163d58;
            case 0x163D64u: goto label_163d64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x163D70u;
}
