#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _waitBdecOut
// Address: 0x1227b0 - 0x122994
void _waitBdecOut_0x1227b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1227b0u;

    // 0x1227b0: 0x27bdff80
    ctx->pc = 0x1227b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1227b4: 0xffb20060
    ctx->pc = 0x1227b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1227b8: 0xffbf0070
    ctx->pc = 0x1227b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1227bc: 0x24120001
    ctx->pc = 0x1227bcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1227c0: 0xffb10050
    ctx->pc = 0x1227c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1227c4: 0xc048e84
    ctx->pc = 0x1227C4u;
    SET_GPR_U32(ctx, 31, 0x1227CCu);
    ctx->pc = 0x1227C8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->pc = 0x123A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x123a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1227CCu; }
    }
    if (ctx->pc != 0x1227CCu) { return; }
    ctx->pc = 0x1227CCu;
    // 0x1227cc: 0x3c021000
    ctx->pc = 0x1227ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x1227d0: 0x3442b020
    ctx->pc = 0x1227d0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 45088));
    // 0x1227d4: 0x8c430000
    ctx->pc = 0x1227d4u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x1227d8: 0x10600023
    ctx->pc = 0x1227D8u;
    {
        const bool branch_taken_0x1227d8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1227DCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x1227d8) {
            ctx->pc = 0x122868u;
            goto label_122868;
        }
    }
    ctx->pc = 0x1227E0u;
    // 0x1227e0: 0x34422010
    ctx->pc = 0x1227e0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8208));
    // 0x1227e4: 0x8c430000
    ctx->pc = 0x1227e4u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x1227e8: 0x30634000
    ctx->pc = 0x1227e8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 16384));
    // 0x1227ec: 0x1460001f
    ctx->pc = 0x1227ECu;
    {
        const bool branch_taken_0x1227ec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1227F0u;
        SET_GPR_U32(ctx, 17, ((uint32_t)23 << 16));
        if (branch_taken_0x1227ec) {
            ctx->pc = 0x12286Cu;
            goto label_12286c;
        }
    }
    ctx->pc = 0x1227F4u;
    // 0x1227f4: 0x3c100017
    ctx->pc = 0x1227f4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)23 << 16));
label_1227f8:
    // 0x1227f8: 0x3c021000
    ctx->pc = 0x1227f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x1227fc: 0x3442b420
    ctx->pc = 0x1227fcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46112));
    // 0x122800: 0x8c430000
    ctx->pc = 0x122800u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x122804: 0x1460000d
    ctx->pc = 0x122804u;
    {
        const bool branch_taken_0x122804 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x122808u;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x122804) {
            ctx->pc = 0x12283Cu;
            goto label_12283c;
        }
    }
    ctx->pc = 0x12280Cu;
    // 0x12280c: 0x3442b400
    ctx->pc = 0x12280cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46080));
    // 0x122810: 0x8c430000
    ctx->pc = 0x122810u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x122814: 0x30630100
    ctx->pc = 0x122814u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
    // 0x122818: 0x14600008
    ctx->pc = 0x122818u;
    {
        const bool branch_taken_0x122818 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x12281Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x122818) {
            ctx->pc = 0x12283Cu;
            goto label_12283c;
        }
    }
    ctx->pc = 0x122820u;
    // 0x122820: 0x3c020017
    ctx->pc = 0x122820u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
    // 0x122824: 0x24030001
    ctx->pc = 0x122824u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x122828: 0x8c4417bc
    ctx->pc = 0x122828u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 6076)));
    // 0x12282c: 0x3a0282d
    ctx->pc = 0x12282cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122830: 0xc047de0
    ctx->pc = 0x122830u;
    SET_GPR_U32(ctx, 31, 0x122838u);
    ctx->pc = 0x122834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x11F780u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x11f780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122838u; }
    }
    if (ctx->pc != 0x122838u) { return; }
    ctx->pc = 0x122838u;
    // 0x122838: 0x3c021000
    ctx->pc = 0x122838u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
label_12283c:
    // 0x12283c: 0x3442b020
    ctx->pc = 0x12283cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 45088));
    // 0x122840: 0x8c430000
    ctx->pc = 0x122840u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x122844: 0x1060000a
    ctx->pc = 0x122844u;
    {
        const bool branch_taken_0x122844 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x122848u;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x122844) {
            ctx->pc = 0x122870u;
            goto label_122870;
        }
    }
    ctx->pc = 0x12284Cu;
    // 0x12284c: 0x34422010
    ctx->pc = 0x12284cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8208));
    // 0x122850: 0x8c430000
    ctx->pc = 0x122850u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x122854: 0x30634000
    ctx->pc = 0x122854u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 16384));
    // 0x122858: 0x1060ffe7
    ctx->pc = 0x122858u;
    {
        const bool branch_taken_0x122858 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x12285Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x122858) {
            ctx->pc = 0x1227F8u;
            goto label_1227f8;
        }
    }
    ctx->pc = 0x122860u;
    // 0x122860: 0x10000004
    ctx->pc = 0x122860u;
    {
        const bool branch_taken_0x122860 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x122860) {
            ctx->pc = 0x122874u;
            goto label_122874;
        }
    }
    ctx->pc = 0x122868u;
