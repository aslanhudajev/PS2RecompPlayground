#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: viBufRestartDMA
// Address: 0x199a08 - 0x199d18
void viBufRestartDMA_0x199a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("viBufRestartDMA");


    ctx->pc = 0x199a08u;

    // 0x199a08: 0x27bdff80
    ctx->pc = 0x199a08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x199a0c: 0xffb60060
    ctx->pc = 0x199a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x199a10: 0xffb50050
    ctx->pc = 0x199a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x199a14: 0xffb40040
    ctx->pc = 0x199a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x199a18: 0xffb30030
    ctx->pc = 0x199a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x199a1c: 0xffb20020
    ctx->pc = 0x199a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x199a20: 0xffb00000
    ctx->pc = 0x199a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x199a24: 0xffbf0070
    ctx->pc = 0x199a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x199a28: 0x80802d
    ctx->pc = 0x199a28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a2c: 0xffb10010
    ctx->pc = 0x199a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x199a30: 0xc055248
    ctx->pc = 0x199A30u;
    SET_GPR_U32(ctx, 31, 0x199A38u);
    ctx->pc = 0x199A34u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x154920u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x154920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199A38u; }
        else if (ctx->pc != 0x199A38u) { ctx->pc = 0x199A38u; }
    }
    if (ctx->pc != 0x199A38u) { return; }
    ctx->pc = 0x199A38u;
    // 0x199a38: 0x8e020038
    ctx->pc = 0x199a38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x199a3c: 0x8e09001c
    ctx->pc = 0x199a3cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x199a40: 0x21a02
    ctx->pc = 0x199a40u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 8));
    // 0x199a44: 0x3056007f
    ctx->pc = 0x199a44u;
    SET_GPR_U32(ctx, 22, AND32(GPR_U32(ctx, 2), 127));
    // 0x199a48: 0x21402
    ctx->pc = 0x199a48u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 16));
    // 0x199a4c: 0x3063000f
    ctx->pc = 0x199a4cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 15));
    // 0x199a50: 0x30420003
    ctx->pc = 0x199a50u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
    // 0x199a54: 0x8e050024
    ctx->pc = 0x199a54u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x199a58: 0x431021
    ctx->pc = 0x199a58u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x199a5c: 0x8e0a0028
    ctx->pc = 0x199a5cu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x199a60: 0x22100
    ctx->pc = 0x199a60u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 4));
    // 0x199a64: 0x8e080000
    ctx->pc = 0x199a64u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x199a68: 0xa2a821
    ctx->pc = 0x199a68u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x199a6c: 0x1249023
    ctx->pc = 0x199a6cu;
    SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x199a70: 0x35530100
    ctx->pc = 0x199a70u;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 10), 256));
    // 0x199a74: 0x248102b
    ctx->pc = 0x199a74u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x199a78: 0x10400029
    ctx->pc = 0x199A78u;
    {
        const bool branch_taken_0x199a78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x199A7Cu;
        SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 16), 32)));
        if (branch_taken_0x199a78) {
            ctx->pc = 0x199B20u;
            goto label_199b20;
        }
    }
    ctx->pc = 0x199A80u;
    // 0x199a80: 0x8e060008
    ctx->pc = 0x199a80u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x199a84: 0x3c070fff
    ctx->pc = 0x199a84u;
    SET_GPR_U32(ctx, 7, ((uint32_t)4095 << 16));
    // 0x199a88: 0x8e030004
    ctx->pc = 0x199a88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x199a8c: 0x1121023
    ctx->pc = 0x199a8cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x199a90: 0x62ac0
    ctx->pc = 0x199a90u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 11));
    // 0x199a94: 0x34e7ffff
    ctx->pc = 0x199a94u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x199a98: 0x2a902
    ctx->pc = 0x199a98u;
    SET_GPR_U32(ctx, 21, SRL32(GPR_U32(ctx, 2), 4));
    // 0x199a9c: 0x67a024
    ctx->pc = 0x199a9cu;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x199aa0: 0x2459021
    ctx->pc = 0x199aa0u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x199aa4: 0x11280005
    ctx->pc = 0x199AA4u;
    {
        const bool branch_taken_0x199aa4 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 8));
        ctx->pc = 0x199AA8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x199aa4) {
            ctx->pc = 0x199ABCu;
            goto label_199abc;
        }
    }
    ctx->pc = 0x199AACu;
    // 0x199aac: 0x1051021
    ctx->pc = 0x199aacu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x199ab0: 0x24040003
    ctx->pc = 0x199ab0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x199ab4: 0x1221026
    ctx->pc = 0x199ab4u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x199ab8: 0x2200a
    ctx->pc = 0x199ab8u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 0));
