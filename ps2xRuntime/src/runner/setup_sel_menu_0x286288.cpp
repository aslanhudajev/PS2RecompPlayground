#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setup_sel_menu
// Address: 0x286288 - 0x28668c
void setup_sel_menu_0x286288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x286288u;

label_286288:
    // 0x286288: 0x27bdffb0
    ctx->pc = 0x286288u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_28628c:
    // 0x28628c: 0xffbf0040
    ctx->pc = 0x28628cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_286290:
    // 0x286290: 0xffb30030
    ctx->pc = 0x286290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_286294:
    // 0x286294: 0xffb20020
    ctx->pc = 0x286294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_286298:
    // 0x286298: 0xffb10010
    ctx->pc = 0x286298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_28629c:
    // 0x28629c: 0xffb00000
    ctx->pc = 0x28629cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2862a0:
    // 0x2862a0: 0x80902d
    ctx->pc = 0x2862a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2862a4:
    // 0x2862a4: 0xa0982d
    ctx->pc = 0x2862a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2862a8:
    // 0x2862a8: 0xc0816b8
label_2862ac:
    if (ctx->pc == 0x2862ACu) {
        ctx->pc = 0x2862ACu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2862B0u;
        goto label_2862b0;
    }
    ctx->pc = 0x2862A8u;
    SET_GPR_U32(ctx, 31, 0x2862B0u);
    ctx->pc = 0x2862ACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x205AE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ClearPlayerControl_0x205ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2862B0u; }
    }
    if (ctx->pc != 0x2862B0u) { return; }
    ctx->pc = 0x2862B0u;
label_2862b0:
    // 0x2862b0: 0x3c030035
    ctx->pc = 0x2862b0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_2862b4:
    // 0x2862b4: 0x2463a620
    ctx->pc = 0x2862b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294944288));
label_2862b8:
    // 0x2862b8: 0x240200e8
    ctx->pc = 0x2862b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
label_2862bc:
    // 0x2862bc: 0x2421018
    ctx->pc = 0x2862bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2862c0:
    // 0x2862c0: 0x3c040035
    ctx->pc = 0x2862c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_2862c4:
    // 0x2862c4: 0x431821
    ctx->pc = 0x2862c4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2862c8:
    // 0x2862c8: 0x2484a9c0
    ctx->pc = 0x2862c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945216));
label_2862cc:
    // 0x2862cc: 0x641025
    ctx->pc = 0x2862ccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2862d0:
    // 0x2862d0: 0x30420007
    ctx->pc = 0x2862d0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 7));
label_2862d4:
    // 0x2862d4: 0x10400019
label_2862d8:
    if (ctx->pc == 0x2862D8u) {
        ctx->pc = 0x2862D8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 224));
        ctx->pc = 0x2862DCu;
        goto label_2862dc;
    }
    ctx->pc = 0x2862D4u;
    {
        const bool branch_taken_0x2862d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2862D8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 224));
        if (branch_taken_0x2862d4) {
            ctx->pc = 0x28633Cu;
            goto label_28633c;
        }
    }
    ctx->pc = 0x2862DCu;
label_2862dc:
    // 0x2862dc: 0x68850007
    ctx->pc = 0x2862dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
label_2862e0:
    // 0x2862e0: 0x6c850000
    ctx->pc = 0x2862e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
label_2862e4:
    // 0x2862e4: 0x6886000f
    ctx->pc = 0x2862e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
label_2862e8:
    // 0x2862e8: 0x6c860008
    ctx->pc = 0x2862e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
label_2862ec:
    // 0x2862ec: 0x68870017
    ctx->pc = 0x2862ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
label_2862f0:
    // 0x2862f0: 0x6c870010
    ctx->pc = 0x2862f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
label_2862f4:
    // 0x2862f4: 0x6888001f
    ctx->pc = 0x2862f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
label_2862f8:
    // 0x2862f8: 0x6c880018
    ctx->pc = 0x2862f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
label_2862fc:
    // 0x2862fc: 0xb0650007
    ctx->pc = 0x2862fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_286300:
    // 0x286300: 0xb4650000
    ctx->pc = 0x286300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_286304:
    // 0x286304: 0xb066000f
    ctx->pc = 0x286304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_286308:
    // 0x286308: 0xb4660008
    ctx->pc = 0x286308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28630c:
    // 0x28630c: 0xb0670017
    ctx->pc = 0x28630cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_286310:
    // 0x286310: 0xb4670010
    ctx->pc = 0x286310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_286314:
    // 0x286314: 0xb068001f
    ctx->pc = 0x286314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_286318:
    // 0x286318: 0xb4680018
    ctx->pc = 0x286318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28631c:
    // 0x28631c: 0x24840020
    ctx->pc = 0x28631cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
label_286320:
    // 0x286320: 0x24630020
    ctx->pc = 0x286320u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
label_286324:
    // 0x286324: 0x0
    ctx->pc = 0x286324u;
    // NOP
label_286328:
    // 0x286328: 0x0
    ctx->pc = 0x286328u;
    // NOP
label_28632c:
    // 0x28632c: 0x1482ffeb
label_286330:
    if (ctx->pc == 0x286330u) {
        ctx->pc = 0x286334u;
        goto label_286334;
    }
    ctx->pc = 0x28632Cu;
    {
        const bool branch_taken_0x28632c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x28632c) {
            ctx->pc = 0x2862DCu;
            goto label_2862dc;
        }
    }
    ctx->pc = 0x286334u;
