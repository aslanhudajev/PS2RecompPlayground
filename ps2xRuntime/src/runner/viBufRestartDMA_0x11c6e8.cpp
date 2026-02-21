#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: viBufRestartDMA
// Address: 0x11c6e8 - 0x11ca08
void viBufRestartDMA_0x11c6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11c6e8u;

    // 0x11c6e8: 0x27bdff80
    ctx->pc = 0x11c6e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11c6ec: 0xffb60060
    ctx->pc = 0x11c6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x11c6f0: 0xffb50050
    ctx->pc = 0x11c6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x11c6f4: 0xffb30030
    ctx->pc = 0x11c6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11c6f8: 0xffb20020
    ctx->pc = 0x11c6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11c6fc: 0xffb00000
    ctx->pc = 0x11c6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11c700: 0xffbf0070
    ctx->pc = 0x11c700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x11c704: 0x80802d
    ctx->pc = 0x11c704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c708: 0xffb40040
    ctx->pc = 0x11c708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11c70c: 0xffb10010
    ctx->pc = 0x11c70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11c710: 0x8e020038
    ctx->pc = 0x11c710u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x11c714: 0x8e07001c
    ctx->pc = 0x11c714u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x11c718: 0x21a02
    ctx->pc = 0x11c718u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 8));
    // 0x11c71c: 0x3056007f
    ctx->pc = 0x11c71cu;
    SET_GPR_U32(ctx, 22, AND32(GPR_U32(ctx, 2), 127));
    // 0x11c720: 0x21402
    ctx->pc = 0x11c720u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 16));
    // 0x11c724: 0x3063000f
    ctx->pc = 0x11c724u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 15));
    // 0x11c728: 0x30420003
    ctx->pc = 0x11c728u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
    // 0x11c72c: 0x8e060024
    ctx->pc = 0x11c72cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x11c730: 0x431021
    ctx->pc = 0x11c730u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11c734: 0x8e050028
    ctx->pc = 0x11c734u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x11c738: 0x21900
    ctx->pc = 0x11c738u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 4));
    // 0x11c73c: 0x8e040040
    ctx->pc = 0x11c73cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x11c740: 0xe39023
    ctx->pc = 0x11c740u;
    SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x11c744: 0xc2a821
    ctx->pc = 0x11c744u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11c748: 0x34b30100
    ctx->pc = 0x11c748u;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 5), 256));
    // 0x11c74c: 0xc0438b8
    ctx->pc = 0x11C74Cu;
    SET_GPR_U32(ctx, 31, 0x11C754u);
    ctx->pc = 0x11C750u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->pc = 0x10E2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x10e2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C754u; }
    }
    if (ctx->pc != 0x11C754u) { return; }
    ctx->pc = 0x11C754u;
    // 0x11c754: 0x8e070000
    ctx->pc = 0x11c754u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11c758: 0x247102b
    ctx->pc = 0x11c758u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x11c75c: 0x1040002a
    ctx->pc = 0x11C75Cu;
    {
        const bool branch_taken_0x11c75c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C760u;
        SET_GPR_U32(ctx, 8, ((uint32_t)4095 << 16));
        if (branch_taken_0x11c75c) {
            ctx->pc = 0x11C808u;
            goto label_11c808;
        }
    }
    ctx->pc = 0x11C764u;
    // 0x11c764: 0x8e050008
    ctx->pc = 0x11c764u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11c768: 0x8e030004
    ctx->pc = 0x11c768u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11c76c: 0xf21023
    ctx->pc = 0x11c76cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x11c770: 0x532c0
    ctx->pc = 0x11c770u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 5), 11));
    // 0x11c774: 0x3508ffff
    ctx->pc = 0x11c774u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 65535));
    // 0x11c778: 0x8e09001c
    ctx->pc = 0x11c778u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x11c77c: 0x2a902
    ctx->pc = 0x11c77cu;
    SET_GPR_U32(ctx, 21, SRL32(GPR_U32(ctx, 2), 4));
    // 0x11c780: 0x68a024
    ctx->pc = 0x11c780u;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x11c784: 0x2469021
    ctx->pc = 0x11c784u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x11c788: 0x11270005
    ctx->pc = 0x11C788u;
    {
        const bool branch_taken_0x11c788 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 7));
        ctx->pc = 0x11C78Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11c788) {
            ctx->pc = 0x11C7A0u;
            goto label_11c7a0;
        }
    }
    ctx->pc = 0x11C790u;
    // 0x11c790: 0xe61021
    ctx->pc = 0x11c790u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x11c794: 0x24040003
    ctx->pc = 0x11c794u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x11c798: 0x1221026
    ctx->pc = 0x11c798u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x11c79c: 0x2200a
    ctx->pc = 0x11c79cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 0));
