#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: get_cam_wpos
// Address: 0x26a5c8 - 0x26ac04
void get_cam_wpos_0x26a5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26a5c8u;

    // 0x26a5c8: 0x27bdff10
    ctx->pc = 0x26a5c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x26a5cc: 0xffbf00c0
    ctx->pc = 0x26a5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x26a5d0: 0xffb400b0
    ctx->pc = 0x26a5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x26a5d4: 0xffb300a0
    ctx->pc = 0x26a5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x26a5d8: 0xffb20090
    ctx->pc = 0x26a5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x26a5dc: 0xffb10080
    ctx->pc = 0x26a5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x26a5e0: 0xffb00070
    ctx->pc = 0x26a5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x26a5e4: 0xe7b700e8
    ctx->pc = 0x26a5e4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x26a5e8: 0xe7b600e0
    ctx->pc = 0x26a5e8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x26a5ec: 0xe7b500d8
    ctx->pc = 0x26a5ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x26a5f0: 0xe7b400d0
    ctx->pc = 0x26a5f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x26a5f4: 0x80982d
    ctx->pc = 0x26a5f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a5f8: 0x240301a0
    ctx->pc = 0x26a5f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26a5fc: 0x2631818
    ctx->pc = 0x26a5fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26a600: 0x3c020034
    ctx->pc = 0x26a600u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26a604: 0x2442eb60
    ctx->pc = 0x26a604u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x26a608: 0x628021
    ctx->pc = 0x26a608u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26a60c: 0x3c013ca3
    ctx->pc = 0x26a60cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15523 << 16));
    // 0x26a610: 0x3421d70a
    ctx->pc = 0x26a610u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x26a614: 0x4481a800
    ctx->pc = 0x26a614u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x26a618: 0xc6000070
    ctx->pc = 0x26a618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a61c: 0xe6000080
    ctx->pc = 0x26a61cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x26a620: 0xc6000074
    ctx->pc = 0x26a620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a624: 0xe6000084
    ctx->pc = 0x26a624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x26a628: 0xc6000078
    ctx->pc = 0x26a628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a62c: 0xe6000088
    ctx->pc = 0x26a62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x26a630: 0x3c020034
    ctx->pc = 0x26a630u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26a634: 0x8c42f914
    ctx->pc = 0x26a634u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965524)));
    // 0x26a638: 0x1440009b
    ctx->pc = 0x26A638u;
    {
        const bool branch_taken_0x26a638 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26A63Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x26a638) {
            ctx->pc = 0x26A8A8u;
            goto label_26a8a8;
        }
    }
    ctx->pc = 0x26A640u;
    // 0x26a640: 0x3c02003c
    ctx->pc = 0x26a640u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26a644: 0x8c4238dc
    ctx->pc = 0x26a644u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14556)));
    // 0x26a648: 0x1c400097
    ctx->pc = 0x26A648u;
    {
        const bool branch_taken_0x26a648 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x26A64Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x26a648) {
            ctx->pc = 0x26A8A8u;
            goto label_26a8a8;
        }
    }
    ctx->pc = 0x26A650u;
    // 0x26a650: 0x3c02003c
    ctx->pc = 0x26a650u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26a654: 0x24433900
    ctx->pc = 0x26a654u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 14592));
label_26a658:
    // 0x26a658: 0x111080
    ctx->pc = 0x26a658u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x26a65c: 0x431021
    ctx->pc = 0x26a65cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26a660: 0xac400000
    ctx->pc = 0x26a660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x26a664: 0x26310001
    ctx->pc = 0x26a664u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x26a668: 0x2a220004
    ctx->pc = 0x26a668u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
    // 0x26a66c: 0x1440fffa
    ctx->pc = 0x26A66Cu;
    {
        const bool branch_taken_0x26a66c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x26a66c) {
            ctx->pc = 0x26A658u;
            goto label_26a658;
        }
    }
    ctx->pc = 0x26A674u;
    // 0x26a674: 0x3c020034
    ctx->pc = 0x26a674u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26a678: 0x8c51f8f0
    ctx->pc = 0x26a678u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 4294965488)));
    // 0x26a67c: 0x902d
    ctx->pc = 0x26a67cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a680: 0x3c02003c
    ctx->pc = 0x26a680u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26a684: 0x24543900
    ctx->pc = 0x26a684u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 14592));
    // 0x26a688: 0x3c013fc9
    ctx->pc = 0x26a688u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x26a68c: 0x34210fdb
    ctx->pc = 0x26a68cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26a690: 0x4481b800
    ctx->pc = 0x26a690u;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 1);
    // 0x26a694: 0x3c0140c9
    ctx->pc = 0x26a694u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x26a698: 0x34210fdb
    ctx->pc = 0x26a698u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26a69c: 0x4481a000
    ctx->pc = 0x26a69cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x26a6a0: 0x3c01c049
    ctx->pc = 0x26a6a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x26a6a4: 0x34210fdb
    ctx->pc = 0x26a6a4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26a6a8: 0x4481b000
    ctx->pc = 0x26a6a8u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 1);
    // 0x26a6ac: 0x0
    ctx->pc = 0x26a6acu;
    // NOP
