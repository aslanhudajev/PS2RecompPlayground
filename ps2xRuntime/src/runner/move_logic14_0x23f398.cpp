#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: move_logic14
// Address: 0x23f398 - 0x23f7b4
void move_logic14_0x23f398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23f398u;

    // 0x23f398: 0x27bdffc0
    ctx->pc = 0x23f398u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23f39c: 0xffbf0020
    ctx->pc = 0x23f39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23f3a0: 0xffb10010
    ctx->pc = 0x23f3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23f3a4: 0xffb00000
    ctx->pc = 0x23f3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23f3a8: 0xe7b40030
    ctx->pc = 0x23f3a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x23f3ac: 0x80882d
    ctx->pc = 0x23f3acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f3b0: 0x240303b0
    ctx->pc = 0x23f3b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x23f3b4: 0x2231818
    ctx->pc = 0x23f3b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23f3b8: 0x3c020033
    ctx->pc = 0x23f3b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23f3bc: 0x2442dfd0
    ctx->pc = 0x23f3bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x23f3c0: 0xc08ed18
    ctx->pc = 0x23F3C0u;
    SET_GPR_U32(ctx, 31, 0x23F3C8u);
    ctx->pc = 0x23F3C4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x23B460u;
    {
        const uint32_t __entryPc = ctx->pc;
        FoundSuicideBomber_0x23b460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F3C8u; }
    }
    if (ctx->pc != 0x23F3C8u) { return; }
    ctx->pc = 0x23F3C8u;
    // 0x23f3c8: 0x5040000a
    ctx->pc = 0x23F3C8u;
    {
        const bool branch_taken_0x23f3c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x23f3c8) {
            ctx->pc = 0x23F3CCu;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 754)));
            ctx->pc = 0x23F3F4u;
            goto label_23f3f4;
        }
    }
    ctx->pc = 0x23F3D0u;
    // 0x23f3d0: 0x24020018
    ctx->pc = 0x23f3d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x23f3d4: 0xa6020324
    ctx->pc = 0x23f3d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 804), (uint16_t)GPR_U32(ctx, 2));
    // 0x23f3d8: 0x220202d
    ctx->pc = 0x23f3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f3dc: 0xdfbf0020
    ctx->pc = 0x23f3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f3e0: 0xdfb10010
    ctx->pc = 0x23f3e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f3e4: 0xdfb00000
    ctx->pc = 0x23f3e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f3e8: 0xc7b40030
    ctx->pc = 0x23f3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23f3ec: 0x809095a
    ctx->pc = 0x23F3ECu;
    ctx->pc = 0x23F3F0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x242568u;
    do_ai_0x242568(rdram, ctx, runtime); return;
    ctx->pc = 0x23F3F4u;
label_23f3f4:
    // 0x23f3f4: 0x10400005
    ctx->pc = 0x23F3F4u;
    {
        const bool branch_taken_0x23f3f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23F3F8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x23f3f4) {
            ctx->pc = 0x23F40Cu;
            goto label_23f40c;
        }
    }
    ctx->pc = 0x23F3FCu;
    // 0x23f3fc: 0x86020288
    ctx->pc = 0x23f3fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x23f400: 0x443000b
    ctx->pc = 0x23F400u;
    {
        const bool branch_taken_0x23f400 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x23f400) {
            ctx->pc = 0x23F404u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x23F430u;
            goto label_23f430;
        }
    }
    ctx->pc = 0x23F408u;
    // 0x23f408: 0x32220001
    ctx->pc = 0x23f408u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1));
label_23f40c:
    // 0x23f40c: 0x24420005
    ctx->pc = 0x23f40cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5));
    // 0x23f410: 0xa6020324
    ctx->pc = 0x23f410u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 804), (uint16_t)GPR_U32(ctx, 2));
    // 0x23f414: 0x220202d
    ctx->pc = 0x23f414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f418: 0xdfbf0020
    ctx->pc = 0x23f418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f41c: 0xdfb10010
    ctx->pc = 0x23f41cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f420: 0xdfb00000
    ctx->pc = 0x23f420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f424: 0xc7b40030
    ctx->pc = 0x23f424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23f428: 0x809095a
    ctx->pc = 0x23F428u;
    ctx->pc = 0x23F42Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x242568u;
    do_ai_0x242568(rdram, ctx, runtime); return;
    ctx->pc = 0x23F430u;
