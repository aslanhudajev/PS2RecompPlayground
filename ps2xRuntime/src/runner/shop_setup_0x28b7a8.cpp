#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: shop_setup
// Address: 0x28b7a8 - 0x28bd38
void shop_setup_0x28b7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x28b7a8u;

    // 0x28b7a8: 0x27bdff40
    ctx->pc = 0x28b7a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x28b7ac: 0xffbf00b0
    ctx->pc = 0x28b7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x28b7b0: 0xffbe00a0
    ctx->pc = 0x28b7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x28b7b4: 0xffb70090
    ctx->pc = 0x28b7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x28b7b8: 0xffb60080
    ctx->pc = 0x28b7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x28b7bc: 0xffb50070
    ctx->pc = 0x28b7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x28b7c0: 0xffb40060
    ctx->pc = 0x28b7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x28b7c4: 0xffb30050
    ctx->pc = 0x28b7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x28b7c8: 0xffb20040
    ctx->pc = 0x28b7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x28b7cc: 0xffb10030
    ctx->pc = 0x28b7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x28b7d0: 0xc0899d4
    ctx->pc = 0x28B7D0u;
    SET_GPR_U32(ctx, 31, 0x28B7D8u);
    ctx->pc = 0x28B7D4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    ctx->pc = 0x226750u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadTowerAndSelect_0x226750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B7D8u; }
    }
    if (ctx->pc != 0x28B7D8u) { return; }
    ctx->pc = 0x28B7D8u;
    // 0x28b7d8: 0x3c100035
    ctx->pc = 0x28b7d8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)53 << 16));
    // 0x28b7dc: 0x8e02b45c
    ctx->pc = 0x28b7dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294947932)));
    // 0x28b7e0: 0x10400006
    ctx->pc = 0x28B7E0u;
    {
        const bool branch_taken_0x28b7e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28B7E4u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28b7e0) {
            ctx->pc = 0x28B7FCu;
            goto label_28b7fc;
        }
    }
    ctx->pc = 0x28B7E8u;
    // 0x28b7e8: 0xc089a32
    ctx->pc = 0x28B7E8u;
    SET_GPR_U32(ctx, 31, 0x28B7F0u);
    ctx->pc = 0x28B7ECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2268C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        TransitionBlitShow_0x2268c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B7F0u; }
    }
    if (ctx->pc != 0x28B7F0u) { return; }
    ctx->pc = 0x28B7F0u;
    // 0x28b7f0: 0x8e02b45c
    ctx->pc = 0x28b7f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294947932)));
    // 0x28b7f4: 0x144000a2
    ctx->pc = 0x28B7F4u;
    {
        const bool branch_taken_0x28b7f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28B7F8u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28b7f4) {
            ctx->pc = 0x28BA80u;
            goto label_28ba80;
        }
    }
    ctx->pc = 0x28B7FCu;
label_28b7fc:
    // 0x28b7fc: 0x3c020035
    ctx->pc = 0x28b7fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28b800: 0x2456b468
    ctx->pc = 0x28b800u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 4294947944));
    // 0x28b804: 0x3c020035
    ctx->pc = 0x28b804u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28b808: 0x245eb470
    ctx->pc = 0x28b808u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 4294947952));
    // 0x28b80c: 0x3c020035
    ctx->pc = 0x28b80cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28b810: 0x2457b478
    ctx->pc = 0x28b810u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 4294947960));
    // 0x28b814: 0x24142b00
    ctx->pc = 0x28b814u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 11008));
