#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioSelect
// Address: 0x25ce78 - 0x25cef4
void AudioSelect_0x25ce78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25ce78u;

    // 0x25ce78: 0x27bdffe0
    ctx->pc = 0x25ce78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25ce7c: 0xffbf0010
    ctx->pc = 0x25ce7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25ce80: 0xffb00000
    ctx->pc = 0x25ce80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25ce84: 0x80802d
    ctx->pc = 0x25ce84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ce88: 0x3c020034
    ctx->pc = 0x25ce88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25ce8c: 0x8c42d328
    ctx->pc = 0x25ce8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955816)));
    // 0x25ce90: 0x10500015
    ctx->pc = 0x25CE90u;
    {
        const bool branch_taken_0x25ce90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 16));
        ctx->pc = 0x25CE94u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x25ce90) {
            ctx->pc = 0x25CEE8u;
            goto label_25cee8;
        }
    }
    ctx->pc = 0x25CE98u;
    // 0x25ce98: 0x14400004
    ctx->pc = 0x25CE98u;
    {
        const bool branch_taken_0x25ce98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25CE9Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x25ce98) {
            ctx->pc = 0x25CEACu;
            goto label_25ceac;
        }
    }
    ctx->pc = 0x25CEA0u;
    // 0x25cea0: 0x24849258
    ctx->pc = 0x25cea0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939224));
    // 0x25cea4: 0xc0972bc
    ctx->pc = 0x25CEA4u;
    SET_GPR_U32(ctx, 31, 0x25CEACu);
    ctx->pc = 0x25CEA8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25CAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioLoadStage_0x25caf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CEACu; }
    }
    if (ctx->pc != 0x25CEACu) { return; }
    ctx->pc = 0x25CEACu;
label_25ceac:
    // 0x25ceac: 0x12000009
    ctx->pc = 0x25CEACu;
    {
        const bool branch_taken_0x25ceac = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x25CEB0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x25ceac) {
            ctx->pc = 0x25CED4u;
            goto label_25ced4;
        }
    }
    ctx->pc = 0x25CEB4u;
    // 0x25ceb4: 0x16020007
    ctx->pc = 0x25CEB4u;
    {
        const bool branch_taken_0x25ceb4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x25CEB8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x25ceb4) {
            ctx->pc = 0x25CED4u;
            goto label_25ced4;
        }
    }
    ctx->pc = 0x25CEBCu;
    // 0x25cebc: 0x3c04000c
    ctx->pc = 0x25cebcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)12 << 16));
    // 0x25cec0: 0x8c45fd68
    ctx->pc = 0x25cec0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294966632)));
    // 0x25cec4: 0xc088a94
    ctx->pc = 0x25CEC4u;
    SET_GPR_U32(ctx, 31, 0x25CECCu);
    ctx->pc = 0x25CEC8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x222A50u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFX_0x222a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CECCu; }
    }
    if (ctx->pc != 0x25CECCu) { return; }
    ctx->pc = 0x25CECCu;
    // 0x25cecc: 0x10000004
    ctx->pc = 0x25CECCu;
    {
        const bool branch_taken_0x25cecc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25CED0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x25cecc) {
            ctx->pc = 0x25CEE0u;
            goto label_25cee0;
        }
    }
    ctx->pc = 0x25CED4u;
label_25ced4:
    // 0x25ced4: 0xc08870e
    ctx->pc = 0x25CED4u;
    SET_GPR_U32(ctx, 31, 0x25CEDCu);
    ctx->pc = 0x25CED8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)12 << 16));
    ctx->pc = 0x221C38u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSoundKill_0x221c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CEDCu; }
    }
    if (ctx->pc != 0x25CEDCu) { return; }
    ctx->pc = 0x25CEDCu;
    // 0x25cedc: 0x3c020034
    ctx->pc = 0x25cedcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_25cee0:
    // 0x25cee0: 0xac50d328
    ctx->pc = 0x25cee0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955816), GPR_U32(ctx, 16));
    // 0x25cee4: 0xdfbf0010
    ctx->pc = 0x25cee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25cee8:
    // 0x25cee8: 0xdfb00000
    ctx->pc = 0x25cee8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ceec: 0x3e00008
    ctx->pc = 0x25CEECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CEF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25CEACu: goto label_25ceac;
            case 0x25CED4u: goto label_25ced4;
            case 0x25CEE0u: goto label_25cee0;
            case 0x25CEE8u: goto label_25cee8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25CEF4u;
}
