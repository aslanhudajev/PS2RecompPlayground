#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_SetFileSize
// Address: 0x19ccc0 - 0x19cd28
void SFD_SetFileSize_0x19ccc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_SetFileSize");


    ctx->pc = 0x19ccc0u;

    // 0x19ccc0: 0x27bdffd0
    ctx->pc = 0x19ccc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19ccc4: 0xffb00000
    ctx->pc = 0x19ccc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19ccc8: 0xffb10010
    ctx->pc = 0x19ccc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19cccc: 0x80802d
    ctx->pc = 0x19ccccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ccd0: 0xffbf0020
    ctx->pc = 0x19ccd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19ccd4: 0xc064f1e
    ctx->pc = 0x19CCD4u;
    SET_GPR_U32(ctx, 31, 0x19CCDCu);
    ctx->pc = 0x19CCD8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CCDCu; }
        else if (ctx->pc != 0x19CCDCu) { ctx->pc = 0x19CCDCu; }
    }
    if (ctx->pc != 0x19CCDCu) { return; }
    ctx->pc = 0x19CCDCu;
    // 0x19ccdc: 0x10400006
    ctx->pc = 0x19CCDCu;
    {
        const bool branch_taken_0x19ccdc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19CCE0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19ccdc) {
            ctx->pc = 0x19CCF8u;
            goto label_19ccf8;
        }
    }
    ctx->pc = 0x19CCE4u;
    // 0x19cce4: 0x3c05ff00
    ctx->pc = 0x19cce4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19cce8: 0xc064ea0
    ctx->pc = 0x19CCE8u;
    SET_GPR_U32(ctx, 31, 0x19CCF0u);
    ctx->pc = 0x19CCECu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 345));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CCF0u; }
        else if (ctx->pc != 0x19CCF0u) { ctx->pc = 0x19CCF0u; }
    }
    if (ctx->pc != 0x19CCF0u) { return; }
    ctx->pc = 0x19CCF0u;
    // 0x19ccf0: 0x10000009
    ctx->pc = 0x19CCF0u;
    {
        const bool branch_taken_0x19ccf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19CCF4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19ccf0) {
            ctx->pc = 0x19CD18u;
            goto label_19cd18;
        }
    }
    ctx->pc = 0x19CCF8u;
label_19ccf8:
    // 0x19ccf8: 0x8e026758
    ctx->pc = 0x19ccf8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 26456)));
    // 0x19ccfc: 0x50400005
    ctx->pc = 0x19CCFCu;
    {
        const bool branch_taken_0x19ccfc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x19ccfc) {
            ctx->pc = 0x19CD00u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x19CD14u;
            goto label_19cd14;
        }
    }
    ctx->pc = 0x19CD04u;
    // 0x19cd04: 0xac510db0
    ctx->pc = 0x19cd04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3504), GPR_U32(ctx, 17));
    // 0x19cd08: 0xc0673e4
    ctx->pc = 0x19CD08u;
    SET_GPR_U32(ctx, 31, 0x19CD10u);
    ctx->pc = 0x19CD0Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19CF90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfsee_UpdateEByteRate_0x19cf90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CD10u; }
        else if (ctx->pc != 0x19CD10u) { ctx->pc = 0x19CD10u; }
    }
    if (ctx->pc != 0x19CD10u) { return; }
    ctx->pc = 0x19CD10u;
    // 0x19cd10: 0x102d
    ctx->pc = 0x19cd10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19cd14:
    // 0x19cd14: 0xdfbf0020
    ctx->pc = 0x19cd14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19cd18:
    // 0x19cd18: 0xdfb10010
    ctx->pc = 0x19cd18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cd1c: 0xdfb00000
    ctx->pc = 0x19cd1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cd20: 0x3e00008
    ctx->pc = 0x19CD20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CD24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19CCF8u: goto label_19ccf8;
            case 0x19CD14u: goto label_19cd14;
            case 0x19CD18u: goto label_19cd18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19CD28u;
}