label_26a6b0:
    // 0x26a6b0: 0x3a0202d
    ctx->pc = 0x26a6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a6b4: 0xc0b5ae8
    ctx->pc = 0x26A6B4u;
    SET_GPR_U32(ctx, 31, 0x26A6BCu);
    ctx->pc = 0x26A6B8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 176));
    ctx->pc = 0x2D6BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateYPRMatrix_0x2d6ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A6BCu; }
    }
    if (ctx->pc != 0x26A6BCu) { return; }
    ctx->pc = 0x26A6BCu;
    // 0x26a6bc: 0xafa00040
    ctx->pc = 0x26a6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x26a6c0: 0xafa00044
    ctx->pc = 0x26a6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x26a6c4: 0xc60000d0
    ctx->pc = 0x26a6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a6c8: 0xe7a00048
    ctx->pc = 0x26a6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x26a6cc: 0x27a40040
    ctx->pc = 0x26a6ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x26a6d0: 0x27a50050
    ctx->pc = 0x26a6d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    // 0x26a6d4: 0xc0b57a2
    ctx->pc = 0x26A6D4u;
    SET_GPR_U32(ctx, 31, 0x26A6DCu);
    ctx->pc = 0x26A6D8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldVector_0x2d5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A6DCu; }
    }
    if (ctx->pc != 0x26A6DCu) { return; }
    ctx->pc = 0x26A6DCu;
    // 0x26a6dc: 0xc6000140
    ctx->pc = 0x26a6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a6e0: 0xc7a10050
    ctx->pc = 0x26a6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a6e4: 0x46010000
    ctx->pc = 0x26a6e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26a6e8: 0xe6000070
    ctx->pc = 0x26a6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x26a6ec: 0xc6000144
    ctx->pc = 0x26a6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a6f0: 0xc7a10054
    ctx->pc = 0x26a6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a6f4: 0x46010000
    ctx->pc = 0x26a6f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26a6f8: 0xe6000074
    ctx->pc = 0x26a6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x26a6fc: 0xc6000148
    ctx->pc = 0x26a6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a700: 0xc7a10058
    ctx->pc = 0x26a700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a704: 0x46010000
    ctx->pc = 0x26a704u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26a708: 0xe6000078
    ctx->pc = 0x26a708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x26a70c: 0xc09a94c
    ctx->pc = 0x26A70Cu;
    SET_GPR_U32(ctx, 31, 0x26A714u);
    ctx->pc = 0x26A710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x26A530u;
    {
        const uint32_t __entryPc = ctx->pc;
        cam_collide_to_all_targets_0x26a530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A714u; }
    }
    if (ctx->pc != 0x26A714u) { return; }
    ctx->pc = 0x26A714u;
    // 0x26a714: 0x111880
    ctx->pc = 0x26a714u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x26a718: 0x741821
    ctx->pc = 0x26a718u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x26a71c: 0xac620000
    ctx->pc = 0x26a71cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x26a720: 0xc60000b4
    ctx->pc = 0x26a720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a724: 0x46170040
    ctx->pc = 0x26a724u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x26a728: 0x3c014049
    ctx->pc = 0x26a728u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x26a72c: 0x34210fdb
    ctx->pc = 0x26a72cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26a730: 0x44810000
    ctx->pc = 0x26a730u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26a734: 0x46010034
    ctx->pc = 0x26a734u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a738: 0x0
    ctx->pc = 0x26a738u;
    // NOP
    // 0x26a73c: 0x45000003
    ctx->pc = 0x26A73Cu;
    {
        const bool branch_taken_0x26a73c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26A740u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
        if (branch_taken_0x26a73c) {
            ctx->pc = 0x26A74Cu;
            goto label_26a74c;
        }
    }
    ctx->pc = 0x26A744u;
    // 0x26a744: 0x10000007
    ctx->pc = 0x26A744u;
    {
        const bool branch_taken_0x26a744 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26A748u;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
        if (branch_taken_0x26a744) {
            ctx->pc = 0x26A764u;
            goto label_26a764;
        }
    }
    ctx->pc = 0x26A74Cu;
label_26a74c:
    // 0x26a74c: 0xc60000b4
    ctx->pc = 0x26a74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a750: 0x46160036
    ctx->pc = 0x26a750u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a754: 0x0
    ctx->pc = 0x26a754u;
    // NOP
    // 0x26a758: 0x45020003
    ctx->pc = 0x26A758u;
    {
        const bool branch_taken_0x26a758 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26a758) {
            ctx->pc = 0x26A75Cu;
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
            ctx->pc = 0x26A768u;
            goto label_26a768;
        }
    }
    ctx->pc = 0x26A760u;
    // 0x26a760: 0x46140000
    ctx->pc = 0x26a760u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_26a764:
    // 0x26a764: 0xe60000b4
    ctx->pc = 0x26a764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