label_286334:
    // 0x286334: 0x1000000f
label_286338:
    if (ctx->pc == 0x286338u) {
        ctx->pc = 0x28633Cu;
        goto label_28633c;
    }
    ctx->pc = 0x286334u;
    {
        const bool branch_taken_0x286334 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x286334) {
            ctx->pc = 0x286374u;
            goto label_286374;
        }
    }
    ctx->pc = 0x28633Cu;
label_28633c:
    // 0x28633c: 0xdc850000
    ctx->pc = 0x28633cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_286340:
    // 0x286340: 0xdc860008
    ctx->pc = 0x286340u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_286344:
    // 0x286344: 0xdc870010
    ctx->pc = 0x286344u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
label_286348:
    // 0x286348: 0xdc880018
    ctx->pc = 0x286348u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
label_28634c:
    // 0x28634c: 0xfc650000
    ctx->pc = 0x28634cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
label_286350:
    // 0x286350: 0xfc660008
    ctx->pc = 0x286350u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
label_286354:
    // 0x286354: 0xfc670010
    ctx->pc = 0x286354u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
label_286358:
    // 0x286358: 0xfc680018
    ctx->pc = 0x286358u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
label_28635c:
    // 0x28635c: 0x24840020
    ctx->pc = 0x28635cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
label_286360:
    // 0x286360: 0x24630020
    ctx->pc = 0x286360u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
label_286364:
    // 0x286364: 0x0
    ctx->pc = 0x286364u;
    // NOP
label_286368:
    // 0x286368: 0x0
    ctx->pc = 0x286368u;
    // NOP
label_28636c:
    // 0x28636c: 0x1482fff3
label_286370:
    if (ctx->pc == 0x286370u) {
        ctx->pc = 0x286374u;
        goto label_286374;
    }
    ctx->pc = 0x28636Cu;
    {
        const bool branch_taken_0x28636c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x28636c) {
            ctx->pc = 0x28633Cu;
            goto label_28633c;
        }
    }
    ctx->pc = 0x286374u;
label_286374:
    // 0x286374: 0x68820007
    ctx->pc = 0x286374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
label_286378:
    // 0x286378: 0x6c820000
    ctx->pc = 0x286378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
label_28637c:
    // 0x28637c: 0xb0620007
    ctx->pc = 0x28637cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_286380:
    // 0x286380: 0xb4620000
    ctx->pc = 0x286380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_286384:
    // 0x286384: 0x3c050035
    ctx->pc = 0x286384u;
    SET_GPR_U32(ctx, 5, ((uint32_t)53 << 16));
label_286388:
    // 0x286388: 0x24a5a620
    ctx->pc = 0x286388u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294944288));
label_28638c:
    // 0x28638c: 0x240400e8
    ctx->pc = 0x28638cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 232));
label_286390:
    // 0x286390: 0x2442018
    ctx->pc = 0x286390u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_286394:
    // 0x286394: 0x24a6000c
    ctx->pc = 0x286394u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 5), 12));
label_286398:
    // 0x286398: 0x863021
    ctx->pc = 0x286398u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_28639c:
    // 0x28639c: 0x3c020035
    ctx->pc = 0x28639cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_2863a0:
    // 0x2863a0: 0x2442a2f0
    ctx->pc = 0x2863a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294943472));
label_2863a4:
    // 0x2863a4: 0x121880
    ctx->pc = 0x2863a4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 2));
label_2863a8:
    // 0x2863a8: 0x621821
    ctx->pc = 0x2863a8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2863ac:
    // 0x2863ac: 0x8cc20000
    ctx->pc = 0x2863acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2863b0:
    // 0x2863b0: 0x8c630000
    ctx->pc = 0x2863b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2863b4:
    // 0x2863b4: 0x431023
    ctx->pc = 0x2863b4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2863b8:
    // 0x2863b8: 0xacc20000
    ctx->pc = 0x2863b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_2863bc:
    // 0x2863bc: 0x851021
    ctx->pc = 0x2863bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2863c0:
    // 0x2863c0: 0xac530000
    ctx->pc = 0x2863c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_2863c4:
    // 0x2863c4: 0x24a50020
    ctx->pc = 0x2863c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
label_2863c8:
    // 0x2863c8: 0x852021
    ctx->pc = 0x2863c8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2863cc:
    // 0x2863cc: 0x8c820000
    ctx->pc = 0x2863ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2863d0:
    // 0x2863d0: 0x34420800
    ctx->pc = 0x2863d0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2048));
label_2863d4:
    // 0x2863d4: 0xac820000
    ctx->pc = 0x2863d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2863d8:
    // 0x2863d8: 0x2e620010
    ctx->pc = 0x2863d8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), 16));
label_2863dc:
    // 0x2863dc: 0x1040009e
label_2863e0:
    if (ctx->pc == 0x2863E0u) {
        ctx->pc = 0x2863E0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x2863E4u;
        goto label_2863e4;
    }
    ctx->pc = 0x2863DCu;
    {
        const bool branch_taken_0x2863dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2863E0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2863dc) {
            ctx->pc = 0x286658u;
            goto label_286658;
        }
    }
    ctx->pc = 0x2863E4u;
label_2863e4:
    // 0x2863e4: 0x2442d340
    ctx->pc = 0x2863e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294955840));
label_2863e8:
    // 0x2863e8: 0x131880
    ctx->pc = 0x2863e8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
