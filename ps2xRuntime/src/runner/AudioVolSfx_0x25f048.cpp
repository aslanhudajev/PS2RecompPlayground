#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioVolSfx
// Address: 0x25f048 - 0x25f0e8
void AudioVolSfx_0x25f048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25f048u;

    // 0x25f048: 0x27bdffd0
    ctx->pc = 0x25f048u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25f04c: 0xffbf0020
    ctx->pc = 0x25f04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25f050: 0xffb10010
    ctx->pc = 0x25f050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25f054: 0xffb00000
    ctx->pc = 0x25f054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25f058: 0x3c030032
    ctx->pc = 0x25f058u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x25f05c: 0x8c71fd60
    ctx->pc = 0x25f05cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 3), 4294966624)));
    // 0x25f060: 0x24020001
    ctx->pc = 0x25f060u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x25f064: 0x10800008
    ctx->pc = 0x25F064u;
    {
        const bool branch_taken_0x25f064 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x25F068u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294966624), GPR_U32(ctx, 2));
        if (branch_taken_0x25f064) {
            ctx->pc = 0x25F088u;
            goto label_25f088;
        }
    }
    ctx->pc = 0x25F06Cu;
    // 0x25f06c: 0x24040014
    ctx->pc = 0x25f06cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 20));
    // 0x25f070: 0x2405007f
    ctx->pc = 0x25f070u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25f074: 0x2406007f
    ctx->pc = 0x25f074u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25f078: 0xc088a4a
    ctx->pc = 0x25F078u;
    SET_GPR_U32(ctx, 31, 0x25F080u);
    ctx->pc = 0x25F07Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x222928u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSFX2_0x222928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F080u; }
    }
    if (ctx->pc != 0x25F080u) { return; }
    ctx->pc = 0x25F080u;
    // 0x25f080: 0x10000013
    ctx->pc = 0x25F080u;
    {
        const bool branch_taken_0x25f080 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25F084u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x25f080) {
            ctx->pc = 0x25F0D0u;
            goto label_25f0d0;
        }
    }
    ctx->pc = 0x25F088u;
label_25f088:
    // 0x25f088: 0x3c020034
    ctx->pc = 0x25f088u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25f08c: 0x2442daa8
    ctx->pc = 0x25f08cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957736));
    // 0x25f090: 0x3c100034
    ctx->pc = 0x25f090u;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x25f094: 0x8e03daa0
    ctx->pc = 0x25f094u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4294957728)));
    // 0x25f098: 0x31880
    ctx->pc = 0x25f098u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x25f09c: 0x621821
    ctx->pc = 0x25f09cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25f0a0: 0x8c640000
    ctx->pc = 0x25f0a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25f0a4: 0x2405007f
    ctx->pc = 0x25f0a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25f0a8: 0x2406007f
    ctx->pc = 0x25f0a8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25f0ac: 0xc088a4a
    ctx->pc = 0x25F0ACu;
    SET_GPR_U32(ctx, 31, 0x25F0B4u);
    ctx->pc = 0x25F0B0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x222928u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSFX2_0x222928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F0B4u; }
    }
    if (ctx->pc != 0x25F0B4u) { return; }
    ctx->pc = 0x25F0B4u;
    // 0x25f0b4: 0x8e02daa0
    ctx->pc = 0x25f0b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294957728)));
    // 0x25f0b8: 0x24420001
    ctx->pc = 0x25f0b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x25f0bc: 0xae02daa0
    ctx->pc = 0x25f0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294957728), GPR_U32(ctx, 2));
    // 0x25f0c0: 0x2c420002
    ctx->pc = 0x25f0c0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x25f0c4: 0x50400001
    ctx->pc = 0x25F0C4u;
    {
        const bool branch_taken_0x25f0c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x25f0c4) {
            ctx->pc = 0x25F0C8u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 4294957728), GPR_U32(ctx, 0));
            ctx->pc = 0x25F0CCu;
            goto label_25f0cc;
        }
    }
    ctx->pc = 0x25F0CCu;
label_25f0cc:
    // 0x25f0cc: 0x3c020032
    ctx->pc = 0x25f0ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_25f0d0:
    // 0x25f0d0: 0xac51fd60
    ctx->pc = 0x25f0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966624), GPR_U32(ctx, 17));
    // 0x25f0d4: 0xdfbf0020
    ctx->pc = 0x25f0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f0d8: 0xdfb10010
    ctx->pc = 0x25f0d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f0dc: 0xdfb00000
    ctx->pc = 0x25f0dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f0e0: 0x3e00008
    ctx->pc = 0x25F0E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F0E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25F088u: goto label_25f088;
            case 0x25F0CCu: goto label_25f0cc;
            case 0x25F0D0u: goto label_25f0d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25F0E8u;
}
