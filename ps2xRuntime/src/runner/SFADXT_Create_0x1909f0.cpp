#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFADXT_Create
// Address: 0x1909f0 - 0x190b1c
void SFADXT_Create_0x1909f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFADXT_Create");


    ctx->pc = 0x1909f0u;

    // 0x1909f0: 0x27bdffb0
    ctx->pc = 0x1909f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1909f4: 0x24050006
    ctx->pc = 0x1909f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1909f8: 0xffb10010
    ctx->pc = 0x1909f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1909fc: 0x80882d
    ctx->pc = 0x1909fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190a00: 0xffbf0040
    ctx->pc = 0x190a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x190a04: 0xffb30030
    ctx->pc = 0x190a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x190a08: 0xffb20020
    ctx->pc = 0x190a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x190a0c: 0xc0674c2
    ctx->pc = 0x190A0Cu;
    SET_GPR_U32(ctx, 31, 0x190A14u);
    ctx->pc = 0x190A10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190A14u; }
        else if (ctx->pc != 0x190A14u) { ctx->pc = 0x190A14u; }
    }
    if (ctx->pc != 0x190A14u) { return; }
    ctx->pc = 0x190A14u;
    // 0x190a14: 0x10400039
    ctx->pc = 0x190A14u;
    {
        const bool branch_taken_0x190a14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x190A18u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 17), 15904));
        if (branch_taken_0x190a14) {
            ctx->pc = 0x190AFCu;
            goto label_190afc;
        }
    }
    ctx->pc = 0x190A1Cu;
    // 0x190a1c: 0x220202d
    ctx->pc = 0x190a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190a20: 0x260282d
    ctx->pc = 0x190a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190a24: 0xc0642c8
    ctx->pc = 0x190A24u;
    SET_GPR_U32(ctx, 31, 0x190A2Cu);
    ctx->pc = 0x190A28u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 15912));
    ctx->pc = 0x190B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfadxt_InitInf_0x190b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190A2Cu; }
        else if (ctx->pc != 0x190A2Cu) { ctx->pc = 0x190A2Cu; }
    }
    if (ctx->pc != 0x190A2Cu) { return; }
    ctx->pc = 0x190A2Cu;
    // 0x190a2c: 0x14400035
    ctx->pc = 0x190A2Cu;
    {
        const bool branch_taken_0x190a2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x190A30u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x190a2c) {
            ctx->pc = 0x190B04u;
            goto label_190b04;
        }
    }
    ctx->pc = 0x190A34u;
    // 0x190a34: 0xc0642fa
    ctx->pc = 0x190A34u;
    SET_GPR_U32(ctx, 31, 0x190A3Cu);
    ctx->pc = 0x190A38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x190BE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfadxt_CreateEx_0x190be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190A3Cu; }
        else if (ctx->pc != 0x190A3Cu) { ctx->pc = 0x190A3Cu; }
    }
    if (ctx->pc != 0x190A3Cu) { return; }
    ctx->pc = 0x190A3Cu;
    // 0x190a3c: 0x40902d
    ctx->pc = 0x190a3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190a40: 0x56400007
    ctx->pc = 0x190A40u;
    {
        const bool branch_taken_0x190a40 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x190a40) {
            ctx->pc = 0x190A44u;
            SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x190A60u;
            goto label_190a60;
        }
    }
    ctx->pc = 0x190A48u;
    // 0x190a48: 0x3c05ff00
    ctx->pc = 0x190a48u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x190a4c: 0x220202d
    ctx->pc = 0x190a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190a50: 0xc064ea0
    ctx->pc = 0x190A50u;
    SET_GPR_U32(ctx, 31, 0x190A58u);
    ctx->pc = 0x190A54u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3076));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190A58u; }
        else if (ctx->pc != 0x190A58u) { ctx->pc = 0x190A58u; }
    }
    if (ctx->pc != 0x190A58u) { return; }
    ctx->pc = 0x190A58u;
    // 0x190a58: 0x1000002a
    ctx->pc = 0x190A58u;
    {
        const bool branch_taken_0x190a58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x190A5Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x190a58) {
            ctx->pc = 0x190B04u;
            goto label_190b04;
        }
    }
    ctx->pc = 0x190A60u;
label_190a60:
    // 0x190a60: 0x8e040008
    ctx->pc = 0x190a60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x190a64: 0xc05f128
    ctx->pc = 0x190A64u;
    SET_GPR_U32(ctx, 31, 0x190A6Cu);
    ctx->pc = 0x190A68u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 15912)));
    ctx->pc = 0x17C4A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJRBF_Create_0x17c4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190A6Cu; }
        else if (ctx->pc != 0x190A6Cu) { ctx->pc = 0x190A6Cu; }
    }
    if (ctx->pc != 0x190A6Cu) { return; }
    ctx->pc = 0x190A6Cu;
    // 0x190a6c: 0x40502d
    ctx->pc = 0x190a6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190a70: 0x55400007
    ctx->pc = 0x190A70u;
    {
        const bool branch_taken_0x190a70 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        if (branch_taken_0x190a70) {
            ctx->pc = 0x190A74u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 15904), GPR_U32(ctx, 18));
            ctx->pc = 0x190A90u;
            goto label_190a90;
        }
    }
    ctx->pc = 0x190A78u;
    // 0x190a78: 0x3c05ff00
    ctx->pc = 0x190a78u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x190a7c: 0x220202d
    ctx->pc = 0x190a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190a80: 0xc064ea0
    ctx->pc = 0x190A80u;
    SET_GPR_U32(ctx, 31, 0x190A88u);
    ctx->pc = 0x190A84u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3077));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190A88u; }
        else if (ctx->pc != 0x190A88u) { ctx->pc = 0x190A88u; }
    }
    if (ctx->pc != 0x190A88u) { return; }
    ctx->pc = 0x190A88u;
    // 0x190a88: 0x1000001e
    ctx->pc = 0x190A88u;
    {
        const bool branch_taken_0x190a88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x190A8Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x190a88) {
            ctx->pc = 0x190B04u;
            goto label_190b04;
        }
    }
    ctx->pc = 0x190A90u;
