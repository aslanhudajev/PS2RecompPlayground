#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_InsertSilence
// Address: 0x172a30 - 0x172bd4
void ADXT_InsertSilence_0x172a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_InsertSilence");


    ctx->pc = 0x172a30u;

label_172a30:
    // 0x172a30: 0x27bdff70
    ctx->pc = 0x172a30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
label_172a34:
    // 0x172a34: 0xffbf0080
    ctx->pc = 0x172a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_172a38:
    // 0x172a38: 0xffb40060
    ctx->pc = 0x172a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_172a3c:
    // 0x172a3c: 0xffb30050
    ctx->pc = 0x172a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_172a40:
    // 0x172a40: 0xffb20040
    ctx->pc = 0x172a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_172a44:
    // 0x172a44: 0xffb10030
    ctx->pc = 0x172a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_172a48:
    // 0x172a48: 0xffb00020
    ctx->pc = 0x172a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_172a4c:
    // 0x172a4c: 0xffb50070
    ctx->pc = 0x172a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_172a50:
    // 0x172a50: 0x8c950014
    ctx->pc = 0x172a50u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_172a54:
    // 0x172a54: 0x16a00003
label_172a58:
    if (ctx->pc == 0x172A58u) {
        ctx->pc = 0x172A58u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 18));
        ctx->pc = 0x172A5Cu;
        goto label_172a5c;
    }
    ctx->pc = 0x172A54u;
    {
        const bool branch_taken_0x172a54 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        ctx->pc = 0x172A58u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 18));
        if (branch_taken_0x172a54) {
            ctx->pc = 0x172A64u;
            goto label_172a64;
        }
    }
    ctx->pc = 0x172A5Cu;
label_172a5c:
    // 0x172a5c: 0x10000054
label_172a60:
    if (ctx->pc == 0x172A60u) {
        ctx->pc = 0x172A60u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172A64u;
        goto label_172a64;
    }
    ctx->pc = 0x172A5Cu;
    {
        const bool branch_taken_0x172a5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x172A60u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x172a5c) {
            ctx->pc = 0x172BB0u;
            goto label_172bb0;
        }
    }
    ctx->pc = 0x172A64u;
label_172a64:
    // 0x172a64: 0x2402ffff
    ctx->pc = 0x172a64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_172a68:
    // 0x172a68: 0xb18818
    ctx->pc = 0x172a68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)(uint32_t)result); }
label_172a6c:
    // 0x172a6c: 0x46102a
    ctx->pc = 0x172a6cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 6)));
label_172a70:
    // 0x172a70: 0x24d0001f
    ctx->pc = 0x172a70u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 6), 31));
label_172a74:
    // 0x172a74: 0x8ea30000
    ctx->pc = 0x172a74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_172a78:
    // 0x172a78: 0xc2800b
    ctx->pc = 0x172a78u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 6));
label_172a7c:
    // 0x172a7c: 0x2a0202d
    ctx->pc = 0x172a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_172a80:
    // 0x172a80: 0x108143
    ctx->pc = 0x172a80u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 5));
label_172a84:
    // 0x172a84: 0x8c680018
    ctx->pc = 0x172a84u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_172a88:
    // 0x172a88: 0x2118018
    ctx->pc = 0x172a88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)(uint32_t)result); }
label_172a8c:
    // 0x172a8c: 0x282d
    ctx->pc = 0x172a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172a90:
    // 0x172a90: 0x3a0382d
    ctx->pc = 0x172a90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_172a94:
    // 0x172a94: 0x100f809
label_172a98:
    if (ctx->pc == 0x172A98u) {
        ctx->pc = 0x172A98u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172A9Cu;
        goto label_172a9c;
    }
    ctx->pc = 0x172A94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x172A9Cu);
        ctx->pc = 0x172A98u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172A30u: goto label_172a30;
            case 0x172A34u: goto label_172a34;
            case 0x172A38u: goto label_172a38;
            case 0x172A3Cu: goto label_172a3c;
            case 0x172A40u: goto label_172a40;
            case 0x172A44u: goto label_172a44;
            case 0x172A48u: goto label_172a48;
            case 0x172A4Cu: goto label_172a4c;
            case 0x172A50u: goto label_172a50;
            case 0x172A54u: goto label_172a54;
            case 0x172A58u: goto label_172a58;
            case 0x172A5Cu: goto label_172a5c;
            case 0x172A60u: goto label_172a60;
            case 0x172A64u: goto label_172a64;
            case 0x172A68u: goto label_172a68;
            case 0x172A6Cu: goto label_172a6c;
            case 0x172A70u: goto label_172a70;
            case 0x172A74u: goto label_172a74;
            case 0x172A78u: goto label_172a78;
            case 0x172A7Cu: goto label_172a7c;
            case 0x172A80u: goto label_172a80;
            case 0x172A84u: goto label_172a84;
            case 0x172A88u: goto label_172a88;
            case 0x172A8Cu: goto label_172a8c;
            case 0x172A90u: goto label_172a90;
            case 0x172A94u: goto label_172a94;
            case 0x172A98u: goto label_172a98;
            case 0x172A9Cu: goto label_172a9c;
            case 0x172AA0u: goto label_172aa0;
            case 0x172AA4u: goto label_172aa4;
            case 0x172AA8u: goto label_172aa8;
            case 0x172AACu: goto label_172aac;
            case 0x172AB0u: goto label_172ab0;
            case 0x172AB4u: goto label_172ab4;
            case 0x172AB8u: goto label_172ab8;
            case 0x172ABCu: goto label_172abc;
            case 0x172AC0u: goto label_172ac0;
            case 0x172AC4u: goto label_172ac4;
            case 0x172AC8u: goto label_172ac8;
            case 0x172ACCu: goto label_172acc;
            case 0x172AD0u: goto label_172ad0;
            case 0x172AD4u: goto label_172ad4;
            case 0x172AD8u: goto label_172ad8;
            case 0x172ADCu: goto label_172adc;
            case 0x172AE0u: goto label_172ae0;
            case 0x172AE4u: goto label_172ae4;
            case 0x172AE8u: goto label_172ae8;
            case 0x172AECu: goto label_172aec;
            case 0x172AF0u: goto label_172af0;
            case 0x172AF4u: goto label_172af4;
            case 0x172AF8u: goto label_172af8;
            case 0x172AFCu: goto label_172afc;
            case 0x172B00u: goto label_172b00;
            case 0x172B04u: goto label_172b04;
            case 0x172B08u: goto label_172b08;
            case 0x172B0Cu: goto label_172b0c;
            case 0x172B10u: goto label_172b10;
            case 0x172B14u: goto label_172b14;
            case 0x172B18u: goto label_172b18;
            case 0x172B1Cu: goto label_172b1c;
            case 0x172B20u: goto label_172b20;
            case 0x172B24u: goto label_172b24;
            case 0x172B28u: goto label_172b28;
            case 0x172B2Cu: goto label_172b2c;
            case 0x172B30u: goto label_172b30;
            case 0x172B34u: goto label_172b34;
            case 0x172B38u: goto label_172b38;
            case 0x172B3Cu: goto label_172b3c;
            case 0x172B40u: goto label_172b40;
            case 0x172B44u: goto label_172b44;
            case 0x172B48u: goto label_172b48;
            case 0x172B4Cu: goto label_172b4c;
            case 0x172B50u: goto label_172b50;
            case 0x172B54u: goto label_172b54;
            case 0x172B58u: goto label_172b58;
            case 0x172B5Cu: goto label_172b5c;
            case 0x172B60u: goto label_172b60;
            case 0x172B64u: goto label_172b64;
            case 0x172B68u: goto label_172b68;
            case 0x172B6Cu: goto label_172b6c;
            case 0x172B70u: goto label_172b70;
            case 0x172B74u: goto label_172b74;
            case 0x172B78u: goto label_172b78;
            case 0x172B7Cu: goto label_172b7c;
            case 0x172B80u: goto label_172b80;
            case 0x172B84u: goto label_172b84;
            case 0x172B88u: goto label_172b88;
            case 0x172B8Cu: goto label_172b8c;
            case 0x172B90u: goto label_172b90;
            case 0x172B94u: goto label_172b94;
            case 0x172B98u: goto label_172b98;
            case 0x172B9Cu: goto label_172b9c;
            case 0x172BA0u: goto label_172ba0;
            case 0x172BA4u: goto label_172ba4;
            case 0x172BA8u: goto label_172ba8;
            case 0x172BACu: goto label_172bac;
            case 0x172BB0u: goto label_172bb0;
            case 0x172BB4u: goto label_172bb4;
            case 0x172BB8u: goto label_172bb8;
            case 0x172BBCu: goto label_172bbc;
            case 0x172BC0u: goto label_172bc0;
            case 0x172BC4u: goto label_172bc4;
            case 0x172BC8u: goto label_172bc8;
            case 0x172BCCu: goto label_172bcc;
            case 0x172BD0u: goto label_172bd0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x172A9Cu; }
            if (ctx->pc != 0x172A9Cu) { return; }
        }
    }
    ctx->pc = 0x172A9Cu;
