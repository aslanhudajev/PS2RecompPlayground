#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBOX_BGLoadModelStart
// Address: 0x2c77d8 - 0x2c78f8
void MBOX_BGLoadModelStart_0x2c77d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c77d8u;

    // 0x2c77d8: 0x27bdffa0
    ctx->pc = 0x2c77d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c77dc: 0xffbf0050
    ctx->pc = 0x2c77dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c77e0: 0xffb40040
    ctx->pc = 0x2c77e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2c77e4: 0xffb30030
    ctx->pc = 0x2c77e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c77e8: 0xffb20020
    ctx->pc = 0x2c77e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c77ec: 0xffb10010
    ctx->pc = 0x2c77ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c77f0: 0xffb00000
    ctx->pc = 0x2c77f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c77f4: 0x80a02d
    ctx->pc = 0x2c77f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c77f8: 0xa0982d
    ctx->pc = 0x2c77f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c77fc: 0x3c020036
    ctx->pc = 0x2c77fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c7800: 0x8c50dee0
    ctx->pc = 0x2c7800u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2c7804: 0x3c021000
    ctx->pc = 0x2c7804u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2c7808: 0xac400000
    ctx->pc = 0x2c7808u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x2c780c: 0x3c020038
    ctx->pc = 0x2c780cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c7810: 0x8c42c968
    ctx->pc = 0x2c7810u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294953320)));
    // 0x2c7814: 0x4400004
    ctx->pc = 0x2C7814u;
    {
        const bool branch_taken_0x2c7814 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C7818u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2c7814) {
            ctx->pc = 0x2C7828u;
            goto label_2c7828;
        }
    }
    ctx->pc = 0x2C781Cu;
    // 0x2c781c: 0x248471a8
    ctx->pc = 0x2c781cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29096));
    // 0x2c7820: 0xc0b49a6
    ctx->pc = 0x2C7820u;
    SET_GPR_U32(ctx, 31, 0x2C7828u);
    ctx->pc = 0x2C7824u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7828u; }
    }
    if (ctx->pc != 0x2C7828u) { return; }
    ctx->pc = 0x2C7828u;
label_2c7828:
    // 0x2c7828: 0x6610005
    ctx->pc = 0x2C7828u;
    {
        const bool branch_taken_0x2c7828 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x2C782Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 4));
        if (branch_taken_0x2c7828) {
            ctx->pc = 0x2C7840u;
            goto label_2c7840;
        }
    }
    ctx->pc = 0x2C7830u;
    // 0x2c7830: 0xc0b1ca6
    ctx->pc = 0x2C7830u;
    SET_GPR_U32(ctx, 31, 0x2C7838u);
    ctx->pc = 0x2C7834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C7298u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_AllocModel_0x2c7298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7838u; }
    }
    if (ctx->pc != 0x2C7838u) { return; }
    ctx->pc = 0x2C7838u;
    // 0x2c7838: 0x40982d
    ctx->pc = 0x2c7838u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c783c: 0x131900
    ctx->pc = 0x2c783cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 4));
label_2c7840:
    // 0x2c7840: 0x24630004
    ctx->pc = 0x2c7840u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x2c7844: 0x8e020038
    ctx->pc = 0x2c7844u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2c7848: 0x621821
    ctx->pc = 0x2c7848u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c784c: 0x24020006
    ctx->pc = 0x2c784cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c7850: 0xac62000c
    ctx->pc = 0x2c7850u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x2c7854: 0x3c04003b
    ctx->pc = 0x2c7854u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2c7858: 0x248471d0
    ctx->pc = 0x2c7858u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29136));
    // 0x2c785c: 0x260282d
    ctx->pc = 0x2c785cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7860: 0x280302d
    ctx->pc = 0x2c7860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7864: 0xc0b4a34
    ctx->pc = 0x2C7864u;
    SET_GPR_U32(ctx, 31, 0x2C786Cu);
    ctx->pc = 0x2C7868u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C786Cu; }
    }
    if (ctx->pc != 0x2C786Cu) { return; }
    ctx->pc = 0x2C786Cu;
    // 0x2c786c: 0x3c120038
    ctx->pc = 0x2c786cu;
    SET_GPR_U32(ctx, 18, ((uint32_t)56 << 16));
    // 0x2c7870: 0xae53c968
    ctx->pc = 0x2c7870u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294953320), GPR_U32(ctx, 19));
    // 0x2c7874: 0x3c110038
    ctx->pc = 0x2c7874u;
    SET_GPR_U32(ctx, 17, ((uint32_t)56 << 16));
    // 0x2c7878: 0x2631c508
    ctx->pc = 0x2c7878u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294952200));
    // 0x2c787c: 0x24100018
    ctx->pc = 0x2c787cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2c7880: 0x2708018
    ctx->pc = 0x2c7880u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2c7884: 0x2111021
    ctx->pc = 0x2c7884u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2c7888: 0xac400000
    ctx->pc = 0x2c7888u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2c788c: 0x2301021
    ctx->pc = 0x2c788cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2c7890: 0xac400004
    ctx->pc = 0x2c7890u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2c7894: 0xac400008
    ctx->pc = 0x2c7894u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2c7898: 0xac40000c
    ctx->pc = 0x2c7898u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2c789c: 0xc0abbf8
    ctx->pc = 0x2C789Cu;
    SET_GPR_U32(ctx, 31, 0x2C78A4u);
    ctx->pc = 0x2C78A0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    ctx->pc = 0x2AEFE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetTime_0x2aefe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C78A4u; }
    }
    if (ctx->pc != 0x2C78A4u) { return; }
    ctx->pc = 0x2C78A4u;
    // 0x2c78a4: 0x2308821
    ctx->pc = 0x2c78a4u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2c78a8: 0xae220014
    ctx->pc = 0x2c78a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x2c78ac: 0x138940
    ctx->pc = 0x2c78acu;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 19), 5));
    // 0x2c78b0: 0x3c100038
    ctx->pc = 0x2c78b0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)56 << 16));
    // 0x2c78b4: 0x2610c6e8
    ctx->pc = 0x2c78b4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294952680));
    // 0x2c78b8: 0x2302021
    ctx->pc = 0x2c78b8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2c78bc: 0x280282d
    ctx->pc = 0x2c78bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c78c0: 0xc0bf42e
    ctx->pc = 0x2C78C0u;
    SET_GPR_U32(ctx, 31, 0x2C78C8u);
    ctx->pc = 0x2C78C4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x2FD0B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x2fd0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C78C8u; }
    }
    if (ctx->pc != 0x2C78C8u) { return; }
    ctx->pc = 0x2C78C8u;
    // 0x2c78c8: 0x2118021
    ctx->pc = 0x2c78c8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2c78cc: 0xa200001f
    ctx->pc = 0x2c78ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c78d0: 0xae53c968
    ctx->pc = 0x2c78d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294953320), GPR_U32(ctx, 19));
    // 0x2c78d4: 0x260102d
    ctx->pc = 0x2c78d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c78d8: 0xdfbf0050
    ctx->pc = 0x2c78d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c78dc: 0xdfb40040
    ctx->pc = 0x2c78dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c78e0: 0xdfb30030
    ctx->pc = 0x2c78e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c78e4: 0xdfb20020
    ctx->pc = 0x2c78e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c78e8: 0xdfb10010
    ctx->pc = 0x2c78e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c78ec: 0xdfb00000
    ctx->pc = 0x2c78ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c78f0: 0x3e00008
    ctx->pc = 0x2C78F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C78F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C7828u: goto label_2c7828;
            case 0x2C7840u: goto label_2c7840;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C78F8u;
}
