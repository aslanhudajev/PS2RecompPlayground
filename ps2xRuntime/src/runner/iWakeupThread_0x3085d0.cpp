#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iWakeupThread
// Address: 0x3085d0 - 0x308648
void iWakeupThread_0x3085d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3085d0u;

    // 0x3085d0: 0x27bdffe0
    ctx->pc = 0x3085d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3085d4: 0xffbf0010
    ctx->pc = 0x3085d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3085d8: 0xffb00000
    ctx->pc = 0x3085d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3085dc: 0x2403ffd1
    ctx->pc = 0x3085dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967249));
    // 0x3085e0: 0xc
    ctx->pc = 0x3085e0u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x3085e4: 0x40802d
    ctx->pc = 0x3085e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3085e8: 0x12040005
    ctx->pc = 0x3085E8u;
    {
        const bool branch_taken_0x3085e8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 4));
        ctx->pc = 0x3085ECu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 256));
        if (branch_taken_0x3085e8) {
            ctx->pc = 0x308600u;
            goto label_308600;
        }
    }
    ctx->pc = 0x3085F0u;
    // 0x3085f0: 0xc0c0d48
    ctx->pc = 0x3085F0u;
    SET_GPR_U32(ctx, 31, 0x3085F8u);
    ctx->pc = 0x303520u;
    {
        const uint32_t __entryPc = ctx->pc;
        _iWakeupThread_0x303520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3085F8u; }
    }
    if (ctx->pc != 0x3085F8u) { return; }
    ctx->pc = 0x3085F8u;
    // 0x3085f8: 0x10000010
    ctx->pc = 0x3085F8u;
    {
        const bool branch_taken_0x3085f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3085FCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x3085f8) {
            ctx->pc = 0x30863Cu;
            goto label_30863c;
        }
    }
    ctx->pc = 0x308600u;
label_308600:
    // 0x308600: 0x10400004
    ctx->pc = 0x308600u;
    {
        const bool branch_taken_0x308600 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x308604u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x308600) {
            ctx->pc = 0x308614u;
            goto label_308614;
        }
    }
    ctx->pc = 0x308608u;
    // 0x308608: 0x8c4342a0
    ctx->pc = 0x308608u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 17056)));
    // 0x30860c: 0x14600003
    ctx->pc = 0x30860Cu;
    {
        const bool branch_taken_0x30860c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x308610u;
        SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
        if (branch_taken_0x30860c) {
            ctx->pc = 0x30861Cu;
            goto label_30861c;
        }
    }
    ctx->pc = 0x308614u;
label_308614:
    // 0x308614: 0x10000008
    ctx->pc = 0x308614u;
    {
        const bool branch_taken_0x308614 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x308618u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x308614) {
            ctx->pc = 0x308638u;
            goto label_308638;
        }
    }
    ctx->pc = 0x30861Cu;
label_30861c:
    // 0x30861c: 0x3c03003e
    ctx->pc = 0x30861cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)62 << 16));
    // 0x308620: 0x8c647478
    ctx->pc = 0x308620u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 29816)));
    // 0x308624: 0x24457470
    ctx->pc = 0x308624u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 29808));
    // 0x308628: 0xac407470
    ctx->pc = 0x308628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29808), GPR_U32(ctx, 0));
    // 0x30862c: 0xc0c0d84
    ctx->pc = 0x30862Cu;
    SET_GPR_U32(ctx, 31, 0x308634u);
    ctx->pc = 0x308630u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 16));
    ctx->pc = 0x303610u;
    {
        const uint32_t __entryPc = ctx->pc;
        iSignalSema_0x303610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308634u; }
    }
    if (ctx->pc != 0x308634u) { return; }
    ctx->pc = 0x308634u;
    // 0x308634: 0x200102d
    ctx->pc = 0x308634u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_308638:
    // 0x308638: 0xdfbf0010
    ctx->pc = 0x308638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_30863c:
    // 0x30863c: 0xdfb00000
    ctx->pc = 0x30863cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308640: 0x3e00008
    ctx->pc = 0x308640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308644u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x308600u: goto label_308600;
            case 0x308614u: goto label_308614;
            case 0x30861Cu: goto label_30861c;
            case 0x308638u: goto label_308638;
            case 0x30863Cu: goto label_30863c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x308648u;
}
