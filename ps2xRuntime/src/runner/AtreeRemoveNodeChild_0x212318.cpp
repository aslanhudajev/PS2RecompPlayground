#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AtreeRemoveNodeChild
// Address: 0x212318 - 0x21236c
void AtreeRemoveNodeChild_0x212318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x212318u;

label_212318:
    // 0x212318: 0x27bdffe0
    ctx->pc = 0x212318u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21231c: 0xffbf0010
    ctx->pc = 0x21231cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x212320: 0xffb00000
    ctx->pc = 0x212320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212324: 0x80802d
    ctx->pc = 0x212324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212328: 0x1200000d
    ctx->pc = 0x212328u;
    {
        const bool branch_taken_0x212328 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x21232Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x212328) {
            ctx->pc = 0x212360u;
            goto label_212360;
        }
    }
    ctx->pc = 0x212330u;
    // 0x212330: 0x8e040008
    ctx->pc = 0x212330u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x212334: 0x0
    ctx->pc = 0x212334u;
    // NOP
label_212338:
    // 0x212338: 0x10800003
    ctx->pc = 0x212338u;
    {
        const bool branch_taken_0x212338 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x212338) {
            ctx->pc = 0x212348u;
            goto label_212348;
        }
    }
    ctx->pc = 0x212340u;
    // 0x212340: 0xc0848c6
    ctx->pc = 0x212340u;
    SET_GPR_U32(ctx, 31, 0x212348u);
    ctx->pc = 0x212318u;
    goto label_212318;
    ctx->pc = 0x212348u;
label_212348:
    // 0x212348: 0xc08488e
    ctx->pc = 0x212348u;
    SET_GPR_U32(ctx, 31, 0x212350u);
    ctx->pc = 0x21234Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x212238u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeRemoveNodeSub_0x212238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212350u; }
    }
    if (ctx->pc != 0x212350u) { return; }
    ctx->pc = 0x212350u;
    // 0x212350: 0x8e10000c
    ctx->pc = 0x212350u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x212354: 0x5600fff8
    ctx->pc = 0x212354u;
    {
        const bool branch_taken_0x212354 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x212354) {
            ctx->pc = 0x212358u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x212338u;
            goto label_212338;
        }
    }
    ctx->pc = 0x21235Cu;
    // 0x21235c: 0xdfbf0010
    ctx->pc = 0x21235cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_212360:
    // 0x212360: 0xdfb00000
    ctx->pc = 0x212360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212364: 0x3e00008
    ctx->pc = 0x212364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212368u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x212318u: goto label_212318;
            case 0x212338u: goto label_212338;
            case 0x212348u: goto label_212348;
            case 0x212360u: goto label_212360;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21236Cu;
}