label_2863ec:
    // 0x2863ec: 0x621821
    ctx->pc = 0x2863ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2863f0:
    // 0x2863f0: 0x8c620000
    ctx->pc = 0x2863f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2863f4:
    // 0x2863f4: 0x400008
label_2863f8:
    if (ctx->pc == 0x2863F8u) {
        ctx->pc = 0x2863FCu;
        goto label_2863fc;
    }
    ctx->pc = 0x2863F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x286288u: goto label_286288;
            case 0x28628Cu: goto label_28628c;
            case 0x286290u: goto label_286290;
            case 0x286294u: goto label_286294;
            case 0x286298u: goto label_286298;
            case 0x28629Cu: goto label_28629c;
            case 0x2862A0u: goto label_2862a0;
            case 0x2862A4u: goto label_2862a4;
            case 0x2862A8u: goto label_2862a8;
            case 0x2862ACu: goto label_2862ac;
            case 0x2862B0u: goto label_2862b0;
            case 0x2862B4u: goto label_2862b4;
            case 0x2862B8u: goto label_2862b8;
            case 0x2862BCu: goto label_2862bc;
            case 0x2862C0u: goto label_2862c0;
            case 0x2862C4u: goto label_2862c4;
            case 0x2862C8u: goto label_2862c8;
            case 0x2862CCu: goto label_2862cc;
            case 0x2862D0u: goto label_2862d0;
            case 0x2862D4u: goto label_2862d4;
            case 0x2862D8u: goto label_2862d8;
            case 0x2862DCu: goto label_2862dc;
            case 0x2862E0u: goto label_2862e0;
            case 0x2862E4u: goto label_2862e4;
            case 0x2862E8u: goto label_2862e8;
            case 0x2862ECu: goto label_2862ec;
            case 0x2862F0u: goto label_2862f0;
            case 0x2862F4u: goto label_2862f4;
            case 0x2862F8u: goto label_2862f8;
            case 0x2862FCu: goto label_2862fc;
            case 0x286300u: goto label_286300;
            case 0x286304u: goto label_286304;
            case 0x286308u: goto label_286308;
            case 0x28630Cu: goto label_28630c;
            case 0x286310u: goto label_286310;
            case 0x286314u: goto label_286314;
            case 0x286318u: goto label_286318;
            case 0x28631Cu: goto label_28631c;
            case 0x286320u: goto label_286320;
            case 0x286324u: goto label_286324;
            case 0x286328u: goto label_286328;
            case 0x28632Cu: goto label_28632c;
            case 0x286330u: goto label_286330;
            case 0x286334u: goto label_286334;
            case 0x286338u: goto label_286338;
            case 0x28633Cu: goto label_28633c;
            case 0x286340u: goto label_286340;
            case 0x286344u: goto label_286344;
            case 0x286348u: goto label_286348;
            case 0x28634Cu: goto label_28634c;
            case 0x286350u: goto label_286350;
            case 0x286354u: goto label_286354;
            case 0x286358u: goto label_286358;
            case 0x28635Cu: goto label_28635c;
            case 0x286360u: goto label_286360;
            case 0x286364u: goto label_286364;
            case 0x286368u: goto label_286368;
            case 0x28636Cu: goto label_28636c;
            case 0x286370u: goto label_286370;
            case 0x286374u: goto label_286374;
            case 0x286378u: goto label_286378;
            case 0x28637Cu: goto label_28637c;
            case 0x286380u: goto label_286380;
            case 0x286384u: goto label_286384;
            case 0x286388u: goto label_286388;
            case 0x28638Cu: goto label_28638c;
            case 0x286390u: goto label_286390;
            case 0x286394u: goto label_286394;
            case 0x286398u: goto label_286398;
            case 0x28639Cu: goto label_28639c;
            case 0x2863A0u: goto label_2863a0;
            case 0x2863A4u: goto label_2863a4;
            case 0x2863A8u: goto label_2863a8;
            case 0x2863ACu: goto label_2863ac;
            case 0x2863B0u: goto label_2863b0;
            case 0x2863B4u: goto label_2863b4;
            case 0x2863B8u: goto label_2863b8;
            case 0x2863BCu: goto label_2863bc;
            case 0x2863C0u: goto label_2863c0;
            case 0x2863C4u: goto label_2863c4;
            case 0x2863C8u: goto label_2863c8;
            case 0x2863CCu: goto label_2863cc;
            case 0x2863D0u: goto label_2863d0;
            case 0x2863D4u: goto label_2863d4;
            case 0x2863D8u: goto label_2863d8;
            case 0x2863DCu: goto label_2863dc;
            case 0x2863E0u: goto label_2863e0;
            case 0x2863E4u: goto label_2863e4;
            case 0x2863E8u: goto label_2863e8;
            case 0x2863ECu: goto label_2863ec;
            case 0x2863F0u: goto label_2863f0;
            case 0x2863F4u: goto label_2863f4;
            case 0x2863F8u: goto label_2863f8;
            case 0x2863FCu: goto label_2863fc;
            case 0x286400u: goto label_286400;
            case 0x286404u: goto label_286404;
            case 0x286408u: goto label_286408;
            case 0x28640Cu: goto label_28640c;
            case 0x286410u: goto label_286410;
            case 0x286414u: goto label_286414;
            case 0x286418u: goto label_286418;
            case 0x28641Cu: goto label_28641c;
            case 0x286420u: goto label_286420;
            case 0x286424u: goto label_286424;
            case 0x286428u: goto label_286428;
            case 0x28642Cu: goto label_28642c;
            case 0x286430u: goto label_286430;
            case 0x286434u: goto label_286434;
            case 0x286438u: goto label_286438;
            case 0x28643Cu: goto label_28643c;
            case 0x286440u: goto label_286440;
            case 0x286444u: goto label_286444;
            case 0x286448u: goto label_286448;
            case 0x28644Cu: goto label_28644c;
            case 0x286450u: goto label_286450;
            case 0x286454u: goto label_286454;
            case 0x286458u: goto label_286458;
            case 0x28645Cu: goto label_28645c;
            case 0x286460u: goto label_286460;
            case 0x286464u: goto label_286464;
            case 0x286468u: goto label_286468;
            case 0x28646Cu: goto label_28646c;
            case 0x286470u: goto label_286470;
            case 0x286474u: goto label_286474;
            case 0x286478u: goto label_286478;
            case 0x28647Cu: goto label_28647c;
            case 0x286480u: goto label_286480;
            case 0x286484u: goto label_286484;
            case 0x286488u: goto label_286488;
            case 0x28648Cu: goto label_28648c;
            case 0x286490u: goto label_286490;
            case 0x286494u: goto label_286494;
            case 0x286498u: goto label_286498;
            case 0x28649Cu: goto label_28649c;
            case 0x2864A0u: goto label_2864a0;
            case 0x2864A4u: goto label_2864a4;
            case 0x2864A8u: goto label_2864a8;
            case 0x2864ACu: goto label_2864ac;
            case 0x2864B0u: goto label_2864b0;
            case 0x2864B4u: goto label_2864b4;
            case 0x2864B8u: goto label_2864b8;
            case 0x2864BCu: goto label_2864bc;
            case 0x2864C0u: goto label_2864c0;
            case 0x2864C4u: goto label_2864c4;
            case 0x2864C8u: goto label_2864c8;
            case 0x2864CCu: goto label_2864cc;
            case 0x2864D0u: goto label_2864d0;
            case 0x2864D4u: goto label_2864d4;
            case 0x2864D8u: goto label_2864d8;
            case 0x2864DCu: goto label_2864dc;
            case 0x2864E0u: goto label_2864e0;
            case 0x2864E4u: goto label_2864e4;
            case 0x2864E8u: goto label_2864e8;
            case 0x2864ECu: goto label_2864ec;
            case 0x2864F0u: goto label_2864f0;
            case 0x2864F4u: goto label_2864f4;
            case 0x2864F8u: goto label_2864f8;
            case 0x2864FCu: goto label_2864fc;
            case 0x286500u: goto label_286500;
            case 0x286504u: goto label_286504;
            case 0x286508u: goto label_286508;
            case 0x28650Cu: goto label_28650c;
            case 0x286510u: goto label_286510;
            case 0x286514u: goto label_286514;
            case 0x286518u: goto label_286518;
            case 0x28651Cu: goto label_28651c;
            case 0x286520u: goto label_286520;
            case 0x286524u: goto label_286524;
            case 0x286528u: goto label_286528;
            case 0x28652Cu: goto label_28652c;
            case 0x286530u: goto label_286530;
            case 0x286534u: goto label_286534;
            case 0x286538u: goto label_286538;
            case 0x28653Cu: goto label_28653c;
            case 0x286540u: goto label_286540;
            case 0x286544u: goto label_286544;
            case 0x286548u: goto label_286548;
            case 0x28654Cu: goto label_28654c;
            case 0x286550u: goto label_286550;
            case 0x286554u: goto label_286554;
            case 0x286558u: goto label_286558;
            case 0x28655Cu: goto label_28655c;
            case 0x286560u: goto label_286560;
            case 0x286564u: goto label_286564;
            case 0x286568u: goto label_286568;
            case 0x28656Cu: goto label_28656c;
            case 0x286570u: goto label_286570;
            case 0x286574u: goto label_286574;
            case 0x286578u: goto label_286578;
            case 0x28657Cu: goto label_28657c;
            case 0x286580u: goto label_286580;
            case 0x286584u: goto label_286584;
            case 0x286588u: goto label_286588;
            case 0x28658Cu: goto label_28658c;
            case 0x286590u: goto label_286590;
            case 0x286594u: goto label_286594;
            case 0x286598u: goto label_286598;
            case 0x28659Cu: goto label_28659c;
            case 0x2865A0u: goto label_2865a0;
            case 0x2865A4u: goto label_2865a4;
            case 0x2865A8u: goto label_2865a8;
            case 0x2865ACu: goto label_2865ac;
            case 0x2865B0u: goto label_2865b0;
            case 0x2865B4u: goto label_2865b4;
            case 0x2865B8u: goto label_2865b8;
            case 0x2865BCu: goto label_2865bc;
            case 0x2865C0u: goto label_2865c0;
            case 0x2865C4u: goto label_2865c4;
            case 0x2865C8u: goto label_2865c8;
            case 0x2865CCu: goto label_2865cc;
            case 0x2865D0u: goto label_2865d0;
            case 0x2865D4u: goto label_2865d4;
            case 0x2865D8u: goto label_2865d8;
            case 0x2865DCu: goto label_2865dc;
            case 0x2865E0u: goto label_2865e0;
            case 0x2865E4u: goto label_2865e4;
            case 0x2865E8u: goto label_2865e8;
            case 0x2865ECu: goto label_2865ec;
            case 0x2865F0u: goto label_2865f0;
            case 0x2865F4u: goto label_2865f4;
            case 0x2865F8u: goto label_2865f8;
            case 0x2865FCu: goto label_2865fc;
            case 0x286600u: goto label_286600;
            case 0x286604u: goto label_286604;
            case 0x286608u: goto label_286608;
            case 0x28660Cu: goto label_28660c;
            case 0x286610u: goto label_286610;
            case 0x286614u: goto label_286614;
            case 0x286618u: goto label_286618;
            case 0x28661Cu: goto label_28661c;
            case 0x286620u: goto label_286620;
            case 0x286624u: goto label_286624;
            case 0x286628u: goto label_286628;
            case 0x28662Cu: goto label_28662c;
            case 0x286630u: goto label_286630;
            case 0x286634u: goto label_286634;
            case 0x286638u: goto label_286638;
            case 0x28663Cu: goto label_28663c;
            case 0x286640u: goto label_286640;
            case 0x286644u: goto label_286644;
            case 0x286648u: goto label_286648;
            case 0x28664Cu: goto label_28664c;
            case 0x286650u: goto label_286650;
            case 0x286654u: goto label_286654;
            case 0x286658u: goto label_286658;
            case 0x28665Cu: goto label_28665c;
            case 0x286660u: goto label_286660;
            case 0x286664u: goto label_286664;
            case 0x286668u: goto label_286668;
            case 0x28666Cu: goto label_28666c;
            case 0x286670u: goto label_286670;
            case 0x286674u: goto label_286674;
            case 0x286678u: goto label_286678;
            case 0x28667Cu: goto label_28667c;
            case 0x286680u: goto label_286680;
            case 0x286684u: goto label_286684;
            case 0x286688u: goto label_286688;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2863FCu;