label_11c7a0:
    // 0x11c7a0: 0x8e02000c
    ctx->pc = 0x11c7a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11c7a4: 0x42700
    ctx->pc = 0x11c7a4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 28));
    // 0x11c7a8: 0x8e030028
    ctx->pc = 0x11c7a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x11c7ac: 0x50a00001
    ctx->pc = 0x11C7ACu;
    {
        const bool branch_taken_0x11c7ac = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x11c7ac) {
            ctx->pc = 0x11C7B0u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x11C7B4u;
            goto label_11c7b4;
        }
    }
    ctx->pc = 0x11C7B4u;
label_11c7b4:
    // 0x11c7b4: 0xa21023
    ctx->pc = 0x11c7b4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11c7b8: 0x45001a
    ctx->pc = 0x11c7b8u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x11c7bc: 0x681824
    ctx->pc = 0x11c7bcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x11c7c0: 0x641825
    ctx->pc = 0x11c7c0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11c7c4: 0x1010
    ctx->pc = 0x11c7c4u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x11c7c8: 0x4400009
    ctx->pc = 0x11C7C8u;
    {
        const bool branch_taken_0x11c7c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11C7CCu;
        SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 3), 256));
        if (branch_taken_0x11c7c8) {
            ctx->pc = 0x11C7F0u;
            goto label_11c7f0;
        }
    }
    ctx->pc = 0x11C7D0u;
    // 0x11c7d0: 0x50a00001
    ctx->pc = 0x11C7D0u;
    {
        const bool branch_taken_0x11c7d0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x11c7d0) {
            ctx->pc = 0x11C7D4u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x11C7D8u;
            goto label_11c7d8;
        }
    }
    ctx->pc = 0x11C7D8u;
label_11c7d8:
    // 0x11c7d8: 0x8e030010
    ctx->pc = 0x11c7d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11c7dc: 0x43102a
    ctx->pc = 0x11c7dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x11c7e0: 0x54400043
    ctx->pc = 0x11C7E0u;
    {
        const bool branch_taken_0x11c7e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11c7e0) {
            ctx->pc = 0x11C7E4u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->pc = 0x11C8F0u;
            goto label_11c8f0;
        }
    }
    ctx->pc = 0x11C7E8u;
    // 0x11c7e8: 0x10000003
    ctx->pc = 0x11C7E8u;
    {
        const bool branch_taken_0x11c7e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C7ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967295));
        if (branch_taken_0x11c7e8) {
            ctx->pc = 0x11C7F8u;
            goto label_11c7f8;
        }
    }
    ctx->pc = 0x11C7F0u;
label_11c7f0:
    // 0x11c7f0: 0x8e030010
    ctx->pc = 0x11c7f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11c7f4: 0x24a2ffff
    ctx->pc = 0x11c7f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967295));
label_11c7f8:
    // 0x11c7f8: 0x24630001
    ctx->pc = 0x11c7f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x11c7fc: 0xae02000c
    ctx->pc = 0x11c7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x11c800: 0x1000003a
    ctx->pc = 0x11C800u;
    {
        const bool branch_taken_0x11c800 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C804u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        if (branch_taken_0x11c800) {
            ctx->pc = 0x11C8ECu;
            goto label_11c8ec;
        }
    }
    ctx->pc = 0x11C808u;
