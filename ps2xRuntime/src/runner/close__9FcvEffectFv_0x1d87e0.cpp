#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: close__9FcvEffectFv
// Address: 0x1d87e0 - 0x1d8984
void close__9FcvEffectFv_0x1d87e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("close__9FcvEffectFv");


    ctx->pc = 0x1d87e0u;

    // 0x1d87e0: 0x27bdfef0
    ctx->pc = 0x1d87e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1d87e4: 0x7fbf0020
    ctx->pc = 0x1d87e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1d87e8: 0x7fbe0010
    ctx->pc = 0x1d87e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x1d87ec: 0x7fb00000
    ctx->pc = 0x1d87ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d87f0: 0x8c830054
    ctx->pc = 0x1d87f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1d87f4: 0x3a0f021
    ctx->pc = 0x1d87f4u;
    SET_GPR_U32(ctx, 30, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
    // 0x1d87f8: 0x1060000c
    ctx->pc = 0x1D87F8u;
    {
        const bool branch_taken_0x1d87f8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D87FCu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d87f8) {
            ctx->pc = 0x1D882Cu;
            goto label_1d882c;
        }
    }
    ctx->pc = 0x1D8800u;
    // 0x1d8800: 0x10600009
    ctx->pc = 0x1D8800u;
    {
        const bool branch_taken_0x1d8800 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D8804u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967280));
        if (branch_taken_0x1d8800) {
            ctx->pc = 0x1D8828u;
            goto label_1d8828;
        }
    }
    ctx->pc = 0x1D8808u;
    // 0x1d8808: 0xc0687c0
    ctx->pc = 0x1D8808u;
    SET_GPR_U32(ctx, 31, 0x1D8810u);
    ctx->pc = 0x1A1F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        Free_0x1a1f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8810u; }
        else if (ctx->pc != 0x1D8810u) { ctx->pc = 0x1D8810u; }
    }
    if (ctx->pc != 0x1D8810u) { return; }
    ctx->pc = 0x1D8810u;
    // 0x1d8810: 0x10000006
    ctx->pc = 0x1D8810u;
    {
        const bool branch_taken_0x1d8810 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D8814u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
        if (branch_taken_0x1d8810) {
            ctx->pc = 0x1D882Cu;
            goto label_1d882c;
        }
    }
    ctx->pc = 0x1D8818u;
    // 0x1d8818: 0xc071ca4
    ctx->pc = 0x1D8818u;
    SET_GPR_U32(ctx, 31, 0x1D8820u);
    ctx->pc = 0x1D881Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 30), 48));
    ctx->pc = 0x1C7290u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unexpected_0x1c7290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8820u; }
        else if (ctx->pc != 0x1D8820u) { ctx->pc = 0x1D8820u; }
    }
    if (ctx->pc != 0x1D8820u) { return; }
    ctx->pc = 0x1D8820u;
label_1d8820:
    // 0x1d8820: 0x1000ffff
    ctx->pc = 0x1D8820u;
    {
        const bool branch_taken_0x1d8820 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8820) {
            ctx->pc = 0x1D8820u;
            goto label_1d8820;
        }
    }
    ctx->pc = 0x1D8828u;
label_1d8828:
    // 0x1d8828: 0xae000054
    ctx->pc = 0x1d8828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_1d882c:
    // 0x1d882c: 0x8e030058
    ctx->pc = 0x1d882cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1d8830: 0x1060000c
    ctx->pc = 0x1D8830u;
    {
        const bool branch_taken_0x1d8830 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8830) {
            ctx->pc = 0x1D8864u;
            goto label_1d8864;
        }
    }
    ctx->pc = 0x1D8838u;
    // 0x1d8838: 0x10600009
    ctx->pc = 0x1D8838u;
    {
        const bool branch_taken_0x1d8838 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D883Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967280));
        if (branch_taken_0x1d8838) {
            ctx->pc = 0x1D8860u;
            goto label_1d8860;
        }
    }
    ctx->pc = 0x1D8840u;
    // 0x1d8840: 0xc0687c0
    ctx->pc = 0x1D8840u;
    SET_GPR_U32(ctx, 31, 0x1D8848u);
    ctx->pc = 0x1A1F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        Free_0x1a1f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8848u; }
        else if (ctx->pc != 0x1D8848u) { ctx->pc = 0x1D8848u; }
    }
    if (ctx->pc != 0x1D8848u) { return; }
    ctx->pc = 0x1D8848u;
    // 0x1d8848: 0x10000006
    ctx->pc = 0x1D8848u;
    {
        const bool branch_taken_0x1d8848 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D884Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
        if (branch_taken_0x1d8848) {
            ctx->pc = 0x1D8864u;
            goto label_1d8864;
        }
    }
    ctx->pc = 0x1D8850u;
    // 0x1d8850: 0xc071ca4
    ctx->pc = 0x1D8850u;
    SET_GPR_U32(ctx, 31, 0x1D8858u);
    ctx->pc = 0x1D8854u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 30), 80));
    ctx->pc = 0x1C7290u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unexpected_0x1c7290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8858u; }
        else if (ctx->pc != 0x1D8858u) { ctx->pc = 0x1D8858u; }
    }
    if (ctx->pc != 0x1D8858u) { return; }
    ctx->pc = 0x1D8858u;
