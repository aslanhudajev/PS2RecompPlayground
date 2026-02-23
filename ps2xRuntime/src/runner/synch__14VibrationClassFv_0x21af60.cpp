#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: synch__14VibrationClassFv
// Address: 0x21af60 - 0x21b088
void synch__14VibrationClassFv_0x21af60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("synch__14VibrationClassFv");


    ctx->pc = 0x21af60u;

    // 0x21af60: 0x27bdffc0
    ctx->pc = 0x21af60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21af64: 0x7fbf0030
    ctx->pc = 0x21af64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x21af68: 0x7fb20020
    ctx->pc = 0x21af68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21af6c: 0x70809628
    ctx->pc = 0x21af6cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x21af70: 0x3c020050
    ctx->pc = 0x21af70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x21af74: 0x7fb10010
    ctx->pc = 0x21af74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21af78: 0x2444e510
    ctx->pc = 0x21af78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    // 0x21af7c: 0xc07ce18
    ctx->pc = 0x21AF7Cu;
    SET_GPR_U32(ctx, 31, 0x21AF84u);
    ctx->pc = 0x21AF80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AF84u; }
        else if (ctx->pc != 0x21AF84u) { ctx->pc = 0x21AF84u; }
    }
    if (ctx->pc != 0x21AF84u) { return; }
    ctx->pc = 0x21AF84u;
    // 0x21af84: 0x1c40002e
    ctx->pc = 0x21AF84u;
    {
        const bool branch_taken_0x21af84 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x21AF88u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21af84) {
            ctx->pc = 0x21B040u;
            goto label_21b040;
        }
    }
    ctx->pc = 0x21AF8Cu;
    // 0x21af8c: 0x3c010050
    ctx->pc = 0x21af8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x21af90: 0x8424e504
    ctx->pc = 0x21af90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x21af94: 0x2403000a
    ctx->pc = 0x21af94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x21af98: 0x14830029
    ctx->pc = 0x21AF98u;
    {
        const bool branch_taken_0x21af98 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x21AF9Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
        if (branch_taken_0x21af98) {
            ctx->pc = 0x21B040u;
            goto label_21b040;
        }
    }
    ctx->pc = 0x21AFA0u;
    // 0x21afa0: 0x70008628
    ctx->pc = 0x21afa0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21afa4: 0x2471dd20
    ctx->pc = 0x21afa4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 4294958368));
label_21afa8:
    // 0x21afa8: 0x8e240004
    ctx->pc = 0x21afa8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x21afac: 0x24030005
    ctx->pc = 0x21afacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x21afb0: 0x10830007
    ctx->pc = 0x21AFB0u;
    {
        const bool branch_taken_0x21afb0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x21AFB4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x21afb0) {
            ctx->pc = 0x21AFD0u;
            goto label_21afd0;
        }
    }
    ctx->pc = 0x21AFB8u;
    // 0x21afb8: 0x10830005
    ctx->pc = 0x21AFB8u;
    {
        const bool branch_taken_0x21afb8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x21afb8) {
            ctx->pc = 0x21AFD0u;
            goto label_21afd0;
        }
    }
    ctx->pc = 0x21AFC0u;
    // 0x21afc0: 0x10800003
    ctx->pc = 0x21AFC0u;
    {
        const bool branch_taken_0x21afc0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x21afc0) {
            ctx->pc = 0x21AFD0u;
            goto label_21afd0;
        }
    }
    ctx->pc = 0x21AFC8u;
    // 0x21afc8: 0x1000000a
    ctx->pc = 0x21AFC8u;
    {
        const bool branch_taken_0x21afc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21AFCCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
        if (branch_taken_0x21afc8) {
            ctx->pc = 0x21AFF4u;
            goto label_21aff4;
        }
    }
    ctx->pc = 0x21AFD0u;
label_21afd0:
    // 0x21afd0: 0x8e460000
    ctx->pc = 0x21afd0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21afd4: 0x72002628
    ctx->pc = 0x21afd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x21afd8: 0xc07bdcc
    ctx->pc = 0x21AFD8u;
    SET_GPR_U32(ctx, 31, 0x21AFE0u);
    ctx->pc = 0x21AFDCu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EF730u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetPadAct__Fiii_0x1ef730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AFE0u; }
        else if (ctx->pc != 0x21AFE0u) { ctx->pc = 0x21AFE0u; }
    }
    if (ctx->pc != 0x21AFE0u) { return; }
    ctx->pc = 0x21AFE0u;
    // 0x21afe0: 0x8e460004
    ctx->pc = 0x21afe0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x21afe4: 0x72002628
    ctx->pc = 0x21afe4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x21afe8: 0xc07bdcc
    ctx->pc = 0x21AFE8u;
    SET_GPR_U32(ctx, 31, 0x21AFF0u);
    ctx->pc = 0x21AFECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1EF730u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetPadAct__Fiii_0x1ef730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AFF0u; }
        else if (ctx->pc != 0x21AFF0u) { ctx->pc = 0x21AFF0u; }
    }
    if (ctx->pc != 0x21AFF0u) { return; }
    ctx->pc = 0x21AFF0u;
    // 0x21aff0: 0x8e430000
    ctx->pc = 0x21aff0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21aff4:
    // 0x21aff4: 0x14600004
    ctx->pc = 0x21AFF4u;
    {
        const bool branch_taken_0x21aff4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x21AFF8u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21aff4) {
            ctx->pc = 0x21B008u;
            goto label_21b008;
        }
    }
    ctx->pc = 0x21AFFCu;
    // 0x21affc: 0x70002e28
    ctx->pc = 0x21affcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21b000: 0xc07bdcc
    ctx->pc = 0x21B000u;
    SET_GPR_U32(ctx, 31, 0x21B008u);
    ctx->pc = 0x21B004u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EF730u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetPadAct__Fiii_0x1ef730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B008u; }
        else if (ctx->pc != 0x21B008u) { ctx->pc = 0x21B008u; }
    }
    if (ctx->pc != 0x21B008u) { return; }
    ctx->pc = 0x21B008u;
