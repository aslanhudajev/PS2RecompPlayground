#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioPlayerObstruct
// Address: 0x25e6d8 - 0x25e774
void AudioPlayerObstruct_0x25e6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25e6d8u;

    // 0x25e6d8: 0x27bdffd0
    ctx->pc = 0x25e6d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25e6dc: 0xffbf0020
    ctx->pc = 0x25e6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25e6e0: 0xffb10010
    ctx->pc = 0x25e6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25e6e4: 0xffb00000
    ctx->pc = 0x25e6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25e6e8: 0x24032b00
    ctx->pc = 0x25e6e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x25e6ec: 0x831818
    ctx->pc = 0x25e6ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25e6f0: 0x3c020032
    ctx->pc = 0x25e6f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25e6f4: 0x24421bc0
    ctx->pc = 0x25e6f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x25e6f8: 0xc0975da
    ctx->pc = 0x25E6F8u;
    SET_GPR_U32(ctx, 31, 0x25E700u);
    ctx->pc = 0x25E6FCu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x25D768u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_chicken_0x25d768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E700u; }
    }
    if (ctx->pc != 0x25E700u) { return; }
    ctx->pc = 0x25E700u;
    // 0x25e700: 0x14400018
    ctx->pc = 0x25E700u;
    {
        const bool branch_taken_0x25e700 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25E704u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x25e700) {
            ctx->pc = 0x25E764u;
            goto label_25e764;
        }
    }
    ctx->pc = 0x25E708u;
    // 0x25e708: 0x3c020034
    ctx->pc = 0x25e708u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25e70c: 0x2451d6f0
    ctx->pc = 0x25e70cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294956784));
    // 0x25e710: 0x8e020008
    ctx->pc = 0x25e710u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x25e714: 0x21080
    ctx->pc = 0x25e714u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x25e718: 0x511021
    ctx->pc = 0x25e718u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x25e71c: 0x8c420000
    ctx->pc = 0x25e71cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25e720: 0x4420011
    ctx->pc = 0x25E720u;
    {
        const bool branch_taken_0x25e720 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x25e720) {
            ctx->pc = 0x25E724u;
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x25E768u;
            goto label_25e768;
        }
    }
    ctx->pc = 0x25E728u;
    // 0x25e728: 0xc088648
    ctx->pc = 0x25E728u;
    SET_GPR_U32(ctx, 31, 0x25E730u);
    ctx->pc = 0x25E72Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 80));
    ctx->pc = 0x221920u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioAng_0x221920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E730u; }
    }
    if (ctx->pc != 0x25E730u) { return; }
    ctx->pc = 0x25E730u;
    // 0x25e730: 0x8e030008
    ctx->pc = 0x25e730u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x25e734: 0x31880
    ctx->pc = 0x25e734u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x25e738: 0x711821
    ctx->pc = 0x25e738u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x25e73c: 0x8c640000
    ctx->pc = 0x25e73cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25e740: 0x240500c0
    ctx->pc = 0x25e740u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 192));
    // 0x25e744: 0x40302d
    ctx->pc = 0x25e744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e748: 0x3c01bf80
    ctx->pc = 0x25e748u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x25e74c: 0x44816000
    ctx->pc = 0x25e74cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25e750: 0x3c013f80
    ctx->pc = 0x25e750u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x25e754: 0x44816800
    ctx->pc = 0x25e754u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x25e758: 0xc088c86
    ctx->pc = 0x25E758u;
    SET_GPR_U32(ctx, 31, 0x25E760u);
    ctx->pc = 0x25E75Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 110));
    ctx->pc = 0x223218u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioQueAdd4_0x223218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E760u; }
    }
    if (ctx->pc != 0x25E760u) { return; }
    ctx->pc = 0x25E760u;
    // 0x25e760: 0xdfbf0020
    ctx->pc = 0x25e760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25e764:
    // 0x25e764: 0xdfb10010
    ctx->pc = 0x25e764u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25e768:
    // 0x25e768: 0xdfb00000
    ctx->pc = 0x25e768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e76c: 0x3e00008
    ctx->pc = 0x25E76Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E770u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25E764u: goto label_25e764;
            case 0x25E768u: goto label_25e768;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25E774u;
}