label_122868:
    // 0x122868: 0x3c110017
    ctx->pc = 0x122868u;
    SET_GPR_U32(ctx, 17, ((uint32_t)23 << 16));
label_12286c:
    // 0x12286c: 0x3c100017
    ctx->pc = 0x12286cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)23 << 16));
label_122870:
    // 0x122870: 0x3c021000
    ctx->pc = 0x122870u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
label_122874:
    // 0x122874: 0x3c041000
    ctx->pc = 0x122874u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x122878: 0xdc842030
    ctx->pc = 0x122878u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8240)));
    // 0x12287c: 0x34422020
    ctx->pc = 0x12287cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8224));
    // 0x122880: 0x8c420000
    ctx->pc = 0x122880u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x122884: 0x4183c
    ctx->pc = 0x122884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x122888: 0x3183f
    ctx->pc = 0x122888u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x12288c: 0x481000a
    ctx->pc = 0x12288Cu;
    {
        const bool branch_taken_0x12288c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x122890u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 8344), GPR_U32(ctx, 3));
        if (branch_taken_0x12288c) {
            ctx->pc = 0x1228B8u;
            goto label_1228b8;
        }
    }
    ctx->pc = 0x122894u;
    // 0x122894: 0x3043001f
    ctx->pc = 0x122894u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 31));
    // 0x122898: 0x10600004
    ctx->pc = 0x122898u;
    {
        const bool branch_taken_0x122898 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x12289Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 8348));
        if (branch_taken_0x122898) {
            ctx->pc = 0x1228ACu;
            goto label_1228ac;
        }
    }
    ctx->pc = 0x1228A0u;
    // 0x1228a0: 0x24020020
    ctx->pc = 0x1228a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1228a4: 0x10000002
    ctx->pc = 0x1228A4u;
    {
        const bool branch_taken_0x1228a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1228A8u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x1228a4) {
            ctx->pc = 0x1228B0u;
            goto label_1228b0;
        }
    }
    ctx->pc = 0x1228ACu;
label_1228ac:
    // 0x1228ac: 0x102d
    ctx->pc = 0x1228acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1228b0:
    // 0x1228b0: 0x10000003
    ctx->pc = 0x1228B0u;
    {
        const bool branch_taken_0x1228b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1228B4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1228b0) {
            ctx->pc = 0x1228C0u;
            goto label_1228c0;
        }
    }
    ctx->pc = 0x1228B8u;
label_1228b8:
    // 0x1228b8: 0x24020020
    ctx->pc = 0x1228b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1228bc: 0xae02209c
    ctx->pc = 0x1228bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8348), GPR_U32(ctx, 2));