label_26a768:
    // 0x26a768: 0x26520001
    ctx->pc = 0x26a768u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x26a76c: 0x32310003
    ctx->pc = 0x26a76cu;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), 3));
    // 0x26a770: 0x2a420004
    ctx->pc = 0x26a770u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
    // 0x26a774: 0x1440ffce
    ctx->pc = 0x26A774u;
    {
        const bool branch_taken_0x26a774 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26A778u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x26a774) {
            ctx->pc = 0x26A6B0u;
            goto label_26a6b0;
        }
    }
    ctx->pc = 0x26A77Cu;
    // 0x26a77c: 0x3c02003c
    ctx->pc = 0x26a77cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26a780: 0x24443900
    ctx->pc = 0x26a780u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14592));
    // 0x26a784: 0x3c020034
    ctx->pc = 0x26a784u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26a788: 0x8c43f8f0
    ctx->pc = 0x26a788u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294965488)));
    // 0x26a78c: 0x31080
    ctx->pc = 0x26a78cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x26a790: 0x441021
    ctx->pc = 0x26a790u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26a794: 0x8c420000
    ctx->pc = 0x26a794u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26a798: 0x10400042
    ctx->pc = 0x26A798u;
    {
        const bool branch_taken_0x26a798 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26A79Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 4294967295));
        if (branch_taken_0x26a798) {
            ctx->pc = 0x26A8A4u;
            goto label_26a8a4;
        }
    }
    ctx->pc = 0x26A7A0u;
    // 0x26a7a0: 0x32310003
    ctx->pc = 0x26a7a0u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), 3));
    // 0x26a7a4: 0x902d
    ctx->pc = 0x26a7a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a7a8: 0x12230005
    ctx->pc = 0x26A7A8u;
    {
        const bool branch_taken_0x26a7a8 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 3));
        ctx->pc = 0x26A7ACu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x26a7a8) {
            ctx->pc = 0x26A7C0u;
            goto label_26a7c0;
        }
    }
    ctx->pc = 0x26A7B0u;
    // 0x26a7b0: 0x111080
    ctx->pc = 0x26a7b0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x26a7b4: 0x441021
    ctx->pc = 0x26a7b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26a7b8: 0x1000000f
    ctx->pc = 0x26A7B8u;
    {
        const bool branch_taken_0x26a7b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26A7BCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x26a7b8) {
            ctx->pc = 0x26A7F8u;
            goto label_26a7f8;
        }
    }
    ctx->pc = 0x26A7C0u;
label_26a7c0:
    // 0x26a7c0: 0x32310003
    ctx->pc = 0x26a7c0u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), 3));
label_26a7c4:
    // 0x26a7c4: 0x26520001
    ctx->pc = 0x26a7c4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x26a7c8: 0x2a420004
    ctx->pc = 0x26a7c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
    // 0x26a7cc: 0x1040000d
    ctx->pc = 0x26A7CCu;
    {
        const bool branch_taken_0x26a7cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26A7D0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x26a7cc) {
            ctx->pc = 0x26A804u;
            goto label_26a804;
        }
    }
    ctx->pc = 0x26A7D4u;
    // 0x26a7d4: 0x3c020034
    ctx->pc = 0x26a7d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26a7d8: 0x8c42f8f0
    ctx->pc = 0x26a7d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965488)));
    // 0x26a7dc: 0x5222fff9
    ctx->pc = 0x26A7DCu;
    {
        const bool branch_taken_0x26a7dc = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        if (branch_taken_0x26a7dc) {
            ctx->pc = 0x26A7E0u;
            SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), 3));
            ctx->pc = 0x26A7C4u;
            goto label_26a7c4;
        }
    }
    ctx->pc = 0x26A7E4u;
    // 0x26a7e4: 0x3c02003c
    ctx->pc = 0x26a7e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26a7e8: 0x24423900
    ctx->pc = 0x26a7e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14592));
    // 0x26a7ec: 0x111880
    ctx->pc = 0x26a7ecu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x26a7f0: 0x621821
    ctx->pc = 0x26a7f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26a7f4: 0x8c620000
    ctx->pc = 0x26a7f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26a7f8:
    // 0x26a7f8: 0x5440fff2
    ctx->pc = 0x26A7F8u;
    {
        const bool branch_taken_0x26a7f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x26a7f8) {
            ctx->pc = 0x26A7FCu;
            SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), 3));
            ctx->pc = 0x26A7C4u;
            goto label_26a7c4;
        }
    }
    ctx->pc = 0x26A800u;
    // 0x26a800: 0x24070001
    ctx->pc = 0x26a800u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
label_26a804:
    // 0x26a804: 0x10e00027
    ctx->pc = 0x26A804u;
    {
        const bool branch_taken_0x26a804 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x26A808u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x26a804) {
            ctx->pc = 0x26A8A4u;
            goto label_26a8a4;
        }
    }
    ctx->pc = 0x26A80Cu;
    // 0x26a80c: 0x24030001
    ctx->pc = 0x26a80cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x26a810: 0xac430808
    ctx->pc = 0x26a810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2056), GPR_U32(ctx, 3));
    // 0x26a814: 0x3c020034
    ctx->pc = 0x26a814u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26a818: 0x8c42f8f0
    ctx->pc = 0x26a818u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965488)));
    // 0x26a81c: 0x2223823
    ctx->pc = 0x26a81cu;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x26a820: 0x10e30003
    ctx->pc = 0x26A820u;
    {
        const bool branch_taken_0x26a820 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 3));
        ctx->pc = 0x26A824u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x26a820) {
            ctx->pc = 0x26A830u;
            goto label_26a830;
        }
    }
    ctx->pc = 0x26A828u;
    // 0x26a828: 0x14e20004
    ctx->pc = 0x26A828u;
    {
        const bool branch_taken_0x26a828 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        ctx->pc = 0x26A82Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x26a828) {
            ctx->pc = 0x26A83Cu;
            goto label_26a83c;
        }
    }
    ctx->pc = 0x26A830u;
label_26a830:
    // 0x26a830: 0x3c03003c
    ctx->pc = 0x26a830u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x26a834: 0x10000002
    ctx->pc = 0x26A834u;
    {
        const bool branch_taken_0x26a834 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26A838u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x26a834) {
            ctx->pc = 0x26A840u;
            goto label_26a840;
        }
    }
    ctx->pc = 0x26A83Cu;
