#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterRemoveColnodeChildren
// Address: 0x293058 - 0x293074
void CritterRemoveColnodeChildren_0x293058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x293058u;

    // 0x293058: 0x8ca50078
    ctx->pc = 0x293058u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 120)));
    // 0x29305c: 0x10a00003
    ctx->pc = 0x29305Cu;
    {
        const bool branch_taken_0x29305c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x29305c) {
            ctx->pc = 0x29306Cu;
            goto label_29306c;
        }
    }
    ctx->pc = 0x293064u;
    // 0x293064: 0x80a4bde
    ctx->pc = 0x293064u;
    ctx->pc = 0x293068u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x292F78u;
    CritterRemoveColnodeSub_0x292f78(rdram, ctx, runtime); return;
    ctx->pc = 0x29306Cu;
label_29306c:
    // 0x29306c: 0x3e00008
    ctx->pc = 0x29306Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29306Cu: goto label_29306c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x293074u;
}