label_28b818:
    // 0x28b818: 0x3c020032
    ctx->pc = 0x28b818u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x28b81c: 0x24421bc0
    ctx->pc = 0x28b81cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x28b820: 0x400013
    ctx->pc = 0x28b820u;
    ctx->lo = GPR_U32(ctx, 2);
    // 0x28b824: 0x72b4a000
    ctx->pc = 0x28b824u;
    { int64_t acc = ((int64_t)ctx->hi << 32) | ctx->lo; int64_t prod = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28b828: 0x8e930004
    ctx->pc = 0x28b828u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x28b82c: 0x3c05003b
    ctx->pc = 0x28b82cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28b830: 0x26b20001
    ctx->pc = 0x28b830u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 21), 1));
    // 0x28b834: 0x3a0202d
    ctx->pc = 0x28b834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b838: 0x24a5d9e8
    ctx->pc = 0x28b838u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294957544));
    // 0x28b83c: 0xc0b6252
    ctx->pc = 0x28B83Cu;
    SET_GPR_U32(ctx, 31, 0x28B844u);
    ctx->pc = 0x28B840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B844u; }
    }
    if (ctx->pc != 0x28B844u) { return; }
    ctx->pc = 0x28B844u;
    // 0x28b844: 0x158880
    ctx->pc = 0x28b844u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 21), 2));
    // 0x28b848: 0x3c030035
    ctx->pc = 0x28b848u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28b84c: 0x2463b3e0
    ctx->pc = 0x28b84cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294947808));
    // 0x28b850: 0x2238821
    ctx->pc = 0x28b850u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x28b854: 0x3a0202d
    ctx->pc = 0x28b854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b858: 0x8e250000
    ctx->pc = 0x28b858u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28b85c: 0x302d
    ctx->pc = 0x28b85cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b860: 0x24070080
    ctx->pc = 0x28b860u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 128));
    // 0x28b864: 0xc0b0c1e
    ctx->pc = 0x28B864u;
    SET_GPR_U32(ctx, 31, 0x28B86Cu);
    ctx->pc = 0x28B868u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C3078u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlitSized_0x2c3078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B86Cu; }
    }
    if (ctx->pc != 0x28B86Cu) { return; }
    ctx->pc = 0x28B86Cu;
    // 0x28b86c: 0x24040014
    ctx->pc = 0x28b86cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 20));
    // 0x28b870: 0x2a48018
    ctx->pc = 0x28b870u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28b874: 0x2161821
    ctx->pc = 0x28b874u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x28b878: 0xac620000
    ctx->pc = 0x28b878u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28b87c: 0x3c05003b
    ctx->pc = 0x28b87cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28b880: 0x3a0202d
    ctx->pc = 0x28b880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b884: 0x24a5d9f8
    ctx->pc = 0x28b884u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294957560));
    // 0x28b888: 0xc0b6252
    ctx->pc = 0x28B888u;
    SET_GPR_U32(ctx, 31, 0x28B890u);
    ctx->pc = 0x28B88Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B890u; }
    }
    if (ctx->pc != 0x28B890u) { return; }
    ctx->pc = 0x28B890u;
    // 0x28b890: 0x3a0202d
    ctx->pc = 0x28b890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b894: 0x8e250000
    ctx->pc = 0x28b894u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28b898: 0x24060100
    ctx->pc = 0x28b898u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    // 0x28b89c: 0x24070080
    ctx->pc = 0x28b89cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 128));
    // 0x28b8a0: 0xc0b0c1e
    ctx->pc = 0x28B8A0u;
    SET_GPR_U32(ctx, 31, 0x28B8A8u);
    ctx->pc = 0x28B8A4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C3078u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlitSized_0x2c3078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B8A8u; }
    }
    if (ctx->pc != 0x28B8A8u) { return; }
    ctx->pc = 0x28B8A8u;
    // 0x28b8a8: 0x3c040035
    ctx->pc = 0x28b8a8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x28b8ac: 0x2484b46c
    ctx->pc = 0x28b8acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947948));
    // 0x28b8b0: 0x2041821
    ctx->pc = 0x28b8b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x28b8b4: 0xac620000
    ctx->pc = 0x28b8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28b8b8: 0x3c05003b
    ctx->pc = 0x28b8b8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28b8bc: 0x3a0202d
    ctx->pc = 0x28b8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b8c0: 0xc0b6252
    ctx->pc = 0x28B8C0u;
    SET_GPR_U32(ctx, 31, 0x28B8C8u);
    ctx->pc = 0x28B8C4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294957576));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B8C8u; }
    }
    if (ctx->pc != 0x28B8C8u) { return; }
    ctx->pc = 0x28B8C8u;
    // 0x28b8c8: 0x3a0202d
    ctx->pc = 0x28b8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b8cc: 0x8e250000
    ctx->pc = 0x28b8ccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28b8d0: 0x302d
    ctx->pc = 0x28b8d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b8d4: 0x24070080
    ctx->pc = 0x28b8d4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 128));
    // 0x28b8d8: 0xc0b0c1e
    ctx->pc = 0x28B8D8u;
    SET_GPR_U32(ctx, 31, 0x28B8E0u);
    ctx->pc = 0x28B8DCu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C3078u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlitSized_0x2c3078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B8E0u; }
    }
    if (ctx->pc != 0x28B8E0u) { return; }
    ctx->pc = 0x28B8E0u;
    // 0x28b8e0: 0x21e1821
    ctx->pc = 0x28b8e0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x28b8e4: 0xac620000
    ctx->pc = 0x28b8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28b8e8: 0x3c05003b
    ctx->pc = 0x28b8e8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28b8ec: 0x3a0202d
    ctx->pc = 0x28b8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b8f0: 0xc0b6252
    ctx->pc = 0x28B8F0u;
    SET_GPR_U32(ctx, 31, 0x28B8F8u);
    ctx->pc = 0x28B8F4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294957104));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B8F8u; }
    }
    if (ctx->pc != 0x28B8F8u) { return; }
    ctx->pc = 0x28B8F8u;
    // 0x28b8f8: 0x3a0202d
    ctx->pc = 0x28b8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b8fc: 0x8e250000
    ctx->pc = 0x28b8fcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28b900: 0x24060100
    ctx->pc = 0x28b900u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    // 0x28b904: 0x24070080
    ctx->pc = 0x28b904u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 128));
    // 0x28b908: 0xc0b0c1e
    ctx->pc = 0x28B908u;
    SET_GPR_U32(ctx, 31, 0x28B910u);
    ctx->pc = 0x28B90Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C3078u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlitSized_0x2c3078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B910u; }
    }
    if (ctx->pc != 0x28B910u) { return; }
    ctx->pc = 0x28B910u;
    // 0x28b910: 0x2d01821
    ctx->pc = 0x28b910u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x28b914: 0xac62000c
    ctx->pc = 0x28b914u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x28b918: 0x139880
    ctx->pc = 0x28b918u;
    SET_GPR_U32(ctx, 19, SLL32(GPR_U32(ctx, 19), 2));
    // 0x28b91c: 0x3c020035
    ctx->pc = 0x28b91cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28b920: 0x2442b410
    ctx->pc = 0x28b920u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947856));
    // 0x28b924: 0x2629821
    ctx->pc = 0x28b924u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x28b928: 0x3a0202d
    ctx->pc = 0x28b928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b92c: 0x3c05003b
    ctx->pc = 0x28b92cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28b930: 0x24a5da18
    ctx->pc = 0x28b930u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294957592));
    // 0x28b934: 0xc0b6252
    ctx->pc = 0x28B934u;
    SET_GPR_U32(ctx, 31, 0x28B93Cu);
    ctx->pc = 0x28B938u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B93Cu; }
    }
    if (ctx->pc != 0x28B93Cu) { return; }
    ctx->pc = 0x28B93Cu;
    // 0x28b93c: 0x8e250000
    ctx->pc = 0x28b93cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28b940: 0x3a0202d
    ctx->pc = 0x28b940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b944: 0x24a50020
    ctx->pc = 0x28b944u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
    // 0x28b948: 0xc0b0c08
    ctx->pc = 0x28B948u;
    SET_GPR_U32(ctx, 31, 0x28B950u);
    ctx->pc = 0x28B94Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B950u; }
    }
    if (ctx->pc != 0x28B950u) { return; }
    ctx->pc = 0x28B950u;
    // 0x28b950: 0x40202d
    ctx->pc = 0x28b950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b954: 0x2178021
    ctx->pc = 0x28b954u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x28b958: 0xae040000
    ctx->pc = 0x28b958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x28b95c: 0x8e8200fc
    ctx->pc = 0x28b95cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 252)));
    // 0x28b960: 0x14400004
    ctx->pc = 0x28B960u;
    {
        const bool branch_taken_0x28b960 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28B964u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
        if (branch_taken_0x28b960) {
            ctx->pc = 0x28B974u;
            goto label_28b974;
        }
    }
    ctx->pc = 0x28B968u;
    // 0x28b968: 0xc0b0ce8
    ctx->pc = 0x28B968u;
    SET_GPR_U32(ctx, 31, 0x28B970u);
    ctx->pc = 0x28B96Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B970u; }
    }
    if (ctx->pc != 0x28B970u) { return; }
    ctx->pc = 0x28B970u;
    // 0x28b970: 0x24030014
    ctx->pc = 0x28b970u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