label_199abc:
    // 0x199abc: 0x8e02000c
    ctx->pc = 0x199abcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x199ac0: 0x1471824
    ctx->pc = 0x199ac0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x199ac4: 0x42700
    ctx->pc = 0x199ac4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 28));
    // 0x199ac8: 0x50c00001
    ctx->pc = 0x199AC8u;
    {
        const bool branch_taken_0x199ac8 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x199ac8) {
            ctx->pc = 0x199ACCu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x199AD0u;
            goto label_199ad0;
        }
    }
    ctx->pc = 0x199AD0u;
label_199ad0:
    // 0x199ad0: 0xc21023
    ctx->pc = 0x199ad0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x199ad4: 0x641825
    ctx->pc = 0x199ad4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x199ad8: 0x46001a
    ctx->pc = 0x199ad8u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x199adc: 0x1010
    ctx->pc = 0x199adcu;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x199ae0: 0x4400009
    ctx->pc = 0x199AE0u;
    {
        const bool branch_taken_0x199ae0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x199AE4u;
        SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 3), 256));
        if (branch_taken_0x199ae0) {
            ctx->pc = 0x199B08u;
            goto label_199b08;
        }
    }
    ctx->pc = 0x199AE8u;
    // 0x199ae8: 0x50c00001
    ctx->pc = 0x199AE8u;
    {
        const bool branch_taken_0x199ae8 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x199ae8) {
            ctx->pc = 0x199AECu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x199AF0u;
            goto label_199af0;
        }
    }
    ctx->pc = 0x199AF0u;
label_199af0:
    // 0x199af0: 0x8e030010
    ctx->pc = 0x199af0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x199af4: 0x43102a
    ctx->pc = 0x199af4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x199af8: 0x54400043
    ctx->pc = 0x199AF8u;
    {
        const bool branch_taken_0x199af8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x199af8) {
            ctx->pc = 0x199AFCu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->pc = 0x199C08u;
            goto label_199c08;
        }
    }
    ctx->pc = 0x199B00u;
    // 0x199b00: 0x10000003
    ctx->pc = 0x199B00u;
    {
        const bool branch_taken_0x199b00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x199B04u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 4294967295));
        if (branch_taken_0x199b00) {
            ctx->pc = 0x199B10u;
            goto label_199b10;
        }
    }
    ctx->pc = 0x199B08u;
label_199b08:
    // 0x199b08: 0x8e030010
    ctx->pc = 0x199b08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x199b0c: 0x24c2ffff
    ctx->pc = 0x199b0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 4294967295));
label_199b10:
    // 0x199b10: 0x24630001
    ctx->pc = 0x199b10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x199b14: 0xae02000c
    ctx->pc = 0x199b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x199b18: 0x1000003a
    ctx->pc = 0x199B18u;
    {
        const bool branch_taken_0x199b18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x199B1Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        if (branch_taken_0x199b18) {
            ctx->pc = 0x199C04u;
            goto label_199c04;
        }
    }
    ctx->pc = 0x199B20u;
label_199b20:
    // 0x199b20: 0x120282d
    ctx->pc = 0x199b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199b24: 0xc066496
    ctx->pc = 0x199B24u;
    SET_GPR_U32(ctx, 31, 0x199B2Cu);
    ctx->pc = 0x199B28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x199258u;
    {
        const uint32_t __entryPc = ctx->pc;
        getFIFOindex_0x199258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199B2Cu; }
        else if (ctx->pc != 0x199B2Cu) { ctx->pc = 0x199B2Cu; }
    }
    if (ctx->pc != 0x199B2Cu) { return; }
    ctx->pc = 0x199B2Cu;
    // 0x199b2c: 0x40882d
    ctx->pc = 0x199b2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199b30: 0x200202d
    ctx->pc = 0x199b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199b34: 0xc066496
    ctx->pc = 0x199B34u;
    SET_GPR_U32(ctx, 31, 0x199B3Cu);
    ctx->pc = 0x199B38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x199258u;
    {
        const uint32_t __entryPc = ctx->pc;
        getFIFOindex_0x199258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199B3Cu; }
        else if (ctx->pc != 0x199B3Cu) { ctx->pc = 0x199B3Cu; }
    }
    if (ctx->pc != 0x199B3Cu) { return; }
    ctx->pc = 0x199B3Cu;
    // 0x199b3c: 0x40702d
    ctx->pc = 0x199b3cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199b40: 0x122e0030
    ctx->pc = 0x199B40u;
    {
        const bool branch_taken_0x199b40 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 14));
        ctx->pc = 0x199B44u;
        SET_GPR_U32(ctx, 9, ((uint32_t)4095 << 16));
        if (branch_taken_0x199b40) {
            ctx->pc = 0x199C04u;
            goto label_199c04;
        }
    }
    ctx->pc = 0x199B48u;
    // 0x199b48: 0x8e0c0008
    ctx->pc = 0x199b48u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x199b4c: 0x8e080000
    ctx->pc = 0x199b4cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x199b50: 0x240b0003
    ctx->pc = 0x199b50u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 3));
    // 0x199b54: 0x8e02001c
    ctx->pc = 0x199b54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x199b58: 0xc1ac0
    ctx->pc = 0x199b58u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 12), 11));
    // 0x199b5c: 0x50600001
    ctx->pc = 0x199B5Cu;
    {
        const bool branch_taken_0x199b5c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x199b5c) {
            ctx->pc = 0x199B60u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x199B64u;
            goto label_199b64;
        }
    }
    ctx->pc = 0x199B64u;
