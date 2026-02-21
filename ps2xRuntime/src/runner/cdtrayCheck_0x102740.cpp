#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: cdtrayCheck
// Address: 0x102740 - 0x102794
void cdtrayCheck_0x102740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x102740u;

    // 0x102740: 0x27bdfff0
    ctx->pc = 0x102740u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x102744: 0xffbf0000
    ctx->pc = 0x102744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x102748: 0xc046298
    ctx->pc = 0x102748u;
    SET_GPR_U32(ctx, 31, 0x102750u);
    ctx->pc = 0x118A60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceCdStatus_0x118a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102750u; }
    }
    if (ctx->pc != 0x102750u) { return; }
    ctx->pc = 0x102750u;
    // 0x102750: 0x24030001
    ctx->pc = 0x102750u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x102754: 0x1443000d
    ctx->pc = 0x102754u;
    {
        const bool branch_taken_0x102754 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x102758u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x102754) {
            ctx->pc = 0x10278Cu;
            goto label_10278c;
        }
    }
    ctx->pc = 0x10275Cu;
    // 0x10275c: 0x3c040017
    ctx->pc = 0x10275cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x102760: 0xc04ace4
    ctx->pc = 0x102760u;
    SET_GPR_U32(ctx, 31, 0x102768u);
    ctx->pc = 0x102764u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10880));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102768u; }
    }
    if (ctx->pc != 0x102768u) { return; }
    ctx->pc = 0x102768u;
    // 0x102768: 0xc042c86
    ctx->pc = 0x102768u;
    SET_GPR_U32(ctx, 31, 0x102770u);
    ctx->pc = 0x10B218u;
    {
        const uint32_t __entryPc = ctx->pc;
        StopAllSounds_0x10b218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102770u; }
    }
    if (ctx->pc != 0x102770u) { return; }
    ctx->pc = 0x102770u;
label_102770:
    // 0x102770: 0x0
    ctx->pc = 0x102770u;
    // NOP
    // 0x102774: 0x0
    ctx->pc = 0x102774u;
    // NOP
    // 0x102778: 0x0
    ctx->pc = 0x102778u;
    // NOP
    // 0x10277c: 0x0
    ctx->pc = 0x10277cu;
    // NOP
    // 0x102780: 0x0
    ctx->pc = 0x102780u;
    // NOP
    // 0x102784: 0x1000fffa
    ctx->pc = 0x102784u;
    {
        const bool branch_taken_0x102784 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x102784) {
            ctx->pc = 0x102770u;
            goto label_102770;
        }
    }
    ctx->pc = 0x10278Cu;
label_10278c:
    // 0x10278c: 0x3e00008
    ctx->pc = 0x10278Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102790u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102770u: goto label_102770;
            case 0x10278Cu: goto label_10278c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102794u;
}
