#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioEnemyHurt
// Address: 0x25fb10 - 0x25fbf8
void AudioEnemyHurt_0x25fb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25fb10u;

    // 0x25fb10: 0x27bdfff0
    ctx->pc = 0x25fb10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25fb14: 0xffbf0000
    ctx->pc = 0x25fb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25fb18: 0x80302d
    ctx->pc = 0x25fb18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fb1c: 0x8cc30000
    ctx->pc = 0x25fb1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25fb20: 0x3c02003c
    ctx->pc = 0x25fb20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x25fb24: 0x24422f88
    ctx->pc = 0x25fb24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12168));
    // 0x25fb28: 0x31880
    ctx->pc = 0x25fb28u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x25fb2c: 0x621821
    ctx->pc = 0x25fb2cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25fb30: 0x8c640000
    ctx->pc = 0x25fb30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25fb34: 0x480002d
    ctx->pc = 0x25FB34u;
    {
        const bool branch_taken_0x25fb34 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x25FB38u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x25fb34) {
            ctx->pc = 0x25FBECu;
            goto label_25fbec;
        }
    }
    ctx->pc = 0x25FB3Cu;
    // 0x25fb3c: 0x14a20017
    ctx->pc = 0x25FB3Cu;
    {
        const bool branch_taken_0x25fb3c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x25FB40u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 538)));
        if (branch_taken_0x25fb3c) {
            ctx->pc = 0x25FB9Cu;
            goto label_25fb9c;
        }
    }
    ctx->pc = 0x25FB44u;
    // 0x25fb44: 0x28420002
    ctx->pc = 0x25fb44u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x25fb48: 0x5440000a
    ctx->pc = 0x25FB48u;
    {
        const bool branch_taken_0x25fb48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25fb48) {
            ctx->pc = 0x25FB4Cu;
            SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
            ctx->pc = 0x25FB74u;
            goto label_25fb74;
        }
    }
    ctx->pc = 0x25FB50u;
    // 0x25fb50: 0x84c20218
    ctx->pc = 0x25fb50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 536)));
    // 0x25fb54: 0x28420002
    ctx->pc = 0x25fb54u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x25fb58: 0x50400004
    ctx->pc = 0x25FB58u;
    {
        const bool branch_taken_0x25fb58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x25fb58) {
            ctx->pc = 0x25FB5Cu;
            SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
            ctx->pc = 0x25FB6Cu;
            goto label_25fb6c;
        }
    }
    ctx->pc = 0x25FB60u;
    // 0x25fb60: 0x3c03003c
    ctx->pc = 0x25fb60u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x25fb64: 0x10000004
    ctx->pc = 0x25FB64u;
    {
        const bool branch_taken_0x25fb64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25FB68u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 12544));
        if (branch_taken_0x25fb64) {
            ctx->pc = 0x25FB78u;
            goto label_25fb78;
        }
    }
    ctx->pc = 0x25FB6Cu;
label_25fb6c:
    // 0x25fb6c: 0x10000002
    ctx->pc = 0x25FB6Cu;
    {
        const bool branch_taken_0x25fb6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25FB70u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 12576));
        if (branch_taken_0x25fb6c) {
            ctx->pc = 0x25FB78u;
            goto label_25fb78;
        }
    }
    ctx->pc = 0x25FB74u;
label_25fb74:
    // 0x25fb74: 0x246330c0
    ctx->pc = 0x25fb74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 12480));
label_25fb78:
    // 0x25fb78: 0x41080
    ctx->pc = 0x25fb78u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x25fb7c: 0x431021
    ctx->pc = 0x25fb7cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25fb80: 0x8c440000
    ctx->pc = 0x25fb80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25fb84: 0x24c50040
    ctx->pc = 0x25fb84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 64));
    // 0x25fb88: 0x240600e0
    ctx->pc = 0x25fb88u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25fb8c: 0xc088a62
    ctx->pc = 0x25FB8Cu;
    SET_GPR_U32(ctx, 31, 0x25FB94u);
    ctx->pc = 0x25FB90u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 35));
    ctx->pc = 0x222988u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSFX3_0x222988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FB94u; }
    }
    if (ctx->pc != 0x25FB94u) { return; }
    ctx->pc = 0x25FB94u;
    // 0x25fb94: 0x10000016
    ctx->pc = 0x25FB94u;
    {
        const bool branch_taken_0x25fb94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25FB98u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x25fb94) {
            ctx->pc = 0x25FBF0u;
            goto label_25fbf0;
        }
    }
    ctx->pc = 0x25FB9Cu;