label_23f430:
    // 0x23f430: 0x3c014100
    ctx->pc = 0x23f430u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16640 << 16));
    // 0x23f434: 0x44810000
    ctx->pc = 0x23f434u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23f438: 0x46000836
    ctx->pc = 0x23f438u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f43c: 0x0
    ctx->pc = 0x23f43cu;
    // NOP
    // 0x23f440: 0x45000008
    ctx->pc = 0x23F440u;
    {
        const bool branch_taken_0x23f440 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23F444u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23f440) {
            ctx->pc = 0x23F464u;
            goto label_23f464;
        }
    }
    ctx->pc = 0x23F448u;
    // 0x23f448: 0xa6000324
    ctx->pc = 0x23f448u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 804), (uint16_t)GPR_U32(ctx, 0));
    // 0x23f44c: 0xdfbf0020
    ctx->pc = 0x23f44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f450: 0xdfb10010
    ctx->pc = 0x23f450u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f454: 0xdfb00000
    ctx->pc = 0x23f454u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f458: 0xc7b40030
    ctx->pc = 0x23f458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23f45c: 0x809095a
    ctx->pc = 0x23F45Cu;
    ctx->pc = 0x23F460u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x242568u;
    do_ai_0x242568(rdram, ctx, runtime); return;
    ctx->pc = 0x23F464u;
label_23f464:
    // 0x23f464: 0x40034800
    ctx->pc = 0x23f464u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x23f468: 0x3c02003a
    ctx->pc = 0x23f468u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23f46c: 0x8c4221d0
    ctx->pc = 0x23f46cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23f470: 0xac430248
    ctx->pc = 0x23f470u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 584), GPR_U32(ctx, 3));
    // 0x23f474: 0x86030324
    ctx->pc = 0x23f474u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x23f478: 0x86020328
    ctx->pc = 0x23f478u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x23f47c: 0x10620004
    ctx->pc = 0x23F47Cu;
    {
        const bool branch_taken_0x23f47c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23F480u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23f47c) {
            ctx->pc = 0x23F490u;
            goto label_23f490;
        }
    }
    ctx->pc = 0x23F484u;
    // 0x23f484: 0xc08e210
    ctx->pc = 0x23F484u;
    SET_GPR_U32(ctx, 31, 0x23F48Cu);
    ctx->pc = 0x23F488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x238840u;
    {
        const uint32_t __entryPc = ctx->pc;
        format_brain_0x238840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F48Cu; }
    }
    if (ctx->pc != 0x23F48Cu) { return; }
    ctx->pc = 0x23F48Cu;
    // 0x23f48c: 0x200202d
    ctx->pc = 0x23f48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23f490:
    // 0x23f490: 0xc08f0f0
    ctx->pc = 0x23F490u;
    SET_GPR_U32(ctx, 31, 0x23F498u);
    ctx->pc = 0x23F494u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x23C3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_face_ang_0x23c3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F498u; }
    }
    if (ctx->pc != 0x23F498u) { return; }
    ctx->pc = 0x23F498u;
    // 0x23f498: 0x3c02003c
    ctx->pc = 0x23f498u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x23f49c: 0xe4401c6c
    ctx->pc = 0x23f49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7276), bits); }
    // 0x23f4a0: 0x3c030031
    ctx->pc = 0x23f4a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x23f4a4: 0x8e020370
    ctx->pc = 0x23f4a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 880)));
    // 0x23f4a8: 0x8c63ffbc
    ctx->pc = 0x23f4a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x23f4ac: 0x431023
    ctx->pc = 0x23f4acu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23f4b0: 0x1c40002f
    ctx->pc = 0x23F4B0u;
    {
        const bool branch_taken_0x23f4b0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x23F4B4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 2));
        if (branch_taken_0x23f4b0) {
            ctx->pc = 0x23F570u;
            goto label_23f570;
        }
    }
    ctx->pc = 0x23F4B8u;
    // 0x23f4b8: 0x8e020330
    ctx->pc = 0x23f4b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x23f4bc: 0x21023
    ctx->pc = 0x23f4bcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x23f4c0: 0x18400007
    ctx->pc = 0x23F4C0u;
    {
        const bool branch_taken_0x23f4c0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23F4C4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 2));
        if (branch_taken_0x23f4c0) {
            ctx->pc = 0x23F4E0u;
            goto label_23f4e0;
        }
    }
    ctx->pc = 0x23F4C8u;
    // 0x23f4c8: 0xc6000260
    ctx->pc = 0x23f4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f4cc: 0x3c013fc9
    ctx->pc = 0x23f4ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x23f4d0: 0x34210fdb
    ctx->pc = 0x23f4d0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23f4d4: 0x44810800
    ctx->pc = 0x23f4d4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x23f4d8: 0x10000006
    ctx->pc = 0x23F4D8u;
    {
        const bool branch_taken_0x23f4d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23F4DCu;
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x23f4d8) {
            ctx->pc = 0x23F4F4u;
            goto label_23f4f4;
        }
    }
    ctx->pc = 0x23F4E0u;
