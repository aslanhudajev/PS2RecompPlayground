#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioWorldInit
// Address: 0x25c550 - 0x25c794
void AudioWorldInit_0x25c550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25c550u;

    // 0x25c550: 0x27bdff50
    ctx->pc = 0x25c550u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x25c554: 0xffbf00a0
    ctx->pc = 0x25c554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x25c558: 0xffbe0090
    ctx->pc = 0x25c558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x25c55c: 0xffb70080
    ctx->pc = 0x25c55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x25c560: 0xffb60070
    ctx->pc = 0x25c560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x25c564: 0xffb50060
    ctx->pc = 0x25c564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x25c568: 0xffb40050
    ctx->pc = 0x25c568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x25c56c: 0xffb30040
    ctx->pc = 0x25c56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x25c570: 0xffb20030
    ctx->pc = 0x25c570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x25c574: 0xffb10020
    ctx->pc = 0x25c574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x25c578: 0xffb00010
    ctx->pc = 0x25c578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x25c57c: 0x3c02003b
    ctx->pc = 0x25c57cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x25c580: 0x24469160
    ctx->pc = 0x25c580u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294938976));
    // 0x25c584: 0x68c30007
    ctx->pc = 0x25c584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x25c588: 0x6cc30000
    ctx->pc = 0x25c588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x25c58c: 0xb3a30007
    ctx->pc = 0x25c58cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25c590: 0xb7a30000
    ctx->pc = 0x25c590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25c594: 0x902d
    ctx->pc = 0x25c594u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c598: 0x3c020034
    ctx->pc = 0x25c598u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25c59c: 0x2454d358
    ctx->pc = 0x25c59cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294955864));
    // 0x25c5a0: 0x2417002a
    ctx->pc = 0x25c5a0u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 42));
    // 0x25c5a4: 0x3c13003c
    ctx->pc = 0x25c5a4u;
    SET_GPR_U32(ctx, 19, ((uint32_t)60 << 16));
    // 0x25c5a8: 0x3c020034
    ctx->pc = 0x25c5a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25c5ac: 0x2456d359
    ctx->pc = 0x25c5acu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 4294955865));
    // 0x25c5b0: 0x3c150034
    ctx->pc = 0x25c5b0u;
    SET_GPR_U32(ctx, 21, ((uint32_t)52 << 16));
    // 0x25c5b4: 0x3c02003c
    ctx->pc = 0x25c5b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x25c5b8: 0x245e2b18
    ctx->pc = 0x25c5b8u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 11032));
    // 0x25c5bc: 0x1230c0
    ctx->pc = 0x25c5bcu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 18), 3));
label_25c5c0:
    // 0x25c5c0: 0xd41021
    ctx->pc = 0x25c5c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x25c5c4: 0x80420000
    ctx->pc = 0x25c5c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25c5c8: 0x14570008
    ctx->pc = 0x25C5C8u;
    {
        const bool branch_taken_0x25c5c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 23));
        ctx->pc = 0x25C5CCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294961096)));
        if (branch_taken_0x25c5c8) {
            ctx->pc = 0x25C5ECu;
            goto label_25c5ec;
        }
    }
    ctx->pc = 0x25C5D0u;
    // 0x25c5d0: 0x3c05003b
    ctx->pc = 0x25c5d0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x25c5d4: 0x26642ad0
    ctx->pc = 0x25c5d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 10960));
    // 0x25c5d8: 0x24a59168
    ctx->pc = 0x25c5d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294938984));
    // 0x25c5dc: 0xc0b6252
    ctx->pc = 0x25C5DCu;
    SET_GPR_U32(ctx, 31, 0x25C5E4u);
    ctx->pc = 0x25C5E0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C5E4u; }
    }
    if (ctx->pc != 0x25C5E4u) { return; }
    ctx->pc = 0x25C5E4u;
    // 0x25c5e4: 0x1000001a
    ctx->pc = 0x25C5E4u;
    {
        const bool branch_taken_0x25c5e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C5E8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 10960));
        if (branch_taken_0x25c5e4) {
            ctx->pc = 0x25C650u;
            goto label_25c650;
        }
    }
    ctx->pc = 0x25C5ECu;
