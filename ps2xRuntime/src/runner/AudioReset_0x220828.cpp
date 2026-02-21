#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioReset
// Address: 0x220828 - 0x220a3c
void AudioReset_0x220828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x220828u;

    // 0x220828: 0x27bdff90
    ctx->pc = 0x220828u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22082c: 0xffbf0050
    ctx->pc = 0x22082cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x220830: 0xffb40040
    ctx->pc = 0x220830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x220834: 0xffb30030
    ctx->pc = 0x220834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x220838: 0xffb20020
    ctx->pc = 0x220838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22083c: 0xffb10010
    ctx->pc = 0x22083cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x220840: 0xffb00000
    ctx->pc = 0x220840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x220844: 0xe7b40060
    ctx->pc = 0x220844u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x220848: 0x3c020032
    ctx->pc = 0x220848u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22084c: 0x8c42fd58
    ctx->pc = 0x22084cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966616)));
    // 0x220850: 0x14400071
    ctx->pc = 0x220850u;
    {
        const bool branch_taken_0x220850 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x220854u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x220850) {
            ctx->pc = 0x220A18u;
            goto label_220a18;
        }
    }
    ctx->pc = 0x220858u;
    // 0x220858: 0x14800011
    ctx->pc = 0x220858u;
    {
        const bool branch_taken_0x220858 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x22085Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x220858) {
            ctx->pc = 0x2208A0u;
            goto label_2208a0;
        }
    }
    ctx->pc = 0x220860u;
    // 0x220860: 0x8c42fd7c
    ctx->pc = 0x220860u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966652)));
    // 0x220864: 0x14400007
    ctx->pc = 0x220864u;
    {
        const bool branch_taken_0x220864 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x220868u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x220864) {
            ctx->pc = 0x220884u;
            goto label_220884;
        }
    }
    ctx->pc = 0x22086Cu;
    // 0x22086c: 0x8c42fd88
    ctx->pc = 0x22086cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966664)));
    // 0x220870: 0x14400004
    ctx->pc = 0x220870u;
    {
        const bool branch_taken_0x220870 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x220874u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x220870) {
            ctx->pc = 0x220884u;
            goto label_220884;
        }
    }
    ctx->pc = 0x220878u;
    // 0x220878: 0x8c42fd84
    ctx->pc = 0x220878u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966660)));
    // 0x22087c: 0x10400067
    ctx->pc = 0x22087Cu;
    {
        const bool branch_taken_0x22087c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x220880u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x22087c) {
            ctx->pc = 0x220A1Cu;
            goto label_220a1c;
        }
    }
    ctx->pc = 0x220884u;
