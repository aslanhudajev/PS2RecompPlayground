#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _pictureData0
// Address: 0x2f15a8 - 0x2f16cc
void _pictureData0_0x2f15a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f15a8u;

    // 0x2f15a8: 0x3c02003a
    ctx->pc = 0x2f15a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f15ac: 0x3c03003a
    ctx->pc = 0x2f15acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2f15b0: 0x27bdff90
    ctx->pc = 0x2f15b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f15b4: 0x8c473168
    ctx->pc = 0x2f15b4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 12648)));
    // 0x2f15b8: 0x8c66316c
    ctx->pc = 0x2f15b8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 12652)));
    // 0x2f15bc: 0x3c05003a
    ctx->pc = 0x2f15bcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2f15c0: 0xffb10010
    ctx->pc = 0x2f15c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f15c4: 0xffb50050
    ctx->pc = 0x2f15c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2f15c8: 0xe68818
    ctx->pc = 0x2f15c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2f15cc: 0x3c15003a
    ctx->pc = 0x2f15ccu;
    SET_GPR_U32(ctx, 21, ((uint32_t)58 << 16));
    // 0x2f15d0: 0xffb40040
    ctx->pc = 0x2f15d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2f15d4: 0xffb30030
    ctx->pc = 0x2f15d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f15d8: 0x26a23638
    ctx->pc = 0x2f15d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 13880));
    // 0x2f15dc: 0xffb20020
    ctx->pc = 0x2f15dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f15e0: 0x24140001
    ctx->pc = 0x2f15e0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f15e4: 0x8ca331ec
    ctx->pc = 0x2f15e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 12780)));
    // 0x2f15e8: 0x80902d
    ctx->pc = 0x2f15e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f15ec: 0xffbf0060
    ctx->pc = 0x2f15ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2f15f0: 0x24130003
    ctx->pc = 0x2f15f0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f15f4: 0xffb00000
    ctx->pc = 0x2f15f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f15f8: 0x38630003
    ctx->pc = 0x2f15f8u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 3));
    // 0x2f15fc: 0xac400284
    ctx->pc = 0x2f15fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 644), GPR_U32(ctx, 0));
    // 0x2f1600: 0xac400280
    ctx->pc = 0x2f1600u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 0));
    // 0x2f1604: 0x111043
    ctx->pc = 0x2f1604u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x2f1608: 0x43880b
    ctx->pc = 0x2f1608u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 2));
    // 0x2f160c: 0x0
    ctx->pc = 0x2f160cu;
    // NOP
label_2f1610:
    // 0x2f1610: 0x240202d
    ctx->pc = 0x2f1610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f1614:
    // 0x2f1614: 0xc0bc5fe
    ctx->pc = 0x2F1614u;
    SET_GPR_U32(ctx, 31, 0x2F161Cu);
    ctx->pc = 0x2F1618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F17F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _slice0_0x2f17f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F161Cu; }
    }
    if (ctx->pc != 0x2F161Cu) { return; }
    ctx->pc = 0x2F161Cu;
    // 0x2f161c: 0x40802d
    ctx->pc = 0x2f161cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1620: 0x1214fffc
    ctx->pc = 0x2F1620u;
    {
        const bool branch_taken_0x2f1620 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 20));
        ctx->pc = 0x2F1624u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f1620) {
            ctx->pc = 0x2F1614u;
            goto label_2f1614;
        }
    }
    ctx->pc = 0x2F1628u;
    // 0x2f1628: 0x1213fff9
    ctx->pc = 0x2F1628u;
    {
        const bool branch_taken_0x2f1628 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 19));
        if (branch_taken_0x2f1628) {
            ctx->pc = 0x2F1610u;
            goto label_2f1610;
        }
    }
    ctx->pc = 0x2F1630u;
    // 0x2f1630: 0xc0bc8da
    ctx->pc = 0x2F1630u;
    SET_GPR_U32(ctx, 31, 0x2F1638u);
    ctx->pc = 0x2F2368u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x2f2368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1638u; }
    }
    if (ctx->pc != 0x2F1638u) { return; }
    ctx->pc = 0x2F1638u;
    // 0x2f1638: 0xc0bc43c
    ctx->pc = 0x2F1638u;
    SET_GPR_U32(ctx, 31, 0x2F1640u);
    ctx->pc = 0x2F10F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitBdecOut_0x2f10f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1640u; }
    }
    if (ctx->pc != 0x2F1640u) { return; }
    ctx->pc = 0x2F1640u;
    // 0x2f1640: 0x24030002
    ctx->pc = 0x2f1640u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f1644: 0x3c041000
    ctx->pc = 0x2f1644u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x2f1648: 0x62800a
    ctx->pc = 0x2f1648u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
    // 0x2f164c: 0x3484d400
    ctx->pc = 0x2f164cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 54272));
    // 0x2f1650: 0x2611ffff
    ctx->pc = 0x2f1650u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2f1654: 0x2e120001
    ctx->pc = 0x2f1654u;
    SET_GPR_U32(ctx, 18, SLTU32(GPR_U32(ctx, 16), 1));
