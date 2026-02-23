#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_SetStartTtu
// Address: 0x1982a0 - 0x1983a4
void sfmpv_SetStartTtu_0x1982a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_SetStartTtu");


    ctx->pc = 0x1982a0u;

    // 0x1982a0: 0x27bdff90
    ctx->pc = 0x1982a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1982a4: 0xffb20050
    ctx->pc = 0x1982a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1982a8: 0xffb10040
    ctx->pc = 0x1982a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x1982ac: 0xffb00030
    ctx->pc = 0x1982acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1982b0: 0xffbf0060
    ctx->pc = 0x1982b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1982b4: 0x80802d
    ctx->pc = 0x1982b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1982b8: 0x26120aac
    ctx->pc = 0x1982b8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 2732));
    // 0x1982bc: 0x8e020b74
    ctx->pc = 0x1982bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2932)));
    // 0x1982c0: 0x14400032
    ctx->pc = 0x1982C0u;
    {
        const bool branch_taken_0x1982c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1982C4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 2932));
        if (branch_taken_0x1982c0) {
            ctx->pc = 0x19838Cu;
            goto label_19838c;
        }
    }
    ctx->pc = 0x1982C8u;
    // 0x1982c8: 0x6a020b2f
    ctx->pc = 0x1982c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2863); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1982cc: 0x6e020b28
    ctx->pc = 0x1982ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2856); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1982d0: 0x6a030b37
    ctx->pc = 0x1982d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2871); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1982d4: 0x6e030b30
    ctx->pc = 0x1982d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2864); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1982d8: 0x6a060b3f
    ctx->pc = 0x1982d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2879); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1982dc: 0x6e060b38
    ctx->pc = 0x1982dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2872); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1982e0: 0x8e070b40
    ctx->pc = 0x1982e0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 2880)));
    // 0x1982e4: 0xb3a20007
    ctx->pc = 0x1982e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1982e8: 0xb7a20000
    ctx->pc = 0x1982e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1982ec: 0xb3a3000f
    ctx->pc = 0x1982ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1982f0: 0xb7a30008
    ctx->pc = 0x1982f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1982f4: 0xb3a60017
    ctx->pc = 0x1982f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1982f8: 0xb7a60010
    ctx->pc = 0x1982f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1982fc: 0xafa70018
    ctx->pc = 0x1982fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x198300: 0xc065e5e
    ctx->pc = 0x198300u;
    SET_GPR_U32(ctx, 31, 0x198308u);
    ctx->pc = 0x198304u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x197978u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_IsDefect_0x197978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198308u; }
        else if (ctx->pc != 0x198308u) { ctx->pc = 0x198308u; }
    }
    if (ctx->pc != 0x198308u) { return; }
    ctx->pc = 0x198308u;
    // 0x198308: 0x14400007
    ctx->pc = 0x198308u;
    {
        const bool branch_taken_0x198308 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19830Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x198308) {
            ctx->pc = 0x198328u;
            goto label_198328;
        }
    }
    ctx->pc = 0x198310u;
    // 0x198310: 0x200202d
    ctx->pc = 0x198310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198314: 0xc065eb4
    ctx->pc = 0x198314u;
    SET_GPR_U32(ctx, 31, 0x19831Cu);
    ctx->pc = 0x198318u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x197AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_IsPtypeSkip_0x197ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19831Cu; }
        else if (ctx->pc != 0x19831Cu) { ctx->pc = 0x19831Cu; }
    }
    if (ctx->pc != 0x19831Cu) { return; }
    ctx->pc = 0x19831Cu;
    // 0x19831c: 0x50400001
    ctx->pc = 0x19831Cu;
    {
        const bool branch_taken_0x19831c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x19831c) {
            ctx->pc = 0x198320u;
            WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
            ctx->pc = 0x198324u;
            goto label_198324;
        }
    }
    ctx->pc = 0x198324u;
label_198324:
    // 0x198324: 0x3a0202d
    ctx->pc = 0x198324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_198328:
    // 0x198328: 0x27a50020
    ctx->pc = 0x198328u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x19832c: 0xc0678c2
    ctx->pc = 0x19832Cu;
    SET_GPR_U32(ctx, 31, 0x198334u);
    ctx->pc = 0x198330u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 36));
    ctx->pc = 0x19E308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_Tc2Time_0x19e308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198334u; }
        else if (ctx->pc != 0x198334u) { ctx->pc = 0x198334u; }
    }
    if (ctx->pc != 0x198334u) { return; }
    ctx->pc = 0x198334u;
    // 0x198334: 0x6ba20007
    ctx->pc = 0x198334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x198338: 0x6fa20000
    ctx->pc = 0x198338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x19833c: 0x6ba3000f
    ctx->pc = 0x19833cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x198340: 0x6fa30008
    ctx->pc = 0x198340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x198344: 0x6ba40017
    ctx->pc = 0x198344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x198348: 0x6fa40010
    ctx->pc = 0x198348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x19834c: 0x8fa50018
    ctx->pc = 0x19834cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198350: 0xb222000b
    ctx->pc = 0x198350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198354: 0xb6220004
    ctx->pc = 0x198354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198358: 0xb2230013
    ctx->pc = 0x198358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19835c: 0xb623000c
    ctx->pc = 0x19835cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 12); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198360: 0xb224001b
    ctx->pc = 0x198360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 27); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198364: 0xb6240014
    ctx->pc = 0x198364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 20); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198368: 0xae25001c
    ctx->pc = 0x198368u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 5));
    // 0x19836c: 0x8fa20020
    ctx->pc = 0x19836cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198370: 0x24050001
    ctx->pc = 0x198370u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x198374: 0x8e430020
    ctx->pc = 0x198374u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x198378: 0x8fa40024
    ctx->pc = 0x198378u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x19837c: 0x431023
    ctx->pc = 0x19837cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x198380: 0xae250000
    ctx->pc = 0x198380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x198384: 0xae220020
    ctx->pc = 0x198384u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x198388: 0xae240024
    ctx->pc = 0x198388u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 4));
label_19838c:
    // 0x19838c: 0xdfbf0060
    ctx->pc = 0x19838cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x198390: 0xdfb20050
    ctx->pc = 0x198390u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x198394: 0xdfb10040
    ctx->pc = 0x198394u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x198398: 0xdfb00030
    ctx->pc = 0x198398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19839c: 0x3e00008
    ctx->pc = 0x19839Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1983A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198324u: goto label_198324;
            case 0x198328u: goto label_198328;
            case 0x19838Cu: goto label_19838c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1983A4u;
}
