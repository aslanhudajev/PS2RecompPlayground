#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioPlayerSeverePain
// Address: 0x25e360 - 0x25e3fc
void AudioPlayerSeverePain_0x25e360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25e360u;

    // 0x25e360: 0x27bdffd0
    ctx->pc = 0x25e360u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25e364: 0xffbf0020
    ctx->pc = 0x25e364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25e368: 0xffb10010
    ctx->pc = 0x25e368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25e36c: 0xffb00000
    ctx->pc = 0x25e36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25e370: 0x24032b00
    ctx->pc = 0x25e370u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x25e374: 0x831818
    ctx->pc = 0x25e374u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25e378: 0x3c020032
    ctx->pc = 0x25e378u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25e37c: 0x24421bc0
    ctx->pc = 0x25e37cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x25e380: 0x628021
    ctx->pc = 0x25e380u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25e384: 0x8e0300fc
    ctx->pc = 0x25e384u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x25e388: 0x24020001
    ctx->pc = 0x25e388u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x25e38c: 0x14620017
    ctx->pc = 0x25E38Cu;
    {
        const bool branch_taken_0x25e38c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x25E390u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x25e38c) {
            ctx->pc = 0x25E3ECu;
            goto label_25e3ec;
        }
    }
    ctx->pc = 0x25E394u;
    // 0x25e394: 0x8e020134
    ctx->pc = 0x25e394u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x25e398: 0x3c030001
    ctx->pc = 0x25e398u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x25e39c: 0x431024
    ctx->pc = 0x25e39cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25e3a0: 0x14400013
    ctx->pc = 0x25E3A0u;
    {
        const bool branch_taken_0x25e3a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25E3A4u;
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x25e3a0) {
            ctx->pc = 0x25E3F0u;
            goto label_25e3f0;
        }
    }
    ctx->pc = 0x25E3A8u;
    // 0x25e3a8: 0x3c030034
    ctx->pc = 0x25e3a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x25e3ac: 0x2463d5f0
    ctx->pc = 0x25e3acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294956528));
    // 0x25e3b0: 0x8e020008
    ctx->pc = 0x25e3b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x25e3b4: 0x21080
    ctx->pc = 0x25e3b4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x25e3b8: 0x431021
    ctx->pc = 0x25e3b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25e3bc: 0x8c510000
    ctx->pc = 0x25e3bcu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25e3c0: 0x622000b
    ctx->pc = 0x25E3C0u;
    {
        const bool branch_taken_0x25e3c0 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x25e3c0) {
            ctx->pc = 0x25E3C4u;
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x25E3F0u;
            goto label_25e3f0;
        }
    }
    ctx->pc = 0x25E3C8u;
    // 0x25e3c8: 0xc0975da
    ctx->pc = 0x25E3C8u;
    SET_GPR_U32(ctx, 31, 0x25E3D0u);
    ctx->pc = 0x25D768u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_chicken_0x25d768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E3D0u; }
    }
    if (ctx->pc != 0x25E3D0u) { return; }
    ctx->pc = 0x25E3D0u;
    // 0x25e3d0: 0x24040060
    ctx->pc = 0x25e3d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 96));
    // 0x25e3d4: 0x222200a
    ctx->pc = 0x25e3d4u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 17));
    // 0x25e3d8: 0x26050050
    ctx->pc = 0x25e3d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 80));
    // 0x25e3dc: 0x240600e0
    ctx->pc = 0x25e3dcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25e3e0: 0xc088a26
    ctx->pc = 0x25E3E0u;
    SET_GPR_U32(ctx, 31, 0x25E3E8u);
    ctx->pc = 0x25E3E4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 62));
    ctx->pc = 0x222898u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSFX_0x222898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E3E8u; }
    }
    if (ctx->pc != 0x25E3E8u) { return; }
    ctx->pc = 0x25E3E8u;
    // 0x25e3e8: 0xdfbf0020
    ctx->pc = 0x25e3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25e3ec:
    // 0x25e3ec: 0xdfb10010
    ctx->pc = 0x25e3ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25e3f0:
    // 0x25e3f0: 0xdfb00000
    ctx->pc = 0x25e3f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e3f4: 0x3e00008
    ctx->pc = 0x25E3F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E3F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25E3ECu: goto label_25e3ec;
            case 0x25E3F0u: goto label_25e3f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25E3FCu;
}
