#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: videoDecFlush
// Address: 0x11a1f0 - 0x11a2bc
void videoDecFlush_0x11a1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11a1f0u;

    // 0x11a1f0: 0x27bdffc0
    ctx->pc = 0x11a1f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11a1f4: 0x3c020017
    ctx->pc = 0x11a1f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
    // 0x11a1f8: 0xffb00020
    ctx->pc = 0x11a1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x11a1fc: 0x27a50010
    ctx->pc = 0x11a1fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    // 0x11a200: 0xffbf0030
    ctx->pc = 0x11a200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11a204: 0x80802d
    ctx->pc = 0x11a204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a208: 0x27a60014
    ctx->pc = 0x11a208u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 20));
    // 0x11a20c: 0x27a70018
    ctx->pc = 0x11a20cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 24));
    // 0x11a210: 0x244b5f20
    ctx->pc = 0x11a210u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 2), 24352));
    // 0x11a214: 0x89630003
    ctx->pc = 0x11a214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 3); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 3, (GPR_U32(ctx, 3) & ~mask) | ((aligned_word << shift) & mask)); }
    // 0x11a218: 0x99630000
    ctx->pc = 0x11a218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 3, (GPR_U32(ctx, 3) & ~mask) | ((aligned_word >> shift) & mask)); }
    // 0x11a21c: 0xaba30003
    ctx->pc = 0x11a21cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 3) >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x11a220: 0xbba30000
    ctx->pc = 0x11a220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 3) << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x11a224: 0xc046836
    ctx->pc = 0x11A224u;
    SET_GPR_U32(ctx, 31, 0x11A22Cu);
    ctx->pc = 0x11A228u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 28));
    ctx->pc = 0x11A0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        videoDecBeginPut_0x11a0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A22Cu; }
    }
    if (ctx->pc != 0x11A22Cu) { return; }
    ctx->pc = 0x11A22Cu;
    // 0x11a22c: 0x8fa50014
    ctx->pc = 0x11a22cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11a230: 0x8fa7001c
    ctx->pc = 0x11a230u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x11a234: 0xa71021
    ctx->pc = 0x11a234u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x11a238: 0x28420004
    ctx->pc = 0x11a238u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
    // 0x11a23c: 0x1440001b
    ctx->pc = 0x11A23Cu;
    {
        const bool branch_taken_0x11a23c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11A240u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11a23c) {
            ctx->pc = 0x11A2ACu;
            goto label_11a2ac;
        }
    }
    ctx->pc = 0x11A244u;
    // 0x11a244: 0x8fa40010
    ctx->pc = 0x11a244u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a248: 0x3c020fff
    ctx->pc = 0x11a248u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x11a24c: 0x8fa60018
    ctx->pc = 0x11a24cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11a250: 0x3442ffff
    ctx->pc = 0x11a250u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x11a254: 0x3c032000
    ctx->pc = 0x11a254u;
    SET_GPR_U32(ctx, 3, ((uint32_t)8192 << 16));
    // 0x11a258: 0x822024
    ctx->pc = 0x11a258u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11a25c: 0xc23024
    ctx->pc = 0x11a25cu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11a260: 0x832025
    ctx->pc = 0x11a260u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11a264: 0xc33025
    ctx->pc = 0x11a264u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x11a268: 0x3a0402d
    ctx->pc = 0x11a268u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a26c: 0x24090004
    ctx->pc = 0x11a26cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4));
    // 0x11a270: 0x502d
    ctx->pc = 0x11a270u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a274: 0xc0469e6
    ctx->pc = 0x11A274u;
    SET_GPR_U32(ctx, 31, 0x11A27Cu);
    ctx->pc = 0x11A278u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11A798u;
    {
        const uint32_t __entryPc = ctx->pc;
        cpy2area_0x11a798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A27Cu; }
    }
    if (ctx->pc != 0x11A27Cu) { return; }
    ctx->pc = 0x11A27Cu;
    // 0x11a27c: 0x3c040075
    ctx->pc = 0x11a27cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)117 << 16));
    // 0x11a280: 0x40282d
    ctx->pc = 0x11a280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a284: 0xc046838
    ctx->pc = 0x11A284u;
    SET_GPR_U32(ctx, 31, 0x11A28Cu);
    ctx->pc = 0x11A288u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294960584));
    ctx->pc = 0x11A0E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        videoDecEndPut_0x11a0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A28Cu; }
    }
    if (ctx->pc != 0x11A28Cu) { return; }
    ctx->pc = 0x11A28Cu;
    // 0x11a28c: 0xc0472bc
    ctx->pc = 0x11A28Cu;
    SET_GPR_U32(ctx, 31, 0x11A294u);
    ctx->pc = 0x11A290u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 72));
    ctx->pc = 0x11CAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufFlush_0x11caf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A294u; }
    }
    if (ctx->pc != 0x11A294u) { return; }
    ctx->pc = 0x11A294u;
    // 0x11a294: 0x8e0200a8
    ctx->pc = 0x11a294u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x11a298: 0x14400004
    ctx->pc = 0x11A298u;
    {
        const bool branch_taken_0x11a298 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11A29Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x11a298) {
            ctx->pc = 0x11A2ACu;
            goto label_11a2ac;
        }
    }
    ctx->pc = 0x11A2A0u;
    // 0x11a2a0: 0x24020002
    ctx->pc = 0x11a2a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x11a2a4: 0xae0200a8
    ctx->pc = 0x11a2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    // 0x11a2a8: 0x24020001
    ctx->pc = 0x11a2a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_11a2ac:
    // 0x11a2ac: 0xdfbf0030
    ctx->pc = 0x11a2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a2b0: 0xdfb00020
    ctx->pc = 0x11a2b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a2b4: 0x3e00008
    ctx->pc = 0x11A2B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A2B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11A2ACu: goto label_11a2ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11A2BCu;
}