label_26a83c:
    // 0x26a83c: 0x2402ffff
    ctx->pc = 0x26a83cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_26a840:
    // 0x26a840: 0xac6238e4
    ctx->pc = 0x26a840u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14564), GPR_U32(ctx, 2));
    // 0x26a844: 0x3c060034
    ctx->pc = 0x26a844u;
    SET_GPR_U32(ctx, 6, ((uint32_t)52 << 16));
    // 0x26a848: 0x3c030034
    ctx->pc = 0x26a848u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x26a84c: 0x2463e9c0
    ctx->pc = 0x26a84cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294961600));
    // 0x26a850: 0x3c050034
    ctx->pc = 0x26a850u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x26a854: 0x8ca4f8f0
    ctx->pc = 0x26a854u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4294965488)));
    // 0x26a858: 0x41080
    ctx->pc = 0x26a858u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x26a85c: 0x431021
    ctx->pc = 0x26a85cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26a860: 0xc4400000
    ctx->pc = 0x26a860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a864: 0xe4c0f8f4
    ctx->pc = 0x26a864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294965492), bits); }
    // 0x26a868: 0x3c02003c
    ctx->pc = 0x26a868u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26a86c: 0x8c4238e4
    ctx->pc = 0x26a86cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14564)));
    // 0x26a870: 0x822021
    ctx->pc = 0x26a870u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26a874: 0x30840003
    ctx->pc = 0x26a874u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 3));
    // 0x26a878: 0x24020002
    ctx->pc = 0x26a878u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x26a87c: 0x10e20004
    ctx->pc = 0x26A87Cu;
    {
        const bool branch_taken_0x26a87c = (GPR_U32(ctx, 7) == GPR_U32(ctx, 2));
        ctx->pc = 0x26A880u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294965488), GPR_U32(ctx, 4));
        if (branch_taken_0x26a87c) {
            ctx->pc = 0x26A890u;
            goto label_26a890;
        }
    }
    ctx->pc = 0x26A884u;
    // 0x26a884: 0x2402fffe
    ctx->pc = 0x26a884u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x26a888: 0x14e20004
    ctx->pc = 0x26A888u;
    {
        const bool branch_taken_0x26a888 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        ctx->pc = 0x26A88Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x26a888) {
            ctx->pc = 0x26A89Cu;
            goto label_26a89c;
        }
    }
    ctx->pc = 0x26A890u;
label_26a890:
    // 0x26a890: 0x3c02003c
    ctx->pc = 0x26a890u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26a894: 0x10000003
    ctx->pc = 0x26A894u;
    {
        const bool branch_taken_0x26a894 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26A898u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 14556), GPR_U32(ctx, 0));
        if (branch_taken_0x26a894) {
            ctx->pc = 0x26A8A4u;
            goto label_26a8a4;
        }
    }
    ctx->pc = 0x26A89Cu;
label_26a89c:
    // 0x26a89c: 0x24020168
    ctx->pc = 0x26a89cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 360));
    // 0x26a8a0: 0xac6238dc
    ctx->pc = 0x26a8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14556), GPR_U32(ctx, 2));
label_26a8a4:
    // 0x26a8a4: 0x3a0202d
    ctx->pc = 0x26a8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26a8a8:
    // 0x26a8a8: 0xc0b5ae8
    ctx->pc = 0x26A8A8u;
    SET_GPR_U32(ctx, 31, 0x26A8B0u);
    ctx->pc = 0x26A8ACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 176));
    ctx->pc = 0x2D6BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateYPRMatrix_0x2d6ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A8B0u; }
    }
    if (ctx->pc != 0x26A8B0u) { return; }
    ctx->pc = 0x26A8B0u;
    // 0x26a8b0: 0xafa00040
    ctx->pc = 0x26a8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x26a8b4: 0xafa00044
    ctx->pc = 0x26a8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x26a8b8: 0xc60000d0
    ctx->pc = 0x26a8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a8bc: 0xe7a00048
    ctx->pc = 0x26a8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x26a8c0: 0x27a40040
    ctx->pc = 0x26a8c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x26a8c4: 0x27a50050
    ctx->pc = 0x26a8c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    // 0x26a8c8: 0xc0b57a2
    ctx->pc = 0x26A8C8u;
    SET_GPR_U32(ctx, 31, 0x26A8D0u);
    ctx->pc = 0x26A8CCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldVector_0x2d5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A8D0u; }
    }
    if (ctx->pc != 0x26A8D0u) { return; }
    ctx->pc = 0x26A8D0u;
    // 0x26a8d0: 0xc6030140
    ctx->pc = 0x26a8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26a8d4: 0xc7a00050
    ctx->pc = 0x26a8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a8d8: 0x460018c0
    ctx->pc = 0x26a8d8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x26a8dc: 0xe6030070
    ctx->pc = 0x26a8dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x26a8e0: 0xc6020144
    ctx->pc = 0x26a8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26a8e4: 0xc7a00054
    ctx->pc = 0x26a8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a8e8: 0x46001080
    ctx->pc = 0x26a8e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x26a8ec: 0xe6020074
    ctx->pc = 0x26a8ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x26a8f0: 0xc6010148
    ctx->pc = 0x26a8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a8f4: 0xc7a00058
    ctx->pc = 0x26a8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a8f8: 0x46000840
    ctx->pc = 0x26a8f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26a8fc: 0xe6010078
    ctx->pc = 0x26a8fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x26a900: 0xe7a30060
    ctx->pc = 0x26a900u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x26a904: 0xe7a20064
    ctx->pc = 0x26a904u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x26a908: 0xe7a10068
    ctx->pc = 0x26a908u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x26a90c: 0x3c020034
    ctx->pc = 0x26a90cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26a910: 0x8c42f914
    ctx->pc = 0x26a910u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965524)));
    // 0x26a914: 0x144000af
    ctx->pc = 0x26A914u;
    {
        const bool branch_taken_0x26a914 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26A918u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        if (branch_taken_0x26a914) {
            ctx->pc = 0x26ABD4u;
            goto label_26abd4;
        }
    }
    ctx->pc = 0x26A91Cu;
    // 0x26a91c: 0xc09a94c
    ctx->pc = 0x26A91Cu;
    SET_GPR_U32(ctx, 31, 0x26A924u);
    ctx->pc = 0x26A920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x26A530u;
    {
        const uint32_t __entryPc = ctx->pc;
        cam_collide_to_all_targets_0x26a530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A924u; }
    }
    if (ctx->pc != 0x26A924u) { return; }
    ctx->pc = 0x26A924u;
    // 0x26a924: 0x1440006b
    ctx->pc = 0x26A924u;
    {
        const bool branch_taken_0x26a924 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26A928u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x26a924) {
            ctx->pc = 0x26AAD4u;
            goto label_26aad4;
        }
    }
    ctx->pc = 0x26A92Cu;
    // 0x26a92c: 0x8e0300d8
    ctx->pc = 0x26a92cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x26a930: 0x4600004
    ctx->pc = 0x26A930u;
    {
        const bool branch_taken_0x26a930 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x26A934u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
        if (branch_taken_0x26a930) {
            ctx->pc = 0x26A944u;
            goto label_26a944;
        }
    }
    ctx->pc = 0x26A938u;
    // 0x26a938: 0x621023
    ctx->pc = 0x26a938u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26a93c: 0x44100a5
    ctx->pc = 0x26A93Cu;
    {
        const bool branch_taken_0x26a93c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26A940u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
        if (branch_taken_0x26a93c) {
            ctx->pc = 0x26ABD4u;
            goto label_26abd4;
        }
    }
    ctx->pc = 0x26A944u;
