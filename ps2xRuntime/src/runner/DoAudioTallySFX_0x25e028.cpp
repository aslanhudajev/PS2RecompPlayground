#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoAudioTallySFX
// Address: 0x25e028 - 0x25e0b8
void DoAudioTallySFX_0x25e028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25e028u;

    // 0x25e028: 0x27bdffe0
    ctx->pc = 0x25e028u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25e02c: 0xffbf0010
    ctx->pc = 0x25e02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25e030: 0xffb00000
    ctx->pc = 0x25e030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25e034: 0x3c030034
    ctx->pc = 0x25e034u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x25e038: 0x2463d4d8
    ctx->pc = 0x25e038u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294956248));
    // 0x25e03c: 0x3c020034
    ctx->pc = 0x25e03cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25e040: 0x8c42e89c
    ctx->pc = 0x25e040u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x25e044: 0x21080
    ctx->pc = 0x25e044u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x25e048: 0x431021
    ctx->pc = 0x25e048u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25e04c: 0x8c500000
    ctx->pc = 0x25e04cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25e050: 0x6000016
    ctx->pc = 0x25E050u;
    {
        const bool branch_taken_0x25e050 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x25E054u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x25e050) {
            ctx->pc = 0x25E0ACu;
            goto label_25e0ac;
        }
    }
    ctx->pc = 0x25E058u;
    // 0x25e058: 0x1080000c
    ctx->pc = 0x25E058u;
    {
        const bool branch_taken_0x25e058 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x25e058) {
            ctx->pc = 0x25E08Cu;
            goto label_25e08c;
        }
    }
    ctx->pc = 0x25E060u;
    // 0x25e060: 0xc08878c
    ctx->pc = 0x25E060u;
    SET_GPR_U32(ctx, 31, 0x25E068u);
    ctx->pc = 0x25E064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x221E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSoundExists_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E068u; }
    }
    if (ctx->pc != 0x25E068u) { return; }
    ctx->pc = 0x25E068u;
    // 0x25e068: 0x14400010
    ctx->pc = 0x25E068u;
    {
        const bool branch_taken_0x25e068 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25E06Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x25e068) {
            ctx->pc = 0x25E0ACu;
            goto label_25e0ac;
        }
    }
    ctx->pc = 0x25E070u;
    // 0x25e070: 0x200202d
    ctx->pc = 0x25e070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e074: 0x282d
    ctx->pc = 0x25e074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e078: 0x240600e0
    ctx->pc = 0x25e078u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25e07c: 0x2407007b
    ctx->pc = 0x25e07cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 123));
    // 0x25e080: 0xdfb00000
    ctx->pc = 0x25e080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e084: 0x8088aa2
    ctx->pc = 0x25E084u;
    ctx->pc = 0x25E088u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x222A88u;
    AudioLOOP_0x222a88(rdram, ctx, runtime); return;
    ctx->pc = 0x25E08Cu;
label_25e08c:
    // 0x25e08c: 0xc08878c
    ctx->pc = 0x25E08Cu;
    SET_GPR_U32(ctx, 31, 0x25E094u);
    ctx->pc = 0x25E090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x221E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSoundExists_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E094u; }
    }
    if (ctx->pc != 0x25E094u) { return; }
    ctx->pc = 0x25E094u;
    // 0x25e094: 0x10400005
    ctx->pc = 0x25E094u;
    {
        const bool branch_taken_0x25e094 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25E098u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x25e094) {
            ctx->pc = 0x25E0ACu;
            goto label_25e0ac;
        }
    }
    ctx->pc = 0x25E09Cu;
    // 0x25e09c: 0x200202d
    ctx->pc = 0x25e09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e0a0: 0xdfb00000
    ctx->pc = 0x25e0a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e0a4: 0x808870e
    ctx->pc = 0x25E0A4u;
    ctx->pc = 0x25E0A8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x221C38u;
    AudioSoundKill_0x221c38(rdram, ctx, runtime); return;
    ctx->pc = 0x25E0ACu;
label_25e0ac:
    // 0x25e0ac: 0xdfb00000
    ctx->pc = 0x25e0acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e0b0: 0x3e00008
    ctx->pc = 0x25E0B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E0B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25E08Cu: goto label_25e08c;
            case 0x25E0ACu: goto label_25e0ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25E0B8u;
}
