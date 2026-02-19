#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ControllerMessageBox
// Address: 0x2287e0 - 0x228ca8
void ControllerMessageBox_0x2287e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2287e0u;

    // 0x2287e0: 0x27bdff10
    ctx->pc = 0x2287e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2287e4: 0xffbf00d0
    ctx->pc = 0x2287e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2287e8: 0xffbe00c0
    ctx->pc = 0x2287e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x2287ec: 0xffb700b0
    ctx->pc = 0x2287ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x2287f0: 0xffb600a0
    ctx->pc = 0x2287f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x2287f4: 0xffb50090
    ctx->pc = 0x2287f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x2287f8: 0xffb40080
    ctx->pc = 0x2287f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2287fc: 0xffb30070
    ctx->pc = 0x2287fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x228800: 0xffb20060
    ctx->pc = 0x228800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x228804: 0xffb10050
    ctx->pc = 0x228804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x228808: 0xffb00040
    ctx->pc = 0x228808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x22880c: 0xe7b400e0
    ctx->pc = 0x22880cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x228810: 0x3c020031
    ctx->pc = 0x228810u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x228814: 0x8c42ff9c
    ctx->pc = 0x228814u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
    // 0x228818: 0xafa20020
    ctx->pc = 0x228818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x22881c: 0x2402ffff
    ctx->pc = 0x22881cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x228820: 0xafa20028
    ctx->pc = 0x228820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x228824: 0xafa00030
    ctx->pc = 0x228824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x228828: 0x3c013f80
    ctx->pc = 0x228828u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x22882c: 0x4481a000
    ctx->pc = 0x22882cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x228830: 0x3c020031
    ctx->pc = 0x228830u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x228834: 0x8c430018
    ctx->pc = 0x228834u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x228838: 0x2462bff2
    ctx->pc = 0x228838u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294950898));
    // 0x22883c: 0x2c420002
    ctx->pc = 0x22883cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x228840: 0x1440010c
    ctx->pc = 0x228840u;
    {
        const bool branch_taken_0x228840 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x228844u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x228840) {
            ctx->pc = 0x228C74u;
            goto label_228c74;
        }
    }
    ctx->pc = 0x228848u;
    // 0x228848: 0x30628000
    ctx->pc = 0x228848u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 32768));
    // 0x22884c: 0x10400003
    ctx->pc = 0x22884Cu;
    {
        const bool branch_taken_0x22884c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x228850u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32777));
        if (branch_taken_0x22884c) {
            ctx->pc = 0x22885Cu;
            goto label_22885c;
        }
    }
    ctx->pc = 0x228854u;
    // 0x228854: 0x14620107
    ctx->pc = 0x228854u;
    {
        const bool branch_taken_0x228854 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x228858u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x228854) {
            ctx->pc = 0x228C74u;
            goto label_228c74;
        }
    }
    ctx->pc = 0x22885Cu;
label_22885c:
    // 0x22885c: 0xc081782
    ctx->pc = 0x22885Cu;
    SET_GPR_U32(ctx, 31, 0x228864u);
    ctx->pc = 0x228860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x205E08u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnablePlayerControls_0x205e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228864u; }
    }
    if (ctx->pc != 0x228864u) { return; }
    ctx->pc = 0x228864u;
    // 0x228864: 0x0
    ctx->pc = 0x228864u;
    // NOP