label_11c808:
    // 0x11c808: 0x8e05001c
    ctx->pc = 0x11c808u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x11c80c: 0xc046ff2
    ctx->pc = 0x11C80Cu;
    SET_GPR_U32(ctx, 31, 0x11C814u);
    ctx->pc = 0x11C810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11BFC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        getFIFOindex_0x11bfc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C814u; }
    }
    if (ctx->pc != 0x11C814u) { return; }
    ctx->pc = 0x11C814u;
    // 0x11c814: 0x40882d
    ctx->pc = 0x11c814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c818: 0x200202d
    ctx->pc = 0x11c818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c81c: 0xc046ff2
    ctx->pc = 0x11C81Cu;
    SET_GPR_U32(ctx, 31, 0x11C824u);
    ctx->pc = 0x11C820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11BFC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        getFIFOindex_0x11bfc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C824u; }
    }
    if (ctx->pc != 0x11C824u) { return; }
    ctx->pc = 0x11C824u;
    // 0x11c824: 0x40702d
    ctx->pc = 0x11c824u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c828: 0x122e0030
    ctx->pc = 0x11C828u;
    {
        const bool branch_taken_0x11c828 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 14));
        ctx->pc = 0x11C82Cu;
        SET_GPR_U32(ctx, 9, ((uint32_t)4095 << 16));
        if (branch_taken_0x11c828) {
            ctx->pc = 0x11C8ECu;
            goto label_11c8ec;
        }
    }
    ctx->pc = 0x11C830u;
    // 0x11c830: 0x8e0c0008
    ctx->pc = 0x11c830u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11c834: 0x8e080000
    ctx->pc = 0x11c834u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11c838: 0x240b0003
    ctx->pc = 0x11c838u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 3));
    // 0x11c83c: 0x8e02001c
    ctx->pc = 0x11c83cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x11c840: 0xc1ac0
    ctx->pc = 0x11c840u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 12), 11));
    // 0x11c844: 0x50600001
    ctx->pc = 0x11C844u;
    {
        const bool branch_taken_0x11c844 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x11c844) {
            ctx->pc = 0x11C848u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x11C84Cu;
            goto label_11c84c;
        }
    }
    ctx->pc = 0x11C84Cu;
