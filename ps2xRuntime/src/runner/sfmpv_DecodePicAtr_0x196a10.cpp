#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_DecodePicAtr
// Address: 0x196a10 - 0x196b4c
void sfmpv_DecodePicAtr_0x196a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_DecodePicAtr");


    ctx->pc = 0x196a10u;

    // 0x196a10: 0x27bdff70
    ctx->pc = 0x196a10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x196a14: 0xffb60070
    ctx->pc = 0x196a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x196a18: 0xffb40050
    ctx->pc = 0x196a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x196a1c: 0xe0b02d
    ctx->pc = 0x196a1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a20: 0xffb30040
    ctx->pc = 0x196a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x196a24: 0xa0a02d
    ctx->pc = 0x196a24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a28: 0xffb20030
    ctx->pc = 0x196a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x196a2c: 0xffb10020
    ctx->pc = 0x196a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x196a30: 0xffb00010
    ctx->pc = 0x196a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x196a34: 0x80882d
    ctx->pc = 0x196a34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a38: 0xffbf0080
    ctx->pc = 0x196a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x196a3c: 0xc0802d
    ctx->pc = 0x196a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a40: 0xffb50060
    ctx->pc = 0x196a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x196a44: 0x8e353740
    ctx->pc = 0x196a44u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 17), 14144)));
    // 0x196a48: 0x26333740
    ctx->pc = 0x196a48u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 17), 14144));
    // 0x196a4c: 0x26323784
    ctx->pc = 0x196a4cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 14212));
    // 0x196a50: 0xc061986
    ctx->pc = 0x196A50u;
    SET_GPR_U32(ctx, 31, 0x196A58u);
    ctx->pc = 0x196A54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x186618u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_DecodePicAtr_0x186618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196A58u; }
        else if (ctx->pc != 0x196A58u) { ctx->pc = 0x196A58u; }
    }
    if (ctx->pc != 0x196A58u) { return; }
    ctx->pc = 0x196A58u;
    // 0x196a58: 0x3c07ff00
    ctx->pc = 0x196a58u;
    SET_GPR_U32(ctx, 7, ((uint32_t)65280 << 16));
    // 0x196a5c: 0x8e060000
    ctx->pc = 0x196a5cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x196a60: 0x40282d
    ctx->pc = 0x196a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a64: 0x220202d
    ctx->pc = 0x196a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a68: 0xc065a64
    ctx->pc = 0x196A68u;
    SET_GPR_U32(ctx, 31, 0x196A70u);
    ctx->pc = 0x196A6Cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 3844));
    ctx->pc = 0x196990u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_ChkMpvErr_0x196990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196A70u; }
        else if (ctx->pc != 0x196A70u) { ctx->pc = 0x196A70u; }
    }
    if (ctx->pc != 0x196A70u) { return; }
    ctx->pc = 0x196A70u;
    // 0x196a70: 0x1440002d
    ctx->pc = 0x196A70u;
    {
        const bool branch_taken_0x196a70 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x196A74u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x196a70) {
            ctx->pc = 0x196B28u;
            goto label_196b28;
        }
    }
    ctx->pc = 0x196A78u;
    // 0x196a78: 0x2a0202d
    ctx->pc = 0x196a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a7c: 0xc0618f8
    ctx->pc = 0x196A7Cu;
    SET_GPR_U32(ctx, 31, 0x196A84u);
    ctx->pc = 0x196A80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1863E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_GetPicAtr_0x1863e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196A84u; }
        else if (ctx->pc != 0x196A84u) { ctx->pc = 0x196A84u; }
    }
    if (ctx->pc != 0x196A84u) { return; }
    ctx->pc = 0x196A84u;
    // 0x196a84: 0x10400006
    ctx->pc = 0x196A84u;
    {
        const bool branch_taken_0x196a84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x196A88u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x196a84) {
            ctx->pc = 0x196AA0u;
            goto label_196aa0;
        }
    }
    ctx->pc = 0x196A8Cu;
    // 0x196a8c: 0x3c05ff00
    ctx->pc = 0x196a8cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x196a90: 0xc064ea0
    ctx->pc = 0x196A90u;
    SET_GPR_U32(ctx, 31, 0x196A98u);
    ctx->pc = 0x196A94u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3845));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196A98u; }
        else if (ctx->pc != 0x196A98u) { ctx->pc = 0x196A98u; }
    }
    if (ctx->pc != 0x196A98u) { return; }
    ctx->pc = 0x196A98u;
    // 0x196a98: 0x10000023
    ctx->pc = 0x196A98u;
    {
        const bool branch_taken_0x196a98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196A9Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x196a98) {
            ctx->pc = 0x196B28u;
            goto label_196b28;
        }
    }
    ctx->pc = 0x196AA0u;
label_196aa0:
    // 0x196aa0: 0x8e620078
    ctx->pc = 0x196aa0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x196aa4: 0x8e430030
    ctx->pc = 0x196aa4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x196aa8: 0x10430004
    ctx->pc = 0x196AA8u;
    {
        const bool branch_taken_0x196aa8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x196AACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x196aa8) {
            ctx->pc = 0x196ABCu;
            goto label_196abc;
        }
    }
    ctx->pc = 0x196AB0u;
    // 0x196ab0: 0xae630078
    ctx->pc = 0x196ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 3));
    // 0x196ab4: 0x10000002
    ctx->pc = 0x196AB4u;
    {
        const bool branch_taken_0x196ab4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196AB8u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 2));
        if (branch_taken_0x196ab4) {
            ctx->pc = 0x196AC0u;
            goto label_196ac0;
        }
    }
    ctx->pc = 0x196ABCu;
