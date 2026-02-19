#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: WeaponItemCollide
// Address: 0x258738 - 0x258858
void WeaponItemCollide_0x258738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x258738u;

    // 0x258738: 0x27bdff40
    ctx->pc = 0x258738u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x25873c: 0xffbf0090
    ctx->pc = 0x25873cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x258740: 0xffbe0080
    ctx->pc = 0x258740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x258744: 0xffb70070
    ctx->pc = 0x258744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x258748: 0xffb60060
    ctx->pc = 0x258748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x25874c: 0xffb50050
    ctx->pc = 0x25874cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x258750: 0xffb40040
    ctx->pc = 0x258750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x258754: 0xffb30030
    ctx->pc = 0x258754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x258758: 0xffb20020
    ctx->pc = 0x258758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25875c: 0xffb10010
    ctx->pc = 0x25875cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x258760: 0xffb00000
    ctx->pc = 0x258760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x258764: 0xe7b600b0
    ctx->pc = 0x258764u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x258768: 0xe7b500a8
    ctx->pc = 0x258768u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x25876c: 0xe7b400a0
    ctx->pc = 0x25876cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x258770: 0x80b02d
    ctx->pc = 0x258770u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258774: 0xa0882d
    ctx->pc = 0x258774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258778: 0xc0a82d
    ctx->pc = 0x258778u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25877c: 0x46006506
    ctx->pc = 0x25877cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x258780: 0xe0a02d
    ctx->pc = 0x258780u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258784: 0x100982d
    ctx->pc = 0x258784u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258788: 0x902d
    ctx->pc = 0x258788u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25878c: 0x3c0147c3
    ctx->pc = 0x25878cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)18371 << 16));
    // 0x258790: 0x34215000
    ctx->pc = 0x258790u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 20480));
    // 0x258794: 0x4481a800
    ctx->pc = 0x258794u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x258798: 0xc0a0120
    ctx->pc = 0x258798u;
    SET_GPR_U32(ctx, 31, 0x2587A0u);
    ctx->pc = 0x25879Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x280480u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartItemGrid_0x280480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2587A0u; }
    }
    if (ctx->pc != 0x2587A0u) { return; }
    ctx->pc = 0x2587A0u;
    // 0x2587a0: 0x3c1e0034
    ctx->pc = 0x2587a0u;
    SET_GPR_U32(ctx, 30, ((uint32_t)52 << 16));
    // 0x2587a4: 0x4480b000
    ctx->pc = 0x2587a4u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 0);
    // 0x2587a8: 0x10000017
    ctx->pc = 0x2587A8u;
    {
        const bool branch_taken_0x2587a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2587ACu;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 272));
        if (branch_taken_0x2587a8) {
            ctx->pc = 0x258808u;
            goto label_258808;
        }
    }
    ctx->pc = 0x2587B0u;
label_2587b0:
    // 0x2587b0: 0x8fc2cd94
    ctx->pc = 0x2587b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4294954388)));
    // 0x2587b4: 0x628021
    ctx->pc = 0x2587b4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2587b8: 0x200202d
    ctx->pc = 0x2587b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2587bc: 0xc09617a
    ctx->pc = 0x2587BCu;
    SET_GPR_U32(ctx, 31, 0x2587C4u);
    ctx->pc = 0x2587C0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2585E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        WeaponCheckItemCollision_0x2585e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2587C4u; }
    }
    if (ctx->pc != 0x2587C4u) { return; }
    ctx->pc = 0x2587C4u;
    // 0x2587c4: 0x10400010
    ctx->pc = 0x2587C4u;
    {
        const bool branch_taken_0x2587c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2587C8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2587c4) {
            ctx->pc = 0x258808u;
            goto label_258808;
        }
    }
    ctx->pc = 0x2587CCu;
    // 0x2587cc: 0x2c0282d
    ctx->pc = 0x2587ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2587d0: 0x220302d
    ctx->pc = 0x2587d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2587d4: 0x2a0382d
    ctx->pc = 0x2587d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2587d8: 0x4600a306
    ctx->pc = 0x2587d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2587dc: 0xc095e6c
    ctx->pc = 0x2587DCu;
    SET_GPR_U32(ctx, 31, 0x2587E4u);
    ctx->pc = 0x2587E0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2579B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ItemCollSub_0x2579b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2587E4u; }
    }
    if (ctx->pc != 0x2587E4u) { return; }
    ctx->pc = 0x2587E4u;
    // 0x2587e4: 0x4600b036
    ctx->pc = 0x2587e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2587e8: 0x45000007
    ctx->pc = 0x2587E8u;
    {
        const bool branch_taken_0x2587e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2587e8) {
            ctx->pc = 0x258808u;
            goto label_258808;
        }
    }
    ctx->pc = 0x2587F0u;
    // 0x2587f0: 0x46150034
    ctx->pc = 0x2587f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2587f4: 0x45000004
    ctx->pc = 0x2587F4u;
    {
        const bool branch_taken_0x2587f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2587f4) {
            ctx->pc = 0x258808u;
            goto label_258808;
        }
    }
    ctx->pc = 0x2587FCu;
    // 0x2587fc: 0x200902d
    ctx->pc = 0x2587fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258800: 0x12800005
    ctx->pc = 0x258800u;
    {
        const bool branch_taken_0x258800 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x258804u;
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x258800) {
            ctx->pc = 0x258818u;
            goto label_258818;
        }
    }
    ctx->pc = 0x258808u;
label_258808:
    // 0x258808: 0xc0a015a
    ctx->pc = 0x258808u;
    SET_GPR_U32(ctx, 31, 0x258810u);
    ctx->pc = 0x280568u;
    {
        const uint32_t __entryPc = ctx->pc;
        NextGridItem_0x280568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258810u; }
    }
    if (ctx->pc != 0x258810u) { return; }
    ctx->pc = 0x258810u;
    // 0x258810: 0x441ffe7
    ctx->pc = 0x258810u;
    {
        const bool branch_taken_0x258810 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x258814u;
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x258810) {
            ctx->pc = 0x2587B0u;
            goto label_2587b0;
        }
    }
    ctx->pc = 0x258818u;
label_258818:
    // 0x258818: 0x240102d
    ctx->pc = 0x258818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25881c: 0xdfbf0090
    ctx->pc = 0x25881cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x258820: 0xdfbe0080
    ctx->pc = 0x258820u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x258824: 0xdfb70070
    ctx->pc = 0x258824u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x258828: 0xdfb60060
    ctx->pc = 0x258828u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25882c: 0xdfb50050
    ctx->pc = 0x25882cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x258830: 0xdfb40040
    ctx->pc = 0x258830u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x258834: 0xdfb30030
    ctx->pc = 0x258834u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258838: 0xdfb20020
    ctx->pc = 0x258838u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25883c: 0xdfb10010
    ctx->pc = 0x25883cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258840: 0xdfb00000
    ctx->pc = 0x258840u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258844: 0xc7b600b0
    ctx->pc = 0x258844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x258848: 0xc7b500a8
    ctx->pc = 0x258848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25884c: 0xc7b400a0
    ctx->pc = 0x25884cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x258850: 0x3e00008
    ctx->pc = 0x258850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258854u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2587B0u: goto label_2587b0;
            case 0x258808u: goto label_258808;
            case 0x258818u: goto label_258818;
            default: break;
        }
        return;
    }
    ctx->pc = 0x258858u;
}