label_2863fc:
    // 0x2863fc: 0x3c020031
    ctx->pc = 0x2863fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_286400:
    // 0x286400: 0x8c42f184
    ctx->pc = 0x286400u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
label_286404:
    // 0x286404: 0x1040000a
label_286408:
    if (ctx->pc == 0x286408u) {
        ctx->pc = 0x286408u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 232));
        ctx->pc = 0x28640Cu;
        goto label_28640c;
    }
    ctx->pc = 0x286404u;
    {
        const bool branch_taken_0x286404 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x286408u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 232));
        if (branch_taken_0x286404) {
            ctx->pc = 0x286430u;
            goto label_286430;
        }
    }
    ctx->pc = 0x28640Cu;
label_28640c:
    // 0x28640c: 0x3c020035
    ctx->pc = 0x28640cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_286410:
    // 0x286410: 0x2442a620
    ctx->pc = 0x286410u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944288));
label_286414:
    // 0x286414: 0x2431818
    ctx->pc = 0x286414u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_286418:
    // 0x286418: 0x24420020
    ctx->pc = 0x286418u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
label_28641c:
    // 0x28641c: 0x621821
    ctx->pc = 0x28641cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_286420:
    // 0x286420: 0x8c620000
    ctx->pc = 0x286420u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_286424:
    // 0x286424: 0x2404f7ff
    ctx->pc = 0x286424u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294965247));
