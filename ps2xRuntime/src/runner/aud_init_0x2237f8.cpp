#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: aud_init
// Address: 0x2237f8 - 0x223914
void aud_init_0x2237f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2237f8u;

    // 0x2237f8: 0x27bdffc0
    ctx->pc = 0x2237f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2237fc: 0xffbf0030
    ctx->pc = 0x2237fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x223800: 0xffb20020
    ctx->pc = 0x223800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x223804: 0xffb10010
    ctx->pc = 0x223804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x223808: 0xffb00000
    ctx->pc = 0x223808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22380c: 0x902d
    ctx->pc = 0x22380cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223810: 0x2404001f
    ctx->pc = 0x223810u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 31));
    // 0x223814: 0xc0c14cc
    ctx->pc = 0x223814u;
    SET_GPR_U32(ctx, 31, 0x22381Cu);
    ctx->pc = 0x223818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x305330u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifSetSreg_0x305330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22381Cu; }
    }
    if (ctx->pc != 0x22381Cu) { return; }
    ctx->pc = 0x22381Cu;
    // 0x22381c: 0x2404001e
    ctx->pc = 0x22381cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 30));
    // 0x223820: 0xc0c14cc
    ctx->pc = 0x223820u;
    SET_GPR_U32(ctx, 31, 0x223828u);
    ctx->pc = 0x223824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x305330u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifSetSreg_0x305330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223828u; }
    }
    if (ctx->pc != 0x223828u) { return; }
    ctx->pc = 0x223828u;
    // 0x223828: 0x2404001d
    ctx->pc = 0x223828u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 29));
    // 0x22382c: 0xc0c14cc
    ctx->pc = 0x22382Cu;
    SET_GPR_U32(ctx, 31, 0x223834u);
    ctx->pc = 0x223830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x305330u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifSetSreg_0x305330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223834u; }
    }
    if (ctx->pc != 0x223834u) { return; }
    ctx->pc = 0x223834u;
    // 0x223834: 0x2404001c
    ctx->pc = 0x223834u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 28));
    // 0x223838: 0xc0c14cc
    ctx->pc = 0x223838u;
    SET_GPR_U32(ctx, 31, 0x223840u);
    ctx->pc = 0x22383Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x305330u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifSetSreg_0x305330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223840u; }
    }
    if (ctx->pc != 0x223840u) { return; }
    ctx->pc = 0x223840u;
    // 0x223840: 0x3c02003c
    ctx->pc = 0x223840u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x223844: 0x40202d
    ctx->pc = 0x223844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223848: 0x24420f40
    ctx->pc = 0x223848u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3904));
    // 0x22384c: 0xac400024
    ctx->pc = 0x22384cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x223850: 0x3c11003a
    ctx->pc = 0x223850u;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x223854: 0x80102d
    ctx->pc = 0x223854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223858: 0x24500f40
    ctx->pc = 0x223858u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 3904));
    // 0x22385c: 0x0
    ctx->pc = 0x22385cu;
    // NOP
label_223860:
    // 0x223860: 0x24840f40
    ctx->pc = 0x223860u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 3904));
    // 0x223864: 0x3c050dc5
    ctx->pc = 0x223864u;
    SET_GPR_U32(ctx, 5, ((uint32_t)3525 << 16));
    // 0x223868: 0x34a50dc5
    ctx->pc = 0x223868u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3525));
    // 0x22386c: 0xc0c1836
    ctx->pc = 0x22386Cu;
    SET_GPR_U32(ctx, 31, 0x223874u);
    ctx->pc = 0x223870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3060D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifBindRpc_0x3060d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223874u; }
    }
    if (ctx->pc != 0x223874u) { return; }
    ctx->pc = 0x223874u;
    // 0x223874: 0x4430005
    ctx->pc = 0x223874u;
    {
        const bool branch_taken_0x223874 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x223874) {
            ctx->pc = 0x223878u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10000));
            ctx->pc = 0x22388Cu;
            goto label_22388c;
        }
    }
    ctx->pc = 0x22387Cu;
    // 0x22387c: 0x26246a40
    ctx->pc = 0x22387cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 27200));
    // 0x223880: 0xc0b4976
    ctx->pc = 0x223880u;
    SET_GPR_U32(ctx, 31, 0x223888u);
    ctx->pc = 0x223884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D25D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorf_0x2d25d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223888u; }
    }
    if (ctx->pc != 0x223888u) { return; }
    ctx->pc = 0x223888u;
    // 0x223888: 0x24022710
    ctx->pc = 0x223888u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10000));