label_172a9c:
    // 0x172a9c: 0x8fa20004
    ctx->pc = 0x172a9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_172aa0:
    // 0x172aa0: 0x52200001
label_172aa4:
    if (ctx->pc == 0x172AA4u) {
        ctx->pc = 0x172AA4u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x172AA8u;
        goto label_172aa8;
    }
    ctx->pc = 0x172AA0u;
    {
        const bool branch_taken_0x172aa0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x172aa0) {
            ctx->pc = 0x172AA4u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x172AA8u;
            goto label_172aa8;
        }
    }
    ctx->pc = 0x172AA8u;
label_172aa8:
    // 0x172aa8: 0x8fa40000
    ctx->pc = 0x172aa8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_172aac:
    // 0x172aac: 0x282d
    ctx->pc = 0x172aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172ab0:
    // 0x172ab0: 0x51001a
    ctx->pc = 0x172ab0u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_172ab4:
    // 0x172ab4: 0x1012
    ctx->pc = 0x172ab4u;
    SET_GPR_U32(ctx, 2, ctx->lo);
label_172ab8:
    // 0x172ab8: 0x51a018
    ctx->pc = 0x172ab8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)(uint32_t)result); }
label_172abc:
    // 0x172abc: 0x280302d
    ctx->pc = 0x172abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_172ac0:
    // 0x172ac0: 0xc050cfe
label_172ac4:
    if (ctx->pc == 0x172AC4u) {
        ctx->pc = 0x172AC4u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172AC8u;
        goto label_172ac8;
    }
    ctx->pc = 0x172AC0u;
    SET_GPR_U32(ctx, 31, 0x172AC8u);
    ctx->pc = 0x172AC4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172AC8u; }
        else if (ctx->pc != 0x172AC8u) { ctx->pc = 0x172AC8u; }
    }
    if (ctx->pc != 0x172AC8u) { return; }
    ctx->pc = 0x172AC8u;
label_172ac8:
    // 0x172ac8: 0x27b30010
    ctx->pc = 0x172ac8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 16));
label_172acc:
    // 0x172acc: 0x280282d
    ctx->pc = 0x172accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_172ad0:
    // 0x172ad0: 0x3a0202d
    ctx->pc = 0x172ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_172ad4:
    // 0x172ad4: 0x3a0302d
    ctx->pc = 0x172ad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_172ad8:
    // 0x172ad8: 0xc05f4b0
label_172adc:
    if (ctx->pc == 0x172ADCu) {
        ctx->pc = 0x172ADCu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172AE0u;
        goto label_172ae0;
    }
    ctx->pc = 0x172AD8u;
    SET_GPR_U32(ctx, 31, 0x172AE0u);
    ctx->pc = 0x172ADCu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17D2C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJ_SplitChunk_0x17d2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172AE0u; }
        else if (ctx->pc != 0x172AE0u) { ctx->pc = 0x172AE0u; }
    }
    if (ctx->pc != 0x172AE0u) { return; }
    ctx->pc = 0x172AE0u;
label_172ae0:
    // 0x172ae0: 0x8ea30000
    ctx->pc = 0x172ae0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_172ae4:
    // 0x172ae4: 0x2a0202d
    ctx->pc = 0x172ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_172ae8:
    // 0x172ae8: 0x24050001
    ctx->pc = 0x172ae8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_172aec:
    // 0x172aec: 0x8c620020
    ctx->pc = 0x172aecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_172af0:
    // 0x172af0: 0x40f809