label_1d8858:
    // 0x1d8858: 0x1000ffff
    ctx->pc = 0x1D8858u;
    {
        const bool branch_taken_0x1d8858 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8858) {
            ctx->pc = 0x1D8858u;
            goto label_1d8858;
        }
    }
    ctx->pc = 0x1D8860u;
label_1d8860:
    // 0x1d8860: 0xae000058
    ctx->pc = 0x1d8860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_1d8864:
    // 0x1d8864: 0x8e03005c
    ctx->pc = 0x1d8864u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1d8868: 0x1060000c
    ctx->pc = 0x1D8868u;
    {
        const bool branch_taken_0x1d8868 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8868) {
            ctx->pc = 0x1D889Cu;
            goto label_1d889c;
        }
    }
    ctx->pc = 0x1D8870u;
    // 0x1d8870: 0x10600009
    ctx->pc = 0x1D8870u;
    {
        const bool branch_taken_0x1d8870 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D8874u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967280));
        if (branch_taken_0x1d8870) {
            ctx->pc = 0x1D8898u;
            goto label_1d8898;
        }
    }
    ctx->pc = 0x1D8878u;
    // 0x1d8878: 0xc0687c0
    ctx->pc = 0x1D8878u;
    SET_GPR_U32(ctx, 31, 0x1D8880u);
    ctx->pc = 0x1A1F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        Free_0x1a1f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8880u; }
        else if (ctx->pc != 0x1D8880u) { ctx->pc = 0x1D8880u; }
    }
    if (ctx->pc != 0x1D8880u) { return; }
    ctx->pc = 0x1D8880u;
    // 0x1d8880: 0x10000006
    ctx->pc = 0x1D8880u;
    {
        const bool branch_taken_0x1d8880 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D8884u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
        if (branch_taken_0x1d8880) {
            ctx->pc = 0x1D889Cu;
            goto label_1d889c;
        }
    }
    ctx->pc = 0x1D8888u;
    // 0x1d8888: 0xc071ca4
    ctx->pc = 0x1D8888u;
    SET_GPR_U32(ctx, 31, 0x1D8890u);
    ctx->pc = 0x1D888Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 30), 112));
    ctx->pc = 0x1C7290u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unexpected_0x1c7290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8890u; }
        else if (ctx->pc != 0x1D8890u) { ctx->pc = 0x1D8890u; }
    }
    if (ctx->pc != 0x1D8890u) { return; }
    ctx->pc = 0x1D8890u;
label_1d8890:
    // 0x1d8890: 0x1000ffff
    ctx->pc = 0x1D8890u;
    {
        const bool branch_taken_0x1d8890 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8890) {
            ctx->pc = 0x1D8890u;
            goto label_1d8890;
        }
    }
    ctx->pc = 0x1D8898u;
label_1d8898:
    // 0x1d8898: 0xae00005c
    ctx->pc = 0x1d8898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_1d889c:
    // 0x1d889c: 0x8e030060
    ctx->pc = 0x1d889cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1d88a0: 0x1060000c
    ctx->pc = 0x1D88A0u;
    {
        const bool branch_taken_0x1d88a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d88a0) {
            ctx->pc = 0x1D88D4u;
            goto label_1d88d4;
        }
    }
    ctx->pc = 0x1D88A8u;
    // 0x1d88a8: 0x10600009
    ctx->pc = 0x1D88A8u;
    {
        const bool branch_taken_0x1d88a8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D88ACu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967280));
        if (branch_taken_0x1d88a8) {
            ctx->pc = 0x1D88D0u;
            goto label_1d88d0;
        }
    }
    ctx->pc = 0x1D88B0u;
    // 0x1d88b0: 0xc0687c0
    ctx->pc = 0x1D88B0u;
    SET_GPR_U32(ctx, 31, 0x1D88B8u);
    ctx->pc = 0x1A1F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        Free_0x1a1f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D88B8u; }
        else if (ctx->pc != 0x1D88B8u) { ctx->pc = 0x1D88B8u; }
    }
    if (ctx->pc != 0x1D88B8u) { return; }
    ctx->pc = 0x1D88B8u;
    // 0x1d88b8: 0x10000006
    ctx->pc = 0x1D88B8u;
    {
        const bool branch_taken_0x1d88b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D88BCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
        if (branch_taken_0x1d88b8) {
            ctx->pc = 0x1D88D4u;
            goto label_1d88d4;
        }
    }
    ctx->pc = 0x1D88C0u;
    // 0x1d88c0: 0xc071ca4
    ctx->pc = 0x1D88C0u;
    SET_GPR_U32(ctx, 31, 0x1D88C8u);
    ctx->pc = 0x1D88C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 30), 144));
    ctx->pc = 0x1C7290u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unexpected_0x1c7290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D88C8u; }
        else if (ctx->pc != 0x1D88C8u) { ctx->pc = 0x1D88C8u; }
    }
    if (ctx->pc != 0x1D88C8u) { return; }
    ctx->pc = 0x1D88C8u;
