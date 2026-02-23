#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: new_People__FP11ENEMY_TABLE
// Address: 0x20d890 - 0x20d980
void new_People__FP11ENEMY_TABLE_0x20d890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("new_People__FP11ENEMY_TABLE");


    ctx->pc = 0x20d890u;

    // 0x20d890: 0x27bdffc0
    ctx->pc = 0x20d890u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20d894: 0x7fbf0030
    ctx->pc = 0x20d894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x20d898: 0x7fb20020
    ctx->pc = 0x20d898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20d89c: 0x7fb10010
    ctx->pc = 0x20d89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20d8a0: 0x7fb00000
    ctx->pc = 0x20d8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20d8a4: 0x3c010050
    ctx->pc = 0x20d8a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20d8a8: 0x8423e504
    ctx->pc = 0x20d8a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x20d8ac: 0x2402000a
    ctx->pc = 0x20d8acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x20d8b0: 0x1462001c
    ctx->pc = 0x20D8B0u;
    {
        const bool branch_taken_0x20d8b0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x20D8B4u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20d8b0) {
            ctx->pc = 0x20D924u;
            goto label_20d924;
        }
    }
    ctx->pc = 0x20D8B8u;
    // 0x20d8b8: 0x8f838bcc
    ctx->pc = 0x20d8b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x20d8bc: 0x24020002
    ctx->pc = 0x20d8bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20d8c0: 0x14620018
    ctx->pc = 0x20D8C0u;
    {
        const bool branch_taken_0x20d8c0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x20d8c0) {
            ctx->pc = 0x20D924u;
            goto label_20d924;
        }
    }
    ctx->pc = 0x20D8C8u;
    // 0x20d8c8: 0x8f928ccc
    ctx->pc = 0x20d8c8u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 28), 4294937804)));
    // 0x20d8cc: 0x12400003
    ctx->pc = 0x20D8CCu;
    {
        const bool branch_taken_0x20d8cc = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x20d8cc) {
            ctx->pc = 0x20D8DCu;
            goto label_20d8dc;
        }
    }
    ctx->pc = 0x20D8D4u;
    // 0x20d8d4: 0x8e520000
    ctx->pc = 0x20d8d4u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20d8d8: 0x0
    ctx->pc = 0x20d8d8u;
    // NOP
label_20d8dc:
    // 0x20d8dc: 0xc06903c
    ctx->pc = 0x20D8DCu;
    SET_GPR_U32(ctx, 31, 0x20D8E4u);
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D8E4u; }
        else if (ctx->pc != 0x20D8E4u) { ctx->pc = 0x20D8E4u; }
    }
    if (ctx->pc != 0x20D8E4u) { return; }
    ctx->pc = 0x20D8E4u;
    // 0x20d8e4: 0xc06903c
    ctx->pc = 0x20D8E4u;
    SET_GPR_U32(ctx, 31, 0x20D8ECu);
    ctx->pc = 0x20D8E8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D8ECu; }
        else if (ctx->pc != 0x20D8ECu) { ctx->pc = 0x20D8ECu; }
    }
    if (ctx->pc != 0x20D8ECu) { return; }
    ctx->pc = 0x20D8ECu;
    // 0x20d8ec: 0x8c420010
    ctx->pc = 0x20d8ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x20d8f0: 0x8e260010
    ctx->pc = 0x20d8f0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x20d8f4: 0x72404628
    ctx->pc = 0x20d8f4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x20d8f8: 0x24041f40
    ctx->pc = 0x20d8f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8000));
    // 0x20d8fc: 0x8c470014
    ctx->pc = 0x20d8fcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x20d900: 0xc069040
    ctx->pc = 0x20D900u;
    SET_GPR_U32(ctx, 31, 0x20D908u);
    ctx->pc = 0x20D904u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D908u; }
        else if (ctx->pc != 0x20D908u) { ctx->pc = 0x20D908u; }
    }
    if (ctx->pc != 0x20D908u) { return; }
    ctx->pc = 0x20D908u;
    // 0x20d908: 0x70402628
    ctx->pc = 0x20d908u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20d90c: 0x10800016
    ctx->pc = 0x20D90Cu;
    {
        const bool branch_taken_0x20d90c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D910u;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20d90c) {
            ctx->pc = 0x20D968u;
            goto label_20d968;
        }
    }
    ctx->pc = 0x20D914u;
    // 0x20d914: 0xc0814f4
    ctx->pc = 0x20D914u;
    SET_GPR_U32(ctx, 31, 0x20D91Cu);
    ctx->pc = 0x20D918u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2053D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10PeopleTaskFP11ENEMY_TABLE_0x2053d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D91Cu; }
        else if (ctx->pc != 0x20D91Cu) { ctx->pc = 0x20D91Cu; }
    }
    if (ctx->pc != 0x20D91Cu) { return; }
    ctx->pc = 0x20D91Cu;
    // 0x20d91c: 0x10000013
    ctx->pc = 0x20D91Cu;
    {
        const bool branch_taken_0x20d91c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D920u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x20d91c) {
            ctx->pc = 0x20D96Cu;
            goto label_20d96c;
        }
    }
    ctx->pc = 0x20D924u;