label_26a944:
    // 0x26a944: 0x3c02003c
    ctx->pc = 0x26a944u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26a948: 0x8c4238ec
    ctx->pc = 0x26a948u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14572)));
    // 0x26a94c: 0x18400031
    ctx->pc = 0x26A94Cu;
    {
        const bool branch_taken_0x26a94c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26A950u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x26a94c) {
            ctx->pc = 0x26AA14u;
            goto label_26aa14;
        }
    }
    ctx->pc = 0x26A954u;
    // 0x26a954: 0x44800800
    ctx->pc = 0x26a954u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x26a958: 0x46000834
    ctx->pc = 0x26a958u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a95c: 0x0
    ctx->pc = 0x26a95cu;
    // NOP
    // 0x26a960: 0x4502009c
    ctx->pc = 0x26A960u;
    {
        const bool branch_taken_0x26a960 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26a960) {
            ctx->pc = 0x26A964u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
            ctx->pc = 0x26ABD4u;
            goto label_26abd4;
        }
    }
    ctx->pc = 0x26A968u;
    // 0x26a968: 0x46150001
    ctx->pc = 0x26a968u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x26a96c: 0x46010034
    ctx->pc = 0x26a96cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a970: 0x0
    ctx->pc = 0x26a970u;
    // NOP
    // 0x26a974: 0x45000002
    ctx->pc = 0x26A974u;
    {
        const bool branch_taken_0x26a974 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26A978u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
        if (branch_taken_0x26a974) {
            ctx->pc = 0x26A980u;
            goto label_26a980;
        }
    }
    ctx->pc = 0x26A97Cu;
    // 0x26a97c: 0xe60100c0
    ctx->pc = 0x26a97cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_26a980:
    // 0x26a980: 0xc60000b0
    ctx->pc = 0x26a980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a984: 0x46150001
    ctx->pc = 0x26a984u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x26a988: 0xe60000b0
    ctx->pc = 0x26a988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x26a98c: 0x3a0202d
    ctx->pc = 0x26a98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a990: 0xc0b5ae8
    ctx->pc = 0x26A990u;
    SET_GPR_U32(ctx, 31, 0x26A998u);
    ctx->pc = 0x26A994u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 176));
    ctx->pc = 0x2D6BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateYPRMatrix_0x2d6ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A998u; }
    }
    if (ctx->pc != 0x26A998u) { return; }
    ctx->pc = 0x26A998u;
    // 0x26a998: 0xafa00040
    ctx->pc = 0x26a998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x26a99c: 0xafa00044
    ctx->pc = 0x26a99cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x26a9a0: 0xc60000d0
    ctx->pc = 0x26a9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a9a4: 0xe7a00048
    ctx->pc = 0x26a9a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x26a9a8: 0x27a40040
    ctx->pc = 0x26a9a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x26a9ac: 0x27a50050
    ctx->pc = 0x26a9acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    // 0x26a9b0: 0xc0b57a2
    ctx->pc = 0x26A9B0u;
    SET_GPR_U32(ctx, 31, 0x26A9B8u);
    ctx->pc = 0x26A9B4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldVector_0x2d5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A9B8u; }
    }
    if (ctx->pc != 0x26A9B8u) { return; }
    ctx->pc = 0x26A9B8u;
    // 0x26a9b8: 0xc6000140
    ctx->pc = 0x26a9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a9bc: 0xc7a10050
    ctx->pc = 0x26a9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a9c0: 0x46010000
    ctx->pc = 0x26a9c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26a9c4: 0xe6000070
    ctx->pc = 0x26a9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x26a9c8: 0xc6000144
    ctx->pc = 0x26a9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a9cc: 0xc7a10054
    ctx->pc = 0x26a9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a9d0: 0x46010000
    ctx->pc = 0x26a9d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26a9d4: 0xe6000074
    ctx->pc = 0x26a9d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x26a9d8: 0xc6000148
    ctx->pc = 0x26a9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a9dc: 0xc7a10058
    ctx->pc = 0x26a9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a9e0: 0x46010000
    ctx->pc = 0x26a9e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26a9e4: 0xe6000078
    ctx->pc = 0x26a9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x26a9e8: 0xc09a94c
    ctx->pc = 0x26A9E8u;
    SET_GPR_U32(ctx, 31, 0x26A9F0u);
    ctx->pc = 0x26A9ECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x26A530u;
    {
        const uint32_t __entryPc = ctx->pc;
        cam_collide_to_all_targets_0x26a530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A9F0u; }
    }
    if (ctx->pc != 0x26A9F0u) { return; }
    ctx->pc = 0x26A9F0u;
    // 0x26a9f0: 0x10400079
    ctx->pc = 0x26A9F0u;
    {
        const bool branch_taken_0x26a9f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26A9F4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        if (branch_taken_0x26a9f0) {
            ctx->pc = 0x26ABD8u;
            goto label_26abd8;
        }
    }
    ctx->pc = 0x26A9F8u;
    // 0x26a9f8: 0xe61400c0
    ctx->pc = 0x26a9f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x26a9fc: 0xc7a00060
    ctx->pc = 0x26a9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26aa00: 0xe6000070
    ctx->pc = 0x26aa00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x26aa04: 0xc7a00064
    ctx->pc = 0x26aa04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26aa08: 0xe6000074
    ctx->pc = 0x26aa08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x26aa0c: 0x10000070
    ctx->pc = 0x26AA0Cu;
    {
        const bool branch_taken_0x26aa0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26AA10u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x26aa0c) {
            ctx->pc = 0x26ABD0u;
            goto label_26abd0;
        }
    }
    ctx->pc = 0x26AA14u;
