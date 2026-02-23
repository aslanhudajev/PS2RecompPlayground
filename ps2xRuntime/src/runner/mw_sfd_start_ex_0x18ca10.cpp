#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mw_sfd_start_ex
// Address: 0x18ca10 - 0x18cb38
void mw_sfd_start_ex_0x18ca10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mw_sfd_start_ex");


    ctx->pc = 0x18ca10u;

    // 0x18ca10: 0x27bdffb0
    ctx->pc = 0x18ca10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18ca14: 0xffb10010
    ctx->pc = 0x18ca14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x18ca18: 0x80882d
    ctx->pc = 0x18ca18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ca1c: 0xffb30030
    ctx->pc = 0x18ca1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x18ca20: 0xffb00000
    ctx->pc = 0x18ca20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18ca24: 0xffbf0040
    ctx->pc = 0x18ca24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18ca28: 0x2630000c
    ctx->pc = 0x18ca28u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 12));
    // 0x18ca2c: 0xc063184
    ctx->pc = 0x18CA2Cu;
    SET_GPR_U32(ctx, 31, 0x18CA34u);
    ctx->pc = 0x18CA30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->pc = 0x18C610u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFD_GetLibWorkPtr_0x18c610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CA34u; }
        else if (ctx->pc != 0x18CA34u) { ctx->pc = 0x18CA34u; }
    }
    if (ctx->pc != 0x18CA34u) { return; }
    ctx->pc = 0x18CA34u;
    // 0x18ca34: 0x24531210
    ctx->pc = 0x18ca34u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4624));
    // 0x18ca38: 0x8e220030
    ctx->pc = 0x18ca38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x18ca3c: 0x10400022
    ctx->pc = 0x18CA3Cu;
    {
        const bool branch_taken_0x18ca3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x18ca3c) {
            ctx->pc = 0x18CAC8u;
            goto label_18cac8;
        }
    }
    ctx->pc = 0x18CA44u;
    // 0x18ca44: 0x9202001c
    ctx->pc = 0x18ca44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x18ca48: 0x28420007
    ctx->pc = 0x18ca48u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 7));
    // 0x18ca4c: 0x54400003
    ctx->pc = 0x18CA4Cu;
    {
        const bool branch_taken_0x18ca4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x18ca4c) {
            ctx->pc = 0x18CA50u;
            SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x18CA5Cu;
            goto label_18ca5c;
        }
    }
    ctx->pc = 0x18CA54u;
    // 0x18ca54: 0x8e02000c
    ctx->pc = 0x18ca54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18ca58: 0x29040
    ctx->pc = 0x18ca58u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 2), 1));
label_18ca5c:
    // 0x18ca5c: 0xc063c2c
    ctx->pc = 0x18CA5Cu;
    SET_GPR_U32(ctx, 31, 0x18CA64u);
    ctx->pc = 0x18CA60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 48)));
    ctx->pc = 0x18F0B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlySfdDestroy_0x18f0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CA64u; }
        else if (ctx->pc != 0x18CA64u) { ctx->pc = 0x18CA64u; }
    }
    if (ctx->pc != 0x18CA64u) { return; }
    ctx->pc = 0x18CA64u;
    // 0x18ca64: 0x8e050000
    ctx->pc = 0x18ca64u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18ca68: 0x240402d
    ctx->pc = 0x18ca68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ca6c: 0x8e060004
    ctx->pc = 0x18ca6cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18ca70: 0x220202d
    ctx->pc = 0x18ca70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ca74: 0x8e070008
    ctx->pc = 0x18ca74u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18ca78: 0x8e090010
    ctx->pc = 0x18ca78u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x18ca7c: 0x8e0a0014
    ctx->pc = 0x18ca7cu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x18ca80: 0xc063b18
    ctx->pc = 0x18CA80u;
    SET_GPR_U32(ctx, 31, 0x18CA88u);
    ctx->pc = 0x18CA84u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->pc = 0x18EC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlySfdCreate_0x18ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CA88u; }
        else if (ctx->pc != 0x18CA88u) { ctx->pc = 0x18CA88u; }
    }
    if (ctx->pc != 0x18CA88u) { return; }
    ctx->pc = 0x18CA88u;
    // 0x18ca88: 0x1440000a
    ctx->pc = 0x18CA88u;
    {
        const bool branch_taken_0x18ca88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18CA8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        if (branch_taken_0x18ca88) {
            ctx->pc = 0x18CAB4u;
            goto label_18cab4;
        }
    }
    ctx->pc = 0x18CA90u;
    // 0x18ca90: 0x3c04002c
    ctx->pc = 0x18ca90u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x18ca94: 0xdfbf0040
    ctx->pc = 0x18ca94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18ca98: 0xdfb30030
    ctx->pc = 0x18ca98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18ca9c: 0x2484cbe8
    ctx->pc = 0x18ca9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953960));
    // 0x18caa0: 0xdfb20020
    ctx->pc = 0x18caa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18caa4: 0xdfb10010
    ctx->pc = 0x18caa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18caa8: 0xdfb00000
    ctx->pc = 0x18caa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18caac: 0x8063dda
    ctx->pc = 0x18CAACu;
    ctx->pc = 0x18CAB0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x18F768u;
    MWSFSVM_Error_0x18f768(rdram, ctx, runtime); return;
    ctx->pc = 0x18CAB4u;