label_196abc:
    // 0x196abc: 0xae60007c
    ctx->pc = 0x196abcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_196ac0:
    // 0x196ac0: 0x8e68007c
    ctx->pc = 0x196ac0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x196ac4: 0x220202d
    ctx->pc = 0x196ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ac8: 0x240282d
    ctx->pc = 0x196ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196acc: 0x280302d
    ctx->pc = 0x196accu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ad0: 0xc065ad4
    ctx->pc = 0x196AD0u;
    SET_GPR_U32(ctx, 31, 0x196AD8u);
    ctx->pc = 0x196AD4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x196B50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_ReadPtsQue_0x196b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196AD8u; }
        else if (ctx->pc != 0x196AD8u) { ctx->pc = 0x196AD8u; }
    }
    if (ctx->pc != 0x196AD8u) { return; }
    ctx->pc = 0x196AD8u;
    // 0x196ad8: 0x56c00003
    ctx->pc = 0x196AD8u;
    {
        const bool branch_taken_0x196ad8 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        if (branch_taken_0x196ad8) {
            ctx->pc = 0x196ADCu;
            SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 19), 124)));
            ctx->pc = 0x196AE8u;
            goto label_196ae8;
        }
    }
    ctx->pc = 0x196AE0u;
    // 0x196ae0: 0x10000010
    ctx->pc = 0x196AE0u;
    {
        const bool branch_taken_0x196ae0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196AE4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x196ae0) {
            ctx->pc = 0x196B24u;
            goto label_196b24;
        }
    }
    ctx->pc = 0x196AE8u;
label_196ae8:
    // 0x196ae8: 0x220202d
    ctx->pc = 0x196ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196aec: 0x8fa60000
    ctx->pc = 0x196aecu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196af0: 0xc065b72
    ctx->pc = 0x196AF0u;
    SET_GPR_U32(ctx, 31, 0x196AF8u);
    ctx->pc = 0x196AF4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x196DC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_ReformTc_0x196dc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196AF8u; }
        else if (ctx->pc != 0x196AF8u) { ctx->pc = 0x196AF8u; }
    }
    if (ctx->pc != 0x196AF8u) { return; }
    ctx->pc = 0x196AF8u;
    // 0x196af8: 0x220202d
    ctx->pc = 0x196af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196afc: 0xc065cac
    ctx->pc = 0x196AFCu;
    SET_GPR_U32(ctx, 31, 0x196B04u);
    ctx->pc = 0x196B00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1972B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_SetHeadTtu_0x1972b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196B04u; }
        else if (ctx->pc != 0x196B04u) { ctx->pc = 0x196B04u; }
    }
    if (ctx->pc != 0x196B04u) { return; }
    ctx->pc = 0x196B04u;
    // 0x196b04: 0x220202d
    ctx->pc = 0x196b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b08: 0xc065cd6
    ctx->pc = 0x196B08u;
    SET_GPR_U32(ctx, 31, 0x196B10u);
    ctx->pc = 0x196B0Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x197358u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_SetDecTtu_0x197358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196B10u; }
        else if (ctx->pc != 0x196B10u) { ctx->pc = 0x196B10u; }
    }
    if (ctx->pc != 0x196B10u) { return; }
    ctx->pc = 0x196B10u;
    // 0x196b10: 0x220202d
    ctx->pc = 0x196b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b14: 0x2a0282d
    ctx->pc = 0x196b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b18: 0x240302d
    ctx->pc = 0x196b18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b1c: 0xc065d2c
    ctx->pc = 0x196B1Cu;
    SET_GPR_U32(ctx, 31, 0x196B24u);
    ctx->pc = 0x196B20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1974B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_FirstPicAtr_0x1974b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196B24u; }
        else if (ctx->pc != 0x196B24u) { ctx->pc = 0x196B24u; }
    }
    if (ctx->pc != 0x196B24u) { return; }
    ctx->pc = 0x196B24u;
label_196b24:
    // 0x196b24: 0xdfbf0080
    ctx->pc = 0x196b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_196b28:
    // 0x196b28: 0xdfb60070
    ctx->pc = 0x196b28u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x196b2c: 0xdfb50060
    ctx->pc = 0x196b2cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196b30: 0xdfb40050
    ctx->pc = 0x196b30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x196b34: 0xdfb30040
    ctx->pc = 0x196b34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x196b38: 0xdfb20030
    ctx->pc = 0x196b38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x196b3c: 0xdfb10020
    ctx->pc = 0x196b3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196b40: 0xdfb00010
    ctx->pc = 0x196b40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196b44: 0x3e00008
    ctx->pc = 0x196B44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196B48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196AA0u: goto label_196aa0;
            case 0x196ABCu: goto label_196abc;
            case 0x196AC0u: goto label_196ac0;
            case 0x196AE8u: goto label_196ae8;
            case 0x196B24u: goto label_196b24;
            case 0x196B28u: goto label_196b28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x196B4Cu;
}
