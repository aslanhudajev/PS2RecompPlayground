#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: move_logic28
// Address: 0x23d388 - 0x23d55c
void move_logic28_0x23d388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23d388u;

    // 0x23d388: 0x27bdffd0
    ctx->pc = 0x23d388u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23d38c: 0xffbf0020
    ctx->pc = 0x23d38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23d390: 0xffb10010
    ctx->pc = 0x23d390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23d394: 0xffb00000
    ctx->pc = 0x23d394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23d398: 0x80882d
    ctx->pc = 0x23d398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d39c: 0x240303b0
    ctx->pc = 0x23d39cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x23d3a0: 0x2231818
    ctx->pc = 0x23d3a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23d3a4: 0x3c020033
    ctx->pc = 0x23d3a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23d3a8: 0x2442dfd0
    ctx->pc = 0x23d3a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x23d3ac: 0x628021
    ctx->pc = 0x23d3acu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d3b0: 0x86020288
    ctx->pc = 0x23d3b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x23d3b4: 0x440000e
    ctx->pc = 0x23D3B4u;
    {
        const bool branch_taken_0x23d3b4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x23d3b4) {
            ctx->pc = 0x23D3F0u;
            goto label_23d3f0;
        }
    }
    ctx->pc = 0x23D3BCu;
    // 0x23d3bc: 0xc6010290
    ctx->pc = 0x23d3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d3c0: 0x3c0140c0
    ctx->pc = 0x23d3c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16576 << 16));
    // 0x23d3c4: 0x44810000
    ctx->pc = 0x23d3c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23d3c8: 0x46000836
    ctx->pc = 0x23d3c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d3cc: 0x0
    ctx->pc = 0x23d3ccu;
    // NOP
    // 0x23d3d0: 0x45000007
    ctx->pc = 0x23D3D0u;
    {
        const bool branch_taken_0x23d3d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23D3D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x23d3d0) {
            ctx->pc = 0x23D3F0u;
            goto label_23d3f0;
        }
    }
    ctx->pc = 0x23D3D8u;
    // 0x23d3d8: 0xa6020324
    ctx->pc = 0x23d3d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 804), (uint16_t)GPR_U32(ctx, 2));
    // 0x23d3dc: 0xdfbf0020
    ctx->pc = 0x23d3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d3e0: 0xdfb10010
    ctx->pc = 0x23d3e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d3e4: 0xdfb00000
    ctx->pc = 0x23d3e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d3e8: 0x809095a
    ctx->pc = 0x23D3E8u;
    ctx->pc = 0x23D3ECu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x242568u;
    do_ai_0x242568(rdram, ctx, runtime); return;
    ctx->pc = 0x23D3F0u;
