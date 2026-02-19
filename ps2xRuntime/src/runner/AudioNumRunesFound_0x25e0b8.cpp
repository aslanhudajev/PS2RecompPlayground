#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioNumRunesFound
// Address: 0x25e0b8 - 0x25e170
void AudioNumRunesFound_0x25e0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25e0b8u;

    // 0x25e0b8: 0x27bdfff0
    ctx->pc = 0x25e0b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25e0bc: 0x18800029
    ctx->pc = 0x25E0BCu;
    {
        const bool branch_taken_0x25e0bc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x25E0C0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x25e0bc) {
            ctx->pc = 0x25E164u;
            goto label_25e164;
        }
    }
    ctx->pc = 0x25E0C4u;
    // 0x25e0c4: 0x24020001
    ctx->pc = 0x25e0c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x25e0c8: 0x1482000c
    ctx->pc = 0x25E0C8u;
    {
        const bool branch_taken_0x25e0c8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x25E0CCu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 13));
        if (branch_taken_0x25e0c8) {
            ctx->pc = 0x25E0FCu;
            goto label_25e0fc;
        }
    }
    ctx->pc = 0x25E0D0u;
    // 0x25e0d0: 0x3c040001
    ctx->pc = 0x25e0d0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)1 << 16));
    // 0x25e0d4: 0x34840030
    ctx->pc = 0x25e0d4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 48));
    // 0x25e0d8: 0x240500e0
    ctx->pc = 0x25e0d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25e0dc: 0x2406007f
    ctx->pc = 0x25e0dcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25e0e0: 0x24070002
    ctx->pc = 0x25e0e0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    // 0x25e0e4: 0x3c01bf80
    ctx->pc = 0x25e0e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x25e0e8: 0x44816000
    ctx->pc = 0x25e0e8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25e0ec: 0x46006346
    ctx->pc = 0x25e0ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x25e0f0: 0xdfbf0000
    ctx->pc = 0x25e0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e0f4: 0x8097116
    ctx->pc = 0x25E0F4u;
    ctx->pc = 0x25E0F8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x25C458u;
    AudioVQueAdd4_0x25c458(rdram, ctx, runtime); return;
    ctx->pc = 0x25E0FCu;
label_25e0fc:
    // 0x25e0fc: 0x1040001a
    ctx->pc = 0x25E0FCu;
    {
        const bool branch_taken_0x25e0fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25E100u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x25e0fc) {
            ctx->pc = 0x25E168u;
            goto label_25e168;
        }
    }
    ctx->pc = 0x25E104u;
    // 0x25e104: 0x3c030034
    ctx->pc = 0x25e104u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x25e108: 0x2463d510
    ctx->pc = 0x25e108u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294956304));
    // 0x25e10c: 0x2482fffe
    ctx->pc = 0x25e10cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x25e110: 0x21080
    ctx->pc = 0x25e110u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x25e114: 0x431021
    ctx->pc = 0x25e114u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25e118: 0x8c440000
    ctx->pc = 0x25e118u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25e11c: 0x240500e0
    ctx->pc = 0x25e11cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25e120: 0x2406007f
    ctx->pc = 0x25e120u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25e124: 0x24070002
    ctx->pc = 0x25e124u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    // 0x25e128: 0x3c01bf80
    ctx->pc = 0x25e128u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x25e12c: 0x44816000
    ctx->pc = 0x25e12cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25e130: 0xc097116
    ctx->pc = 0x25E130u;
    SET_GPR_U32(ctx, 31, 0x25E138u);
    ctx->pc = 0x25E134u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x25C458u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioVQueAdd4_0x25c458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E138u; }
    }
    if (ctx->pc != 0x25E138u) { return; }
    ctx->pc = 0x25E138u;
    // 0x25e138: 0x3c040001
    ctx->pc = 0x25e138u;
    SET_GPR_U32(ctx, 4, ((uint32_t)1 << 16));
    // 0x25e13c: 0x34840031
    ctx->pc = 0x25e13cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 49));
    // 0x25e140: 0x240500e0
    ctx->pc = 0x25e140u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25e144: 0x2406007f
    ctx->pc = 0x25e144u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25e148: 0x24070002
    ctx->pc = 0x25e148u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    // 0x25e14c: 0x3c01bf80
    ctx->pc = 0x25e14cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x25e150: 0x44816000
    ctx->pc = 0x25e150u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25e154: 0x46006346
    ctx->pc = 0x25e154u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x25e158: 0xdfbf0000
    ctx->pc = 0x25e158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e15c: 0x8097116
    ctx->pc = 0x25E15Cu;
    ctx->pc = 0x25E160u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x25C458u;
    AudioVQueAdd4_0x25c458(rdram, ctx, runtime); return;
    ctx->pc = 0x25E164u;
label_25e164:
    // 0x25e164: 0xdfbf0000
    ctx->pc = 0x25e164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25e168:
    // 0x25e168: 0x3e00008
    ctx->pc = 0x25E168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E16Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25E0FCu: goto label_25e0fc;
            case 0x25E164u: goto label_25e164;
            case 0x25E168u: goto label_25e168;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25E170u;
}
