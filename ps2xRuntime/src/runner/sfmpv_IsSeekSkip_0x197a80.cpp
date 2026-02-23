#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_IsSeekSkip
// Address: 0x197a80 - 0x197acc
void sfmpv_IsSeekSkip_0x197a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_IsSeekSkip");


    ctx->pc = 0x197a80u;

    // 0x197a80: 0x27bdfff0
    ctx->pc = 0x197a80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x197a84: 0x2485675c
    ctx->pc = 0x197a84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 26460));
    // 0x197a88: 0xffbf0000
    ctx->pc = 0x197a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x197a8c: 0x24860b24
    ctx->pc = 0x197a8cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 2852));
    // 0x197a90: 0x8ca30004
    ctx->pc = 0x197a90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x197a94: 0x460000a
    ctx->pc = 0x197A94u;
    {
        const bool branch_taken_0x197a94 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x197A98u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x197a94) {
            ctx->pc = 0x197AC0u;
            goto label_197ac0;
        }
    }
    ctx->pc = 0x197A9Cu;
    // 0x197a9c: 0x8c820b74
    ctx->pc = 0x197a9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 2932)));
    // 0x197aa0: 0x14400007
    ctx->pc = 0x197AA0u;
    {
        const bool branch_taken_0x197aa0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x197AA4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x197aa0) {
            ctx->pc = 0x197AC0u;
            goto label_197ac0;
        }
    }
    ctx->pc = 0x197AA8u;
    // 0x197aa8: 0x8cc70024
    ctx->pc = 0x197aa8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x197aac: 0x60202d
    ctx->pc = 0x197aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197ab0: 0x8ca50008
    ctx->pc = 0x197ab0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x197ab4: 0xc05f946
    ctx->pc = 0x197AB4u;
    SET_GPR_U32(ctx, 31, 0x197ABCu);
    ctx->pc = 0x197AB8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 32)));
    ctx->pc = 0x17E518u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_CmpTime_0x17e518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197ABCu; }
        else if (ctx->pc != 0x197ABCu) { ctx->pc = 0x197ABCu; }
    }
    if (ctx->pc != 0x197ABCu) { return; }
    ctx->pc = 0x197ABCu;
    // 0x197abc: 0x2c420001
    ctx->pc = 0x197abcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_197ac0:
    // 0x197ac0: 0xdfbf0000
    ctx->pc = 0x197ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197ac4: 0x3e00008
    ctx->pc = 0x197AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197AC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197AC0u: goto label_197ac0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x197ACCu;
}