label_228868:
    // 0x228868: 0xc08da4e
    ctx->pc = 0x228868u;
    SET_GPR_U32(ctx, 31, 0x228870u);
    ctx->pc = 0x22886Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x236938u;
    {
        const uint32_t __entryPc = ctx->pc;
        WritePlayerInfo_0x236938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228870u; }
    }
    if (ctx->pc != 0x228870u) { return; }
    ctx->pc = 0x228870u;
    // 0x228870: 0x26100001
    ctx->pc = 0x228870u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x228874: 0x2a020004
    ctx->pc = 0x228874u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x228878: 0x1440fffb
    ctx->pc = 0x228878u;
    {
        const bool branch_taken_0x228878 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22887Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x228878) {
            ctx->pc = 0x228868u;
            goto label_228868;
        }
    }
    ctx->pc = 0x228880u;
    // 0x228880: 0x3c100032
    ctx->pc = 0x228880u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x228884: 0x8e0208b8
    ctx->pc = 0x228884u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2232)));
    // 0x228888: 0x24420001
    ctx->pc = 0x228888u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x22888c: 0xae0208b8
    ctx->pc = 0x22888cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2232), GPR_U32(ctx, 2));
    // 0x228890: 0x3c020031
    ctx->pc = 0x228890u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x228894: 0xc0a3bae
    ctx->pc = 0x228894u;
    SET_GPR_U32(ctx, 31, 0x22889Cu);
    ctx->pc = 0x228898u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967196), GPR_U32(ctx, 17));
    ctx->pc = 0x28EEB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoHelp_0x28eeb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22889Cu; }
    }
    if (ctx->pc != 0x22889Cu) { return; }
    ctx->pc = 0x22889Cu;
    // 0x22889c: 0x8e0408b8
    ctx->pc = 0x22889cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2232)));
    // 0x2288a0: 0xc0b15fe
    ctx->pc = 0x2288A0u;
    SET_GPR_U32(ctx, 31, 0x2288A8u);
    ctx->pc = 0x2288A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    ctx->pc = 0x2C57F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBLockMessages_0x2c57f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2288A8u; }
    }
    if (ctx->pc != 0x2288A8u) { return; }
    ctx->pc = 0x2288A8u;
    // 0x2288a8: 0x3c020037
    ctx->pc = 0x2288a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2288ac: 0xac5131ac
    ctx->pc = 0x2288acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12716), GPR_U32(ctx, 17));
    // 0x2288b0: 0x3c020032
    ctx->pc = 0x2288b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2288b4: 0x8c440ab0
    ctx->pc = 0x2288b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 2736)));
    // 0x2288b8: 0x282d
    ctx->pc = 0x2288b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2288bc: 0xc0b0c08
    ctx->pc = 0x2288BCu;
    SET_GPR_U32(ctx, 31, 0x2288C4u);
    ctx->pc = 0x2288C0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2288C4u; }
    }
    if (ctx->pc != 0x2288C4u) { return; }
    ctx->pc = 0x2288C4u;
    // 0x2288c4: 0xafa20024
    ctx->pc = 0x2288c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x2288c8: 0xc080750
    ctx->pc = 0x2288C8u;
    SET_GPR_U32(ctx, 31, 0x2288D0u);
    ctx->pc = 0x2288CCu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x201D40u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetDrawStringScale_0x201d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2288D0u; }
    }
    if (ctx->pc != 0x2288D0u) { return; }
    ctx->pc = 0x2288D0u;
    // 0x2288d0: 0x3c020031
    ctx->pc = 0x2288d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2288d4: 0xac510e50
    ctx->pc = 0x2288d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3664), GPR_U32(ctx, 17));
    // 0x2288d8: 0x3c020031
    ctx->pc = 0x2288d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2288dc: 0x8c420e4c
    ctx->pc = 0x2288dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 3660)));
    // 0x2288e0: 0x10400092
    ctx->pc = 0x2288E0u;
    {
        const bool branch_taken_0x2288e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2288E4u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 3600));
        if (branch_taken_0x2288e0) {
            ctx->pc = 0x228B2Cu;
            goto label_228b2c;
        }
    }
    ctx->pc = 0x2288E8u;
    // 0x2288e8: 0x3c170031
    ctx->pc = 0x2288e8u;
    SET_GPR_U32(ctx, 23, ((uint32_t)49 << 16));
    // 0x2288ec: 0x8fa40030
    ctx->pc = 0x2288ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2288f0:
    // 0x2288f0: 0x30830001
    ctx->pc = 0x2288f0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 1));
    // 0x2288f4: 0x24020003
    ctx->pc = 0x2288f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2288f8: 0x24040002
    ctx->pc = 0x2288f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2288fc: 0xc080f52
    ctx->pc = 0x2288FCu;
    SET_GPR_U32(ctx, 31, 0x228904u);
    ctx->pc = 0x228900u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
    ctx->pc = 0x203D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        serve_mtap_0x203d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228904u; }
    }
    if (ctx->pc != 0x228904u) { return; }
    ctx->pc = 0x228904u;
    // 0x228904: 0x8ee20e4c
    ctx->pc = 0x228904u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 3660)));
    // 0x228908: 0x30420f00
    ctx->pc = 0x228908u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3840));
    // 0x22890c: 0x10400004
    ctx->pc = 0x22890Cu;
    {
        const bool branch_taken_0x22890c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x228910u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 187));
        if (branch_taken_0x22890c) {
            ctx->pc = 0x228920u;
            goto label_228920;
        }
    }
    ctx->pc = 0x228914u;
    // 0x228914: 0x24160f00
    ctx->pc = 0x228914u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 3840));
    // 0x228918: 0x10000012
    ctx->pc = 0x228918u;
    {
        const bool branch_taken_0x228918 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22891Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x228918) {
            ctx->pc = 0x228964u;
            goto label_228964;
        }
    }
    ctx->pc = 0x228920u;
