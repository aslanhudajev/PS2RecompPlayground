#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_IsNextFrmReady
// Address: 0x195910 - 0x195958
void SFD_IsNextFrmReady_0x195910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_IsNextFrmReady");


    ctx->pc = 0x195910u;

    // 0x195910: 0x27bdffe0
    ctx->pc = 0x195910u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x195914: 0xffb00000
    ctx->pc = 0x195914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x195918: 0xffbf0010
    ctx->pc = 0x195918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19591c: 0xc064f1e
    ctx->pc = 0x19591Cu;
    SET_GPR_U32(ctx, 31, 0x195924u);
    ctx->pc = 0x195920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195924u; }
        else if (ctx->pc != 0x195924u) { ctx->pc = 0x195924u; }
    }
    if (ctx->pc != 0x195924u) { return; }
    ctx->pc = 0x195924u;
    // 0x195924: 0x10400006
    ctx->pc = 0x195924u;
    {
        const bool branch_taken_0x195924 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x195928u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x195924) {
            ctx->pc = 0x195940u;
            goto label_195940;
        }
    }
    ctx->pc = 0x19592Cu;
    // 0x19592c: 0x3c05ff00
    ctx->pc = 0x19592cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x195930: 0xc064ea0
    ctx->pc = 0x195930u;
    SET_GPR_U32(ctx, 31, 0x195938u);
    ctx->pc = 0x195934u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 387));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195938u; }
        else if (ctx->pc != 0x195938u) { ctx->pc = 0x195938u; }
    }
    if (ctx->pc != 0x195938u) { return; }
    ctx->pc = 0x195938u;
    // 0x195938: 0x10000003
    ctx->pc = 0x195938u;
    {
        const bool branch_taken_0x195938 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19593Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x195938) {
            ctx->pc = 0x195948u;
            goto label_195948;
        }
    }
    ctx->pc = 0x195940u;
label_195940:
    // 0x195940: 0xc066446
    ctx->pc = 0x195940u;
    SET_GPR_U32(ctx, 31, 0x195948u);
    ctx->pc = 0x195944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x199118u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFMPVF_IsNextFrmReady_0x199118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195948u; }
        else if (ctx->pc != 0x195948u) { ctx->pc = 0x195948u; }
    }
    if (ctx->pc != 0x195948u) { return; }
    ctx->pc = 0x195948u;
label_195948:
    // 0x195948: 0xdfbf0010
    ctx->pc = 0x195948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19594c: 0xdfb00000
    ctx->pc = 0x19594cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195950: 0x3e00008
    ctx->pc = 0x195950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195954u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195940u: goto label_195940;
            case 0x195948u: goto label_195948;
            default: break;
        }
        return;
    }
    ctx->pc = 0x195958u;
}