label_25c5ec:
    // 0x25c5ec: 0x8c420044
    ctx->pc = 0x25c5ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x25c5f0: 0x440000c
    ctx->pc = 0x25C5F0u;
    {
        const bool branch_taken_0x25c5f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25C5F4u;
        SET_GPR_U32(ctx, 17, ((uint32_t)59 << 16));
        if (branch_taken_0x25c5f0) {
            ctx->pc = 0x25C624u;
            goto label_25c624;
        }
    }
    ctx->pc = 0x25C5F8u;
    // 0x25c5f8: 0x1280c0
    ctx->pc = 0x25c5f8u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 18), 3));
    // 0x25c5fc: 0x2148021
    ctx->pc = 0x25c5fcu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x25c600: 0xc0989a8
    ctx->pc = 0x25C600u;
    SET_GPR_U32(ctx, 31, 0x25C608u);
    ctx->pc = 0x25C604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2626A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LevelLetter_0x2626a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C608u; }
    }
    if (ctx->pc != 0x25C608u) { return; }
    ctx->pc = 0x25C608u;
    // 0x25c608: 0x26642ad0
    ctx->pc = 0x25c608u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 10960));
    // 0x25c60c: 0x26259178
    ctx->pc = 0x25c60cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 4294939000));
    // 0x25c610: 0x200302d
    ctx->pc = 0x25c610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c614: 0xc0b6252
    ctx->pc = 0x25C614u;
    SET_GPR_U32(ctx, 31, 0x25C61Cu);
    ctx->pc = 0x25C618u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C61Cu; }
    }
    if (ctx->pc != 0x25C61Cu) { return; }
    ctx->pc = 0x25C61Cu;
    // 0x25c61c: 0x1000000c
    ctx->pc = 0x25C61Cu;
    {
        const bool branch_taken_0x25c61c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C620u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 10960));
        if (branch_taken_0x25c61c) {
            ctx->pc = 0x25C650u;
            goto label_25c650;
        }
    }
    ctx->pc = 0x25C624u;
label_25c624:
    // 0x25c624: 0x3c11003b
    ctx->pc = 0x25c624u;
    SET_GPR_U32(ctx, 17, ((uint32_t)59 << 16));
    // 0x25c628: 0x1280c0
    ctx->pc = 0x25c628u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 18), 3));
    // 0x25c62c: 0x2148021
    ctx->pc = 0x25c62cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x25c630: 0xc0989a8
    ctx->pc = 0x25C630u;
    SET_GPR_U32(ctx, 31, 0x25C638u);
    ctx->pc = 0x25C634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2626A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LevelLetter_0x2626a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C638u; }
    }
    if (ctx->pc != 0x25C638u) { return; }
    ctx->pc = 0x25C638u;
    // 0x25c638: 0x26642ad0
    ctx->pc = 0x25c638u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 10960));
    // 0x25c63c: 0x26259188
    ctx->pc = 0x25c63cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 4294939016));
    // 0x25c640: 0x200302d
    ctx->pc = 0x25c640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c644: 0xc0b6252
    ctx->pc = 0x25C644u;
    SET_GPR_U32(ctx, 31, 0x25C64Cu);
    ctx->pc = 0x25C648u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C64Cu; }
    }
    if (ctx->pc != 0x25C64Cu) { return; }
    ctx->pc = 0x25C64Cu;
    // 0x25c64c: 0x26702ad0
    ctx->pc = 0x25c64cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 10960));
