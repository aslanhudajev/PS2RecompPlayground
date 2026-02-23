#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfbuf_SetSupSj
// Address: 0x191c00 - 0x191ca0
void sfbuf_SetSupSj_0x191c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfbuf_SetSupSj");


    ctx->pc = 0x191c00u;

    // 0x191c00: 0x27bdffa0
    ctx->pc = 0x191c00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x191c04: 0xffb00010
    ctx->pc = 0x191c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x191c08: 0x80802d
    ctx->pc = 0x191c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191c0c: 0xffb30040
    ctx->pc = 0x191c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x191c10: 0xffb20030
    ctx->pc = 0x191c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x191c14: 0xa0982d
    ctx->pc = 0x191c14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191c18: 0xffb10020
    ctx->pc = 0x191c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x191c1c: 0xc0902d
    ctx->pc = 0x191c1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191c20: 0xe0882d
    ctx->pc = 0x191c20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191c24: 0xffbf0050
    ctx->pc = 0x191c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x191c28: 0xc064f3a
    ctx->pc = 0x191C28u;
    SET_GPR_U32(ctx, 31, 0x191C30u);
    ctx->pc = 0x191C2Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_LockCs_0x193ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191C30u; }
        else if (ctx->pc != 0x191C30u) { ctx->pc = 0x191C30u; }
    }
    if (ctx->pc != 0x191C30u) { return; }
    ctx->pc = 0x191C30u;
    // 0x191c30: 0xae510004
    ctx->pc = 0x191c30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
    // 0x191c34: 0x26040018
    ctx->pc = 0x191c34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 24));
    // 0x191c38: 0x6a620007
    ctx->pc = 0x191c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x191c3c: 0x6e620000
    ctx->pc = 0x191c3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x191c40: 0x6a63000f
    ctx->pc = 0x191c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x191c44: 0x6e630008
    ctx->pc = 0x191c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x191c48: 0x6a650017
    ctx->pc = 0x191c48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x191c4c: 0x6e650010
    ctx->pc = 0x191c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x191c50: 0xb2020007
    ctx->pc = 0x191c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x191c54: 0xb6020000
    ctx->pc = 0x191c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x191c58: 0xb203000f
    ctx->pc = 0x191c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x191c5c: 0xb6030008
    ctx->pc = 0x191c5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x191c60: 0xb2050017
    ctx->pc = 0x191c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x191c64: 0xc064728
    ctx->pc = 0x191C64u;
    SET_GPR_U32(ctx, 31, 0x191C6Cu);
    ctx->pc = 0x191C68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->pc = 0x191CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfbuf_InitConti_0x191ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191C6Cu; }
        else if (ctx->pc != 0x191C6Cu) { ctx->pc = 0x191C6Cu; }
    }
    if (ctx->pc != 0x191C6Cu) { return; }
    ctx->pc = 0x191C6Cu;
    // 0x191c6c: 0xae000028
    ctx->pc = 0x191c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x191c70: 0x26040030
    ctx->pc = 0x191c70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 48));
    // 0x191c74: 0xc066fd0
    ctx->pc = 0x191C74u;
    SET_GPR_U32(ctx, 31, 0x191C7Cu);
    ctx->pc = 0x191C78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    ctx->pc = 0x19BF40u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFPTS_InitPtsQue_0x19bf40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191C7Cu; }
        else if (ctx->pc != 0x191C7Cu) { ctx->pc = 0x191C7Cu; }
    }
    if (ctx->pc != 0x191C7Cu) { return; }
    ctx->pc = 0x191C7Cu;
    // 0x191c7c: 0xc064f44
    ctx->pc = 0x191C7Cu;
    SET_GPR_U32(ctx, 31, 0x191C84u);
    ctx->pc = 0x191C80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_UnlockCs_0x193d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191C84u; }
        else if (ctx->pc != 0x191C84u) { ctx->pc = 0x191C84u; }
    }
    if (ctx->pc != 0x191C84u) { return; }
    ctx->pc = 0x191C84u;
    // 0x191c84: 0xdfbf0050
    ctx->pc = 0x191c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x191c88: 0xdfb30040
    ctx->pc = 0x191c88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x191c8c: 0xdfb20030
    ctx->pc = 0x191c8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x191c90: 0xdfb10020
    ctx->pc = 0x191c90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191c94: 0xdfb00010
    ctx->pc = 0x191c94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191c98: 0x3e00008
    ctx->pc = 0x191C98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191C9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x191CA0u;
}