label_172af4:
    if (ctx->pc == 0x172AF4u) {
        ctx->pc = 0x172AF4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172AF8u;
        goto label_172af8;
    }
    ctx->pc = 0x172AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x172AF8u);
        ctx->pc = 0x172AF4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172A30u: goto label_172a30;
            case 0x172A34u: goto label_172a34;
            case 0x172A38u: goto label_172a38;
            case 0x172A3Cu: goto label_172a3c;
            case 0x172A40u: goto label_172a40;
            case 0x172A44u: goto label_172a44;
            case 0x172A48u: goto label_172a48;
            case 0x172A4Cu: goto label_172a4c;
            case 0x172A50u: goto label_172a50;
            case 0x172A54u: goto label_172a54;
            case 0x172A58u: goto label_172a58;
            case 0x172A5Cu: goto label_172a5c;
            case 0x172A60u: goto label_172a60;
            case 0x172A64u: goto label_172a64;
            case 0x172A68u: goto label_172a68;
            case 0x172A6Cu: goto label_172a6c;
            case 0x172A70u: goto label_172a70;
            case 0x172A74u: goto label_172a74;
            case 0x172A78u: goto label_172a78;
            case 0x172A7Cu: goto label_172a7c;
            case 0x172A80u: goto label_172a80;
            case 0x172A84u: goto label_172a84;
            case 0x172A88u: goto label_172a88;
            case 0x172A8Cu: goto label_172a8c;
            case 0x172A90u: goto label_172a90;
            case 0x172A94u: goto label_172a94;
            case 0x172A98u: goto label_172a98;
            case 0x172A9Cu: goto label_172a9c;
            case 0x172AA0u: goto label_172aa0;
            case 0x172AA4u: goto label_172aa4;
            case 0x172AA8u: goto label_172aa8;
            case 0x172AACu: goto label_172aac;
            case 0x172AB0u: goto label_172ab0;
            case 0x172AB4u: goto label_172ab4;
            case 0x172AB8u: goto label_172ab8;
            case 0x172ABCu: goto label_172abc;
            case 0x172AC0u: goto label_172ac0;
            case 0x172AC4u: goto label_172ac4;
            case 0x172AC8u: goto label_172ac8;
            case 0x172ACCu: goto label_172acc;
            case 0x172AD0u: goto label_172ad0;
            case 0x172AD4u: goto label_172ad4;
            case 0x172AD8u: goto label_172ad8;
            case 0x172ADCu: goto label_172adc;
            case 0x172AE0u: goto label_172ae0;
            case 0x172AE4u: goto label_172ae4;
            case 0x172AE8u: goto label_172ae8;
            case 0x172AECu: goto label_172aec;
            case 0x172AF0u: goto label_172af0;
            case 0x172AF4u: goto label_172af4;
            case 0x172AF8u: goto label_172af8;
            case 0x172AFCu: goto label_172afc;
            case 0x172B00u: goto label_172b00;
            case 0x172B04u: goto label_172b04;
            case 0x172B08u: goto label_172b08;
            case 0x172B0Cu: goto label_172b0c;
            case 0x172B10u: goto label_172b10;
            case 0x172B14u: goto label_172b14;
            case 0x172B18u: goto label_172b18;
            case 0x172B1Cu: goto label_172b1c;
            case 0x172B20u: goto label_172b20;
            case 0x172B24u: goto label_172b24;
            case 0x172B28u: goto label_172b28;
            case 0x172B2Cu: goto label_172b2c;
            case 0x172B30u: goto label_172b30;
            case 0x172B34u: goto label_172b34;
            case 0x172B38u: goto label_172b38;
            case 0x172B3Cu: goto label_172b3c;
            case 0x172B40u: goto label_172b40;
            case 0x172B44u: goto label_172b44;
            case 0x172B48u: goto label_172b48;
            case 0x172B4Cu: goto label_172b4c;
            case 0x172B50u: goto label_172b50;
            case 0x172B54u: goto label_172b54;
            case 0x172B58u: goto label_172b58;
            case 0x172B5Cu: goto label_172b5c;
            case 0x172B60u: goto label_172b60;
            case 0x172B64u: goto label_172b64;
            case 0x172B68u: goto label_172b68;
            case 0x172B6Cu: goto label_172b6c;
            case 0x172B70u: goto label_172b70;
            case 0x172B74u: goto label_172b74;
            case 0x172B78u: goto label_172b78;
            case 0x172B7Cu: goto label_172b7c;
            case 0x172B80u: goto label_172b80;
            case 0x172B84u: goto label_172b84;
            case 0x172B88u: goto label_172b88;
            case 0x172B8Cu: goto label_172b8c;
            case 0x172B90u: goto label_172b90;
            case 0x172B94u: goto label_172b94;
            case 0x172B98u: goto label_172b98;
            case 0x172B9Cu: goto label_172b9c;
            case 0x172BA0u: goto label_172ba0;
            case 0x172BA4u: goto label_172ba4;
            case 0x172BA8u: goto label_172ba8;
            case 0x172BACu: goto label_172bac;
            case 0x172BB0u: goto label_172bb0;
            case 0x172BB4u: goto label_172bb4;
            case 0x172BB8u: goto label_172bb8;
            case 0x172BBCu: goto label_172bbc;
            case 0x172BC0u: goto label_172bc0;
            case 0x172BC4u: goto label_172bc4;
            case 0x172BC8u: goto label_172bc8;
            case 0x172BCCu: goto label_172bcc;
            case 0x172BD0u: goto label_172bd0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x172AF8u; }
            if (ctx->pc != 0x172AF8u) { return; }
        }
    }
    ctx->pc = 0x172AF8u;
label_172af8:
    // 0x172af8: 0x8ea30000
    ctx->pc = 0x172af8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_172afc:
    // 0x172afc: 0x2a0202d
    ctx->pc = 0x172afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_172b00:
    // 0x172b00: 0x282d
    ctx->pc = 0x172b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172b04:
    // 0x172b04: 0x8c62001c
    ctx->pc = 0x172b04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_172b08:
    // 0x172b08: 0x40f809
