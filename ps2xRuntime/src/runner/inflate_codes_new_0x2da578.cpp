#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: inflate_codes_new
// Address: 0x2da578 - 0x2da5e8
void inflate_codes_new_0x2da578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2da578u;

label_2da578:
    // 0x2da578: 0x27bdffb0
    ctx->pc = 0x2da578u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_2da57c:
    // 0x2da57c: 0xffbf0040
    ctx->pc = 0x2da57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2da580:
    // 0x2da580: 0xffb30030
    ctx->pc = 0x2da580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2da584:
    // 0x2da584: 0xffb20020
    ctx->pc = 0x2da584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2da588:
    // 0x2da588: 0xffb10010
    ctx->pc = 0x2da588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2da58c:
    // 0x2da58c: 0xffb00000
    ctx->pc = 0x2da58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2da590:
    // 0x2da590: 0x80802d
    ctx->pc = 0x2da590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2da594:
    // 0x2da594: 0xa0882d
    ctx->pc = 0x2da594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2da598:
    // 0x2da598: 0xc0902d
    ctx->pc = 0x2da598u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2da59c:
    // 0x2da59c: 0xe0982d
    ctx->pc = 0x2da59cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2da5a0:
    // 0x2da5a0: 0x8d020020
    ctx->pc = 0x2da5a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_2da5a4:
    // 0x2da5a4: 0x8d040028
    ctx->pc = 0x2da5a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 8), 40)));
label_2da5a8:
    // 0x2da5a8: 0x24050001
    ctx->pc = 0x2da5a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_2da5ac:
    // 0x2da5ac: 0x40f809
label_2da5b0:
    if (ctx->pc == 0x2DA5B0u) {
        ctx->pc = 0x2DA5B0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x2DA5B4u;
        goto label_2da5b4;
    }
    ctx->pc = 0x2DA5ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DA5B4u);
        ctx->pc = 0x2DA5B0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DA578u: goto label_2da578;
            case 0x2DA57Cu: goto label_2da57c;
            case 0x2DA580u: goto label_2da580;
            case 0x2DA584u: goto label_2da584;
            case 0x2DA588u: goto label_2da588;
            case 0x2DA58Cu: goto label_2da58c;
            case 0x2DA590u: goto label_2da590;
            case 0x2DA594u: goto label_2da594;
            case 0x2DA598u: goto label_2da598;
            case 0x2DA59Cu: goto label_2da59c;
            case 0x2DA5A0u: goto label_2da5a0;
            case 0x2DA5A4u: goto label_2da5a4;
            case 0x2DA5A8u: goto label_2da5a8;
            case 0x2DA5ACu: goto label_2da5ac;
            case 0x2DA5B0u: goto label_2da5b0;
            case 0x2DA5B4u: goto label_2da5b4;
            case 0x2DA5B8u: goto label_2da5b8;
            case 0x2DA5BCu: goto label_2da5bc;
            case 0x2DA5C0u: goto label_2da5c0;
            case 0x2DA5C4u: goto label_2da5c4;
            case 0x2DA5C8u: goto label_2da5c8;
            case 0x2DA5CCu: goto label_2da5cc;
            case 0x2DA5D0u: goto label_2da5d0;
            case 0x2DA5D4u: goto label_2da5d4;
            case 0x2DA5D8u: goto label_2da5d8;
            case 0x2DA5DCu: goto label_2da5dc;
            case 0x2DA5E0u: goto label_2da5e0;
            case 0x2DA5E4u: goto label_2da5e4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DA5B4u; }
            if (ctx->pc != 0x2DA5B4u) { return; }
        }
    }
    ctx->pc = 0x2DA5B4u;
label_2da5b4:
    // 0x2da5b4: 0x10400006
label_2da5b8:
    if (ctx->pc == 0x2DA5B8u) {
        ctx->pc = 0x2DA5B8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x2DA5BCu;
        goto label_2da5bc;
    }
    ctx->pc = 0x2DA5B4u;
    {
        const bool branch_taken_0x2da5b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DA5B8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2da5b4) {
            ctx->pc = 0x2DA5D0u;
            goto label_2da5d0;
        }
    }
    ctx->pc = 0x2DA5BCu;
label_2da5bc:
    // 0x2da5bc: 0xac400000
    ctx->pc = 0x2da5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2da5c0:
    // 0x2da5c0: 0xa0500010
    ctx->pc = 0x2da5c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 16));
label_2da5c4:
    // 0x2da5c4: 0xa0510011
    ctx->pc = 0x2da5c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17), (uint8_t)GPR_U32(ctx, 17));
label_2da5c8:
    // 0x2da5c8: 0xac520014
    ctx->pc = 0x2da5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 18));
label_2da5cc:
    // 0x2da5cc: 0xac530018
    ctx->pc = 0x2da5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 19));
label_2da5d0:
    // 0x2da5d0: 0xdfb30030
    ctx->pc = 0x2da5d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2da5d4:
    // 0x2da5d4: 0xdfb20020
    ctx->pc = 0x2da5d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2da5d8:
    // 0x2da5d8: 0xdfb10010
    ctx->pc = 0x2da5d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2da5dc:
    // 0x2da5dc: 0xdfb00000
    ctx->pc = 0x2da5dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2da5e0:
    // 0x2da5e0: 0x3e00008
label_2da5e4:
    if (ctx->pc == 0x2DA5E4u) {
        ctx->pc = 0x2DA5E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2DA5E8u;
        goto label_fallthrough_0x2da5e0;
    }
    ctx->pc = 0x2DA5E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA5E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DA578u: goto label_2da578;
            case 0x2DA57Cu: goto label_2da57c;
            case 0x2DA580u: goto label_2da580;
            case 0x2DA584u: goto label_2da584;
            case 0x2DA588u: goto label_2da588;
            case 0x2DA58Cu: goto label_2da58c;
            case 0x2DA590u: goto label_2da590;
            case 0x2DA594u: goto label_2da594;
            case 0x2DA598u: goto label_2da598;
            case 0x2DA59Cu: goto label_2da59c;
            case 0x2DA5A0u: goto label_2da5a0;
            case 0x2DA5A4u: goto label_2da5a4;
            case 0x2DA5A8u: goto label_2da5a8;
            case 0x2DA5ACu: goto label_2da5ac;
            case 0x2DA5B0u: goto label_2da5b0;
            case 0x2DA5B4u: goto label_2da5b4;
            case 0x2DA5B8u: goto label_2da5b8;
            case 0x2DA5BCu: goto label_2da5bc;
            case 0x2DA5C0u: goto label_2da5c0;
            case 0x2DA5C4u: goto label_2da5c4;
            case 0x2DA5C8u: goto label_2da5c8;
            case 0x2DA5CCu: goto label_2da5cc;
            case 0x2DA5D0u: goto label_2da5d0;
            case 0x2DA5D4u: goto label_2da5d4;
            case 0x2DA5D8u: goto label_2da5d8;
            case 0x2DA5DCu: goto label_2da5dc;
            case 0x2DA5E0u: goto label_2da5e0;
            case 0x2DA5E4u: goto label_2da5e4;
            default: break;
        }
        return;
    }
label_fallthrough_0x2da5e0:
    ctx->pc = 0x2DA5E8u;
}
