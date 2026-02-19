#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: videoDecFlush
// Address: 0x2de1f0 - 0x2de2c8
void videoDecFlush_0x2de1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2de1f0u;

    // 0x2de1f0: 0x27bdffc0
    ctx->pc = 0x2de1f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2de1f4: 0xffbf0030
    ctx->pc = 0x2de1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2de1f8: 0xffb00020
    ctx->pc = 0x2de1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2de1fc: 0x80802d
    ctx->pc = 0x2de1fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de200: 0x3c02003c
    ctx->pc = 0x2de200u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2de204: 0x24468898
    ctx->pc = 0x2de204u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294936728));
    // 0x2de208: 0x88c30003
    ctx->pc = 0x2de208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 3, (GPR_U32(ctx, 3) & ~mask) | ((aligned_word << shift) & mask)); }
    // 0x2de20c: 0x98c30000
    ctx->pc = 0x2de20cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 3, (GPR_U32(ctx, 3) & ~mask) | ((aligned_word >> shift) & mask)); }
    // 0x2de210: 0xaba30003
    ctx->pc = 0x2de210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 3) >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2de214: 0xbba30000
    ctx->pc = 0x2de214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 3) << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2de218: 0x200202d
    ctx->pc = 0x2de218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de21c: 0x27a50010
    ctx->pc = 0x2de21cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    // 0x2de220: 0x27a60014
    ctx->pc = 0x2de220u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 20));
    // 0x2de224: 0x27a70018
    ctx->pc = 0x2de224u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 24));
    // 0x2de228: 0xc0b7838
    ctx->pc = 0x2DE228u;
    SET_GPR_U32(ctx, 31, 0x2DE230u);
    ctx->pc = 0x2DE22Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 28));
    ctx->pc = 0x2DE0E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        videoDecBeginPut_0x2de0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE230u; }
    }
    if (ctx->pc != 0x2DE230u) { return; }
    ctx->pc = 0x2DE230u;
    // 0x2de230: 0x8fa20014
    ctx->pc = 0x2de230u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2de234: 0x8fa3001c
    ctx->pc = 0x2de234u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2de238: 0x431021
    ctx->pc = 0x2de238u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2de23c: 0x28420004
    ctx->pc = 0x2de23cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
    // 0x2de240: 0x1440001d
    ctx->pc = 0x2DE240u;
    {
        const bool branch_taken_0x2de240 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DE244u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2de240) {
            ctx->pc = 0x2DE2B8u;
            goto label_2de2b8;
        }
    }
    ctx->pc = 0x2DE248u;
    // 0x2de248: 0x8fa40010
    ctx->pc = 0x2de248u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de24c: 0x3c020fff
    ctx->pc = 0x2de24cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x2de250: 0x3442ffff
    ctx->pc = 0x2de250u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2de254: 0x822024
    ctx->pc = 0x2de254u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2de258: 0x3c032000
    ctx->pc = 0x2de258u;
    SET_GPR_U32(ctx, 3, ((uint32_t)8192 << 16));
    // 0x2de25c: 0x8fa60018
    ctx->pc = 0x2de25cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2de260: 0xc23024
    ctx->pc = 0x2de260u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2de264: 0x832025
    ctx->pc = 0x2de264u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2de268: 0x8fa50014
    ctx->pc = 0x2de268u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2de26c: 0xc33025
    ctx->pc = 0x2de26cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2de270: 0x8fa7001c
    ctx->pc = 0x2de270u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2de274: 0x3a0402d
    ctx->pc = 0x2de274u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de278: 0x24090004
    ctx->pc = 0x2de278u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2de27c: 0x502d
    ctx->pc = 0x2de27cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de280: 0xc0b79b6
    ctx->pc = 0x2DE280u;
    SET_GPR_U32(ctx, 31, 0x2DE288u);
    ctx->pc = 0x2DE284u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DE6D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cpy2area_0x2de6d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE288u; }
    }
    if (ctx->pc != 0x2DE288u) { return; }
    ctx->pc = 0x2DE288u;
    // 0x2de288: 0x3c04003a
    ctx->pc = 0x2de288u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2de28c: 0x24842a40
    ctx->pc = 0x2de28cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10816));
    // 0x2de290: 0xc0b783a
    ctx->pc = 0x2DE290u;
    SET_GPR_U32(ctx, 31, 0x2DE298u);
    ctx->pc = 0x2DE294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DE0E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        videoDecEndPut_0x2de0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE298u; }
    }
    if (ctx->pc != 0x2DE298u) { return; }
    ctx->pc = 0x2DE298u;
    // 0x2de298: 0xc0b7f3e
    ctx->pc = 0x2DE298u;
    SET_GPR_U32(ctx, 31, 0x2DE2A0u);
    ctx->pc = 0x2DE29Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 72));
    ctx->pc = 0x2DFCF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufFlush_0x2dfcf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE2A0u; }
    }
    if (ctx->pc != 0x2DE2A0u) { return; }
    ctx->pc = 0x2DE2A0u;
    // 0x2de2a0: 0x8e0200a8
    ctx->pc = 0x2de2a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x2de2a4: 0x14400004
    ctx->pc = 0x2DE2A4u;
    {
        const bool branch_taken_0x2de2a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DE2A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2de2a4) {
            ctx->pc = 0x2DE2B8u;
            goto label_2de2b8;
        }
    }
    ctx->pc = 0x2DE2ACu;
    // 0x2de2ac: 0x24020002
    ctx->pc = 0x2de2acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2de2b0: 0xae0200a8
    ctx->pc = 0x2de2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    // 0x2de2b4: 0x24020001
    ctx->pc = 0x2de2b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2de2b8:
    // 0x2de2b8: 0xdfbf0030
    ctx->pc = 0x2de2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de2bc: 0xdfb00020
    ctx->pc = 0x2de2bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de2c0: 0x3e00008
    ctx->pc = 0x2DE2C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE2C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DE2B8u: goto label_2de2b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DE2C8u;
}
