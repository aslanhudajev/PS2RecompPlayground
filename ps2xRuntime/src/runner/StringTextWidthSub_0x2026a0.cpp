#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StringTextWidthSub
// Address: 0x2026a0 - 0x2027c4
void StringTextWidthSub_0x2026a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2026a0u;

    // 0x2026a0: 0x27bdff90
    ctx->pc = 0x2026a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2026a4: 0xffbf0050
    ctx->pc = 0x2026a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2026a8: 0xffb40040
    ctx->pc = 0x2026a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2026ac: 0xffb30030
    ctx->pc = 0x2026acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2026b0: 0xffb20020
    ctx->pc = 0x2026b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2026b4: 0xffb10010
    ctx->pc = 0x2026b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2026b8: 0xffb00000
    ctx->pc = 0x2026b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2026bc: 0xe7b40060
    ctx->pc = 0x2026bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2026c0: 0x80902d
    ctx->pc = 0x2026c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2026c4: 0xc0802d
    ctx->pc = 0x2026c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2026c8: 0x982d
    ctx->pc = 0x2026c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2026cc: 0x24040014
    ctx->pc = 0x2026ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 20));
    // 0x2026d0: 0xa42818
    ctx->pc = 0x2026d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2026d4: 0x8e420018
    ctx->pc = 0x2026d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2026d8: 0xa28821
    ctx->pc = 0x2026d8u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2026dc: 0x8e220008
    ctx->pc = 0x2026dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2026e0: 0x8e43000c
    ctx->pc = 0x2026e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2026e4: 0x441018
    ctx->pc = 0x2026e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2026e8: 0x431021
    ctx->pc = 0x2026e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2026ec: 0x8c540010
    ctx->pc = 0x2026ecu;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2026f0: 0xc620000c
    ctx->pc = 0x2026f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2026f4: 0x6000013
    ctx->pc = 0x2026F4u;
    {
        const bool branch_taken_0x2026f4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2026F8u;
        ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        if (branch_taken_0x2026f4) {
            ctx->pc = 0x202744u;
            goto label_202744;
        }
    }
    ctx->pc = 0x2026FCu;
    // 0x2026fc: 0x8e220000
    ctx->pc = 0x2026fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x202700: 0x202102a
    ctx->pc = 0x202700u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x202704: 0x54400003
    ctx->pc = 0x202704u;
    {
        const bool branch_taken_0x202704 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x202704) {
            ctx->pc = 0x202708u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->pc = 0x202714u;
            goto label_202714;
        }
    }
    ctx->pc = 0x20270Cu;
    // 0x20270c: 0x10000024
    ctx->pc = 0x20270Cu;
    {
        const bool branch_taken_0x20270c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x202710u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20270c) {
            ctx->pc = 0x2027A0u;
            goto label_2027a0;
        }
    }
    ctx->pc = 0x202714u;
label_202714:
    // 0x202714: 0x2021021
    ctx->pc = 0x202714u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x202718: 0x8e430014
    ctx->pc = 0x202718u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x20271c: 0x21080
    ctx->pc = 0x20271cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x202720: 0x431021
    ctx->pc = 0x202720u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x202724: 0x8c420000
    ctx->pc = 0x202724u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202728: 0x8e440010
    ctx->pc = 0x202728u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x20272c: 0x442021
    ctx->pc = 0x20272cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x202730: 0x280282d
    ctx->pc = 0x202730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202734: 0xc080982
    ctx->pc = 0x202734u;
    SET_GPR_U32(ctx, 31, 0x20273Cu);
    ctx->pc = 0x202738u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x202608u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScrollTextWidthSub_0x202608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20273Cu; }
    }
    if (ctx->pc != 0x20273Cu) { return; }
    ctx->pc = 0x20273Cu;
    // 0x20273c: 0x10000017
    ctx->pc = 0x20273Cu;
    {
        const bool branch_taken_0x20273c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x202740u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20273c) {
            ctx->pc = 0x20279Cu;
            goto label_20279c;
        }
    }
    ctx->pc = 0x202744u;
label_202744:
    // 0x202744: 0x8e220000
    ctx->pc = 0x202744u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x202748: 0x18400014
    ctx->pc = 0x202748u;
    {
        const bool branch_taken_0x202748 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x20274Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x202748) {
            ctx->pc = 0x20279Cu;
            goto label_20279c;
        }
    }
    ctx->pc = 0x202750u;
    // 0x202750: 0x8e220004
    ctx->pc = 0x202750u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x202754: 0x0
    ctx->pc = 0x202754u;
    // NOP
label_202758:
    // 0x202758: 0x2021021
    ctx->pc = 0x202758u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x20275c: 0x8e430014
    ctx->pc = 0x20275cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x202760: 0x21080
    ctx->pc = 0x202760u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x202764: 0x431021
    ctx->pc = 0x202764u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x202768: 0x8c420000
    ctx->pc = 0x202768u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20276c: 0x8e440010
    ctx->pc = 0x20276cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x202770: 0x442021
    ctx->pc = 0x202770u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x202774: 0x280282d
    ctx->pc = 0x202774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202778: 0xc080982
    ctx->pc = 0x202778u;
    SET_GPR_U32(ctx, 31, 0x202780u);
    ctx->pc = 0x20277Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x202608u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScrollTextWidthSub_0x202608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202780u; }
    }
    if (ctx->pc != 0x202780u) { return; }
    ctx->pc = 0x202780u;
    // 0x202780: 0x262182a
    ctx->pc = 0x202780u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
    // 0x202784: 0x43980b
    ctx->pc = 0x202784u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 2));
    // 0x202788: 0x26100001
    ctx->pc = 0x202788u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x20278c: 0x8e220000
    ctx->pc = 0x20278cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x202790: 0x202102a
    ctx->pc = 0x202790u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x202794: 0x5440fff0
    ctx->pc = 0x202794u;
    {
        const bool branch_taken_0x202794 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x202794) {
            ctx->pc = 0x202798u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->pc = 0x202758u;
            goto label_202758;
        }
    }
    ctx->pc = 0x20279Cu;
label_20279c:
    // 0x20279c: 0x260102d
    ctx->pc = 0x20279cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2027a0:
    // 0x2027a0: 0xdfbf0050
    ctx->pc = 0x2027a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2027a4: 0xdfb40040
    ctx->pc = 0x2027a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2027a8: 0xdfb30030
    ctx->pc = 0x2027a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2027ac: 0xdfb20020
    ctx->pc = 0x2027acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2027b0: 0xdfb10010
    ctx->pc = 0x2027b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2027b4: 0xdfb00000
    ctx->pc = 0x2027b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2027b8: 0xc7b40060
    ctx->pc = 0x2027b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2027bc: 0x3e00008
    ctx->pc = 0x2027BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2027C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202714u: goto label_202714;
            case 0x202744u: goto label_202744;
            case 0x202758u: goto label_202758;
            case 0x20279Cu: goto label_20279c;
            case 0x2027A0u: goto label_2027a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2027C4u;
}
