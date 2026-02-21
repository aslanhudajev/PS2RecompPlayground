#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _flushBuf
// Address: 0x2f27b0 - 0x2f28c4
void _flushBuf_0x2f27b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f27b0u;

    // 0x2f27b0: 0x27bdffa0
    ctx->pc = 0x2f27b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f27b4: 0x3c021000
    ctx->pc = 0x2f27b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2f27b8: 0xffb10010
    ctx->pc = 0x2f27b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f27bc: 0x34422010
    ctx->pc = 0x2f27bcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8208));
    // 0x2f27c0: 0xffbf0050
    ctx->pc = 0x2f27c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f27c4: 0x3c058000
    ctx->pc = 0x2f27c4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x2f27c8: 0xffb40040
    ctx->pc = 0x2f27c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2f27cc: 0x34a54000
    ctx->pc = 0x2f27ccu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 16384));
    // 0x2f27d0: 0xffb30030
    ctx->pc = 0x2f27d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f27d4: 0x80882d
    ctx->pc = 0x2f27d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f27d8: 0xffb20020
    ctx->pc = 0x2f27d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f27dc: 0x302d
    ctx->pc = 0x2f27dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f27e0: 0xffb00000
    ctx->pc = 0x2f27e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f27e4: 0x8c430000
    ctx->pc = 0x2f27e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f27e8: 0x3c028000
    ctx->pc = 0x2f27e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x2f27ec: 0x651824
    ctx->pc = 0x2f27ecu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2f27f0: 0x14620018
    ctx->pc = 0x2F27F0u;
    {
        const bool branch_taken_0x2f27f0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2F27F4u;
        SET_GPR_U32(ctx, 19, ((uint32_t)58 << 16));
        if (branch_taken_0x2f27f0) {
            ctx->pc = 0x2F2854u;
            goto label_2f2854;
        }
    }
    ctx->pc = 0x2F27F8u;
    // 0x2f27f8: 0x3c10003a
    ctx->pc = 0x2f27f8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2f27fc: 0x3c14003a
    ctx->pc = 0x2f27fcu;
    SET_GPR_U32(ctx, 20, ((uint32_t)58 << 16));
    // 0x2f2800: 0x3c12003a
    ctx->pc = 0x2f2800u;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
    // 0x2f2804: 0x0
    ctx->pc = 0x2f2804u;
    // NOP
label_2f2808:
    // 0x2f2808: 0xc0102d
    ctx->pc = 0x2f2808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f280c: 0x28421389
    ctx->pc = 0x2f280cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5001));
    // 0x2f2810: 0x14400005
    ctx->pc = 0x2F2810u;
    {
        const bool branch_taken_0x2f2810 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F2814u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x2f2810) {
            ctx->pc = 0x2F2828u;
            goto label_2f2828;
        }
    }
    ctx->pc = 0x2F2818u;
    // 0x2f2818: 0x3c02003a
    ctx->pc = 0x2f2818u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f281c: 0xc0bb848
    ctx->pc = 0x2F281Cu;
    SET_GPR_U32(ctx, 31, 0x2F2824u);
    ctx->pc = 0x2F2820u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12324)));
    ctx->pc = 0x2EE120u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x2ee120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2824u; }
    }
    if (ctx->pc != 0x2F2824u) { return; }
    ctx->pc = 0x2F2824u;
    // 0x2f2824: 0x302d
    ctx->pc = 0x2f2824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2828:
    // 0x2f2828: 0x3c031000
    ctx->pc = 0x2f2828u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2f282c: 0x3c048000
    ctx->pc = 0x2f282cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x2f2830: 0x34632010
    ctx->pc = 0x2f2830u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8208));
    // 0x2f2834: 0x34844000
    ctx->pc = 0x2f2834u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 16384));
    // 0x2f2838: 0x8c620000
    ctx->pc = 0x2f2838u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x2f283c: 0x3c058000
    ctx->pc = 0x2f283cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x2f2840: 0x441024
    ctx->pc = 0x2f2840u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f2844: 0x1045fff0
    ctx->pc = 0x2F2844u;
    {
        const bool branch_taken_0x2f2844 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x2F2848u;
        SET_GPR_U32(ctx, 3, ((uint32_t)16384 << 16));
        if (branch_taken_0x2f2844) {
            ctx->pc = 0x2F2808u;
            goto label_2f2808;
        }
    }
    ctx->pc = 0x2F284Cu;
    // 0x2f284c: 0x10000006
    ctx->pc = 0x2F284Cu;
    {
        const bool branch_taken_0x2f284c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F2850u;
        SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
        if (branch_taken_0x2f284c) {
            ctx->pc = 0x2F2868u;
            goto label_2f2868;
        }
    }
    ctx->pc = 0x2F2854u;
label_2f2854:
    // 0x2f2854: 0x3c10003a
    ctx->pc = 0x2f2854u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2f2858: 0x3c14003a
    ctx->pc = 0x2f2858u;
    SET_GPR_U32(ctx, 20, ((uint32_t)58 << 16));
    // 0x2f285c: 0x3c12003a
    ctx->pc = 0x2f285cu;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
    // 0x2f2860: 0x3c034000
    ctx->pc = 0x2f2860u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16384 << 16));
    // 0x2f2864: 0x3c041000
    ctx->pc = 0x2f2864u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
label_2f2868:
    // 0x2f2868: 0x2231825
    ctx->pc = 0x2f2868u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2f286c: 0x34842000
    ctx->pc = 0x2f286cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 8192));
    // 0x2f2870: 0xac830000
    ctx->pc = 0x2f2870u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x2f2874: 0x31702
    ctx->pc = 0x2f2874u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 28));
    // 0x2f2878: 0x26033948
    ctx->pc = 0x2f2878u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 14664));
    // 0x2f287c: 0x21080
    ctx->pc = 0x2f287cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2f2880: 0x431021
    ctx->pc = 0x2f2880u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f2884: 0x8c440000
    ctx->pc = 0x2f2884u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f2888: 0xc0bc904
    ctx->pc = 0x2F2888u;
    SET_GPR_U32(ctx, 31, 0x2F2890u);
    ctx->pc = 0x2F288Cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12388), GPR_U32(ctx, 4));
    ctx->pc = 0x2F2410u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle64_0x2f2410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2890u; }
    }
    if (ctx->pc != 0x2F2890u) { return; }
    ctx->pc = 0x2F2890u;
    // 0x2f2890: 0x2103c
    ctx->pc = 0x2f2890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f2894: 0x2103f
    ctx->pc = 0x2f2894u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2f2898: 0x24030020
    ctx->pc = 0x2f2898u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2f289c: 0xae8238d8
    ctx->pc = 0x2f289cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 14552), GPR_U32(ctx, 2));
    // 0x2f28a0: 0xae4338dc
    ctx->pc = 0x2f28a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 14556), GPR_U32(ctx, 3));
    // 0x2f28a4: 0xdfbf0050
    ctx->pc = 0x2f28a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f28a8: 0xdfb40040
    ctx->pc = 0x2f28a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f28ac: 0xdfb30030
    ctx->pc = 0x2f28acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f28b0: 0xdfb20020
    ctx->pc = 0x2f28b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f28b4: 0xdfb10010
    ctx->pc = 0x2f28b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f28b8: 0xdfb00000
    ctx->pc = 0x2f28b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f28bc: 0x3e00008
    ctx->pc = 0x2F28BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F28C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F2808u: goto label_2f2808;
            case 0x2F2828u: goto label_2f2828;
            case 0x2F2854u: goto label_2f2854;
            case 0x2F2868u: goto label_2f2868;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F28C4u;
}