label_28b974:
    // 0x28b974: 0x2a38018
    ctx->pc = 0x28b974u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28b978: 0x2161021
    ctx->pc = 0x28b978u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x28b97c: 0x3c01477a
    ctx->pc = 0x28b97cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)18298 << 16));
    // 0x28b980: 0x44816000
    ctx->pc = 0x28b980u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28b984: 0xc0b0dd6
    ctx->pc = 0x28B984u;
    SET_GPR_U32(ctx, 31, 0x28B98Cu);
    ctx->pc = 0x28B988u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B98Cu; }
    }
    if (ctx->pc != 0x28B98Cu) { return; }
    ctx->pc = 0x28B98Cu;
    // 0x28b98c: 0x3c040035
    ctx->pc = 0x28b98cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x28b990: 0x2484b46c
    ctx->pc = 0x28b990u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947948));
    // 0x28b994: 0x2041021
    ctx->pc = 0x28b994u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x28b998: 0x3c01477a
    ctx->pc = 0x28b998u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18298 << 16));
    // 0x28b99c: 0x44816000
    ctx->pc = 0x28b99cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28b9a0: 0xc0b0dd6
    ctx->pc = 0x28B9A0u;
    SET_GPR_U32(ctx, 31, 0x28B9A8u);
    ctx->pc = 0x28B9A4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B9A8u; }
    }
    if (ctx->pc != 0x28B9A8u) { return; }
    ctx->pc = 0x28B9A8u;
    // 0x28b9a8: 0x21e9021
    ctx->pc = 0x28b9a8u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x28b9ac: 0x3c014779
    ctx->pc = 0x28b9acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)18297 << 16));
    // 0x28b9b0: 0x34219c00
    ctx->pc = 0x28b9b0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39936));
    // 0x28b9b4: 0x44816000
    ctx->pc = 0x28b9b4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28b9b8: 0xc0b0dd6
    ctx->pc = 0x28B9B8u;
    SET_GPR_U32(ctx, 31, 0x28B9C0u);
    ctx->pc = 0x28B9BCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B9C0u; }
    }
    if (ctx->pc != 0x28B9C0u) { return; }
    ctx->pc = 0x28B9C0u;
    // 0x28b9c0: 0x26d1000c
    ctx->pc = 0x28b9c0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 22), 12));
    // 0x28b9c4: 0x2118821
    ctx->pc = 0x28b9c4u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x28b9c8: 0x3c014779
    ctx->pc = 0x28b9c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18297 << 16));
    // 0x28b9cc: 0x34219c00
    ctx->pc = 0x28b9ccu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39936));
    // 0x28b9d0: 0x44816000
    ctx->pc = 0x28b9d0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28b9d4: 0xc0b0dd6
    ctx->pc = 0x28B9D4u;
    SET_GPR_U32(ctx, 31, 0x28B9DCu);
    ctx->pc = 0x28B9D8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B9DCu; }
    }
    if (ctx->pc != 0x28B9DCu) { return; }
    ctx->pc = 0x28B9DCu;
    // 0x28b9dc: 0x2178021
    ctx->pc = 0x28b9dcu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x28b9e0: 0x3c014779
    ctx->pc = 0x28b9e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18297 << 16));
    // 0x28b9e4: 0x34213800
    ctx->pc = 0x28b9e4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 14336));
    // 0x28b9e8: 0x44816000
    ctx->pc = 0x28b9e8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28b9ec: 0xc0b0dd6
    ctx->pc = 0x28B9ECu;
    SET_GPR_U32(ctx, 31, 0x28B9F4u);
    ctx->pc = 0x28B9F0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B9F4u; }
    }
    if (ctx->pc != 0x28B9F4u) { return; }
    ctx->pc = 0x28B9F4u;
    // 0x28b9f4: 0x8e440000
    ctx->pc = 0x28b9f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28b9f8: 0x3c05ffff
    ctx->pc = 0x28b9f8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65535 << 16));
    // 0x28b9fc: 0x34a5ffff
    ctx->pc = 0x28b9fcu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x28ba00: 0xc0b0caa
    ctx->pc = 0x28BA00u;
    SET_GPR_U32(ctx, 31, 0x28BA08u);
    ctx->pc = 0x28BA04u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16384));
    ctx->pc = 0x2C32A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetFlags_0x2c32a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BA08u; }
    }
    if (ctx->pc != 0x28BA08u) { return; }
    ctx->pc = 0x28BA08u;
    // 0x28ba08: 0x8e440000
    ctx->pc = 0x28ba08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28ba0c: 0x3c058080
    ctx->pc = 0x28ba0cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)32896 << 16));
    // 0x28ba10: 0x34a58080
    ctx->pc = 0x28ba10u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 32896));
    // 0x28ba14: 0x3c068080
    ctx->pc = 0x28ba14u;
    SET_GPR_U32(ctx, 6, ((uint32_t)32896 << 16));
    // 0x28ba18: 0x34c68080
    ctx->pc = 0x28ba18u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 32896));
    // 0x28ba1c: 0x3c078080
    ctx->pc = 0x28ba1cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)32896 << 16));
    // 0x28ba20: 0x34e78080
    ctx->pc = 0x28ba20u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 32896));
    // 0x28ba24: 0x3c088080
    ctx->pc = 0x28ba24u;
    SET_GPR_U32(ctx, 8, ((uint32_t)32896 << 16));
    // 0x28ba28: 0xc0b0f7c
    ctx->pc = 0x28BA28u;
    SET_GPR_U32(ctx, 31, 0x28BA30u);
    ctx->pc = 0x28BA2Cu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 32896));
    ctx->pc = 0x2C3DF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetColor4_0x2c3df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BA30u; }
    }
    if (ctx->pc != 0x28BA30u) { return; }
    ctx->pc = 0x28BA30u;
    // 0x28ba30: 0x8e240000
    ctx->pc = 0x28ba30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28ba34: 0x3c05ffff
    ctx->pc = 0x28ba34u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65535 << 16));
    // 0x28ba38: 0x34a5ffff
    ctx->pc = 0x28ba38u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x28ba3c: 0xc0b0caa
    ctx->pc = 0x28BA3Cu;
    SET_GPR_U32(ctx, 31, 0x28BA44u);
    ctx->pc = 0x28BA40u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16384));
    ctx->pc = 0x2C32A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetFlags_0x2c32a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BA44u; }
    }
    if (ctx->pc != 0x28BA44u) { return; }
    ctx->pc = 0x28BA44u;
    // 0x28ba44: 0x8e240000
    ctx->pc = 0x28ba44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28ba48: 0x3c058080
    ctx->pc = 0x28ba48u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32896 << 16));
    // 0x28ba4c: 0x34a58080
    ctx->pc = 0x28ba4cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 32896));
    // 0x28ba50: 0x3c068080
    ctx->pc = 0x28ba50u;
    SET_GPR_U32(ctx, 6, ((uint32_t)32896 << 16));
    // 0x28ba54: 0x34c68080
    ctx->pc = 0x28ba54u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 32896));
    // 0x28ba58: 0x3c078080
    ctx->pc = 0x28ba58u;
    SET_GPR_U32(ctx, 7, ((uint32_t)32896 << 16));
    // 0x28ba5c: 0x34e78080
    ctx->pc = 0x28ba5cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 32896));
    // 0x28ba60: 0x3c088080
    ctx->pc = 0x28ba60u;
    SET_GPR_U32(ctx, 8, ((uint32_t)32896 << 16));
    // 0x28ba64: 0xc0b0f7c
    ctx->pc = 0x28BA64u;
    SET_GPR_U32(ctx, 31, 0x28BA6Cu);
    ctx->pc = 0x28BA68u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 32896));
    ctx->pc = 0x2C3DF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetColor4_0x2c3df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BA6Cu; }
    }
    if (ctx->pc != 0x28BA6Cu) { return; }
    ctx->pc = 0x28BA6Cu;
    // 0x28ba6c: 0x26b50001
    ctx->pc = 0x28ba6cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
    // 0x28ba70: 0x2aa20004
    ctx->pc = 0x28ba70u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), 4));
    // 0x28ba74: 0x1440ff68
    ctx->pc = 0x28BA74u;
    {
        const bool branch_taken_0x28ba74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28BA78u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x28ba74) {
            ctx->pc = 0x28B818u;
            goto label_28b818;
        }
    }
    ctx->pc = 0x28BA7Cu;
    // 0x28ba7c: 0xa82d
    ctx->pc = 0x28ba7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ba80:
    // 0x28ba80: 0x3c020032
    ctx->pc = 0x28ba80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x28ba84: 0x24561bc0
    ctx->pc = 0x28ba84u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 7104));