label_228920:
    // 0x228920: 0x241400ba
    ctx->pc = 0x228920u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 186));
    // 0x228924: 0x882d
    ctx->pc = 0x228924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228928: 0x8ee20e4c
    ctx->pc = 0x228928u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 3660)));
    // 0x22892c: 0x30420001
    ctx->pc = 0x22892cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x228930: 0x1440000c
    ctx->pc = 0x228930u;
    {
        const bool branch_taken_0x228930 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x228934u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x228930) {
            ctx->pc = 0x228964u;
            goto label_228964;
        }
    }
    ctx->pc = 0x228938u;
    // 0x228938: 0x24040001
    ctx->pc = 0x228938u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x22893c: 0x3c020031
    ctx->pc = 0x22893cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x228940: 0x8c430e4c
    ctx->pc = 0x228940u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 3660)));
    // 0x228944: 0x26310001
    ctx->pc = 0x228944u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_228948:
    // 0x228948: 0x2a220004
    ctx->pc = 0x228948u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
    // 0x22894c: 0x10400006
    ctx->pc = 0x22894Cu;
    {
        const bool branch_taken_0x22894c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x228950u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3600));
        if (branch_taken_0x22894c) {
            ctx->pc = 0x228968u;
            goto label_228968;
        }
    }
    ctx->pc = 0x228954u;
    // 0x228954: 0x224b004
    ctx->pc = 0x228954u;
    SET_GPR_U32(ctx, 22, SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 17) & 0x1F));
    // 0x228958: 0x2c31024
    ctx->pc = 0x228958u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x22895c: 0x5040fffa
    ctx->pc = 0x22895Cu;
    {
        const bool branch_taken_0x22895c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22895c) {
            ctx->pc = 0x228960u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x228948u;
            goto label_228948;
        }
    }
    ctx->pc = 0x228964u;
label_228964:
    // 0x228964: 0x24020e10
    ctx->pc = 0x228964u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3600));
label_228968:
    // 0x228968: 0x8fa40028
    ctx->pc = 0x228968u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22896c: 0x2841826
    ctx->pc = 0x22896cu;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x228970: 0x43980b
    ctx->pc = 0x228970u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 2));
    // 0x228974: 0xafb40028
    ctx->pc = 0x228974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 20));
    // 0x228978: 0xc081d04
    ctx->pc = 0x228978u;
    SET_GPR_U32(ctx, 31, 0x228980u);
    ctx->pc = 0x22897Cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)516 << 16));
    ctx->pc = 0x207410u;
    {
        const uint32_t __entryPc = ctx->pc;
        active_player_edge_0x207410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228980u; }
    }
    if (ctx->pc != 0x228980u) { return; }
    ctx->pc = 0x228980u;
    // 0x228980: 0x2663ffc4
    ctx->pc = 0x228980u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 19), 4294967236));
    // 0x228984: 0x62980b
    ctx->pc = 0x228984u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 3));
    // 0x228988: 0x280202d
    ctx->pc = 0x228988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22898c: 0x2405ffff
    ctx->pc = 0x22898cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x228990: 0xc0809f2
    ctx->pc = 0x228990u;
    SET_GPR_U32(ctx, 31, 0x228998u);
    ctx->pc = 0x228994u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2027C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StringTextWidth_0x2027c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228998u; }
    }
    if (ctx->pc != 0x228998u) { return; }
    ctx->pc = 0x228998u;
    // 0x228998: 0x24520060
    ctx->pc = 0x228998u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 96));
    // 0x22899c: 0x280202d
    ctx->pc = 0x22899cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2289a0: 0x2405ffff
    ctx->pc = 0x2289a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2289a4: 0x24060004
    ctx->pc = 0x2289a4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2289a8: 0xc080a62
    ctx->pc = 0x2289A8u;
    SET_GPR_U32(ctx, 31, 0x2289B0u);
    ctx->pc = 0x2289ACu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x202988u;
    {
        const uint32_t __entryPc = ctx->pc;
        StringTextHeight_0x202988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2289B0u; }
    }
    if (ctx->pc != 0x2289B0u) { return; }
    ctx->pc = 0x2289B0u;
    // 0x2289b0: 0x6400006
    ctx->pc = 0x2289B0u;
    {
        const bool branch_taken_0x2289b0 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2289B4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 96));
        if (branch_taken_0x2289b0) {
            ctx->pc = 0x2289CCu;
            goto label_2289cc;
        }
    }
    ctx->pc = 0x2289B8u;
    // 0x2289b8: 0x2a430201
    ctx->pc = 0x2289b8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), 513));
    // 0x2289bc: 0x24020200
    ctx->pc = 0x2289bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 512));
    // 0x2289c0: 0x40282d
    ctx->pc = 0x2289c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2289c4: 0x10000002
    ctx->pc = 0x2289C4u;
    {
        const bool branch_taken_0x2289c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2289C8u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 18));
        if (branch_taken_0x2289c4) {
            ctx->pc = 0x2289D0u;
            goto label_2289d0;
        }
    }
    ctx->pc = 0x2289CCu;