label_199b64:
    // 0x199b64: 0x1cc3821
    ctx->pc = 0x199b64u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x199b68: 0x481023
    ctx->pc = 0x199b68u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x199b6c: 0x8e04000c
    ctx->pc = 0x199b6cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x199b70: 0x43001b
    ctx->pc = 0x199b70u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 2) / divisor; ctx->hi = GPR_U32(ctx, 3) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,2); } }
    // 0x199b74: 0x8e0d0010
    ctx->pc = 0x199b74u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x199b78: 0xe43823
    ctx->pc = 0x199b78u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x199b7c: 0x111ac0
    ctx->pc = 0x199b7cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 11));
    // 0x199b80: 0x8d1021
    ctx->pc = 0x199b80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x199b84: 0x1031821
    ctx->pc = 0x199b84u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x199b88: 0x3529ffff
    ctx->pc = 0x199b88u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 65535));
    // 0x199b8c: 0x8e040028
    ctx->pc = 0x199b8cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x199b90: 0x721823
    ctx->pc = 0x199b90u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x199b94: 0x8e0a0004
    ctx->pc = 0x199b94u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x199b98: 0x3a902
    ctx->pc = 0x199b98u;
    SET_GPR_U32(ctx, 21, SRL32(GPR_U32(ctx, 3), 4));
    // 0x199b9c: 0x892024
    ctx->pc = 0x199b9cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x199ba0: 0x2810
    ctx->pc = 0x199ba0u;
    SET_GPR_U32(ctx, 5, ctx->hi);
    // 0x199ba4: 0x4c001a
    ctx->pc = 0x199ba4u;
    { int32_t divisor = GPR_S32(ctx, 12);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x199ba8: 0x1052821
    ctx->pc = 0x199ba8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x199bac: 0x111100
    ctx->pc = 0x199bacu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 4));
    // 0x199bb0: 0x4a1021
    ctx->pc = 0x199bb0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x199bb4: 0x49a024
    ctx->pc = 0x199bb4u;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x199bb8: 0x3010
    ctx->pc = 0x199bb8u;
    SET_GPR_U32(ctx, 6, ctx->hi);
    // 0x199bbc: 0xec001a
    ctx->pc = 0x199bbcu;
    { int32_t divisor = GPR_S32(ctx, 12);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x199bc0: 0x632c0
    ctx->pc = 0x199bc0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 11));
    // 0x199bc4: 0x1064021
    ctx->pc = 0x199bc4u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x199bc8: 0xa82826
    ctx->pc = 0x199bc8u;
    SET_GPR_U32(ctx, 5, XOR32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x199bcc: 0x5580a
    ctx->pc = 0x199bccu;
    if (GPR_U32(ctx, 5) == 0) SET_GPR_U32(ctx, 11, GPR_U32(ctx, 0));
    // 0x199bd0: 0xb5f00
    ctx->pc = 0x199bd0u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 28));
    // 0x199bd4: 0x8b2025
    ctx->pc = 0x199bd4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x199bd8: 0x1010
    ctx->pc = 0x199bd8u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x199bdc: 0x4400006
    ctx->pc = 0x199BDCu;
    {
        const bool branch_taken_0x199bdc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x199BE0u;
        SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 4), 256));
        if (branch_taken_0x199bdc) {
            ctx->pc = 0x199BF8u;
            goto label_199bf8;
        }
    }
    ctx->pc = 0x199BE4u;
    // 0x199be4: 0x51800001
    ctx->pc = 0x199BE4u;
    {
        const bool branch_taken_0x199be4 = (GPR_U32(ctx, 12) == GPR_U32(ctx, 0));
        if (branch_taken_0x199be4) {
            ctx->pc = 0x199BE8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x199BECu;
            goto label_199bec;
        }
    }
    ctx->pc = 0x199BECu;