label_286428:
    // 0x286428: 0x441024
    ctx->pc = 0x286428u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_28642c:
    // 0x28642c: 0xac620000
    ctx->pc = 0x28642cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_286430:
    // 0x286430: 0x3c100035
    ctx->pc = 0x286430u;
    SET_GPR_U32(ctx, 16, ((uint32_t)53 << 16));
label_286434:
    // 0x286434: 0x2610a620
    ctx->pc = 0x286434u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294944288));
label_286438:
    // 0x286438: 0x241100e8
    ctx->pc = 0x286438u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 232));
label_28643c:
    // 0x28643c: 0x2518818
    ctx->pc = 0x28643cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_286440:
    // 0x286440: 0x2111821
    ctx->pc = 0x286440u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_286444:
    // 0x286444: 0x3c020035
    ctx->pc = 0x286444u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_286448:
    // 0x286448: 0x10000008
label_28644c:
    if (ctx->pc == 0x28644Cu) {
        ctx->pc = 0x28644Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294943848));
        ctx->pc = 0x286450u;
        goto label_286450;
    }
    ctx->pc = 0x286448u;
    {
        const bool branch_taken_0x286448 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28644Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294943848));
        if (branch_taken_0x286448) {
            ctx->pc = 0x28646Cu;
            goto label_28646c;
        }
    }
    ctx->pc = 0x286450u;
label_286450:
    // 0x286450: 0x3c100035
    ctx->pc = 0x286450u;
    SET_GPR_U32(ctx, 16, ((uint32_t)53 << 16));
label_286454:
    // 0x286454: 0x2610a620
    ctx->pc = 0x286454u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294944288));
label_286458:
    // 0x286458: 0x241100e8
    ctx->pc = 0x286458u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 232));
label_28645c:
    // 0x28645c: 0x2518818
    ctx->pc = 0x28645cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_286460:
    // 0x286460: 0x2111821
    ctx->pc = 0x286460u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_286464:
    // 0x286464: 0x3c020035
    ctx->pc = 0x286464u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_286468:
    // 0x286468: 0x2442a4d8
    ctx->pc = 0x286468u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294943960));
label_28646c:
    // 0x28646c: 0xac62001c
    ctx->pc = 0x28646cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_286470:
    // 0x286470: 0x240202d
    ctx->pc = 0x286470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_286474:
    // 0x286474: 0xc0a1808