label_28ba88:
    // 0x28ba88: 0xaec00984
    ctx->pc = 0x28ba88u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 2436), GPR_U32(ctx, 0));
    // 0x28ba8c: 0xaec00980
    ctx->pc = 0x28ba8cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 2432), GPR_U32(ctx, 0));
    // 0x28ba90: 0xaec00988
    ctx->pc = 0x28ba90u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 2440), GPR_U32(ctx, 0));
    // 0x28ba94: 0xc08d382
    ctx->pc = 0x28BA94u;
    SET_GPR_U32(ctx, 31, 0x28BA9Cu);
    ctx->pc = 0x28BA98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x234E08u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_player_display_0x234e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BA9Cu; }
    }
    if (ctx->pc != 0x28BA9Cu) { return; }
    ctx->pc = 0x28BA9Cu;
    // 0x28ba9c: 0x3c020035
    ctx->pc = 0x28ba9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28baa0: 0x8c42b45c
    ctx->pc = 0x28baa0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294947932)));
    // 0x28baa4: 0x5440008e
    ctx->pc = 0x28BAA4u;
    {
        const bool branch_taken_0x28baa4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x28baa4) {
            ctx->pc = 0x28BAA8u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x28BCE0u;
            goto label_28bce0;
        }
    }
    ctx->pc = 0x28BAACu;
    // 0x28baac: 0x882d
    ctx->pc = 0x28baacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bab0: 0x3c020035
    ctx->pc = 0x28bab0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28bab4: 0x2444b4c8
    ctx->pc = 0x28bab4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294948040));
    // 0x28bab8: 0x24020018
    ctx->pc = 0x28bab8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x28babc: 0x2a21818
    ctx->pc = 0x28babcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_28bac0:
    // 0x28bac0: 0x111080
    ctx->pc = 0x28bac0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x28bac4: 0x431021
    ctx->pc = 0x28bac4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28bac8: 0x441021
    ctx->pc = 0x28bac8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28bacc: 0xac400000
    ctx->pc = 0x28baccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x28bad0: 0x26310001
    ctx->pc = 0x28bad0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x28bad4: 0x2e220006
    ctx->pc = 0x28bad4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 6));
    // 0x28bad8: 0x1440fff9
    ctx->pc = 0x28BAD8u;
    {
        const bool branch_taken_0x28bad8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x28bad8) {
            ctx->pc = 0x28BAC0u;
            goto label_28bac0;
        }
    }
    ctx->pc = 0x28BAE0u;
    // 0x28bae0: 0x3c030035
    ctx->pc = 0x28bae0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28bae4: 0x8c62b52c
    ctx->pc = 0x28bae4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294948140)));
    // 0x28bae8: 0x18400016
    ctx->pc = 0x28BAE8u;
    {
        const bool branch_taken_0x28bae8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28BAECu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28bae8) {
            ctx->pc = 0x28BB44u;
            goto label_28bb44;
        }
    }
    ctx->pc = 0x28BAF0u;
    // 0x28baf0: 0x3c020035
    ctx->pc = 0x28baf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28baf4: 0x2448b530
    ctx->pc = 0x28baf4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294948144));
    // 0x28baf8: 0x152a00
    ctx->pc = 0x28baf8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 21), 8));
    // 0x28bafc: 0x3c020035
    ctx->pc = 0x28bafcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28bb00: 0x2447bd30
    ctx->pc = 0x28bb00u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294950192));
    // 0x28bb04: 0x3c020035
    ctx->pc = 0x28bb04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28bb08: 0x2446b930
    ctx->pc = 0x28bb08u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294949168));
    // 0x28bb0c: 0x8c64b52c
    ctx->pc = 0x28bb0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4294948140)));
    // 0x28bb10: 0x111080
    ctx->pc = 0x28bb10u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x28bb14: 0x0
    ctx->pc = 0x28bb14u;
    // NOP
