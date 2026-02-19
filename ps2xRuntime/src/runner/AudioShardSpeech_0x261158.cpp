#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioShardSpeech
// Address: 0x261158 - 0x2611d0
void AudioShardSpeech_0x261158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x261158u;

    // 0x261158: 0x28820009
    ctx->pc = 0x261158u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 9));
    // 0x26115c: 0x10400007
    ctx->pc = 0x26115Cu;
    {
        const bool branch_taken_0x26115c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x261160u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x26115c) {
            ctx->pc = 0x26117Cu;
            goto label_26117c;
        }
    }
    ctx->pc = 0x261164u;
    // 0x261164: 0x3c030034
    ctx->pc = 0x261164u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x261168: 0x2463e3b0
    ctx->pc = 0x261168u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294960048));
    // 0x26116c: 0x41080
    ctx->pc = 0x26116cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x261170: 0x431021
    ctx->pc = 0x261170u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261174: 0x1000000a
    ctx->pc = 0x261174u;
    {
        const bool branch_taken_0x261174 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x261178u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x261174) {
            ctx->pc = 0x2611A0u;
            goto label_2611a0;
        }
    }
    ctx->pc = 0x26117Cu;
label_26117c:
    // 0x26117c: 0x2402000f
    ctx->pc = 0x26117cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
    // 0x261180: 0x14820004
    ctx->pc = 0x261180u;
    {
        const bool branch_taken_0x261180 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x261184u;
        SET_GPR_U32(ctx, 3, ((uint32_t)3 << 16));
        if (branch_taken_0x261180) {
            ctx->pc = 0x261194u;
            goto label_261194;
        }
    }
    ctx->pc = 0x261188u;
    // 0x261188: 0x3c05000e
    ctx->pc = 0x261188u;
    SET_GPR_U32(ctx, 5, ((uint32_t)14 << 16));
    // 0x26118c: 0x10000004
    ctx->pc = 0x26118Cu;
    {
        const bool branch_taken_0x26118c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x261190u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 172));
        if (branch_taken_0x26118c) {
            ctx->pc = 0x2611A0u;
            goto label_2611a0;
        }
    }
    ctx->pc = 0x261194u;
label_261194:
    // 0x261194: 0x3463000b
    ctx->pc = 0x261194u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 11));
    // 0x261198: 0x38820010
    ctx->pc = 0x261198u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 16));
    // 0x26119c: 0x62280a
    ctx->pc = 0x26119cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
label_2611a0:
    // 0x2611a0: 0x4a00009
    ctx->pc = 0x2611A0u;
    {
        const bool branch_taken_0x2611a0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2611A4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2611a0) {
            ctx->pc = 0x2611C8u;
            goto label_2611c8;
        }
    }
    ctx->pc = 0x2611A8u;
    // 0x2611a8: 0x240600e0
    ctx->pc = 0x2611a8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x2611ac: 0x2407007f
    ctx->pc = 0x2611acu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 127));
    // 0x2611b0: 0x3c01bf80
    ctx->pc = 0x2611b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x2611b4: 0x44816000
    ctx->pc = 0x2611b4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2611b8: 0x3c014120
    ctx->pc = 0x2611b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x2611bc: 0x44816800
    ctx->pc = 0x2611bcu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x2611c0: 0x8088bd2
    ctx->pc = 0x2611C0u;
    ctx->pc = 0x2611C4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x222F48u;
    AudioAnyQueAdd4_0x222f48(rdram, ctx, runtime); return;
    ctx->pc = 0x2611C8u;
label_2611c8:
    // 0x2611c8: 0x3e00008
    ctx->pc = 0x2611C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26117Cu: goto label_26117c;
            case 0x261194u: goto label_261194;
            case 0x2611A0u: goto label_2611a0;
            case 0x2611C8u: goto label_2611c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2611D0u;
}
