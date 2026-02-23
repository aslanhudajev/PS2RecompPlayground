#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LSC_Finish
// Address: 0x17a7f8 - 0x17a8a8
void LSC_Finish_0x17a7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LSC_Finish");


    ctx->pc = 0x17a7f8u;

    // 0x17a7f8: 0x27bdffa0
    ctx->pc = 0x17a7f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17a7fc: 0xffbf0050
    ctx->pc = 0x17a7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x17a800: 0x3a0202d
    ctx->pc = 0x17a800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a804: 0xffb30040
    ctx->pc = 0x17a804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x17a808: 0xffb20030
    ctx->pc = 0x17a808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x17a80c: 0xffb10020
    ctx->pc = 0x17a80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x17a810: 0xc05e9b4
    ctx->pc = 0x17A810u;
    SET_GPR_U32(ctx, 31, 0x17A818u);
    ctx->pc = 0x17A814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->pc = 0x17A6D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_LockCrs_0x17a6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A818u; }
        else if (ctx->pc != 0x17A818u) { ctx->pc = 0x17A818u; }
    }
    if (ctx->pc != 0x17A818u) { return; }
    ctx->pc = 0x17A818u;
    // 0x17a818: 0x8f8282b4
    ctx->pc = 0x17a818u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x17a81c: 0x2442ffff
    ctx->pc = 0x17a81cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17a820: 0x14400018
    ctx->pc = 0x17A820u;
    {
        const bool branch_taken_0x17a820 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17A824u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935220), GPR_U32(ctx, 2));
        if (branch_taken_0x17a820) {
            ctx->pc = 0x17A884u;
            goto label_17a884;
        }
    }
    ctx->pc = 0x17A828u;
    // 0x17a828: 0x3c130024
    ctx->pc = 0x17a828u;
    SET_GPR_U32(ctx, 19, ((uint32_t)36 << 16));
    // 0x17a82c: 0x24120001
    ctx->pc = 0x17a82cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a830: 0x2670a680
    ctx->pc = 0x17a830u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 4294944384));
    // 0x17a834: 0x261121c0
    ctx->pc = 0x17a834u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 8640));
    // 0x17a838: 0x82020000
    ctx->pc = 0x17a838u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17a83c: 0x0
    ctx->pc = 0x17a83cu;
    // NOP
label_17a840:
    // 0x17a840: 0x54520004
    ctx->pc = 0x17A840u;
    {
        const bool branch_taken_0x17a840 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x17a840) {
            ctx->pc = 0x17A844u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1080));
            ctx->pc = 0x17A854u;
            goto label_17a854;
        }
    }
    ctx->pc = 0x17A848u;
    // 0x17a848: 0xc05e7dc
    ctx->pc = 0x17A848u;
    SET_GPR_U32(ctx, 31, 0x17A850u);
    ctx->pc = 0x17A84Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x179F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_Destroy_0x179f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A850u; }
        else if (ctx->pc != 0x17A850u) { ctx->pc = 0x17A850u; }
    }
    if (ctx->pc != 0x17A850u) { return; }
    ctx->pc = 0x17A850u;
    // 0x17a850: 0x26100438
    ctx->pc = 0x17a850u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1080));
label_17a854:
    // 0x17a854: 0x211102a
    ctx->pc = 0x17a854u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x17a858: 0x5440fff9
    ctx->pc = 0x17A858u;
    {
        const bool branch_taken_0x17a858 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17a858) {
            ctx->pc = 0x17A85Cu;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x17A840u;
            goto label_17a840;
        }
    }
    ctx->pc = 0x17A860u;
    // 0x17a860: 0x2664a680
    ctx->pc = 0x17a860u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 4294944384));
    // 0x17a864: 0x282d
    ctx->pc = 0x17a864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a868: 0xc050cfe
    ctx->pc = 0x17A868u;
    SET_GPR_U32(ctx, 31, 0x17A870u);
    ctx->pc = 0x17A86Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8640));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A870u; }
        else if (ctx->pc != 0x17A870u) { ctx->pc = 0x17A870u; }
    }
    if (ctx->pc != 0x17A870u) { return; }
    ctx->pc = 0x17A870u;
    // 0x17a870: 0xc05e9e2
    ctx->pc = 0x17A870u;
    SET_GPR_U32(ctx, 31, 0x17A878u);
    ctx->pc = 0x17A788u;
    {
        const uint32_t __entryPc = ctx->pc;
        lsc_DeleteSvrInt_0x17a788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A878u; }
        else if (ctx->pc != 0x17A878u) { ctx->pc = 0x17A878u; }
    }
    if (ctx->pc != 0x17A878u) { return; }
    ctx->pc = 0x17A878u;
    // 0x17a878: 0x202d
    ctx->pc = 0x17a878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a87c: 0xc05e9be
    ctx->pc = 0x17A87Cu;
    SET_GPR_U32(ctx, 31, 0x17A884u);
    ctx->pc = 0x17A880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17A6F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_EntryErrFunc_0x17a6f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A884u; }
        else if (ctx->pc != 0x17A884u) { ctx->pc = 0x17A884u; }
    }
    if (ctx->pc != 0x17A884u) { return; }
    ctx->pc = 0x17A884u;
label_17a884:
    // 0x17a884: 0xc05e9bc
    ctx->pc = 0x17A884u;
    SET_GPR_U32(ctx, 31, 0x17A88Cu);
    ctx->pc = 0x17A888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17A6F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_UnlockCrs_0x17a6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A88Cu; }
        else if (ctx->pc != 0x17A88Cu) { ctx->pc = 0x17A88Cu; }
    }
    if (ctx->pc != 0x17A88Cu) { return; }
    ctx->pc = 0x17A88Cu;
    // 0x17a88c: 0xdfbf0050
    ctx->pc = 0x17a88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17a890: 0xdfb30040
    ctx->pc = 0x17a890u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17a894: 0xdfb20030
    ctx->pc = 0x17a894u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a898: 0xdfb10020
    ctx->pc = 0x17a898u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a89c: 0xdfb00010
    ctx->pc = 0x17a89cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a8a0: 0x3e00008
    ctx->pc = 0x17A8A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A8A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A840u: goto label_17a840;
            case 0x17A854u: goto label_17a854;
            case 0x17A884u: goto label_17a884;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A8A8u;
}