label_28bb18:
    // 0x28bb18: 0x451021
    ctx->pc = 0x28bb18u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x28bb1c: 0x481821
    ctx->pc = 0x28bb1cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x28bb20: 0xac600000
    ctx->pc = 0x28bb20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x28bb24: 0x471821
    ctx->pc = 0x28bb24u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x28bb28: 0xac600000
    ctx->pc = 0x28bb28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x28bb2c: 0x461021
    ctx->pc = 0x28bb2cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x28bb30: 0xac400000
    ctx->pc = 0x28bb30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x28bb34: 0x26310001
    ctx->pc = 0x28bb34u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x28bb38: 0x224102a
    ctx->pc = 0x28bb38u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 4)));
    // 0x28bb3c: 0x1440fff6
    ctx->pc = 0x28BB3Cu;
    {
        const bool branch_taken_0x28bb3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28BB40u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x28bb3c) {
            ctx->pc = 0x28BB18u;
            goto label_28bb18;
        }
    }
    ctx->pc = 0x28BB44u;
label_28bb44:
    // 0x28bb44: 0x8ec300fc
    ctx->pc = 0x28bb44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 252)));
    // 0x28bb48: 0x24020001
    ctx->pc = 0x28bb48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bb4c: 0x10620003
    ctx->pc = 0x28BB4Cu;
    {
        const bool branch_taken_0x28bb4c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x28BB50u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x28bb4c) {
            ctx->pc = 0x28BB5Cu;
            goto label_28bb5c;
        }
    }
    ctx->pc = 0x28BB54u;
    // 0x28bb54: 0x54620062
    ctx->pc = 0x28BB54u;
    {
        const bool branch_taken_0x28bb54 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x28bb54) {
            ctx->pc = 0x28BB58u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x28BCE0u;
            goto label_28bce0;
        }
    }
    ctx->pc = 0x28BB5Cu;