label_172b0c:
    if (ctx->pc == 0x172B0Cu) {
        ctx->pc = 0x172B0Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172B10u;
        goto label_172b10;
    }
    ctx->pc = 0x172B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x172B10u);
        ctx->pc = 0x172B0Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172A30u: goto label_172a30;
            case 0x172A34u: goto label_172a34;
            case 0x172A38u: goto label_172a38;
            case 0x172A3Cu: goto label_172a3c;
            case 0x172A40u: goto label_172a40;
            case 0x172A44u: goto label_172a44;
            case 0x172A48u: goto label_172a48;
            case 0x172A4Cu: goto label_172a4c;
            case 0x172A50u: goto label_172a50;
            case 0x172A54u: goto label_172a54;
            case 0x172A58u: goto label_172a58;
            case 0x172A5Cu: goto label_172a5c;
            case 0x172A60u: goto label_172a60;
            case 0x172A64u: goto label_172a64;
            case 0x172A68u: goto label_172a68;
            case 0x172A6Cu: goto label_172a6c;
            case 0x172A70u: goto label_172a70;
            case 0x172A74u: goto label_172a74;
            case 0x172A78u: goto label_172a78;
            case 0x172A7Cu: goto label_172a7c;
            case 0x172A80u: goto label_172a80;
            case 0x172A84u: goto label_172a84;
            case 0x172A88u: goto label_172a88;
            case 0x172A8Cu: goto label_172a8c;
            case 0x172A90u: goto label_172a90;
            case 0x172A94u: goto label_172a94;
            case 0x172A98u: goto label_172a98;
            case 0x172A9Cu: goto label_172a9c;
            case 0x172AA0u: goto label_172aa0;
            case 0x172AA4u: goto label_172aa4;
            case 0x172AA8u: goto label_172aa8;
            case 0x172AACu: goto label_172aac;
            case 0x172AB0u: goto label_172ab0;
            case 0x172AB4u: goto label_172ab4;
            case 0x172AB8u: goto label_172ab8;
            case 0x172ABCu: goto label_172abc;
            case 0x172AC0u: goto label_172ac0;
            case 0x172AC4u: goto label_172ac4;
            case 0x172AC8u: goto label_172ac8;
            case 0x172ACCu: goto label_172acc;
            case 0x172AD0u: goto label_172ad0;
            case 0x172AD4u: goto label_172ad4;
            case 0x172AD8u: goto label_172ad8;
            case 0x172ADCu: goto label_172adc;
            case 0x172AE0u: goto label_172ae0;
            case 0x172AE4u: goto label_172ae4;
            case 0x172AE8u: goto label_172ae8;
            case 0x172AECu: goto label_172aec;
            case 0x172AF0u: goto label_172af0;
            case 0x172AF4u: goto label_172af4;
            case 0x172AF8u: goto label_172af8;
            case 0x172AFCu: goto label_172afc;
            case 0x172B00u: goto label_172b00;
            case 0x172B04u: goto label_172b04;
            case 0x172B08u: goto label_172b08;
            case 0x172B0Cu: goto label_172b0c;
            case 0x172B10u: goto label_172b10;
            case 0x172B14u: goto label_172b14;
            case 0x172B18u: goto label_172b18;
            case 0x172B1Cu: goto label_172b1c;
            case 0x172B20u: goto label_172b20;
            case 0x172B24u: goto label_172b24;
            case 0x172B28u: goto label_172b28;
            case 0x172B2Cu: goto label_172b2c;
            case 0x172B30u: goto label_172b30;
            case 0x172B34u: goto label_172b34;
            case 0x172B38u: goto label_172b38;
            case 0x172B3Cu: goto label_172b3c;
            case 0x172B40u: goto label_172b40;
            case 0x172B44u: goto label_172b44;
            case 0x172B48u: goto label_172b48;
            case 0x172B4Cu: goto label_172b4c;
            case 0x172B50u: goto label_172b50;
            case 0x172B54u: goto label_172b54;
            case 0x172B58u: goto label_172b58;
            case 0x172B5Cu: goto label_172b5c;
            case 0x172B60u: goto label_172b60;
            case 0x172B64u: goto label_172b64;
            case 0x172B68u: goto label_172b68;
            case 0x172B6Cu: goto label_172b6c;
            case 0x172B70u: goto label_172b70;
            case 0x172B74u: goto label_172b74;
            case 0x172B78u: goto label_172b78;
            case 0x172B7Cu: goto label_172b7c;
            case 0x172B80u: goto label_172b80;
            case 0x172B84u: goto label_172b84;
            case 0x172B88u: goto label_172b88;
            case 0x172B8Cu: goto label_172b8c;
            case 0x172B90u: goto label_172b90;
            case 0x172B94u: goto label_172b94;
            case 0x172B98u: goto label_172b98;
            case 0x172B9Cu: goto label_172b9c;
            case 0x172BA0u: goto label_172ba0;
            case 0x172BA4u: goto label_172ba4;
            case 0x172BA8u: goto label_172ba8;
            case 0x172BACu: goto label_172bac;
            case 0x172BB0u: goto label_172bb0;
            case 0x172BB4u: goto label_172bb4;
            case 0x172BB8u: goto label_172bb8;
            case 0x172BBCu: goto label_172bbc;
            case 0x172BC0u: goto label_172bc0;
            case 0x172BC4u: goto label_172bc4;
            case 0x172BC8u: goto label_172bc8;
            case 0x172BCCu: goto label_172bcc;
            case 0x172BD0u: goto label_172bd0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x172B10u; }
            if (ctx->pc != 0x172B10u) { return; }
        }
    }
    ctx->pc = 0x172B10u;
label_172b10:
    // 0x172b10: 0x8ea70000
    ctx->pc = 0x172b10u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_172b14:
    // 0x172b14: 0x2123023
    ctx->pc = 0x172b14u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_172b18:
    // 0x172b18: 0x2a0202d
    ctx->pc = 0x172b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_172b1c:
    // 0x172b1c: 0x282d
    ctx->pc = 0x172b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172b20:
    // 0x172b20: 0x8ce30018
    ctx->pc = 0x172b20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_172b24:
    // 0x172b24: 0x60f809