label_11c84c:
    // 0x11c84c: 0x1cc3821
    ctx->pc = 0x11c84cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x11c850: 0x481023
    ctx->pc = 0x11c850u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x11c854: 0x8e04000c
    ctx->pc = 0x11c854u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11c858: 0x43001b
    ctx->pc = 0x11c858u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 2) / divisor; ctx->hi = GPR_U32(ctx, 3) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,2); } }
    // 0x11c85c: 0x8e0d0010
    ctx->pc = 0x11c85cu;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11c860: 0xe43823
    ctx->pc = 0x11c860u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x11c864: 0x111ac0
    ctx->pc = 0x11c864u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 11));
    // 0x11c868: 0x8d1021
    ctx->pc = 0x11c868u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x11c86c: 0x1031821
    ctx->pc = 0x11c86cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x11c870: 0x3529ffff
    ctx->pc = 0x11c870u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 65535));
    // 0x11c874: 0x8e040028
    ctx->pc = 0x11c874u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x11c878: 0x721823
    ctx->pc = 0x11c878u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x11c87c: 0x8e0a0004
    ctx->pc = 0x11c87cu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11c880: 0x3a902
    ctx->pc = 0x11c880u;
    SET_GPR_U32(ctx, 21, SRL32(GPR_U32(ctx, 3), 4));
    // 0x11c884: 0x892024
    ctx->pc = 0x11c884u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x11c888: 0x2810
    ctx->pc = 0x11c888u;
    SET_GPR_U32(ctx, 5, ctx->hi);
    // 0x11c88c: 0x4c001a
    ctx->pc = 0x11c88cu;
    { int32_t divisor = GPR_S32(ctx, 12);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x11c890: 0x1052821
    ctx->pc = 0x11c890u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x11c894: 0x111100
    ctx->pc = 0x11c894u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 4));
    // 0x11c898: 0x4a1021
    ctx->pc = 0x11c898u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x11c89c: 0x49a024
    ctx->pc = 0x11c89cu;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x11c8a0: 0x3010
    ctx->pc = 0x11c8a0u;
    SET_GPR_U32(ctx, 6, ctx->hi);
    // 0x11c8a4: 0xec001a
    ctx->pc = 0x11c8a4u;
    { int32_t divisor = GPR_S32(ctx, 12);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x11c8a8: 0x632c0
    ctx->pc = 0x11c8a8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 11));
    // 0x11c8ac: 0x1064021
    ctx->pc = 0x11c8acu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x11c8b0: 0xa82826
    ctx->pc = 0x11c8b0u;
    SET_GPR_U32(ctx, 5, XOR32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x11c8b4: 0x5580a
    ctx->pc = 0x11c8b4u;
    if (GPR_U32(ctx, 5) == 0) SET_GPR_U32(ctx, 11, GPR_U32(ctx, 0));
    // 0x11c8b8: 0xb5f00
    ctx->pc = 0x11c8b8u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 28));
    // 0x11c8bc: 0x8b2025
    ctx->pc = 0x11c8bcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x11c8c0: 0x1010
    ctx->pc = 0x11c8c0u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x11c8c4: 0x4400006
    ctx->pc = 0x11C8C4u;
    {
        const bool branch_taken_0x11c8c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11C8C8u;
        SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 4), 256));
        if (branch_taken_0x11c8c4) {
            ctx->pc = 0x11C8E0u;
            goto label_11c8e0;
        }
    }
    ctx->pc = 0x11C8CCu;
    // 0x11c8cc: 0x51800001
    ctx->pc = 0x11C8CCu;
    {
        const bool branch_taken_0x11c8cc = (GPR_U32(ctx, 12) == GPR_U32(ctx, 0));
        if (branch_taken_0x11c8cc) {
            ctx->pc = 0x11C8D0u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x11C8D4u;
            goto label_11c8d4;
        }
    }
    ctx->pc = 0x11C8D4u;
label_11c8d4:
    // 0x11c8d4: 0x4d102a
    ctx->pc = 0x11c8d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 13)));
    // 0x11c8d8: 0x54400005
    ctx->pc = 0x11C8D8u;
    {
        const bool branch_taken_0x11c8d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11c8d8) {
            ctx->pc = 0x11C8DCu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->pc = 0x11C8F0u;
            goto label_11c8f0;
        }
    }
    ctx->pc = 0x11C8E0u;
label_11c8e0:
    // 0x11c8e0: 0x25a20001
    ctx->pc = 0x11c8e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 13), 1));
    // 0x11c8e4: 0xae0e000c
    ctx->pc = 0x11c8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 14));
    // 0x11c8e8: 0xae020010
    ctx->pc = 0x11c8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_11c8ec:
    // 0x11c8ec: 0x8e03002c
    ctx->pc = 0x11c8ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_11c8f0:
    // 0x11c8f0: 0x5060000e
    ctx->pc = 0x11C8F0u;
    {
        const bool branch_taken_0x11c8f0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x11c8f0) {
            ctx->pc = 0x11C8F4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->pc = 0x11C92Cu;
            goto label_11c92c;
        }
    }
    ctx->pc = 0x11C8F8u;
    // 0x11c8f8: 0x8e020030
    ctx->pc = 0x11c8f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x11c8fc: 0x1040000a
    ctx->pc = 0x11C8FCu;
    {
        const bool branch_taken_0x11c8fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C900u;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x11c8fc) {
            ctx->pc = 0x11C928u;
            goto label_11c928;
        }
    }
    ctx->pc = 0x11C904u;
    // 0x11c904: 0x3c041000
    ctx->pc = 0x11c904u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x11c908: 0x3442b010
    ctx->pc = 0x11c908u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 45072));
    // 0x11c90c: 0x3484b020
    ctx->pc = 0x11c90cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 45088));
    // 0x11c910: 0xac430000
    ctx->pc = 0x11c910u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x11c914: 0x8e030030
    ctx->pc = 0x11c914u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x11c918: 0xac830000
    ctx->pc = 0x11c918u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x11c91c: 0x8e040034
    ctx->pc = 0x11c91cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x11c920: 0xc047002
    ctx->pc = 0x11C920u;
    SET_GPR_U32(ctx, 31, 0x11C928u);
    ctx->pc = 0x11C924u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 256));
    ctx->pc = 0x11C008u;
    {
        const uint32_t __entryPc = ctx->pc;
        setD3_CHCR_0x11c008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C928u; }
    }
    if (ctx->pc != 0x11C928u) { return; }
    ctx->pc = 0x11C928u;