label_2289cc:
    // 0x2289cc: 0x282d
    ctx->pc = 0x2289ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2289d0:
    // 0x2289d0: 0xa0902d
    ctx->pc = 0x2289d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2289d4: 0x1217c2
    ctx->pc = 0x2289d4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 18), 31));
    // 0x2289d8: 0x2421021
    ctx->pc = 0x2289d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2289dc: 0x21043
    ctx->pc = 0x2289dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2289e0: 0x24030100
    ctx->pc = 0x2289e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 256));
    // 0x2289e4: 0x621823
    ctx->pc = 0x2289e4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2289e8: 0xafa3002c
    ctx->pc = 0x2289e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x2289ec: 0x1517c2
    ctx->pc = 0x2289ecu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 21), 31));
    // 0x2289f0: 0x2a21021
    ctx->pc = 0x2289f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2289f4: 0x21043
    ctx->pc = 0x2289f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2289f8: 0x240300a0
    ctx->pc = 0x2289f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 160));
    // 0x2289fc: 0x62f023
    ctx->pc = 0x2289fcu;
    SET_GPR_U32(ctx, 30, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x228a00: 0x27d00020
    ctx->pc = 0x228a00u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 30), 32));
    // 0x228a04: 0x8fa40024
    ctx->pc = 0x228a04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x228a08: 0xc0b0cf6
    ctx->pc = 0x228A08u;
    SET_GPR_U32(ctx, 31, 0x228A10u);
    ctx->pc = 0x228A0Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228A10u; }
    }
    if (ctx->pc != 0x228A10u) { return; }
    ctx->pc = 0x228A10u;
    // 0x228a10: 0x8fa40024
    ctx->pc = 0x228a10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x228a14: 0x8fa5002c
    ctx->pc = 0x228a14u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x228a18: 0x3c01bf80
    ctx->pc = 0x228a18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x228a1c: 0x44816000
    ctx->pc = 0x228a1cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x228a20: 0xc0b0df2
    ctx->pc = 0x228A20u;
    SET_GPR_U32(ctx, 31, 0x228A28u);
    ctx->pc = 0x228A24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C37C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetPos_0x2c37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228A28u; }
    }
    if (ctx->pc != 0x228A28u) { return; }
    ctx->pc = 0x228A28u;
    // 0x228a28: 0xc080b88
    ctx->pc = 0x228A28u;
    SET_GPR_U32(ctx, 31, 0x228A30u);
    ctx->pc = 0x202E20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ClockOncePerFrame_0x202e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228A30u; }
    }
    if (ctx->pc != 0x228A30u) { return; }
    ctx->pc = 0x228A30u;
    // 0x228a30: 0xc088ad6
    ctx->pc = 0x228A30u;
    SET_GPR_U32(ctx, 31, 0x228A38u);
    ctx->pc = 0x222B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioQueUpdate_0x222b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228A38u; }
    }
    if (ctx->pc != 0x228A38u) { return; }
    ctx->pc = 0x228A38u;
    // 0x228a38: 0x3c020031
    ctx->pc = 0x228a38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x228a3c: 0x8c42ffc0
    ctx->pc = 0x228a3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967232)));
    // 0x228a40: 0xc0815b4
    ctx->pc = 0x228A40u;
    SET_GPR_U32(ctx, 31, 0x228A48u);
    ctx->pc = 0x228A44u;
    SET_GPR_U32(ctx, 19, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    ctx->pc = 0x2056D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerControls_0x2056d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228A48u; }
    }
    if (ctx->pc != 0x228A48u) { return; }
    ctx->pc = 0x228A48u;
    // 0x228a48: 0xc08ab98
    ctx->pc = 0x228A48u;
    SET_GPR_U32(ctx, 31, 0x228A50u);
    ctx->pc = 0x22AE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScreenSaver_0x22ae60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228A50u; }
    }
    if (ctx->pc != 0x228A50u) { return; }
    ctx->pc = 0x228A50u;
    // 0x228a50: 0xc09734e
    ctx->pc = 0x228A50u;
    SET_GPR_U32(ctx, 31, 0x228A58u);
    ctx->pc = 0x25CD38u;
    {
        const uint32_t __entryPc = ctx->pc;
        BGMusicUpdate_0x25cd38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228A58u; }
    }
    if (ctx->pc != 0x228A58u) { return; }
    ctx->pc = 0x228A58u;
    // 0x228a58: 0x2404ff00
    ctx->pc = 0x228a58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x228a5c: 0x200282d
    ctx->pc = 0x228a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228a60: 0x24060004
    ctx->pc = 0x228a60u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x228a64: 0x24070006
    ctx->pc = 0x228a64u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 6));
    // 0x228a68: 0x3c080016
    ctx->pc = 0x228a68u;
    SET_GPR_U32(ctx, 8, ((uint32_t)22 << 16));
    // 0x228a6c: 0x35080c03
    ctx->pc = 0x228a6cu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 3075));
    // 0x228a70: 0x280482d
    ctx->pc = 0x228a70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228a74: 0xc0808f4
    ctx->pc = 0x228A74u;
    SET_GPR_U32(ctx, 31, 0x228A7Cu);
    ctx->pc = 0x228A78u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x2023D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawStringTextMLines_0x2023d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228A7Cu; }
    }
    if (ctx->pc != 0x228A7Cu) { return; }
    ctx->pc = 0x228A7Cu;
    // 0x228a7c: 0x40802d
    ctx->pc = 0x228a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228a80: 0x2402003c
    ctx->pc = 0x228a80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x228a84: 0x262001a
    ctx->pc = 0x228a84u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 19);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x228a88: 0x3012
    ctx->pc = 0x228a88u;
    SET_GPR_U32(ctx, 6, ctx->lo);
    // 0x228a8c: 0x50400001
    ctx->pc = 0x228A8Cu;
    {
        const bool branch_taken_0x228a8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x228a8c) {
            ctx->pc = 0x228A90u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x228A94u;
            goto label_228a94;
        }
    }
    ctx->pc = 0x228A94u;
