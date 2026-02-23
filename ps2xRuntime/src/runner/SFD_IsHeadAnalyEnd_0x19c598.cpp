#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_IsHeadAnalyEnd
// Address: 0x19c598 - 0x19c5f8
void SFD_IsHeadAnalyEnd_0x19c598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_IsHeadAnalyEnd");


    ctx->pc = 0x19c598u;

    // 0x19c598: 0x27bdffd0
    ctx->pc = 0x19c598u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19c59c: 0xffb10010
    ctx->pc = 0x19c59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19c5a0: 0xffb00000
    ctx->pc = 0x19c5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19c5a4: 0xa0882d
    ctx->pc = 0x19c5a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c5a8: 0xffbf0020
    ctx->pc = 0x19c5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19c5ac: 0x80802d
    ctx->pc = 0x19c5acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c5b0: 0xc064f1e
    ctx->pc = 0x19C5B0u;
    SET_GPR_U32(ctx, 31, 0x19C5B8u);
    ctx->pc = 0x19C5B4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C5B8u; }
        else if (ctx->pc != 0x19C5B8u) { ctx->pc = 0x19C5B8u; }
    }
    if (ctx->pc != 0x19C5B8u) { return; }
    ctx->pc = 0x19C5B8u;
    // 0x19c5b8: 0x10400006
    ctx->pc = 0x19C5B8u;
    {
        const bool branch_taken_0x19c5b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19C5BCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19c5b8) {
            ctx->pc = 0x19C5D4u;
            goto label_19c5d4;
        }
    }
    ctx->pc = 0x19C5C0u;
    // 0x19c5c0: 0x3c05ff00
    ctx->pc = 0x19c5c0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19c5c4: 0xc064ea0
    ctx->pc = 0x19C5C4u;
    SET_GPR_U32(ctx, 31, 0x19C5CCu);
    ctx->pc = 0x19C5C8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 340));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C5CCu; }
        else if (ctx->pc != 0x19C5CCu) { ctx->pc = 0x19C5CCu; }
    }
    if (ctx->pc != 0x19C5CCu) { return; }
    ctx->pc = 0x19C5CCu;
    // 0x19c5cc: 0x10000006
    ctx->pc = 0x19C5CCu;
    {
        const bool branch_taken_0x19c5cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19C5D0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19c5cc) {
            ctx->pc = 0x19C5E8u;
            goto label_19c5e8;
        }
    }
    ctx->pc = 0x19C5D4u;
label_19c5d4:
    // 0x19c5d4: 0x8e046758
    ctx->pc = 0x19c5d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 26456)));
    // 0x19c5d8: 0xc06717e
    ctx->pc = 0x19C5D8u;
    SET_GPR_U32(ctx, 31, 0x19C5E0u);
    ctx->pc = 0x19C5DCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19C5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfsee_IsHeadAnalyEnd_0x19c5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C5E0u; }
        else if (ctx->pc != 0x19C5E0u) { ctx->pc = 0x19C5E0u; }
    }
    if (ctx->pc != 0x19C5E0u) { return; }
    ctx->pc = 0x19C5E0u;
    // 0x19c5e0: 0x102d
    ctx->pc = 0x19c5e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c5e4: 0xdfbf0020
    ctx->pc = 0x19c5e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19c5e8:
    // 0x19c5e8: 0xdfb10010
    ctx->pc = 0x19c5e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c5ec: 0xdfb00000
    ctx->pc = 0x19c5ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c5f0: 0x3e00008
    ctx->pc = 0x19C5F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C5F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19C5D4u: goto label_19c5d4;
            case 0x19C5E8u: goto label_19c5e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19C5F8u;
}