label_22388c:
    // 0x22388c: 0x2403ffff
    ctx->pc = 0x22388cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_223890:
    // 0x223890: 0x2442ffff
    ctx->pc = 0x223890u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x223894: 0x0
    ctx->pc = 0x223894u;
    // NOP
    // 0x223898: 0x0
    ctx->pc = 0x223898u;
    // NOP
    // 0x22389c: 0x0
    ctx->pc = 0x22389cu;
    // NOP
    // 0x2238a0: 0x0
    ctx->pc = 0x2238a0u;
    // NOP
    // 0x2238a4: 0x1443fffa
    ctx->pc = 0x2238A4u;
    {
        const bool branch_taken_0x2238a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2238a4) {
            ctx->pc = 0x223890u;
            goto label_223890;
        }
    }
    ctx->pc = 0x2238ACu;
    // 0x2238ac: 0x8e020024
    ctx->pc = 0x2238acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2238b0: 0x1040ffeb
    ctx->pc = 0x2238B0u;
    {
        const bool branch_taken_0x2238b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2238B4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x2238b0) {
            ctx->pc = 0x223860u;
            goto label_223860;
        }
    }
    ctx->pc = 0x2238B8u;
    // 0x2238b8: 0xc088cb6
    ctx->pc = 0x2238B8u;
    SET_GPR_U32(ctx, 31, 0x2238C0u);
    ctx->pc = 0x2232D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        wipe_tx_buf_0x2232d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2238C0u; }
    }
    if (ctx->pc != 0x2238C0u) { return; }
    ctx->pc = 0x2238C0u;
    // 0x2238c0: 0x3c04003c
    ctx->pc = 0x2238c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2238c4: 0x24830ac0
    ctx->pc = 0x2238c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 2752));
    // 0x2238c8: 0x3c020032
    ctx->pc = 0x2238c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2238cc: 0x8c4206f0
    ctx->pc = 0x2238ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1776)));
    // 0x2238d0: 0xac820ac0
    ctx->pc = 0x2238d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2752), GPR_U32(ctx, 2));
    // 0x2238d4: 0x3c02004c
    ctx->pc = 0x2238d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)76 << 16));
    // 0x2238d8: 0xac620004
    ctx->pc = 0x2238d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2238dc: 0x3c020001
    ctx->pc = 0x2238dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x2238e0: 0x34428000
    ctx->pc = 0x2238e0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32768));
    // 0x2238e4: 0xac620008
    ctx->pc = 0x2238e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2238e8: 0x24020100
    ctx->pc = 0x2238e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 256));
    // 0x2238ec: 0xac62000c
    ctx->pc = 0x2238ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x2238f0: 0x24040013
    ctx->pc = 0x2238f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 19));
    // 0x2238f4: 0xc088ce8
    ctx->pc = 0x2238F4u;
    SET_GPR_U32(ctx, 31, 0x2238FCu);
    ctx->pc = 0x2238F8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2233A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        audIOP_0x2233a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2238FCu; }
    }
    if (ctx->pc != 0x2238FCu) { return; }
    ctx->pc = 0x2238FCu;
    // 0x2238fc: 0xdfbf0030
    ctx->pc = 0x2238fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x223900: 0xdfb20020
    ctx->pc = 0x223900u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223904: 0xdfb10010
    ctx->pc = 0x223904u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223908: 0xdfb00000
    ctx->pc = 0x223908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22390c: 0x3e00008
    ctx->pc = 0x22390Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223910u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x223860u: goto label_223860;
            case 0x22388Cu: goto label_22388c;
            case 0x223890u: goto label_223890;
            default: break;
        }
        return;
    }
    ctx->pc = 0x223914u;
}
