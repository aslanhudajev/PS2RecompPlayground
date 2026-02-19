#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: cam_collide_to_all_targets
// Address: 0x26a530 - 0x26a5c8
void cam_collide_to_all_targets_0x26a530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26a530u;

    // 0x26a530: 0x27bdffa0
    ctx->pc = 0x26a530u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x26a534: 0xffbf0050
    ctx->pc = 0x26a534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x26a538: 0xffb30040
    ctx->pc = 0x26a538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x26a53c: 0xffb20030
    ctx->pc = 0x26a53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x26a540: 0xffb10020
    ctx->pc = 0x26a540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x26a544: 0xffb00010
    ctx->pc = 0x26a544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x26a548: 0x240201a0
    ctx->pc = 0x26a548u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26a54c: 0x822018
    ctx->pc = 0x26a54cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26a550: 0x3c020034
    ctx->pc = 0x26a550u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26a554: 0x2442eb60
    ctx->pc = 0x26a554u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x26a558: 0x829821
    ctx->pc = 0x26a558u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26a55c: 0x902d
    ctx->pc = 0x26a55cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a560: 0x882d
    ctx->pc = 0x26a560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a564: 0x3c020034
    ctx->pc = 0x26a564u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26a568: 0x10000003
    ctx->pc = 0x26A568u;
    {
        const bool branch_taken_0x26a568 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26A56Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294964528));
        if (branch_taken_0x26a568) {
            ctx->pc = 0x26A578u;
            goto label_26a578;
        }
    }
    ctx->pc = 0x26A570u;
label_26a570:
    // 0x26a570: 0x26310001
    ctx->pc = 0x26a570u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_26a574:
    // 0x26a574: 0x26100040
    ctx->pc = 0x26a574u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 64));
label_26a578:
    // 0x26a578: 0x2a22000f
    ctx->pc = 0x26a578u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 15));
    // 0x26a57c: 0x1040000b
    ctx->pc = 0x26A57Cu;
    {
        const bool branch_taken_0x26a57c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26A580u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x26a57c) {
            ctx->pc = 0x26A5ACu;
            goto label_26a5ac;
        }
    }
    ctx->pc = 0x26A584u;
    // 0x26a584: 0x8e020000
    ctx->pc = 0x26a584u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26a588: 0x1840fff9
    ctx->pc = 0x26A588u;
    {
        const bool branch_taken_0x26a588 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26A58Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 112));
        if (branch_taken_0x26a588) {
            ctx->pc = 0x26A570u;
            goto label_26a570;
        }
    }
    ctx->pc = 0x26A590u;
    // 0x26a590: 0x8e050004
    ctx->pc = 0x26a590u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26a594: 0xc087ce2
    ctx->pc = 0x26A594u;
    SET_GPR_U32(ctx, 31, 0x26A59Cu);
    ctx->pc = 0x26A598u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    ctx->pc = 0x21F388u;
    {
        const uint32_t __entryPc = ctx->pc;
        CameraCollide_0x21f388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A59Cu; }
    }
    if (ctx->pc != 0x26A59Cu) { return; }
    ctx->pc = 0x26A59Cu;
    // 0x26a59c: 0x1040fff5
    ctx->pc = 0x26A59Cu;
    {
        const bool branch_taken_0x26a59c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26A5A0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x26a59c) {
            ctx->pc = 0x26A574u;
            goto label_26a574;
        }
    }
    ctx->pc = 0x26A5A4u;
    // 0x26a5a4: 0x24120001
    ctx->pc = 0x26a5a4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x26a5a8: 0x240102d
    ctx->pc = 0x26a5a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26a5ac:
    // 0x26a5ac: 0xdfbf0050
    ctx->pc = 0x26a5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26a5b0: 0xdfb30040
    ctx->pc = 0x26a5b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26a5b4: 0xdfb20030
    ctx->pc = 0x26a5b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26a5b8: 0xdfb10020
    ctx->pc = 0x26a5b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26a5bc: 0xdfb00010
    ctx->pc = 0x26a5bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a5c0: 0x3e00008
    ctx->pc = 0x26A5C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A5C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26A570u: goto label_26a570;
            case 0x26A574u: goto label_26a574;
            case 0x26A578u: goto label_26a578;
            case 0x26A5ACu: goto label_26a5ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26A5C8u;
}
