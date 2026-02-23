#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXF_LoadPartition
// Address: 0x16a730 - 0x16aa08
void ADXF_LoadPartition_0x16a730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXF_LoadPartition");


    ctx->pc = 0x16a730u;

    // 0x16a730: 0x27bdff50
    ctx->pc = 0x16a730u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x16a734: 0xffb20030
    ctx->pc = 0x16a734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x16a738: 0xffb10020
    ctx->pc = 0x16a738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x16a73c: 0xa0902d
    ctx->pc = 0x16a73cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a740: 0xffb00010
    ctx->pc = 0x16a740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16a744: 0x80882d
    ctx->pc = 0x16a744u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a748: 0xffb70080
    ctx->pc = 0x16a748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x16a74c: 0xc0802d
    ctx->pc = 0x16a74cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a750: 0xffb30040
    ctx->pc = 0x16a750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x16a754: 0xe0b82d
    ctx->pc = 0x16a754u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a758: 0xffbf00a0
    ctx->pc = 0x16a758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x16a75c: 0xffbe0090
    ctx->pc = 0x16a75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x16a760: 0x200282d
    ctx->pc = 0x16a760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a764: 0xffb60070
    ctx->pc = 0x16a764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x16a768: 0xffb50060
    ctx->pc = 0x16a768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x16a76c: 0xc05a97e
    ctx->pc = 0x16A76Cu;
    SET_GPR_U32(ctx, 31, 0x16A774u);
    ctx->pc = 0x16A770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    ctx->pc = 0x16A5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxf_ChkPrmPt_0x16a5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A774u; }
        else if (ctx->pc != 0x16A774u) { ctx->pc = 0x16A774u; }
    }
    if (ctx->pc != 0x16A774u) { return; }
    ctx->pc = 0x16A774u;
    // 0x16a774: 0x40982d
    ctx->pc = 0x16a774u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a778: 0x6600098
    ctx->pc = 0x16A778u;
    {
        const bool branch_taken_0x16a778 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x16A77Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        if (branch_taken_0x16a778) {
            ctx->pc = 0x16A9DCu;
            goto label_16a9dc;
        }
    }
    ctx->pc = 0x16A780u;
    // 0x16a780: 0x240202d
    ctx->pc = 0x16a780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a784: 0xc05ad72
    ctx->pc = 0x16A784u;
    SET_GPR_U32(ctx, 31, 0x16A78Cu);
    ctx->pc = 0x16A788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16B5C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Open_0x16b5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A78Cu; }
        else if (ctx->pc != 0x16A78Cu) { ctx->pc = 0x16A78Cu; }
    }
    if (ctx->pc != 0x16A78Cu) { return; }
    ctx->pc = 0x16A78Cu;
    // 0x16a78c: 0x40f02d
    ctx->pc = 0x16a78cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a790: 0x57c0000b
    ctx->pc = 0x16A790u;
    {
        const bool branch_taken_0x16a790 = (GPR_U32(ctx, 30) != GPR_U32(ctx, 0));
        if (branch_taken_0x16a790) {
            ctx->pc = 0x16A794u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x16A7C0u;
            goto label_16a7c0;
        }
    }
    ctx->pc = 0x16A798u;
    // 0x16a798: 0x3c04002c
    ctx->pc = 0x16a798u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x16a79c: 0xc05a854
    ctx->pc = 0x16A79Cu;
    SET_GPR_U32(ctx, 31, 0x16A7A4u);
    ctx->pc = 0x16A7A0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939048));
    ctx->pc = 0x16A150u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc1_0x16a150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A7A4u; }
        else if (ctx->pc != 0x16A7A4u) { ctx->pc = 0x16A7A4u; }
    }
    if (ctx->pc != 0x16A7A4u) { return; }
    ctx->pc = 0x16A7A4u;
    // 0x16a7a4: 0x1000008c
    ctx->pc = 0x16A7A4u;
    {
        const bool branch_taken_0x16a7a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16A7A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x16a7a4) {
            ctx->pc = 0x16A9D8u;
            goto label_16a9d8;
        }
    }
    ctx->pc = 0x16A7ACu;
label_16a7ac:
    // 0x16a7ac: 0xacc70004
    ctx->pc = 0x16a7acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
    // 0x16a7b0: 0x10000081
    ctx->pc = 0x16A7B0u;
    {
        const bool branch_taken_0x16a7b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16A7B4u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 4294967292));
        if (branch_taken_0x16a7b0) {
            ctx->pc = 0x16A9B8u;
            goto label_16a9b8;
        }
    }
    ctx->pc = 0x16A7B8u;