label_18cab4:
    // 0x18cab4: 0x8e670008
    ctx->pc = 0x18cab4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x18cab8: 0x200282d
    ctx->pc = 0x18cab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cabc: 0x8e660004
    ctx->pc = 0x18cabcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x18cac0: 0xc063c3c
    ctx->pc = 0x18CAC0u;
    SET_GPR_U32(ctx, 31, 0x18CAC8u);
    ctx->pc = 0x18CAC4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18F0F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlySfdSetCond_0x18f0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CAC8u; }
        else if (ctx->pc != 0x18CAC8u) { ctx->pc = 0x18CAC8u; }
    }
    if (ctx->pc != 0x18CAC8u) { return; }
    ctx->pc = 0x18CAC8u;
label_18cac8:
    // 0x18cac8: 0xc063c8a
    ctx->pc = 0x18CAC8u;
    SET_GPR_U32(ctx, 31, 0x18CAD0u);
    ctx->pc = 0x18CACCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18F228u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlySfdStandby_0x18f228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CAD0u; }
        else if (ctx->pc != 0x18CAD0u) { ctx->pc = 0x18CAD0u; }
    }
    if (ctx->pc != 0x18CAD0u) { return; }
    ctx->pc = 0x18CAD0u;
    // 0x18cad0: 0xc063c9a
    ctx->pc = 0x18CAD0u;
    SET_GPR_U32(ctx, 31, 0x18CAD8u);
    ctx->pc = 0x18CAD4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18F268u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlySfdStart_0x18f268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CAD8u; }
        else if (ctx->pc != 0x18CAD8u) { ctx->pc = 0x18CAD8u; }
    }
    if (ctx->pc != 0x18CAD8u) { return; }
    ctx->pc = 0x18CAD8u;
    // 0x18cad8: 0x8225007e
    ctx->pc = 0x18cad8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 126)));
    // 0x18cadc: 0xc06352e
    ctx->pc = 0x18CADCu;
    SET_GPR_U32(ctx, 31, 0x18CAE4u);
    ctx->pc = 0x18CAE0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18D4B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwSfdPause_0x18d4b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CAE4u; }
        else if (ctx->pc != 0x18CAE4u) { ctx->pc = 0x18CAE4u; }
    }
    if (ctx->pc != 0x18CAE4u) { return; }
    ctx->pc = 0x18CAE4u;
    // 0x18cae4: 0x8223007c
    ctx->pc = 0x18cae4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x18cae8: 0x24020001
    ctx->pc = 0x18cae8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18caec: 0x5462000a
    ctx->pc = 0x18CAECu;
    {
        const bool branch_taken_0x18caec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x18caec) {
            ctx->pc = 0x18CAF0u;
            WRITE8(ADD32(GPR_U32(ctx, 17), 125), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x18CB18u;
            goto label_18cb18;
        }
    }
    ctx->pc = 0x18CAF4u;
    // 0x18caf4: 0xc064a66
    ctx->pc = 0x18CAF4u;
    SET_GPR_U32(ctx, 31, 0x18CAFCu);
    ctx->pc = 0x18CAF8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 48)));
    ctx->pc = 0x192998u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_SetConcatPlay_0x192998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CAFCu; }
        else if (ctx->pc != 0x18CAFCu) { ctx->pc = 0x18CAFCu; }
    }
    if (ctx->pc != 0x18CAFCu) { return; }
    ctx->pc = 0x18CAFCu;
    // 0x18cafc: 0x10400005
    ctx->pc = 0x18CAFCu;
    {
        const bool branch_taken_0x18cafc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18CB00u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x18cafc) {
            ctx->pc = 0x18CB14u;
            goto label_18cb14;
        }
    }
    ctx->pc = 0x18CB04u;
    // 0x18cb04: 0x3c04002c
    ctx->pc = 0x18cb04u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x18cb08: 0xc063dda
    ctx->pc = 0x18CB08u;
    SET_GPR_U32(ctx, 31, 0x18CB10u);
    ctx->pc = 0x18CB0Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954008));
    ctx->pc = 0x18F768u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_Error_0x18f768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CB10u; }
        else if (ctx->pc != 0x18CB10u) { ctx->pc = 0x18CB10u; }
    }
    if (ctx->pc != 0x18CB10u) { return; }
    ctx->pc = 0x18CB10u;
    // 0x18cb10: 0x24020001
    ctx->pc = 0x18cb10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_18cb14:
    // 0x18cb14: 0xa220007d
    ctx->pc = 0x18cb14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 125), (uint8_t)GPR_U32(ctx, 0));
label_18cb18:
    // 0x18cb18: 0xae220008
    ctx->pc = 0x18cb18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x18cb1c: 0xdfbf0040
    ctx->pc = 0x18cb1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18cb20: 0xdfb30030
    ctx->pc = 0x18cb20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18cb24: 0xdfb20020
    ctx->pc = 0x18cb24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18cb28: 0xdfb10010
    ctx->pc = 0x18cb28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18cb2c: 0xdfb00000
    ctx->pc = 0x18cb2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18cb30: 0x3e00008
    ctx->pc = 0x18CB30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CB34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18CA5Cu: goto label_18ca5c;
            case 0x18CAB4u: goto label_18cab4;
            case 0x18CAC8u: goto label_18cac8;
            case 0x18CB14u: goto label_18cb14;
            case 0x18CB18u: goto label_18cb18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18CB38u;
}
