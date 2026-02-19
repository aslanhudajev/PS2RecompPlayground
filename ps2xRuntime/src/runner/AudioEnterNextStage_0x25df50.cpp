#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioEnterNextStage
// Address: 0x25df50 - 0x25dff0
void AudioEnterNextStage_0x25df50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25df50u;

    // 0x25df50: 0x27bdffe0
    ctx->pc = 0x25df50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25df54: 0xffbf0010
    ctx->pc = 0x25df54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25df58: 0xffb00000
    ctx->pc = 0x25df58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25df5c: 0x3c100034
    ctx->pc = 0x25df5cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x25df60: 0x8e02e7c8
    ctx->pc = 0x25df60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294961096)));
    // 0x25df64: 0x8c420064
    ctx->pc = 0x25df64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x25df68: 0xc09712c
    ctx->pc = 0x25DF68u;
    SET_GPR_U32(ctx, 31, 0x25DF70u);
    ctx->pc = 0x25DF6Cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x25C4B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetWorldSound_0x25c4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DF70u; }
    }
    if (ctx->pc != 0x25DF70u) { return; }
    ctx->pc = 0x25DF70u;
    // 0x25df70: 0x40182d
    ctx->pc = 0x25df70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25df74: 0x1060001a
    ctx->pc = 0x25DF74u;
    {
        const bool branch_taken_0x25df74 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x25DF78u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294961096)));
        if (branch_taken_0x25df74) {
            ctx->pc = 0x25DFE0u;
            goto label_25dfe0;
        }
    }
    ctx->pc = 0x25DF7Cu;
    // 0x25df7c: 0x8c420064
    ctx->pc = 0x25df7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x25df80: 0x8c420014
    ctx->pc = 0x25df80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x25df84: 0x4400017
    ctx->pc = 0x25DF84u;
    {
        const bool branch_taken_0x25df84 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25DF88u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x25df84) {
            ctx->pc = 0x25DFE4u;
            goto label_25dfe4;
        }
    }
    ctx->pc = 0x25DF8Cu;
    // 0x25df8c: 0x8c640010
    ctx->pc = 0x25df8cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x25df90: 0x240500e0
    ctx->pc = 0x25df90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25df94: 0x2406007f
    ctx->pc = 0x25df94u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25df98: 0x24070002
    ctx->pc = 0x25df98u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    // 0x25df9c: 0x3c01bf80
    ctx->pc = 0x25df9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x25dfa0: 0x44816000
    ctx->pc = 0x25dfa0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25dfa4: 0xc097116
    ctx->pc = 0x25DFA4u;
    SET_GPR_U32(ctx, 31, 0x25DFACu);
    ctx->pc = 0x25DFA8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x25C458u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioVQueAdd4_0x25c458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DFACu; }
    }
    if (ctx->pc != 0x25DFACu) { return; }
    ctx->pc = 0x25DFACu;
    // 0x25dfac: 0x8e02e7c8
    ctx->pc = 0x25dfacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294961096)));
    // 0x25dfb0: 0x8c420064
    ctx->pc = 0x25dfb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x25dfb4: 0x8c440014
    ctx->pc = 0x25dfb4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x25dfb8: 0x240500e0
    ctx->pc = 0x25dfb8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25dfbc: 0x2406007f
    ctx->pc = 0x25dfbcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25dfc0: 0x24070002
    ctx->pc = 0x25dfc0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    // 0x25dfc4: 0x3c01bf80
    ctx->pc = 0x25dfc4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x25dfc8: 0x44816000
    ctx->pc = 0x25dfc8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25dfcc: 0x46006346
    ctx->pc = 0x25dfccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x25dfd0: 0xdfbf0010
    ctx->pc = 0x25dfd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25dfd4: 0xdfb00000
    ctx->pc = 0x25dfd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25dfd8: 0x8097116
    ctx->pc = 0x25DFD8u;
    ctx->pc = 0x25DFDCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x25C458u;
    AudioVQueAdd4_0x25c458(rdram, ctx, runtime); return;
    ctx->pc = 0x25DFE0u;
label_25dfe0:
    // 0x25dfe0: 0xdfbf0010
    ctx->pc = 0x25dfe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25dfe4:
    // 0x25dfe4: 0xdfb00000
    ctx->pc = 0x25dfe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25dfe8: 0x3e00008
    ctx->pc = 0x25DFE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DFECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25DFE0u: goto label_25dfe0;
            case 0x25DFE4u: goto label_25dfe4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25DFF0u;
}
