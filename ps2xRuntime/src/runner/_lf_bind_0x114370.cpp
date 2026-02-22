#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _lf_bind
// Address: 0x114370 - 0x114470
void _lf_bind_0x114370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x114370u;

    // 0x114370: 0x27bdffb0
    ctx->pc = 0x114370u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x114374: 0xffb20030
    ctx->pc = 0x114374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x114378: 0x3c120017
    ctx->pc = 0x114378u;
    SET_GPR_S32(ctx, 18, ((uint32_t)23 << 16));
    // 0x11437c: 0xffbf0040
    ctx->pc = 0x11437cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x114380: 0x8e42fbd0
    ctx->pc = 0x114380u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294966224)));
    // 0x114384: 0xffb10020
    ctx->pc = 0x114384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x114388: 0x4410032
    ctx->pc = 0x114388u;
    {
        const bool branch_taken_0x114388 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11438Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        if (branch_taken_0x114388) {
            ctx->pc = 0x114454u;
            goto label_114454;
        }
    }
    ctx->pc = 0x114390u;
    // 0x114390: 0x3c110018
    ctx->pc = 0x114390u;
    SET_GPR_S32(ctx, 17, ((uint32_t)24 << 16));
    // 0x114394: 0x26309e40
    ctx->pc = 0x114394u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 4294942272));
label_114398:
    // 0x114398: 0x3c058000
    ctx->pc = 0x114398u;
    SET_GPR_S32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x11439c: 0x200202d
    ctx->pc = 0x11439cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1143a0: 0x34a50006
    ctx->pc = 0x1143a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)6);
    // 0x1143a4: 0xc0440ac
    ctx->pc = 0x1143A4u;
    SET_GPR_U32(ctx, 31, 0x1143ACu);
    ctx->pc = 0x1143A8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1102B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifBindRpc_0x1102b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1143ACu; }
    }
    if (ctx->pc != 0x1143ACu) { return; }
    ctx->pc = 0x1143ACu;
    // 0x1143ac: 0x4430003
    ctx->pc = 0x1143ACu;
    {
        const bool branch_taken_0x1143ac = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1143ac) {
            ctx->pc = 0x1143B0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->pc = 0x1143BCu;
            goto label_1143bc;
        }
    }
    ctx->pc = 0x1143B4u;
    // 0x1143b4: 0x10000028
    ctx->pc = 0x1143B4u;
    {
        const bool branch_taken_0x1143b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1143B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1143b4) {
            ctx->pc = 0x114458u;
            goto label_114458;
        }
    }
    ctx->pc = 0x1143BCu;
label_1143bc:
    // 0x1143bc: 0x10400019
    ctx->pc = 0x1143BCu;
    {
        const bool branch_taken_0x1143bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1143C0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1143bc) {
            ctx->pc = 0x114424u;
            goto label_114424;
        }
    }
    ctx->pc = 0x1143C4u;
    // 0x1143c4: 0x3c110018
    ctx->pc = 0x1143c4u;
    SET_GPR_S32(ctx, 17, ((uint32_t)24 << 16));
    // 0x1143c8: 0xae40fbd0
    ctx->pc = 0x1143c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294966224), GPR_U32(ctx, 0));
    // 0x1143cc: 0xafa00000
    ctx->pc = 0x1143ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1143d0: 0x240500ff
    ctx->pc = 0x1143d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1143d4: 0x302d
    ctx->pc = 0x1143d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1143d8: 0x382d
    ctx->pc = 0x1143d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1143dc: 0x402d
    ctx->pc = 0x1143dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1143e0: 0x26299c40
    ctx->pc = 0x1143e0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 17), 4294941760));
    // 0x1143e4: 0x240a0004
    ctx->pc = 0x1143e4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1143e8: 0xc044120
    ctx->pc = 0x1143E8u;
    SET_GPR_U32(ctx, 31, 0x1143F0u);
    ctx->pc = 0x1143ECu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x110480u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifCallRpc_0x110480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1143F0u; }
    }
    if (ctx->pc != 0x1143F0u) { return; }
    ctx->pc = 0x1143F0u;
    // 0x1143f0: 0x4410004
    ctx->pc = 0x1143F0u;
    {
        const bool branch_taken_0x1143f0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1143F4u;
        SET_GPR_S32(ctx, 3, ((uint32_t)24 << 16));
        if (branch_taken_0x1143f0) {
            ctx->pc = 0x114404u;
            goto label_114404;
        }
    }
    ctx->pc = 0x1143F8u;
    // 0x1143f8: 0x3c02fffe
    ctx->pc = 0x1143f8u;
    SET_GPR_S32(ctx, 2, ((uint32_t)65534 << 16));
    // 0x1143fc: 0x10000016
    ctx->pc = 0x1143FCu;
    {
        const bool branch_taken_0x1143fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x114400u;
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)65535);
        if (branch_taken_0x1143fc) {
            ctx->pc = 0x114458u;
            goto label_114458;
        }
    }
    ctx->pc = 0x114404u;