label_228a94:
    // 0x228a94: 0x3a0202d
    ctx->pc = 0x228a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228a98: 0x3c05003a
    ctx->pc = 0x228a98u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x228a9c: 0xc0b6252
    ctx->pc = 0x228A9Cu;
    SET_GPR_U32(ctx, 31, 0x228AA4u);
    ctx->pc = 0x228AA0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 28136));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228AA4u; }
    }
    if (ctx->pc != 0x228AA4u) { return; }
    ctx->pc = 0x228AA4u;
    // 0x228aa4: 0x2404ff00
    ctx->pc = 0x228aa4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x228aa8: 0x26050008
    ctx->pc = 0x228aa8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 8));
    // 0x228aac: 0x24060006
    ctx->pc = 0x228aacu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x228ab0: 0x3c070016
    ctx->pc = 0x228ab0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)22 << 16));
    // 0x228ab4: 0x34e70c03
    ctx->pc = 0x228ab4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 3075));
    // 0x228ab8: 0x3c013f80
    ctx->pc = 0x228ab8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x228abc: 0x44816000
    ctx->pc = 0x228abcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x228ac0: 0xc080510
    ctx->pc = 0x228AC0u;
    SET_GPR_U32(ctx, 31, 0x228AC8u);
    ctx->pc = 0x228AC4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228AC8u; }
    }
    if (ctx->pc != 0x228AC8u) { return; }
    ctx->pc = 0x228AC8u;
    // 0x228ac8: 0xc0b179a
    ctx->pc = 0x228AC8u;
    SET_GPR_U32(ctx, 31, 0x228AD0u);
    ctx->pc = 0x2C5E68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBEndFrame_0x2c5e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228AD0u; }
    }
    if (ctx->pc != 0x228AD0u) { return; }
    ctx->pc = 0x228AD0u;
    // 0x228ad0: 0x8fa30030
    ctx->pc = 0x228ad0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x228ad4: 0x24630001
    ctx->pc = 0x228ad4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x228ad8: 0x1e60000e
    ctx->pc = 0x228AD8u;
    {
        const bool branch_taken_0x228ad8 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x228ADCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        if (branch_taken_0x228ad8) {
            ctx->pc = 0x228B14u;
            goto label_228b14;
        }
    }
    ctx->pc = 0x228AE0u;
    // 0x228ae0: 0x3c040031
    ctx->pc = 0x228ae0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x228ae4: 0x8c830e4c
    ctx->pc = 0x228ae4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 3660)));
    // 0x228ae8: 0x30620f00
    ctx->pc = 0x228ae8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3840));
    // 0x228aec: 0x10400005
    ctx->pc = 0x228AECu;
    {
        const bool branch_taken_0x228aec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x228AF0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294963455));
        if (branch_taken_0x228aec) {
            ctx->pc = 0x228B04u;
            goto label_228b04;
        }
    }
    ctx->pc = 0x228AF4u;
    // 0x228af4: 0x621024
    ctx->pc = 0x228af4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x228af8: 0xac820e4c
    ctx->pc = 0x228af8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3660), GPR_U32(ctx, 2));
    // 0x228afc: 0x10000005
    ctx->pc = 0x228AFCu;
    {
        const bool branch_taken_0x228afc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x228B00u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 3600));
        if (branch_taken_0x228afc) {
            ctx->pc = 0x228B14u;
            goto label_228b14;
        }
    }
    ctx->pc = 0x228B04u;
