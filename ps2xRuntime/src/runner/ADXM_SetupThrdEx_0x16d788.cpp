#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXM_SetupThrdEx
// Address: 0x16d788 - 0x16d904
void ADXM_SetupThrdEx_0x16d788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXM_SetupThrdEx");


    ctx->pc = 0x16d788u;

    // 0x16d788: 0x27bdffa0
    ctx->pc = 0x16d788u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16d78c: 0x8f83812c
    ctx->pc = 0x16d78cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934828)));
    // 0x16d790: 0xffb00030
    ctx->pc = 0x16d790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x16d794: 0xffbf0050
    ctx->pc = 0x16d794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x16d798: 0x80802d
    ctx->pc = 0x16d798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d79c: 0xffb10040
    ctx->pc = 0x16d79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x16d7a0: 0x8f828128
    ctx->pc = 0x16d7a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934824)));
    // 0x16d7a4: 0x14600051
    ctx->pc = 0x16D7A4u;
    {
        const bool branch_taken_0x16d7a4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x16D7A8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x16d7a4) {
            ctx->pc = 0x16D8ECu;
            goto label_16d8ec;
        }
    }
    ctx->pc = 0x16D7ACu;
    // 0x16d7ac: 0xc05f920
    ctx->pc = 0x16D7ACu;
    SET_GPR_U32(ctx, 31, 0x16D7B4u);
    ctx->pc = 0x17E480u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_Init_0x17e480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D7B4u; }
        else if (ctx->pc != 0x16D7B4u) { ctx->pc = 0x16D7B4u; }
    }
    if (ctx->pc != 0x16D7B4u) { return; }
    ctx->pc = 0x16D7B4u;
    // 0x16d7b4: 0x3c040017
    ctx->pc = 0x16d7b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x16d7b8: 0x282d
    ctx->pc = 0x16d7b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d7bc: 0xc05f86c
    ctx->pc = 0x16D7BCu;
    SET_GPR_U32(ctx, 31, 0x16D7C4u);
    ctx->pc = 0x16D7C0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952984));
    ctx->pc = 0x17E1B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_SetCbLock_0x17e1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D7C4u; }
        else if (ctx->pc != 0x16D7C4u) { ctx->pc = 0x16D7C4u; }
    }
    if (ctx->pc != 0x16D7C4u) { return; }
    ctx->pc = 0x16D7C4u;
    // 0x16d7c4: 0x3c040017
    ctx->pc = 0x16d7c4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x16d7c8: 0x282d
    ctx->pc = 0x16d7c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d7cc: 0xc05f870
    ctx->pc = 0x16D7CCu;
    SET_GPR_U32(ctx, 31, 0x16D7D4u);
    ctx->pc = 0x16D7D0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953096));
    ctx->pc = 0x17E1C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_SetCbUnlock_0x17e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D7D4u; }
        else if (ctx->pc != 0x16D7D4u) { ctx->pc = 0x16D7D4u; }
    }
    if (ctx->pc != 0x16D7D4u) { return; }
    ctx->pc = 0x16D7D4u;
    // 0x16d7d4: 0x56000012
    ctx->pc = 0x16D7D4u;
    {
        const bool branch_taken_0x16d7d4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x16d7d4) {
            ctx->pc = 0x16D7D8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->pc = 0x16D820u;
            goto label_16d820;
        }
    }
    ctx->pc = 0x16D7DCu;
    // 0x16d7dc: 0x3c110023
    ctx->pc = 0x16d7dcu;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    // 0x16d7e0: 0x24040018
    ctx->pc = 0x16d7e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
    // 0x16d7e4: 0x2622e6c0
    ctx->pc = 0x16d7e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294960832));
    // 0x16d7e8: 0x2403001a
    ctx->pc = 0x16d7e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 26));
    // 0x16d7ec: 0x24050001
    ctx->pc = 0x16d7ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d7f0: 0xac440010
    ctx->pc = 0x16d7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x16d7f4: 0xac430018
    ctx->pc = 0x16d7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x16d7f8: 0x24060008
    ctx->pc = 0x16d7f8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    // 0x16d7fc: 0xae25e6c0
    ctx->pc = 0x16d7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294960832), GPR_U32(ctx, 5));
    // 0x16d800: 0x2407000f
    ctx->pc = 0x16d800u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 15));
    // 0x16d804: 0x24080010
    ctx->pc = 0x16d804u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
    // 0x16d808: 0x24090019
    ctx->pc = 0x16d808u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 25));
    // 0x16d80c: 0xac460004
    ctx->pc = 0x16d80cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x16d810: 0xac470008
    ctx->pc = 0x16d810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x16d814: 0xac48000c
    ctx->pc = 0x16d814u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
    // 0x16d818: 0x10000010
    ctx->pc = 0x16D818u;
    {
        const bool branch_taken_0x16d818 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16D81Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 9));
        if (branch_taken_0x16d818) {
            ctx->pc = 0x16D85Cu;
            goto label_16d85c;
        }
    }
    ctx->pc = 0x16D820u;
