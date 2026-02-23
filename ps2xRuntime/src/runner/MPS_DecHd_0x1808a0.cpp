#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPS_DecHd
// Address: 0x1808a0 - 0x1809e8
void MPS_DecHd_0x1808a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPS_DecHd");


    ctx->pc = 0x1808a0u;

    // 0x1808a0: 0x27bdff90
    ctx->pc = 0x1808a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1808a4: 0xffb30040
    ctx->pc = 0x1808a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1808a8: 0xffb20030
    ctx->pc = 0x1808a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1808ac: 0xe0982d
    ctx->pc = 0x1808acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1808b0: 0xffb40050
    ctx->pc = 0x1808b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1808b4: 0x100902d
    ctx->pc = 0x1808b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1808b8: 0xffb10020
    ctx->pc = 0x1808b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1808bc: 0x80a02d
    ctx->pc = 0x1808bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1808c0: 0xffb00010
    ctx->pc = 0x1808c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1808c4: 0xa0882d
    ctx->pc = 0x1808c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1808c8: 0xffbf0060
    ctx->pc = 0x1808c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1808cc: 0xc0802d
    ctx->pc = 0x1808ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1808d0: 0xae600000
    ctx->pc = 0x1808d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1808d4: 0xc0609f0
    ctx->pc = 0x1808D4u;
    SET_GPR_U32(ctx, 31, 0x1808DCu);
    ctx->pc = 0x1808D8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1827C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPSLIB_CheckHn_0x1827c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1808DCu; }
        else if (ctx->pc != 0x1808DCu) { ctx->pc = 0x1808DCu; }
    }
    if (ctx->pc != 0x1808DCu) { return; }
    ctx->pc = 0x1808DCu;
    // 0x1808dc: 0x10400009
    ctx->pc = 0x1808DCu;
    {
        const bool branch_taken_0x1808dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1808E0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
        if (branch_taken_0x1808dc) {
            ctx->pc = 0x180904u;
            goto label_180904;
        }
    }
    ctx->pc = 0x1808E4u;
    // 0x1808e4: 0x3c05ff02
    ctx->pc = 0x1808e4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65282 << 16));
    // 0x1808e8: 0x202d
    ctx->pc = 0x1808e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1808ec: 0xc060986
    ctx->pc = 0x1808ECu;
    SET_GPR_U32(ctx, 31, 0x1808F4u);
    ctx->pc = 0x1808F0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 769));
    ctx->pc = 0x182618u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPSLIB_SetErr_0x182618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1808F4u; }
        else if (ctx->pc != 0x1808F4u) { ctx->pc = 0x1808F4u; }
    }
    if (ctx->pc != 0x1808F4u) { return; }
    ctx->pc = 0x1808F4u;
    // 0x1808f4: 0x10000035
    ctx->pc = 0x1808F4u;
    {
        const bool branch_taken_0x1808f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1808F8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x1808f4) {
            ctx->pc = 0x1809CCu;
            goto label_1809cc;
        }
    }
    ctx->pc = 0x1808FCu;
    // 0x1808fc: 0x0
    ctx->pc = 0x1808fcu;
    // NOP
label_180900:
    // 0x180900: 0x2a020004
    ctx->pc = 0x180900u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
label_180904:
    // 0x180904: 0x14400011
    ctx->pc = 0x180904u;
    {
        const bool branch_taken_0x180904 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x180908u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x180904) {
            ctx->pc = 0x18094Cu;
            goto label_18094c;
        }
    }
    ctx->pc = 0x18090Cu;
    // 0x18090c: 0x200302d
    ctx->pc = 0x18090cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180910: 0x280202d
    ctx->pc = 0x180910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180914: 0x3a0382d
    ctx->pc = 0x180914u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180918: 0xc06027a
    ctx->pc = 0x180918u;
    SET_GPR_U32(ctx, 31, 0x180920u);
    ctx->pc = 0x18091Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x1809E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpsdec_DecOneHd_0x1809e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180920u; }
        else if (ctx->pc != 0x180920u) { ctx->pc = 0x180920u; }
    }
    if (ctx->pc != 0x180920u) { return; }
    ctx->pc = 0x180920u;
    // 0x180920: 0x8fa30000
    ctx->pc = 0x180920u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180924: 0x8fa60004
    ctx->pc = 0x180924u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x180928: 0x8e450000
    ctx->pc = 0x180928u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18092c: 0x2238821
    ctx->pc = 0x18092cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x180930: 0x8e640000
    ctx->pc = 0x180930u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x180934: 0x2038023
    ctx->pc = 0x180934u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x180938: 0xa62825
    ctx->pc = 0x180938u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x18093c: 0x832021
    ctx->pc = 0x18093cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x180940: 0xae450000
    ctx->pc = 0x180940u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x180944: 0x1440ffee
    ctx->pc = 0x180944u;
    {
        const bool branch_taken_0x180944 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x180948u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        if (branch_taken_0x180944) {
            ctx->pc = 0x180900u;
            goto label_180900;
        }
    }
    ctx->pc = 0x18094Cu;