label_228b04:
    // 0x228b04: 0x161027
    ctx->pc = 0x228b04u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 22)));
    // 0x228b08: 0x8ee30e4c
    ctx->pc = 0x228b08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 23), 3660)));
    // 0x228b0c: 0x431024
    ctx->pc = 0x228b0cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x228b10: 0xaee20e4c
    ctx->pc = 0x228b10u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 3660), GPR_U32(ctx, 2));
label_228b14:
    // 0x228b14: 0xc0894b8
    ctx->pc = 0x228B14u;
    SET_GPR_U32(ctx, 31, 0x228B1Cu);
    ctx->pc = 0x2252E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CheckSoftReset_0x2252e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228B1Cu; }
    }
    if (ctx->pc != 0x228B1Cu) { return; }
    ctx->pc = 0x228B1Cu;
    // 0x228b1c: 0x14400003
    ctx->pc = 0x228B1Cu;
    {
        const bool branch_taken_0x228b1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x228B20u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 3660)));
        if (branch_taken_0x228b1c) {
            ctx->pc = 0x228B2Cu;
            goto label_228b2c;
        }
    }
    ctx->pc = 0x228B24u;
    // 0x228b24: 0x1440ff72
    ctx->pc = 0x228B24u;
    {
        const bool branch_taken_0x228b24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x228B28u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x228b24) {
            ctx->pc = 0x2288F0u;
            goto label_2288f0;
        }
    }
    ctx->pc = 0x228B2Cu;
label_228b2c:
    // 0x228b2c: 0x3c020031
    ctx->pc = 0x228b2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x228b30: 0xac400e50
    ctx->pc = 0x228b30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3664), GPR_U32(ctx, 0));
    // 0x228b34: 0x882d
    ctx->pc = 0x228b34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228b38: 0x3c020031
    ctx->pc = 0x228b38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x228b3c: 0x24500e90
    ctx->pc = 0x228b3cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 3728));
    // 0x228b40: 0x111080
    ctx->pc = 0x228b40u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x228b44: 0x0
    ctx->pc = 0x228b44u;
    // NOP
label_228b48:
    // 0x228b48: 0x501021
    ctx->pc = 0x228b48u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x228b4c: 0x8c420000
    ctx->pc = 0x228b4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x228b50: 0x4430004
    ctx->pc = 0x228B50u;
    {
        const bool branch_taken_0x228b50 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x228b50) {
            ctx->pc = 0x228B54u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x228B64u;
            goto label_228b64;
        }
    }
    ctx->pc = 0x228B58u;
    // 0x228b58: 0xc08c684
    ctx->pc = 0x228B58u;
    SET_GPR_U32(ctx, 31, 0x228B60u);
    ctx->pc = 0x228B5Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x231A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        inactivate_player_0x231a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228B60u; }
    }
    if (ctx->pc != 0x228B60u) { return; }
    ctx->pc = 0x228B60u;
    // 0x228b60: 0x26310001
    ctx->pc = 0x228b60u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_228b64:
    // 0x228b64: 0x2a220004
    ctx->pc = 0x228b64u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
    // 0x228b68: 0x1440fff7
    ctx->pc = 0x228B68u;
    {
        const bool branch_taken_0x228b68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x228B6Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x228b68) {
            ctx->pc = 0x228B48u;
            goto label_228b48;
        }
    }
    ctx->pc = 0x228B70u;
    // 0x228b70: 0x3c020031
    ctx->pc = 0x228b70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x228b74: 0xdc420e28
    ctx->pc = 0x228b74u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x228b78: 0x30420008
    ctx->pc = 0x228b78u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
    // 0x228b7c: 0x14400004
    ctx->pc = 0x228B7Cu;
    {
        const bool branch_taken_0x228b7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x228B80u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x228b7c) {
            ctx->pc = 0x228B90u;
            goto label_228b90;
        }
    }
    ctx->pc = 0x228B84u;
    // 0x228b84: 0xc0816cc
    ctx->pc = 0x228B84u;
    SET_GPR_U32(ctx, 31, 0x228B8Cu);
    ctx->pc = 0x228B88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x205B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        ClearAllPlayerControls_0x205b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228B8Cu; }
    }
    if (ctx->pc != 0x228B8Cu) { return; }
    ctx->pc = 0x228B8Cu;
    // 0x228b8c: 0x3c020032
    ctx->pc = 0x228b8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_228b90:
    // 0x228b90: 0x8c440ab0
    ctx->pc = 0x228b90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 2736)));
    // 0x228b94: 0x2405ffff
    ctx->pc = 0x228b94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x228b98: 0x8fa6002c
    ctx->pc = 0x228b98u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x228b9c: 0x3c0382d
    ctx->pc = 0x228b9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228ba0: 0x240402d
    ctx->pc = 0x228ba0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228ba4: 0x2a0482d
    ctx->pc = 0x228ba4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228ba8: 0x44806000
    ctx->pc = 0x228ba8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x228bac: 0xc08a334
    ctx->pc = 0x228BACu;
    SET_GPR_U32(ctx, 31, 0x228BB4u);
    ctx->pc = 0x228BB0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x228CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFireScroll_0x228cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228BB4u; }
    }
    if (ctx->pc != 0x228BB4u) { return; }
    ctx->pc = 0x228BB4u;
    // 0x228bb4: 0x40202d
    ctx->pc = 0x228bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228bb8: 0xc0b0ba0
    ctx->pc = 0x228BB8u;
    SET_GPR_U32(ctx, 31, 0x228BC0u);
    ctx->pc = 0x228BBCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->pc = 0x2C2E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitOrder_0x2c2e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228BC0u; }
    }
    if (ctx->pc != 0x228BC0u) { return; }
    ctx->pc = 0x228BC0u;
    // 0x228bc0: 0x10000003
    ctx->pc = 0x228BC0u;
    {
        const bool branch_taken_0x228bc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x228bc0) {
            ctx->pc = 0x228BD0u;
            goto label_228bd0;
        }
    }
    ctx->pc = 0x228BC8u;
