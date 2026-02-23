#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setCfgVolume__13SoundMgrClassFv
// Address: 0x217aa0 - 0x217b7c
void setCfgVolume__13SoundMgrClassFv_0x217aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setCfgVolume__13SoundMgrClassFv");


    ctx->pc = 0x217aa0u;

    // 0x217aa0: 0x3c024688
    ctx->pc = 0x217aa0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)18056 << 16));
    // 0x217aa4: 0x27bdffd0
    ctx->pc = 0x217aa4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x217aa8: 0x34428889
    ctx->pc = 0x217aa8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34953));
    // 0x217aac: 0x7fbf0020
    ctx->pc = 0x217aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x217ab0: 0x7fb10010
    ctx->pc = 0x217ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x217ab4: 0x44826000
    ctx->pc = 0x217ab4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x217ab8: 0xc053146
    ctx->pc = 0x217AB8u;
    SET_GPR_U32(ctx, 31, 0x217AC0u);
    ctx->pc = 0x217ABCu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x14C518u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x14c518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217AC0u; }
        else if (ctx->pc != 0x217AC0u) { ctx->pc = 0x217AC0u; }
    }
    if (ctx->pc != 0x217AC0u) { return; }
    ctx->pc = 0x217AC0u;
    // 0x217ac0: 0x34018000
    ctx->pc = 0x217ac0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 0), 32768));
    // 0x217ac4: 0x41082a
    ctx->pc = 0x217ac4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 1)));
    // 0x217ac8: 0x14200003
    ctx->pc = 0x217AC8u;
    {
        const bool branch_taken_0x217ac8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x217ACCu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x217ac8) {
            ctx->pc = 0x217AD8u;
            goto label_217ad8;
        }
    }
    ctx->pc = 0x217AD0u;
    // 0x217ad0: 0x24027fff
    ctx->pc = 0x217ad0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32767));
    // 0x217ad4: 0x70002628
    ctx->pc = 0x217ad4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_217ad8:
    // 0x217ad8: 0x70402e28
    ctx->pc = 0x217ad8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x217adc: 0xc06b42c
    ctx->pc = 0x217ADCu;
    SET_GPR_U32(ctx, 31, 0x217AE4u);
    ctx->pc = 0x217AE0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AD0B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlsndSetStreamVolume_0x1ad0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217AE4u; }
        else if (ctx->pc != 0x217AE4u) { ctx->pc = 0x217AE4u; }
    }
    if (ctx->pc != 0x217AE4u) { return; }
    ctx->pc = 0x217AE4u;
    // 0x217ae4: 0x3c010050
    ctx->pc = 0x217ae4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x217ae8: 0x9031fee2
    ctx->pc = 0x217ae8u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294967010)));
    // 0x217aec: 0x70008628
    ctx->pc = 0x217aecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_217af0:
    // 0x217af0: 0x72002628
    ctx->pc = 0x217af0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x217af4: 0xc06b460
    ctx->pc = 0x217AF4u;
    SET_GPR_U32(ctx, 31, 0x217AFCu);
    ctx->pc = 0x217AF8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AD180u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlsndSetBankVolume_0x1ad180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217AFCu; }
        else if (ctx->pc != 0x217AFCu) { ctx->pc = 0x217AFCu; }
    }
    if (ctx->pc != 0x217AFCu) { return; }
    ctx->pc = 0x217AFCu;
    // 0x217afc: 0x26100001
    ctx->pc = 0x217afcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x217b00: 0x0
    ctx->pc = 0x217b00u;
    // NOP
    // 0x217b04: 0x1a00fffa
    ctx->pc = 0x217B04u;
    {
        const bool branch_taken_0x217b04 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x217b04) {
            ctx->pc = 0x217AF0u;
            goto label_217af0;
        }
    }
    ctx->pc = 0x217B0Cu;
    // 0x217b0c: 0x2a010007
    ctx->pc = 0x217b0cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 7));
    // 0x217b10: 0x10200009
    ctx->pc = 0x217B10u;
    {
        const bool branch_taken_0x217b10 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x217b10) {
            ctx->pc = 0x217B38u;
            goto label_217b38;
        }
    }
    ctx->pc = 0x217B18u;
