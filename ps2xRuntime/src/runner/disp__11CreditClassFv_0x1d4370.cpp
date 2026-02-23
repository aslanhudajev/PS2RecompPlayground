#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: disp__11CreditClassFv
// Address: 0x1d4370 - 0x1d4430
void disp__11CreditClassFv_0x1d4370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("disp__11CreditClassFv");


    ctx->pc = 0x1d4370u;

    // 0x1d4370: 0x27bdffe0
    ctx->pc = 0x1d4370u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d4374: 0x7fbf0010
    ctx->pc = 0x1d4374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1d4378: 0x7fb00000
    ctx->pc = 0x1d4378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d437c: 0xc0858c0
    ctx->pc = 0x1D437Cu;
    SET_GPR_U32(ctx, 31, 0x1D4384u);
    ctx->pc = 0x1D4380u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x216300u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutAll__16CPutEntryControlFv_0x216300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4384u; }
        else if (ctx->pc != 0x1D4384u) { ctx->pc = 0x1D4384u; }
    }
    if (ctx->pc != 0x1D4384u) { return; }
    ctx->pc = 0x1D4384u;
    // 0x1d4384: 0xae000004
    ctx->pc = 0x1d4384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1d4388: 0xae000000
    ctx->pc = 0x1d4388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1d438c: 0x8e05009c
    ctx->pc = 0x1d438cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1d4390: 0x8f838d30
    ctx->pc = 0x1d4390u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
    // 0x1d4394: 0x8e020098
    ctx->pc = 0x1d4394u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1d4398: 0x72002628
    ctx->pc = 0x1d4398u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d439c: 0x651823
    ctx->pc = 0x1d439cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d43a0: 0x431021
    ctx->pc = 0x1d43a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d43a4: 0xae020098
    ctx->pc = 0x1d43a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x1d43a8: 0x8f828d30
    ctx->pc = 0x1d43a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
    // 0x1d43ac: 0xc075294
    ctx->pc = 0x1D43ACu;
    SET_GPR_U32(ctx, 31, 0x1D43B4u);
    ctx->pc = 0x1D43B0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    ctx->pc = 0x1D4A50u;
    {
        const uint32_t __entryPc = ctx->pc;
        dispCredInCoin__11CreditClassFv_0x1d4a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D43B4u; }
        else if (ctx->pc != 0x1D43B4u) { ctx->pc = 0x1D43B4u; }
    }
    if (ctx->pc != 0x1D43B4u) { return; }
    ctx->pc = 0x1D43B4u;
    // 0x1d43b4: 0x3c010050
    ctx->pc = 0x1d43b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1d43b8: 0x8424e504
    ctx->pc = 0x1d43b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x1d43bc: 0x3c03002c
    ctx->pc = 0x1d43bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x1d43c0: 0x2463e6b0
    ctx->pc = 0x1d43c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294960816));
    // 0x1d43c4: 0x42080
    ctx->pc = 0x1d43c4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d43c8: 0x641821
    ctx->pc = 0x1d43c8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d43cc: 0x84630000
    ctx->pc = 0x1d43ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d43d0: 0x10600013
    ctx->pc = 0x1D43D0u;
    {
        const bool branch_taken_0x1d43d0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d43d0) {
            ctx->pc = 0x1D4420u;
            goto label_1d4420;
        }
    }
    ctx->pc = 0x1D43D8u;
    // 0x1d43d8: 0x3c020051
    ctx->pc = 0x1d43d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1d43dc: 0xc086370
    ctx->pc = 0x1D43DCu;
    SET_GPR_U32(ctx, 31, 0x1D43E4u);
    ctx->pc = 0x1D43E0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x218DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        chkRemain__13EntryDatClassFv_0x218dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D43E4u; }
        else if (ctx->pc != 0x1D43E4u) { ctx->pc = 0x1D43E4u; }
    }
    if (ctx->pc != 0x1D43E4u) { return; }
    ctx->pc = 0x1D43E4u;
    // 0x1d43e4: 0x1440000e
    ctx->pc = 0x1D43E4u;
    {
        const bool branch_taken_0x1d43e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D43E8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1d43e4) {
            ctx->pc = 0x1D4420u;
            goto label_1d4420;
        }
    }
    ctx->pc = 0x1D43ECu;
    // 0x1d43ec: 0x8424e504
    ctx->pc = 0x1d43ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x1d43f0: 0x24030004
    ctx->pc = 0x1d43f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d43f4: 0x10830003
    ctx->pc = 0x1D43F4u;
    {
        const bool branch_taken_0x1d43f4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1D43F8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x1d43f4) {
            ctx->pc = 0x1D4404u;
            goto label_1d4404;
        }
    }
    ctx->pc = 0x1D43FCu;
    // 0x1d43fc: 0x14830006
    ctx->pc = 0x1D43FCu;
    {
        const bool branch_taken_0x1d43fc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1D4400u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d43fc) {
            ctx->pc = 0x1D4418u;
            goto label_1d4418;
        }
    }
    ctx->pc = 0x1D4404u;
label_1d4404:
    // 0x1d4404: 0x9603000c
    ctx->pc = 0x1d4404u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d4408: 0x28630032
    ctx->pc = 0x1d4408u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 50));
    // 0x1d440c: 0x14600004
    ctx->pc = 0x1D440Cu;
    {
        const bool branch_taken_0x1d440c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d440c) {
            ctx->pc = 0x1D4420u;
            goto label_1d4420;
        }
    }
    ctx->pc = 0x1D4414u;
    // 0x1d4414: 0x72002628
    ctx->pc = 0x1d4414u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1d4418:
    // 0x1d4418: 0xc07510c
    ctx->pc = 0x1D4418u;
    SET_GPR_U32(ctx, 31, 0x1D4420u);
    ctx->pc = 0x1D4430u;
    {
        const uint32_t __entryPc = ctx->pc;
        dispInsert_comm__11CreditClassFv_0x1d4430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4420u; }
        else if (ctx->pc != 0x1D4420u) { ctx->pc = 0x1D4420u; }
    }
    if (ctx->pc != 0x1D4420u) { return; }
    ctx->pc = 0x1D4420u;
label_1d4420:
    // 0x1d4420: 0x7bbf0010
    ctx->pc = 0x1d4420u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4424: 0x7bb00000
    ctx->pc = 0x1d4424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4428: 0x3e00008
    ctx->pc = 0x1D4428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D442Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D4404u: goto label_1d4404;
            case 0x1D4418u: goto label_1d4418;
            case 0x1D4420u: goto label_1d4420;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D4430u;
}
