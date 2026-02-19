#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetupPlayerTexMods
// Address: 0x22f190 - 0x22f228
void SetupPlayerTexMods_0x22f190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22f190u;

    // 0x22f190: 0x27bdffc0
    ctx->pc = 0x22f190u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22f194: 0xffbf0030
    ctx->pc = 0x22f194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22f198: 0xffb20020
    ctx->pc = 0x22f198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22f19c: 0xffb10010
    ctx->pc = 0x22f19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22f1a0: 0xffb00000
    ctx->pc = 0x22f1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22f1a4: 0x3c020033
    ctx->pc = 0x22f1a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22f1a8: 0x2452c7d8
    ctx->pc = 0x22f1a8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294952920));
    // 0x22f1ac: 0x2402004c
    ctx->pc = 0x22f1acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 76));
    // 0x22f1b0: 0x828818
    ctx->pc = 0x22f1b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22f1b4: 0x2321021
    ctx->pc = 0x22f1b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x22f1b8: 0x8c420000
    ctx->pc = 0x22f1b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f1bc: 0x4400015
    ctx->pc = 0x22F1BCu;
    {
        const bool branch_taken_0x22f1bc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x22F1C0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x22f1bc) {
            ctx->pc = 0x22F214u;
            goto label_22f214;
        }
    }
    ctx->pc = 0x22F1C4u;
    // 0x22f1c4: 0x2511021
    ctx->pc = 0x22f1c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x22f1c8: 0x26500010
    ctx->pc = 0x22f1c8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 16));
    // 0x22f1cc: 0x2308021
    ctx->pc = 0x22f1ccu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x22f1d0: 0x8c440024
    ctx->pc = 0x22f1d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x22f1d4: 0xc084c42
    ctx->pc = 0x22F1D4u;
    SET_GPR_U32(ctx, 31, 0x22F1DCu);
    ctx->pc = 0x22F1D8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x213108u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitTexMods_0x213108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F1DCu; }
    }
    if (ctx->pc != 0x22F1DCu) { return; }
    ctx->pc = 0x22F1DCu;
    // 0x22f1dc: 0x2511021
    ctx->pc = 0x22f1dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x22f1e0: 0x8c440030
    ctx->pc = 0x22f1e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x22f1e4: 0xc084c42
    ctx->pc = 0x22F1E4u;
    SET_GPR_U32(ctx, 31, 0x22F1ECu);
    ctx->pc = 0x22F1E8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x213108u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitTexMods_0x213108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F1ECu; }
    }
    if (ctx->pc != 0x22F1ECu) { return; }
    ctx->pc = 0x22F1ECu;
    // 0x22f1ec: 0x2511021
    ctx->pc = 0x22f1ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x22f1f0: 0x40182d
    ctx->pc = 0x22f1f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f1f4: 0x8c440048
    ctx->pc = 0x22f1f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x22f1f8: 0x8c650034
    ctx->pc = 0x22f1f8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x22f1fc: 0xdfbf0030
    ctx->pc = 0x22f1fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22f200: 0xdfb20020
    ctx->pc = 0x22f200u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f204: 0xdfb10010
    ctx->pc = 0x22f204u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f208: 0xdfb00000
    ctx->pc = 0x22f208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f20c: 0x8084c42
    ctx->pc = 0x22F20Cu;
    ctx->pc = 0x22F210u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x213108u;
    InitTexMods_0x213108(rdram, ctx, runtime); return;
    ctx->pc = 0x22F214u;
label_22f214:
    // 0x22f214: 0xdfb20020
    ctx->pc = 0x22f214u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f218: 0xdfb10010
    ctx->pc = 0x22f218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f21c: 0xdfb00000
    ctx->pc = 0x22f21cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f220: 0x3e00008
    ctx->pc = 0x22F220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F224u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22F214u: goto label_22f214;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22F228u;
}