label_217b18:
    // 0x217b18: 0x72002628
    ctx->pc = 0x217b18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x217b1c: 0xc06b460
    ctx->pc = 0x217B1Cu;
    SET_GPR_U32(ctx, 31, 0x217B24u);
    ctx->pc = 0x217B20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AD180u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlsndSetBankVolume_0x1ad180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217B24u; }
        else if (ctx->pc != 0x217B24u) { ctx->pc = 0x217B24u; }
    }
    if (ctx->pc != 0x217B24u) { return; }
    ctx->pc = 0x217B24u;
    // 0x217b24: 0x26100001
    ctx->pc = 0x217b24u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x217b28: 0x2a020007
    ctx->pc = 0x217b28u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 7));
    // 0x217b2c: 0x1440fffa
    ctx->pc = 0x217B2Cu;
    {
        const bool branch_taken_0x217b2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x217b2c) {
            ctx->pc = 0x217B18u;
            goto label_217b18;
        }
    }
    ctx->pc = 0x217B34u;
    // 0x217b34: 0x0
    ctx->pc = 0x217b34u;
    // NOP
label_217b38:
    // 0x217b38: 0x3c010050
    ctx->pc = 0x217b38u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x217b3c: 0x8023fec6
    ctx->pc = 0x217b3cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966982)));
    // 0x217b40: 0x10600007
    ctx->pc = 0x217B40u;
    {
        const bool branch_taken_0x217b40 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x217B44u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x217b40) {
            ctx->pc = 0x217B60u;
            goto label_217b60;
        }
    }
    ctx->pc = 0x217B48u;
    // 0x217b48: 0x24020001
    ctx->pc = 0x217b48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x217b4c: 0xc05caf6
    ctx->pc = 0x217B4Cu;
    SET_GPR_U32(ctx, 31, 0x217B54u);
    ctx->pc = 0x217B50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x172BD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_SetOutputMono_0x172bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217B54u; }
        else if (ctx->pc != 0x217B54u) { ctx->pc = 0x217B54u; }
    }
    if (ctx->pc != 0x217B54u) { return; }
    ctx->pc = 0x217B54u;
    // 0x217b54: 0x10000005
    ctx->pc = 0x217B54u;
    {
        const bool branch_taken_0x217b54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x217B58u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x217b54) {
            ctx->pc = 0x217B6Cu;
            goto label_217b6c;
        }
    }
    ctx->pc = 0x217B5Cu;
    // 0x217b5c: 0x70002628
    ctx->pc = 0x217b5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_217b60:
    // 0x217b60: 0xc05caf6
    ctx->pc = 0x217B60u;
    SET_GPR_U32(ctx, 31, 0x217B68u);
    ctx->pc = 0x172BD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_SetOutputMono_0x172bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217B68u; }
        else if (ctx->pc != 0x217B68u) { ctx->pc = 0x217B68u; }
    }
    if (ctx->pc != 0x217B68u) { return; }
    ctx->pc = 0x217B68u;
    // 0x217b68: 0x7bbf0020
    ctx->pc = 0x217b68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_217b6c:
    // 0x217b6c: 0x7bb10010
    ctx->pc = 0x217b6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217b70: 0x7bb00000
    ctx->pc = 0x217b70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217b74: 0x3e00008
    ctx->pc = 0x217B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217B78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217AD8u: goto label_217ad8;
            case 0x217AF0u: goto label_217af0;
            case 0x217B18u: goto label_217b18;
            case 0x217B38u: goto label_217b38;
            case 0x217B60u: goto label_217b60;
            case 0x217B6Cu: goto label_217b6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217B7Cu;
}