label_23f4e0:
    // 0x23f4e0: 0xc6000260
    ctx->pc = 0x23f4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f4e4: 0x3c013fc9
    ctx->pc = 0x23f4e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x23f4e8: 0x34210fdb
    ctx->pc = 0x23f4e8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23f4ec: 0x44810800
    ctx->pc = 0x23f4ecu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x23f4f0: 0x46010001
    ctx->pc = 0x23f4f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_23f4f4:
    // 0x23f4f4: 0xe6000260
    ctx->pc = 0x23f4f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x23f4f8: 0xc6010260
    ctx->pc = 0x23f4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f4fc: 0x3c014049
    ctx->pc = 0x23f4fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x23f500: 0x34210fdb
    ctx->pc = 0x23f500u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23f504: 0x44810000
    ctx->pc = 0x23f504u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23f508: 0x46010034
    ctx->pc = 0x23f508u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f50c: 0x45000006
    ctx->pc = 0x23F50Cu;
    {
        const bool branch_taken_0x23f50c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23f50c) {
            ctx->pc = 0x23F528u;
            goto label_23f528;
        }
    }
    ctx->pc = 0x23F514u;
    // 0x23f514: 0x3c0140c9
    ctx->pc = 0x23f514u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23f518: 0x34210fdb
    ctx->pc = 0x23f518u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23f51c: 0x44810000
    ctx->pc = 0x23f51cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23f520: 0x1000000c
    ctx->pc = 0x23F520u;
    {
        const bool branch_taken_0x23f520 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23F524u;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x23f520) {
            ctx->pc = 0x23F554u;
            goto label_23f554;
        }
    }
    ctx->pc = 0x23F528u;
label_23f528:
    // 0x23f528: 0x3c01c049
    ctx->pc = 0x23f528u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x23f52c: 0x34210fdb
    ctx->pc = 0x23f52cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23f530: 0x44810000
    ctx->pc = 0x23f530u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23f534: 0x46000836
    ctx->pc = 0x23f534u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f538: 0x0
    ctx->pc = 0x23f538u;
    // NOP
    // 0x23f53c: 0x45020005
    ctx->pc = 0x23F53Cu;
    {
        const bool branch_taken_0x23f53c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23f53c) {
            ctx->pc = 0x23F540u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x23F554u;
            goto label_23f554;
        }
    }
    ctx->pc = 0x23F544u;
    // 0x23f544: 0x3c0140c9
    ctx->pc = 0x23f544u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23f548: 0x34210fdb
    ctx->pc = 0x23f548u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23f54c: 0x44810000
    ctx->pc = 0x23f54cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23f550: 0x46000800
    ctx->pc = 0x23f550u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_23f554:
    // 0x23f554: 0xe6000260
    ctx->pc = 0x23f554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x23f558: 0x8e020370
    ctx->pc = 0x23f558u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 880)));
    // 0x23f55c: 0x2442002d
    ctx->pc = 0x23f55cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 45));
    // 0x23f560: 0xae020370
    ctx->pc = 0x23f560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 2));
    // 0x23f564: 0x9602032a
    ctx->pc = 0x23f564u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 810)));
    // 0x23f568: 0x24420001
    ctx->pc = 0x23f568u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x23f56c: 0xa602032a
    ctx->pc = 0x23f56cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 810), (uint16_t)GPR_U32(ctx, 2));
