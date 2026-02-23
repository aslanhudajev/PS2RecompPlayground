#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_OutUsrFrmSync
// Address: 0x19e198 - 0x19e1f4
void SFD_OutUsrFrmSync_0x19e198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_OutUsrFrmSync");


    ctx->pc = 0x19e198u;

    // 0x19e198: 0x27bdffe0
    ctx->pc = 0x19e198u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19e19c: 0xffb00000
    ctx->pc = 0x19e19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19e1a0: 0xffbf0010
    ctx->pc = 0x19e1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19e1a4: 0xc064f1e
    ctx->pc = 0x19E1A4u;
    SET_GPR_U32(ctx, 31, 0x19E1ACu);
    ctx->pc = 0x19E1A8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E1ACu; }
        else if (ctx->pc != 0x19E1ACu) { ctx->pc = 0x19E1ACu; }
    }
    if (ctx->pc != 0x19E1ACu) { return; }
    ctx->pc = 0x19E1ACu;
    // 0x19e1ac: 0x10400006
    ctx->pc = 0x19E1ACu;
    {
        const bool branch_taken_0x19e1ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E1B0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19e1ac) {
            ctx->pc = 0x19E1C8u;
            goto label_19e1c8;
        }
    }
    ctx->pc = 0x19E1B4u;
    // 0x19e1b4: 0x3c05ff00
    ctx->pc = 0x19e1b4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19e1b8: 0xc064ea0
    ctx->pc = 0x19E1B8u;
    SET_GPR_U32(ctx, 31, 0x19E1C0u);
    ctx->pc = 0x19E1BCu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 290));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E1C0u; }
        else if (ctx->pc != 0x19E1C0u) { ctx->pc = 0x19E1C0u; }
    }
    if (ctx->pc != 0x19E1C0u) { return; }
    ctx->pc = 0x19E1C0u;
    // 0x19e1c0: 0x10000009
    ctx->pc = 0x19E1C0u;
    {
        const bool branch_taken_0x19e1c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E1C4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x19e1c0) {
            ctx->pc = 0x19E1E8u;
            goto label_19e1e8;
        }
    }
    ctx->pc = 0x19E1C8u;
label_19e1c8:
    // 0x19e1c8: 0x26030a94
    ctx->pc = 0x19e1c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 2708));
    // 0x19e1cc: 0x24050001
    ctx->pc = 0x19e1ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e1d0: 0x8c640250
    ctx->pc = 0x19e1d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x19e1d4: 0x102d
    ctx->pc = 0x19e1d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e1d8: 0x24840001
    ctx->pc = 0x19e1d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x19e1dc: 0xac640250
    ctx->pc = 0x19e1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 4));
    // 0x19e1e0: 0xae05003c
    ctx->pc = 0x19e1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 5));
    // 0x19e1e4: 0xdfbf0010
    ctx->pc = 0x19e1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19e1e8:
    // 0x19e1e8: 0xdfb00000
    ctx->pc = 0x19e1e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e1ec: 0x3e00008
    ctx->pc = 0x19E1ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E1F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E1C8u: goto label_19e1c8;
            case 0x19E1E8u: goto label_19e1e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19E1F4u;
}
