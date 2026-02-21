#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: new_player
// Address: 0x231458 - 0x23150c
void new_player_0x231458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x231458u;

    // 0x231458: 0x27bdffc0
    ctx->pc = 0x231458u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23145c: 0xffbf0030
    ctx->pc = 0x23145cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x231460: 0xffb10020
    ctx->pc = 0x231460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x231464: 0xffb00010
    ctx->pc = 0x231464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x231468: 0x80882d
    ctx->pc = 0x231468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23146c: 0x24032b00
    ctx->pc = 0x23146cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x231470: 0x2231818
    ctx->pc = 0x231470u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x231474: 0x3c020032
    ctx->pc = 0x231474u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x231478: 0x24421bc0
    ctx->pc = 0x231478u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x23147c: 0x628021
    ctx->pc = 0x23147cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231480: 0xc08c4cc
    ctx->pc = 0x231480u;
    SET_GPR_U32(ctx, 31, 0x231488u);
    ctx->pc = 0x231484u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x231330u;
    {
        const uint32_t __entryPc = ctx->pc;
        clear_player_0x231330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231488u; }
    }
    if (ctx->pc != 0x231488u) { return; }
    ctx->pc = 0x231488u;
    // 0x231488: 0x3c020031
    ctx->pc = 0x231488u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x23148c: 0x8c42f184
    ctx->pc = 0x23148cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
    // 0x231490: 0x10400010
    ctx->pc = 0x231490u;
    {
        const bool branch_taken_0x231490 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x231494u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x231490) {
            ctx->pc = 0x2314D4u;
            goto label_2314d4;
        }
    }
    ctx->pc = 0x231498u;
    // 0x231498: 0x244677a8
    ctx->pc = 0x231498u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 30632));
    // 0x23149c: 0x68c30007
    ctx->pc = 0x23149cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x2314a0: 0x6cc30000
    ctx->pc = 0x2314a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x2314a4: 0x68c4000f
    ctx->pc = 0x2314a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x2314a8: 0x6cc40008
    ctx->pc = 0x2314a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x2314ac: 0xb3a30007
    ctx->pc = 0x2314acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2314b0: 0xb7a30000
    ctx->pc = 0x2314b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2314b4: 0xb3a4000f
    ctx->pc = 0x2314b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2314b8: 0xb7a40008
    ctx->pc = 0x2314b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2314bc: 0x8e020008
    ctx->pc = 0x2314bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2314c0: 0x30420003
    ctx->pc = 0x2314c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
    // 0x2314c4: 0x21080
    ctx->pc = 0x2314c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2314c8: 0x3a21021
    ctx->pc = 0x2314c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2314cc: 0x8c420000
    ctx->pc = 0x2314ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2314d0: 0xae020004
    ctx->pc = 0x2314d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_2314d4:
    // 0x2314d4: 0x24020002
    ctx->pc = 0x2314d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2314d8: 0xae0200fc
    ctx->pc = 0x2314d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
    // 0x2314dc: 0xae002ad4
    ctx->pc = 0x2314dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10964), GPR_U32(ctx, 0));
    // 0x2314e0: 0x2402ffff
    ctx->pc = 0x2314e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2314e4: 0xa20209a7
    ctx->pc = 0x2314e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2471), (uint8_t)GPR_U32(ctx, 2));
    // 0x2314e8: 0x2402ffff
    ctx->pc = 0x2314e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2314ec: 0xae022af4
    ctx->pc = 0x2314ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10996), GPR_U32(ctx, 2));
    // 0x2314f0: 0xc0a189a
    ctx->pc = 0x2314F0u;
    SET_GPR_U32(ctx, 31, 0x2314F8u);
    ctx->pc = 0x2314F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x286268u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset_sel_menu_0x286268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2314F8u; }
    }
    if (ctx->pc != 0x2314F8u) { return; }
    ctx->pc = 0x2314F8u;
    // 0x2314f8: 0xdfbf0030
    ctx->pc = 0x2314f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2314fc: 0xdfb10020
    ctx->pc = 0x2314fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231500: 0xdfb00010
    ctx->pc = 0x231500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231504: 0x3e00008
    ctx->pc = 0x231504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231508u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2314D4u: goto label_2314d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23150Cu;
}
