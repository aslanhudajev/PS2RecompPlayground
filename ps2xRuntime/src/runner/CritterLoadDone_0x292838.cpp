#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterLoadDone
// Address: 0x292838 - 0x29293c
void CritterLoadDone_0x292838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x292838u;

    // 0x292838: 0x27bdffa0
    ctx->pc = 0x292838u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29283c: 0xffbf0050
    ctx->pc = 0x29283cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x292840: 0xffb20040
    ctx->pc = 0x292840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x292844: 0xffb10030
    ctx->pc = 0x292844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x292848: 0xffb00020
    ctx->pc = 0x292848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x29284c: 0x80882d
    ctx->pc = 0x29284cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292850: 0x3c02003c
    ctx->pc = 0x292850u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x292854: 0x8c504168
    ctx->pc = 0x292854u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 16744)));
    // 0x292858: 0x86030024
    ctx->pc = 0x292858u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x29285c: 0x24020001
    ctx->pc = 0x29285cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x292860: 0x1462001d
    ctx->pc = 0x292860u;
    {
        const bool branch_taken_0x292860 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x292864u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x292860) {
            ctx->pc = 0x2928D8u;
            goto label_2928d8;
        }
    }
    ctx->pc = 0x292868u;
    // 0x292868: 0xc0b1e3e
    ctx->pc = 0x292868u;
    SET_GPR_U32(ctx, 31, 0x292870u);
    ctx->pc = 0x2C78F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_BGLoadModelDone_0x2c78f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292870u; }
    }
    if (ctx->pc != 0x292870u) { return; }
    ctx->pc = 0x292870u;
    // 0x292870: 0x1040002b
    ctx->pc = 0x292870u;
    {
        const bool branch_taken_0x292870 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x292874u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x292870) {
            ctx->pc = 0x292920u;
            goto label_292920;
        }
    }
    ctx->pc = 0x292878u;
    // 0x292878: 0xa6020024
    ctx->pc = 0x292878u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x29287c: 0x3a0202d
    ctx->pc = 0x29287cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292880: 0xc0a48b2
    ctx->pc = 0x292880u;
    SET_GPR_U32(ctx, 31, 0x292888u);
    ctx->pc = 0x292884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2922C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetCritterDesc_0x2922c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292888u; }
    }
    if (ctx->pc != 0x292888u) { return; }
    ctx->pc = 0x292888u;
    // 0x292888: 0x3a0202d
    ctx->pc = 0x292888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29288c: 0x3c05003b
    ctx->pc = 0x29288cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x292890: 0xc0b4ed2
    ctx->pc = 0x292890u;
    SET_GPR_U32(ctx, 31, 0x292898u);
    ctx->pc = 0x292894u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294959432));
    ctx->pc = 0x2D3B48u;
    {
        const uint32_t __entryPc = ctx->pc;
        FileSize_0x2d3b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292898u; }
    }
    if (ctx->pc != 0x292898u) { return; }
    ctx->pc = 0x292898u;
    // 0x292898: 0x12200004
    ctx->pc = 0x292898u;
    {
        const bool branch_taken_0x292898 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x29289Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x292898) {
            ctx->pc = 0x2928ACu;
            goto label_2928ac;
        }
    }
    ctx->pc = 0x2928A0u;
    // 0x2928a0: 0x227182a
    ctx->pc = 0x2928a0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 7)));
    // 0x2928a4: 0x220382d
    ctx->pc = 0x2928a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2928a8: 0x43380a
    ctx->pc = 0x2928a8u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 2));
label_2928ac:
    // 0x2928ac: 0x3a0202d
    ctx->pc = 0x2928acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2928b0: 0x3c05003b
    ctx->pc = 0x2928b0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2928b4: 0x24a5e148
    ctx->pc = 0x2928b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294959432));
    // 0x2928b8: 0x302d
    ctx->pc = 0x2928b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2928bc: 0x8e080028
    ctx->pc = 0x2928bcu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2928c0: 0x3c090029
    ctx->pc = 0x2928c0u;
    SET_GPR_U32(ctx, 9, ((uint32_t)41 << 16));
    // 0x2928c4: 0xc0b5094
    ctx->pc = 0x2928C4u;
    SET_GPR_U32(ctx, 31, 0x2928CCu);
    ctx->pc = 0x2928C8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 10256));
    ctx->pc = 0x2D4250u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFileRead_0x2d4250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2928CCu; }
    }
    if (ctx->pc != 0x2928CCu) { return; }
    ctx->pc = 0x2928CCu;
    // 0x2928cc: 0x3c03003c
    ctx->pc = 0x2928ccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x2928d0: 0x10000013
    ctx->pc = 0x2928D0u;
    {
        const bool branch_taken_0x2928d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2928D4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 16748), GPR_U32(ctx, 2));
        if (branch_taken_0x2928d0) {
            ctx->pc = 0x292920u;
            goto label_292920;
        }
    }
    ctx->pc = 0x2928D8u;
label_2928d8:
    // 0x2928d8: 0x3c02003c
    ctx->pc = 0x2928d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2928dc: 0x8c43416c
    ctx->pc = 0x2928dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 16748)));
    // 0x2928e0: 0x5060000f
    ctx->pc = 0x2928E0u;
    {
        const bool branch_taken_0x2928e0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2928e0) {
            ctx->pc = 0x2928E4u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x292920u;
            goto label_292920;
        }
    }
    ctx->pc = 0x2928E8u;
    // 0x2928e8: 0x8c620010
    ctx->pc = 0x2928e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2928ec: 0x1040000c
    ctx->pc = 0x2928ECu;
    {
        const bool branch_taken_0x2928ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2928F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2928ec) {
            ctx->pc = 0x292920u;
            goto label_292920;
        }
    }
    ctx->pc = 0x2928F4u;
    // 0x2928f4: 0xac620010
    ctx->pc = 0x2928f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x2928f8: 0x24020003
    ctx->pc = 0x2928f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2928fc: 0xa6020024
    ctx->pc = 0x2928fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x292900: 0x8e040028
    ctx->pc = 0x292900u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x292904: 0x86050022
    ctx->pc = 0x292904u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x292908: 0xc084784
    ctx->pc = 0x292908u;
    SET_GPR_U32(ctx, 31, 0x292910u);
    ctx->pc = 0x29290Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x211E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetupAtreeList_0x211e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292910u; }
    }
    if (ctx->pc != 0x292910u) { return; }
    ctx->pc = 0x292910u;
    // 0x292910: 0x8e040028
    ctx->pc = 0x292910u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x292914: 0xc084c42
    ctx->pc = 0x292914u;
    SET_GPR_U32(ctx, 31, 0x29291Cu);
    ctx->pc = 0x292918u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
    ctx->pc = 0x213108u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitTexMods_0x213108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29291Cu; }
    }
    if (ctx->pc != 0x29291Cu) { return; }
    ctx->pc = 0x29291Cu;
    // 0x29291c: 0x24120001
    ctx->pc = 0x29291cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
label_292920:
    // 0x292920: 0x240102d
    ctx->pc = 0x292920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292924: 0xdfbf0050
    ctx->pc = 0x292924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x292928: 0xdfb20040
    ctx->pc = 0x292928u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29292c: 0xdfb10030
    ctx->pc = 0x29292cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x292930: 0xdfb00020
    ctx->pc = 0x292930u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292934: 0x3e00008
    ctx->pc = 0x292934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292938u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2928ACu: goto label_2928ac;
            case 0x2928D8u: goto label_2928d8;
            case 0x292920u: goto label_292920;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29293Cu;
}