label_220884:
    // 0x220884: 0x14800006
    ctx->pc = 0x220884u;
    {
        const bool branch_taken_0x220884 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x220888u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x220884) {
            ctx->pc = 0x2208A0u;
            goto label_2208a0;
        }
    }
    ctx->pc = 0x22088Cu;
    // 0x22088c: 0x3c030032
    ctx->pc = 0x22088cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x220890: 0x8c62fd80
    ctx->pc = 0x220890u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294966656)));
    // 0x220894: 0x24420001
    ctx->pc = 0x220894u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x220898: 0xac62fd80
    ctx->pc = 0x220898u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966656), GPR_U32(ctx, 2));
    // 0x22089c: 0x3c020032
    ctx->pc = 0x22089cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2208a0:
    // 0x2208a0: 0xac40fd7c
    ctx->pc = 0x2208a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966652), GPR_U32(ctx, 0));
    // 0x2208a4: 0x3c020032
    ctx->pc = 0x2208a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2208a8: 0xac40fd88
    ctx->pc = 0x2208a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966664), GPR_U32(ctx, 0));
    // 0x2208ac: 0x3c020032
    ctx->pc = 0x2208acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2208b0: 0xac40fd74
    ctx->pc = 0x2208b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966644), GPR_U32(ctx, 0));
    // 0x2208b4: 0x3c020032
    ctx->pc = 0x2208b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2208b8: 0xac40fd84
    ctx->pc = 0x2208b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966660), GPR_U32(ctx, 0));
    // 0x2208bc: 0x3c020032
    ctx->pc = 0x2208bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2208c0: 0xac40fd78
    ctx->pc = 0x2208c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966648), GPR_U32(ctx, 0));
    // 0x2208c4: 0x3c030032
    ctx->pc = 0x2208c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x2208c8: 0x24020001
    ctx->pc = 0x2208c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2208cc: 0xc088e8e
    ctx->pc = 0x2208CCu;
    SET_GPR_U32(ctx, 31, 0x2208D4u);
    ctx->pc = 0x2208D0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966832), GPR_U32(ctx, 2));
    ctx->pc = 0x223A38u;
    {
        const uint32_t __entryPc = ctx->pc;
        aud_reset_0x223a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2208D4u; }
    }
    if (ctx->pc != 0x2208D4u) { return; }
    ctx->pc = 0x2208D4u;
    // 0x2208d4: 0xc08830a
    ctx->pc = 0x2208D4u;
    SET_GPR_U32(ctx, 31, 0x2208DCu);
    ctx->pc = 0x2208D8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x220C28u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioUnloadAll_0x220c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2208DCu; }
    }
    if (ctx->pc != 0x2208DCu) { return; }
    ctx->pc = 0x2208DCu;
    // 0x2208dc: 0x3c014dbe
    ctx->pc = 0x2208dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)19902 << 16));
    // 0x2208e0: 0x3421bc20
    ctx->pc = 0x2208e0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 48160));
    // 0x2208e4: 0x4481a000
    ctx->pc = 0x2208e4u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x2208e8: 0x3c110032
    ctx->pc = 0x2208e8u;
    SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
    // 0x2208ec: 0x10000017
    ctx->pc = 0x2208ECu;
    {
        const bool branch_taken_0x2208ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2208F0u;
        SET_GPR_U32(ctx, 20, ((uint32_t)58 << 16));
        if (branch_taken_0x2208ec) {
            ctx->pc = 0x22094Cu;
            goto label_22094c;
        }
    }
    ctx->pc = 0x2208F4u;
    // 0x2208f4: 0x0
    ctx->pc = 0x2208f4u;
    // NOP
label_2208f8:
    // 0x2208f8: 0x44920000
    ctx->pc = 0x2208f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 18);
    // 0x2208fc: 0x46800020
    ctx->pc = 0x2208fcu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x220900: 0x4600a034
    ctx->pc = 0x220900u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x220904: 0x0
    ctx->pc = 0x220904u;
    // NOP
    // 0x220908: 0x45000007
    ctx->pc = 0x220908u;
    {
        const bool branch_taken_0x220908 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22090Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294966664)));
        if (branch_taken_0x220908) {
            ctx->pc = 0x220928u;
            goto label_220928;
        }
    }
    ctx->pc = 0x220910u;
    // 0x220910: 0x24420001
    ctx->pc = 0x220910u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x220914: 0xae22fd88
    ctx->pc = 0x220914u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294966664), GPR_U32(ctx, 2));
    // 0x220918: 0xc0b492e
    ctx->pc = 0x220918u;
    SET_GPR_U32(ctx, 31, 0x220920u);
    ctx->pc = 0x22091Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 26288));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220920u; }
    }
    if (ctx->pc != 0x220920u) { return; }
    ctx->pc = 0x220920u;
    // 0x220920: 0x1000003e
    ctx->pc = 0x220920u;
    {
        const bool branch_taken_0x220920 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x220924u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x220920) {
            ctx->pc = 0x220A1Cu;
            goto label_220a1c;
        }
    }
    ctx->pc = 0x220928u;