label_23f570:
    // 0x23f570: 0xc08f20c
    ctx->pc = 0x23F570u;
    SET_GPR_U32(ctx, 31, 0x23F578u);
    ctx->pc = 0x23F574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C830u;
    {
        const uint32_t __entryPc = ctx->pc;
        turn_enemy_0x23c830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F578u; }
    }
    if (ctx->pc != 0x23F578u) { return; }
    ctx->pc = 0x23F578u;
    // 0x23f578: 0xe6000258
    ctx->pc = 0x23f578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
    // 0x23f57c: 0x200202d
    ctx->pc = 0x23f57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f580: 0x3c013f80
    ctx->pc = 0x23f580u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x23f584: 0x44816000
    ctx->pc = 0x23f584u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x23f588: 0xc08f14c
    ctx->pc = 0x23F588u;
    SET_GPR_U32(ctx, 31, 0x23F590u);
    ctx->pc = 0x23F58Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x23C530u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_enemy_trans_0x23c530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F590u; }
    }
    if (ctx->pc != 0x23F590u) { return; }
    ctx->pc = 0x23F590u;
    // 0x23f590: 0xc090e82
    ctx->pc = 0x23F590u;
    SET_GPR_U32(ctx, 31, 0x23F598u);
    ctx->pc = 0x23F594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x243A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemy_move_0x243a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F598u; }
    }
    if (ctx->pc != 0x23F598u) { return; }
    ctx->pc = 0x23F598u;
    // 0x23f598: 0x3c02003c
    ctx->pc = 0x23f598u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x23f59c: 0xc4411c6c
    ctx->pc = 0x23f59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f5a0: 0xc6000260
    ctx->pc = 0x23f5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f5a4: 0x46000841
    ctx->pc = 0x23f5a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23f5a8: 0x3c014049
    ctx->pc = 0x23f5a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x23f5ac: 0x34210fdb
    ctx->pc = 0x23f5acu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23f5b0: 0x44810000
    ctx->pc = 0x23f5b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23f5b4: 0x46010034
    ctx->pc = 0x23f5b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f5b8: 0x45000006
    ctx->pc = 0x23F5B8u;
    {
        const bool branch_taken_0x23f5b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23f5b8) {
            ctx->pc = 0x23F5D4u;
            goto label_23f5d4;
        }
    }
    ctx->pc = 0x23F5C0u;
    // 0x23f5c0: 0x3c0140c9
    ctx->pc = 0x23f5c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23f5c4: 0x34210fdb
    ctx->pc = 0x23f5c4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23f5c8: 0x44810000
    ctx->pc = 0x23f5c8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23f5cc: 0x1000000c
    ctx->pc = 0x23F5CCu;
    {
        const bool branch_taken_0x23f5cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23F5D0u;
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x23f5cc) {
            ctx->pc = 0x23F600u;
            goto label_23f600;
        }
    }
    ctx->pc = 0x23F5D4u;