label_21b008:
    // 0x21b008: 0x8e430004
    ctx->pc = 0x21b008u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x21b00c: 0x54600007
    ctx->pc = 0x21B00Cu;
    {
        const bool branch_taken_0x21b00c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x21b00c) {
            ctx->pc = 0x21B010u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x21B02Cu;
            goto label_21b02c;
        }
    }
    ctx->pc = 0x21B014u;
    // 0x21b014: 0x72002628
    ctx->pc = 0x21b014u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x21b018: 0x24050001
    ctx->pc = 0x21b018u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b01c: 0xc07bdcc
    ctx->pc = 0x21B01Cu;
    SET_GPR_U32(ctx, 31, 0x21B024u);
    ctx->pc = 0x21B020u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EF730u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetPadAct__Fiii_0x1ef730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B024u; }
        else if (ctx->pc != 0x21B024u) { ctx->pc = 0x21B024u; }
    }
    if (ctx->pc != 0x21B024u) { return; }
    ctx->pc = 0x21B024u;
    // 0x21b024: 0x0
    ctx->pc = 0x21b024u;
    // NOP
    // 0x21b028: 0x26100001
    ctx->pc = 0x21b028u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_21b02c:
    // 0x21b02c: 0x2a030002
    ctx->pc = 0x21b02cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 2));
    // 0x21b030: 0x1460ffdd
    ctx->pc = 0x21B030u;
    {
        const bool branch_taken_0x21b030 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x21B034u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 840));
        if (branch_taken_0x21b030) {
            ctx->pc = 0x21AFA8u;
            goto label_21afa8;
        }
    }
    ctx->pc = 0x21B038u;
    // 0x21b038: 0x1000000e
    ctx->pc = 0x21B038u;
    {
        const bool branch_taken_0x21b038 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21B03Cu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x21b038) {
            ctx->pc = 0x21B074u;
            goto label_21b074;
        }
    }
    ctx->pc = 0x21B040u;
label_21b040:
    // 0x21b040: 0x72002628
    ctx->pc = 0x21b040u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_21b044:
    // 0x21b044: 0x70002e28
    ctx->pc = 0x21b044u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21b048: 0xc07bdcc
    ctx->pc = 0x21B048u;
    SET_GPR_U32(ctx, 31, 0x21B050u);
    ctx->pc = 0x21B04Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EF730u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetPadAct__Fiii_0x1ef730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B050u; }
        else if (ctx->pc != 0x21B050u) { ctx->pc = 0x21B050u; }
    }
    if (ctx->pc != 0x21B050u) { return; }
    ctx->pc = 0x21B050u;
    // 0x21b050: 0x72002628
    ctx->pc = 0x21b050u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x21b054: 0x24050001
    ctx->pc = 0x21b054u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b058: 0xc07bdcc
    ctx->pc = 0x21B058u;
    SET_GPR_U32(ctx, 31, 0x21B060u);
    ctx->pc = 0x21B05Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EF730u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetPadAct__Fiii_0x1ef730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B060u; }
        else if (ctx->pc != 0x21B060u) { ctx->pc = 0x21B060u; }
    }
    if (ctx->pc != 0x21B060u) { return; }
    ctx->pc = 0x21B060u;
    // 0x21b060: 0x26100001
    ctx->pc = 0x21b060u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x21b064: 0x2a030002
    ctx->pc = 0x21b064u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 2));
    // 0x21b068: 0x1460fff6
    ctx->pc = 0x21B068u;
    {
        const bool branch_taken_0x21b068 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x21B06Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21b068) {
            ctx->pc = 0x21B044u;
            goto label_21b044;
        }
    }
    ctx->pc = 0x21B070u;
    // 0x21b070: 0x7bbf0030
    ctx->pc = 0x21b070u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21b074:
    // 0x21b074: 0x7bb20020
    ctx->pc = 0x21b074u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21b078: 0x7bb10010
    ctx->pc = 0x21b078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b07c: 0x7bb00000
    ctx->pc = 0x21b07cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b080: 0x3e00008
    ctx->pc = 0x21B080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B084u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21AFA8u: goto label_21afa8;
            case 0x21AFD0u: goto label_21afd0;
            case 0x21AFF4u: goto label_21aff4;
            case 0x21B008u: goto label_21b008;
            case 0x21B02Cu: goto label_21b02c;
            case 0x21B040u: goto label_21b040;
            case 0x21B044u: goto label_21b044;
            case 0x21B074u: goto label_21b074;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21B088u;
}