label_199bec:
    // 0x199bec: 0x4d102a
    ctx->pc = 0x199becu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 13)));
    // 0x199bf0: 0x54400005
    ctx->pc = 0x199BF0u;
    {
        const bool branch_taken_0x199bf0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x199bf0) {
            ctx->pc = 0x199BF4u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->pc = 0x199C08u;
            goto label_199c08;
        }
    }
    ctx->pc = 0x199BF8u;
label_199bf8:
    // 0x199bf8: 0x25a20001
    ctx->pc = 0x199bf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 13), 1));
    // 0x199bfc: 0xae0e000c
    ctx->pc = 0x199bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 14));
    // 0x199c00: 0xae020010
    ctx->pc = 0x199c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_199c04:
    // 0x199c04: 0x8e03002c
    ctx->pc = 0x199c04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_199c08:
    // 0x199c08: 0x5060000e
    ctx->pc = 0x199C08u;
    {
        const bool branch_taken_0x199c08 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x199c08) {
            ctx->pc = 0x199C0Cu;
            SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
            ctx->pc = 0x199C44u;
            goto label_199c44;
        }
    }
    ctx->pc = 0x199C10u;
    // 0x199c10: 0x8e020030
    ctx->pc = 0x199c10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x199c14: 0x1040000a
    ctx->pc = 0x199C14u;
    {
        const bool branch_taken_0x199c14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x199C18u;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x199c14) {
            ctx->pc = 0x199C40u;
            goto label_199c40;
        }
    }
    ctx->pc = 0x199C1Cu;
    // 0x199c1c: 0x3c041000
    ctx->pc = 0x199c1cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x199c20: 0x3442b010
    ctx->pc = 0x199c20u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 45072));
    // 0x199c24: 0x3484b020
    ctx->pc = 0x199c24u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 45088));
    // 0x199c28: 0xac430000
    ctx->pc = 0x199c28u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x199c2c: 0x8e030030
    ctx->pc = 0x199c2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x199c30: 0xac830000
    ctx->pc = 0x199c30u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x199c34: 0x8e040034
    ctx->pc = 0x199c34u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x199c38: 0xc0664aa
    ctx->pc = 0x199C38u;
    SET_GPR_U32(ctx, 31, 0x199C40u);
    ctx->pc = 0x199C3Cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 256));
    ctx->pc = 0x1992A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        setD3_CHCR_0x1992a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199C40u; }
        else if (ctx->pc != 0x199C40u) { ctx->pc = 0x199C40u; }
    }
    if (ctx->pc != 0x199C40u) { return; }
    ctx->pc = 0x199C40u;
label_199c40:
    // 0x199c40: 0x3c031000
    ctx->pc = 0x199c40u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
label_199c44:
    // 0x199c44: 0x34632010
    ctx->pc = 0x199c44u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8208));
label_199c48:
    // 0x199c48: 0x8c620000
    ctx->pc = 0x199c48u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x199c4c: 0x0
    ctx->pc = 0x199c4cu;
    // NOP
    // 0x199c50: 0x0
    ctx->pc = 0x199c50u;
    // NOP
    // 0x199c54: 0x0
    ctx->pc = 0x199c54u;
    // NOP
    // 0x199c58: 0x0
    ctx->pc = 0x199c58u;
    // NOP
    // 0x199c5c: 0x440fffa
    ctx->pc = 0x199C5Cu;
    {
        const bool branch_taken_0x199c5c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x199c5c) {
            ctx->pc = 0x199C48u;
            goto label_199c48;
        }
    }
    ctx->pc = 0x199C64u;
    // 0x199c64: 0x3c021000
    ctx->pc = 0x199c64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x199c68: 0x3c031000
    ctx->pc = 0x199c68u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x199c6c: 0x34422000
    ctx->pc = 0x199c6cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8192));
    // 0x199c70: 0x34632010
    ctx->pc = 0x199c70u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8208));
    // 0x199c74: 0xac560000
    ctx->pc = 0x199c74u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22)); // MMIO: 0x10000000
