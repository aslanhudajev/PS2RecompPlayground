#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfbuf_SetSupplySjSub
// Address: 0x191b98 - 0x191bfc
void sfbuf_SetSupplySjSub_0x191b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfbuf_SetSupplySjSub");


    ctx->pc = 0x191b98u;

    // 0x191b98: 0x24020388
    ctx->pc = 0x191b98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 904));
    // 0x191b9c: 0x80382d
    ctx->pc = 0x191b9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191ba0: 0xc23018
    ctx->pc = 0x191ba0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)(uint32_t)result); }
    // 0x191ba4: 0x27bdfff0
    ctx->pc = 0x191ba4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x191ba8: 0x24e30d34
    ctx->pc = 0x191ba8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 7), 3380));
    // 0x191bac: 0xffbf0000
    ctx->pc = 0x191bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191bb0: 0x24040004
    ctx->pc = 0x191bb0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x191bb4: 0x663021
    ctx->pc = 0x191bb4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x191bb8: 0x8cc20000
    ctx->pc = 0x191bb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x191bbc: 0x10440007
    ctx->pc = 0x191BBCu;
    {
        const bool branch_taken_0x191bbc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x191BC0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 16));
        if (branch_taken_0x191bbc) {
            ctx->pc = 0x191BDCu;
            goto label_191bdc;
        }
    }
    ctx->pc = 0x191BC4u;
    // 0x191bc4: 0x3c05ff00
    ctx->pc = 0x191bc4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x191bc8: 0xe0202d
    ctx->pc = 0x191bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191bcc: 0xc064ea0
    ctx->pc = 0x191BCCu;
    SET_GPR_U32(ctx, 31, 0x191BD4u);
    ctx->pc = 0x191BD0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1033));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191BD4u; }
        else if (ctx->pc != 0x191BD4u) { ctx->pc = 0x191BD4u; }
    }
    if (ctx->pc != 0x191BD4u) { return; }
    ctx->pc = 0x191BD4u;
    // 0x191bd4: 0x10000007
    ctx->pc = 0x191BD4u;
    {
        const bool branch_taken_0x191bd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x191BD8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x191bd4) {
            ctx->pc = 0x191BF4u;
            goto label_191bf4;
        }
    }
    ctx->pc = 0x191BDCu;
label_191bdc:
    // 0x191bdc: 0x8ca70004
    ctx->pc = 0x191bdcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x191be0: 0x60202d
    ctx->pc = 0x191be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191be4: 0xc064700
    ctx->pc = 0x191BE4u;
    SET_GPR_U32(ctx, 31, 0x191BECu);
    ctx->pc = 0x191BE8u;
    SET_GPR_U32(ctx, 7, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    ctx->pc = 0x191C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfbuf_SetSupSj_0x191c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191BECu; }
        else if (ctx->pc != 0x191BECu) { ctx->pc = 0x191BECu; }
    }
    if (ctx->pc != 0x191BECu) { return; }
    ctx->pc = 0x191BECu;
    // 0x191bec: 0x102d
    ctx->pc = 0x191becu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191bf0: 0xdfbf0000
    ctx->pc = 0x191bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_191bf4:
    // 0x191bf4: 0x3e00008
    ctx->pc = 0x191BF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191BF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191BDCu: goto label_191bdc;
            case 0x191BF4u: goto label_191bf4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x191BFCu;
}
