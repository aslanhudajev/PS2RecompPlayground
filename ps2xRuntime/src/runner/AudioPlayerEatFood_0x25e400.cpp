#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioPlayerEatFood
// Address: 0x25e400 - 0x25e4b4
void AudioPlayerEatFood_0x25e400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25e400u;

    // 0x25e400: 0x27bdffc0
    ctx->pc = 0x25e400u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25e404: 0xffbf0030
    ctx->pc = 0x25e404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25e408: 0xffb20020
    ctx->pc = 0x25e408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25e40c: 0xffb10010
    ctx->pc = 0x25e40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25e410: 0xffb00000
    ctx->pc = 0x25e410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25e414: 0xa0882d
    ctx->pc = 0x25e414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e418: 0x24032b00
    ctx->pc = 0x25e418u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x25e41c: 0x831818
    ctx->pc = 0x25e41cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25e420: 0x3c020032
    ctx->pc = 0x25e420u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25e424: 0x24421bc0
    ctx->pc = 0x25e424u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x25e428: 0xc0975da
    ctx->pc = 0x25E428u;
    SET_GPR_U32(ctx, 31, 0x25E430u);
    ctx->pc = 0x25E42Cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x25D768u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_chicken_0x25d768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E430u; }
    }
    if (ctx->pc != 0x25E430u) { return; }
    ctx->pc = 0x25E430u;
    // 0x25e430: 0x1440001b
    ctx->pc = 0x25E430u;
    {
        const bool branch_taken_0x25e430 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25E434u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x25e430) {
            ctx->pc = 0x25E4A0u;
            goto label_25e4a0;
        }
    }
    ctx->pc = 0x25E438u;
    // 0x25e438: 0x3c020034
    ctx->pc = 0x25e438u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25e43c: 0x2452d610
    ctx->pc = 0x25e43cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294956560));
    // 0x25e440: 0x118880
    ctx->pc = 0x25e440u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 2));
    // 0x25e444: 0x8e020008
    ctx->pc = 0x25e444u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x25e448: 0x21100
    ctx->pc = 0x25e448u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x25e44c: 0x2221021
    ctx->pc = 0x25e44cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x25e450: 0x521021
    ctx->pc = 0x25e450u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x25e454: 0x8c420000
    ctx->pc = 0x25e454u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25e458: 0x4420012
    ctx->pc = 0x25E458u;
    {
        const bool branch_taken_0x25e458 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x25e458) {
            ctx->pc = 0x25E45Cu;
            SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->pc = 0x25E4A4u;
            goto label_25e4a4;
        }
    }
    ctx->pc = 0x25E460u;
    // 0x25e460: 0xc088648
    ctx->pc = 0x25E460u;
    SET_GPR_U32(ctx, 31, 0x25E468u);
    ctx->pc = 0x25E464u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 80));
    ctx->pc = 0x221920u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioAng_0x221920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E468u; }
    }
    if (ctx->pc != 0x25E468u) { return; }
    ctx->pc = 0x25E468u;
    // 0x25e468: 0x8e030008
    ctx->pc = 0x25e468u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x25e46c: 0x31900
    ctx->pc = 0x25e46cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x25e470: 0x2231821
    ctx->pc = 0x25e470u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x25e474: 0x721821
    ctx->pc = 0x25e474u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x25e478: 0x8c640000
    ctx->pc = 0x25e478u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25e47c: 0x240500c0
    ctx->pc = 0x25e47cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 192));
    // 0x25e480: 0x40302d
    ctx->pc = 0x25e480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e484: 0x3c01bf80
    ctx->pc = 0x25e484u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x25e488: 0x44816000
    ctx->pc = 0x25e488u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25e48c: 0x3c013f80
    ctx->pc = 0x25e48cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x25e490: 0x44816800
    ctx->pc = 0x25e490u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x25e494: 0xc088c86
    ctx->pc = 0x25E494u;
    SET_GPR_U32(ctx, 31, 0x25E49Cu);
    ctx->pc = 0x25E498u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 66));
    ctx->pc = 0x223218u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioQueAdd4_0x223218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E49Cu; }
    }
    if (ctx->pc != 0x25E49Cu) { return; }
    ctx->pc = 0x25E49Cu;
    // 0x25e49c: 0xdfbf0030
    ctx->pc = 0x25e49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_25e4a0:
    // 0x25e4a0: 0xdfb20020
    ctx->pc = 0x25e4a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25e4a4:
    // 0x25e4a4: 0xdfb10010
    ctx->pc = 0x25e4a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e4a8: 0xdfb00000
    ctx->pc = 0x25e4a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e4ac: 0x3e00008
    ctx->pc = 0x25E4ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E4B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25E4A0u: goto label_25e4a0;
            case 0x25E4A4u: goto label_25e4a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25E4B4u;
}