label_114404:
    // 0x114404: 0x26279c40
    ctx->pc = 0x114404u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 4294941760));
    // 0x114408: 0x24669e68
    ctx->pc = 0x114408u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 4294942312));
    // 0x11440c: 0x88e40003
    ctx->pc = 0x11440cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 4, (GPR_U32(ctx, 4) & ~mask) | ((aligned_word << shift) & mask)); }
    // 0x114410: 0x98e40000
    ctx->pc = 0x114410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 4, (GPR_U32(ctx, 4) & ~mask) | ((aligned_word >> shift) & mask)); }
    // 0x114414: 0xa8c40003
    ctx->pc = 0x114414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 4) >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x114418: 0xb8c40000
    ctx->pc = 0x114418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 4) << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x11441c: 0x1000000e
    ctx->pc = 0x11441Cu;
    {
        const bool branch_taken_0x11441c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x114420u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11441c) {
            ctx->pc = 0x114458u;
            goto label_114458;
        }
    }
    ctx->pc = 0x114424u;
label_114424:
    // 0x114424: 0x3c020010
    ctx->pc = 0x114424u;
    SET_GPR_S32(ctx, 2, ((uint32_t)16 << 16));
    // 0x114428: 0x2403ffff
    ctx->pc = 0x114428u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11442c: 0x0
    ctx->pc = 0x11442cu;
    // NOP
label_114430:
    // 0x114430: 0x2442ffff
    ctx->pc = 0x114430u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x114434: 0x0
    ctx->pc = 0x114434u;
    // NOP
    // 0x114438: 0x0
    ctx->pc = 0x114438u;
    // NOP
    // 0x11443c: 0x0
    ctx->pc = 0x11443cu;
    // NOP
    // 0x114440: 0x0
    ctx->pc = 0x114440u;
    // NOP
    // 0x114444: 0x1443fffa
    ctx->pc = 0x114444u;
    {
        const bool branch_taken_0x114444 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x114444) {
            ctx->pc = 0x114430u;
            goto label_114430;
        }
    }
    ctx->pc = 0x11444Cu;
    // 0x11444c: 0x1000ffd2
    ctx->pc = 0x11444Cu;
    {
        const bool branch_taken_0x11444c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x114450u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 4294942272));
        if (branch_taken_0x11444c) {
            ctx->pc = 0x114398u;
            goto label_114398;
        }
    }
    ctx->pc = 0x114454u;
label_114454:
    // 0x114454: 0x102d
    ctx->pc = 0x114454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114458:
    // 0x114458: 0xdfbf0040
    ctx->pc = 0x114458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11445c: 0xdfb20030
    ctx->pc = 0x11445cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x114460: 0xdfb10020
    ctx->pc = 0x114460u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x114464: 0xdfb00010
    ctx->pc = 0x114464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114468: 0x3e00008
    ctx->pc = 0x114468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11446Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x114398u: goto label_114398;
            case 0x1143BCu: goto label_1143bc;
            case 0x114404u: goto label_114404;
            case 0x114424u: goto label_114424;
            case 0x114430u: goto label_114430;
            case 0x114454u: goto label_114454;
            case 0x114458u: goto label_114458;
            default: break;
        }
        return;
    }
    ctx->pc = 0x114470u;
}
