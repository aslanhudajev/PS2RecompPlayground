#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MakeCreditData__FPiP14tagCREDIT_DATAPA4_Uc
// Address: 0x1c7b10 - 0x1c7bf4
void MakeCreditData__FPiP14tagCREDIT_DATAPA4_Uc_0x1c7b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MakeCreditData__FPiP14tagCREDIT_DATAPA4_Uc");


    ctx->pc = 0x1c7b10u;

    // 0x1c7b10: 0x27bdffa0
    ctx->pc = 0x1c7b10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c7b14: 0x7fbf0050
    ctx->pc = 0x1c7b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1c7b18: 0x7fb40040
    ctx->pc = 0x1c7b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c7b1c: 0x7fb30030
    ctx->pc = 0x1c7b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c7b20: 0x7fb20020
    ctx->pc = 0x1c7b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c7b24: 0x7fb10010
    ctx->pc = 0x1c7b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c7b28: 0x7fb00000
    ctx->pc = 0x1c7b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c7b2c: 0x90b10008
    ctx->pc = 0x1c7b2cu;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c7b30: 0x70c09e28
    ctx->pc = 0x1c7b30u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1c7b34: 0x26730001
    ctx->pc = 0x1c7b34u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x1c7b38: 0x26730001
    ctx->pc = 0x1c7b38u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x1c7b3c: 0x70a0a628
    ctx->pc = 0x1c7b3cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1c7b40: 0x24120001
    ctx->pc = 0x1c7b40u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7b44: 0x26730001
    ctx->pc = 0x1c7b44u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x1c7b48: 0xa0d10000
    ctx->pc = 0x1c7b48u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c7b4c: 0x1000001e
    ctx->pc = 0x1C7B4Cu;
    {
        const bool branch_taken_0x1c7b4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C7B50u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1c7b4c) {
            ctx->pc = 0x1C7BC8u;
            goto label_1c7bc8;
        }
    }
    ctx->pc = 0x1C7B54u;
label_1c7b54:
    // 0x1c7b54: 0xc0750bc
    ctx->pc = 0x1C7B54u;
    SET_GPR_U32(ctx, 31, 0x1C7B5Cu);
    ctx->pc = 0x1C7B58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294957760));
    ctx->pc = 0x1D42F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        IsFreePlay__11CreditClassFv_0x1d42f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7B5Cu; }
        else if (ctx->pc != 0x1C7B5Cu) { ctx->pc = 0x1C7B5Cu; }
    }
    if (ctx->pc != 0x1C7B5Cu) { return; }
    ctx->pc = 0x1C7B5Cu;
    // 0x1c7b5c: 0x10400003
    ctx->pc = 0x1C7B5Cu;
    {
        const bool branch_taken_0x1c7b5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C7B60u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1c7b5c) {
            ctx->pc = 0x1C7B6Cu;
            goto label_1c7b6c;
        }
    }
    ctx->pc = 0x1C7B64u;
    // 0x1c7b64: 0x10000016
    ctx->pc = 0x1C7B64u;
    {
        const bool branch_taken_0x1c7b64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C7B68u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1c7b64) {
            ctx->pc = 0x1C7BC0u;
            goto label_1c7bc0;
        }
    }
    ctx->pc = 0x1C7B6Cu;
label_1c7b6c:
    // 0x1c7b6c: 0x16200004
    ctx->pc = 0x1C7B6Cu;
    {
        const bool branch_taken_0x1c7b6c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C7B70u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x1c7b6c) {
            ctx->pc = 0x1C7B80u;
            goto label_1c7b80;
        }
    }
    ctx->pc = 0x1C7B74u;
    // 0x1c7b74: 0x10000012
    ctx->pc = 0x1C7B74u;
    {
        const bool branch_taken_0x1c7b74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C7B78u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1c7b74) {
            ctx->pc = 0x1C7BC0u;
            goto label_1c7bc0;
        }
    }
    ctx->pc = 0x1C7B7Cu;
    // 0x1c7b7c: 0x101880
    ctx->pc = 0x1c7b7cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
label_1c7b80:
    // 0x1c7b80: 0x2831821
    ctx->pc = 0x1c7b80u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c7b84: 0x8c640000
    ctx->pc = 0x1c7b84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c7b88: 0x3c03002d
    ctx->pc = 0x1c7b88u;
    SET_GPR_U32(ctx, 3, ((uint32_t)45 << 16));
    // 0x1c7b8c: 0x246359c8
    ctx->pc = 0x1c7b8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 22984));
    // 0x1c7b90: 0x42080
    ctx->pc = 0x1c7b90u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c7b94: 0x641821
    ctx->pc = 0x1c7b94u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c7b98: 0x8c630000
    ctx->pc = 0x1c7b98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c7b9c: 0x223182a
    ctx->pc = 0x1c7b9cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x1c7ba0: 0x14600005
    ctx->pc = 0x1C7BA0u;
    {
        const bool branch_taken_0x1c7ba0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C7BA4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1c7ba0) {
            ctx->pc = 0x1C7BB8u;
            goto label_1c7bb8;
        }
    }
    ctx->pc = 0x1C7BA8u;
    // 0x1c7ba8: 0x24030002
    ctx->pc = 0x1c7ba8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c7bac: 0x10000004
    ctx->pc = 0x1C7BACu;
    {
        const bool branch_taken_0x1c7bac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C7BB0u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1c7bac) {
            ctx->pc = 0x1C7BC0u;
            goto label_1c7bc0;
        }
    }
    ctx->pc = 0x1C7BB4u;
    // 0x1c7bb4: 0x24030001
    ctx->pc = 0x1c7bb4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1c7bb8:
    // 0x1c7bb8: 0xa2630000
    ctx->pc = 0x1c7bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c7bbc: 0x0
    ctx->pc = 0x1c7bbcu;
    // NOP
label_1c7bc0:
    // 0x1c7bc0: 0x26100001
    ctx->pc = 0x1c7bc0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c7bc4: 0x26730004
    ctx->pc = 0x1c7bc4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4));
label_1c7bc8:
    // 0x1c7bc8: 0x250082a
    ctx->pc = 0x1c7bc8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 16)));
    // 0x1c7bcc: 0x5020ffe1
    ctx->pc = 0x1C7BCCu;
    {
        const bool branch_taken_0x1c7bcc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c7bcc) {
            ctx->pc = 0x1C7BD0u;
            SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
            ctx->pc = 0x1C7B54u;
            goto label_1c7b54;
        }
    }
    ctx->pc = 0x1C7BD4u;
    // 0x1c7bd4: 0x7bbf0050
    ctx->pc = 0x1c7bd4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c7bd8: 0x7bb40040
    ctx->pc = 0x1c7bd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c7bdc: 0x7bb30030
    ctx->pc = 0x1c7bdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c7be0: 0x7bb20020
    ctx->pc = 0x1c7be0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7be4: 0x7bb10010
    ctx->pc = 0x1c7be4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7be8: 0x7bb00000
    ctx->pc = 0x1c7be8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7bec: 0x3e00008
    ctx->pc = 0x1C7BECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7BF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C7B54u: goto label_1c7b54;
            case 0x1C7B6Cu: goto label_1c7b6c;
            case 0x1C7B80u: goto label_1c7b80;
            case 0x1C7BB8u: goto label_1c7bb8;
            case 0x1C7BC0u: goto label_1c7bc0;
            case 0x1C7BC8u: goto label_1c7bc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C7BF4u;
}
