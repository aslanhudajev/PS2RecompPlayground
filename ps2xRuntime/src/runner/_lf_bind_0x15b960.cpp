#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _lf_bind
// Address: 0x15b960 - 0x15ba60
void _lf_bind_0x15b960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_lf_bind");


    ctx->pc = 0x15b960u;

    // 0x15b960: 0x27bdffb0
    ctx->pc = 0x15b960u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15b964: 0xffb20030
    ctx->pc = 0x15b964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x15b968: 0x3c120023
    ctx->pc = 0x15b968u;
    SET_GPR_U32(ctx, 18, ((uint32_t)35 << 16));
    // 0x15b96c: 0xffbf0040
    ctx->pc = 0x15b96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15b970: 0x8e42a0e0
    ctx->pc = 0x15b970u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294942944)));
    // 0x15b974: 0xffb10020
    ctx->pc = 0x15b974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x15b978: 0x4410032
    ctx->pc = 0x15B978u;
    {
        const bool branch_taken_0x15b978 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x15B97Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        if (branch_taken_0x15b978) {
            ctx->pc = 0x15BA44u;
            goto label_15ba44;
        }
    }
    ctx->pc = 0x15B980u;
    // 0x15b980: 0x3c11002e
    ctx->pc = 0x15b980u;
    SET_GPR_U32(ctx, 17, ((uint32_t)46 << 16));
    // 0x15b984: 0x2630aa80
    ctx->pc = 0x15b984u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 4294945408));
label_15b988:
    // 0x15b988: 0x3c058000
    ctx->pc = 0x15b988u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x15b98c: 0x200202d
    ctx->pc = 0x15b98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b990: 0x34a50006
    ctx->pc = 0x15b990u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 6));
    // 0x15b994: 0xc055dfe
    ctx->pc = 0x15B994u;
    SET_GPR_U32(ctx, 31, 0x15B99Cu);
    ctx->pc = 0x15B998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1577F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifBindRpc_0x1577f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B99Cu; }
        else if (ctx->pc != 0x15B99Cu) { ctx->pc = 0x15B99Cu; }
    }
    if (ctx->pc != 0x15B99Cu) { return; }
    ctx->pc = 0x15B99Cu;
    // 0x15b99c: 0x4430003
    ctx->pc = 0x15B99Cu;
    {
        const bool branch_taken_0x15b99c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x15b99c) {
            ctx->pc = 0x15B9A0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->pc = 0x15B9ACu;
            goto label_15b9ac;
        }
    }
    ctx->pc = 0x15B9A4u;
    // 0x15b9a4: 0x10000028
    ctx->pc = 0x15B9A4u;
    {
        const bool branch_taken_0x15b9a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15B9A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x15b9a4) {
            ctx->pc = 0x15BA48u;
            goto label_15ba48;
        }
    }
    ctx->pc = 0x15B9ACu;
label_15b9ac:
    // 0x15b9ac: 0x10400019
    ctx->pc = 0x15B9ACu;
    {
        const bool branch_taken_0x15b9ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15B9B0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15b9ac) {
            ctx->pc = 0x15BA14u;
            goto label_15ba14;
        }
    }
    ctx->pc = 0x15B9B4u;
    // 0x15b9b4: 0x3c11002e
    ctx->pc = 0x15b9b4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)46 << 16));
    // 0x15b9b8: 0xae40a0e0
    ctx->pc = 0x15b9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294942944), GPR_U32(ctx, 0));
    // 0x15b9bc: 0xafa00000
    ctx->pc = 0x15b9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x15b9c0: 0x240500ff
    ctx->pc = 0x15b9c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    // 0x15b9c4: 0x302d
    ctx->pc = 0x15b9c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b9c8: 0x382d
    ctx->pc = 0x15b9c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b9cc: 0x402d
    ctx->pc = 0x15b9ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b9d0: 0x2629a880
    ctx->pc = 0x15b9d0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 17), 4294944896));
    // 0x15b9d4: 0x240a0004
    ctx->pc = 0x15b9d4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4));
    // 0x15b9d8: 0xc055e72
    ctx->pc = 0x15B9D8u;
    SET_GPR_U32(ctx, 31, 0x15B9E0u);
    ctx->pc = 0x15B9DCu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1579C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifCallRpc_0x1579c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B9E0u; }
        else if (ctx->pc != 0x15B9E0u) { ctx->pc = 0x15B9E0u; }
    }
    if (ctx->pc != 0x15B9E0u) { return; }
    ctx->pc = 0x15B9E0u;
    // 0x15b9e0: 0x4410004
    ctx->pc = 0x15B9E0u;
    {
        const bool branch_taken_0x15b9e0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x15B9E4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)46 << 16));
        if (branch_taken_0x15b9e0) {
            ctx->pc = 0x15B9F4u;
            goto label_15b9f4;
        }
    }
    ctx->pc = 0x15B9E8u;
    // 0x15b9e8: 0x3c02fffe
    ctx->pc = 0x15b9e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65534 << 16));
    // 0x15b9ec: 0x10000016
    ctx->pc = 0x15B9ECu;
    {
        const bool branch_taken_0x15b9ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15B9F0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
        if (branch_taken_0x15b9ec) {
            ctx->pc = 0x15BA48u;
            goto label_15ba48;
        }
    }
    ctx->pc = 0x15B9F4u;