label_16a7b8:
    // 0x16a7b8: 0x1000007f
    ctx->pc = 0x16A7B8u;
    {
        const bool branch_taken_0x16a7b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16A7BCu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16a7b8) {
            ctx->pc = 0x16A9B8u;
            goto label_16a9b8;
        }
    }
    ctx->pc = 0x16A7C0u;
label_16a7c0:
    // 0x16a7c0: 0x282d
    ctx->pc = 0x16a7c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a7c4: 0x24060118
    ctx->pc = 0x16a7c4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 280));
    // 0x16a7c8: 0xc050cfe
    ctx->pc = 0x16A7C8u;
    SET_GPR_U32(ctx, 31, 0x16A7D0u);
    ctx->pc = 0x16A7CCu;
    SET_GPR_U32(ctx, 21, ((uint32_t)46 << 16));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A7D0u; }
        else if (ctx->pc != 0x16A7D0u) { ctx->pc = 0x16A7D0u; }
    }
    if (ctx->pc != 0x16A7D0u) { return; }
    ctx->pc = 0x16A7D0u;
    // 0x16a7d0: 0x26160114
    ctx->pc = 0x16a7d0u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 16), 276));
    // 0x16a7d4: 0x3c020023
    ctx->pc = 0x16a7d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x16a7d8: 0x111880
    ctx->pc = 0x16a7d8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x16a7dc: 0x2442c918
    ctx->pc = 0x16a7dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953240));
    // 0x16a7e0: 0xae000000
    ctx->pc = 0x16a7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x16a7e4: 0x621821
    ctx->pc = 0x16a7e4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16a7e8: 0x240282d
    ctx->pc = 0x16a7e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a7ec: 0xac700000
    ctx->pc = 0x16a7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x16a7f0: 0x26040010
    ctx->pc = 0x16a7f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 16));
    // 0x16a7f4: 0x24060100
    ctx->pc = 0x16a7f4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    // 0x16a7f8: 0xc05167c
    ctx->pc = 0x16A7F8u;
    SET_GPR_U32(ctx, 31, 0x16A800u);
    ctx->pc = 0x16A7FCu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1459F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x1459f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A800u; }
        else if (ctx->pc != 0x16A800u) { ctx->pc = 0x16A800u; }
    }
    if (ctx->pc != 0x16A800u) { return; }
    ctx->pc = 0x16A800u;
    // 0x16a800: 0xa02d
    ctx->pc = 0x16a800u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a804: 0x3c03002e
    ctx->pc = 0x16a804u;
    SET_GPR_U32(ctx, 3, ((uint32_t)46 << 16));
    // 0x16a808: 0x3c02ffff
    ctx->pc = 0x16a808u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x16a80c: 0x3442ffc0
    ctx->pc = 0x16a80cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65472));
    // 0x16a810: 0x2463cfe0
    ctx->pc = 0x16a810u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294954976));
    // 0x16a814: 0x621824
    ctx->pc = 0x16a814u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16a818: 0xa200000e
    ctx->pc = 0x16a818u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x16a81c: 0x3c02002e
    ctx->pc = 0x16a81cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x16a820: 0xaea3f0a4
    ctx->pc = 0x16a820u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294963364), GPR_U32(ctx, 3));
    // 0x16a824: 0xac43f0a0
    ctx->pc = 0x16a824u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963360), GPR_U32(ctx, 3));
    // 0x16a828: 0x882d
    ctx->pc = 0x16a828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a82c: 0xae000008
    ctx->pc = 0x16a82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x16a830: 0x240affff
    ctx->pc = 0x16a830u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a834: 0x2c0902d
    ctx->pc = 0x16a834u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a838: 0x8ea6f0a4
    ctx->pc = 0x16a838u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 4294963364)));
    // 0x16a83c: 0x0
    ctx->pc = 0x16a83cu;
    // NOP