label_1d88c8:
    // 0x1d88c8: 0x1000ffff
    ctx->pc = 0x1D88C8u;
    {
        const bool branch_taken_0x1d88c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d88c8) {
            ctx->pc = 0x1D88C8u;
            goto label_1d88c8;
        }
    }
    ctx->pc = 0x1D88D0u;
label_1d88d0:
    // 0x1d88d0: 0xae000060
    ctx->pc = 0x1d88d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_1d88d4:
    // 0x1d88d4: 0x8e030064
    ctx->pc = 0x1d88d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1d88d8: 0x1060000c
    ctx->pc = 0x1D88D8u;
    {
        const bool branch_taken_0x1d88d8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d88d8) {
            ctx->pc = 0x1D890Cu;
            goto label_1d890c;
        }
    }
    ctx->pc = 0x1D88E0u;
    // 0x1d88e0: 0x10600009
    ctx->pc = 0x1D88E0u;
    {
        const bool branch_taken_0x1d88e0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D88E4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967280));
        if (branch_taken_0x1d88e0) {
            ctx->pc = 0x1D8908u;
            goto label_1d8908;
        }
    }
    ctx->pc = 0x1D88E8u;
    // 0x1d88e8: 0xc0687c0
    ctx->pc = 0x1D88E8u;
    SET_GPR_U32(ctx, 31, 0x1D88F0u);
    ctx->pc = 0x1A1F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        Free_0x1a1f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D88F0u; }
        else if (ctx->pc != 0x1D88F0u) { ctx->pc = 0x1D88F0u; }
    }
    if (ctx->pc != 0x1D88F0u) { return; }
    ctx->pc = 0x1D88F0u;
    // 0x1d88f0: 0x10000006
    ctx->pc = 0x1D88F0u;
    {
        const bool branch_taken_0x1d88f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D88F4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
        if (branch_taken_0x1d88f0) {
            ctx->pc = 0x1D890Cu;
            goto label_1d890c;
        }
    }
    ctx->pc = 0x1D88F8u;
    // 0x1d88f8: 0xc071ca4
    ctx->pc = 0x1D88F8u;
    SET_GPR_U32(ctx, 31, 0x1D8900u);
    ctx->pc = 0x1D88FCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 30), 176));
    ctx->pc = 0x1C7290u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unexpected_0x1c7290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8900u; }
        else if (ctx->pc != 0x1D8900u) { ctx->pc = 0x1D8900u; }
    }
    if (ctx->pc != 0x1D8900u) { return; }
    ctx->pc = 0x1D8900u;
label_1d8900:
    // 0x1d8900: 0x1000ffff
    ctx->pc = 0x1D8900u;
    {
        const bool branch_taken_0x1d8900 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8900) {
            ctx->pc = 0x1D8900u;
            goto label_1d8900;
        }
    }
    ctx->pc = 0x1D8908u;
label_1d8908:
    // 0x1d8908: 0xae000064
    ctx->pc = 0x1d8908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_1d890c:
    // 0x1d890c: 0x8e040030
    ctx->pc = 0x1d890cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1d8910: 0x1080000a
    ctx->pc = 0x1D8910u;
    {
        const bool branch_taken_0x1d8910 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8910) {
            ctx->pc = 0x1D893Cu;
            goto label_1d893c;
        }
    }
    ctx->pc = 0x1D8918u;
    // 0x1d8918: 0xc0687c0
    ctx->pc = 0x1D8918u;
    SET_GPR_U32(ctx, 31, 0x1D8920u);
    ctx->pc = 0x1A1F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        Free_0x1a1f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8920u; }
        else if (ctx->pc != 0x1D8920u) { ctx->pc = 0x1D8920u; }
    }
    if (ctx->pc != 0x1D8920u) { return; }
    ctx->pc = 0x1D8920u;
    // 0x1d8920: 0x10000006
    ctx->pc = 0x1D8920u;
    {
        const bool branch_taken_0x1d8920 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D8924u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        if (branch_taken_0x1d8920) {
            ctx->pc = 0x1D893Cu;
            goto label_1d893c;
        }
    }
    ctx->pc = 0x1D8928u;
    // 0x1d8928: 0xc071ca4
    ctx->pc = 0x1D8928u;
    SET_GPR_U32(ctx, 31, 0x1D8930u);
    ctx->pc = 0x1D892Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 30), 208));
    ctx->pc = 0x1C7290u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unexpected_0x1c7290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8930u; }
        else if (ctx->pc != 0x1D8930u) { ctx->pc = 0x1D8930u; }
    }
    if (ctx->pc != 0x1D8930u) { return; }
    ctx->pc = 0x1D8930u;
