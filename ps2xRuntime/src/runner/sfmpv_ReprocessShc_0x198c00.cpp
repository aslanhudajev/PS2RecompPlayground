#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_ReprocessShc
// Address: 0x198c00 - 0x198cf4
void sfmpv_ReprocessShc_0x198c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_ReprocessShc");


    ctx->pc = 0x198c00u;

    // 0x198c00: 0x27bdffa0
    ctx->pc = 0x198c00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x198c04: 0xffb20040
    ctx->pc = 0x198c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x198c08: 0xffb10030
    ctx->pc = 0x198c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x198c0c: 0xc0902d
    ctx->pc = 0x198c0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198c10: 0xffb00020
    ctx->pc = 0x198c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x198c14: 0xa0882d
    ctx->pc = 0x198c14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198c18: 0xffbf0050
    ctx->pc = 0x198c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x198c1c: 0x80802d
    ctx->pc = 0x198c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198c20: 0xc06633e
    ctx->pc = 0x198C20u;
    SET_GPR_U32(ctx, 31, 0x198C28u);
    ctx->pc = 0x198C24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x198CF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_GetHd_0x198cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198C28u; }
        else if (ctx->pc != 0x198C28u) { ctx->pc = 0x198C28u; }
    }
    if (ctx->pc != 0x198C28u) { return; }
    ctx->pc = 0x198C28u;
    // 0x198c28: 0x40282d
    ctx->pc = 0x198c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198c2c: 0x10a0002b
    ctx->pc = 0x198C2Cu;
    {
        const bool branch_taken_0x198c2c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x198C30u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x198c2c) {
            ctx->pc = 0x198CDCu;
            goto label_198cdc;
        }
    }
    ctx->pc = 0x198C34u;
    // 0x198c34: 0x8ca20000
    ctx->pc = 0x198c34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x198c38: 0x54400003
    ctx->pc = 0x198C38u;
    {
        const bool branch_taken_0x198c38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x198c38) {
            ctx->pc = 0x198C3Cu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x198C48u;
            goto label_198c48;
        }
    }
    ctx->pc = 0x198C40u;
    // 0x198c40: 0x10000026
    ctx->pc = 0x198C40u;
    {
        const bool branch_taken_0x198c40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x198C44u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x198c40) {
            ctx->pc = 0x198CDCu;
            goto label_198cdc;
        }
    }
    ctx->pc = 0x198C48u;
label_198c48:
    // 0x198c48: 0x24a30034
    ctx->pc = 0x198c48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 52));
    // 0x198c4c: 0x68a20013
    ctx->pc = 0x198c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 19); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x198c50: 0x6ca2000c
    ctx->pc = 0x198c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 12); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x198c54: 0x68a6001b
    ctx->pc = 0x198c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 27); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x198c58: 0x6ca60014
    ctx->pc = 0x198c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 20); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x198c5c: 0x68a70023
    ctx->pc = 0x198c5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 35); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x198c60: 0x6ca7001c
    ctx->pc = 0x198c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 28); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x198c64: 0x68a8002b
    ctx->pc = 0x198c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 43); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x198c68: 0x6ca80024
    ctx->pc = 0x198c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 36); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x198c6c: 0xb2020ab3
    ctx->pc = 0x198c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2739); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198c70: 0xb6020aac
    ctx->pc = 0x198c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2732); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198c74: 0xb2060abb
    ctx->pc = 0x198c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2747); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198c78: 0xb6060ab4
    ctx->pc = 0x198c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2740); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198c7c: 0xb2070ac3
    ctx->pc = 0x198c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2755); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198c80: 0xb6070abc
    ctx->pc = 0x198c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2748); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198c84: 0xb2080acb
    ctx->pc = 0x198c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2763); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198c88: 0xb6080ac4
    ctx->pc = 0x198c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2756); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198c8c: 0x68a20033
    ctx->pc = 0x198c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 51); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x198c90: 0x6ca2002c
    ctx->pc = 0x198c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 44); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x198c94: 0xb2020ad3
    ctx->pc = 0x198c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2771); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198c98: 0xb6020acc
    ctx->pc = 0x198c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2764); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198c9c: 0xafa30000
    ctx->pc = 0x198c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x198ca0: 0x3a0282d
    ctx->pc = 0x198ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198ca4: 0x27a60010
    ctx->pc = 0x198ca4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    // 0x198ca8: 0x8c620200
    ctx->pc = 0x198ca8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 512)));
    // 0x198cac: 0xc061986
    ctx->pc = 0x198CACu;
    SET_GPR_U32(ctx, 31, 0x198CB4u);
    ctx->pc = 0x198CB0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x186618u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_DecodePicAtr_0x186618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198CB4u; }
        else if (ctx->pc != 0x198CB4u) { ctx->pc = 0x198CB4u; }
    }
    if (ctx->pc != 0x198CB4u) { return; }
    ctx->pc = 0x198CB4u;
    // 0x198cb4: 0x10400006
    ctx->pc = 0x198CB4u;
    {
        const bool branch_taken_0x198cb4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x198CB8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x198cb4) {
            ctx->pc = 0x198CD0u;
            goto label_198cd0;
        }
    }
    ctx->pc = 0x198CBCu;
    // 0x198cbc: 0x3c05ff00
    ctx->pc = 0x198cbcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x198cc0: 0xc064ea0
    ctx->pc = 0x198CC0u;
    SET_GPR_U32(ctx, 31, 0x198CC8u);
    ctx->pc = 0x198CC4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3867));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198CC8u; }
        else if (ctx->pc != 0x198CC8u) { ctx->pc = 0x198CC8u; }
    }
    if (ctx->pc != 0x198CC8u) { return; }
    ctx->pc = 0x198CC8u;
    // 0x198cc8: 0x10000005
    ctx->pc = 0x198CC8u;
    {
        const bool branch_taken_0x198cc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x198CCCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x198cc8) {
            ctx->pc = 0x198CE0u;
            goto label_198ce0;
        }
    }
    ctx->pc = 0x198CD0u;
label_198cd0:
    // 0x198cd0: 0x24030001
    ctx->pc = 0x198cd0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x198cd4: 0x102d
    ctx->pc = 0x198cd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198cd8: 0xae430000
    ctx->pc = 0x198cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_198cdc:
    // 0x198cdc: 0xdfbf0050
    ctx->pc = 0x198cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_198ce0:
    // 0x198ce0: 0xdfb20040
    ctx->pc = 0x198ce0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x198ce4: 0xdfb10030
    ctx->pc = 0x198ce4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198ce8: 0xdfb00020
    ctx->pc = 0x198ce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198cec: 0x3e00008
    ctx->pc = 0x198CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198CF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198C48u: goto label_198c48;
            case 0x198CD0u: goto label_198cd0;
            case 0x198CDCu: goto label_198cdc;
            case 0x198CE0u: goto label_198ce0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198CF4u;
}
