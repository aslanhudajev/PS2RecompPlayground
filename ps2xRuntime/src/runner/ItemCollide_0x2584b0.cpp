#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ItemCollide
// Address: 0x2584b0 - 0x2585d4
void ItemCollide_0x2584b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2584b0u;

    // 0x2584b0: 0x27bdff50
    ctx->pc = 0x2584b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2584b4: 0xffbf0080
    ctx->pc = 0x2584b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2584b8: 0xffb70070
    ctx->pc = 0x2584b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2584bc: 0xffb60060
    ctx->pc = 0x2584bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2584c0: 0xffb50050
    ctx->pc = 0x2584c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2584c4: 0xffb40040
    ctx->pc = 0x2584c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2584c8: 0xffb30030
    ctx->pc = 0x2584c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2584cc: 0xffb20020
    ctx->pc = 0x2584ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2584d0: 0xffb10010
    ctx->pc = 0x2584d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2584d4: 0xffb00000
    ctx->pc = 0x2584d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2584d8: 0xe7b700a8
    ctx->pc = 0x2584d8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2584dc: 0xe7b600a0
    ctx->pc = 0x2584dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2584e0: 0xe7b50098
    ctx->pc = 0x2584e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2584e4: 0xe7b40090
    ctx->pc = 0x2584e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2584e8: 0x80a82d
    ctx->pc = 0x2584e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2584ec: 0xa0882d
    ctx->pc = 0x2584ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2584f0: 0xc0a02d
    ctx->pc = 0x2584f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2584f4: 0x46006506
    ctx->pc = 0x2584f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2584f8: 0xe0982d
    ctx->pc = 0x2584f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2584fc: 0x902d
    ctx->pc = 0x2584fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258500: 0x3c0147c3
    ctx->pc = 0x258500u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18371 << 16));
    // 0x258504: 0x34215000
    ctx->pc = 0x258504u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 20480));
    // 0x258508: 0x4481a800
    ctx->pc = 0x258508u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x25850c: 0x3c013fc0
    ctx->pc = 0x25850cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16320 << 16));
    // 0x258510: 0x44810000
    ctx->pc = 0x258510u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x258514: 0x4600a582
    ctx->pc = 0x258514u;
    ctx->f[22] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x258518: 0xc0a0120
    ctx->pc = 0x258518u;
    SET_GPR_U32(ctx, 31, 0x258520u);
    ctx->pc = 0x25851Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x280480u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartItemGrid_0x280480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258520u; }
    }
    if (ctx->pc != 0x258520u) { return; }
    ctx->pc = 0x258520u;
    // 0x258520: 0x3c170034
    ctx->pc = 0x258520u;
    SET_GPR_U32(ctx, 23, ((uint32_t)52 << 16));
    // 0x258524: 0x24160110
    ctx->pc = 0x258524u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 272));
    // 0x258528: 0x4480b800
    ctx->pc = 0x258528u;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 0);
    // 0x25852c: 0x0
    ctx->pc = 0x25852cu;
    // NOP
label_258530:
    // 0x258530: 0xc0a015a
    ctx->pc = 0x258530u;
    SET_GPR_U32(ctx, 31, 0x258538u);
    ctx->pc = 0x280568u;
    {
        const uint32_t __entryPc = ctx->pc;
        NextGridItem_0x280568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258538u; }
    }
    if (ctx->pc != 0x258538u) { return; }
    ctx->pc = 0x258538u;
    // 0x258538: 0x4400016
    ctx->pc = 0x258538u;
    {
        const bool branch_taken_0x258538 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25853Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x258538) {
            ctx->pc = 0x258594u;
            goto label_258594;
        }
    }
    ctx->pc = 0x258540u;
    // 0x258540: 0x8ee2cd94
    ctx->pc = 0x258540u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 4294954388)));
    // 0x258544: 0x628021
    ctx->pc = 0x258544u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x258548: 0xc09610a
    ctx->pc = 0x258548u;
    SET_GPR_U32(ctx, 31, 0x258550u);
    ctx->pc = 0x25854Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x258428u;
    {
        const uint32_t __entryPc = ctx->pc;
        SkipItem_0x258428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258550u; }
    }
    if (ctx->pc != 0x258550u) { return; }
    ctx->pc = 0x258550u;
    // 0x258550: 0x1440fff7
    ctx->pc = 0x258550u;
    {
        const bool branch_taken_0x258550 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x258554u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x258550) {
            ctx->pc = 0x258530u;
            goto label_258530;
        }
    }
    ctx->pc = 0x258558u;
    // 0x258558: 0x2a0282d
    ctx->pc = 0x258558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25855c: 0x220302d
    ctx->pc = 0x25855cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258560: 0x280382d
    ctx->pc = 0x258560u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258564: 0x4600a306
    ctx->pc = 0x258564u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x258568: 0xc095e6c
    ctx->pc = 0x258568u;
    SET_GPR_U32(ctx, 31, 0x258570u);
    ctx->pc = 0x25856Cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x2579B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ItemCollSub_0x2579b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258570u; }
    }
    if (ctx->pc != 0x258570u) { return; }
    ctx->pc = 0x258570u;
    // 0x258570: 0x4600b836
    ctx->pc = 0x258570u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x258574: 0x4500ffee
    ctx->pc = 0x258574u;
    {
        const bool branch_taken_0x258574 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x258574) {
            ctx->pc = 0x258530u;
            goto label_258530;
        }
    }
    ctx->pc = 0x25857Cu;
    // 0x25857c: 0x46150034
    ctx->pc = 0x25857cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x258580: 0x4500ffeb
    ctx->pc = 0x258580u;
    {
        const bool branch_taken_0x258580 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x258580) {
            ctx->pc = 0x258530u;
            goto label_258530;
        }
    }
    ctx->pc = 0x258588u;
    // 0x258588: 0x200902d
    ctx->pc = 0x258588u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25858c: 0x1660ffe8
    ctx->pc = 0x25858Cu;
    {
        const bool branch_taken_0x25858c = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x258590u;
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x25858c) {
            ctx->pc = 0x258530u;
            goto label_258530;
        }
    }
    ctx->pc = 0x258594u;
label_258594:
    // 0x258594: 0x240102d
    ctx->pc = 0x258594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258598: 0xdfbf0080
    ctx->pc = 0x258598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25859c: 0xdfb70070
    ctx->pc = 0x25859cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2585a0: 0xdfb60060
    ctx->pc = 0x2585a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2585a4: 0xdfb50050
    ctx->pc = 0x2585a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2585a8: 0xdfb40040
    ctx->pc = 0x2585a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2585ac: 0xdfb30030
    ctx->pc = 0x2585acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2585b0: 0xdfb20020
    ctx->pc = 0x2585b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2585b4: 0xdfb10010
    ctx->pc = 0x2585b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2585b8: 0xdfb00000
    ctx->pc = 0x2585b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2585bc: 0xc7b700a8
    ctx->pc = 0x2585bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2585c0: 0xc7b600a0
    ctx->pc = 0x2585c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2585c4: 0xc7b50098
    ctx->pc = 0x2585c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2585c8: 0xc7b40090
    ctx->pc = 0x2585c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2585cc: 0x3e00008
    ctx->pc = 0x2585CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2585D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x258530u: goto label_258530;
            case 0x258594u: goto label_258594;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2585D4u;
}