label_286478:
    if (ctx->pc == 0x286478u) {
        ctx->pc = 0x286478u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28647Cu;
        goto label_28647c;
    }
    ctx->pc = 0x286474u;
    SET_GPR_U32(ctx, 31, 0x28647Cu);
    ctx->pc = 0x286478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x286020u;
    {
        const uint32_t __entryPc = ctx->pc;
        sel_activate_loadsave_0x286020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28647Cu; }
    }
    if (ctx->pc != 0x28647Cu) { return; }
    ctx->pc = 0x28647Cu;
label_28647c:
    // 0x28647c: 0x2118021
    ctx->pc = 0x28647cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_286480:
    // 0x286480: 0x10000075
label_286484:
    if (ctx->pc == 0x286484u) {
        ctx->pc = 0x286484u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->pc = 0x286488u;
        goto label_286488;
    }
    ctx->pc = 0x286480u;
    {
        const bool branch_taken_0x286480 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x286484u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        if (branch_taken_0x286480) {
            ctx->pc = 0x286658u;
            goto label_286658;
        }
    }
    ctx->pc = 0x286488u;
label_286488:
    // 0x286488: 0x3c030035
    ctx->pc = 0x286488u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_28648c:
    // 0x28648c: 0x2463a620
    ctx->pc = 0x28648cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294944288));
label_286490:
    // 0x286490: 0x240400e8
    ctx->pc = 0x286490u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 232));
label_286494:
    // 0x286494: 0x2442018
    ctx->pc = 0x286494u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_286498:
    // 0x286498: 0x642821
    ctx->pc = 0x286498u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_28649c:
    // 0x28649c: 0x3c020035
    ctx->pc = 0x28649cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_2864a0:
    // 0x2864a0: 0x2442a5b0
    ctx->pc = 0x2864a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944176));
label_2864a4:
    // 0x2864a4: 0xaca2001c
    ctx->pc = 0x2864a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
label_2864a8:
    // 0x2864a8: 0x24020001
    ctx->pc = 0x2864a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2864ac:
    // 0x2864ac: 0xaca20074
    ctx->pc = 0x2864acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 116), GPR_U32(ctx, 2));
label_2864b0:
    // 0x2864b0: 0xa0182d
    ctx->pc = 0x2864b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2864b4:
    // 0x2864b4: 0x3c020035
    ctx->pc = 0x2864b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_2864b8:
    // 0x2864b8: 0x8c42aaa8
    ctx->pc = 0x2864b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294945448)));
label_2864bc:
    // 0x2864bc: 0x24420040
    ctx->pc = 0x2864bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 64));
label_2864c0:
    // 0x2864c0: 0x10000065
label_2864c4:
    if (ctx->pc == 0x2864C4u) {
        ctx->pc = 0x2864C4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x2864C8u;
        goto label_2864c8;
    }
    ctx->pc = 0x2864C0u;
    {
        const bool branch_taken_0x2864c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2864C4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x2864c0) {
            ctx->pc = 0x286658u;
            goto label_286658;
        }
    }
    ctx->pc = 0x2864C8u;
label_2864c8:
    // 0x2864c8: 0x3c040035
    ctx->pc = 0x2864c8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_2864cc:
    // 0x2864cc: 0x2484a620
    ctx->pc = 0x2864ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944288));
label_2864d0:
    // 0x2864d0: 0x240500e8
    ctx->pc = 0x2864d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 232));
label_2864d4:
    // 0x2864d4: 0x2452818
    ctx->pc = 0x2864d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2864d8:
    // 0x2864d8: 0x851021
    ctx->pc = 0x2864d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2864dc:
    // 0x2864dc: 0x3c070035
    ctx->pc = 0x2864dcu;
    SET_GPR_U32(ctx, 7, ((uint32_t)53 << 16));
label_2864e0:
    // 0x2864e0: 0x24e9ad50
    ctx->pc = 0x2864e0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 7), 4294946128));
label_2864e4:
    // 0x2864e4: 0xac49001c
    ctx->pc = 0x2864e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 9));
label_2864e8:
    // 0x2864e8: 0x40302d
    ctx->pc = 0x2864e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2864ec:
    // 0x2864ec: 0x3c030035
    ctx->pc = 0x2864ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_2864f0:
    // 0x2864f0: 0x2463a2f0
    ctx->pc = 0x2864f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294943472));
label_2864f4:
    // 0x2864f4: 0x121080
    ctx->pc = 0x2864f4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
label_2864f8:
    // 0x2864f8: 0x431021
    ctx->pc = 0x2864f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2864fc:
    // 0x2864fc: 0x8c420000
    ctx->pc = 0x2864fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_286500:
    // 0x286500: 0x24420004
    ctx->pc = 0x286500u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
label_286504:
    // 0x286504: 0xacc2000c
    ctx->pc = 0x286504u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_286508:
    // 0x286508: 0xc0182d
    ctx->pc = 0x286508u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28650c:
    // 0x28650c: 0x24020046
    ctx->pc = 0x28650cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 70));
label_286510:
    // 0x286510: 0xac620010
    ctx->pc = 0x286510u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_286514:
    // 0x286514: 0x60102d
    ctx->pc = 0x286514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_286518:
    // 0x286518: 0x3c013f19
    ctx->pc = 0x286518u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16153 << 16));
label_28651c:
    // 0x28651c: 0x3421999a
    ctx->pc = 0x28651cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
