#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPS_GetSysHd
// Address: 0x1822b8 - 0x18235c
void MPS_GetSysHd_0x1822b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPS_GetSysHd");


    ctx->pc = 0x1822b8u;

    // 0x1822b8: 0x27bdffc0
    ctx->pc = 0x1822b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1822bc: 0xffb10010
    ctx->pc = 0x1822bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1822c0: 0xffb20020
    ctx->pc = 0x1822c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1822c4: 0x80882d
    ctx->pc = 0x1822c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1822c8: 0xffb00000
    ctx->pc = 0x1822c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1822cc: 0xa0902d
    ctx->pc = 0x1822ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1822d0: 0xffbf0030
    ctx->pc = 0x1822d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1822d4: 0xc0609f0
    ctx->pc = 0x1822D4u;
    SET_GPR_U32(ctx, 31, 0x1822DCu);
    ctx->pc = 0x1822D8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1827C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPSLIB_CheckHn_0x1827c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1822DCu; }
        else if (ctx->pc != 0x1822DCu) { ctx->pc = 0x1822DCu; }
    }
    if (ctx->pc != 0x1822DCu) { return; }
    ctx->pc = 0x1822DCu;
    // 0x1822dc: 0x10400006
    ctx->pc = 0x1822DCu;
    {
        const bool branch_taken_0x1822dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1822E0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1822dc) {
            ctx->pc = 0x1822F8u;
            goto label_1822f8;
        }
    }
    ctx->pc = 0x1822E4u;
    // 0x1822e4: 0x3c05ff02
    ctx->pc = 0x1822e4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65282 << 16));
    // 0x1822e8: 0xc060986
    ctx->pc = 0x1822E8u;
    SET_GPR_U32(ctx, 31, 0x1822F0u);
    ctx->pc = 0x1822ECu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 514));
    ctx->pc = 0x182618u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPSLIB_SetErr_0x182618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1822F0u; }
        else if (ctx->pc != 0x1822F0u) { ctx->pc = 0x1822F0u; }
    }
    if (ctx->pc != 0x1822F0u) { return; }
    ctx->pc = 0x1822F0u;
    // 0x1822f0: 0x10000015
    ctx->pc = 0x1822F0u;
    {
        const bool branch_taken_0x1822f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1822F4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x1822f0) {
            ctx->pc = 0x182348u;
            goto label_182348;
        }
    }
    ctx->pc = 0x1822F8u;
label_1822f8:
    // 0x1822f8: 0x101940
    ctx->pc = 0x1822f8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 5));
    // 0x1822fc: 0x102d
    ctx->pc = 0x1822fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182300: 0x2231821
    ctx->pc = 0x182300u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x182304: 0x68640047
    ctx->pc = 0x182304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 71); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x182308: 0x6c640040
    ctx->pc = 0x182308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 64); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x18230c: 0x6865004f
    ctx->pc = 0x18230cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 79); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x182310: 0x6c650048
    ctx->pc = 0x182310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 72); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x182314: 0x68660057
    ctx->pc = 0x182314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 87); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x182318: 0x6c660050
    ctx->pc = 0x182318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 80); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x18231c: 0x6867005f
    ctx->pc = 0x18231cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 95); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x182320: 0x6c670058
    ctx->pc = 0x182320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 88); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x182324: 0xb2440007
    ctx->pc = 0x182324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182328: 0xb6440000
    ctx->pc = 0x182328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18232c: 0xb245000f
    ctx->pc = 0x18232cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182330: 0xb6450008
    ctx->pc = 0x182330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182334: 0xb2460017
    ctx->pc = 0x182334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182338: 0xb6460010
    ctx->pc = 0x182338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18233c: 0xb247001f
    ctx->pc = 0x18233cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182340: 0xb6470018
    ctx->pc = 0x182340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182344: 0xdfbf0030
    ctx->pc = 0x182344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_182348:
    // 0x182348: 0xdfb20020
    ctx->pc = 0x182348u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18234c: 0xdfb10010
    ctx->pc = 0x18234cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182350: 0xdfb00000
    ctx->pc = 0x182350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182354: 0x3e00008
    ctx->pc = 0x182354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182358u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1822F8u: goto label_1822f8;
            case 0x182348u: goto label_182348;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18235Cu;
}
