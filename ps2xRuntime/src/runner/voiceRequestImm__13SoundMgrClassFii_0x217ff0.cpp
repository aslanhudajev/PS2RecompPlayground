#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: voiceRequestImm__13SoundMgrClassFii
// Address: 0x217ff0 - 0x218060
void voiceRequestImm__13SoundMgrClassFii_0x217ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("voiceRequestImm__13SoundMgrClassFii");


    ctx->pc = 0x217ff0u;

    // 0x217ff0: 0x27bdffe0
    ctx->pc = 0x217ff0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x217ff4: 0x7fbf0010
    ctx->pc = 0x217ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x217ff8: 0x7fb00000
    ctx->pc = 0x217ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x217ffc: 0x3c020080
    ctx->pc = 0x217ffcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)128 << 16));
    // 0x218000: 0x70a08628
    ctx->pc = 0x218000u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x218004: 0x34420001
    ctx->pc = 0x218004u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x218008: 0x1202000f
    ctx->pc = 0x218008u;
    {
        const bool branch_taken_0x218008 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        if (branch_taken_0x218008) {
            ctx->pc = 0x218048u;
            goto label_218048;
        }
    }
    ctx->pc = 0x218010u;
    // 0x218010: 0x8f848d04
    ctx->pc = 0x218010u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937860)));
    // 0x218014: 0xc07a6c0
    ctx->pc = 0x218014u;
    SET_GPR_U32(ctx, 31, 0x21801Cu);
    ctx->pc = 0x218018u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E9B00u;
    {
        const uint32_t __entryPc = ctx->pc;
        apADXT_SetOutVol__FP9_adx_talki_0x1e9b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21801Cu; }
        else if (ctx->pc != 0x21801Cu) { ctx->pc = 0x21801Cu; }
    }
    if (ctx->pc != 0x21801Cu) { return; }
    ctx->pc = 0x21801Cu;
    // 0x21801c: 0x3202ffff
    ctx->pc = 0x21801cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 65535));
    // 0x218020: 0x21840
    ctx->pc = 0x218020u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x218024: 0x3c020027
    ctx->pc = 0x218024u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x218028: 0x2442b9d0
    ctx->pc = 0x218028u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294949328));
    // 0x21802c: 0x431021
    ctx->pc = 0x21802cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218030: 0x84460000
    ctx->pc = 0x218030u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x218034: 0x8f848d04
    ctx->pc = 0x218034u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937860)));
    // 0x218038: 0xc05cb02
    ctx->pc = 0x218038u;
    SET_GPR_U32(ctx, 31, 0x218040u);
    ctx->pc = 0x21803Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x172C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_StartAfs_0x172c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218040u; }
        else if (ctx->pc != 0x218040u) { ctx->pc = 0x218040u; }
    }
    if (ctx->pc != 0x218040u) { return; }
    ctx->pc = 0x218040u;
    // 0x218040: 0x10000004
    ctx->pc = 0x218040u;
    {
        const bool branch_taken_0x218040 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x218044u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x218040) {
            ctx->pc = 0x218054u;
            goto label_218054;
        }
    }
    ctx->pc = 0x218048u;
label_218048:
    // 0x218048: 0xc05c73a
    ctx->pc = 0x218048u;
    SET_GPR_U32(ctx, 31, 0x218050u);
    ctx->pc = 0x21804Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937860)));
    ctx->pc = 0x171CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_Stop_0x171ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218050u; }
        else if (ctx->pc != 0x218050u) { ctx->pc = 0x218050u; }
    }
    if (ctx->pc != 0x218050u) { return; }
    ctx->pc = 0x218050u;
    // 0x218050: 0x7bbf0010
    ctx->pc = 0x218050u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_218054:
    // 0x218054: 0x7bb00000
    ctx->pc = 0x218054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218058: 0x3e00008
    ctx->pc = 0x218058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21805Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218048u: goto label_218048;
            case 0x218054u: goto label_218054;
            default: break;
        }
        return;
    }
    ctx->pc = 0x218060u;
}