label_28bb5c:
    // 0x28bb5c: 0x151080
    ctx->pc = 0x28bb5cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
    // 0x28bb60: 0x3c030035
    ctx->pc = 0x28bb60u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28bb64: 0x2463b3e0
    ctx->pc = 0x28bb64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294947808));
    // 0x28bb68: 0x431021
    ctx->pc = 0x28bb68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28bb6c: 0x8c420000
    ctx->pc = 0x28bb6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28bb70: 0x24420014
    ctx->pc = 0x28bb70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20));
    // 0x28bb74: 0xafa20010
    ctx->pc = 0x28bb74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x28bb78: 0x3c020035
    ctx->pc = 0x28bb78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28bb7c: 0x2452b380
    ctx->pc = 0x28bb7cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294947712));
    // 0x28bb80: 0x882d
    ctx->pc = 0x28bb80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bb84: 0x3c020035
    ctx->pc = 0x28bb84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28bb88: 0x2442b3e0
    ctx->pc = 0x28bb88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947808));
    // 0x28bb8c: 0x151880
    ctx->pc = 0x28bb8cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 21), 2));
    // 0x28bb90: 0x629821
    ctx->pc = 0x28bb90u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28bb94: 0x3c020035
    ctx->pc = 0x28bb94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28bb98: 0x245eb4c8
    ctx->pc = 0x28bb98u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 4294948040));
    // 0x28bb9c: 0x24020018
    ctx->pc = 0x28bb9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x28bba0: 0x2a2a018
    ctx->pc = 0x28bba0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28bba4: 0x3417fa00
    ctx->pc = 0x28bba4u;
    SET_GPR_U32(ctx, 23, OR32(GPR_U32(ctx, 0), 64000));
