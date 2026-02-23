#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dvCiOpen
// Address: 0x1777e0 - 0x177920
void dvCiOpen_0x1777e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dvCiOpen");


    ctx->pc = 0x1777e0u;

    // 0x1777e0: 0x27bdffb0
    ctx->pc = 0x1777e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1777e4: 0xffb20020
    ctx->pc = 0x1777e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1777e8: 0xffbf0040
    ctx->pc = 0x1777e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1777ec: 0x80902d
    ctx->pc = 0x1777ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1777f0: 0xffb30030
    ctx->pc = 0x1777f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1777f4: 0xffb10010
    ctx->pc = 0x1777f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1777f8: 0x16400005
    ctx->pc = 0x1777F8u;
    {
        const bool branch_taken_0x1777f8 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x1777FCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x1777f8) {
            ctx->pc = 0x177810u;
            goto label_177810;
        }
    }
    ctx->pc = 0x177800u;
    // 0x177800: 0x3c05002c
    ctx->pc = 0x177800u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x177804: 0x202d
    ctx->pc = 0x177804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177808: 0x1000000e
    ctx->pc = 0x177808u;
    {
        const bool branch_taken_0x177808 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17780Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294947624));
        if (branch_taken_0x177808) {
            ctx->pc = 0x177844u;
            goto label_177844;
        }
    }
    ctx->pc = 0x177810u;
label_177810:
    // 0x177810: 0x10c00004
    ctx->pc = 0x177810u;
    {
        const bool branch_taken_0x177810 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x177814u;
        SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
        if (branch_taken_0x177810) {
            ctx->pc = 0x177824u;
            goto label_177824;
        }
    }
    ctx->pc = 0x177818u;
    // 0x177818: 0x202d
    ctx->pc = 0x177818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17781c: 0x10000009
    ctx->pc = 0x17781Cu;
    {
        const bool branch_taken_0x17781c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x177820u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294947664));
        if (branch_taken_0x17781c) {
            ctx->pc = 0x177844u;
            goto label_177844;
        }
    }
    ctx->pc = 0x177824u;
label_177824:
    // 0x177824: 0xc05dde6
    ctx->pc = 0x177824u;
    SET_GPR_U32(ctx, 31, 0x17782Cu);
    ctx->pc = 0x177798u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvci_alloc_0x177798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17782Cu; }
        else if (ctx->pc != 0x17782Cu) { ctx->pc = 0x17782Cu; }
    }
    if (ctx->pc != 0x17782Cu) { return; }
    ctx->pc = 0x17782Cu;
    // 0x17782c: 0x40882d
    ctx->pc = 0x17782cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177830: 0x16200008
    ctx->pc = 0x177830u;
    {
        const bool branch_taken_0x177830 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x177834u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 17), 24));
        if (branch_taken_0x177830) {
            ctx->pc = 0x177854u;
            goto label_177854;
        }
    }
    ctx->pc = 0x177838u;
    // 0x177838: 0x3c05002c
    ctx->pc = 0x177838u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x17783c: 0x202d
    ctx->pc = 0x17783cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177840: 0x24a5b378
    ctx->pc = 0x177840u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294947704));
label_177844:
    // 0x177844: 0xc05dd3c
    ctx->pc = 0x177844u;
    SET_GPR_U32(ctx, 31, 0x17784Cu);
    ctx->pc = 0x1774F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvci_call_errfn_0x1774f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17784Cu; }
        else if (ctx->pc != 0x17784Cu) { ctx->pc = 0x17784Cu; }
    }
    if (ctx->pc != 0x17784Cu) { return; }
    ctx->pc = 0x17784Cu;
    // 0x17784c: 0x1000002d
    ctx->pc = 0x17784Cu;
    {
        const bool branch_taken_0x17784c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x177850u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17784c) {
            ctx->pc = 0x177904u;
            goto label_177904;
        }
    }
    ctx->pc = 0x177854u;