label_25c650:
    // 0x25c650: 0x200202d
    ctx->pc = 0x25c650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c654: 0x2405ffff
    ctx->pc = 0x25c654u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25c658: 0xc088108
    ctx->pc = 0x25C658u;
    SET_GPR_U32(ctx, 31, 0x25C660u);
    ctx->pc = 0x25C65Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x220420u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindSound_0x220420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C660u; }
    }
    if (ctx->pc != 0x25C660u) { return; }
    ctx->pc = 0x25C660u;
    // 0x25c660: 0x1230c0
    ctx->pc = 0x25c660u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 18), 3));
    // 0x25c664: 0xde1821
    ctx->pc = 0x25c664u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 30)));
    // 0x25c668: 0x440003a
    ctx->pc = 0x25C668u;
    {
        const bool branch_taken_0x25c668 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25C66Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x25c668) {
            ctx->pc = 0x25C754u;
            goto label_25c754;
        }
    }
    ctx->pc = 0x25C670u;
    // 0x25c670: 0x3c030034
    ctx->pc = 0x25c670u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x25c674: 0x2462d358
    ctx->pc = 0x25c674u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294955864));
    // 0x25c678: 0xc21021
    ctx->pc = 0x25c678u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x25c67c: 0x80420000
    ctx->pc = 0x25c67cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25c680: 0x14570008
    ctx->pc = 0x25C680u;
    {
        const bool branch_taken_0x25c680 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 23));
        ctx->pc = 0x25C684u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294961096)));
        if (branch_taken_0x25c680) {
            ctx->pc = 0x25C6A4u;
            goto label_25c6a4;
        }
    }
    ctx->pc = 0x25C688u;
    // 0x25c688: 0x3c05003b
    ctx->pc = 0x25c688u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x25c68c: 0x200202d
    ctx->pc = 0x25c68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c690: 0x24a59198
    ctx->pc = 0x25c690u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939032));
    // 0x25c694: 0xc0b6252
    ctx->pc = 0x25C694u;
    SET_GPR_U32(ctx, 31, 0x25C69Cu);
    ctx->pc = 0x25C698u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C69Cu; }
    }
    if (ctx->pc != 0x25C69Cu) { return; }
    ctx->pc = 0x25C69Cu;
    // 0x25c69c: 0x10000019
    ctx->pc = 0x25C69Cu;
    {
        const bool branch_taken_0x25c69c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C6A0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 10960));
        if (branch_taken_0x25c69c) {
            ctx->pc = 0x25C704u;
            goto label_25c704;
        }
    }
    ctx->pc = 0x25C6A4u;
label_25c6a4:
    // 0x25c6a4: 0x8c420044
    ctx->pc = 0x25c6a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x25c6a8: 0x440000c
    ctx->pc = 0x25C6A8u;
    {
        const bool branch_taken_0x25c6a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25C6ACu;
        SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 18), 3));
        if (branch_taken_0x25c6a8) {
            ctx->pc = 0x25C6DCu;
            goto label_25c6dc;
        }
    }
    ctx->pc = 0x25C6B0u;
    // 0x25c6b0: 0x2148021
    ctx->pc = 0x25c6b0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x25c6b4: 0xc0989a8
    ctx->pc = 0x25C6B4u;
    SET_GPR_U32(ctx, 31, 0x25C6BCu);
    ctx->pc = 0x25C6B8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2626A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LevelLetter_0x2626a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C6BCu; }
    }
    if (ctx->pc != 0x25C6BCu) { return; }
    ctx->pc = 0x25C6BCu;
    // 0x25c6bc: 0x26642ad0
    ctx->pc = 0x25c6bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 10960));
    // 0x25c6c0: 0x3c05003b
    ctx->pc = 0x25c6c0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x25c6c4: 0x24a591a8
    ctx->pc = 0x25c6c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939048));
    // 0x25c6c8: 0x200302d
    ctx->pc = 0x25c6c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c6cc: 0xc0b6252
    ctx->pc = 0x25C6CCu;
    SET_GPR_U32(ctx, 31, 0x25C6D4u);
    ctx->pc = 0x25C6D0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C6D4u; }
    }
    if (ctx->pc != 0x25C6D4u) { return; }
    ctx->pc = 0x25C6D4u;
    // 0x25c6d4: 0x1000000b
    ctx->pc = 0x25C6D4u;
    {
        const bool branch_taken_0x25c6d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C6D8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 10960));
        if (branch_taken_0x25c6d4) {
            ctx->pc = 0x25C704u;
            goto label_25c704;
        }
    }
    ctx->pc = 0x25C6DCu;
label_25c6dc:
    // 0x25c6dc: 0x2148021
    ctx->pc = 0x25c6dcu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x25c6e0: 0xc0989a8
    ctx->pc = 0x25C6E0u;
    SET_GPR_U32(ctx, 31, 0x25C6E8u);
    ctx->pc = 0x25C6E4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2626A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LevelLetter_0x2626a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C6E8u; }
    }
    if (ctx->pc != 0x25C6E8u) { return; }
    ctx->pc = 0x25C6E8u;
    // 0x25c6e8: 0x26642ad0
    ctx->pc = 0x25c6e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 10960));
    // 0x25c6ec: 0x3c05003b
    ctx->pc = 0x25c6ecu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x25c6f0: 0x24a591b8
    ctx->pc = 0x25c6f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939064));
    // 0x25c6f4: 0x200302d
    ctx->pc = 0x25c6f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c6f8: 0xc0b6252
    ctx->pc = 0x25C6F8u;
    SET_GPR_U32(ctx, 31, 0x25C700u);
    ctx->pc = 0x25C6FCu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C700u; }
    }
    if (ctx->pc != 0x25C700u) { return; }
    ctx->pc = 0x25C700u;
    // 0x25c700: 0x26642ad0
    ctx->pc = 0x25c700u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 10960));
