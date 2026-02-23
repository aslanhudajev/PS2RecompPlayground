#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_GetNumFrm
// Address: 0x1958b0 - 0x195910
void SFD_GetNumFrm_0x1958b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_GetNumFrm");


    ctx->pc = 0x1958b0u;

    // 0x1958b0: 0x27bdffd0
    ctx->pc = 0x1958b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1958b4: 0xffb10010
    ctx->pc = 0x1958b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1958b8: 0xffb00000
    ctx->pc = 0x1958b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1958bc: 0xa0882d
    ctx->pc = 0x1958bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1958c0: 0xffbf0020
    ctx->pc = 0x1958c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1958c4: 0x80802d
    ctx->pc = 0x1958c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1958c8: 0xc064f1e
    ctx->pc = 0x1958C8u;
    SET_GPR_U32(ctx, 31, 0x1958D0u);
    ctx->pc = 0x1958CCu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1958D0u; }
        else if (ctx->pc != 0x1958D0u) { ctx->pc = 0x1958D0u; }
    }
    if (ctx->pc != 0x1958D0u) { return; }
    ctx->pc = 0x1958D0u;
    // 0x1958d0: 0x10400006
    ctx->pc = 0x1958D0u;
    {
        const bool branch_taken_0x1958d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1958D4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1958d0) {
            ctx->pc = 0x1958ECu;
            goto label_1958ec;
        }
    }
    ctx->pc = 0x1958D8u;
    // 0x1958d8: 0x3c05ff00
    ctx->pc = 0x1958d8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1958dc: 0xc064ea0
    ctx->pc = 0x1958DCu;
    SET_GPR_U32(ctx, 31, 0x1958E4u);
    ctx->pc = 0x1958E0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 386));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1958E4u; }
        else if (ctx->pc != 0x1958E4u) { ctx->pc = 0x1958E4u; }
    }
    if (ctx->pc != 0x1958E4u) { return; }
    ctx->pc = 0x1958E4u;
    // 0x1958e4: 0x10000006
    ctx->pc = 0x1958E4u;
    {
        const bool branch_taken_0x1958e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1958E8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1958e4) {
            ctx->pc = 0x195900u;
            goto label_195900;
        }
    }
    ctx->pc = 0x1958ECu;
label_1958ec:
    // 0x1958ec: 0xc06639a
    ctx->pc = 0x1958ECu;
    SET_GPR_U32(ctx, 31, 0x1958F4u);
    ctx->pc = 0x1958F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x198E68u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFMPVF_GetNumFrm_0x198e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1958F4u; }
        else if (ctx->pc != 0x1958F4u) { ctx->pc = 0x1958F4u; }
    }
    if (ctx->pc != 0x1958F4u) { return; }
    ctx->pc = 0x1958F4u;
    // 0x1958f4: 0xae220000
    ctx->pc = 0x1958f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1958f8: 0x102d
    ctx->pc = 0x1958f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1958fc: 0xdfbf0020
    ctx->pc = 0x1958fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_195900:
    // 0x195900: 0xdfb10010
    ctx->pc = 0x195900u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195904: 0xdfb00000
    ctx->pc = 0x195904u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195908: 0x3e00008
    ctx->pc = 0x195908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19590Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1958ECu: goto label_1958ec;
            case 0x195900u: goto label_195900;
            default: break;
        }
        return;
    }
    ctx->pc = 0x195910u;
}