label_172b28:
    if (ctx->pc == 0x172B28u) {
        ctx->pc = 0x172B28u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172B2Cu;
        goto label_172b2c;
    }
    ctx->pc = 0x172B24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x172B2Cu);
        ctx->pc = 0x172B28u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172A30u: goto label_172a30;
            case 0x172A34u: goto label_172a34;
            case 0x172A38u: goto label_172a38;
            case 0x172A3Cu: goto label_172a3c;
            case 0x172A40u: goto label_172a40;
            case 0x172A44u: goto label_172a44;
            case 0x172A48u: goto label_172a48;
            case 0x172A4Cu: goto label_172a4c;
            case 0x172A50u: goto label_172a50;
            case 0x172A54u: goto label_172a54;
            case 0x172A58u: goto label_172a58;
            case 0x172A5Cu: goto label_172a5c;
            case 0x172A60u: goto label_172a60;
            case 0x172A64u: goto label_172a64;
            case 0x172A68u: goto label_172a68;
            case 0x172A6Cu: goto label_172a6c;
            case 0x172A70u: goto label_172a70;
            case 0x172A74u: goto label_172a74;
            case 0x172A78u: goto label_172a78;
            case 0x172A7Cu: goto label_172a7c;
            case 0x172A80u: goto label_172a80;
            case 0x172A84u: goto label_172a84;
            case 0x172A88u: goto label_172a88;
            case 0x172A8Cu: goto label_172a8c;
            case 0x172A90u: goto label_172a90;
            case 0x172A94u: goto label_172a94;
            case 0x172A98u: goto label_172a98;
            case 0x172A9Cu: goto label_172a9c;
            case 0x172AA0u: goto label_172aa0;
            case 0x172AA4u: goto label_172aa4;
            case 0x172AA8u: goto label_172aa8;
            case 0x172AACu: goto label_172aac;
            case 0x172AB0u: goto label_172ab0;
            case 0x172AB4u: goto label_172ab4;
            case 0x172AB8u: goto label_172ab8;
            case 0x172ABCu: goto label_172abc;
            case 0x172AC0u: goto label_172ac0;
            case 0x172AC4u: goto label_172ac4;
            case 0x172AC8u: goto label_172ac8;
            case 0x172ACCu: goto label_172acc;
            case 0x172AD0u: goto label_172ad0;
            case 0x172AD4u: goto label_172ad4;
            case 0x172AD8u: goto label_172ad8;
            case 0x172ADCu: goto label_172adc;
            case 0x172AE0u: goto label_172ae0;
            case 0x172AE4u: goto label_172ae4;
            case 0x172AE8u: goto label_172ae8;
            case 0x172AECu: goto label_172aec;
            case 0x172AF0u: goto label_172af0;
            case 0x172AF4u: goto label_172af4;
            case 0x172AF8u: goto label_172af8;
            case 0x172AFCu: goto label_172afc;
            case 0x172B00u: goto label_172b00;
            case 0x172B04u: goto label_172b04;
            case 0x172B08u: goto label_172b08;
            case 0x172B0Cu: goto label_172b0c;
            case 0x172B10u: goto label_172b10;
            case 0x172B14u: goto label_172b14;
            case 0x172B18u: goto label_172b18;
            case 0x172B1Cu: goto label_172b1c;
            case 0x172B20u: goto label_172b20;
            case 0x172B24u: goto label_172b24;
            case 0x172B28u: goto label_172b28;
            case 0x172B2Cu: goto label_172b2c;
            case 0x172B30u: goto label_172b30;
            case 0x172B34u: goto label_172b34;
            case 0x172B38u: goto label_172b38;
            case 0x172B3Cu: goto label_172b3c;
            case 0x172B40u: goto label_172b40;
            case 0x172B44u: goto label_172b44;
            case 0x172B48u: goto label_172b48;
            case 0x172B4Cu: goto label_172b4c;
            case 0x172B50u: goto label_172b50;
            case 0x172B54u: goto label_172b54;
            case 0x172B58u: goto label_172b58;
            case 0x172B5Cu: goto label_172b5c;
            case 0x172B60u: goto label_172b60;
            case 0x172B64u: goto label_172b64;
            case 0x172B68u: goto label_172b68;
            case 0x172B6Cu: goto label_172b6c;
            case 0x172B70u: goto label_172b70;
            case 0x172B74u: goto label_172b74;
            case 0x172B78u: goto label_172b78;
            case 0x172B7Cu: goto label_172b7c;
            case 0x172B80u: goto label_172b80;
            case 0x172B84u: goto label_172b84;
            case 0x172B88u: goto label_172b88;
            case 0x172B8Cu: goto label_172b8c;
            case 0x172B90u: goto label_172b90;
            case 0x172B94u: goto label_172b94;
            case 0x172B98u: goto label_172b98;
            case 0x172B9Cu: goto label_172b9c;
            case 0x172BA0u: goto label_172ba0;
            case 0x172BA4u: goto label_172ba4;
            case 0x172BA8u: goto label_172ba8;
            case 0x172BACu: goto label_172bac;
            case 0x172BB0u: goto label_172bb0;
            case 0x172BB4u: goto label_172bb4;
            case 0x172BB8u: goto label_172bb8;
            case 0x172BBCu: goto label_172bbc;
            case 0x172BC0u: goto label_172bc0;
            case 0x172BC4u: goto label_172bc4;
            case 0x172BC8u: goto label_172bc8;
            case 0x172BCCu: goto label_172bcc;
            case 0x172BD0u: goto label_172bd0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x172B2Cu; }
            if (ctx->pc != 0x172B2Cu) { return; }
        }
    }
    ctx->pc = 0x172B2Cu;
label_172b2c:
    // 0x172b2c: 0x8fa20004
    ctx->pc = 0x172b2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_172b30:
    // 0x172b30: 0x52200001
label_172b34:
    if (ctx->pc == 0x172B34u) {
        ctx->pc = 0x172B34u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x172B38u;
        goto label_172b38;
    }
    ctx->pc = 0x172B30u;
    {
        const bool branch_taken_0x172b30 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x172b30) {
            ctx->pc = 0x172B34u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x172B38u;
            goto label_172b38;
        }
    }
    ctx->pc = 0x172B38u;
label_172b38:
    // 0x172b38: 0x8fa40000
    ctx->pc = 0x172b38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_172b3c:
    // 0x172b3c: 0x282d
    ctx->pc = 0x172b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172b40:
    // 0x172b40: 0x51001a
    ctx->pc = 0x172b40u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_172b44:
    // 0x172b44: 0x1012
    ctx->pc = 0x172b44u;
    SET_GPR_U32(ctx, 2, ctx->lo);
label_172b48:
    // 0x172b48: 0x51a018
    ctx->pc = 0x172b48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)(uint32_t)result); }
label_172b4c:
    // 0x172b4c: 0x280302d
    ctx->pc = 0x172b4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_172b50:
    // 0x172b50: 0xc050cfe
label_172b54:
    if (ctx->pc == 0x172B54u) {
        ctx->pc = 0x172B54u;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->pc = 0x172B58u;
        goto label_172b58;
    }
    ctx->pc = 0x172B50u;
    SET_GPR_U32(ctx, 31, 0x172B58u);
    ctx->pc = 0x172B54u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172B58u; }
        else if (ctx->pc != 0x172B58u) { ctx->pc = 0x172B58u; }
    }
    if (ctx->pc != 0x172B58u) { return; }
    ctx->pc = 0x172B58u;
label_172b58:
    // 0x172b58: 0x3a0202d
    ctx->pc = 0x172b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_172b5c:
    // 0x172b5c: 0x280282d
    ctx->pc = 0x172b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_172b60:
    // 0x172b60: 0x3a0302d
    ctx->pc = 0x172b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_172b64:
    // 0x172b64: 0xc05f4b0