label_11c928:
    // 0x11c928: 0x8e020010
    ctx->pc = 0x11c928u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_11c92c:
    // 0x11c92c: 0x10400015
    ctx->pc = 0x11C92Cu;
    {
        const bool branch_taken_0x11c92c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C930u;
        SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
        if (branch_taken_0x11c92c) {
            ctx->pc = 0x11C984u;
            goto label_11c984;
        }
    }
    ctx->pc = 0x11C934u;
    // 0x11c934: 0x34632010
    ctx->pc = 0x11c934u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8208));
label_11c938:
    // 0x11c938: 0x8c620000
    ctx->pc = 0x11c938u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x11c93c: 0x0
    ctx->pc = 0x11c93cu;
    // NOP
    // 0x11c940: 0x0
    ctx->pc = 0x11c940u;
    // NOP
    // 0x11c944: 0x0
    ctx->pc = 0x11c944u;
    // NOP
    // 0x11c948: 0x0
    ctx->pc = 0x11c948u;
    // NOP
    // 0x11c94c: 0x440fffa
    ctx->pc = 0x11C94Cu;
    {
        const bool branch_taken_0x11c94c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x11c94c) {
            ctx->pc = 0x11C938u;
            goto label_11c938;
        }
    }
    ctx->pc = 0x11C954u;
    // 0x11c954: 0x3c021000
    ctx->pc = 0x11c954u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x11c958: 0x3c031000
    ctx->pc = 0x11c958u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x11c95c: 0x34422000
    ctx->pc = 0x11c95cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8192));
    // 0x11c960: 0x34632010
    ctx->pc = 0x11c960u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8208));
    // 0x11c964: 0xac560000
    ctx->pc = 0x11c964u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22)); // MMIO: 0x10000000
label_11c968:
    // 0x11c968: 0x8c620000
    ctx->pc = 0x11c968u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x11c96c: 0x0
    ctx->pc = 0x11c96cu;
    // NOP
    // 0x11c970: 0x0
    ctx->pc = 0x11c970u;
    // NOP
    // 0x11c974: 0x0
    ctx->pc = 0x11c974u;
    // NOP
    // 0x11c978: 0x0
    ctx->pc = 0x11c978u;
    // NOP
    // 0x11c97c: 0x440fffa
    ctx->pc = 0x11C97Cu;
    {
        const bool branch_taken_0x11c97c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x11c97c) {
            ctx->pc = 0x11C968u;
            goto label_11c968;
        }
    }
    ctx->pc = 0x11C984u;