label_1228c0:
    // 0x1228c0: 0x3c021000
    ctx->pc = 0x1228c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x1228c4: 0x34422010
    ctx->pc = 0x1228c4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8208));
    // 0x1228c8: 0x8c430000
    ctx->pc = 0x1228c8u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x1228cc: 0x30634000
    ctx->pc = 0x1228ccu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 16384));
    // 0x1228d0: 0x10600029
    ctx->pc = 0x1228D0u;
    {
        const bool branch_taken_0x1228d0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1228D4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
        if (branch_taken_0x1228d0) {
            ctx->pc = 0x122978u;
            goto label_122978;
        }
    }
    ctx->pc = 0x1228D8u;
    // 0x1228d8: 0x3c100017
    ctx->pc = 0x1228d8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)23 << 16));
    // 0x1228dc: 0x24844ea0
    ctx->pc = 0x1228dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20128));
    // 0x1228e0: 0xc048006
    ctx->pc = 0x1228E0u;
    SET_GPR_U32(ctx, 31, 0x1228E8u);
    ctx->pc = 0x1228E4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x120018u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x120018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1228E8u; }
    }
    if (ctx->pc != 0x1228E8u) { return; }
    ctx->pc = 0x1228E8u;
    // 0x1228e8: 0x27b10020
    ctx->pc = 0x1228e8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1228ec: 0x24020002
    ctx->pc = 0x1228ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1228f0: 0x8e0417bc
    ctx->pc = 0x1228f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 6076)));
    // 0x1228f4: 0x220282d
    ctx->pc = 0x1228f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1228f8: 0xc047de0
    ctx->pc = 0x1228F8u;
    SET_GPR_U32(ctx, 31, 0x122900u);
    ctx->pc = 0x1228FCu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->pc = 0x11F780u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x11f780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122900u; }
    }
    if (ctx->pc != 0x122900u) { return; }
    ctx->pc = 0x122900u;
    // 0x122900: 0x3c034000
    ctx->pc = 0x122900u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16384 << 16));
    // 0x122904: 0x24020003
    ctx->pc = 0x122904u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x122908: 0x3c011000
    ctx->pc = 0x122908u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4096 << 16));
    // 0x12290c: 0xac232010
    ctx->pc = 0x12290cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 3)); // MMIO: 0x10002010
    // 0x122910: 0x220282d
    ctx->pc = 0x122910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122914: 0x8e0417bc
    ctx->pc = 0x122914u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 6076)));
    // 0x122918: 0xc047de0
    ctx->pc = 0x122918u;
    SET_GPR_U32(ctx, 31, 0x122920u);
    ctx->pc = 0x12291Cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->pc = 0x11F780u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x11f780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122920u; }
    }
    if (ctx->pc != 0x122920u) { return; }
    ctx->pc = 0x122920u;
    // 0x122920: 0xc0453ee
    ctx->pc = 0x122920u;
    SET_GPR_U32(ctx, 31, 0x122928u);
    ctx->pc = 0x114FB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x114fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122928u; }
    }
    if (ctx->pc != 0x122928u) { return; }
    ctx->pc = 0x122928u;
    // 0x122928: 0x3c051000
    ctx->pc = 0x122928u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x12292c: 0x3c070001
    ctx->pc = 0x12292cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)1 << 16));
    // 0x122930: 0x34a5f520
    ctx->pc = 0x122930u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 62752));
    // 0x122934: 0x3c061000
    ctx->pc = 0x122934u;
    SET_GPR_U32(ctx, 6, ((uint32_t)4096 << 16));
    // 0x122938: 0x8ca20000
    ctx->pc = 0x122938u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0))); // MMIO: 0x10000000
    // 0x12293c: 0x34c6f590
    ctx->pc = 0x12293cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 62864));
    // 0x122940: 0x3c031000
    ctx->pc = 0x122940u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x122944: 0x3c04fffe
    ctx->pc = 0x122944u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65534 << 16));
    // 0x122948: 0x471025
    ctx->pc = 0x122948u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x12294c: 0x3463b000
    ctx->pc = 0x12294cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 45056));
    // 0x122950: 0xacc20000
    ctx->pc = 0x122950u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x122954: 0x3484ffff
    ctx->pc = 0x122954u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x122958: 0xac600000
    ctx->pc = 0x122958u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x12295c: 0x8ca20000
    ctx->pc = 0x12295cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x122960: 0x441024
    ctx->pc = 0x122960u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x122964: 0xc045400
    ctx->pc = 0x122964u;
    SET_GPR_U32(ctx, 31, 0x12296Cu);
    ctx->pc = 0x122968u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x115000u;
    {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x115000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12296Cu; }
    }
    if (ctx->pc != 0x12296Cu) { return; }
    ctx->pc = 0x12296Cu;
    // 0x12296c: 0x3c031000
    ctx->pc = 0x12296cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x122970: 0x3463b020
    ctx->pc = 0x122970u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 45088));
    // 0x122974: 0xac600000
    ctx->pc = 0x122974u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
label_122978:
    // 0x122978: 0x240102d
    ctx->pc = 0x122978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12297c: 0xdfbf0070
    ctx->pc = 0x12297cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x122980: 0xdfb20060
    ctx->pc = 0x122980u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x122984: 0xdfb10050
    ctx->pc = 0x122984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x122988: 0xdfb00040
    ctx->pc = 0x122988u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12298c: 0x3e00008
    ctx->pc = 0x12298Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122990u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1227F8u: goto label_1227f8;
            case 0x12283Cu: goto label_12283c;
            case 0x122868u: goto label_122868;
            case 0x12286Cu: goto label_12286c;
            case 0x122870u: goto label_122870;
            case 0x122874u: goto label_122874;
            case 0x1228ACu: goto label_1228ac;
            case 0x1228B0u: goto label_1228b0;
            case 0x1228B8u: goto label_1228b8;
            case 0x1228C0u: goto label_1228c0;
            case 0x122978u: goto label_122978;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122994u;
}