label_172b68:
    if (ctx->pc == 0x172B68u) {
        ctx->pc = 0x172B68u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172B6Cu;
        goto label_172b6c;
    }
    ctx->pc = 0x172B64u;
    SET_GPR_U32(ctx, 31, 0x172B6Cu);
    ctx->pc = 0x172B68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17D2C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJ_SplitChunk_0x17d2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172B6Cu; }
        else if (ctx->pc != 0x172B6Cu) { ctx->pc = 0x172B6Cu; }
    }
    if (ctx->pc != 0x172B6Cu) { return; }
    ctx->pc = 0x172B6Cu;
label_172b6c:
    // 0x172b6c: 0x8ea30000
    ctx->pc = 0x172b6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_172b70:
    // 0x172b70: 0x2a0202d
    ctx->pc = 0x172b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_172b74:
    // 0x172b74: 0x24050001
    ctx->pc = 0x172b74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_172b78:
    // 0x172b78: 0x8c620020
    ctx->pc = 0x172b78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_172b7c:
    // 0x172b7c: 0x40f809
label_172b80:
    if (ctx->pc == 0x172B80u) {
        ctx->pc = 0x172B80u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172B84u;
        goto label_172b84;
    }
    ctx->pc = 0x172B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x172B84u);
        ctx->pc = 0x172B80u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172A30u: goto label_172a30;
            case 0x172A34u: goto label_172a34;
            case 0x172A38u: goto label_172a38;
            case 0x172A3Cu: goto label_172a3c;
            case 0x172A40u: goto label_172a40;
            case 0x172A44u: goto label_172a44;
            case 0x172A48u: goto label_172a48;
            case 0x172A4Cu: goto label_172a4c;
            case 0x172A50u: goto label_172a50;
            case 0x172A54u: goto label_172a54;
            case 0x172A58u: goto label_172a58;
            case 0x172A5Cu: goto label_172a5c;
            case 0x172A60u: goto label_172a60;
            case 0x172A64u: goto label_172a64;
            case 0x172A68u: goto label_172a68;
            case 0x172A6Cu: goto label_172a6c;
            case 0x172A70u: goto label_172a70;
            case 0x172A74u: goto label_172a74;
            case 0x172A78u: goto label_172a78;
            case 0x172A7Cu: goto label_172a7c;
            case 0x172A80u: goto label_172a80;
            case 0x172A84u: goto label_172a84;
            case 0x172A88u: goto label_172a88;
            case 0x172A8Cu: goto label_172a8c;
            case 0x172A90u: goto label_172a90;
            case 0x172A94u: goto label_172a94;
            case 0x172A98u: goto label_172a98;
            case 0x172A9Cu: goto label_172a9c;
            case 0x172AA0u: goto label_172aa0;
            case 0x172AA4u: goto label_172aa4;
            case 0x172AA8u: goto label_172aa8;
            case 0x172AACu: goto label_172aac;
            case 0x172AB0u: goto label_172ab0;
            case 0x172AB4u: goto label_172ab4;
            case 0x172AB8u: goto label_172ab8;
            case 0x172ABCu: goto label_172abc;
            case 0x172AC0u: goto label_172ac0;
            case 0x172AC4u: goto label_172ac4;
            case 0x172AC8u: goto label_172ac8;
            case 0x172ACCu: goto label_172acc;
            case 0x172AD0u: goto label_172ad0;
            case 0x172AD4u: goto label_172ad4;
            case 0x172AD8u: goto label_172ad8;
            case 0x172ADCu: goto label_172adc;
            case 0x172AE0u: goto label_172ae0;
            case 0x172AE4u: goto label_172ae4;
            case 0x172AE8u: goto label_172ae8;
            case 0x172AECu: goto label_172aec;
            case 0x172AF0u: goto label_172af0;
            case 0x172AF4u: goto label_172af4;
            case 0x172AF8u: goto label_172af8;
            case 0x172AFCu: goto label_172afc;
            case 0x172B00u: goto label_172b00;
            case 0x172B04u: goto label_172b04;
            case 0x172B08u: goto label_172b08;
            case 0x172B0Cu: goto label_172b0c;
            case 0x172B10u: goto label_172b10;
            case 0x172B14u: goto label_172b14;
            case 0x172B18u: goto label_172b18;
            case 0x172B1Cu: goto label_172b1c;
            case 0x172B20u: goto label_172b20;
            case 0x172B24u: goto label_172b24;
            case 0x172B28u: goto label_172b28;
            case 0x172B2Cu: goto label_172b2c;
            case 0x172B30u: goto label_172b30;
            case 0x172B34u: goto label_172b34;
            case 0x172B38u: goto label_172b38;
            case 0x172B3Cu: goto label_172b3c;
            case 0x172B40u: goto label_172b40;
            case 0x172B44u: goto label_172b44;
            case 0x172B48u: goto label_172b48;
            case 0x172B4Cu: goto label_172b4c;
            case 0x172B50u: goto label_172b50;
            case 0x172B54u: goto label_172b54;
            case 0x172B58u: goto label_172b58;
            case 0x172B5Cu: goto label_172b5c;
            case 0x172B60u: goto label_172b60;
            case 0x172B64u: goto label_172b64;
            case 0x172B68u: goto label_172b68;
            case 0x172B6Cu: goto label_172b6c;
            case 0x172B70u: goto label_172b70;
            case 0x172B74u: goto label_172b74;
            case 0x172B78u: goto label_172b78;
            case 0x172B7Cu: goto label_172b7c;
            case 0x172B80u: goto label_172b80;
            case 0x172B84u: goto label_172b84;
            case 0x172B88u: goto label_172b88;
            case 0x172B8Cu: goto label_172b8c;
            case 0x172B90u: goto label_172b90;
            case 0x172B94u: goto label_172b94;
            case 0x172B98u: goto label_172b98;
            case 0x172B9Cu: goto label_172b9c;
            case 0x172BA0u: goto label_172ba0;
            case 0x172BA4u: goto label_172ba4;
            case 0x172BA8u: goto label_172ba8;
            case 0x172BACu: goto label_172bac;
            case 0x172BB0u: goto label_172bb0;
            case 0x172BB4u: goto label_172bb4;
            case 0x172BB8u: goto label_172bb8;
            case 0x172BBCu: goto label_172bbc;
            case 0x172BC0u: goto label_172bc0;
            case 0x172BC4u: goto label_172bc4;
            case 0x172BC8u: goto label_172bc8;
            case 0x172BCCu: goto label_172bcc;
            case 0x172BD0u: goto label_172bd0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x172B84u; }
            if (ctx->pc != 0x172B84u) { return; }
        }
    }
    ctx->pc = 0x172B84u;