label_16a840:
    // 0x16a840: 0x3c0202d
    ctx->pc = 0x16a840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a844: 0x24050001
    ctx->pc = 0x16a844u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a848: 0xc05a990
    ctx->pc = 0x16A848u;
    SET_GPR_U32(ctx, 31, 0x16A850u);
    ctx->pc = 0x16A84Cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 10));
    ctx->pc = 0x16A640u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxf_LoadData_0x16a640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A850u; }
        else if (ctx->pc != 0x16A850u) { ctx->pc = 0x16A850u; }
    }
    if (ctx->pc != 0x16A850u) { return; }
    ctx->pc = 0x16A850u;
    // 0x16a850: 0x1840004f
    ctx->pc = 0x16A850u;
    {
        const bool branch_taken_0x16a850 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x16A854u;
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x16a850) {
            ctx->pc = 0x16A990u;
            goto label_16a990;
        }
    }
    ctx->pc = 0x16A858u;
    // 0x16a858: 0x8e080008
    ctx->pc = 0x16a858u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16a85c: 0x1500002a
    ctx->pc = 0x16A85Cu;
    {
        const bool branch_taken_0x16a85c = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x16A860u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16a85c) {
            ctx->pc = 0x16A908u;
            goto label_16a908;
        }
    }
    ctx->pc = 0x16A864u;
    // 0x16a864: 0x3c02002e
    ctx->pc = 0x16a864u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x16a868: 0x3c070001
    ctx->pc = 0x16a868u;
    SET_GPR_U32(ctx, 7, ((uint32_t)1 << 16));
    // 0x16a86c: 0x8c46f0a4
    ctx->pc = 0x16a86cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294963364)));
    // 0x16a870: 0x90c50007
    ctx->pc = 0x16a870u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
    // 0x16a874: 0x90c40006
    ctx->pc = 0x16a874u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x16a878: 0x90c20005
    ctx->pc = 0x16a878u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x16a87c: 0x52e00
    ctx->pc = 0x16a87cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x16a880: 0x90c30004
    ctx->pc = 0x16a880u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x16a884: 0x42400
    ctx->pc = 0x16a884u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x16a888: 0x21200
    ctx->pc = 0x16a888u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x16a88c: 0x822025
    ctx->pc = 0x16a88cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16a890: 0x651825
    ctx->pc = 0x16a890u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x16a894: 0x642025
    ctx->pc = 0x16a894u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16a898: 0xe4102a
    ctx->pc = 0x16a898u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 4)));
    // 0x16a89c: 0x1440ffc3
    ctx->pc = 0x16A89Cu;
    {
        const bool branch_taken_0x16a89c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16A8A0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 23), GPR_S32(ctx, 4)));
        if (branch_taken_0x16a89c) {
            ctx->pc = 0x16A7ACu;
            goto label_16a7ac;
        }
    }
    ctx->pc = 0x16A8A4u;
    // 0x16a8a4: 0x2e0182d
    ctx->pc = 0x16a8a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a8a8: 0x82180a
    ctx->pc = 0x16a8a8u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
    // 0x16a8ac: 0x24090003
    ctx->pc = 0x16a8acu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 3));
    // 0x16a8b0: 0x3064ffff
    ctx->pc = 0x16a8b0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), 65535));
    // 0x16a8b4: 0xa603000c
    ctx->pc = 0x16a8b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x16a8b8: 0x2482008c
    ctx->pc = 0x16a8b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 140));
    // 0x16a8bc: 0xae040008
    ctx->pc = 0x16a8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x16a8c0: 0x21042
    ctx->pc = 0x16a8c0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x16a8c4: 0x21080
    ctx->pc = 0x16a8c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x16a8c8: 0xae020004
    ctx->pc = 0x16a8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16a8cc: 0x90c50009
    ctx->pc = 0x16a8ccu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 9)));
    // 0x16a8d0: 0x90c2000b
    ctx->pc = 0x16a8d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 11)));
    // 0x16a8d4: 0x90c4000a
    ctx->pc = 0x16a8d4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x16a8d8: 0x52a00
    ctx->pc = 0x16a8d8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 8));
    // 0x16a8dc: 0x90c30008
    ctx->pc = 0x16a8dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x16a8e0: 0x21600
    ctx->pc = 0x16a8e0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
    // 0x16a8e4: 0x42400
    ctx->pc = 0x16a8e4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x16a8e8: 0x621825
    ctx->pc = 0x16a8e8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16a8ec: 0x852025
    ctx->pc = 0x16a8ecu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16a8f0: 0x641825
    ctx->pc = 0x16a8f0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16a8f4: 0x246207ff
    ctx->pc = 0x16a8f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2047));
    // 0x16a8f8: 0x143202a
    ctx->pc = 0x16a8f8u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 10), GPR_S32(ctx, 3)));
    // 0x16a8fc: 0x64100b
    ctx->pc = 0x16a8fcu;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x16a900: 0x212c3
    ctx->pc = 0x16a900u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x16a904: 0xa6c20000
    ctx->pc = 0x16a904u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 2));
