#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_CalcVideoTotTime
// Address: 0x196768 - 0x1967f8
void sfmpv_CalcVideoTotTime_0x196768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_CalcVideoTotTime");


    ctx->pc = 0x196768u;

    // 0x196768: 0x27bdffb0
    ctx->pc = 0x196768u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19676c: 0xffb00030
    ctx->pc = 0x19676cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x196770: 0xffbf0040
    ctx->pc = 0x196770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x196774: 0x8c820ad4
    ctx->pc = 0x196774u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 2772)));
    // 0x196778: 0x14400003
    ctx->pc = 0x196778u;
    {
        const bool branch_taken_0x196778 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19677Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 2732));
        if (branch_taken_0x196778) {
            ctx->pc = 0x196788u;
            goto label_196788;
        }
    }
    ctx->pc = 0x196780u;
    // 0x196780: 0x10000019
    ctx->pc = 0x196780u;
    {
        const bool branch_taken_0x196780 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196784u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x196780) {
            ctx->pc = 0x1967E8u;
            goto label_1967e8;
        }
    }
    ctx->pc = 0x196788u;
label_196788:
    // 0x196788: 0x68820adf
    ctx->pc = 0x196788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 2783); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x19678c: 0x6c820ad8
    ctx->pc = 0x19678cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 2776); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x196790: 0x68830ae7
    ctx->pc = 0x196790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 2791); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x196794: 0x6c830ae0
    ctx->pc = 0x196794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 2784); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x196798: 0x68850aef
    ctx->pc = 0x196798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 2799); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x19679c: 0x6c850ae8
    ctx->pc = 0x19679cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 2792); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1967a0: 0x8c860af0
    ctx->pc = 0x1967a0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 2800)));
    // 0x1967a4: 0xb3a20007
    ctx->pc = 0x1967a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1967a8: 0xb7a20000
    ctx->pc = 0x1967a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1967ac: 0xb3a3000f
    ctx->pc = 0x1967acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1967b0: 0xb7a30008
    ctx->pc = 0x1967b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1967b4: 0xb3a50017
    ctx->pc = 0x1967b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1967b8: 0xb7a50010
    ctx->pc = 0x1967b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1967bc: 0xafa60018
    ctx->pc = 0x1967bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x1967c0: 0x3a0202d
    ctx->pc = 0x1967c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1967c4: 0x27a50020
    ctx->pc = 0x1967c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1967c8: 0x8fa20018
    ctx->pc = 0x1967c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1967cc: 0x27a60024
    ctx->pc = 0x1967ccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 36));
    // 0x1967d0: 0x24420001
    ctx->pc = 0x1967d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1967d4: 0xc0678c2
    ctx->pc = 0x1967D4u;
    SET_GPR_U32(ctx, 31, 0x1967DCu);
    ctx->pc = 0x1967D8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->pc = 0x19E308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_Tc2Time_0x19e308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1967DCu; }
        else if (ctx->pc != 0x1967DCu) { ctx->pc = 0x1967DCu; }
    }
    if (ctx->pc != 0x1967DCu) { return; }
    ctx->pc = 0x1967DCu;
    // 0x1967dc: 0x8e030020
    ctx->pc = 0x1967dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1967e0: 0x8fa20020
    ctx->pc = 0x1967e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1967e4: 0x431023
    ctx->pc = 0x1967e4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1967e8:
    // 0x1967e8: 0xdfbf0040
    ctx->pc = 0x1967e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1967ec: 0xdfb00030
    ctx->pc = 0x1967ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1967f0: 0x3e00008
    ctx->pc = 0x1967F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1967F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196788u: goto label_196788;
            case 0x1967E8u: goto label_1967e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1967F8u;
}
