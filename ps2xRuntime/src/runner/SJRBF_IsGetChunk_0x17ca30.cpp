#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJRBF_IsGetChunk
// Address: 0x17ca30 - 0x17caf0
void SJRBF_IsGetChunk_0x17ca30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJRBF_IsGetChunk");


    ctx->pc = 0x17ca30u;

label_17ca30:
    // 0x17ca30: 0x27bdffb0
    ctx->pc = 0x17ca30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_17ca34:
    // 0x17ca34: 0xffb30030
    ctx->pc = 0x17ca34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_17ca38:
    // 0x17ca38: 0xffb20020
    ctx->pc = 0x17ca38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_17ca3c:
    // 0x17ca3c: 0xe0982d
    ctx->pc = 0x17ca3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_17ca40:
    // 0x17ca40: 0xffb10010
    ctx->pc = 0x17ca40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_17ca44:
    // 0x17ca44: 0xc0902d
    ctx->pc = 0x17ca44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17ca48:
    // 0x17ca48: 0xffb00000
    ctx->pc = 0x17ca48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17ca4c:
    // 0x17ca4c: 0x80882d
    ctx->pc = 0x17ca4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17ca50:
    // 0x17ca50: 0xffbf0040
    ctx->pc = 0x17ca50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_17ca54:
    // 0x17ca54: 0xc05efbc
label_17ca58:
    if (ctx->pc == 0x17CA58u) {
        ctx->pc = 0x17CA58u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17CA5Cu;
        goto label_17ca5c;
    }
    ctx->pc = 0x17CA54u;
    SET_GPR_U32(ctx, 31, 0x17CA5Cu);
    ctx->pc = 0x17CA58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17BEF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJCRS_Lock_0x17bef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CA5Cu; }
        else if (ctx->pc != 0x17CA5Cu) { ctx->pc = 0x17CA5Cu; }
    }
    if (ctx->pc != 0x17CA5Cu) { return; }
    ctx->pc = 0x17CA5Cu;
label_17ca5c:
    // 0x17ca5c: 0x16000007
label_17ca60:
    if (ctx->pc == 0x17CA60u) {
        ctx->pc = 0x17CA60u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x17CA64u;
        goto label_17ca64;
    }
    ctx->pc = 0x17CA5Cu;
    {
        const bool branch_taken_0x17ca5c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x17CA60u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x17ca5c) {
            ctx->pc = 0x17CA7Cu;
            goto label_17ca7c;
        }
    }
    ctx->pc = 0x17CA64u;
label_17ca64:
    // 0x17ca64: 0x8e220014
    ctx->pc = 0x17ca64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_17ca68:
    // 0x17ca68: 0x8e230020
    ctx->pc = 0x17ca68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_17ca6c:
    // 0x17ca6c: 0x8e250024
    ctx->pc = 0x17ca6cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_17ca70:
    // 0x17ca70: 0x621823
    ctx->pc = 0x17ca70u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_17ca74:
    // 0x17ca74: 0x10000008
label_17ca78:
    if (ctx->pc == 0x17CA78u) {
        ctx->pc = 0x17CA78u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->pc = 0x17CA7Cu;
        goto label_17ca7c;
    }
    ctx->pc = 0x17CA74u;
    {
        const bool branch_taken_0x17ca74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17CA78u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 16)));
        if (branch_taken_0x17ca74) {
            ctx->pc = 0x17CA98u;
            goto label_17ca98;
        }
    }
    ctx->pc = 0x17CA7Cu;
label_17ca7c:
    // 0x17ca7c: 0x5602000c
label_17ca80:
    if (ctx->pc == 0x17CA80u) {
        ctx->pc = 0x17CA80u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->pc = 0x17CA84u;
        goto label_17ca84;
    }
    ctx->pc = 0x17CA7Cu;
    {
        const bool branch_taken_0x17ca7c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        if (branch_taken_0x17ca7c) {
            ctx->pc = 0x17CA80u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->pc = 0x17CAB0u;
            goto label_17cab0;
        }
    }
    ctx->pc = 0x17CA84u;
label_17ca84:
    // 0x17ca84: 0x8e220018
    ctx->pc = 0x17ca84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_17ca88:
    // 0x17ca88: 0x8e230020
    ctx->pc = 0x17ca88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_17ca8c:
    // 0x17ca8c: 0x8e250024
    ctx->pc = 0x17ca8cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_17ca90:
    // 0x17ca90: 0x621823
    ctx->pc = 0x17ca90u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_17ca94:
    // 0x17ca94: 0x8e24000c
    ctx->pc = 0x17ca94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_17ca98:
    // 0x17ca98: 0x658021
    ctx->pc = 0x17ca98u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_17ca9c:
    // 0x17ca9c: 0x90102a
    ctx->pc = 0x17ca9cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 16)));
