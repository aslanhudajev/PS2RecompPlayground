#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterBGLoadFile
// Address: 0x292810 - 0x292838
void CritterBGLoadFile_0x292810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x292810u;

    // 0x292810: 0x8c830010
    ctx->pc = 0x292810u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x292814: 0x24020002
    ctx->pc = 0x292814u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x292818: 0x10620005
    ctx->pc = 0x292818u;
    {
        const bool branch_taken_0x292818 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x292818) {
            ctx->pc = 0x292830u;
            goto label_292830;
        }
    }
    ctx->pc = 0x292820u;
    // 0x292820: 0x8c820004
    ctx->pc = 0x292820u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x292824: 0x8c830008
    ctx->pc = 0x292824u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x292828: 0x431021
    ctx->pc = 0x292828u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29282c: 0xac820004
    ctx->pc = 0x29282cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_292830:
    // 0x292830: 0x3e00008
    ctx->pc = 0x292830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x292830u: goto label_292830;
            default: break;
        }
        return;
    }
    ctx->pc = 0x292838u;
}
