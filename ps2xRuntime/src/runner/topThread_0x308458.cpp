#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: topThread
// Address: 0x308458 - 0x308504
void topThread_0x308458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x308458u;

    // 0x308458: 0x27bdffa0
    ctx->pc = 0x308458u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x30845c: 0xffb40040
    ctx->pc = 0x30845cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x308460: 0xffb30030
    ctx->pc = 0x308460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x308464: 0x3c14003e
    ctx->pc = 0x308464u;
    SET_GPR_U32(ctx, 20, ((uint32_t)62 << 16));
    // 0x308468: 0xffb20020
    ctx->pc = 0x308468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x30846c: 0x3c13003c
    ctx->pc = 0x30846cu;
    SET_GPR_U32(ctx, 19, ((uint32_t)60 << 16));
    // 0x308470: 0xffb10010
    ctx->pc = 0x308470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x308474: 0x24120001
    ctx->pc = 0x308474u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x308478: 0xffb00000
    ctx->pc = 0x308478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30847c: 0x24110002
    ctx->pc = 0x30847cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 2));
    // 0x308480: 0xffbf0050
    ctx->pc = 0x308480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x308484: 0x80802d
    ctx->pc = 0x308484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_308488:
    // 0x308488: 0xc0c0d88
    ctx->pc = 0x308488u;
    SET_GPR_U32(ctx, 31, 0x308490u);
    ctx->pc = 0x30848Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 29816)));
    ctx->pc = 0x303620u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x303620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308490u; }
    }
    if (ctx->pc != 0x308490u) { return; }
    ctx->pc = 0x308490u;
    // 0x308490: 0x8e020000
    ctx->pc = 0x308490u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x308494: 0x1052000f
    ctx->pc = 0x308494u;
    {
        const bool branch_taken_0x308494 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 18));
        ctx->pc = 0x308498u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 2));
        if (branch_taken_0x308494) {
            ctx->pc = 0x3084D4u;
            goto label_3084d4;
        }
    }
    ctx->pc = 0x30849Cu;
    // 0x30849c: 0x10600005
    ctx->pc = 0x30849Cu;
    {
        const bool branch_taken_0x30849c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x3084A0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 4294946640));
        if (branch_taken_0x30849c) {
            ctx->pc = 0x3084B4u;
            goto label_3084b4;
        }
    }
    ctx->pc = 0x3084A4u;
    // 0x3084a4: 0x10400007
    ctx->pc = 0x3084A4u;
    {
        const bool branch_taken_0x3084a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x3084a4) {
            ctx->pc = 0x3084C4u;
            goto label_3084c4;
        }
    }
    ctx->pc = 0x3084ACu;
    // 0x3084ac: 0x10000011
    ctx->pc = 0x3084ACu;
    {
        const bool branch_taken_0x3084ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x3084ac) {
            ctx->pc = 0x3084F4u;
            goto label_3084f4;
        }
    }
    ctx->pc = 0x3084B4u;
label_3084b4:
    // 0x3084b4: 0x1051000b
    ctx->pc = 0x3084B4u;
    {
        const bool branch_taken_0x3084b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        if (branch_taken_0x3084b4) {
            ctx->pc = 0x3084E4u;
            goto label_3084e4;
        }
    }
    ctx->pc = 0x3084BCu;
    // 0x3084bc: 0x1000000d
    ctx->pc = 0x3084BCu;
    {
        const bool branch_taken_0x3084bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x3084bc) {
            ctx->pc = 0x3084F4u;
            goto label_3084f4;
        }
    }
    ctx->pc = 0x3084C4u;
label_3084c4:
    // 0x3084c4: 0xc0c0d44
    ctx->pc = 0x3084C4u;
    SET_GPR_U32(ctx, 31, 0x3084CCu);
    ctx->pc = 0x3084C8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x303510u;
    {
        const uint32_t __entryPc = ctx->pc;
        WakeupThread_0x303510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3084CCu; }
    }
    if (ctx->pc != 0x3084CCu) { return; }
    ctx->pc = 0x3084CCu;
    // 0x3084cc: 0x1000ffee
    ctx->pc = 0x3084CCu;
    {
        const bool branch_taken_0x3084cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x3084cc) {
            ctx->pc = 0x308488u;
            goto label_308488;
        }
    }
    ctx->pc = 0x3084D4u;
label_3084d4:
    // 0x3084d4: 0xc0c0d24
    ctx->pc = 0x3084D4u;
    SET_GPR_U32(ctx, 31, 0x3084DCu);
    ctx->pc = 0x3084D8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x303490u;
    {
        const uint32_t __entryPc = ctx->pc;
        RotateThreadReadyQueue_0x303490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3084DCu; }
    }
    if (ctx->pc != 0x3084DCu) { return; }
    ctx->pc = 0x3084DCu;
    // 0x3084dc: 0x1000ffea
    ctx->pc = 0x3084DCu;
    {
        const bool branch_taken_0x3084dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x3084dc) {
            ctx->pc = 0x308488u;
            goto label_308488;
        }
    }
    ctx->pc = 0x3084E4u;
label_3084e4:
    // 0x3084e4: 0xc0c0d54
    ctx->pc = 0x3084E4u;
    SET_GPR_U32(ctx, 31, 0x3084ECu);
    ctx->pc = 0x3084E8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x303550u;
    {
        const uint32_t __entryPc = ctx->pc;
        SuspendThread_0x303550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3084ECu; }
    }
    if (ctx->pc != 0x3084ECu) { return; }
    ctx->pc = 0x3084ECu;
    // 0x3084ec: 0x1000ffe6
    ctx->pc = 0x3084ECu;
    {
        const bool branch_taken_0x3084ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x3084ec) {
            ctx->pc = 0x308488u;
            goto label_308488;
        }
    }
    ctx->pc = 0x3084F4u;
label_3084f4:
    // 0x3084f4: 0xc0c1494
    ctx->pc = 0x3084F4u;
    SET_GPR_U32(ctx, 31, 0x3084FCu);
    ctx->pc = 0x305250u;
    {
        const uint32_t __entryPc = ctx->pc;
        kprintf_0x305250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3084FCu; }
    }
    if (ctx->pc != 0x3084FCu) { return; }
    ctx->pc = 0x3084FCu;
    // 0x3084fc: 0x1000ffe2
    ctx->pc = 0x3084FCu;
    {
        const bool branch_taken_0x3084fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x3084fc) {
            ctx->pc = 0x308488u;
            goto label_308488;
        }
    }
    ctx->pc = 0x308504u;
}
