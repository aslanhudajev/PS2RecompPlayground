#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioPlayerStolen
// Address: 0x25e638 - 0x25e6d4
void AudioPlayerStolen_0x25e638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25e638u;

    // 0x25e638: 0x27bdffd0
    ctx->pc = 0x25e638u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25e63c: 0xffbf0020
    ctx->pc = 0x25e63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25e640: 0xffb10010
    ctx->pc = 0x25e640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25e644: 0xffb00000
    ctx->pc = 0x25e644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25e648: 0x24032b00
    ctx->pc = 0x25e648u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x25e64c: 0x831818
    ctx->pc = 0x25e64cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25e650: 0x3c020032
    ctx->pc = 0x25e650u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25e654: 0x24421bc0
    ctx->pc = 0x25e654u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x25e658: 0xc0975da
    ctx->pc = 0x25E658u;
    SET_GPR_U32(ctx, 31, 0x25E660u);
    ctx->pc = 0x25E65Cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x25D768u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_chicken_0x25d768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E660u; }
    }
    if (ctx->pc != 0x25E660u) { return; }
    ctx->pc = 0x25E660u;
    // 0x25e660: 0x14400018
    ctx->pc = 0x25E660u;
    {
        const bool branch_taken_0x25e660 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25E664u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x25e660) {
            ctx->pc = 0x25E6C4u;
            goto label_25e6c4;
        }
    }
    ctx->pc = 0x25E668u;
    // 0x25e668: 0x3c020034
    ctx->pc = 0x25e668u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25e66c: 0x2451d6d0
    ctx->pc = 0x25e66cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294956752));
    // 0x25e670: 0x8e020008
    ctx->pc = 0x25e670u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x25e674: 0x21080
    ctx->pc = 0x25e674u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x25e678: 0x511021
    ctx->pc = 0x25e678u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x25e67c: 0x8c420000
    ctx->pc = 0x25e67cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25e680: 0x4420011
    ctx->pc = 0x25E680u;
    {
        const bool branch_taken_0x25e680 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x25e680) {
            ctx->pc = 0x25E684u;
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x25E6C8u;
            goto label_25e6c8;
        }
    }
    ctx->pc = 0x25E688u;
    // 0x25e688: 0xc088648
    ctx->pc = 0x25E688u;
    SET_GPR_U32(ctx, 31, 0x25E690u);
    ctx->pc = 0x25E68Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 80));
    ctx->pc = 0x221920u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioAng_0x221920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E690u; }
    }
    if (ctx->pc != 0x25E690u) { return; }
    ctx->pc = 0x25E690u;
    // 0x25e690: 0x8e030008
    ctx->pc = 0x25e690u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x25e694: 0x31880
    ctx->pc = 0x25e694u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x25e698: 0x711821
    ctx->pc = 0x25e698u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x25e69c: 0x8c640000
    ctx->pc = 0x25e69cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25e6a0: 0x240500c0
    ctx->pc = 0x25e6a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 192));
    // 0x25e6a4: 0x40302d
    ctx->pc = 0x25e6a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e6a8: 0x3c01bf80
    ctx->pc = 0x25e6a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x25e6ac: 0x44816000
    ctx->pc = 0x25e6acu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25e6b0: 0x3c013f80
    ctx->pc = 0x25e6b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x25e6b4: 0x44816800
    ctx->pc = 0x25e6b4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x25e6b8: 0xc088c86
    ctx->pc = 0x25E6B8u;
    SET_GPR_U32(ctx, 31, 0x25E6C0u);
    ctx->pc = 0x25E6BCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 110));
    ctx->pc = 0x223218u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioQueAdd4_0x223218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E6C0u; }
    }
    if (ctx->pc != 0x25E6C0u) { return; }
    ctx->pc = 0x25E6C0u;
    // 0x25e6c0: 0xdfbf0020
    ctx->pc = 0x25e6c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25e6c4:
    // 0x25e6c4: 0xdfb10010
    ctx->pc = 0x25e6c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25e6c8:
    // 0x25e6c8: 0xdfb00000
    ctx->pc = 0x25e6c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e6cc: 0x3e00008
    ctx->pc = 0x25E6CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E6D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25E6C4u: goto label_25e6c4;
            case 0x25E6C8u: goto label_25e6c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25E6D4u;
}