label_199c78:
    // 0x199c78: 0x8c620000
    ctx->pc = 0x199c78u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x199c7c: 0x0
    ctx->pc = 0x199c7cu;
    // NOP
    // 0x199c80: 0x0
    ctx->pc = 0x199c80u;
    // NOP
    // 0x199c84: 0x0
    ctx->pc = 0x199c84u;
    // NOP
    // 0x199c88: 0x0
    ctx->pc = 0x199c88u;
    // NOP
    // 0x199c8c: 0x440fffa
    ctx->pc = 0x199C8Cu;
    {
        const bool branch_taken_0x199c8c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x199c8c) {
            ctx->pc = 0x199C78u;
            goto label_199c78;
        }
    }
    ctx->pc = 0x199C94u;
    // 0x199c94: 0x3c031000
    ctx->pc = 0x199c94u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x199c98: 0x3c041000
    ctx->pc = 0x199c98u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x199c9c: 0x3463b410
    ctx->pc = 0x199c9cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 46096));
    // 0x199ca0: 0x3484b430
    ctx->pc = 0x199ca0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 46128));
    // 0x199ca4: 0xac720000
    ctx->pc = 0x199ca4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18)); // MMIO: 0x10000000
    // 0x199ca8: 0x3c021000
    ctx->pc = 0x199ca8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x199cac: 0xac940000
    ctx->pc = 0x199cacu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 20)); // MMIO: 0x10000000
    // 0x199cb0: 0x3442b420
    ctx->pc = 0x199cb0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46112));
    // 0x199cb4: 0xac550000
    ctx->pc = 0x199cb4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21)); // MMIO: 0x10000000
    // 0x199cb8: 0x8e030010
    ctx->pc = 0x199cb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x199cbc: 0x50600004
    ctx->pc = 0x199CBCu;
    {
        const bool branch_taken_0x199cbc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x199cbc) {
            ctx->pc = 0x199CC0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->pc = 0x199CD0u;
            goto label_199cd0;
        }
    }
    ctx->pc = 0x199CC4u;
    // 0x199cc4: 0xc0664c4
    ctx->pc = 0x199CC4u;
    SET_GPR_U32(ctx, 31, 0x199CCCu);
    ctx->pc = 0x199CC8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x199310u;
    {
        const uint32_t __entryPc = ctx->pc;
        setD4_CHCR_0x199310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199CCCu; }
        else if (ctx->pc != 0x199CCCu) { ctx->pc = 0x199CCCu; }
    }
    if (ctx->pc != 0x199CCCu) { return; }
    ctx->pc = 0x199CCCu;
    // 0x199ccc: 0x8e02003c
    ctx->pc = 0x199cccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_199cd0:
    // 0x199cd0: 0x3c031000
    ctx->pc = 0x199cd0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x199cd4: 0x34632010
    ctx->pc = 0x199cd4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8208));
    // 0x199cd8: 0x24040001
    ctx->pc = 0x199cd8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x199cdc: 0xac620000
    ctx->pc = 0x199cdcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x199ce0: 0xae040044
    ctx->pc = 0x199ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 4));
    // 0x199ce4: 0xc055240
    ctx->pc = 0x199CE4u;
    SET_GPR_U32(ctx, 31, 0x199CECu);
    ctx->pc = 0x199CE8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x154900u;
    {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x154900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199CECu; }
        else if (ctx->pc != 0x199CECu) { ctx->pc = 0x199CECu; }
    }
    if (ctx->pc != 0x199CECu) { return; }
    ctx->pc = 0x199CECu;
    // 0x199cec: 0xdfbf0070
    ctx->pc = 0x199cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x199cf0: 0x24020001
    ctx->pc = 0x199cf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x199cf4: 0xdfb60060
    ctx->pc = 0x199cf4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x199cf8: 0xdfb50050
    ctx->pc = 0x199cf8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x199cfc: 0xdfb40040
    ctx->pc = 0x199cfcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x199d00: 0xdfb30030
    ctx->pc = 0x199d00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x199d04: 0xdfb20020
    ctx->pc = 0x199d04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199d08: 0xdfb10010
    ctx->pc = 0x199d08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199d0c: 0xdfb00000
    ctx->pc = 0x199d0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199d10: 0x3e00008
    ctx->pc = 0x199D10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199D14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x199ABCu: goto label_199abc;
            case 0x199AD0u: goto label_199ad0;
            case 0x199AF0u: goto label_199af0;
            case 0x199B08u: goto label_199b08;
            case 0x199B10u: goto label_199b10;
            case 0x199B20u: goto label_199b20;
            case 0x199B64u: goto label_199b64;
            case 0x199BECu: goto label_199bec;
            case 0x199BF8u: goto label_199bf8;
            case 0x199C04u: goto label_199c04;
            case 0x199C08u: goto label_199c08;
            case 0x199C40u: goto label_199c40;
            case 0x199C44u: goto label_199c44;
            case 0x199C48u: goto label_199c48;
            case 0x199C78u: goto label_199c78;
            case 0x199CD0u: goto label_199cd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x199D18u;
}