label_11c984:
    // 0x11c984: 0x3c031000
    ctx->pc = 0x11c984u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x11c988: 0x3c041000
    ctx->pc = 0x11c988u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x11c98c: 0x3463b410
    ctx->pc = 0x11c98cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 46096));
    // 0x11c990: 0x3484b430
    ctx->pc = 0x11c990u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 46128));
    // 0x11c994: 0xac720000
    ctx->pc = 0x11c994u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18)); // MMIO: 0x10000000
    // 0x11c998: 0x3c021000
    ctx->pc = 0x11c998u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x11c99c: 0xac940000
    ctx->pc = 0x11c99cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 20)); // MMIO: 0x10000000
    // 0x11c9a0: 0x3442b420
    ctx->pc = 0x11c9a0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46112));
    // 0x11c9a4: 0xac550000
    ctx->pc = 0x11c9a4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21)); // MMIO: 0x10000000
    // 0x11c9a8: 0x8e030010
    ctx->pc = 0x11c9a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11c9ac: 0x50600004
    ctx->pc = 0x11C9ACu;
    {
        const bool branch_taken_0x11c9ac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x11c9ac) {
            ctx->pc = 0x11C9B0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->pc = 0x11C9C0u;
            goto label_11c9c0;
        }
    }
    ctx->pc = 0x11C9B4u;
    // 0x11c9b4: 0xc04701c
    ctx->pc = 0x11C9B4u;
    SET_GPR_U32(ctx, 31, 0x11C9BCu);
    ctx->pc = 0x11C9B8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11C070u;
    {
        const uint32_t __entryPc = ctx->pc;
        setD4_CHCR_0x11c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C9BCu; }
    }
    if (ctx->pc != 0x11C9BCu) { return; }
    ctx->pc = 0x11C9BCu;
    // 0x11c9bc: 0x8e02003c
    ctx->pc = 0x11c9bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_11c9c0:
    // 0x11c9c0: 0x3c031000
    ctx->pc = 0x11c9c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x11c9c4: 0x34632010
    ctx->pc = 0x11c9c4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8208));
    // 0x11c9c8: 0x24040001
    ctx->pc = 0x11c9c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c9cc: 0xac620000
    ctx->pc = 0x11c9ccu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x11c9d0: 0xae040044
    ctx->pc = 0x11c9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 4));
    // 0x11c9d4: 0xc0438b0
    ctx->pc = 0x11C9D4u;
    SET_GPR_U32(ctx, 31, 0x11C9DCu);
    ctx->pc = 0x11C9D8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x10E2C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x10e2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C9DCu; }
    }
    if (ctx->pc != 0x11C9DCu) { return; }
    ctx->pc = 0x11C9DCu;
    // 0x11c9dc: 0xdfbf0070
    ctx->pc = 0x11c9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11c9e0: 0x24020001
    ctx->pc = 0x11c9e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c9e4: 0xdfb60060
    ctx->pc = 0x11c9e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11c9e8: 0xdfb50050
    ctx->pc = 0x11c9e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11c9ec: 0xdfb40040
    ctx->pc = 0x11c9ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11c9f0: 0xdfb30030
    ctx->pc = 0x11c9f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c9f4: 0xdfb20020
    ctx->pc = 0x11c9f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c9f8: 0xdfb10010
    ctx->pc = 0x11c9f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c9fc: 0xdfb00000
    ctx->pc = 0x11c9fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ca00: 0x3e00008
    ctx->pc = 0x11CA00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CA04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C7A0u: goto label_11c7a0;
            case 0x11C7B4u: goto label_11c7b4;
            case 0x11C7D8u: goto label_11c7d8;
            case 0x11C7F0u: goto label_11c7f0;
            case 0x11C7F8u: goto label_11c7f8;
            case 0x11C808u: goto label_11c808;
            case 0x11C84Cu: goto label_11c84c;
            case 0x11C8D4u: goto label_11c8d4;
            case 0x11C8E0u: goto label_11c8e0;
            case 0x11C8ECu: goto label_11c8ec;
            case 0x11C8F0u: goto label_11c8f0;
            case 0x11C928u: goto label_11c928;
            case 0x11C92Cu: goto label_11c92c;
            case 0x11C938u: goto label_11c938;
            case 0x11C968u: goto label_11c968;
            case 0x11C984u: goto label_11c984;
            case 0x11C9C0u: goto label_11c9c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11CA08u;
}