label_20d924:
    // 0x20d924: 0xc06903c
    ctx->pc = 0x20D924u;
    SET_GPR_U32(ctx, 31, 0x20D92Cu);
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D92Cu; }
        else if (ctx->pc != 0x20D92Cu) { ctx->pc = 0x20D92Cu; }
    }
    if (ctx->pc != 0x20D92Cu) { return; }
    ctx->pc = 0x20D92Cu;
    // 0x20d92c: 0xc06903c
    ctx->pc = 0x20D92Cu;
    SET_GPR_U32(ctx, 31, 0x20D934u);
    ctx->pc = 0x20D930u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D934u; }
        else if (ctx->pc != 0x20D934u) { ctx->pc = 0x20D934u; }
    }
    if (ctx->pc != 0x20D934u) { return; }
    ctx->pc = 0x20D934u;
    // 0x20d934: 0xc06903c
    ctx->pc = 0x20D934u;
    SET_GPR_U32(ctx, 31, 0x20D93Cu);
    ctx->pc = 0x20D938u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D93Cu; }
        else if (ctx->pc != 0x20D93Cu) { ctx->pc = 0x20D93Cu; }
    }
    if (ctx->pc != 0x20D93Cu) { return; }
    ctx->pc = 0x20D93Cu;
    // 0x20d93c: 0x8e460010
    ctx->pc = 0x20d93cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x20d940: 0x8e270014
    ctx->pc = 0x20d940u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x20d944: 0x24041f40
    ctx->pc = 0x20d944u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8000));
    // 0x20d948: 0x70002e28
    ctx->pc = 0x20d948u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20d94c: 0xc069040
    ctx->pc = 0x20D94Cu;
    SET_GPR_U32(ctx, 31, 0x20D954u);
    ctx->pc = 0x20D950u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D954u; }
        else if (ctx->pc != 0x20D954u) { ctx->pc = 0x20D954u; }
    }
    if (ctx->pc != 0x20D954u) { return; }
    ctx->pc = 0x20D954u;
    // 0x20d954: 0x70402628
    ctx->pc = 0x20d954u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20d958: 0x10800003
    ctx->pc = 0x20D958u;
    {
        const bool branch_taken_0x20d958 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D95Cu;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20d958) {
            ctx->pc = 0x20D968u;
            goto label_20d968;
        }
    }
    ctx->pc = 0x20D960u;
    // 0x20d960: 0xc0814f4
    ctx->pc = 0x20D960u;
    SET_GPR_U32(ctx, 31, 0x20D968u);
    ctx->pc = 0x20D964u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2053D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10PeopleTaskFP11ENEMY_TABLE_0x2053d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D968u; }
        else if (ctx->pc != 0x20D968u) { ctx->pc = 0x20D968u; }
    }
    if (ctx->pc != 0x20D968u) { return; }
    ctx->pc = 0x20D968u;
label_20d968:
    // 0x20d968: 0x7bbf0030
    ctx->pc = 0x20d968u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20d96c:
    // 0x20d96c: 0x7bb20020
    ctx->pc = 0x20d96cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20d970: 0x7bb10010
    ctx->pc = 0x20d970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d974: 0x7bb00000
    ctx->pc = 0x20d974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d978: 0x3e00008
    ctx->pc = 0x20D978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D97Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20D8DCu: goto label_20d8dc;
            case 0x20D924u: goto label_20d924;
            case 0x20D968u: goto label_20d968;
            case 0x20D96Cu: goto label_20d96c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20D980u;
}