label_23f5d4:
    // 0x23f5d4: 0x3c01c049
    ctx->pc = 0x23f5d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x23f5d8: 0x34210fdb
    ctx->pc = 0x23f5d8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23f5dc: 0x44810000
    ctx->pc = 0x23f5dcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23f5e0: 0x46000836
    ctx->pc = 0x23f5e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f5e4: 0x0
    ctx->pc = 0x23f5e4u;
    // NOP
    // 0x23f5e8: 0x45020006
    ctx->pc = 0x23F5E8u;
    {
        const bool branch_taken_0x23f5e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23f5e8) {
            ctx->pc = 0x23F5ECu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 824)));
            ctx->pc = 0x23F604u;
            goto label_23f604;
        }
    }
    ctx->pc = 0x23F5F0u;
    // 0x23f5f0: 0x3c0140c9
    ctx->pc = 0x23f5f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23f5f4: 0x34210fdb
    ctx->pc = 0x23f5f4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23f5f8: 0x44810000
    ctx->pc = 0x23f5f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23f5fc: 0x46000840
    ctx->pc = 0x23f5fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_23f600:
    // 0x23f600: 0x8e020338
    ctx->pc = 0x23f600u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_23f604:
    // 0x23f604: 0x5c400052
    ctx->pc = 0x23F604u;
    {
        const bool branch_taken_0x23f604 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x23f604) {
            ctx->pc = 0x23F608u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->pc = 0x23F750u;
            goto label_23f750;
        }
    }
    ctx->pc = 0x23F60Cu;
    // 0x23f60c: 0x8e02036c
    ctx->pc = 0x23f60cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x23f610: 0x1c40000d
    ctx->pc = 0x23F610u;
    {
        const bool branch_taken_0x23f610 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x23f610) {
            ctx->pc = 0x23F648u;
            goto label_23f648;
        }
    }
    ctx->pc = 0x23F618u;
    // 0x23f618: 0x8602032a
    ctx->pc = 0x23f618u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 810)));
    // 0x23f61c: 0x28420004
    ctx->pc = 0x23f61cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
    // 0x23f620: 0x5440004b
    ctx->pc = 0x23F620u;
    {
        const bool branch_taken_0x23f620 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x23f620) {
            ctx->pc = 0x23F624u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->pc = 0x23F750u;
            goto label_23f750;
        }
    }
    ctx->pc = 0x23F628u;
    // 0x23f628: 0x46000845
    ctx->pc = 0x23f628u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x23f62c: 0x3c013fc9
    ctx->pc = 0x23f62cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x23f630: 0x34210fdb
    ctx->pc = 0x23f630u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23f634: 0x44810000
    ctx->pc = 0x23f634u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23f638: 0x46010034
    ctx->pc = 0x23f638u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f63c: 0x0
    ctx->pc = 0x23f63cu;
    // NOP
    // 0x23f640: 0x45020043
    ctx->pc = 0x23F640u;
    {
        const bool branch_taken_0x23f640 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23f640) {
            ctx->pc = 0x23F644u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->pc = 0x23F750u;
            goto label_23f750;
        }
    }
    ctx->pc = 0x23F648u;
label_23f648:
    // 0x23f648: 0xc6140334
    ctx->pc = 0x23f648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23f64c: 0x4680a520
    ctx->pc = 0x23f64cu;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[20]);
    // 0x23f650: 0x3c013e86
    ctx->pc = 0x23f650u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16006 << 16));
    // 0x23f654: 0x34210a92
    ctx->pc = 0x23f654u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 2706));
    // 0x23f658: 0x44810000
    ctx->pc = 0x23f658u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23f65c: 0x4600a502
    ctx->pc = 0x23f65cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x23f660: 0x3c013f49
    ctx->pc = 0x23f660u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16201 << 16));
    // 0x23f664: 0x34210fdb
    ctx->pc = 0x23f664u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23f668: 0x44810000
    ctx->pc = 0x23f668u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23f66c: 0x8602032a
    ctx->pc = 0x23f66cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 810)));
    // 0x23f670: 0x28420004
    ctx->pc = 0x23f670u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
    // 0x23f674: 0x14400004
    ctx->pc = 0x23F674u;
    {
        const bool branch_taken_0x23f674 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23F678u;
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x23f674) {
            ctx->pc = 0x23F688u;
            goto label_23f688;
        }
    }
    ctx->pc = 0x23F67Cu;
    // 0x23f67c: 0x8e020330
    ctx->pc = 0x23f67cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x23f680: 0x21023
    ctx->pc = 0x23f680u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x23f684: 0xae020330
    ctx->pc = 0x23f684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 2));