label_228bc8:
    // 0x228bc8: 0xc0b179a
    ctx->pc = 0x228BC8u;
    SET_GPR_U32(ctx, 31, 0x228BD0u);
    ctx->pc = 0x2C5E68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBEndFrame_0x2c5e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228BD0u; }
    }
    if (ctx->pc != 0x228BD0u) { return; }
    ctx->pc = 0x228BD0u;
label_228bd0:
    // 0x228bd0: 0xc080b88
    ctx->pc = 0x228BD0u;
    SET_GPR_U32(ctx, 31, 0x228BD8u);
    ctx->pc = 0x202E20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ClockOncePerFrame_0x202e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228BD8u; }
    }
    if (ctx->pc != 0x228BD8u) { return; }
    ctx->pc = 0x228BD8u;
    // 0x228bd8: 0xc088ad6
    ctx->pc = 0x228BD8u;
    SET_GPR_U32(ctx, 31, 0x228BE0u);
    ctx->pc = 0x222B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioQueUpdate_0x222b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228BE0u; }
    }
    if (ctx->pc != 0x228BE0u) { return; }
    ctx->pc = 0x228BE0u;
    // 0x228be0: 0xc08a458
    ctx->pc = 0x228BE0u;
    SET_GPR_U32(ctx, 31, 0x228BE8u);
    ctx->pc = 0x229160u;
    {
        const uint32_t __entryPc = ctx->pc;
        ServeFireScroll_0x229160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228BE8u; }
    }
    if (ctx->pc != 0x228BE8u) { return; }
    ctx->pc = 0x228BE8u;
    // 0x228be8: 0x1440fff7
    ctx->pc = 0x228BE8u;
    {
        const bool branch_taken_0x228be8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x228be8) {
            ctx->pc = 0x228BC8u;
            goto label_228bc8;
        }
    }
    ctx->pc = 0x228BF0u;
    // 0x228bf0: 0xc0b0b38
    ctx->pc = 0x228BF0u;
    SET_GPR_U32(ctx, 31, 0x228BF8u);
    ctx->pc = 0x228BF4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228BF8u; }
    }
    if (ctx->pc != 0x228BF8u) { return; }
    ctx->pc = 0x228BF8u;
    // 0x228bf8: 0xc080756
    ctx->pc = 0x228BF8u;
    SET_GPR_U32(ctx, 31, 0x228C00u);
    ctx->pc = 0x228BFCu;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    ctx->pc = 0x201D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        RestoreDrawStringScale_0x201d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228C00u; }
    }
    if (ctx->pc != 0x228C00u) { return; }
    ctx->pc = 0x228C00u;
    // 0x228c00: 0x8e0408b8
    ctx->pc = 0x228c00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2232)));
    // 0x228c04: 0xc0b161c
    ctx->pc = 0x228C04u;
    SET_GPR_U32(ctx, 31, 0x228C0Cu);
    ctx->pc = 0x228C08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    ctx->pc = 0x2C5870u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBUnlockMessages_0x2c5870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228C0Cu; }
    }
    if (ctx->pc != 0x228C0Cu) { return; }
    ctx->pc = 0x228C0Cu;
    // 0x228c0c: 0x3c020037
    ctx->pc = 0x228c0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x228c10: 0xac4031ac
    ctx->pc = 0x228c10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12716), GPR_U32(ctx, 0));
    // 0x228c14: 0x8e0208b8
    ctx->pc = 0x228c14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2232)));
    // 0x228c18: 0x2442ffff
    ctx->pc = 0x228c18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x228c1c: 0xae0208b8
    ctx->pc = 0x228c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2232), GPR_U32(ctx, 2));
    // 0x228c20: 0x3c020031
    ctx->pc = 0x228c20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x228c24: 0x8fa40020
    ctx->pc = 0x228c24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228c28: 0xac44ff9c
    ctx->pc = 0x228c28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967196), GPR_U32(ctx, 4));
    // 0x228c2c: 0x802d
    ctx->pc = 0x228c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228c30: 0x3c020032
    ctx->pc = 0x228c30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x228c34: 0x24451bc0
    ctx->pc = 0x228c34u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x228c38: 0x24032b00
    ctx->pc = 0x228c38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x228c3c: 0x0
    ctx->pc = 0x228c3cu;
    // NOP
