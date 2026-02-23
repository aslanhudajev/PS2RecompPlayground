#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_SetMpvHd
// Address: 0x1975d8 - 0x1976e4
void sfmpv_SetMpvHd_0x1975d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_SetMpvHd");


    ctx->pc = 0x1975d8u;

    // 0x1975d8: 0x27bdffb0
    ctx->pc = 0x1975d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1975dc: 0xffb20020
    ctx->pc = 0x1975dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1975e0: 0xffb30030
    ctx->pc = 0x1975e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1975e4: 0x80902d
    ctx->pc = 0x1975e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1975e8: 0xffb10010
    ctx->pc = 0x1975e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1975ec: 0xa0982d
    ctx->pc = 0x1975ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1975f0: 0xffb00000
    ctx->pc = 0x1975f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1975f4: 0xffbf0040
    ctx->pc = 0x1975f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1975f8: 0xc06633e
    ctx->pc = 0x1975F8u;
    SET_GPR_U32(ctx, 31, 0x197600u);
    ctx->pc = 0x1975FCu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x198CF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_GetHd_0x198cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197600u; }
        else if (ctx->pc != 0x197600u) { ctx->pc = 0x197600u; }
    }
    if (ctx->pc != 0x197600u) { return; }
    ctx->pc = 0x197600u;
    // 0x197600: 0x40802d
    ctx->pc = 0x197600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197604: 0x12000031
    ctx->pc = 0x197604u;
    {
        const bool branch_taken_0x197604 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x197608u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x197604) {
            ctx->pc = 0x1976CCu;
            goto label_1976cc;
        }
    }
    ctx->pc = 0x19760Cu;
    // 0x19760c: 0x8e020000
    ctx->pc = 0x19760cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x197610: 0x5440002f
    ctx->pc = 0x197610u;
    {
        const bool branch_taken_0x197610 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x197610) {
            ctx->pc = 0x197614u;
            SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->pc = 0x1976D0u;
            goto label_1976d0;
        }
    }
    ctx->pc = 0x197618u;
    // 0x197618: 0x8e220004
    ctx->pc = 0x197618u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x19761c: 0x24060200
    ctx->pc = 0x19761cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 512));
    // 0x197620: 0x26070034
    ctx->pc = 0x197620u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 52));
    // 0x197624: 0x8e250000
    ctx->pc = 0x197624u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x197628: 0x28430201
    ctx->pc = 0x197628u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 513));
    // 0x19762c: 0xe0202d
    ctx->pc = 0x19762cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197630: 0xc3100a
    ctx->pc = 0x197630u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 6));
    // 0x197634: 0x26510a94
    ctx->pc = 0x197634u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 2708));
    // 0x197638: 0x40302d
    ctx->pc = 0x197638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19763c: 0xc060172
    ctx->pc = 0x19763Cu;
    SET_GPR_U32(ctx, 31, 0x197644u);
    ctx->pc = 0x197640u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 512), GPR_U32(ctx, 2));
    ctx->pc = 0x1805C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MEM_Copy_0x1805c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197644u; }
        else if (ctx->pc != 0x197644u) { ctx->pc = 0x197644u; }
    }
    if (ctx->pc != 0x197644u) { return; }
    ctx->pc = 0x197644u;
    // 0x197644: 0x3c030003
    ctx->pc = 0x197644u;
    SET_GPR_U32(ctx, 3, ((uint32_t)3 << 16));
    // 0x197648: 0x3463ffff
    ctx->pc = 0x197648u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x19764c: 0x16630004
    ctx->pc = 0x19764Cu;
    {
        const bool branch_taken_0x19764c = (GPR_U32(ctx, 19) != GPR_U32(ctx, 3));
        ctx->pc = 0x197650u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 50));
        if (branch_taken_0x19764c) {
            ctx->pc = 0x197660u;
            goto label_197660;
        }
    }
    ctx->pc = 0x197654u;
    // 0x197654: 0xae000004
    ctx->pc = 0x197654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x197658: 0x10000005
    ctx->pc = 0x197658u;
    {
        const bool branch_taken_0x197658 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19765Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        if (branch_taken_0x197658) {
            ctx->pc = 0x197670u;
            goto label_197670;
        }
    }
    ctx->pc = 0x197660u;
label_197660:
    // 0x197660: 0x24030001
    ctx->pc = 0x197660u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x197664: 0x2621018
    ctx->pc = 0x197664u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x197668: 0xae030008
    ctx->pc = 0x197668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x19766c: 0xae020004
    ctx->pc = 0x19766cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_197670:
    // 0x197670: 0x24020001
    ctx->pc = 0x197670u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x197674: 0x6a23001f
    ctx->pc = 0x197674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x197678: 0x6e230018
    ctx->pc = 0x197678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x19767c: 0x6a240027
    ctx->pc = 0x19767cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x197680: 0x6e240020
    ctx->pc = 0x197680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x197684: 0x6a25002f
    ctx->pc = 0x197684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x197688: 0x6e250028
    ctx->pc = 0x197688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x19768c: 0x6a260037
    ctx->pc = 0x19768cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x197690: 0x6e260030
    ctx->pc = 0x197690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x197694: 0xb2030013
    ctx->pc = 0x197694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x197698: 0xb603000c
    ctx->pc = 0x197698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19769c: 0xb204001b
    ctx->pc = 0x19769cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1976a0: 0xb6040014
    ctx->pc = 0x1976a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1976a4: 0xb2050023
    ctx->pc = 0x1976a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1976a8: 0xb605001c
    ctx->pc = 0x1976a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1976ac: 0xb206002b
    ctx->pc = 0x1976acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1976b0: 0xb6060024
    ctx->pc = 0x1976b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 36); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1976b4: 0x6a23003f
    ctx->pc = 0x1976b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 63); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1976b8: 0x6e230038
    ctx->pc = 0x1976b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 56); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1976bc: 0xb2030033
    ctx->pc = 0x1976bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 51); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1976c0: 0xb603002c
    ctx->pc = 0x1976c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 44); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1976c4: 0xae020000
    ctx->pc = 0x1976c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1976c8: 0xdfbf0040
    ctx->pc = 0x1976c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1976cc:
    // 0x1976cc: 0xdfb30030
    ctx->pc = 0x1976ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1976d0:
    // 0x1976d0: 0xdfb20020
    ctx->pc = 0x1976d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1976d4: 0xdfb10010
    ctx->pc = 0x1976d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1976d8: 0xdfb00000
    ctx->pc = 0x1976d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1976dc: 0x3e00008
    ctx->pc = 0x1976DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1976E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197660u: goto label_197660;
            case 0x197670u: goto label_197670;
            case 0x1976CCu: goto label_1976cc;
            case 0x1976D0u: goto label_1976d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1976E4u;
}