label_26aa14:
    // 0x26aa14: 0x44800800
    ctx->pc = 0x26aa14u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x26aa18: 0x46010034
    ctx->pc = 0x26aa18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26aa1c: 0x0
    ctx->pc = 0x26aa1cu;
    // NOP
    // 0x26aa20: 0x4502006c
    ctx->pc = 0x26AA20u;
    {
        const bool branch_taken_0x26aa20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26aa20) {
            ctx->pc = 0x26AA24u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
            ctx->pc = 0x26ABD4u;
            goto label_26abd4;
        }
    }
    ctx->pc = 0x26AA28u;
    // 0x26aa28: 0x4600a800
    ctx->pc = 0x26aa28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x26aa2c: 0x46000834
    ctx->pc = 0x26aa2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26aa30: 0x0
    ctx->pc = 0x26aa30u;
    // NOP
    // 0x26aa34: 0x45000002
    ctx->pc = 0x26AA34u;
    {
        const bool branch_taken_0x26aa34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26AA38u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
        if (branch_taken_0x26aa34) {
            ctx->pc = 0x26AA40u;
            goto label_26aa40;
        }
    }
    ctx->pc = 0x26AA3Cu;
    // 0x26aa3c: 0xe60100c0
    ctx->pc = 0x26aa3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_26aa40:
    // 0x26aa40: 0xc60000b0
    ctx->pc = 0x26aa40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26aa44: 0x4600a800
    ctx->pc = 0x26aa44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x26aa48: 0xe60000b0
    ctx->pc = 0x26aa48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x26aa4c: 0x3a0202d
    ctx->pc = 0x26aa4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aa50: 0xc0b5ae8
    ctx->pc = 0x26AA50u;
    SET_GPR_U32(ctx, 31, 0x26AA58u);
    ctx->pc = 0x26AA54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 176));
    ctx->pc = 0x2D6BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateYPRMatrix_0x2d6ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AA58u; }
    }
    if (ctx->pc != 0x26AA58u) { return; }
    ctx->pc = 0x26AA58u;
    // 0x26aa58: 0xafa00040
    ctx->pc = 0x26aa58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x26aa5c: 0xafa00044
    ctx->pc = 0x26aa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x26aa60: 0xc60000d0
    ctx->pc = 0x26aa60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26aa64: 0xe7a00048
    ctx->pc = 0x26aa64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x26aa68: 0x27a40040
    ctx->pc = 0x26aa68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x26aa6c: 0x27a50050
    ctx->pc = 0x26aa6cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    // 0x26aa70: 0xc0b57a2
    ctx->pc = 0x26AA70u;
    SET_GPR_U32(ctx, 31, 0x26AA78u);
    ctx->pc = 0x26AA74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldVector_0x2d5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AA78u; }
    }
    if (ctx->pc != 0x26AA78u) { return; }
    ctx->pc = 0x26AA78u;
    // 0x26aa78: 0xc6000140
    ctx->pc = 0x26aa78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26aa7c: 0xc7a10050
    ctx->pc = 0x26aa7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26aa80: 0x46010000
    ctx->pc = 0x26aa80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26aa84: 0xe6000070
    ctx->pc = 0x26aa84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x26aa88: 0xc6000144
    ctx->pc = 0x26aa88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26aa8c: 0xc7a10054
    ctx->pc = 0x26aa8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26aa90: 0x46010000
    ctx->pc = 0x26aa90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26aa94: 0xe6000074
    ctx->pc = 0x26aa94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x26aa98: 0xc6000148
    ctx->pc = 0x26aa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26aa9c: 0xc7a10058
    ctx->pc = 0x26aa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26aaa0: 0x46010000
    ctx->pc = 0x26aaa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26aaa4: 0xe6000078
    ctx->pc = 0x26aaa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x26aaa8: 0xc09a94c
    ctx->pc = 0x26AAA8u;
    SET_GPR_U32(ctx, 31, 0x26AAB0u);
    ctx->pc = 0x26AAACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x26A530u;
    {
        const uint32_t __entryPc = ctx->pc;
        cam_collide_to_all_targets_0x26a530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AAB0u; }
    }
    if (ctx->pc != 0x26AAB0u) { return; }
    ctx->pc = 0x26AAB0u;
    // 0x26aab0: 0x10400049
    ctx->pc = 0x26AAB0u;
    {
        const bool branch_taken_0x26aab0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26AAB4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        if (branch_taken_0x26aab0) {
            ctx->pc = 0x26ABD8u;
            goto label_26abd8;
        }
    }
    ctx->pc = 0x26AAB8u;
    // 0x26aab8: 0xe61400c0
    ctx->pc = 0x26aab8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x26aabc: 0xc7a00060
    ctx->pc = 0x26aabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26aac0: 0xe6000070
    ctx->pc = 0x26aac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x26aac4: 0xc7a00064
    ctx->pc = 0x26aac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26aac8: 0xe6000074
    ctx->pc = 0x26aac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x26aacc: 0x10000040
    ctx->pc = 0x26AACCu;
    {
        const bool branch_taken_0x26aacc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26AAD0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x26aacc) {
            ctx->pc = 0x26ABD0u;
            goto label_26abd0;
        }
    }
    ctx->pc = 0x26AAD4u;
