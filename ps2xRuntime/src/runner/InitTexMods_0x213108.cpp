#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitTexMods
// Address: 0x213108 - 0x213188
void InitTexMods_0x213108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x213108u;

    // 0x213108: 0x27bdffb0
    ctx->pc = 0x213108u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21310c: 0xffbf0040
    ctx->pc = 0x21310cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x213110: 0xffb30030
    ctx->pc = 0x213110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x213114: 0xffb20020
    ctx->pc = 0x213114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x213118: 0xffb10010
    ctx->pc = 0x213118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21311c: 0xffb00000
    ctx->pc = 0x21311cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213120: 0x80882d
    ctx->pc = 0x213120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213124: 0x12200011
    ctx->pc = 0x213124u;
    {
        const bool branch_taken_0x213124 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x213128u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x213124) {
            ctx->pc = 0x21316Cu;
            goto label_21316c;
        }
    }
    ctx->pc = 0x21312Cu;
    // 0x21312c: 0x6400010
    ctx->pc = 0x21312Cu;
    {
        const bool branch_taken_0x21312c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x213130u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x21312c) {
            ctx->pc = 0x213170u;
            goto label_213170;
        }
    }
    ctx->pc = 0x213134u;
    // 0x213134: 0x8e220008
    ctx->pc = 0x213134u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x213138: 0x1840000d
    ctx->pc = 0x213138u;
    {
        const bool branch_taken_0x213138 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21313Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x213138) {
            ctx->pc = 0x213170u;
            goto label_213170;
        }
    }
    ctx->pc = 0x213140u;
    // 0x213140: 0x24130058
    ctx->pc = 0x213140u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 88));
    // 0x213144: 0x2131018
    ctx->pc = 0x213144u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_213148:
    // 0x213148: 0x8e24000c
    ctx->pc = 0x213148u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x21314c: 0x442021
    ctx->pc = 0x21314cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x213150: 0xc0843d6
    ctx->pc = 0x213150u;
    SET_GPR_U32(ctx, 31, 0x213158u);
    ctx->pc = 0x213154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x210F58u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitTexMod_0x210f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213158u; }
    }
    if (ctx->pc != 0x213158u) { return; }
    ctx->pc = 0x213158u;
    // 0x213158: 0x26100001
    ctx->pc = 0x213158u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x21315c: 0x8e220008
    ctx->pc = 0x21315cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x213160: 0x202102a
    ctx->pc = 0x213160u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x213164: 0x1440fff8
    ctx->pc = 0x213164u;
    {
        const bool branch_taken_0x213164 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x213168u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x213164) {
            ctx->pc = 0x213148u;
            goto label_213148;
        }
    }
    ctx->pc = 0x21316Cu;
label_21316c:
    // 0x21316c: 0xdfbf0040
    ctx->pc = 0x21316cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_213170:
    // 0x213170: 0xdfb30030
    ctx->pc = 0x213170u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x213174: 0xdfb20020
    ctx->pc = 0x213174u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213178: 0xdfb10010
    ctx->pc = 0x213178u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21317c: 0xdfb00000
    ctx->pc = 0x21317cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213180: 0x3e00008
    ctx->pc = 0x213180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213184u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x213148u: goto label_213148;
            case 0x21316Cu: goto label_21316c;
            case 0x213170u: goto label_213170;
            default: break;
        }
        return;
    }
    ctx->pc = 0x213188u;
}
