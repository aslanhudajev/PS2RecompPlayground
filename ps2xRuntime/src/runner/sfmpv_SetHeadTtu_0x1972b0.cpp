#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_SetHeadTtu
// Address: 0x1972b0 - 0x197354
void sfmpv_SetHeadTtu_0x1972b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_SetHeadTtu");


    ctx->pc = 0x1972b0u;

    // 0x1972b0: 0x27bdffa0
    ctx->pc = 0x1972b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1972b4: 0xffb10040
    ctx->pc = 0x1972b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x1972b8: 0xffb00030
    ctx->pc = 0x1972b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1972bc: 0xffbf0050
    ctx->pc = 0x1972bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1972c0: 0x80802d
    ctx->pc = 0x1972c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1972c4: 0xa0202d
    ctx->pc = 0x1972c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1972c8: 0x8e020aac
    ctx->pc = 0x1972c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2732)));
    // 0x1972cc: 0x1440001c
    ctx->pc = 0x1972CCu;
    {
        const bool branch_taken_0x1972cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1972D0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 2732));
        if (branch_taken_0x1972cc) {
            ctx->pc = 0x197340u;
            goto label_197340;
        }
    }
    ctx->pc = 0x1972D4u;
    // 0x1972d4: 0xc065d1c
    ctx->pc = 0x1972D4u;
    SET_GPR_U32(ctx, 31, 0x1972DCu);
    ctx->pc = 0x1972D8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x197470u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_ReadTcode_0x197470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1972DCu; }
        else if (ctx->pc != 0x1972DCu) { ctx->pc = 0x1972DCu; }
    }
    if (ctx->pc != 0x1972DCu) { return; }
    ctx->pc = 0x1972DCu;
    // 0x1972dc: 0xafa00018
    ctx->pc = 0x1972dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1972e0: 0x3a0202d
    ctx->pc = 0x1972e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1972e4: 0x27a50020
    ctx->pc = 0x1972e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1972e8: 0xc0678c2
    ctx->pc = 0x1972E8u;
    SET_GPR_U32(ctx, 31, 0x1972F0u);
    ctx->pc = 0x1972ECu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 36));
    ctx->pc = 0x19E308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_Tc2Time_0x19e308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1972F0u; }
        else if (ctx->pc != 0x1972F0u) { ctx->pc = 0x1972F0u; }
    }
    if (ctx->pc != 0x1972F0u) { return; }
    ctx->pc = 0x1972F0u;
    // 0x1972f0: 0x8fa20020
    ctx->pc = 0x1972f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1972f4: 0x24040001
    ctx->pc = 0x1972f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1972f8: 0x8fa30024
    ctx->pc = 0x1972f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1972fc: 0x6ba50007
    ctx->pc = 0x1972fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x197300: 0x6fa50000
    ctx->pc = 0x197300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x197304: 0x6ba6000f
    ctx->pc = 0x197304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x197308: 0x6fa60008
    ctx->pc = 0x197308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x19730c: 0x6ba70017
    ctx->pc = 0x19730cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x197310: 0x6fa70010
    ctx->pc = 0x197310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x197314: 0x8fa80018
    ctx->pc = 0x197314u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197318: 0xb2050ab7
    ctx->pc = 0x197318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2743); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19731c: 0xb6050ab0
    ctx->pc = 0x19731cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2736); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x197320: 0xb2060abf
    ctx->pc = 0x197320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2751); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x197324: 0xb6060ab8
    ctx->pc = 0x197324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2744); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x197328: 0xb2070ac7
    ctx->pc = 0x197328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2759); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19732c: 0xb6070ac0
    ctx->pc = 0x19732cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2752); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x197330: 0xae080ac8
    ctx->pc = 0x197330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2760), GPR_U32(ctx, 8));
    // 0x197334: 0xae230024
    ctx->pc = 0x197334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x197338: 0xae220020
    ctx->pc = 0x197338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x19733c: 0xae040aac
    ctx->pc = 0x19733cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2732), GPR_U32(ctx, 4));
label_197340:
    // 0x197340: 0xdfbf0050
    ctx->pc = 0x197340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197344: 0xdfb10040
    ctx->pc = 0x197344u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x197348: 0xdfb00030
    ctx->pc = 0x197348u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19734c: 0x3e00008
    ctx->pc = 0x19734Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197350u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197340u: goto label_197340;
            default: break;
        }
        return;
    }
    ctx->pc = 0x197354u;
}
