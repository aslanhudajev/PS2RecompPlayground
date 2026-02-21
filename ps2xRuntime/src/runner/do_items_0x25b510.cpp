#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_items
// Address: 0x25b510 - 0x25b5d0
void do_items_0x25b510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25b510u;

    // 0x25b510: 0x27bdffe0
    ctx->pc = 0x25b510u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25b514: 0xffbf0010
    ctx->pc = 0x25b514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25b518: 0xffb00000
    ctx->pc = 0x25b518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25b51c: 0x3c020031
    ctx->pc = 0x25b51cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x25b520: 0x3c030031
    ctx->pc = 0x25b520u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x25b524: 0x8c42ff9c
    ctx->pc = 0x25b524u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
    // 0x25b528: 0x8c630024
    ctx->pc = 0x25b528u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x25b52c: 0x431025
    ctx->pc = 0x25b52cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25b530: 0x14400024
    ctx->pc = 0x25B530u;
    {
        const bool branch_taken_0x25b530 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25B534u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x25b530) {
            ctx->pc = 0x25B5C4u;
            goto label_25b5c4;
        }
    }
    ctx->pc = 0x25B538u;
    // 0x25b538: 0xc0953c4
    ctx->pc = 0x25B538u;
    SET_GPR_U32(ctx, 31, 0x25B540u);
    ctx->pc = 0x254F10u;
    {
        const uint32_t __entryPc = ctx->pc;
        ProcessItems_0x254f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B540u; }
    }
    if (ctx->pc != 0x25B540u) { return; }
    ctx->pc = 0x25B540u;
    // 0x25b540: 0x3c020034
    ctx->pc = 0x25b540u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25b544: 0x8c44cda0
    ctx->pc = 0x25b544u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294954400)));
    // 0x25b548: 0x10800004
    ctx->pc = 0x25B548u;
    {
        const bool branch_taken_0x25b548 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B54Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x25b548) {
            ctx->pc = 0x25B55Cu;
            goto label_25b55c;
        }
    }
    ctx->pc = 0x25B550u;
    // 0x25b550: 0xc084cc4
    ctx->pc = 0x25B550u;
    SET_GPR_U32(ctx, 31, 0x25B558u);
    ctx->pc = 0x213310u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoTexMods_0x213310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B558u; }
    }
    if (ctx->pc != 0x25B558u) { return; }
    ctx->pc = 0x25B558u;
    // 0x25b558: 0x3c020034
    ctx->pc = 0x25b558u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_25b55c:
    // 0x25b55c: 0x8c44cda4
    ctx->pc = 0x25b55cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294954404)));
    // 0x25b560: 0x10800004
    ctx->pc = 0x25B560u;
    {
        const bool branch_taken_0x25b560 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B564u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x25b560) {
            ctx->pc = 0x25B574u;
            goto label_25b574;
        }
    }
    ctx->pc = 0x25B568u;
    // 0x25b568: 0xc084cc4
    ctx->pc = 0x25B568u;
    SET_GPR_U32(ctx, 31, 0x25B570u);
    ctx->pc = 0x213310u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoTexMods_0x213310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B570u; }
    }
    if (ctx->pc != 0x25B570u) { return; }
    ctx->pc = 0x25B570u;
    // 0x25b570: 0x3c020034
    ctx->pc = 0x25b570u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_25b574:
    // 0x25b574: 0x8c44cda8
    ctx->pc = 0x25b574u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294954408)));
    // 0x25b578: 0x10800004
    ctx->pc = 0x25B578u;
    {
        const bool branch_taken_0x25b578 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B57Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x25b578) {
            ctx->pc = 0x25B58Cu;
            goto label_25b58c;
        }
    }
    ctx->pc = 0x25B580u;
    // 0x25b580: 0xc084cc4
    ctx->pc = 0x25B580u;
    SET_GPR_U32(ctx, 31, 0x25B588u);
    ctx->pc = 0x213310u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoTexMods_0x213310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B588u; }
    }
    if (ctx->pc != 0x25B588u) { return; }
    ctx->pc = 0x25B588u;
    // 0x25b588: 0x3c020034
    ctx->pc = 0x25b588u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_25b58c:
    // 0x25b58c: 0x8c44cdac
    ctx->pc = 0x25b58cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294954412)));
    // 0x25b590: 0x10800003
    ctx->pc = 0x25B590u;
    {
        const bool branch_taken_0x25b590 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B594u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25b590) {
            ctx->pc = 0x25B5A0u;
            goto label_25b5a0;
        }
    }
    ctx->pc = 0x25B598u;
    // 0x25b598: 0xc084cc4
    ctx->pc = 0x25B598u;
    SET_GPR_U32(ctx, 31, 0x25B5A0u);
    ctx->pc = 0x213310u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoTexMods_0x213310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B5A0u; }
    }
    if (ctx->pc != 0x25B5A0u) { return; }
    ctx->pc = 0x25B5A0u;
label_25b5a0:
    // 0x25b5a0: 0xc08bc8a
    ctx->pc = 0x25B5A0u;
    SET_GPR_U32(ctx, 31, 0x25B5A8u);
    ctx->pc = 0x25B5A4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22F228u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoPlayerTexMods_0x22f228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B5A8u; }
    }
    if (ctx->pc != 0x25B5A8u) { return; }
    ctx->pc = 0x25B5A8u;
    // 0x25b5a8: 0x26100001
    ctx->pc = 0x25b5a8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x25b5ac: 0x2a020004
    ctx->pc = 0x25b5acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x25b5b0: 0x1440fffb
    ctx->pc = 0x25B5B0u;
    {
        const bool branch_taken_0x25b5b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25B5B4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x25b5b0) {
            ctx->pc = 0x25B5A0u;
            goto label_25b5a0;
        }
    }
    ctx->pc = 0x25B5B8u;
    // 0x25b5b8: 0xdfb00000
    ctx->pc = 0x25b5b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b5bc: 0x80844c0
    ctx->pc = 0x25B5BCu;
    ctx->pc = 0x25B5C0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x211300u;
    DoSpecialTexmods_0x211300(rdram, ctx, runtime); return;
    ctx->pc = 0x25B5C4u;
label_25b5c4:
    // 0x25b5c4: 0xdfb00000
    ctx->pc = 0x25b5c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b5c8: 0x3e00008
    ctx->pc = 0x25B5C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B5CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25B55Cu: goto label_25b55c;
            case 0x25B574u: goto label_25b574;
            case 0x25B58Cu: goto label_25b58c;
            case 0x25B5A0u: goto label_25b5a0;
            case 0x25B5C4u: goto label_25b5c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25B5D0u;
}