label_23f688:
    // 0x23f688: 0xae00036c
    ctx->pc = 0x23f688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 0));
    // 0x23f68c: 0x86040288
    ctx->pc = 0x23f68cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x23f690: 0x24022b00
    ctx->pc = 0x23f690u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x23f694: 0x822018
    ctx->pc = 0x23f694u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23f698: 0x3c020032
    ctx->pc = 0x23f698u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x23f69c: 0x24421be0
    ctx->pc = 0x23f69cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7136));
    // 0x23f6a0: 0x822021
    ctx->pc = 0x23f6a0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23f6a4: 0x24840030
    ctx->pc = 0x23f6a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 48));
    // 0x23f6a8: 0xc09a2aa
    ctx->pc = 0x23F6A8u;
    SET_GPR_U32(ctx, 31, 0x23F6B0u);
    ctx->pc = 0x23F6ACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 64));
    ctx->pc = 0x268AA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_yaw_0x268aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F6B0u; }
    }
    if (ctx->pc != 0x23F6B0u) { return; }
    ctx->pc = 0x23F6B0u;
    // 0x23f6b0: 0xe6000260
    ctx->pc = 0x23f6b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x23f6b4: 0x8e020330
    ctx->pc = 0x23f6b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x23f6b8: 0x58400003
    ctx->pc = 0x23F6B8u;
    {
        const bool branch_taken_0x23f6b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23f6b8) {
            ctx->pc = 0x23F6BCu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x23F6C8u;
            goto label_23f6c8;
        }
    }
    ctx->pc = 0x23F6C0u;
    // 0x23f6c0: 0x10000002
    ctx->pc = 0x23F6C0u;
    {
        const bool branch_taken_0x23f6c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23F6C4u;
        ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x23f6c0) {
            ctx->pc = 0x23F6CCu;
            goto label_23f6cc;
        }
    }
    ctx->pc = 0x23F6C8u;
label_23f6c8:
    // 0x23f6c8: 0x46140001
    ctx->pc = 0x23f6c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_23f6cc:
    // 0x23f6cc: 0xe6000260
    ctx->pc = 0x23f6ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x23f6d0: 0xc6010260
    ctx->pc = 0x23f6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f6d4: 0x3c014049
    ctx->pc = 0x23f6d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x23f6d8: 0x34210fdb
    ctx->pc = 0x23f6d8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23f6dc: 0x44810000
    ctx->pc = 0x23f6dcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23f6e0: 0x46010034
    ctx->pc = 0x23f6e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f6e4: 0x45000006
    ctx->pc = 0x23F6E4u;
    {
        const bool branch_taken_0x23f6e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23f6e4) {
            ctx->pc = 0x23F700u;
            goto label_23f700;
        }
    }
    ctx->pc = 0x23F6ECu;
    // 0x23f6ec: 0x3c0140c9
    ctx->pc = 0x23f6ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23f6f0: 0x34210fdb
    ctx->pc = 0x23f6f0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23f6f4: 0x44810000
    ctx->pc = 0x23f6f4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23f6f8: 0x1000000c
    ctx->pc = 0x23F6F8u;
    {
        const bool branch_taken_0x23f6f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23F6FCu;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x23f6f8) {
            ctx->pc = 0x23F72Cu;
            goto label_23f72c;
        }
    }
    ctx->pc = 0x23F700u;
label_23f700:
    // 0x23f700: 0x3c01c049
    ctx->pc = 0x23f700u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x23f704: 0x34210fdb
    ctx->pc = 0x23f704u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23f708: 0x44810000
    ctx->pc = 0x23f708u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23f70c: 0x46000836
    ctx->pc = 0x23f70cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f710: 0x0
    ctx->pc = 0x23f710u;
    // NOP
    // 0x23f714: 0x45020005
    ctx->pc = 0x23F714u;
    {
        const bool branch_taken_0x23f714 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23f714) {
            ctx->pc = 0x23F718u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x23F72Cu;
            goto label_23f72c;
        }
    }
    ctx->pc = 0x23F71Cu;
    // 0x23f71c: 0x3c0140c9
    ctx->pc = 0x23f71cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23f720: 0x34210fdb
    ctx->pc = 0x23f720u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23f724: 0x44810000
    ctx->pc = 0x23f724u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23f728: 0x46000800
    ctx->pc = 0x23f728u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_23f72c:
    // 0x23f72c: 0xe6000260
    ctx->pc = 0x23f72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x23f730: 0xae000370
    ctx->pc = 0x23f730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 0));
    // 0x23f734: 0xa600032a
    ctx->pc = 0x23f734u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 810), (uint16_t)GPR_U32(ctx, 0));
    // 0x23f738: 0x8e020334
    ctx->pc = 0x23f738u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23f73c: 0x24420001
    ctx->pc = 0x23f73cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x23f740: 0xae020334
    ctx->pc = 0x23f740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 2));
    // 0x23f744: 0x2402001e
    ctx->pc = 0x23f744u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
    // 0x23f748: 0x10000009
    ctx->pc = 0x23F748u;
    {
        const bool branch_taken_0x23f748 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23F74Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 2));
        if (branch_taken_0x23f748) {
            ctx->pc = 0x23F770u;
            goto label_23f770;
        }
    }
    ctx->pc = 0x23F750u;