label_16a908:
    // 0x16a908: 0x29220200
    ctx->pc = 0x16a908u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 512));
    // 0x16a90c: 0x10400021
    ctx->pc = 0x16A90Cu;
    {
        const bool branch_taken_0x16a90c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16A910u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16a90c) {
            ctx->pc = 0x16A994u;
            goto label_16a994;
        }
    }
    ctx->pc = 0x16A914u;
    // 0x16a914: 0x8e080008
    ctx->pc = 0x16a914u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16a918: 0x8ea2f0a4
    ctx->pc = 0x16a918u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294963364)));
    // 0x16a91c: 0x0
    ctx->pc = 0x16a91cu;
    // NOP
label_16a920:
    // 0x16a920: 0x92080
    ctx->pc = 0x16a920u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 9), 2));
    // 0x16a924: 0x26520002
    ctx->pc = 0x16a924u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 2));
    // 0x16a928: 0x26940001
    ctx->pc = 0x16a928u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    // 0x16a92c: 0x822021
    ctx->pc = 0x16a92cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16a930: 0x288382a
    ctx->pc = 0x16a930u;
    SET_GPR_U32(ctx, 7, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 8)));
    // 0x16a934: 0x90860001
    ctx->pc = 0x16a934u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x16a938: 0x90850003
    ctx->pc = 0x16a938u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x16a93c: 0x90830002
    ctx->pc = 0x16a93cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x16a940: 0x63200
    ctx->pc = 0x16a940u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x16a944: 0x90820000
    ctx->pc = 0x16a944u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16a948: 0x52e00
    ctx->pc = 0x16a948u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x16a94c: 0x31c00
    ctx->pc = 0x16a94cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x16a950: 0x661825
    ctx->pc = 0x16a950u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x16a954: 0x451025
    ctx->pc = 0x16a954u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16a958: 0x431025
    ctx->pc = 0x16a958u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16a95c: 0x244407ff
    ctx->pc = 0x16a95cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 2047));
    // 0x16a960: 0x24420ffe
    ctx->pc = 0x16a960u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4094));
    // 0x16a964: 0x144182a
    ctx->pc = 0x16a964u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 10), GPR_S32(ctx, 4)));
    // 0x16a968: 0x83100b
    ctx->pc = 0x16a968u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x16a96c: 0x212c3
    ctx->pc = 0x16a96cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x16a970: 0x10e0ff91
    ctx->pc = 0x16A970u;
    {
        const bool branch_taken_0x16a970 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x16A974u;
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x16a970) {
            ctx->pc = 0x16A7B8u;
            goto label_16a7b8;
        }
    }
    ctx->pc = 0x16A978u;
    // 0x16a978: 0x25290002
    ctx->pc = 0x16a978u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 2));
    // 0x16a97c: 0x29220200
    ctx->pc = 0x16a97cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 512));
    // 0x16a980: 0x1440ffe7
    ctx->pc = 0x16A980u;
    {
        const bool branch_taken_0x16a980 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16A984u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294963364)));
        if (branch_taken_0x16a980) {
            ctx->pc = 0x16A920u;
            goto label_16a920;
        }
    }
    ctx->pc = 0x16A988u;
    // 0x16a988: 0x10000002
    ctx->pc = 0x16A988u;
    {
        const bool branch_taken_0x16a988 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16A98Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16a988) {
            ctx->pc = 0x16A994u;
            goto label_16a994;
        }
    }
    ctx->pc = 0x16A990u;
