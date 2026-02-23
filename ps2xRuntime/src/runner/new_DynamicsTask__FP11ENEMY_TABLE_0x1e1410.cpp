#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: new_DynamicsTask__FP11ENEMY_TABLE
// Address: 0x1e1410 - 0x1e1500
void new_DynamicsTask__FP11ENEMY_TABLE_0x1e1410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("new_DynamicsTask__FP11ENEMY_TABLE");


    ctx->pc = 0x1e1410u;

    // 0x1e1410: 0x27bdffc0
    ctx->pc = 0x1e1410u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e1414: 0x7fbf0030
    ctx->pc = 0x1e1414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1e1418: 0x7fb20020
    ctx->pc = 0x1e1418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e141c: 0x7fb10010
    ctx->pc = 0x1e141cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e1420: 0x7fb00000
    ctx->pc = 0x1e1420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e1424: 0x3c010050
    ctx->pc = 0x1e1424u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e1428: 0x8423e504
    ctx->pc = 0x1e1428u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x1e142c: 0x2402000a
    ctx->pc = 0x1e142cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e1430: 0x1462001c
    ctx->pc = 0x1E1430u;
    {
        const bool branch_taken_0x1e1430 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1E1434u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e1430) {
            ctx->pc = 0x1E14A4u;
            goto label_1e14a4;
        }
    }
    ctx->pc = 0x1E1438u;
    // 0x1e1438: 0x8f838bcc
    ctx->pc = 0x1e1438u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x1e143c: 0x24020002
    ctx->pc = 0x1e143cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e1440: 0x14620018
    ctx->pc = 0x1E1440u;
    {
        const bool branch_taken_0x1e1440 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1e1440) {
            ctx->pc = 0x1E14A4u;
            goto label_1e14a4;
        }
    }
    ctx->pc = 0x1E1448u;
    // 0x1e1448: 0x8f928ccc
    ctx->pc = 0x1e1448u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 28), 4294937804)));
    // 0x1e144c: 0x12400003
    ctx->pc = 0x1E144Cu;
    {
        const bool branch_taken_0x1e144c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e144c) {
            ctx->pc = 0x1E145Cu;
            goto label_1e145c;
        }
    }
    ctx->pc = 0x1E1454u;
    // 0x1e1454: 0x8e520000
    ctx->pc = 0x1e1454u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e1458: 0x0
    ctx->pc = 0x1e1458u;
    // NOP
label_1e145c:
    // 0x1e145c: 0xc06903c
    ctx->pc = 0x1E145Cu;
    SET_GPR_U32(ctx, 31, 0x1E1464u);
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1464u; }
        else if (ctx->pc != 0x1E1464u) { ctx->pc = 0x1E1464u; }
    }
    if (ctx->pc != 0x1E1464u) { return; }
    ctx->pc = 0x1E1464u;
    // 0x1e1464: 0xc06903c
    ctx->pc = 0x1E1464u;
    SET_GPR_U32(ctx, 31, 0x1E146Cu);
    ctx->pc = 0x1E1468u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E146Cu; }
        else if (ctx->pc != 0x1E146Cu) { ctx->pc = 0x1E146Cu; }
    }
    if (ctx->pc != 0x1E146Cu) { return; }
    ctx->pc = 0x1E146Cu;
    // 0x1e146c: 0x8c420010
    ctx->pc = 0x1e146cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1e1470: 0x8e260010
    ctx->pc = 0x1e1470u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e1474: 0x72404628
    ctx->pc = 0x1e1474u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e1478: 0x240400c4
    ctx->pc = 0x1e1478u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 196));
    // 0x1e147c: 0x8c470014
    ctx->pc = 0x1e147cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1e1480: 0xc069040
    ctx->pc = 0x1E1480u;
    SET_GPR_U32(ctx, 31, 0x1E1488u);
    ctx->pc = 0x1E1484u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1488u; }
        else if (ctx->pc != 0x1E1488u) { ctx->pc = 0x1E1488u; }
    }
    if (ctx->pc != 0x1E1488u) { return; }
    ctx->pc = 0x1E1488u;
    // 0x1e1488: 0x70402628
    ctx->pc = 0x1e1488u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e148c: 0x10800016
    ctx->pc = 0x1E148Cu;
    {
        const bool branch_taken_0x1e148c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E1490u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e148c) {
            ctx->pc = 0x1E14E8u;
            goto label_1e14e8;
        }
    }
    ctx->pc = 0x1E1494u;
    // 0x1e1494: 0xc0756c8
    ctx->pc = 0x1E1494u;
    SET_GPR_U32(ctx, 31, 0x1E149Cu);
    ctx->pc = 0x1D5B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12DynamicsTaskFP11ENEMY_TABLE_0x1d5b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E149Cu; }
        else if (ctx->pc != 0x1E149Cu) { ctx->pc = 0x1E149Cu; }
    }
    if (ctx->pc != 0x1E149Cu) { return; }
    ctx->pc = 0x1E149Cu;
    // 0x1e149c: 0x10000013
    ctx->pc = 0x1E149Cu;
    {
        const bool branch_taken_0x1e149c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E14A0u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x1e149c) {
            ctx->pc = 0x1E14ECu;
            goto label_1e14ec;
        }
    }
    ctx->pc = 0x1E14A4u;