label_220928:
    // 0x220928: 0x24102710
    ctx->pc = 0x220928u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 10000));
    // 0x22092c: 0x2402ffff
    ctx->pc = 0x22092cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_220930:
    // 0x220930: 0x2610ffff
    ctx->pc = 0x220930u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x220934: 0x0
    ctx->pc = 0x220934u;
    // NOP
    // 0x220938: 0x0
    ctx->pc = 0x220938u;
    // NOP
    // 0x22093c: 0x0
    ctx->pc = 0x22093cu;
    // NOP
    // 0x220940: 0x0
    ctx->pc = 0x220940u;
    // NOP
    // 0x220944: 0x1602fffa
    ctx->pc = 0x220944u;
    {
        const bool branch_taken_0x220944 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        if (branch_taken_0x220944) {
            ctx->pc = 0x220930u;
            goto label_220930;
        }
    }
    ctx->pc = 0x22094Cu;
label_22094c:
    // 0x22094c: 0x44806000
    ctx->pc = 0x22094cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x220950: 0xc088e54
    ctx->pc = 0x220950u;
    SET_GPR_U32(ctx, 31, 0x220958u);
    ctx->pc = 0x223950u;
    {
        const uint32_t __entryPc = ctx->pc;
        aud_poll_0x223950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220958u; }
    }
    if (ctx->pc != 0x220958u) { return; }
    ctx->pc = 0x220958u;
    // 0x220958: 0x1453ffe7
    ctx->pc = 0x220958u;
    {
        const bool branch_taken_0x220958 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        ctx->pc = 0x22095Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x220958) {
            ctx->pc = 0x2208F8u;
            goto label_2208f8;
        }
    }
    ctx->pc = 0x220960u;
    // 0x220960: 0x3c020032
    ctx->pc = 0x220960u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x220964: 0xac40fe2c
    ctx->pc = 0x220964u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966828), GPR_U32(ctx, 0));
    // 0x220968: 0xc0889f2
    ctx->pc = 0x220968u;
    SET_GPR_U32(ctx, 31, 0x220970u);
    ctx->pc = 0x22096Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2227C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTrackInit_0x2227c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220970u; }
    }
    if (ctx->pc != 0x220970u) { return; }
    ctx->pc = 0x220970u;
    // 0x220970: 0xc088bc0
    ctx->pc = 0x220970u;
    SET_GPR_U32(ctx, 31, 0x220978u);
    ctx->pc = 0x222F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioQueEmpty_0x222f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220978u; }
    }
    if (ctx->pc != 0x220978u) { return; }
    ctx->pc = 0x220978u;
    // 0x220978: 0x3c02003c
    ctx->pc = 0x220978u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x22097c: 0xac40d608
    ctx->pc = 0x22097cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956552), GPR_U32(ctx, 0));
    // 0x220980: 0x3c020032
    ctx->pc = 0x220980u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x220984: 0xac40fe30
    ctx->pc = 0x220984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966832), GPR_U32(ctx, 0));
    // 0x220988: 0xc089066
    ctx->pc = 0x220988u;
    SET_GPR_U32(ctx, 31, 0x220990u);
    ctx->pc = 0x22098Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x224198u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_stream_playing_0x224198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220990u; }
    }
    if (ctx->pc != 0x220990u) { return; }
    ctx->pc = 0x220990u;
    // 0x220990: 0xc089074
    ctx->pc = 0x220990u;
    SET_GPR_U32(ctx, 31, 0x220998u);
    ctx->pc = 0x220994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2241D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_stream_looping_0x2241d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220998u; }
    }
    if (ctx->pc != 0x220998u) { return; }
    ctx->pc = 0x220998u;
    // 0x220998: 0x3c02003c
    ctx->pc = 0x220998u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x22099c: 0x2442d610
    ctx->pc = 0x22099cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294956560));
    // 0x2209a0: 0xac400008
    ctx->pc = 0x2209a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2209a4: 0x3c030032
    ctx->pc = 0x2209a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x2209a8: 0x2402ffff
    ctx->pc = 0x2209a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2209ac: 0xac62fda0
    ctx->pc = 0x2209acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966688), GPR_U32(ctx, 2));
    // 0x2209b0: 0x3c020032
    ctx->pc = 0x2209b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2209b4: 0x40182d
    ctx->pc = 0x2209b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2209b8: 0x8c42fe28
    ctx->pc = 0x2209b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966824)));
    // 0x2209bc: 0x8c420010
    ctx->pc = 0x2209bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2209c0: 0x18400015
    ctx->pc = 0x2209C0u;
    {
        const bool branch_taken_0x2209c0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2209C4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 292));
        if (branch_taken_0x2209c0) {
            ctx->pc = 0x220A18u;
            goto label_220a18;
        }
    }
    ctx->pc = 0x2209C8u;
    // 0x2209c8: 0x3c110032
    ctx->pc = 0x2209c8u;
    SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
    // 0x2209cc: 0x8c63fe28
    ctx->pc = 0x2209ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294966824)));