label_228c40:
    // 0x228c40: 0x2032018
    ctx->pc = 0x228c40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x228c44: 0x851021
    ctx->pc = 0x228c44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x228c48: 0xa440093e
    ctx->pc = 0x228c48u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2366), (uint16_t)GPR_U32(ctx, 0));
    // 0x228c4c: 0x26100001
    ctx->pc = 0x228c4cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x228c50: 0x2a020004
    ctx->pc = 0x228c50u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x228c54: 0x0
    ctx->pc = 0x228c54u;
    // NOP
    // 0x228c58: 0x1440fff9
    ctx->pc = 0x228C58u;
    {
        const bool branch_taken_0x228c58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x228c58) {
            ctx->pc = 0x228C40u;
            goto label_228c40;
        }
    }
    ctx->pc = 0x228C60u;
    // 0x228c60: 0xc0816cc
    ctx->pc = 0x228C60u;
    SET_GPR_U32(ctx, 31, 0x228C68u);
    ctx->pc = 0x228C64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x205B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        ClearAllPlayerControls_0x205b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228C68u; }
    }
    if (ctx->pc != 0x228C68u) { return; }
    ctx->pc = 0x228C68u;
    // 0x228c68: 0xc080366
    ctx->pc = 0x228C68u;
    SET_GPR_U32(ctx, 31, 0x228C70u);
    ctx->pc = 0x200D98u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadVU1GameLogic_0x200d98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228C70u; }
    }
    if (ctx->pc != 0x228C70u) { return; }
    ctx->pc = 0x228C70u;
    // 0x228c70: 0x102d
    ctx->pc = 0x228c70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228c74:
    // 0x228c74: 0xdfbf00d0
    ctx->pc = 0x228c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x228c78: 0xdfbe00c0
    ctx->pc = 0x228c78u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x228c7c: 0xdfb700b0
    ctx->pc = 0x228c7cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x228c80: 0xdfb600a0
    ctx->pc = 0x228c80u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x228c84: 0xdfb50090
    ctx->pc = 0x228c84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x228c88: 0xdfb40080
    ctx->pc = 0x228c88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x228c8c: 0xdfb30070
    ctx->pc = 0x228c8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x228c90: 0xdfb20060
    ctx->pc = 0x228c90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x228c94: 0xdfb10050
    ctx->pc = 0x228c94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x228c98: 0xdfb00040
    ctx->pc = 0x228c98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228c9c: 0xc7b400e0
    ctx->pc = 0x228c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x228ca0: 0x3e00008
    ctx->pc = 0x228CA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228CA4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22885Cu: goto label_22885c;
            case 0x228868u: goto label_228868;
            case 0x2288F0u: goto label_2288f0;
            case 0x228920u: goto label_228920;
            case 0x228948u: goto label_228948;
            case 0x228964u: goto label_228964;
            case 0x228968u: goto label_228968;
            case 0x2289CCu: goto label_2289cc;
            case 0x2289D0u: goto label_2289d0;
            case 0x228A94u: goto label_228a94;
            case 0x228B04u: goto label_228b04;
            case 0x228B14u: goto label_228b14;
            case 0x228B2Cu: goto label_228b2c;
            case 0x228B48u: goto label_228b48;
            case 0x228B64u: goto label_228b64;
            case 0x228B90u: goto label_228b90;
            case 0x228BC8u: goto label_228bc8;
            case 0x228BD0u: goto label_228bd0;
            case 0x228C40u: goto label_228c40;
            case 0x228C74u: goto label_228c74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x228CA8u;
}