label_15b9f4:
    // 0x15b9f4: 0x2627a880
    ctx->pc = 0x15b9f4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 4294944896));
    // 0x15b9f8: 0x2466aaa8
    ctx->pc = 0x15b9f8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 4294945448));
    // 0x15b9fc: 0x88e40003
    ctx->pc = 0x15b9fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 4, (GPR_U32(ctx, 4) & ~mask) | ((aligned_word << shift) & mask)); }
    // 0x15ba00: 0x98e40000
    ctx->pc = 0x15ba00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 4, (GPR_U32(ctx, 4) & ~mask) | ((aligned_word >> shift) & mask)); }
    // 0x15ba04: 0xa8c40003
    ctx->pc = 0x15ba04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 4) >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x15ba08: 0xb8c40000
    ctx->pc = 0x15ba08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 4) << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x15ba0c: 0x1000000e
    ctx->pc = 0x15BA0Cu;
    {
        const bool branch_taken_0x15ba0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15BA10u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15ba0c) {
            ctx->pc = 0x15BA48u;
            goto label_15ba48;
        }
    }
    ctx->pc = 0x15BA14u;
label_15ba14:
    // 0x15ba14: 0x3c020010
    ctx->pc = 0x15ba14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
    // 0x15ba18: 0x2403ffff
    ctx->pc = 0x15ba18u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15ba1c: 0x0
    ctx->pc = 0x15ba1cu;
    // NOP
label_15ba20:
    // 0x15ba20: 0x2442ffff
    ctx->pc = 0x15ba20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15ba24: 0x0
    ctx->pc = 0x15ba24u;
    // NOP
    // 0x15ba28: 0x0
    ctx->pc = 0x15ba28u;
    // NOP
    // 0x15ba2c: 0x0
    ctx->pc = 0x15ba2cu;
    // NOP
    // 0x15ba30: 0x0
    ctx->pc = 0x15ba30u;
    // NOP
    // 0x15ba34: 0x1443fffa
    ctx->pc = 0x15BA34u;
    {
        const bool branch_taken_0x15ba34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x15ba34) {
            ctx->pc = 0x15BA20u;
            goto label_15ba20;
        }
    }
    ctx->pc = 0x15BA3Cu;
    // 0x15ba3c: 0x1000ffd2
    ctx->pc = 0x15BA3Cu;
    {
        const bool branch_taken_0x15ba3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15BA40u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 4294945408));
        if (branch_taken_0x15ba3c) {
            ctx->pc = 0x15B988u;
            goto label_15b988;
        }
    }
    ctx->pc = 0x15BA44u;
label_15ba44:
    // 0x15ba44: 0x102d
    ctx->pc = 0x15ba44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ba48:
    // 0x15ba48: 0xdfbf0040
    ctx->pc = 0x15ba48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15ba4c: 0xdfb20030
    ctx->pc = 0x15ba4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15ba50: 0xdfb10020
    ctx->pc = 0x15ba50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ba54: 0xdfb00010
    ctx->pc = 0x15ba54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ba58: 0x3e00008
    ctx->pc = 0x15BA58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BA5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15B988u: goto label_15b988;
            case 0x15B9ACu: goto label_15b9ac;
            case 0x15B9F4u: goto label_15b9f4;
            case 0x15BA14u: goto label_15ba14;
            case 0x15BA20u: goto label_15ba20;
            case 0x15BA44u: goto label_15ba44;
            case 0x15BA48u: goto label_15ba48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15BA60u;
}
