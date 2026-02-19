#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBTraversePsys
// Address: 0x2cc818 - 0x2cc884
void MBTraversePsys_0x2cc818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cc818u;

    // 0x2cc818: 0x27bdfff0
    ctx->pc = 0x2cc818u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cc81c: 0xffbf0000
    ctx->pc = 0x2cc81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cc820: 0x80382d
    ctx->pc = 0x2cc820u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc824: 0xa0202d
    ctx->pc = 0x2cc824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc828: 0x3c02003a
    ctx->pc = 0x2cc828u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2cc82c: 0x8ce60070
    ctx->pc = 0x2cc82cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 112)));
    // 0x2cc830: 0x10c00006
    ctx->pc = 0x2CC830u;
    {
        const bool branch_taken_0x2cc830 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CC834u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294945336));
        if (branch_taken_0x2cc830) {
            ctx->pc = 0x2CC84Cu;
            goto label_2cc84c;
        }
    }
    ctx->pc = 0x2CC838u;
    // 0x2cc838: 0x8c620058
    ctx->pc = 0x2cc838u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2cc83c: 0x1040000b
    ctx->pc = 0x2CC83Cu;
    {
        const bool branch_taken_0x2cc83c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cc83c) {
            ctx->pc = 0x2CC86Cu;
            goto label_2cc86c;
        }
    }
    ctx->pc = 0x2CC844u;
    // 0x2cc844: 0x10000006
    ctx->pc = 0x2CC844u;
    {
        const bool branch_taken_0x2cc844 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CC848u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 88)));
        if (branch_taken_0x2cc844) {
            ctx->pc = 0x2CC860u;
            goto label_2cc860;
        }
    }
    ctx->pc = 0x2CC84Cu;
label_2cc84c:
    // 0x2cc84c: 0x3c04003b
    ctx->pc = 0x2cc84cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2cc850: 0xc0b492e
    ctx->pc = 0x2CC850u;
    SET_GPR_U32(ctx, 31, 0x2CC858u);
    ctx->pc = 0x2CC854u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 30112));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC858u; }
    }
    if (ctx->pc != 0x2CC858u) { return; }
    ctx->pc = 0x2CC858u;
    // 0x2cc858: 0x10000007
    ctx->pc = 0x2CC858u;
    {
        const bool branch_taken_0x2cc858 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CC85Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2cc858) {
            ctx->pc = 0x2CC878u;
            goto label_2cc878;
        }
    }
    ctx->pc = 0x2CC860u;
label_2cc860:
    // 0x2cc860: 0x8cc20000
    ctx->pc = 0x2cc860u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2cc864: 0x14620004
    ctx->pc = 0x2CC864u;
    {
        const bool branch_taken_0x2cc864 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2CC868u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cc864) {
            ctx->pc = 0x2CC878u;
            goto label_2cc878;
        }
    }
    ctx->pc = 0x2CC86Cu;
label_2cc86c:
    // 0x2cc86c: 0xc0b1f86
    ctx->pc = 0x2CC86Cu;
    SET_GPR_U32(ctx, 31, 0x2CC874u);
    ctx->pc = 0x2CC870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C7E18u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddPsysObject_0x2c7e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC874u; }
    }
    if (ctx->pc != 0x2CC874u) { return; }
    ctx->pc = 0x2CC874u;
    // 0x2cc874: 0x102d
    ctx->pc = 0x2cc874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cc878:
    // 0x2cc878: 0xdfbf0000
    ctx->pc = 0x2cc878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc87c: 0x3e00008
    ctx->pc = 0x2CC87Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC880u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CC84Cu: goto label_2cc84c;
            case 0x2CC860u: goto label_2cc860;
            case 0x2CC86Cu: goto label_2cc86c;
            case 0x2CC878u: goto label_2cc878;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CC884u;
}