label_177854:
    // 0x177854: 0x240202d
    ctx->pc = 0x177854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177858: 0xc05e0b6
    ctx->pc = 0x177858u;
    SET_GPR_U32(ctx, 31, 0x177860u);
    ctx->pc = 0x17785Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1782D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvci_get_fstate_0x1782d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177860u; }
        else if (ctx->pc != 0x177860u) { ctx->pc = 0x177860u; }
    }
    if (ctx->pc != 0x177860u) { return; }
    ctx->pc = 0x177860u;
    // 0x177860: 0x8e24001c
    ctx->pc = 0x177860u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x177864: 0x1480001b
    ctx->pc = 0x177864u;
    {
        const bool branch_taken_0x177864 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x177868u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x177864) {
            ctx->pc = 0x1778D4u;
            goto label_1778d4;
        }
    }
    ctx->pc = 0x17786Cu;
    // 0x17786c: 0x3c100024
    ctx->pc = 0x17786cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)36 << 16));
    // 0x177870: 0x240202d
    ctx->pc = 0x177870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177874: 0x26109dd8
    ctx->pc = 0x177874u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294942168));
    // 0x177878: 0xc05df2c
    ctx->pc = 0x177878u;
    SET_GPR_U32(ctx, 31, 0x177880u);
    ctx->pc = 0x17787Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177CB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvci_conv_fname_0x177cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177880u; }
        else if (ctx->pc != 0x177880u) { ctx->pc = 0x177880u; }
    }
    if (ctx->pc != 0x177880u) { return; }
    ctx->pc = 0x177880u;
    // 0x177880: 0xc05d82e
    ctx->pc = 0x177880u;
    SET_GPR_U32(ctx, 31, 0x177888u);
    ctx->pc = 0x1760B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SRD_WaitComplete_0x1760b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177888u; }
        else if (ctx->pc != 0x177888u) { ctx->pc = 0x177888u; }
    }
    if (ctx->pc != 0x177888u) { return; }
    ctx->pc = 0x177888u;
    // 0x177888: 0x3c04002c
    ctx->pc = 0x177888u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17788c: 0x240282d
    ctx->pc = 0x17788cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177890: 0xc05114a
    ctx->pc = 0x177890u;
    SET_GPR_U32(ctx, 31, 0x177898u);
    ctx->pc = 0x177894u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947752));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177898u; }
        else if (ctx->pc != 0x177898u) { ctx->pc = 0x177898u; }
    }
    if (ctx->pc != 0x177898u) { return; }
    ctx->pc = 0x177898u;
    // 0x177898: 0x260202d
    ctx->pc = 0x177898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17789c: 0xc0543c0
    ctx->pc = 0x17789Cu;
    SET_GPR_U32(ctx, 31, 0x1778A4u);
    ctx->pc = 0x1778A0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x150F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceCdSearchFile_0x150f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1778A4u; }
        else if (ctx->pc != 0x1778A4u) { ctx->pc = 0x1778A4u; }
    }
    if (ctx->pc != 0x1778A4u) { return; }
    ctx->pc = 0x1778A4u;
    // 0x1778a4: 0x54400009
    ctx->pc = 0x1778A4u;
    {
        const bool branch_taken_0x1778a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1778a4) {
            ctx->pc = 0x1778A8u;
            WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x1778CCu;
            goto label_1778cc;
        }
    }
    ctx->pc = 0x1778ACu;
    // 0x1778ac: 0x3c05002c
    ctx->pc = 0x1778acu;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x1778b0: 0x202d
    ctx->pc = 0x1778b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1778b4: 0xc05dd3c
    ctx->pc = 0x1778B4u;
    SET_GPR_U32(ctx, 31, 0x1778BCu);
    ctx->pc = 0x1778B8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294947792));
    ctx->pc = 0x1774F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvci_call_errfn_0x1774f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1778BCu; }
        else if (ctx->pc != 0x1778BCu) { ctx->pc = 0x1778BCu; }
    }
    if (ctx->pc != 0x1778BCu) { return; }
    ctx->pc = 0x1778BCu;
    // 0x1778bc: 0xc05ddf4
    ctx->pc = 0x1778BCu;
    SET_GPR_U32(ctx, 31, 0x1778C4u);
    ctx->pc = 0x1778C0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1777D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvci_free_0x1777d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1778C4u; }
        else if (ctx->pc != 0x1778C4u) { ctx->pc = 0x1778C4u; }
    }
    if (ctx->pc != 0x1778C4u) { return; }
    ctx->pc = 0x1778C4u;
    // 0x1778c4: 0x1000000f
    ctx->pc = 0x1778C4u;
    {
        const bool branch_taken_0x1778c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1778C8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1778c4) {
            ctx->pc = 0x177904u;
            goto label_177904;
        }
    }
    ctx->pc = 0x1778CCu;
label_1778cc:
    // 0x1778cc: 0x10000002
    ctx->pc = 0x1778CCu;
    {
        const bool branch_taken_0x1778cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1778D0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 28)));
        if (branch_taken_0x1778cc) {
            ctx->pc = 0x1778D8u;
            goto label_1778d8;
        }
    }
    ctx->pc = 0x1778D4u;
label_1778d4:
    // 0x1778d4: 0xa2220001
    ctx->pc = 0x1778d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_1778d8:
    // 0x1778d8: 0x248207ff
    ctx->pc = 0x1778d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 2047));
    // 0x1778dc: 0x24030001
    ctx->pc = 0x1778dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1778e0: 0x212c2
    ctx->pc = 0x1778e0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 11));
    // 0x1778e4: 0xa2230000
    ctx->pc = 0x1778e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1778e8: 0xae220008
    ctx->pc = 0x1778e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1778ec: 0xae240004
    ctx->pc = 0x1778ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x1778f0: 0x220102d
    ctx->pc = 0x1778f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1778f4: 0xae20000c
    ctx->pc = 0x1778f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1778f8: 0xae200014
    ctx->pc = 0x1778f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1778fc: 0xae200010
    ctx->pc = 0x1778fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x177900: 0xa2200002
    ctx->pc = 0x177900u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
label_177904:
    // 0x177904: 0xdfbf0040
    ctx->pc = 0x177904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x177908: 0xdfb30030
    ctx->pc = 0x177908u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17790c: 0xdfb20020
    ctx->pc = 0x17790cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177910: 0xdfb10010
    ctx->pc = 0x177910u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177914: 0xdfb00000
    ctx->pc = 0x177914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177918: 0x3e00008
    ctx->pc = 0x177918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17791Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x177810u: goto label_177810;
            case 0x177824u: goto label_177824;
            case 0x177844u: goto label_177844;
            case 0x177854u: goto label_177854;
            case 0x1778CCu: goto label_1778cc;
            case 0x1778D4u: goto label_1778d4;
            case 0x1778D8u: goto label_1778d8;
            case 0x177904u: goto label_177904;
            default: break;
        }
        return;
    }
    ctx->pc = 0x177920u;
}