label_23f750:
    // 0x23f750: 0x18400002
    ctx->pc = 0x23F750u;
    {
        const bool branch_taken_0x23f750 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23F754u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x23f750) {
            ctx->pc = 0x23F75Cu;
            goto label_23f75c;
        }
    }
    ctx->pc = 0x23F758u;
    // 0x23f758: 0xae020334
    ctx->pc = 0x23f758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 2));
label_23f75c:
    // 0x23f75c: 0x3c020031
    ctx->pc = 0x23f75cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x23f760: 0x8e030338
    ctx->pc = 0x23f760u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x23f764: 0x8c42ffbc
    ctx->pc = 0x23f764u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x23f768: 0x621823
    ctx->pc = 0x23f768u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23f76c: 0xae030338
    ctx->pc = 0x23f76cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 3));
label_23f770:
    // 0x23f770: 0x40034800
    ctx->pc = 0x23f770u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x23f774: 0x3c02003a
    ctx->pc = 0x23f774u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23f778: 0x8c4421d0
    ctx->pc = 0x23f778u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23f77c: 0x8c820248
    ctx->pc = 0x23f77cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 584)));
    // 0x23f780: 0x621823
    ctx->pc = 0x23f780u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23f784: 0x8c820240
    ctx->pc = 0x23f784u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 576)));
    // 0x23f788: 0x621821
    ctx->pc = 0x23f788u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23f78c: 0xac830240
    ctx->pc = 0x23f78cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 576), GPR_U32(ctx, 3));
    // 0x23f790: 0x8c820244
    ctx->pc = 0x23f790u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 580)));
    // 0x23f794: 0x24420001
    ctx->pc = 0x23f794u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x23f798: 0xac820244
    ctx->pc = 0x23f798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 580), GPR_U32(ctx, 2));
    // 0x23f79c: 0xdfbf0020
    ctx->pc = 0x23f79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f7a0: 0xdfb10010
    ctx->pc = 0x23f7a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f7a4: 0xdfb00000
    ctx->pc = 0x23f7a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f7a8: 0xc7b40030
    ctx->pc = 0x23f7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23f7ac: 0x3e00008
    ctx->pc = 0x23F7ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F7B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F3F4u: goto label_23f3f4;
            case 0x23F40Cu: goto label_23f40c;
            case 0x23F430u: goto label_23f430;
            case 0x23F464u: goto label_23f464;
            case 0x23F490u: goto label_23f490;
            case 0x23F4E0u: goto label_23f4e0;
            case 0x23F4F4u: goto label_23f4f4;
            case 0x23F528u: goto label_23f528;
            case 0x23F554u: goto label_23f554;
            case 0x23F570u: goto label_23f570;
            case 0x23F5D4u: goto label_23f5d4;
            case 0x23F600u: goto label_23f600;
            case 0x23F604u: goto label_23f604;
            case 0x23F648u: goto label_23f648;
            case 0x23F688u: goto label_23f688;
            case 0x23F6C8u: goto label_23f6c8;
            case 0x23F6CCu: goto label_23f6cc;
            case 0x23F700u: goto label_23f700;
            case 0x23F72Cu: goto label_23f72c;
            case 0x23F750u: goto label_23f750;
            case 0x23F75Cu: goto label_23f75c;
            case 0x23F770u: goto label_23f770;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23F7B4u;
}