label_172b84:
    // 0x172b84: 0x8ea30000
    ctx->pc = 0x172b84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_172b88:
    // 0x172b88: 0x2a0202d
    ctx->pc = 0x172b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_172b8c:
    // 0x172b8c: 0x260302d
    ctx->pc = 0x172b8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_172b90:
    // 0x172b90: 0x8c62001c
    ctx->pc = 0x172b90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_172b94:
    // 0x172b94: 0x40f809
label_172b98:
    if (ctx->pc == 0x172B98u) {
        ctx->pc = 0x172B98u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172B9Cu;
        goto label_172b9c;
    }
    ctx->pc = 0x172B94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x172B9Cu);
        ctx->pc = 0x172B98u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172A30u: goto label_172a30;
            case 0x172A34u: goto label_172a34;
            case 0x172A38u: goto label_172a38;
            case 0x172A3Cu: goto label_172a3c;
            case 0x172A40u: goto label_172a40;
            case 0x172A44u: goto label_172a44;
            case 0x172A48u: goto label_172a48;
            case 0x172A4Cu: goto label_172a4c;
            case 0x172A50u: goto label_172a50;
            case 0x172A54u: goto label_172a54;
            case 0x172A58u: goto label_172a58;
            case 0x172A5Cu: goto label_172a5c;
            case 0x172A60u: goto label_172a60;
            case 0x172A64u: goto label_172a64;
            case 0x172A68u: goto label_172a68;
            case 0x172A6Cu: goto label_172a6c;
            case 0x172A70u: goto label_172a70;
            case 0x172A74u: goto label_172a74;
            case 0x172A78u: goto label_172a78;
            case 0x172A7Cu: goto label_172a7c;
            case 0x172A80u: goto label_172a80;
            case 0x172A84u: goto label_172a84;
            case 0x172A88u: goto label_172a88;
            case 0x172A8Cu: goto label_172a8c;
            case 0x172A90u: goto label_172a90;
            case 0x172A94u: goto label_172a94;
            case 0x172A98u: goto label_172a98;
            case 0x172A9Cu: goto label_172a9c;
            case 0x172AA0u: goto label_172aa0;
            case 0x172AA4u: goto label_172aa4;
            case 0x172AA8u: goto label_172aa8;
            case 0x172AACu: goto label_172aac;
            case 0x172AB0u: goto label_172ab0;
            case 0x172AB4u: goto label_172ab4;
            case 0x172AB8u: goto label_172ab8;
            case 0x172ABCu: goto label_172abc;
            case 0x172AC0u: goto label_172ac0;
            case 0x172AC4u: goto label_172ac4;
            case 0x172AC8u: goto label_172ac8;
            case 0x172ACCu: goto label_172acc;
            case 0x172AD0u: goto label_172ad0;
            case 0x172AD4u: goto label_172ad4;
            case 0x172AD8u: goto label_172ad8;
            case 0x172ADCu: goto label_172adc;
            case 0x172AE0u: goto label_172ae0;
            case 0x172AE4u: goto label_172ae4;
            case 0x172AE8u: goto label_172ae8;
            case 0x172AECu: goto label_172aec;
            case 0x172AF0u: goto label_172af0;
            case 0x172AF4u: goto label_172af4;
            case 0x172AF8u: goto label_172af8;
            case 0x172AFCu: goto label_172afc;
            case 0x172B00u: goto label_172b00;
            case 0x172B04u: goto label_172b04;
            case 0x172B08u: goto label_172b08;
            case 0x172B0Cu: goto label_172b0c;
            case 0x172B10u: goto label_172b10;
            case 0x172B14u: goto label_172b14;
            case 0x172B18u: goto label_172b18;
            case 0x172B1Cu: goto label_172b1c;
            case 0x172B20u: goto label_172b20;
            case 0x172B24u: goto label_172b24;
            case 0x172B28u: goto label_172b28;
            case 0x172B2Cu: goto label_172b2c;
            case 0x172B30u: goto label_172b30;
            case 0x172B34u: goto label_172b34;
            case 0x172B38u: goto label_172b38;
            case 0x172B3Cu: goto label_172b3c;
            case 0x172B40u: goto label_172b40;
            case 0x172B44u: goto label_172b44;
            case 0x172B48u: goto label_172b48;
            case 0x172B4Cu: goto label_172b4c;
            case 0x172B50u: goto label_172b50;
            case 0x172B54u: goto label_172b54;
            case 0x172B58u: goto label_172b58;
            case 0x172B5Cu: goto label_172b5c;
            case 0x172B60u: goto label_172b60;
            case 0x172B64u: goto label_172b64;
            case 0x172B68u: goto label_172b68;
            case 0x172B6Cu: goto label_172b6c;
            case 0x172B70u: goto label_172b70;
            case 0x172B74u: goto label_172b74;
            case 0x172B78u: goto label_172b78;
            case 0x172B7Cu: goto label_172b7c;
            case 0x172B80u: goto label_172b80;
            case 0x172B84u: goto label_172b84;
            case 0x172B88u: goto label_172b88;
            case 0x172B8Cu: goto label_172b8c;
            case 0x172B90u: goto label_172b90;
            case 0x172B94u: goto label_172b94;
            case 0x172B98u: goto label_172b98;
            case 0x172B9Cu: goto label_172b9c;
            case 0x172BA0u: goto label_172ba0;
            case 0x172BA4u: goto label_172ba4;
            case 0x172BA8u: goto label_172ba8;
            case 0x172BACu: goto label_172bac;
            case 0x172BB0u: goto label_172bb0;
            case 0x172BB4u: goto label_172bb4;
            case 0x172BB8u: goto label_172bb8;
            case 0x172BBCu: goto label_172bbc;
            case 0x172BC0u: goto label_172bc0;
            case 0x172BC4u: goto label_172bc4;
            case 0x172BC8u: goto label_172bc8;
            case 0x172BCCu: goto label_172bcc;
            case 0x172BD0u: goto label_172bd0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x172B9Cu; }
            if (ctx->pc != 0x172B9Cu) { return; }
        }
    }
    ctx->pc = 0x172B9Cu;
label_172b9c:
    // 0x172b9c: 0x251001a
    ctx->pc = 0x172b9cu;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_172ba0:
    // 0x172ba0: 0x52200001
label_172ba4:
    if (ctx->pc == 0x172BA4u) {
        ctx->pc = 0x172BA4u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x172BA8u;
        goto label_172ba8;
    }
    ctx->pc = 0x172BA0u;
    {
        const bool branch_taken_0x172ba0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x172ba0) {
            ctx->pc = 0x172BA4u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x172BA8u;
            goto label_172ba8;
        }
    }
    ctx->pc = 0x172BA8u;