label_17caa0:
    // 0x17caa0: 0x82800b
    ctx->pc = 0x17caa0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 4));
label_17caa4:
    // 0x17caa4: 0x212182a
    ctx->pc = 0x17caa4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
label_17caa8:
    // 0x17caa8: 0x10000006
label_17caac:
    if (ctx->pc == 0x17CAACu) {
        ctx->pc = 0x17CAACu;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 18));
        ctx->pc = 0x17CAB0u;
        goto label_17cab0;
    }
    ctx->pc = 0x17CAA8u;
    {
        const bool branch_taken_0x17caa8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17CAACu;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 18));
        if (branch_taken_0x17caa8) {
            ctx->pc = 0x17CAC4u;
            goto label_17cac4;
        }
    }
    ctx->pc = 0x17CAB0u;
label_17cab0:
    // 0x17cab0: 0x10400004
label_17cab4:
    if (ctx->pc == 0x17CAB4u) {
        ctx->pc = 0x17CAB4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17CAB8u;
        goto label_17cab8;
    }
    ctx->pc = 0x17CAB0u;
    {
        const bool branch_taken_0x17cab0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17CAB4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17cab0) {
            ctx->pc = 0x17CAC4u;
            goto label_17cac4;
        }
    }
    ctx->pc = 0x17CAB8u;
label_17cab8:
    // 0x17cab8: 0x8e24002c
    ctx->pc = 0x17cab8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_17cabc:
    // 0x17cabc: 0x40f809
label_17cac0:
    if (ctx->pc == 0x17CAC0u) {
        ctx->pc = 0x17CAC0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x17CAC4u;
        goto label_17cac4;
    }
    ctx->pc = 0x17CABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17CAC4u);
        ctx->pc = 0x17CAC0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17CA30u: goto label_17ca30;
            case 0x17CA34u: goto label_17ca34;
            case 0x17CA38u: goto label_17ca38;
            case 0x17CA3Cu: goto label_17ca3c;
            case 0x17CA40u: goto label_17ca40;
            case 0x17CA44u: goto label_17ca44;
            case 0x17CA48u: goto label_17ca48;
            case 0x17CA4Cu: goto label_17ca4c;
            case 0x17CA50u: goto label_17ca50;
            case 0x17CA54u: goto label_17ca54;
            case 0x17CA58u: goto label_17ca58;
            case 0x17CA5Cu: goto label_17ca5c;
            case 0x17CA60u: goto label_17ca60;
            case 0x17CA64u: goto label_17ca64;
            case 0x17CA68u: goto label_17ca68;
            case 0x17CA6Cu: goto label_17ca6c;
            case 0x17CA70u: goto label_17ca70;
            case 0x17CA74u: goto label_17ca74;
            case 0x17CA78u: goto label_17ca78;
            case 0x17CA7Cu: goto label_17ca7c;
            case 0x17CA80u: goto label_17ca80;
            case 0x17CA84u: goto label_17ca84;
            case 0x17CA88u: goto label_17ca88;
            case 0x17CA8Cu: goto label_17ca8c;
            case 0x17CA90u: goto label_17ca90;
            case 0x17CA94u: goto label_17ca94;
            case 0x17CA98u: goto label_17ca98;
            case 0x17CA9Cu: goto label_17ca9c;
            case 0x17CAA0u: goto label_17caa0;
            case 0x17CAA4u: goto label_17caa4;
            case 0x17CAA8u: goto label_17caa8;
            case 0x17CAACu: goto label_17caac;
            case 0x17CAB0u: goto label_17cab0;
            case 0x17CAB4u: goto label_17cab4;
            case 0x17CAB8u: goto label_17cab8;
            case 0x17CABCu: goto label_17cabc;
            case 0x17CAC0u: goto label_17cac0;
            case 0x17CAC4u: goto label_17cac4;
            case 0x17CAC8u: goto label_17cac8;
            case 0x17CACCu: goto label_17cacc;
            case 0x17CAD0u: goto label_17cad0;
            case 0x17CAD4u: goto label_17cad4;
            case 0x17CAD8u: goto label_17cad8;
            case 0x17CADCu: goto label_17cadc;
            case 0x17CAE0u: goto label_17cae0;
            case 0x17CAE4u: goto label_17cae4;
            case 0x17CAE8u: goto label_17cae8;
            case 0x17CAECu: goto label_17caec;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17CAC4u; }
            if (ctx->pc != 0x17CAC4u) { return; }
        }
    }
    ctx->pc = 0x17CAC4u;