label_16a990:
    // 0x16a990: 0x26310001
    ctx->pc = 0x16a990u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_16a994:
    // 0x16a994: 0x2a220003
    ctx->pc = 0x16a994u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 3));
    // 0x16a998: 0x1440ffa9
    ctx->pc = 0x16A998u;
    {
        const bool branch_taken_0x16a998 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16A99Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 4294963364)));
        if (branch_taken_0x16a998) {
            ctx->pc = 0x16A840u;
            goto label_16a840;
        }
    }
    ctx->pc = 0x16A9A0u;
    // 0x16a9a0: 0x24020003
    ctx->pc = 0x16a9a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x16a9a4: 0x16220005
    ctx->pc = 0x16A9A4u;
    {
        const bool branch_taken_0x16a9a4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x16A9A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
        if (branch_taken_0x16a9a4) {
            ctx->pc = 0x16A9BCu;
            goto label_16a9bc;
        }
    }
    ctx->pc = 0x16A9ACu;
    // 0x16a9ac: 0x3c04002c
    ctx->pc = 0x16a9acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x16a9b0: 0xc05a854
    ctx->pc = 0x16A9B0u;
    SET_GPR_U32(ctx, 31, 0x16A9B8u);
    ctx->pc = 0x16A9B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939096));
    ctx->pc = 0x16A150u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc1_0x16a150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A9B8u; }
        else if (ctx->pc != 0x16A9B8u) { ctx->pc = 0x16A9B8u; }
    }
    if (ctx->pc != 0x16A9B8u) { return; }
    ctx->pc = 0x16A9B8u;
label_16a9b8:
    // 0x16a9b8: 0x2402fffc
    ctx->pc = 0x16a9b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
label_16a9bc:
    // 0x16a9bc: 0x16620003
    ctx->pc = 0x16A9BCu;
    {
        const bool branch_taken_0x16a9bc = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x16A9C0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x16a9bc) {
            ctx->pc = 0x16A9CCu;
            goto label_16a9cc;
        }
    }
    ctx->pc = 0x16A9C4u;
    // 0x16a9c4: 0xc05a854
    ctx->pc = 0x16A9C4u;
    SET_GPR_U32(ctx, 31, 0x16A9CCu);
    ctx->pc = 0x16A9C8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939144));
    ctx->pc = 0x16A150u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc1_0x16a150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A9CCu; }
        else if (ctx->pc != 0x16A9CCu) { ctx->pc = 0x16A9CCu; }
    }
    if (ctx->pc != 0x16A9CCu) { return; }
    ctx->pc = 0x16A9CCu;
label_16a9cc:
    // 0x16a9cc: 0xc05ae0c
    ctx->pc = 0x16A9CCu;
    SET_GPR_U32(ctx, 31, 0x16A9D4u);
    ctx->pc = 0x16A9D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16B830u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Close_0x16b830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A9D4u; }
        else if (ctx->pc != 0x16A9D4u) { ctx->pc = 0x16A9D4u; }
    }
    if (ctx->pc != 0x16A9D4u) { return; }
    ctx->pc = 0x16A9D4u;
    // 0x16a9d4: 0x260102d
    ctx->pc = 0x16a9d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16a9d8:
    // 0x16a9d8: 0xdfbf00a0
    ctx->pc = 0x16a9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_16a9dc:
    // 0x16a9dc: 0xdfbe0090
    ctx->pc = 0x16a9dcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16a9e0: 0xdfb70080
    ctx->pc = 0x16a9e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16a9e4: 0xdfb60070
    ctx->pc = 0x16a9e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16a9e8: 0xdfb50060
    ctx->pc = 0x16a9e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16a9ec: 0xdfb40050
    ctx->pc = 0x16a9ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16a9f0: 0xdfb30040
    ctx->pc = 0x16a9f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16a9f4: 0xdfb20030
    ctx->pc = 0x16a9f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16a9f8: 0xdfb10020
    ctx->pc = 0x16a9f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a9fc: 0xdfb00010
    ctx->pc = 0x16a9fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16aa00: 0x3e00008
    ctx->pc = 0x16AA00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AA04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16A7ACu: goto label_16a7ac;
            case 0x16A7B8u: goto label_16a7b8;
            case 0x16A7C0u: goto label_16a7c0;
            case 0x16A840u: goto label_16a840;
            case 0x16A908u: goto label_16a908;
            case 0x16A920u: goto label_16a920;
            case 0x16A990u: goto label_16a990;
            case 0x16A994u: goto label_16a994;
            case 0x16A9B8u: goto label_16a9b8;
            case 0x16A9BCu: goto label_16a9bc;
            case 0x16A9CCu: goto label_16a9cc;
            case 0x16A9D8u: goto label_16a9d8;
            case 0x16A9DCu: goto label_16a9dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16AA08u;
}