label_1d8930:
    // 0x1d8930: 0x1000ffff
    ctx->pc = 0x1D8930u;
    {
        const bool branch_taken_0x1d8930 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8930) {
            ctx->pc = 0x1D8930u;
            goto label_1d8930;
        }
    }
    ctx->pc = 0x1D8938u;
    // 0x1d8938: 0xae000030
    ctx->pc = 0x1d8938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_1d893c:
    // 0x1d893c: 0x8e040034
    ctx->pc = 0x1d893cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1d8940: 0x1080000a
    ctx->pc = 0x1D8940u;
    {
        const bool branch_taken_0x1d8940 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8940) {
            ctx->pc = 0x1D896Cu;
            goto label_1d896c;
        }
    }
    ctx->pc = 0x1D8948u;
    // 0x1d8948: 0xc0687c0
    ctx->pc = 0x1D8948u;
    SET_GPR_U32(ctx, 31, 0x1D8950u);
    ctx->pc = 0x1A1F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        Free_0x1a1f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8950u; }
        else if (ctx->pc != 0x1D8950u) { ctx->pc = 0x1D8950u; }
    }
    if (ctx->pc != 0x1D8950u) { return; }
    ctx->pc = 0x1D8950u;
    // 0x1d8950: 0x10000006
    ctx->pc = 0x1D8950u;
    {
        const bool branch_taken_0x1d8950 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D8954u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        if (branch_taken_0x1d8950) {
            ctx->pc = 0x1D896Cu;
            goto label_1d896c;
        }
    }
    ctx->pc = 0x1D8958u;
    // 0x1d8958: 0xc071ca4
    ctx->pc = 0x1D8958u;
    SET_GPR_U32(ctx, 31, 0x1D8960u);
    ctx->pc = 0x1D895Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 30), 240));
    ctx->pc = 0x1C7290u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unexpected_0x1c7290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8960u; }
        else if (ctx->pc != 0x1D8960u) { ctx->pc = 0x1D8960u; }
    }
    if (ctx->pc != 0x1D8960u) { return; }
    ctx->pc = 0x1D8960u;
label_1d8960:
    // 0x1d8960: 0x1000ffff
    ctx->pc = 0x1D8960u;
    {
        const bool branch_taken_0x1d8960 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d8960) {
            ctx->pc = 0x1D8960u;
            goto label_1d8960;
        }
    }
    ctx->pc = 0x1D8968u;
    // 0x1d8968: 0xae000034
    ctx->pc = 0x1d8968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_1d896c:
    // 0x1d896c: 0x3c0e821
    ctx->pc = 0x1d896cu;
    SET_GPR_U32(ctx, 29, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
    // 0x1d8970: 0x7bbf0020
    ctx->pc = 0x1d8970u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d8974: 0x7bbe0010
    ctx->pc = 0x1d8974u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8978: 0x7bb00000
    ctx->pc = 0x1d8978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d897c: 0x3e00008
    ctx->pc = 0x1D897Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8980u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D8820u: goto label_1d8820;
            case 0x1D8828u: goto label_1d8828;
            case 0x1D882Cu: goto label_1d882c;
            case 0x1D8858u: goto label_1d8858;
            case 0x1D8860u: goto label_1d8860;
            case 0x1D8864u: goto label_1d8864;
            case 0x1D8890u: goto label_1d8890;
            case 0x1D8898u: goto label_1d8898;
            case 0x1D889Cu: goto label_1d889c;
            case 0x1D88C8u: goto label_1d88c8;
            case 0x1D88D0u: goto label_1d88d0;
            case 0x1D88D4u: goto label_1d88d4;
            case 0x1D8900u: goto label_1d8900;
            case 0x1D8908u: goto label_1d8908;
            case 0x1D890Cu: goto label_1d890c;
            case 0x1D8930u: goto label_1d8930;
            case 0x1D893Cu: goto label_1d893c;
            case 0x1D8960u: goto label_1d8960;
            case 0x1D896Cu: goto label_1d896c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D8984u;
}