label_28bba8:
    // 0x28bba8: 0x8e440000
    ctx->pc = 0x28bba8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28bbac: 0x8e650000
    ctx->pc = 0x28bbacu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x28bbb0: 0x8e460008
    ctx->pc = 0x28bbb0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x28bbb4: 0x2407ffff
    ctx->pc = 0x28bbb4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28bbb8: 0xc0b0c1e
    ctx->pc = 0x28BBB8u;
    SET_GPR_U32(ctx, 31, 0x28BBC0u);
    ctx->pc = 0x28BBBCu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C3078u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlitSized_0x2c3078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BBC0u; }
    }
    if (ctx->pc != 0x28BBC0u) { return; }
    ctx->pc = 0x28BBC0u;
    // 0x28bbc0: 0x118080
    ctx->pc = 0x28bbc0u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 17), 2));
    // 0x28bbc4: 0x2148021
    ctx->pc = 0x28bbc4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x28bbc8: 0x21e8021
    ctx->pc = 0x28bbc8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x28bbcc: 0xae020000
    ctx->pc = 0x28bbccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x28bbd0: 0x8e660000
    ctx->pc = 0x28bbd0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x28bbd4: 0x8e450004
    ctx->pc = 0x28bbd4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x28bbd8: 0x8e43000c
    ctx->pc = 0x28bbd8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x28bbdc: 0x771821
    ctx->pc = 0x28bbdcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x28bbe0: 0x40202d
    ctx->pc = 0x28bbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bbe4: 0xc52821
    ctx->pc = 0x28bbe4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x28bbe8: 0x44836000
    ctx->pc = 0x28bbe8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 3);
    // 0x28bbec: 0x46806320
    ctx->pc = 0x28bbecu;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x28bbf0: 0xc0b0df2
    ctx->pc = 0x28BBF0u;
    SET_GPR_U32(ctx, 31, 0x28BBF8u);
    ctx->pc = 0x28BBF4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->pc = 0x2C37C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetPos_0x2c37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BBF8u; }
    }
    if (ctx->pc != 0x28BBF8u) { return; }
    ctx->pc = 0x28BBF8u;
    // 0x28bbf8: 0x8e040000
    ctx->pc = 0x28bbf8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28bbfc: 0xc0b0ce8
    ctx->pc = 0x28BBFCu;
    SET_GPR_U32(ctx, 31, 0x28BC04u);
    ctx->pc = 0x28BC00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BC04u; }
    }
    if (ctx->pc != 0x28BC04u) { return; }
    ctx->pc = 0x28BC04u;
    // 0x28bc04: 0x26310001
    ctx->pc = 0x28bc04u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x28bc08: 0x2e220006
    ctx->pc = 0x28bc08u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 6));
    // 0x28bc0c: 0x1440ffe6
    ctx->pc = 0x28BC0Cu;
    {
        const bool branch_taken_0x28bc0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28BC10u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 16));
        if (branch_taken_0x28bc0c) {
            ctx->pc = 0x28BBA8u;
            goto label_28bba8;
        }
    }
    ctx->pc = 0x28BC14u;
    // 0x28bc14: 0x151080
    ctx->pc = 0x28bc14u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
    // 0x28bc18: 0x3c04003c
    ctx->pc = 0x28bc18u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x28bc1c: 0x24843de0
    ctx->pc = 0x28bc1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 15840));
    // 0x28bc20: 0x441021
    ctx->pc = 0x28bc20u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28bc24: 0xac400000
    ctx->pc = 0x28bc24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x28bc28: 0x3c020035
    ctx->pc = 0x28bc28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28bc2c: 0x8c50b528
    ctx->pc = 0x28bc2cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294948136)));
    // 0x28bc30: 0x3c030035
    ctx->pc = 0x28bc30u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28bc34: 0x8c62b52c
    ctx->pc = 0x28bc34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294948140)));
    // 0x28bc38: 0x18400020
    ctx->pc = 0x28BC38u;
    {
        const bool branch_taken_0x28bc38 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28BC3Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28bc38) {
            ctx->pc = 0x28BCBCu;
            goto label_28bcbc;
        }
    }
    ctx->pc = 0x28BC40u;
    // 0x28bc40: 0x3c02003c
    ctx->pc = 0x28bc40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x28bc44: 0x24423de0
    ctx->pc = 0x28bc44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15840));
    // 0x28bc48: 0x151880
    ctx->pc = 0x28bc48u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 21), 2));
    // 0x28bc4c: 0x629021
    ctx->pc = 0x28bc4cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28bc50: 0x3c020035
    ctx->pc = 0x28bc50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28bc54: 0x2457b530
    ctx->pc = 0x28bc54u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 4294948144));
    // 0x28bc58: 0x159a00
    ctx->pc = 0x28bc58u;
    SET_GPR_U32(ctx, 19, SLL32(GPR_U32(ctx, 21), 8));
    // 0x28bc5c: 0x3c140035
    ctx->pc = 0x28bc5cu;
    SET_GPR_U32(ctx, 20, ((uint32_t)53 << 16));
label_28bc60:
    // 0x28bc60: 0x8ec21a20
    ctx->pc = 0x28bc60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 6688)));
    // 0x28bc64: 0x8e030048
    ctx->pc = 0x28bc64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x28bc68: 0x43102a
    ctx->pc = 0x28bc68u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x28bc6c: 0x14400004
    ctx->pc = 0x28BC6Cu;
    {
        const bool branch_taken_0x28bc6c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28BC70u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28bc6c) {
            ctx->pc = 0x28BC80u;
            goto label_28bc80;
        }
    }
    ctx->pc = 0x28BC74u;
    // 0x28bc74: 0x8e420000
    ctx->pc = 0x28bc74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28bc78: 0x24420001
    ctx->pc = 0x28bc78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x28bc7c: 0xae420000
    ctx->pc = 0x28bc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_28bc80:
    // 0x28bc80: 0x8fa50010
    ctx->pc = 0x28bc80u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28bc84: 0xc0b0c08
    ctx->pc = 0x28BC84u;
    SET_GPR_U32(ctx, 31, 0x28BC8Cu);
    ctx->pc = 0x28BC88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BC8Cu; }
    }
    if (ctx->pc != 0x28BC8Cu) { return; }
    ctx->pc = 0x28BC8Cu;
    // 0x28bc8c: 0x111880
    ctx->pc = 0x28bc8cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x28bc90: 0x731821
    ctx->pc = 0x28bc90u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x28bc94: 0x771821
    ctx->pc = 0x28bc94u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x28bc98: 0xac620000
    ctx->pc = 0x28bc98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28bc9c: 0x40202d
    ctx->pc = 0x28bc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bca0: 0xc0b0ce8
    ctx->pc = 0x28BCA0u;
    SET_GPR_U32(ctx, 31, 0x28BCA8u);
    ctx->pc = 0x28BCA4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BCA8u; }
    }
    if (ctx->pc != 0x28BCA8u) { return; }
    ctx->pc = 0x28BCA8u;
    // 0x28bca8: 0x26310001
    ctx->pc = 0x28bca8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x28bcac: 0x8e82b52c
    ctx->pc = 0x28bcacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294948140)));
    // 0x28bcb0: 0x222102a
    ctx->pc = 0x28bcb0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x28bcb4: 0x1440ffea
    ctx->pc = 0x28BCB4u;
    {
        const bool branch_taken_0x28bcb4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28BCB8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 80));
        if (branch_taken_0x28bcb4) {
            ctx->pc = 0x28BC60u;
            goto label_28bc60;
        }
    }
    ctx->pc = 0x28BCBCu;