label_172ba8:
    // 0x172ba8: 0x9012
    ctx->pc = 0x172ba8u;
    SET_GPR_U32(ctx, 18, ctx->lo);
label_172bac:
    // 0x172bac: 0x121140
    ctx->pc = 0x172bacu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 5));
label_172bb0:
    // 0x172bb0: 0xdfbf0080
    ctx->pc = 0x172bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_172bb4:
    // 0x172bb4: 0xdfb50070
    ctx->pc = 0x172bb4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_172bb8:
    // 0x172bb8: 0xdfb40060
    ctx->pc = 0x172bb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_172bbc:
    // 0x172bbc: 0xdfb30050
    ctx->pc = 0x172bbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_172bc0:
    // 0x172bc0: 0xdfb20040
    ctx->pc = 0x172bc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_172bc4:
    // 0x172bc4: 0xdfb10030
    ctx->pc = 0x172bc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_172bc8:
    // 0x172bc8: 0xdfb00020
    ctx->pc = 0x172bc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_172bcc:
    // 0x172bcc: 0x3e00008
label_172bd0:
    if (ctx->pc == 0x172BD0u) {
        ctx->pc = 0x172BD0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x172BD4u;
        goto label_fallthrough_0x172bcc;
    }
    ctx->pc = 0x172BCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172BD0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172A30u: goto label_172a30;
            case 0x172A34u: goto label_172a34;
            case 0x172A38u: goto label_172a38;
            case 0x172A3Cu: goto label_172a3c;
            case 0x172A40u: goto label_172a40;
            case 0x172A44u: goto label_172a44;
            case 0x172A48u: goto label_172a48;
            case 0x172A4Cu: goto label_172a4c;
            case 0x172A50u: goto label_172a50;
            case 0x172A54u: goto label_172a54;
            case 0x172A58u: goto label_172a58;
            case 0x172A5Cu: goto label_172a5c;
            case 0x172A60u: goto label_172a60;
            case 0x172A64u: goto label_172a64;
            case 0x172A68u: goto label_172a68;
            case 0x172A6Cu: goto label_172a6c;
            case 0x172A70u: goto label_172a70;
            case 0x172A74u: goto label_172a74;
            case 0x172A78u: goto label_172a78;
            case 0x172A7Cu: goto label_172a7c;
            case 0x172A80u: goto label_172a80;
            case 0x172A84u: goto label_172a84;
            case 0x172A88u: goto label_172a88;
            case 0x172A8Cu: goto label_172a8c;
            case 0x172A90u: goto label_172a90;
            case 0x172A94u: goto label_172a94;
            case 0x172A98u: goto label_172a98;
            case 0x172A9Cu: goto label_172a9c;
            case 0x172AA0u: goto label_172aa0;
            case 0x172AA4u: goto label_172aa4;
            case 0x172AA8u: goto label_172aa8;
            case 0x172AACu: goto label_172aac;
            case 0x172AB0u: goto label_172ab0;
            case 0x172AB4u: goto label_172ab4;
            case 0x172AB8u: goto label_172ab8;
            case 0x172ABCu: goto label_172abc;
            case 0x172AC0u: goto label_172ac0;
            case 0x172AC4u: goto label_172ac4;
            case 0x172AC8u: goto label_172ac8;
            case 0x172ACCu: goto label_172acc;
            case 0x172AD0u: goto label_172ad0;
            case 0x172AD4u: goto label_172ad4;
            case 0x172AD8u: goto label_172ad8;
            case 0x172ADCu: goto label_172adc;
            case 0x172AE0u: goto label_172ae0;
            case 0x172AE4u: goto label_172ae4;
            case 0x172AE8u: goto label_172ae8;
            case 0x172AECu: goto label_172aec;
            case 0x172AF0u: goto label_172af0;
            case 0x172AF4u: goto label_172af4;
            case 0x172AF8u: goto label_172af8;
            case 0x172AFCu: goto label_172afc;
            case 0x172B00u: goto label_172b00;
            case 0x172B04u: goto label_172b04;
            case 0x172B08u: goto label_172b08;
            case 0x172B0Cu: goto label_172b0c;
            case 0x172B10u: goto label_172b10;
            case 0x172B14u: goto label_172b14;
            case 0x172B18u: goto label_172b18;
            case 0x172B1Cu: goto label_172b1c;
            case 0x172B20u: goto label_172b20;
            case 0x172B24u: goto label_172b24;
            case 0x172B28u: goto label_172b28;
            case 0x172B2Cu: goto label_172b2c;
            case 0x172B30u: goto label_172b30;
            case 0x172B34u: goto label_172b34;
            case 0x172B38u: goto label_172b38;
            case 0x172B3Cu: goto label_172b3c;
            case 0x172B40u: goto label_172b40;
            case 0x172B44u: goto label_172b44;
            case 0x172B48u: goto label_172b48;
            case 0x172B4Cu: goto label_172b4c;
            case 0x172B50u: goto label_172b50;
            case 0x172B54u: goto label_172b54;
            case 0x172B58u: goto label_172b58;
            case 0x172B5Cu: goto label_172b5c;
            case 0x172B60u: goto label_172b60;
            case 0x172B64u: goto label_172b64;
            case 0x172B68u: goto label_172b68;
            case 0x172B6Cu: goto label_172b6c;
            case 0x172B70u: goto label_172b70;
            case 0x172B74u: goto label_172b74;
            case 0x172B78u: goto label_172b78;
            case 0x172B7Cu: goto label_172b7c;
            case 0x172B80u: goto label_172b80;
            case 0x172B84u: goto label_172b84;
            case 0x172B88u: goto label_172b88;
            case 0x172B8Cu: goto label_172b8c;
            case 0x172B90u: goto label_172b90;
            case 0x172B94u: goto label_172b94;
            case 0x172B98u: goto label_172b98;
            case 0x172B9Cu: goto label_172b9c;
            case 0x172BA0u: goto label_172ba0;
            case 0x172BA4u: goto label_172ba4;
            case 0x172BA8u: goto label_172ba8;
            case 0x172BACu: goto label_172bac;
            case 0x172BB0u: goto label_172bb0;
            case 0x172BB4u: goto label_172bb4;
            case 0x172BB8u: goto label_172bb8;
            case 0x172BBCu: goto label_172bbc;
            case 0x172BC0u: goto label_172bc0;
            case 0x172BC4u: goto label_172bc4;
            case 0x172BC8u: goto label_172bc8;
            case 0x172BCCu: goto label_172bcc;
            case 0x172BD0u: goto label_172bd0;
            default: break;
        }
        return;
    }
label_fallthrough_0x172bcc:
    ctx->pc = 0x172BD4u;
}