label_16d820:
    // 0x16d820: 0x3c110023
    ctx->pc = 0x16d820u;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    // 0x16d824: 0x2624e6c0
    ctx->pc = 0x16d824u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 4294960832));
    // 0x16d828: 0xac830010
    ctx->pc = 0x16d828u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x16d82c: 0x8e020000
    ctx->pc = 0x16d82cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16d830: 0xae22e6c0
    ctx->pc = 0x16d830u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294960832), GPR_U32(ctx, 2));
    // 0x16d834: 0x8e030004
    ctx->pc = 0x16d834u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16d838: 0xac830004
    ctx->pc = 0x16d838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x16d83c: 0x8e020008
    ctx->pc = 0x16d83cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16d840: 0xac820008
    ctx->pc = 0x16d840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x16d844: 0x8e03000c
    ctx->pc = 0x16d844u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16d848: 0xac83000c
    ctx->pc = 0x16d848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x16d84c: 0x8e020014
    ctx->pc = 0x16d84cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x16d850: 0xac820014
    ctx->pc = 0x16d850u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x16d854: 0x8e030018
    ctx->pc = 0x16d854u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x16d858: 0xac830018
    ctx->pc = 0x16d858u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
label_16d85c:
    // 0x16d85c: 0xc0551f4
    ctx->pc = 0x16D85Cu;
    SET_GPR_U32(ctx, 31, 0x16D864u);
    ctx->pc = 0x1547D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetThreadId_0x1547d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D864u; }
        else if (ctx->pc != 0x16D864u) { ctx->pc = 0x16D864u; }
    }
    if (ctx->pc != 0x16D864u) { return; }
    ctx->pc = 0x16D864u;
    // 0x16d864: 0xaf82817c
    ctx->pc = 0x16d864u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934908), GPR_U32(ctx, 2));
    // 0x16d868: 0x3a0282d
    ctx->pc = 0x16d868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d86c: 0x8f84817c
    ctx->pc = 0x16d86cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
    // 0x16d870: 0xc0551f8
    ctx->pc = 0x16D870u;
    SET_GPR_U32(ctx, 31, 0x16D878u);
    ctx->pc = 0x1547E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReferThreadStatus_0x1547e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D878u; }
        else if (ctx->pc != 0x16D878u) { ctx->pc = 0x16D878u; }
    }
    if (ctx->pc != 0x16D878u) { return; }
    ctx->pc = 0x16D878u;
    // 0x16d878: 0x8fa30018
    ctx->pc = 0x16d878u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16d87c: 0xc05b370
    ctx->pc = 0x16D87Cu;
    SET_GPR_U32(ctx, 31, 0x16D884u);
    ctx->pc = 0x16D880u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935020), GPR_U32(ctx, 3));
    ctx->pc = 0x16CDC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_SetupSafeThrd_0x16cdc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D884u; }
        else if (ctx->pc != 0x16D884u) { ctx->pc = 0x16D884u; }
    }
    if (ctx->pc != 0x16D884u) { return; }
    ctx->pc = 0x16D884u;
    // 0x16d884: 0xc05b396
    ctx->pc = 0x16D884u;
    SET_GPR_U32(ctx, 31, 0x16D88Cu);
    ctx->pc = 0x16CE58u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_SetupUsrVsyncThrd_0x16ce58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D88Cu; }
        else if (ctx->pc != 0x16D88Cu) { ctx->pc = 0x16D88Cu; }
    }
    if (ctx->pc != 0x16D88Cu) { return; }
    ctx->pc = 0x16D88Cu;
    // 0x16d88c: 0xc05b3b4
    ctx->pc = 0x16D88Cu;
    SET_GPR_U32(ctx, 31, 0x16D894u);
    ctx->pc = 0x16CED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_SetupVsyncThrd_0x16ced0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D894u; }
        else if (ctx->pc != 0x16D894u) { ctx->pc = 0x16D894u; }
    }
    if (ctx->pc != 0x16D894u) { return; }
    ctx->pc = 0x16D894u;
    // 0x16d894: 0xc05b3d2
    ctx->pc = 0x16D894u;
    SET_GPR_U32(ctx, 31, 0x16D89Cu);
    ctx->pc = 0x16CF48u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_SetupMwIdleThrd_0x16cf48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D89Cu; }
        else if (ctx->pc != 0x16D89Cu) { ctx->pc = 0x16D89Cu; }
    }
    if (ctx->pc != 0x16D89Cu) { return; }
    ctx->pc = 0x16D89Cu;
    // 0x16d89c: 0xc05b3f4
    ctx->pc = 0x16D89Cu;
    SET_GPR_U32(ctx, 31, 0x16D8A4u);
    ctx->pc = 0x16CFD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_SetupUsrIdleThrd_0x16cfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D8A4u; }
        else if (ctx->pc != 0x16D8A4u) { ctx->pc = 0x16D8A4u; }
    }
    if (ctx->pc != 0x16D8A4u) { return; }
    ctx->pc = 0x16D8A4u;
    // 0x16d8a4: 0x2622e6c0
    ctx->pc = 0x16d8a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294960832));
    // 0x16d8a8: 0x8f84817c
    ctx->pc = 0x16d8a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
    // 0x16d8ac: 0xc0551dc
    ctx->pc = 0x16D8ACu;
    SET_GPR_U32(ctx, 31, 0x16D8B4u);
    ctx->pc = 0x16D8B0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x154770u;
    {
        const uint32_t __entryPc = ctx->pc;
        ChangeThreadPriority_0x154770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D8B4u; }
        else if (ctx->pc != 0x16D8B4u) { ctx->pc = 0x16D8B4u; }
    }
    if (ctx->pc != 0x16D8B4u) { return; }
    ctx->pc = 0x16D8B4u;
    // 0x16d8b4: 0x3c050017
    ctx->pc = 0x16d8b4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)23 << 16));
    // 0x16d8b8: 0x24040005
    ctx->pc = 0x16d8b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x16d8bc: 0x24a5c9c0
    ctx->pc = 0x16d8bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294953408));
    // 0x16d8c0: 0xc05f83a
    ctx->pc = 0x16D8C0u;
    SET_GPR_U32(ctx, 31, 0x16D8C8u);
    ctx->pc = 0x16D8C4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17E0E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_SetCbBdr_0x17e0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D8C8u; }
        else if (ctx->pc != 0x16D8C8u) { ctx->pc = 0x16D8C8u; }
    }
    if (ctx->pc != 0x16D8C8u) { return; }
    ctx->pc = 0x16D8C8u;
    // 0x16d8c8: 0x3c050017
    ctx->pc = 0x16d8c8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)23 << 16));
    // 0x16d8cc: 0x24040006
    ctx->pc = 0x16d8ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
    // 0x16d8d0: 0x24a5c9d0
    ctx->pc = 0x16d8d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294953424));
    // 0x16d8d4: 0xc05f83a
    ctx->pc = 0x16D8D4u;
    SET_GPR_U32(ctx, 31, 0x16D8DCu);
    ctx->pc = 0x16D8D8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17E0E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_SetCbBdr_0x17e0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D8DCu; }
        else if (ctx->pc != 0x16D8DCu) { ctx->pc = 0x16D8DCu; }
    }
    if (ctx->pc != 0x16D8DCu) { return; }
    ctx->pc = 0x16D8DCu;
    // 0x16d8dc: 0x24020001
    ctx->pc = 0x16d8dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d8e0: 0x8f83812c
    ctx->pc = 0x16d8e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934828)));
    // 0x16d8e4: 0xaf828130
    ctx->pc = 0x16d8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934832), GPR_U32(ctx, 2));
    // 0x16d8e8: 0x24630001
    ctx->pc = 0x16d8e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_16d8ec:
    // 0x16d8ec: 0xdfbf0050
    ctx->pc = 0x16d8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16d8f0: 0xdfb10040
    ctx->pc = 0x16d8f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16d8f4: 0xdfb00030
    ctx->pc = 0x16d8f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d8f8: 0xaf83812c
    ctx->pc = 0x16d8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934828), GPR_U32(ctx, 3));
    // 0x16d8fc: 0x3e00008
    ctx->pc = 0x16D8FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D900u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D820u: goto label_16d820;
            case 0x16D85Cu: goto label_16d85c;
            case 0x16D8ECu: goto label_16d8ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D904u;
}