label_23d3f0:
    // 0x23d3f0: 0x40034800
    ctx->pc = 0x23d3f0u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x23d3f4: 0x3c02003a
    ctx->pc = 0x23d3f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23d3f8: 0x8c4221d0
    ctx->pc = 0x23d3f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23d3fc: 0xac430328
    ctx->pc = 0x23d3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 808), GPR_U32(ctx, 3));
    // 0x23d400: 0x86030324
    ctx->pc = 0x23d400u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x23d404: 0x86020328
    ctx->pc = 0x23d404u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x23d408: 0x10620004
    ctx->pc = 0x23D408u;
    {
        const bool branch_taken_0x23d408 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23D40Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23d408) {
            ctx->pc = 0x23D41Cu;
            goto label_23d41c;
        }
    }
    ctx->pc = 0x23D410u;
    // 0x23d410: 0xc08e210
    ctx->pc = 0x23D410u;
    SET_GPR_U32(ctx, 31, 0x23D418u);
    ctx->pc = 0x23D414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x238840u;
    {
        const uint32_t __entryPc = ctx->pc;
        format_brain_0x238840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D418u; }
    }
    if (ctx->pc != 0x23D418u) { return; }
    ctx->pc = 0x23D418u;
    // 0x23d418: 0x200202d
    ctx->pc = 0x23d418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23d41c:
    // 0x23d41c: 0xc08f0f0
    ctx->pc = 0x23D41Cu;
    SET_GPR_U32(ctx, 31, 0x23D424u);
    ctx->pc = 0x23D420u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x23C3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_face_ang_0x23c3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D424u; }
    }
    if (ctx->pc != 0x23D424u) { return; }
    ctx->pc = 0x23D424u;
    // 0x23d424: 0xe6000260
    ctx->pc = 0x23d424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x23d428: 0x86020288
    ctx->pc = 0x23d428u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x23d42c: 0x4400036
    ctx->pc = 0x23D42Cu;
    {
        const bool branch_taken_0x23d42c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23D430u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x23d42c) {
            ctx->pc = 0x23D508u;
            goto label_23d508;
        }
    }
    ctx->pc = 0x23D434u;
    // 0x23d434: 0x431818
    ctx->pc = 0x23d434u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23d438: 0x3c020032
    ctx->pc = 0x23d438u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x23d43c: 0x24421bc0
    ctx->pc = 0x23d43cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x23d440: 0x621821
    ctx->pc = 0x23d440u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d444: 0xc6010044
    ctx->pc = 0x23d444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d448: 0xc4600054
    ctx->pc = 0x23d448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d44c: 0x46000841
    ctx->pc = 0x23d44cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23d450: 0x860202f0
    ctx->pc = 0x23d450u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 752)));
    // 0x23d454: 0x1040002c
    ctx->pc = 0x23D454u;
    {
        const bool branch_taken_0x23d454 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23D458u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        if (branch_taken_0x23d454) {
            ctx->pc = 0x23D508u;
            goto label_23d508;
        }
    }
    ctx->pc = 0x23D45Cu;
    // 0x23d45c: 0xc6000290
    ctx->pc = 0x23d45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d460: 0x46020036
    ctx->pc = 0x23d460u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d464: 0x45000028
    ctx->pc = 0x23D464u;
    {
        const bool branch_taken_0x23d464 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d464) {
            ctx->pc = 0x23D508u;
            goto label_23d508;
        }
    }
    ctx->pc = 0x23D46Cu;
    // 0x23d46c: 0x3c01c120
    ctx->pc = 0x23d46cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49440 << 16));
    // 0x23d470: 0x44810000
    ctx->pc = 0x23d470u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23d474: 0x46010036
    ctx->pc = 0x23d474u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d478: 0x45000023
    ctx->pc = 0x23D478u;
    {
        const bool branch_taken_0x23d478 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d478) {
            ctx->pc = 0x23D508u;
            goto label_23d508;
        }
    }
    ctx->pc = 0x23D480u;
    // 0x23d480: 0x3c014120
    ctx->pc = 0x23d480u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x23d484: 0x44810000
    ctx->pc = 0x23d484u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23d488: 0x46000836
    ctx->pc = 0x23d488u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d48c: 0x4500001e
    ctx->pc = 0x23D48Cu;
    {
        const bool branch_taken_0x23d48c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d48c) {
            ctx->pc = 0x23D508u;
            goto label_23d508;
        }
    }
    ctx->pc = 0x23D494u;
    // 0x23d494: 0x8e020334
    ctx->pc = 0x23d494u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23d498: 0x1c400017
    ctx->pc = 0x23D498u;
    {
        const bool branch_taken_0x23d498 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x23D49Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x23d498) {
            ctx->pc = 0x23D4F8u;
            goto label_23d4f8;
        }
    }
    ctx->pc = 0x23D4A0u;
    // 0x23d4a0: 0x8602021a
    ctx->pc = 0x23d4a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 538)));
    // 0x23d4a4: 0x28420003
    ctx->pc = 0x23d4a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 3));
    // 0x23d4a8: 0x54400006
    ctx->pc = 0x23D4A8u;
    {
        const bool branch_taken_0x23d4a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x23d4a8) {
            ctx->pc = 0x23D4ACu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 828)));
            ctx->pc = 0x23D4C4u;
            goto label_23d4c4;
        }
    }
    ctx->pc = 0x23D4B0u;
    // 0x23d4b0: 0x200202d
    ctx->pc = 0x23d4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d4b4: 0xc09de18
    ctx->pc = 0x23D4B4u;
    SET_GPR_U32(ctx, 31, 0x23D4BCu);
    ctx->pc = 0x23D4B8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x277860u;
    {
        const uint32_t __entryPc = ctx->pc;
        RequestEnemyAction_0x277860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D4BCu; }
    }
    if (ctx->pc != 0x23D4BCu) { return; }
    ctx->pc = 0x23D4BCu;
    // 0x23d4bc: 0x10000012
    ctx->pc = 0x23D4BCu;
    {
        const bool branch_taken_0x23d4bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x23d4bc) {
            ctx->pc = 0x23D508u;
            goto label_23d508;
        }
    }
    ctx->pc = 0x23D4C4u;