label_25c704:
    // 0x25c704: 0x2405ffff
    ctx->pc = 0x25c704u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25c708: 0xc088108
    ctx->pc = 0x25C708u;
    SET_GPR_U32(ctx, 31, 0x25C710u);
    ctx->pc = 0x25C70Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x220420u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindSound_0x220420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C710u; }
    }
    if (ctx->pc != 0x25C710u) { return; }
    ctx->pc = 0x25C710u;
    // 0x25c710: 0x40182d
    ctx->pc = 0x25c710u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c714: 0x3c04003c
    ctx->pc = 0x25c714u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x25c718: 0x24852b18
    ctx->pc = 0x25c718u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 11032));
    // 0x25c71c: 0x1220c0
    ctx->pc = 0x25c71cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 18), 3));
    // 0x25c720: 0xa41021
    ctx->pc = 0x25c720u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x25c724: 0xac430004
    ctx->pc = 0x25c724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x25c728: 0x8fa20000
    ctx->pc = 0x25c728u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c72c: 0x443000a
    ctx->pc = 0x25C72Cu;
    {
        const bool branch_taken_0x25c72c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x25c72c) {
            ctx->pc = 0x25C730u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x25C758u;
            goto label_25c758;
        }
    }
    ctx->pc = 0x25C734u;
    // 0x25c734: 0x851021
    ctx->pc = 0x25c734u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x25c738: 0x8c420000
    ctx->pc = 0x25c738u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25c73c: 0x4420006
    ctx->pc = 0x25C73Cu;
    {
        const bool branch_taken_0x25c73c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x25c73c) {
            ctx->pc = 0x25C740u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x25C758u;
            goto label_25c758;
        }
    }
    ctx->pc = 0x25C744u;
    // 0x25c744: 0x4620004
    ctx->pc = 0x25C744u;
    {
        const bool branch_taken_0x25c744 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x25c744) {
            ctx->pc = 0x25C748u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x25C758u;
            goto label_25c758;
        }
    }
    ctx->pc = 0x25C74Cu;
    // 0x25c74c: 0xafa20000
    ctx->pc = 0x25c74cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x25c750: 0xafa30004
    ctx->pc = 0x25c750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_25c754:
    // 0x25c754: 0x26520001
    ctx->pc = 0x25c754u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_25c758:
    // 0x25c758: 0x2e420006
    ctx->pc = 0x25c758u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), 6));
    // 0x25c75c: 0x5440ff98
    ctx->pc = 0x25C75Cu;
    {
        const bool branch_taken_0x25c75c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25c75c) {
            ctx->pc = 0x25C760u;
            SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 18), 3));
            ctx->pc = 0x25C5C0u;
            goto label_25c5c0;
        }
    }
    ctx->pc = 0x25C764u;
    // 0x25c764: 0xdfbf00a0
    ctx->pc = 0x25c764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25c768: 0xdfbe0090
    ctx->pc = 0x25c768u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25c76c: 0xdfb70080
    ctx->pc = 0x25c76cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25c770: 0xdfb60070
    ctx->pc = 0x25c770u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25c774: 0xdfb50060
    ctx->pc = 0x25c774u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25c778: 0xdfb40050
    ctx->pc = 0x25c778u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25c77c: 0xdfb30040
    ctx->pc = 0x25c77cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25c780: 0xdfb20030
    ctx->pc = 0x25c780u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25c784: 0xdfb10020
    ctx->pc = 0x25c784u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c788: 0xdfb00010
    ctx->pc = 0x25c788u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c78c: 0x3e00008
    ctx->pc = 0x25C78Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C790u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25C5C0u: goto label_25c5c0;
            case 0x25C5ECu: goto label_25c5ec;
            case 0x25C624u: goto label_25c624;
            case 0x25C650u: goto label_25c650;
            case 0x25C6A4u: goto label_25c6a4;
            case 0x25C6DCu: goto label_25c6dc;
            case 0x25C704u: goto label_25c704;
            case 0x25C754u: goto label_25c754;
            case 0x25C758u: goto label_25c758;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25C794u;
}
