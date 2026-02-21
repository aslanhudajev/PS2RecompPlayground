#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SelectLoadStart
// Address: 0x285e30 - 0x285e78
void SelectLoadStart_0x285e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x285e30u;

    // 0x285e30: 0x27bdffe0
    ctx->pc = 0x285e30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x285e34: 0xffbf0010
    ctx->pc = 0x285e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x285e38: 0xffb00000
    ctx->pc = 0x285e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x285e3c: 0x3c100035
    ctx->pc = 0x285e3cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)53 << 16));
    // 0x285e40: 0x8e02a430
    ctx->pc = 0x285e40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294943792)));
    // 0x285e44: 0x4410009
    ctx->pc = 0x285E44u;
    {
        const bool branch_taken_0x285e44 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x285E48u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x285e44) {
            ctx->pc = 0x285E6Cu;
            goto label_285e6c;
        }
    }
    ctx->pc = 0x285E4Cu;
    // 0x285e4c: 0x3c020035
    ctx->pc = 0x285e4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x285e50: 0xac40a434
    ctx->pc = 0x285e50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943796), GPR_U32(ctx, 0));
    // 0x285e54: 0x3c04003b
    ctx->pc = 0x285e54u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x285e58: 0x2484d2d0
    ctx->pc = 0x285e58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955728));
    // 0x285e5c: 0xc0b1df6
    ctx->pc = 0x285E5Cu;
    SET_GPR_U32(ctx, 31, 0x285E64u);
    ctx->pc = 0x285E60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C77D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_BGLoadModelStart_0x2c77d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285E64u; }
    }
    if (ctx->pc != 0x285E64u) { return; }
    ctx->pc = 0x285E64u;
    // 0x285e64: 0xae02a430
    ctx->pc = 0x285e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294943792), GPR_U32(ctx, 2));
    // 0x285e68: 0xdfbf0010
    ctx->pc = 0x285e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_285e6c:
    // 0x285e6c: 0xdfb00000
    ctx->pc = 0x285e6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285e70: 0x3e00008
    ctx->pc = 0x285E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285E74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285E6Cu: goto label_285e6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x285E78u;
}
