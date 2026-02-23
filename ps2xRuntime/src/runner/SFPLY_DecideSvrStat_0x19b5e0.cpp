#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFPLY_DecideSvrStat
// Address: 0x19b5e0 - 0x19b6a8
void SFPLY_DecideSvrStat_0x19b5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFPLY_DecideSvrStat");


    ctx->pc = 0x19b5e0u;

    // 0x19b5e0: 0x27bdffb0
    ctx->pc = 0x19b5e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19b5e4: 0xffb10030
    ctx->pc = 0x19b5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x19b5e8: 0x27b10010
    ctx->pc = 0x19b5e8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 16));
    // 0x19b5ec: 0xffbf0040
    ctx->pc = 0x19b5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19b5f0: 0xffb00020
    ctx->pc = 0x19b5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x19b5f4: 0xc064f3a
    ctx->pc = 0x19B5F4u;
    SET_GPR_U32(ctx, 31, 0x19B5FCu);
    ctx->pc = 0x19B5F8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_LockCs_0x193ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B5FCu; }
        else if (ctx->pc != 0x19B5FCu) { ctx->pc = 0x19B5FCu; }
    }
    if (ctx->pc != 0x19B5FCu) { return; }
    ctx->pc = 0x19B5FCu;
    // 0x19b5fc: 0xafa00000
    ctx->pc = 0x19b5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x19b600: 0x3c070026
    ctx->pc = 0x19b600u;
    SET_GPR_U32(ctx, 7, ((uint32_t)38 << 16));
    // 0x19b604: 0xafa00004
    ctx->pc = 0x19b604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x19b608: 0x24e2ddc0
    ctx->pc = 0x19b608u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 4294958528));
    // 0x19b60c: 0x8c430178
    ctx->pc = 0x19b60cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x19b610: 0x8c420174
    ctx->pc = 0x19b610u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x19b614: 0x18400014
    ctx->pc = 0x19B614u;
    {
        const bool branch_taken_0x19b614 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x19B618u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        if (branch_taken_0x19b614) {
            ctx->pc = 0x19B668u;
            goto label_19b668;
        }
    }
    ctx->pc = 0x19B61Cu;
    // 0x19b61c: 0x24650040
    ctx->pc = 0x19b61cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 64));
    // 0x19b620: 0x40202d
    ctx->pc = 0x19b620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b624: 0x24060006
    ctx->pc = 0x19b624u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
label_19b628:
    // 0x19b628: 0x8ca20000
    ctx->pc = 0x19b628u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19b62c: 0x10400006
    ctx->pc = 0x19B62Cu;
    {
        const bool branch_taken_0x19b62c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19B630u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19b62c) {
            ctx->pc = 0x19B648u;
            goto label_19b648;
        }
    }
    ctx->pc = 0x19B634u;
    // 0x19b634: 0x10460004
    ctx->pc = 0x19B634u;
    {
        const bool branch_taken_0x19b634 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 6));
        ctx->pc = 0x19B638u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x19b634) {
            ctx->pc = 0x19B648u;
            goto label_19b648;
        }
    }
    ctx->pc = 0x19B63Cu;
    // 0x19b63c: 0x4410002
    ctx->pc = 0x19B63Cu;
    {
        const bool branch_taken_0x19b63c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x19B640u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19b63c) {
            ctx->pc = 0x19B648u;
            goto label_19b648;
        }
    }
    ctx->pc = 0x19B644u;
    // 0x19b644: 0x24100002
    ctx->pc = 0x19b644u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2));
label_19b648:
    // 0x19b648: 0x101080
    ctx->pc = 0x19b648u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x19b64c: 0x24a56828
    ctx->pc = 0x19b64cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 26664));
    // 0x19b650: 0x3a21821
    ctx->pc = 0x19b650u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x19b654: 0x2484ffff
    ctx->pc = 0x19b654u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x19b658: 0x8c620000
    ctx->pc = 0x19b658u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19b65c: 0x24420001
    ctx->pc = 0x19b65cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x19b660: 0x1480fff1
    ctx->pc = 0x19B660u;
    {
        const bool branch_taken_0x19b660 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x19B664u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x19b660) {
            ctx->pc = 0x19B628u;
            goto label_19b628;
        }
    }
    ctx->pc = 0x19B668u;
label_19b668:
    // 0x19b668: 0x8fa20004
    ctx->pc = 0x19b668u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19b66c: 0x14400004
    ctx->pc = 0x19B66Cu;
    {
        const bool branch_taken_0x19b66c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19B670u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19b66c) {
            ctx->pc = 0x19B680u;
            goto label_19b680;
        }
    }
    ctx->pc = 0x19B674u;
    // 0x19b674: 0x8fa20008
    ctx->pc = 0x19b674u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19b678: 0x24100002
    ctx->pc = 0x19b678u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b67c: 0x2800a
    ctx->pc = 0x19b67cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 0));
label_19b680:
    // 0x19b680: 0x24e2ddc0
    ctx->pc = 0x19b680u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 4294958528));
    // 0x19b684: 0x220202d
    ctx->pc = 0x19b684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b688: 0xc064f44
    ctx->pc = 0x19B688u;
    SET_GPR_U32(ctx, 31, 0x19B690u);
    ctx->pc = 0x19B68Cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 16));
    ctx->pc = 0x193D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_UnlockCs_0x193d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B690u; }
        else if (ctx->pc != 0x19B690u) { ctx->pc = 0x19B690u; }
    }
    if (ctx->pc != 0x19B690u) { return; }
    ctx->pc = 0x19B690u;
    // 0x19b690: 0x200102d
    ctx->pc = 0x19b690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b694: 0xdfbf0040
    ctx->pc = 0x19b694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b698: 0xdfb10030
    ctx->pc = 0x19b698u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b69c: 0xdfb00020
    ctx->pc = 0x19b69cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b6a0: 0x3e00008
    ctx->pc = 0x19B6A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B6A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19B628u: goto label_19b628;
            case 0x19B648u: goto label_19b648;
            case 0x19B668u: goto label_19b668;
            case 0x19B680u: goto label_19b680;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19B6A8u;
}
