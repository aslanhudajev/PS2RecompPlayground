#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoPlayerTexMods
// Address: 0x22f228 - 0x22f29c
void DoPlayerTexMods_0x22f228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22f228u;

    // 0x22f228: 0x27bdffd0
    ctx->pc = 0x22f228u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22f22c: 0xffbf0020
    ctx->pc = 0x22f22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22f230: 0xffb10010
    ctx->pc = 0x22f230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22f234: 0xffb00000
    ctx->pc = 0x22f234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22f238: 0x3c020033
    ctx->pc = 0x22f238u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22f23c: 0x2451c7d8
    ctx->pc = 0x22f23cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294952920));
    // 0x22f240: 0x2402004c
    ctx->pc = 0x22f240u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 76));
    // 0x22f244: 0x828018
    ctx->pc = 0x22f244u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22f248: 0x2111021
    ctx->pc = 0x22f248u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x22f24c: 0x8c420000
    ctx->pc = 0x22f24cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f250: 0x440000e
    ctx->pc = 0x22F250u;
    {
        const bool branch_taken_0x22f250 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x22F254u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x22f250) {
            ctx->pc = 0x22F28Cu;
            goto label_22f28c;
        }
    }
    ctx->pc = 0x22F258u;
    // 0x22f258: 0x2301021
    ctx->pc = 0x22f258u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x22f25c: 0xc084cc4
    ctx->pc = 0x22F25Cu;
    SET_GPR_U32(ctx, 31, 0x22F264u);
    ctx->pc = 0x22F260u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->pc = 0x213310u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoTexMods_0x213310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F264u; }
    }
    if (ctx->pc != 0x22F264u) { return; }
    ctx->pc = 0x22F264u;
    // 0x22f264: 0x2301021
    ctx->pc = 0x22f264u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x22f268: 0xc084cc4
    ctx->pc = 0x22F268u;
    SET_GPR_U32(ctx, 31, 0x22F270u);
    ctx->pc = 0x22F26Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->pc = 0x213310u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoTexMods_0x213310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F270u; }
    }
    if (ctx->pc != 0x22F270u) { return; }
    ctx->pc = 0x22F270u;
    // 0x22f270: 0x2301021
    ctx->pc = 0x22f270u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x22f274: 0x8c440048
    ctx->pc = 0x22f274u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x22f278: 0xdfbf0020
    ctx->pc = 0x22f278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f27c: 0xdfb10010
    ctx->pc = 0x22f27cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f280: 0xdfb00000
    ctx->pc = 0x22f280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f284: 0x8084cc4
    ctx->pc = 0x22F284u;
    ctx->pc = 0x22F288u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x213310u;
    DoTexMods_0x213310(rdram, ctx, runtime); return;
    ctx->pc = 0x22F28Cu;
label_22f28c:
    // 0x22f28c: 0xdfb10010
    ctx->pc = 0x22f28cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f290: 0xdfb00000
    ctx->pc = 0x22f290u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f294: 0x3e00008
    ctx->pc = 0x22F294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F298u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22F28Cu: goto label_22f28c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22F29Cu;
}