label_2f1658:
    // 0x2f1658: 0x8c820000
    ctx->pc = 0x2f1658u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10000000
    // 0x2f165c: 0x21202
    ctx->pc = 0x2f165cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f1660: 0x30420001
    ctx->pc = 0x2f1660u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2f1664: 0x0
    ctx->pc = 0x2f1664u;
    // NOP
    // 0x2f1668: 0x0
    ctx->pc = 0x2f1668u;
    // NOP
    // 0x2f166c: 0x1440fffa
    ctx->pc = 0x2F166Cu;
    {
        const bool branch_taken_0x2f166c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2f166c) {
            ctx->pc = 0x2F1658u;
            goto label_2f1658;
        }
    }
    ctx->pc = 0x2F1674u;
    // 0x2f1674: 0x16000006
    ctx->pc = 0x2F1674u;
    {
        const bool branch_taken_0x2f1674 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F1678u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x2f1674) {
            ctx->pc = 0x2F1690u;
            goto label_2f1690;
        }
    }
    ctx->pc = 0x2F167Cu;
    // 0x2f167c: 0x26a23638
    ctx->pc = 0x2f167cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 13880));
    // 0x2f1680: 0x8c440280
    ctx->pc = 0x2f1680u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x2f1684: 0xc0bc05a
    ctx->pc = 0x2F1684u;
    SET_GPR_U32(ctx, 31, 0x2F168Cu);
    ctx->pc = 0x2F1688u;
    SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x2F0168u;
    {
        const uint32_t __entryPc = ctx->pc;
        _doMC_0x2f0168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F168Cu; }
    }
    if (ctx->pc != 0x2F168Cu) { return; }
    ctx->pc = 0x2F168Cu;
    // 0x2f168c: 0x2e220002
    ctx->pc = 0x2f168cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 2));
label_2f1690:
    // 0x2f1690: 0x10400005
    ctx->pc = 0x2F1690u;
    {
        const bool branch_taken_0x2f1690 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1694u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f1690) {
            ctx->pc = 0x2F16A8u;
            goto label_2f16a8;
        }
    }
    ctx->pc = 0x2F1698u;
    // 0x2f1698: 0x3c04003c
    ctx->pc = 0x2f1698u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2f169c: 0xc0bba56
    ctx->pc = 0x2F169Cu;
    SET_GPR_U32(ctx, 31, 0x2F16A4u);
    ctx->pc = 0x2F16A0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942680));
    ctx->pc = 0x2EE958u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x2ee958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F16A4u; }
    }
    if (ctx->pc != 0x2F16A4u) { return; }
    ctx->pc = 0x2F16A4u;
    // 0x2f16a4: 0x240102d
    ctx->pc = 0x2f16a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f16a8:
    // 0x2f16a8: 0xdfbf0060
    ctx->pc = 0x2f16a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f16ac: 0xdfb50050
    ctx->pc = 0x2f16acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f16b0: 0xdfb40040
    ctx->pc = 0x2f16b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f16b4: 0xdfb30030
    ctx->pc = 0x2f16b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f16b8: 0xdfb20020
    ctx->pc = 0x2f16b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f16bc: 0xdfb10010
    ctx->pc = 0x2f16bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f16c0: 0xdfb00000
    ctx->pc = 0x2f16c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f16c4: 0x3e00008
    ctx->pc = 0x2F16C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F16C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F1610u: goto label_2f1610;
            case 0x2F1614u: goto label_2f1614;
            case 0x2F1658u: goto label_2f1658;
            case 0x2F1690u: goto label_2f1690;
            case 0x2F16A8u: goto label_2f16a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F16CCu;
}
