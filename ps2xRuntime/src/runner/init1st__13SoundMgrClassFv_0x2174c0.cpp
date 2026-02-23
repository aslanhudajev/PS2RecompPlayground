#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init1st__13SoundMgrClassFv
// Address: 0x2174c0 - 0x2175e4
void init1st__13SoundMgrClassFv_0x2174c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init1st__13SoundMgrClassFv");


    ctx->pc = 0x2174c0u;

    // 0x2174c0: 0x27bdffe0
    ctx->pc = 0x2174c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2174c4: 0x7fbf0010
    ctx->pc = 0x2174c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2174c8: 0xc0861f4
    ctx->pc = 0x2174C8u;
    SET_GPR_U32(ctx, 31, 0x2174D0u);
    ctx->pc = 0x2174CCu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x2187D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SndSetInfoTbl__Fv_0x2187d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2174D0u; }
        else if (ctx->pc != 0x2174D0u) { ctx->pc = 0x2174D0u; }
    }
    if (ctx->pc != 0x2174D0u) { return; }
    ctx->pc = 0x2174D0u;
    // 0x2174d0: 0xc056dba
    ctx->pc = 0x2174D0u;
    SET_GPR_U32(ctx, 31, 0x2174D8u);
    ctx->pc = 0x2174D4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294938204)));
    ctx->pc = 0x15B6E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifAllocIopHeap_0x15b6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2174D8u; }
        else if (ctx->pc != 0x2174D8u) { ctx->pc = 0x2174D8u; }
    }
    if (ctx->pc != 0x2174D8u) { return; }
    ctx->pc = 0x2174D8u;
    // 0x2174d8: 0xaf828e68
    ctx->pc = 0x2174d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938216), GPR_U32(ctx, 2));
    // 0x2174dc: 0x8f888e68
    ctx->pc = 0x2174dcu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 28), 4294938216)));
    // 0x2174e0: 0x3c030091
    ctx->pc = 0x2174e0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)145 << 16));
    // 0x2174e4: 0x246619b0
    ctx->pc = 0x2174e4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 6576));
    // 0x2174e8: 0x3c030091
    ctx->pc = 0x2174e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)145 << 16));
    // 0x2174ec: 0x70002e28
    ctx->pc = 0x2174ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2174f0: 0x24672760
    ctx->pc = 0x2174f0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 10080));
label_2174f4:
    // 0x2174f4: 0x8cc40000
    ctx->pc = 0x2174f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2174f8: 0x24a50008
    ctx->pc = 0x2174f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
    // 0x2174fc: 0x28a30020
    ctx->pc = 0x2174fcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 32));
    // 0x217500: 0x1042021
    ctx->pc = 0x217500u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x217504: 0xace40000
    ctx->pc = 0x217504u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x217508: 0x8cc40004
    ctx->pc = 0x217508u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x21750c: 0x1042021
    ctx->pc = 0x21750cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x217510: 0xace40004
    ctx->pc = 0x217510u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x217514: 0x8cc40008
    ctx->pc = 0x217514u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x217518: 0x1042021
    ctx->pc = 0x217518u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x21751c: 0xace40008
    ctx->pc = 0x21751cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x217520: 0x8cc4000c
    ctx->pc = 0x217520u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x217524: 0x1042021
    ctx->pc = 0x217524u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x217528: 0xace4000c
    ctx->pc = 0x217528u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 4));
    // 0x21752c: 0x8cc40010
    ctx->pc = 0x21752cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x217530: 0x1042021
    ctx->pc = 0x217530u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x217534: 0xace40010
    ctx->pc = 0x217534u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 4));
    // 0x217538: 0x8cc40014
    ctx->pc = 0x217538u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x21753c: 0x1042021
    ctx->pc = 0x21753cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x217540: 0xace40014
    ctx->pc = 0x217540u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
    // 0x217544: 0x8cc40018
    ctx->pc = 0x217544u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x217548: 0x1042021
    ctx->pc = 0x217548u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x21754c: 0xace40018
    ctx->pc = 0x21754cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 4));
    // 0x217550: 0x8cc4001c
    ctx->pc = 0x217550u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x217554: 0x1042021
    ctx->pc = 0x217554u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x217558: 0xace4001c
    ctx->pc = 0x217558u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 4));
    // 0x21755c: 0x24c60020
    ctx->pc = 0x21755cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 32));
    // 0x217560: 0x1460ffe4
    ctx->pc = 0x217560u;
    {
        const bool branch_taken_0x217560 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x217564u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 32));
        if (branch_taken_0x217560) {
            ctx->pc = 0x2174F4u;
            goto label_2174f4;
        }
    }
    ctx->pc = 0x217568u;
    // 0x217568: 0x3c030091
    ctx->pc = 0x217568u;
    SET_GPR_U32(ctx, 3, ((uint32_t)145 << 16));
    // 0x21756c: 0x52080
    ctx->pc = 0x21756cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 2));
    // 0x217570: 0x246319b0
    ctx->pc = 0x217570u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 6576));
    // 0x217574: 0x641821
    ctx->pc = 0x217574u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x217578: 0x8c640000
    ctx->pc = 0x217578u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21757c: 0x8f858e68
    ctx->pc = 0x21757cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294938216)));
    // 0x217580: 0x3c010091
    ctx->pc = 0x217580u;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x217584: 0x3c030029
    ctx->pc = 0x217584u;
    SET_GPR_U32(ctx, 3, ((uint32_t)41 << 16));
    // 0x217588: 0x2470bd60
    ctx->pc = 0x217588u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4294950240));
    // 0x21758c: 0xa41821
    ctx->pc = 0x21758cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x217590: 0x1000000d
    ctx->pc = 0x217590u;
    {
        const bool branch_taken_0x217590 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x217594u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 10208), GPR_U32(ctx, 3));
        if (branch_taken_0x217590) {
            ctx->pc = 0x2175C8u;
            goto label_2175c8;
        }
    }
    ctx->pc = 0x217598u;
