#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: new_iob
// Address: 0x158148 - 0x1581d0
void new_iob_0x158148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("new_iob");


    ctx->pc = 0x158148u;

    // 0x158148: 0x27bdffd0
    ctx->pc = 0x158148u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15814c: 0xffb10010
    ctx->pc = 0x15814cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x158150: 0xffb00000
    ctx->pc = 0x158150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x158154: 0xffbf0020
    ctx->pc = 0x158154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x158158: 0xc05603a
    ctx->pc = 0x158158u;
    SET_GPR_U32(ctx, 31, 0x158160u);
    ctx->pc = 0x15815Cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    ctx->pc = 0x1580E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sceFsIobSemaMK_0x1580e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158160u; }
        else if (ctx->pc != 0x158160u) { ctx->pc = 0x158160u; }
    }
    if (ctx->pc != 0x158160u) { return; }
    ctx->pc = 0x158160u;
    // 0x158160: 0xc055248
    ctx->pc = 0x158160u;
    SET_GPR_U32(ctx, 31, 0x158168u);
    ctx->pc = 0x158164u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294942920)));
    ctx->pc = 0x154920u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x154920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158168u; }
        else if (ctx->pc != 0x158168u) { ctx->pc = 0x158168u; }
    }
    if (ctx->pc != 0x158168u) { return; }
    ctx->pc = 0x158168u;
    // 0x158168: 0x3c03002e
    ctx->pc = 0x158168u;
    SET_GPR_U32(ctx, 3, ((uint32_t)46 << 16));
    // 0x15816c: 0x2470a440
    ctx->pc = 0x15816cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4294943808));
    // 0x158170: 0x26030200
    ctx->pc = 0x158170u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 512));
    // 0x158174: 0x203102b
    ctx->pc = 0x158174u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x158178: 0x1040000d
    ctx->pc = 0x158178u;
    {
        const bool branch_taken_0x158178 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15817Cu;
        SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
        if (branch_taken_0x158178) {
            ctx->pc = 0x1581B0u;
            goto label_1581b0;
        }
    }
    ctx->pc = 0x158180u;
    // 0x158180: 0x8e020004
    ctx->pc = 0x158180u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x158184: 0x0
    ctx->pc = 0x158184u;
    // NOP
label_158188:
    // 0x158188: 0x54400006
    ctx->pc = 0x158188u;
    {
        const bool branch_taken_0x158188 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x158188) {
            ctx->pc = 0x15818Cu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
            ctx->pc = 0x1581A4u;
            goto label_1581a4;
        }
    }
    ctx->pc = 0x158190u;
    // 0x158190: 0x8e24a0c8
    ctx->pc = 0x158190u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294942920)));
    // 0x158194: 0xc055240
    ctx->pc = 0x158194u;
    SET_GPR_U32(ctx, 31, 0x15819Cu);
    ctx->pc = 0x158198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    ctx->pc = 0x154900u;
    {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x154900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15819Cu; }
        else if (ctx->pc != 0x15819Cu) { ctx->pc = 0x15819Cu; }
    }
    if (ctx->pc != 0x15819Cu) { return; }
    ctx->pc = 0x15819Cu;
    // 0x15819c: 0x10000007
    ctx->pc = 0x15819Cu;
    {
        const bool branch_taken_0x15819c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1581A0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15819c) {
            ctx->pc = 0x1581BCu;
            goto label_1581bc;
        }
    }
    ctx->pc = 0x1581A4u;
label_1581a4:
    // 0x1581a4: 0x203102b
    ctx->pc = 0x1581a4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1581a8: 0x5440fff7
    ctx->pc = 0x1581A8u;
    {
        const bool branch_taken_0x1581a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1581a8) {
            ctx->pc = 0x1581ACu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x158188u;
            goto label_158188;
        }
    }
    ctx->pc = 0x1581B0u;
label_1581b0:
    // 0x1581b0: 0xc055240
    ctx->pc = 0x1581B0u;
    SET_GPR_U32(ctx, 31, 0x1581B8u);
    ctx->pc = 0x1581B4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294942920)));
    ctx->pc = 0x154900u;
    {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x154900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1581B8u; }
        else if (ctx->pc != 0x1581B8u) { ctx->pc = 0x1581B8u; }
    }
    if (ctx->pc != 0x1581B8u) { return; }
    ctx->pc = 0x1581B8u;
    // 0x1581b8: 0x102d
    ctx->pc = 0x1581b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1581bc:
    // 0x1581bc: 0xdfbf0020
    ctx->pc = 0x1581bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1581c0: 0xdfb10010
    ctx->pc = 0x1581c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1581c4: 0xdfb00000
    ctx->pc = 0x1581c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1581c8: 0x3e00008
    ctx->pc = 0x1581C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1581CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x158188u: goto label_158188;
            case 0x1581A4u: goto label_1581a4;
            case 0x1581B0u: goto label_1581b0;
            case 0x1581BCu: goto label_1581bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1581D0u;
}