label_2209d0:
    // 0x2209d0: 0x2121018
    ctx->pc = 0x2209d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2209d4: 0x621821
    ctx->pc = 0x2209d4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2209d8: 0x200202d
    ctx->pc = 0x2209d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2209dc: 0x8c650130
    ctx->pc = 0x2209dcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x2209e0: 0x302d
    ctx->pc = 0x2209e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2209e4: 0xc088468
    ctx->pc = 0x2209E4u;
    SET_GPR_U32(ctx, 31, 0x2209ECu);
    ctx->pc = 0x2209E8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2211A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioLoadBank_0x2211a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2209ECu; }
    }
    if (ctx->pc != 0x2209ECu) { return; }
    ctx->pc = 0x2209ECu;
    // 0x2209ec: 0x14400004
    ctx->pc = 0x2209ECu;
    {
        const bool branch_taken_0x2209ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2209F0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x2209ec) {
            ctx->pc = 0x220A00u;
            goto label_220a00;
        }
    }
    ctx->pc = 0x2209F4u;
    // 0x2209f4: 0x8e22fd84
    ctx->pc = 0x2209f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294966660)));
    // 0x2209f8: 0x24420001
    ctx->pc = 0x2209f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2209fc: 0xae22fd84
    ctx->pc = 0x2209fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294966660), GPR_U32(ctx, 2));
label_220a00:
    // 0x220a00: 0x3c030032
    ctx->pc = 0x220a00u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x220a04: 0x8c62fe28
    ctx->pc = 0x220a04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294966824)));
    // 0x220a08: 0x8c420010
    ctx->pc = 0x220a08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x220a0c: 0x202102a
    ctx->pc = 0x220a0cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x220a10: 0x5440ffef
    ctx->pc = 0x220A10u;
    {
        const bool branch_taken_0x220a10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x220a10) {
            ctx->pc = 0x220A14u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294966824)));
            ctx->pc = 0x2209D0u;
            goto label_2209d0;
        }
    }
    ctx->pc = 0x220A18u;
label_220a18:
    // 0x220a18: 0xdfbf0050
    ctx->pc = 0x220a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_220a1c:
    // 0x220a1c: 0xdfb40040
    ctx->pc = 0x220a1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x220a20: 0xdfb30030
    ctx->pc = 0x220a20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x220a24: 0xdfb20020
    ctx->pc = 0x220a24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220a28: 0xdfb10010
    ctx->pc = 0x220a28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220a2c: 0xdfb00000
    ctx->pc = 0x220a2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220a30: 0xc7b40060
    ctx->pc = 0x220a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x220a34: 0x3e00008
    ctx->pc = 0x220A34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220A38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x220884u: goto label_220884;
            case 0x2208A0u: goto label_2208a0;
            case 0x2208F8u: goto label_2208f8;
            case 0x220928u: goto label_220928;
            case 0x220930u: goto label_220930;
            case 0x22094Cu: goto label_22094c;
            case 0x2209D0u: goto label_2209d0;
            case 0x220A00u: goto label_220a00;
            case 0x220A18u: goto label_220a18;
            case 0x220A1Cu: goto label_220a1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x220A3Cu;
}