label_1e14a4:
    // 0x1e14a4: 0xc06903c
    ctx->pc = 0x1E14A4u;
    SET_GPR_U32(ctx, 31, 0x1E14ACu);
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E14ACu; }
        else if (ctx->pc != 0x1E14ACu) { ctx->pc = 0x1E14ACu; }
    }
    if (ctx->pc != 0x1E14ACu) { return; }
    ctx->pc = 0x1E14ACu;
    // 0x1e14ac: 0xc06903c
    ctx->pc = 0x1E14ACu;
    SET_GPR_U32(ctx, 31, 0x1E14B4u);
    ctx->pc = 0x1E14B0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E14B4u; }
        else if (ctx->pc != 0x1E14B4u) { ctx->pc = 0x1E14B4u; }
    }
    if (ctx->pc != 0x1E14B4u) { return; }
    ctx->pc = 0x1E14B4u;
    // 0x1e14b4: 0xc06903c
    ctx->pc = 0x1E14B4u;
    SET_GPR_U32(ctx, 31, 0x1E14BCu);
    ctx->pc = 0x1E14B8u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E14BCu; }
        else if (ctx->pc != 0x1E14BCu) { ctx->pc = 0x1E14BCu; }
    }
    if (ctx->pc != 0x1E14BCu) { return; }
    ctx->pc = 0x1E14BCu;
    // 0x1e14bc: 0x8e460010
    ctx->pc = 0x1e14bcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1e14c0: 0x8e270014
    ctx->pc = 0x1e14c0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e14c4: 0x240400c4
    ctx->pc = 0x1e14c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 196));
    // 0x1e14c8: 0x70002e28
    ctx->pc = 0x1e14c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e14cc: 0xc069040
    ctx->pc = 0x1E14CCu;
    SET_GPR_U32(ctx, 31, 0x1E14D4u);
    ctx->pc = 0x1E14D0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E14D4u; }
        else if (ctx->pc != 0x1E14D4u) { ctx->pc = 0x1E14D4u; }
    }
    if (ctx->pc != 0x1E14D4u) { return; }
    ctx->pc = 0x1E14D4u;
    // 0x1e14d4: 0x70402628
    ctx->pc = 0x1e14d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e14d8: 0x10800003
    ctx->pc = 0x1E14D8u;
    {
        const bool branch_taken_0x1e14d8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E14DCu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e14d8) {
            ctx->pc = 0x1E14E8u;
            goto label_1e14e8;
        }
    }
    ctx->pc = 0x1E14E0u;
    // 0x1e14e0: 0xc0756c8
    ctx->pc = 0x1E14E0u;
    SET_GPR_U32(ctx, 31, 0x1E14E8u);
    ctx->pc = 0x1D5B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12DynamicsTaskFP11ENEMY_TABLE_0x1d5b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E14E8u; }
        else if (ctx->pc != 0x1E14E8u) { ctx->pc = 0x1E14E8u; }
    }
    if (ctx->pc != 0x1E14E8u) { return; }
    ctx->pc = 0x1E14E8u;
label_1e14e8:
    // 0x1e14e8: 0x7bbf0030
    ctx->pc = 0x1e14e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e14ec:
    // 0x1e14ec: 0x7bb20020
    ctx->pc = 0x1e14ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e14f0: 0x7bb10010
    ctx->pc = 0x1e14f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e14f4: 0x7bb00000
    ctx->pc = 0x1e14f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e14f8: 0x3e00008
    ctx->pc = 0x1E14F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E14FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E145Cu: goto label_1e145c;
            case 0x1E14A4u: goto label_1e14a4;
            case 0x1E14E8u: goto label_1e14e8;
            case 0x1E14ECu: goto label_1e14ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E1500u;
}