label_286520:
    // 0x286520: 0x44810000
    ctx->pc = 0x286520u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_286524:
    // 0x286524: 0xe4400034
    ctx->pc = 0x286524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_286528:
    // 0x286528: 0x24840074
    ctx->pc = 0x286528u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 116));
label_28652c:
    // 0x28652c: 0xa42821
    ctx->pc = 0x28652cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_286530:
    // 0x286530: 0xaca00000
    ctx->pc = 0x286530u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_286534:
    // 0x286534: 0x3c030032
    ctx->pc = 0x286534u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_286538:
    // 0x286538: 0x24631bc0
    ctx->pc = 0x286538u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7104));
label_28653c:
    // 0x28653c: 0x24022b00
    ctx->pc = 0x28653cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
label_286540:
    // 0x286540: 0x2421018
    ctx->pc = 0x286540u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_286544:
    // 0x286544: 0x431021
    ctx->pc = 0x286544u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_286548:
    // 0x286548: 0x8c432ae8
    ctx->pc = 0x286548u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 10984)));
label_28654c:
    // 0x28654c: 0x31880
    ctx->pc = 0x28654cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_286550:
    // 0x286550: 0x8c422aec
    ctx->pc = 0x286550u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10988)));
label_286554:
    // 0x286554: 0x624021
    ctx->pc = 0x286554u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_286558:
    // 0x286558: 0x8ce2ad50
    ctx->pc = 0x286558u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4294946128)));
label_28655c:
    // 0x28655c: 0x1040003e
label_286560:
    if (ctx->pc == 0x286560u) {
        ctx->pc = 0x286560u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x286564u;
        goto label_286564;
    }
    ctx->pc = 0x28655Cu;
    {
        const bool branch_taken_0x28655c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x286560u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28655c) {
            ctx->pc = 0x286658u;
            goto label_286658;
        }
    }
    ctx->pc = 0x286564u;
label_286564:
    // 0x286564: 0x250303e8
    ctx->pc = 0x286564u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 8), 1000));
label_286568:
    // 0x286568: 0x8d220004
    ctx->pc = 0x286568u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_28656c:
    // 0x28656c: 0x1043003b
label_286570:
    if (ctx->pc == 0x286570u) {
        ctx->pc = 0x286570u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
        ctx->pc = 0x286574u;
        goto label_286574;
    }
    ctx->pc = 0x28656Cu;
    {
        const bool branch_taken_0x28656c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x286570u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
        if (branch_taken_0x28656c) {
            ctx->pc = 0x28665Cu;
            goto label_28665c;
        }
    }
    ctx->pc = 0x286574u;
label_286574:
    // 0x286574: 0x24c60001
    ctx->pc = 0x286574u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_286578:
    // 0x286578: 0x3c020035
    ctx->pc = 0x286578u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_28657c:
    // 0x28657c: 0x2444ad50
    ctx->pc = 0x28657cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294946128));
label_286580:
    // 0x286580: 0x24020024
    ctx->pc = 0x286580u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 36));
label_286584:
    // 0x286584: 0xc21818
    ctx->pc = 0x286584u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_286588:
    // 0x286588: 0x641021
    ctx->pc = 0x286588u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_28658c:
    // 0x28658c: 0x8c420000
    ctx->pc = 0x28658cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_286590:
    // 0x286590: 0x10400031
label_286594:
    if (ctx->pc == 0x286594u) {
        ctx->pc = 0x286594u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x286598u;
        goto label_286598;
    }
    ctx->pc = 0x286590u;
    {
        const bool branch_taken_0x286590 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x286594u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        if (branch_taken_0x286590) {
            ctx->pc = 0x286658u;
            goto label_286658;
        }
    }
    ctx->pc = 0x286598u;
label_286598:
    // 0x286598: 0x250303e8
    ctx->pc = 0x286598u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 8), 1000));
label_28659c:
    // 0x28659c: 0x8c420004
    ctx->pc = 0x28659cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2865a0:
    // 0x2865a0: 0x5443fff5
label_2865a4:
    if (ctx->pc == 0x2865A4u) {
        ctx->pc = 0x2865A4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x2865A8u;
        goto label_2865a8;
    }
    ctx->pc = 0x2865A0u;
    {
        const bool branch_taken_0x2865a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2865a0) {
            ctx->pc = 0x2865A4u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x286578u;
            goto label_286578;
        }
    }
    ctx->pc = 0x2865A8u;
label_2865a8:
    // 0x2865a8: 0x3c030035
    ctx->pc = 0x2865a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_2865ac:
    // 0x2865ac: 0x2463a620
    ctx->pc = 0x2865acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294944288));
label_2865b0:
    // 0x2865b0: 0x240200e8
    ctx->pc = 0x2865b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
label_2865b4:
    // 0x2865b4: 0x2421018
    ctx->pc = 0x2865b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2865b8:
    // 0x2865b8: 0x621821
    ctx->pc = 0x2865b8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2865bc:
    // 0x2865bc: 0x10000026
label_2865c0:
    if (ctx->pc == 0x2865C0u) {
        ctx->pc = 0x2865C0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 6));
        ctx->pc = 0x2865C4u;
        goto label_2865c4;
    }
    ctx->pc = 0x2865BCu;
    {
        const bool branch_taken_0x2865bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2865C0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 6));
        if (branch_taken_0x2865bc) {
            ctx->pc = 0x286658u;
            goto label_286658;
        }
    }
    ctx->pc = 0x2865C4u;