label_190a90:
    // 0x190a90: 0x3c070019
    ctx->pc = 0x190a90u;
    SET_GPR_U32(ctx, 7, ((uint32_t)25 << 16));
    // 0x190a94: 0x3c080019
    ctx->pc = 0x190a94u;
    SET_GPR_U32(ctx, 8, ((uint32_t)25 << 16));
    // 0x190a98: 0x3c090019
    ctx->pc = 0x190a98u;
    SET_GPR_U32(ctx, 9, ((uint32_t)25 << 16));
    // 0x190a9c: 0x8e45000c
    ctx->pc = 0x190a9cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x190aa0: 0x3c060019
    ctx->pc = 0x190aa0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)25 << 16));
    // 0x190aa4: 0x3c030019
    ctx->pc = 0x190aa4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)25 << 16));
    // 0x190aa8: 0x262259a0
    ctx->pc = 0x190aa8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 22944));
    // 0x190aac: 0x24e7faa8
    ctx->pc = 0x190aacu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294965928));
    // 0x190ab0: 0x2508fab0
    ctx->pc = 0x190ab0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294965936));
    // 0x190ab4: 0x2529fad0
    ctx->pc = 0x190ab4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294965968));
    // 0x190ab8: 0x24c6fad8
    ctx->pc = 0x190ab8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294965976));
    // 0x190abc: 0x2463faf8
    ctx->pc = 0x190abcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294966008));
    // 0x190ac0: 0xae2559a0
    ctx->pc = 0x190ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 22944), GPR_U32(ctx, 5));
    // 0x190ac4: 0xae6a0004
    ctx->pc = 0x190ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 10));
    // 0x190ac8: 0x240202d
    ctx->pc = 0x190ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190acc: 0xac430014
    ctx->pc = 0x190accu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x190ad0: 0x140282d
    ctx->pc = 0x190ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190ad4: 0xac470004
    ctx->pc = 0x190ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x190ad8: 0xac480008
    ctx->pc = 0x190ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
    // 0x190adc: 0xac49000c
    ctx->pc = 0x190adcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 9));
    // 0x190ae0: 0xc05c6aa
    ctx->pc = 0x190AE0u;
    SET_GPR_U32(ctx, 31, 0x190AE8u);
    ctx->pc = 0x190AE4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
    ctx->pc = 0x171AA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_StartSj_0x171aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190AE8u; }
        else if (ctx->pc != 0x190AE8u) { ctx->pc = 0x190AE8u; }
    }
    if (ctx->pc != 0x190AE8u) { return; }
    ctx->pc = 0x190AE8u;
    // 0x190ae8: 0x220202d
    ctx->pc = 0x190ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190aec: 0xc064382
    ctx->pc = 0x190AECu;
    SET_GPR_U32(ctx, 31, 0x190AF4u);
    ctx->pc = 0x190AF0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x190E08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfadxt_WaitStart_0x190e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190AF4u; }
        else if (ctx->pc != 0x190AF4u) { ctx->pc = 0x190AF4u; }
    }
    if (ctx->pc != 0x190AF4u) { return; }
    ctx->pc = 0x190AF4u;
    // 0x190af4: 0xc06430e
    ctx->pc = 0x190AF4u;
    SET_GPR_U32(ctx, 31, 0x190AFCu);
    ctx->pc = 0x190AF8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x190C38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfadxt_SetTimeFn_0x190c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190AFCu; }
        else if (ctx->pc != 0x190AFCu) { ctx->pc = 0x190AFCu; }
    }
    if (ctx->pc != 0x190AFCu) { return; }
    ctx->pc = 0x190AFCu;
label_190afc:
    // 0x190afc: 0x102d
    ctx->pc = 0x190afcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190b00: 0xdfbf0040
    ctx->pc = 0x190b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_190b04:
    // 0x190b04: 0xdfb30030
    ctx->pc = 0x190b04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x190b08: 0xdfb20020
    ctx->pc = 0x190b08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190b0c: 0xdfb10010
    ctx->pc = 0x190b0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190b10: 0xdfb00000
    ctx->pc = 0x190b10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190b14: 0x3e00008
    ctx->pc = 0x190B14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190B18u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190A60u: goto label_190a60;
            case 0x190A90u: goto label_190a90;
            case 0x190AFCu: goto label_190afc;
            case 0x190B04u: goto label_190b04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x190B1Cu;
}