label_17cac4:
    // 0x17cac4: 0xc05efc2
label_17cac8:
    if (ctx->pc == 0x17CAC8u) {
        ctx->pc = 0x17CAC8u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->pc = 0x17CACCu;
        goto label_17cacc;
    }
    ctx->pc = 0x17CAC4u;
    SET_GPR_U32(ctx, 31, 0x17CACCu);
    ctx->pc = 0x17CAC8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    ctx->pc = 0x17BF08u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJCRS_Unlock_0x17bf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CACCu; }
        else if (ctx->pc != 0x17CACCu) { ctx->pc = 0x17CACCu; }
    }
    if (ctx->pc != 0x17CACCu) { return; }
    ctx->pc = 0x17CACCu;
label_17cacc:
    // 0x17cacc: 0x2121026
    ctx->pc = 0x17caccu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_17cad0:
    // 0x17cad0: 0xdfbf0040
    ctx->pc = 0x17cad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_17cad4:
    // 0x17cad4: 0xdfb30030
    ctx->pc = 0x17cad4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17cad8:
    // 0x17cad8: 0x2c420001
    ctx->pc = 0x17cad8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_17cadc:
    // 0x17cadc: 0xdfb20020
    ctx->pc = 0x17cadcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17cae0:
    // 0x17cae0: 0xdfb10010
    ctx->pc = 0x17cae0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17cae4:
    // 0x17cae4: 0xdfb00000
    ctx->pc = 0x17cae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17cae8:
    // 0x17cae8: 0x3e00008
label_17caec:
    if (ctx->pc == 0x17CAECu) {
        ctx->pc = 0x17CAECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x17CAF0u;
        goto label_fallthrough_0x17cae8;
    }
    ctx->pc = 0x17CAE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CAECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17CA30u: goto label_17ca30;
            case 0x17CA34u: goto label_17ca34;
            case 0x17CA38u: goto label_17ca38;
            case 0x17CA3Cu: goto label_17ca3c;
            case 0x17CA40u: goto label_17ca40;
            case 0x17CA44u: goto label_17ca44;
            case 0x17CA48u: goto label_17ca48;
            case 0x17CA4Cu: goto label_17ca4c;
            case 0x17CA50u: goto label_17ca50;
            case 0x17CA54u: goto label_17ca54;
            case 0x17CA58u: goto label_17ca58;
            case 0x17CA5Cu: goto label_17ca5c;
            case 0x17CA60u: goto label_17ca60;
            case 0x17CA64u: goto label_17ca64;
            case 0x17CA68u: goto label_17ca68;
            case 0x17CA6Cu: goto label_17ca6c;
            case 0x17CA70u: goto label_17ca70;
            case 0x17CA74u: goto label_17ca74;
            case 0x17CA78u: goto label_17ca78;
            case 0x17CA7Cu: goto label_17ca7c;
            case 0x17CA80u: goto label_17ca80;
            case 0x17CA84u: goto label_17ca84;
            case 0x17CA88u: goto label_17ca88;
            case 0x17CA8Cu: goto label_17ca8c;
            case 0x17CA90u: goto label_17ca90;
            case 0x17CA94u: goto label_17ca94;
            case 0x17CA98u: goto label_17ca98;
            case 0x17CA9Cu: goto label_17ca9c;
            case 0x17CAA0u: goto label_17caa0;
            case 0x17CAA4u: goto label_17caa4;
            case 0x17CAA8u: goto label_17caa8;
            case 0x17CAACu: goto label_17caac;
            case 0x17CAB0u: goto label_17cab0;
            case 0x17CAB4u: goto label_17cab4;
            case 0x17CAB8u: goto label_17cab8;
            case 0x17CABCu: goto label_17cabc;
            case 0x17CAC0u: goto label_17cac0;
            case 0x17CAC4u: goto label_17cac4;
            case 0x17CAC8u: goto label_17cac8;
            case 0x17CACCu: goto label_17cacc;
            case 0x17CAD0u: goto label_17cad0;
            case 0x17CAD4u: goto label_17cad4;
            case 0x17CAD8u: goto label_17cad8;
            case 0x17CADCu: goto label_17cadc;
            case 0x17CAE0u: goto label_17cae0;
            case 0x17CAE4u: goto label_17cae4;
            case 0x17CAE8u: goto label_17cae8;
            case 0x17CAECu: goto label_17caec;
            default: break;
        }
        return;
    }
label_fallthrough_0x17cae8:
    ctx->pc = 0x17CAF0u;
}