label_2865c4:
    // 0x2865c4: 0x3c040035
    ctx->pc = 0x2865c4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_2865c8:
    // 0x2865c8: 0x2484a620
    ctx->pc = 0x2865c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944288));
label_2865cc:
    // 0x2865cc: 0x240500e8
    ctx->pc = 0x2865ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 232));
label_2865d0:
    // 0x2865d0: 0x2452818
    ctx->pc = 0x2865d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2865d4:
    // 0x2865d4: 0x853021
    ctx->pc = 0x2865d4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2865d8:
    // 0x2865d8: 0x24030144
    ctx->pc = 0x2865d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 324));
label_2865dc:
    // 0x2865dc: 0x2431818
    ctx->pc = 0x2865dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2865e0:
    // 0x2865e0: 0x3c020035
    ctx->pc = 0x2865e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_2865e4:
    // 0x2865e4: 0x2442ae70
    ctx->pc = 0x2865e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294946416));
label_2865e8:
    // 0x2865e8: 0x621821
    ctx->pc = 0x2865e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2865ec:
    // 0x2865ec: 0xacc3001c
    ctx->pc = 0x2865ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
label_2865f0:
    // 0x2865f0: 0x3c030035
    ctx->pc = 0x2865f0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_2865f4:
    // 0x2865f4: 0x2463a2f0
    ctx->pc = 0x2865f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294943472));
label_2865f8:
    // 0x2865f8: 0x121080
    ctx->pc = 0x2865f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
label_2865fc:
    // 0x2865fc: 0x431021
    ctx->pc = 0x2865fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_286600:
    // 0x286600: 0x8c420000
    ctx->pc = 0x286600u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_286604:
    // 0x286604: 0x24420008
    ctx->pc = 0x286604u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
label_286608:
    // 0x286608: 0xacc2000c
    ctx->pc = 0x286608u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_28660c:
    // 0x28660c: 0xc0182d
    ctx->pc = 0x28660cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_286610:
    // 0x286610: 0x24020046
    ctx->pc = 0x286610u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 70));
label_286614:
    // 0x286614: 0xac620010
    ctx->pc = 0x286614u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_286618:
    // 0x286618: 0x60102d
    ctx->pc = 0x286618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28661c:
    // 0x28661c: 0x3c013f19
    ctx->pc = 0x28661cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16153 << 16));
label_286620:
    // 0x286620: 0x3421999a
    ctx->pc = 0x286620u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
label_286624:
    // 0x286624: 0x44810000
    ctx->pc = 0x286624u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_286628:
    // 0x286628: 0xe4400034
    ctx->pc = 0x286628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_28662c:
    // 0x28662c: 0x24840074
    ctx->pc = 0x28662cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 116));
label_286630:
    // 0x286630: 0xa42821
    ctx->pc = 0x286630u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_286634:
    // 0x286634: 0x3c030032
    ctx->pc = 0x286634u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_286638:
    // 0x286638: 0x24631bc0
    ctx->pc = 0x286638u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7104));
label_28663c:
    // 0x28663c: 0x24022b00
    ctx->pc = 0x28663cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
label_286640:
    // 0x286640: 0x2421018
    ctx->pc = 0x286640u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_286644:
    // 0x286644: 0x431021
    ctx->pc = 0x286644u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_286648:
    // 0x286648: 0x8c422af4
    ctx->pc = 0x286648u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10996)));
label_28664c:
    // 0x28664c: 0x4410002
label_286650:
    if (ctx->pc == 0x286650u) {
        ctx->pc = 0x286650u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x286654u;
        goto label_286654;
    }
    ctx->pc = 0x28664Cu;
    {
        const bool branch_taken_0x28664c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x286650u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x28664c) {
            ctx->pc = 0x286658u;
            goto label_286658;
        }
    }
    ctx->pc = 0x286654u;
label_286654:
    // 0x286654: 0xaca00000
    ctx->pc = 0x286654u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_286658:
    // 0x286658: 0x240200e8
    ctx->pc = 0x286658u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
label_28665c:
    // 0x28665c: 0x2421018
    ctx->pc = 0x28665cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_286660:
    // 0x286660: 0x3c040035
    ctx->pc = 0x286660u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_286664:
    // 0x286664: 0x2484a620
    ctx->pc = 0x286664u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944288));
label_286668:
    // 0x286668: 0x442021
    ctx->pc = 0x286668u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_28666c:
    // 0x28666c: 0x240282d
    ctx->pc = 0x28666cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_286670:
    // 0x286670: 0xdfbf0040
    ctx->pc = 0x286670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_286674:
    // 0x286674: 0xdfb30030
    ctx->pc = 0x286674u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_286678:
    // 0x286678: 0xdfb20020
    ctx->pc = 0x286678u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28667c:
    // 0x28667c: 0xdfb10010
    ctx->pc = 0x28667cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_286680:
    // 0x286680: 0xdfb00000
    ctx->pc = 0x286680u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_286684:
    // 0x286684: 0x8082b3a
label_286688:
    if (ctx->pc == 0x286688u) {
        ctx->pc = 0x286688u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x28668Cu;
        goto label_fallthrough_0x286684;
    }
    ctx->pc = 0x286684u;
    ctx->pc = 0x286688u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x20ACE8u;
    start_optmenu_nostack_0x20ace8(rdram, ctx, runtime); return;
label_fallthrough_0x286684:
    ctx->pc = 0x28668Cu;
}