label_25fb9c:
    // 0x25fb9c: 0x28420002
    ctx->pc = 0x25fb9cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x25fba0: 0x1440000a
    ctx->pc = 0x25FBA0u;
    {
        const bool branch_taken_0x25fba0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25FBA4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x25fba0) {
            ctx->pc = 0x25FBCCu;
            goto label_25fbcc;
        }
    }
    ctx->pc = 0x25FBA8u;
    // 0x25fba8: 0x84c20218
    ctx->pc = 0x25fba8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 536)));
    // 0x25fbac: 0x28420002
    ctx->pc = 0x25fbacu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x25fbb0: 0x50400004
    ctx->pc = 0x25FBB0u;
    {
        const bool branch_taken_0x25fbb0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x25fbb0) {
            ctx->pc = 0x25FBB4u;
            SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
            ctx->pc = 0x25FBC4u;
            goto label_25fbc4;
        }
    }
    ctx->pc = 0x25FBB8u;
    // 0x25fbb8: 0x3c03003c
    ctx->pc = 0x25fbb8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x25fbbc: 0x10000004
    ctx->pc = 0x25FBBCu;
    {
        const bool branch_taken_0x25fbbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25FBC0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 12608));
        if (branch_taken_0x25fbbc) {
            ctx->pc = 0x25FBD0u;
            goto label_25fbd0;
        }
    }
    ctx->pc = 0x25FBC4u;
label_25fbc4:
    // 0x25fbc4: 0x10000002
    ctx->pc = 0x25FBC4u;
    {
        const bool branch_taken_0x25fbc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25FBC8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 12640));
        if (branch_taken_0x25fbc4) {
            ctx->pc = 0x25FBD0u;
            goto label_25fbd0;
        }
    }
    ctx->pc = 0x25FBCCu;
label_25fbcc:
    // 0x25fbcc: 0x246330e0
    ctx->pc = 0x25fbccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 12512));
label_25fbd0:
    // 0x25fbd0: 0x41080
    ctx->pc = 0x25fbd0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x25fbd4: 0x431021
    ctx->pc = 0x25fbd4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25fbd8: 0x8c440000
    ctx->pc = 0x25fbd8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25fbdc: 0x24c50040
    ctx->pc = 0x25fbdcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 64));
    // 0x25fbe0: 0x240600e0
    ctx->pc = 0x25fbe0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25fbe4: 0xc088a62
    ctx->pc = 0x25FBE4u;
    SET_GPR_U32(ctx, 31, 0x25FBECu);
    ctx->pc = 0x25FBE8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 95));
    ctx->pc = 0x222988u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSFX3_0x222988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FBECu; }
    }
    if (ctx->pc != 0x25FBECu) { return; }
    ctx->pc = 0x25FBECu;
label_25fbec:
    // 0x25fbec: 0xdfbf0000
    ctx->pc = 0x25fbecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25fbf0:
    // 0x25fbf0: 0x3e00008
    ctx->pc = 0x25FBF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FBF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25FB6Cu: goto label_25fb6c;
            case 0x25FB74u: goto label_25fb74;
            case 0x25FB78u: goto label_25fb78;
            case 0x25FB9Cu: goto label_25fb9c;
            case 0x25FBC4u: goto label_25fbc4;
            case 0x25FBCCu: goto label_25fbcc;
            case 0x25FBD0u: goto label_25fbd0;
            case 0x25FBECu: goto label_25fbec;
            case 0x25FBF0u: goto label_25fbf0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25FBF8u;
}