label_18094c:
    // 0x18094c: 0x8e420000
    ctx->pc = 0x18094cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x180950: 0x3c030002
    ctx->pc = 0x180950u;
    SET_GPR_U32(ctx, 3, ((uint32_t)2 << 16));
    // 0x180954: 0x431024
    ctx->pc = 0x180954u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180958: 0x1040001a
    ctx->pc = 0x180958u;
    {
        const bool branch_taken_0x180958 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18095Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 20), 32));
        if (branch_taken_0x180958) {
            ctx->pc = 0x1809C4u;
            goto label_1809c4;
        }
    }
    ctx->pc = 0x180960u;
    // 0x180960: 0x8c620008
    ctx->pc = 0x180960u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x180964: 0x14400005
    ctx->pc = 0x180964u;
    {
        const bool branch_taken_0x180964 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x180968u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x180964) {
            ctx->pc = 0x18097Cu;
            goto label_18097c;
        }
    }
    ctx->pc = 0x18096Cu;
    // 0x18096c: 0x8c63000c
    ctx->pc = 0x18096cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x180970: 0x24040002
    ctx->pc = 0x180970u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x180974: 0x24020001
    ctx->pc = 0x180974u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x180978: 0x43200b
    ctx->pc = 0x180978u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
label_18097c:
    // 0x18097c: 0x41140
    ctx->pc = 0x18097cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 5));
    // 0x180980: 0x2821021
    ctx->pc = 0x180980u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x180984: 0x6a830027
    ctx->pc = 0x180984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 39); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x180988: 0x6e830020
    ctx->pc = 0x180988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 32); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x18098c: 0x6a84002f
    ctx->pc = 0x18098cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 47); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x180990: 0x6e840028
    ctx->pc = 0x180990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 40); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x180994: 0x6a850037
    ctx->pc = 0x180994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 55); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x180998: 0x6e850030
    ctx->pc = 0x180998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 48); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x18099c: 0x6a86003f
    ctx->pc = 0x18099cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 63); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1809a0: 0x6e860038
    ctx->pc = 0x1809a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 56); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1809a4: 0xb0430047
    ctx->pc = 0x1809a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1809a8: 0xb4430040
    ctx->pc = 0x1809a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1809ac: 0xb044004f
    ctx->pc = 0x1809acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 79); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1809b0: 0xb4440048
    ctx->pc = 0x1809b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 72); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1809b4: 0xb0450057
    ctx->pc = 0x1809b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 87); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1809b8: 0xb4450050
    ctx->pc = 0x1809b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 80); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1809bc: 0xb046005f
    ctx->pc = 0x1809bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 95); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1809c0: 0xb4460058
    ctx->pc = 0x1809c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 88); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1809c4:
    // 0x1809c4: 0x102d
    ctx->pc = 0x1809c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1809c8: 0xdfbf0060
    ctx->pc = 0x1809c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1809cc:
    // 0x1809cc: 0xdfb40050
    ctx->pc = 0x1809ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1809d0: 0xdfb30040
    ctx->pc = 0x1809d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1809d4: 0xdfb20030
    ctx->pc = 0x1809d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1809d8: 0xdfb10020
    ctx->pc = 0x1809d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1809dc: 0xdfb00010
    ctx->pc = 0x1809dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1809e0: 0x3e00008
    ctx->pc = 0x1809E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1809E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180900u: goto label_180900;
            case 0x180904u: goto label_180904;
            case 0x18094Cu: goto label_18094c;
            case 0x18097Cu: goto label_18097c;
            case 0x1809C4u: goto label_1809c4;
            case 0x1809CCu: goto label_1809cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1809E8u;
}