label_26aad4:
    // 0x26aad4: 0x8e0300d8
    ctx->pc = 0x26aad4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x26aad8: 0x8c42ffbc
    ctx->pc = 0x26aad8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x26aadc: 0x621821
    ctx->pc = 0x26aadcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26aae0: 0xae0300d8
    ctx->pc = 0x26aae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 3));
    // 0x26aae4: 0x286300b5
    ctx->pc = 0x26aae4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 181));
    // 0x26aae8: 0x14600004
    ctx->pc = 0x26AAE8u;
    {
        const bool branch_taken_0x26aae8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x26AAECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x26aae8) {
            ctx->pc = 0x26AAFCu;
            goto label_26aafc;
        }
    }
    ctx->pc = 0x26AAF0u;
    // 0x26aaf0: 0x240200b4
    ctx->pc = 0x26aaf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 180));
    // 0x26aaf4: 0xae0200d8
    ctx->pc = 0x26aaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
    // 0x26aaf8: 0x3c02003c
    ctx->pc = 0x26aaf8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_26aafc:
    // 0x26aafc: 0x8c4238ec
    ctx->pc = 0x26aafcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14572)));
    // 0x26ab00: 0x18400013
    ctx->pc = 0x26AB00u;
    {
        const bool branch_taken_0x26ab00 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26AB04u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x26ab00) {
            ctx->pc = 0x26AB50u;
            goto label_26ab50;
        }
    }
    ctx->pc = 0x26AB08u;
    // 0x26ab08: 0x3c013fc8
    ctx->pc = 0x26ab08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16328 << 16));
    // 0x26ab0c: 0x34219d7b
    ctx->pc = 0x26ab0cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 40315));
    // 0x26ab10: 0x44810000
    ctx->pc = 0x26ab10u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26ab14: 0x46150001
    ctx->pc = 0x26ab14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x26ab18: 0x46000836
    ctx->pc = 0x26ab18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ab1c: 0x0
    ctx->pc = 0x26ab1cu;
    // NOP
    // 0x26ab20: 0x4500002c
    ctx->pc = 0x26AB20u;
    {
        const bool branch_taken_0x26ab20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26AB24u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x26ab20) {
            ctx->pc = 0x26ABD4u;
            goto label_26abd4;
        }
    }
    ctx->pc = 0x26AB28u;
    // 0x26ab28: 0xc60000c0
    ctx->pc = 0x26ab28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ab2c: 0x4600a800
    ctx->pc = 0x26ab2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x26ab30: 0xe60000c0
    ctx->pc = 0x26ab30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x26ab34: 0x4601a800
    ctx->pc = 0x26ab34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x26ab38: 0xe60000b0
    ctx->pc = 0x26ab38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x26ab3c: 0xc0b5ae8
    ctx->pc = 0x26AB3Cu;
    SET_GPR_U32(ctx, 31, 0x26AB44u);
    ctx->pc = 0x26AB40u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 176));
    ctx->pc = 0x2D6BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateYPRMatrix_0x2d6ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AB44u; }
    }
    if (ctx->pc != 0x26AB44u) { return; }
    ctx->pc = 0x26AB44u;
    // 0x26ab44: 0xafa00040
    ctx->pc = 0x26ab44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x26ab48: 0x10000010
    ctx->pc = 0x26AB48u;
    {
        const bool branch_taken_0x26ab48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26AB4Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        if (branch_taken_0x26ab48) {
            ctx->pc = 0x26AB8Cu;
            goto label_26ab8c;
        }
    }
    ctx->pc = 0x26AB50u;