label_23d4c4:
    // 0x23d4c4: 0x24420001
    ctx->pc = 0x23d4c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x23d4c8: 0xae02033c
    ctx->pc = 0x23d4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 2));
    // 0x23d4cc: 0x30420001
    ctx->pc = 0x23d4ccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x23d4d0: 0x10400005
    ctx->pc = 0x23D4D0u;
    {
        const bool branch_taken_0x23d4d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23D4D4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23d4d0) {
            ctx->pc = 0x23D4E8u;
            goto label_23d4e8;
        }
    }
    ctx->pc = 0x23D4D8u;
    // 0x23d4d8: 0xc09de18
    ctx->pc = 0x23D4D8u;
    SET_GPR_U32(ctx, 31, 0x23D4E0u);
    ctx->pc = 0x23D4DCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x277860u;
    {
        const uint32_t __entryPc = ctx->pc;
        RequestEnemyAction_0x277860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D4E0u; }
    }
    if (ctx->pc != 0x23D4E0u) { return; }
    ctx->pc = 0x23D4E0u;
    // 0x23d4e0: 0x10000009
    ctx->pc = 0x23D4E0u;
    {
        const bool branch_taken_0x23d4e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x23d4e0) {
            ctx->pc = 0x23D508u;
            goto label_23d508;
        }
    }
    ctx->pc = 0x23D4E8u;
label_23d4e8:
    // 0x23d4e8: 0xc09de18
    ctx->pc = 0x23D4E8u;
    SET_GPR_U32(ctx, 31, 0x23D4F0u);
    ctx->pc = 0x23D4ECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 14));
    ctx->pc = 0x277860u;
    {
        const uint32_t __entryPc = ctx->pc;
        RequestEnemyAction_0x277860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D4F0u; }
    }
    if (ctx->pc != 0x23D4F0u) { return; }
    ctx->pc = 0x23D4F0u;
    // 0x23d4f0: 0x10000005
    ctx->pc = 0x23D4F0u;
    {
        const bool branch_taken_0x23d4f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x23d4f0) {
            ctx->pc = 0x23D508u;
            goto label_23d508;
        }
    }
    ctx->pc = 0x23D4F8u;
label_23d4f8:
    // 0x23d4f8: 0x8e030334
    ctx->pc = 0x23d4f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23d4fc: 0x8c42ffbc
    ctx->pc = 0x23d4fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x23d500: 0x621823
    ctx->pc = 0x23d500u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d504: 0xae030334
    ctx->pc = 0x23d504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 3));
label_23d508:
    // 0x23d508: 0xc08f20c
    ctx->pc = 0x23D508u;
    SET_GPR_U32(ctx, 31, 0x23D510u);
    ctx->pc = 0x23D50Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C830u;
    {
        const uint32_t __entryPc = ctx->pc;
        turn_enemy_0x23c830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D510u; }
    }
    if (ctx->pc != 0x23D510u) { return; }
    ctx->pc = 0x23D510u;
    // 0x23d510: 0xe6000258
    ctx->pc = 0x23d510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
    // 0x23d514: 0xc090e82
    ctx->pc = 0x23D514u;
    SET_GPR_U32(ctx, 31, 0x23D51Cu);
    ctx->pc = 0x23D518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x243A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemy_move_0x243a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D51Cu; }
    }
    if (ctx->pc != 0x23D51Cu) { return; }
    ctx->pc = 0x23D51Cu;
    // 0x23d51c: 0x40034800
    ctx->pc = 0x23d51cu;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x23d520: 0x3c02003a
    ctx->pc = 0x23d520u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23d524: 0x8c4421d0
    ctx->pc = 0x23d524u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23d528: 0x8c820328
    ctx->pc = 0x23d528u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 808)));
    // 0x23d52c: 0x621823
    ctx->pc = 0x23d52cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d530: 0x8c820320
    ctx->pc = 0x23d530u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 800)));
    // 0x23d534: 0x621821
    ctx->pc = 0x23d534u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d538: 0xac830320
    ctx->pc = 0x23d538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 800), GPR_U32(ctx, 3));
    // 0x23d53c: 0x8c820324
    ctx->pc = 0x23d53cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 804)));
    // 0x23d540: 0x24420001
    ctx->pc = 0x23d540u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x23d544: 0xac820324
    ctx->pc = 0x23d544u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 804), GPR_U32(ctx, 2));
    // 0x23d548: 0xdfbf0020
    ctx->pc = 0x23d548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d54c: 0xdfb10010
    ctx->pc = 0x23d54cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d550: 0xdfb00000
    ctx->pc = 0x23d550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d554: 0x3e00008
    ctx->pc = 0x23D554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D558u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23D3F0u: goto label_23d3f0;
            case 0x23D41Cu: goto label_23d41c;
            case 0x23D4C4u: goto label_23d4c4;
            case 0x23D4E8u: goto label_23d4e8;
            case 0x23D4F8u: goto label_23d4f8;
            case 0x23D508u: goto label_23d508;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23D55Cu;
}