label_217598:
    // 0x217598: 0xc0570d8
    ctx->pc = 0x217598u;
    SET_GPR_U32(ctx, 31, 0x2175A0u);
    ctx->pc = 0x21759Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x15C360u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifLoadModule_0x15c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2175A0u; }
        else if (ctx->pc != 0x2175A0u) { ctx->pc = 0x2175A0u; }
    }
    if (ctx->pc != 0x2175A0u) { return; }
    ctx->pc = 0x2175A0u;
    // 0x2175a0: 0x4430008
    ctx->pc = 0x2175A0u;
    {
        const bool branch_taken_0x2175a0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2175a0) {
            ctx->pc = 0x2175A4u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
            ctx->pc = 0x2175C4u;
            goto label_2175c4;
        }
    }
    ctx->pc = 0x2175A8u;
    // 0x2175a8: 0x8e050000
    ctx->pc = 0x2175a8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2175ac: 0x3c020029
    ctx->pc = 0x2175acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x2175b0: 0xc05114a
    ctx->pc = 0x2175B0u;
    SET_GPR_U32(ctx, 31, 0x2175B8u);
    ctx->pc = 0x2175B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294950272));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2175B8u; }
        else if (ctx->pc != 0x2175B8u) { ctx->pc = 0x2175B8u; }
    }
    if (ctx->pc != 0x2175B8u) { return; }
    ctx->pc = 0x2175B8u;
label_2175b8:
    // 0x2175b8: 0x1000ffff
    ctx->pc = 0x2175B8u;
    {
        const bool branch_taken_0x2175b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2175b8) {
            ctx->pc = 0x2175B8u;
            goto label_2175b8;
        }
    }
    ctx->pc = 0x2175C0u;
    // 0x2175c0: 0x26100004
    ctx->pc = 0x2175c0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
label_2175c4:
    // 0x2175c4: 0x0
    ctx->pc = 0x2175c4u;
    // NOP
label_2175c8:
    // 0x2175c8: 0x8e040000
    ctx->pc = 0x2175c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2175cc: 0x1480fff2
    ctx->pc = 0x2175CCu;
    {
        const bool branch_taken_0x2175cc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2175D0u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2175cc) {
            ctx->pc = 0x217598u;
            goto label_217598;
        }
    }
    ctx->pc = 0x2175D4u;
    // 0x2175d4: 0x7bbf0010
    ctx->pc = 0x2175d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2175d8: 0x7bb00000
    ctx->pc = 0x2175d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2175dc: 0x3e00008
    ctx->pc = 0x2175DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2175E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2174F4u: goto label_2174f4;
            case 0x217598u: goto label_217598;
            case 0x2175B8u: goto label_2175b8;
            case 0x2175C4u: goto label_2175c4;
            case 0x2175C8u: goto label_2175c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2175E4u;
}