label_26ab50:
    // 0x26ab50: 0x4480a000
    ctx->pc = 0x26ab50u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x26ab54: 0x4614a800
    ctx->pc = 0x26ab54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x26ab58: 0x46010036
    ctx->pc = 0x26ab58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ab5c: 0x0
    ctx->pc = 0x26ab5cu;
    // NOP
    // 0x26ab60: 0x4500001c
    ctx->pc = 0x26AB60u;
    {
        const bool branch_taken_0x26ab60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26AB64u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x26ab60) {
            ctx->pc = 0x26ABD4u;
            goto label_26abd4;
        }
    }
    ctx->pc = 0x26AB68u;
    // 0x26ab68: 0xc60000c0
    ctx->pc = 0x26ab68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ab6c: 0x46150001
    ctx->pc = 0x26ab6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x26ab70: 0xe60000c0
    ctx->pc = 0x26ab70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x26ab74: 0x46150801
    ctx->pc = 0x26ab74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x26ab78: 0xe60000b0
    ctx->pc = 0x26ab78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x26ab7c: 0xc0b5ae8
    ctx->pc = 0x26AB7Cu;
    SET_GPR_U32(ctx, 31, 0x26AB84u);
    ctx->pc = 0x26AB80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 176));
    ctx->pc = 0x2D6BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateYPRMatrix_0x2d6ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AB84u; }
    }
    if (ctx->pc != 0x26AB84u) { return; }
    ctx->pc = 0x26AB84u;
    // 0x26ab84: 0xe7b40040
    ctx->pc = 0x26ab84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x26ab88: 0xe7b40044
    ctx->pc = 0x26ab88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26ab8c:
    // 0x26ab8c: 0xc60000d0
    ctx->pc = 0x26ab8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ab90: 0xe7a00048
    ctx->pc = 0x26ab90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x26ab94: 0x27a40040
    ctx->pc = 0x26ab94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x26ab98: 0x27a50050
    ctx->pc = 0x26ab98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    // 0x26ab9c: 0xc0b57a2
    ctx->pc = 0x26AB9Cu;
    SET_GPR_U32(ctx, 31, 0x26ABA4u);
    ctx->pc = 0x26ABA0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldVector_0x2d5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ABA4u; }
    }
    if (ctx->pc != 0x26ABA4u) { return; }
    ctx->pc = 0x26ABA4u;
    // 0x26aba4: 0xc6000140
    ctx->pc = 0x26aba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26aba8: 0xc7a10050
    ctx->pc = 0x26aba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26abac: 0x46010000
    ctx->pc = 0x26abacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26abb0: 0xe6000070
    ctx->pc = 0x26abb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x26abb4: 0xc6000144
    ctx->pc = 0x26abb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26abb8: 0xc7a10054
    ctx->pc = 0x26abb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26abbc: 0x46010000
    ctx->pc = 0x26abbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26abc0: 0xe6000074
    ctx->pc = 0x26abc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x26abc4: 0xc6000148
    ctx->pc = 0x26abc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26abc8: 0xc7a10058
    ctx->pc = 0x26abc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26abcc: 0x46010000
    ctx->pc = 0x26abccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_26abd0:
    // 0x26abd0: 0xe6000078
    ctx->pc = 0x26abd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
label_26abd4:
    // 0x26abd4: 0xdfbf00c0
    ctx->pc = 0x26abd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_26abd8:
    // 0x26abd8: 0xdfb400b0
    ctx->pc = 0x26abd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26abdc: 0xdfb300a0
    ctx->pc = 0x26abdcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26abe0: 0xdfb20090
    ctx->pc = 0x26abe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26abe4: 0xdfb10080
    ctx->pc = 0x26abe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26abe8: 0xdfb00070
    ctx->pc = 0x26abe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26abec: 0xc7b700e8
    ctx->pc = 0x26abecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x26abf0: 0xc7b600e0
    ctx->pc = 0x26abf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x26abf4: 0xc7b500d8
    ctx->pc = 0x26abf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26abf8: 0xc7b400d0
    ctx->pc = 0x26abf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26abfc: 0x3e00008
    ctx->pc = 0x26ABFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AC00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26A658u: goto label_26a658;
            case 0x26A6B0u: goto label_26a6b0;
            case 0x26A74Cu: goto label_26a74c;
            case 0x26A764u: goto label_26a764;
            case 0x26A768u: goto label_26a768;
            case 0x26A7C0u: goto label_26a7c0;
            case 0x26A7C4u: goto label_26a7c4;
            case 0x26A7F8u: goto label_26a7f8;
            case 0x26A804u: goto label_26a804;
            case 0x26A830u: goto label_26a830;
            case 0x26A83Cu: goto label_26a83c;
            case 0x26A840u: goto label_26a840;
            case 0x26A890u: goto label_26a890;
            case 0x26A89Cu: goto label_26a89c;
            case 0x26A8A4u: goto label_26a8a4;
            case 0x26A8A8u: goto label_26a8a8;
            case 0x26A944u: goto label_26a944;
            case 0x26A980u: goto label_26a980;
            case 0x26AA14u: goto label_26aa14;
            case 0x26AA40u: goto label_26aa40;
            case 0x26AAD4u: goto label_26aad4;
            case 0x26AAFCu: goto label_26aafc;
            case 0x26AB50u: goto label_26ab50;
            case 0x26AB8Cu: goto label_26ab8c;
            case 0x26ABD0u: goto label_26abd0;
            case 0x26ABD4u: goto label_26abd4;
            case 0x26ABD8u: goto label_26abd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26AC04u;
}