label_28bcbc:
    // 0x28bcbc: 0x151200
    ctx->pc = 0x28bcbcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 8));
    // 0x28bcc0: 0x3c040035
    ctx->pc = 0x28bcc0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x28bcc4: 0x2484c130
    ctx->pc = 0x28bcc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294951216));
    // 0x28bcc8: 0x441021
    ctx->pc = 0x28bcc8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28bccc: 0x2403ffff
    ctx->pc = 0x28bcccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28bcd0: 0xac430000
    ctx->pc = 0x28bcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28bcd4: 0xc0a29ea
    ctx->pc = 0x28BCD4u;
    SET_GPR_U32(ctx, 31, 0x28BCDCu);
    ctx->pc = 0x28BCD8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28A7A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        make_skiplist_0x28a7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BCDCu; }
    }
    if (ctx->pc != 0x28BCDCu) { return; }
    ctx->pc = 0x28BCDCu;
    // 0x28bcdc: 0x26b50001
    ctx->pc = 0x28bcdcu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
label_28bce0:
    // 0x28bce0: 0x2aa20004
    ctx->pc = 0x28bce0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), 4));
    // 0x28bce4: 0x1440ff68
    ctx->pc = 0x28BCE4u;
    {
        const bool branch_taken_0x28bce4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28BCE8u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 11008));
        if (branch_taken_0x28bce4) {
            ctx->pc = 0x28BA88u;
            goto label_28ba88;
        }
    }
    ctx->pc = 0x28BCECu;
    // 0x28bcec: 0xc08da4e
    ctx->pc = 0x28BCECu;
    SET_GPR_U32(ctx, 31, 0x28BCF4u);
    ctx->pc = 0x28BCF0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x236938u;
    {
        const uint32_t __entryPc = ctx->pc;
        WritePlayerInfo_0x236938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BCF4u; }
    }
    if (ctx->pc != 0x28BCF4u) { return; }
    ctx->pc = 0x28BCF4u;
    // 0x28bcf4: 0x3c02003c
    ctx->pc = 0x28bcf4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x28bcf8: 0xac403d98
    ctx->pc = 0x28bcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15768), GPR_U32(ctx, 0));
    // 0x28bcfc: 0x3c03003c
    ctx->pc = 0x28bcfcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x28bd00: 0x24020001
    ctx->pc = 0x28bd00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bd04: 0xac623ef0
    ctx->pc = 0x28bd04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16112), GPR_U32(ctx, 2));
    // 0x28bd08: 0xdfbf00b0
    ctx->pc = 0x28bd08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28bd0c: 0xdfbe00a0
    ctx->pc = 0x28bd0cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28bd10: 0xdfb70090
    ctx->pc = 0x28bd10u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28bd14: 0xdfb60080
    ctx->pc = 0x28bd14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28bd18: 0xdfb50070
    ctx->pc = 0x28bd18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28bd1c: 0xdfb40060
    ctx->pc = 0x28bd1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28bd20: 0xdfb30050
    ctx->pc = 0x28bd20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28bd24: 0xdfb20040
    ctx->pc = 0x28bd24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28bd28: 0xdfb10030
    ctx->pc = 0x28bd28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28bd2c: 0xdfb00020
    ctx->pc = 0x28bd2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28bd30: 0x3e00008
    ctx->pc = 0x28BD30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BD34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B7FCu: goto label_28b7fc;
            case 0x28B818u: goto label_28b818;
            case 0x28B974u: goto label_28b974;
            case 0x28BA80u: goto label_28ba80;
            case 0x28BA88u: goto label_28ba88;
            case 0x28BAC0u: goto label_28bac0;
            case 0x28BB18u: goto label_28bb18;
            case 0x28BB44u: goto label_28bb44;
            case 0x28BB5Cu: goto label_28bb5c;
            case 0x28BBA8u: goto label_28bba8;
            case 0x28BC60u: goto label_28bc60;
            case 0x28BC80u: goto label_28bc80;
            case 0x28BCBCu: goto label_28bcbc;
            case 0x28BCE0u: goto label_28bce0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28BD38u;
}
