#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FirstPersonCamera
// Address: 0x271838 - 0x271d64
void FirstPersonCamera_0x271838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x271838u;

    // 0x271838: 0x27bdff40
    ctx->pc = 0x271838u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x27183c: 0xffbf00a0
    ctx->pc = 0x27183cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x271840: 0xffb20090
    ctx->pc = 0x271840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x271844: 0xffb10080
    ctx->pc = 0x271844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x271848: 0xffb00070
    ctx->pc = 0x271848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x27184c: 0xe7b500b8
    ctx->pc = 0x27184cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x271850: 0xe7b400b0
    ctx->pc = 0x271850u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x271854: 0x80902d
    ctx->pc = 0x271854u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271858: 0x240301a0
    ctx->pc = 0x271858u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 416));
    // 0x27185c: 0x2431818
    ctx->pc = 0x27185cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x271860: 0x3c020034
    ctx->pc = 0x271860u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x271864: 0x2442eb60
    ctx->pc = 0x271864u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x271868: 0x628821
    ctx->pc = 0x271868u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27186c: 0x8e230100
    ctx->pc = 0x27186cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x271870: 0x2402ffff
    ctx->pc = 0x271870u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x271874: 0x40802d
    ctx->pc = 0x271874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271878: 0x3800b
    ctx->pc = 0x271878u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 0));
    // 0x27187c: 0xc09ac5a
    ctx->pc = 0x27187Cu;
    SET_GPR_U32(ctx, 31, 0x271884u);
    ctx->pc = 0x271880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x26B168u;
    {
        const uint32_t __entryPc = ctx->pc;
        NextPlayer_0x26b168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271884u; }
    }
    if (ctx->pc != 0x271884u) { return; }
    ctx->pc = 0x271884u;
    // 0x271884: 0x1040012f
    ctx->pc = 0x271884u;
    {
        const bool branch_taken_0x271884 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x271888u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 2));
        if (branch_taken_0x271884) {
            ctx->pc = 0x271D44u;
            goto label_271d44;
        }
    }
    ctx->pc = 0x27188Cu;
    // 0x27188c: 0x8c420060
    ctx->pc = 0x27188cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x271890: 0x1040012d
    ctx->pc = 0x271890u;
    {
        const bool branch_taken_0x271890 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x271894u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        if (branch_taken_0x271890) {
            ctx->pc = 0x271D48u;
            goto label_271d48;
        }
    }
    ctx->pc = 0x271898u;
    // 0x271898: 0x56000001
    ctx->pc = 0x271898u;
    {
        const bool branch_taken_0x271898 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x271898) {
            ctx->pc = 0x27189Cu;
            WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
            ctx->pc = 0x2718A0u;
            goto label_2718a0;
        }
    }
    ctx->pc = 0x2718A0u;
label_2718a0:
    // 0x2718a0: 0x8e220100
    ctx->pc = 0x2718a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x2718a4: 0xc44c0020
    ctx->pc = 0x2718a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2718a8: 0xc0ba04a
    ctx->pc = 0x2718A8u;
    SET_GPR_U32(ctx, 31, 0x2718B0u);
    ctx->pc = 0x2718ACu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2718B0u; }
    }
    if (ctx->pc != 0x2718B0u) { return; }
    ctx->pc = 0x2718B0u;
    // 0x2718b0: 0x8e2300d4
    ctx->pc = 0x2718b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x2718b4: 0x24020001
    ctx->pc = 0x2718b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2718b8: 0x10620011
    ctx->pc = 0x2718B8u;
    {
        const bool branch_taken_0x2718b8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2718BCu;
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x2718b8) {
            ctx->pc = 0x271900u;
            goto label_271900;
        }
    }
    ctx->pc = 0x2718C0u;
    // 0x2718c0: 0x28620002
    ctx->pc = 0x2718c0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
    // 0x2718c4: 0x10400005
    ctx->pc = 0x2718C4u;
    {
        const bool branch_taken_0x2718c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2718C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2718c4) {
            ctx->pc = 0x2718DCu;
            goto label_2718dc;
        }
    }
    ctx->pc = 0x2718CCu;
    // 0x2718cc: 0x50600007
    ctx->pc = 0x2718CCu;
    {
        const bool branch_taken_0x2718cc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2718cc) {
            ctx->pc = 0x2718D0u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
            ctx->pc = 0x2718ECu;
            goto label_2718ec;
        }
    }
    ctx->pc = 0x2718D4u;
    // 0x2718d4: 0x100000ee
    ctx->pc = 0x2718D4u;
    {
        const bool branch_taken_0x2718d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2718D8u;
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 180), bits); }
        if (branch_taken_0x2718d4) {
            ctx->pc = 0x271C90u;
            goto label_271c90;
        }
    }
    ctx->pc = 0x2718DCu;
label_2718dc:
    // 0x2718dc: 0x50620081
    ctx->pc = 0x2718DCu;
    {
        const bool branch_taken_0x2718dc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2718dc) {
            ctx->pc = 0x2718E0u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x271AE4u;
            goto label_271ae4;
        }
    }
    ctx->pc = 0x2718E4u;
    // 0x2718e4: 0x100000ea
    ctx->pc = 0x2718E4u;
    {
        const bool branch_taken_0x2718e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2718E8u;
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 180), bits); }
        if (branch_taken_0x2718e4) {
            ctx->pc = 0x271C90u;
            goto label_271c90;
        }
    }
    ctx->pc = 0x2718ECu;
label_2718ec:
    // 0x2718ec: 0xe63500b4
    ctx->pc = 0x2718ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 180), bits); }
    // 0x2718f0: 0xae2000b8
    ctx->pc = 0x2718f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
    // 0x2718f4: 0x8e2200d4
    ctx->pc = 0x2718f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x2718f8: 0x24420001
    ctx->pc = 0x2718f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2718fc: 0xae2200d4
    ctx->pc = 0x2718fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
label_271900:
    // 0x271900: 0x8e220100
    ctx->pc = 0x271900u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x271904: 0xc4430040
    ctx->pc = 0x271904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x271908: 0xe6230140
    ctx->pc = 0x271908u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 320), bits); }
    // 0x27190c: 0xc4410044
    ctx->pc = 0x27190cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271910: 0xe6210144
    ctx->pc = 0x271910u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 324), bits); }
    // 0x271914: 0xc4420048
    ctx->pc = 0x271914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x271918: 0xe6220148
    ctx->pc = 0x271918u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
    // 0x27191c: 0xc6200070
    ctx->pc = 0x27191cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271920: 0x460018c1
    ctx->pc = 0x271920u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x271924: 0xe7a30000
    ctx->pc = 0x271924u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x271928: 0xc6200074
    ctx->pc = 0x271928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27192c: 0x46000841
    ctx->pc = 0x27192cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x271930: 0xe7a10004
    ctx->pc = 0x271930u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x271934: 0xc6200078
    ctx->pc = 0x271934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271938: 0x46001081
    ctx->pc = 0x271938u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x27193c: 0xe7a20008
    ctx->pc = 0x27193cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x271940: 0x46031802
    ctx->pc = 0x271940u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x271944: 0x46010842
    ctx->pc = 0x271944u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x271948: 0x46010000
    ctx->pc = 0x271948u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27194c: 0x46021082
    ctx->pc = 0x27194cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x271950: 0x46020000
    ctx->pc = 0x271950u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x271954: 0x0
    ctx->pc = 0x271954u;
    // NOP
    // 0x271958: 0x0
    ctx->pc = 0x271958u;
    // NOP
    // 0x27195c: 0x46000004
    ctx->pc = 0x27195cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x271960: 0x46000032
    ctx->pc = 0x271960u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271964: 0x0
    ctx->pc = 0x271964u;
    // NOP
    // 0x271968: 0x45030006
    ctx->pc = 0x271968u;
    {
        const bool branch_taken_0x271968 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x271968) {
            ctx->pc = 0x27196Cu;
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x271984u;
            goto label_271984;
        }
    }
    ctx->pc = 0x271970u;
    // 0x271970: 0x46031b02
    ctx->pc = 0x271970u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x271974: 0x46016300
    ctx->pc = 0x271974u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x271978: 0xc0ba284
    ctx->pc = 0x271978u;
    SET_GPR_U32(ctx, 31, 0x271980u);
    ctx->pc = 0x27197Cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271980u; }
    }
    if (ctx->pc != 0x271980u) { return; }
    ctx->pc = 0x271980u;
    // 0x271980: 0x46000046
    ctx->pc = 0x271980u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_271984:
    // 0x271984: 0xc7a00000
    ctx->pc = 0x271984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271988: 0xe7a00010
    ctx->pc = 0x271988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x27198c: 0xc7a00004
    ctx->pc = 0x27198cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271990: 0xe7a00014
    ctx->pc = 0x271990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x271994: 0xc7a00008
    ctx->pc = 0x271994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271998: 0xe7a00018
    ctx->pc = 0x271998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x27199c: 0x3c013f80
    ctx->pc = 0x27199cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2719a0: 0x44810000
    ctx->pc = 0x2719a0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2719a4: 0x46010036
    ctx->pc = 0x2719a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2719a8: 0x4500003e
    ctx->pc = 0x2719A8u;
    {
        const bool branch_taken_0x2719a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2719a8) {
            ctx->pc = 0x271AA4u;
            goto label_271aa4;
        }
    }
    ctx->pc = 0x2719B0u;
    // 0x2719b0: 0x3c014170
    ctx->pc = 0x2719b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16752 << 16));
    // 0x2719b4: 0x44810000
    ctx->pc = 0x2719b4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2719b8: 0x46010036
    ctx->pc = 0x2719b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2719bc: 0x0
    ctx->pc = 0x2719bcu;
    // NOP
    // 0x2719c0: 0x45030001
    ctx->pc = 0x2719C0u;
    {
        const bool branch_taken_0x2719c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2719c0) {
            ctx->pc = 0x2719C4u;
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x2719C8u;
            goto label_2719c8;
        }
    }
    ctx->pc = 0x2719C8u;
label_2719c8:
    // 0x2719c8: 0x3c013f80
    ctx->pc = 0x2719c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2719cc: 0x44811800
    ctx->pc = 0x2719ccu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x2719d0: 0x0
    ctx->pc = 0x2719d0u;
    // NOP
    // 0x2719d4: 0x0
    ctx->pc = 0x2719d4u;
    // NOP
    // 0x2719d8: 0x460118c3
    ctx->pc = 0x2719d8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[1];
    // 0x2719dc: 0xc7a10010
    ctx->pc = 0x2719dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2719e0: 0x46011842
    ctx->pc = 0x2719e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2719e4: 0xc7a40014
    ctx->pc = 0x2719e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2719e8: 0x46041902
    ctx->pc = 0x2719e8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2719ec: 0xc7a00018
    ctx->pc = 0x2719ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2719f0: 0x460018c2
    ctx->pc = 0x2719f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2719f4: 0xc6250070
    ctx->pc = 0x2719f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2719f8: 0x46012940
    ctx->pc = 0x2719f8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x2719fc: 0xe6250070
    ctx->pc = 0x2719fcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x271a00: 0xc6220074
    ctx->pc = 0x271a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x271a04: 0x46041080
    ctx->pc = 0x271a04u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x271a08: 0xe6220074
    ctx->pc = 0x271a08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x271a0c: 0xc6210078
    ctx->pc = 0x271a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271a10: 0x46030840
    ctx->pc = 0x271a10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x271a14: 0xe6210078
    ctx->pc = 0x271a14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x271a18: 0xc6200140
    ctx->pc = 0x271a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271a1c: 0x46002941
    ctx->pc = 0x271a1cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x271a20: 0xe7a50010
    ctx->pc = 0x271a20u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x271a24: 0xc6200144
    ctx->pc = 0x271a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271a28: 0x46001081
    ctx->pc = 0x271a28u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x271a2c: 0xe7a20014
    ctx->pc = 0x271a2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x271a30: 0xc6200148
    ctx->pc = 0x271a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271a34: 0x46000841
    ctx->pc = 0x271a34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x271a38: 0xe7a10018
    ctx->pc = 0x271a38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x271a3c: 0x46052802
    ctx->pc = 0x271a3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x271a40: 0x46021082
    ctx->pc = 0x271a40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x271a44: 0x46020000
    ctx->pc = 0x271a44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x271a48: 0x46010842
    ctx->pc = 0x271a48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x271a4c: 0x46010000
    ctx->pc = 0x271a4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x271a50: 0x0
    ctx->pc = 0x271a50u;
    // NOP
    // 0x271a54: 0x0
    ctx->pc = 0x271a54u;
    // NOP
    // 0x271a58: 0x46000004
    ctx->pc = 0x271a58u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x271a5c: 0x46000032
    ctx->pc = 0x271a5cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271a60: 0x0
    ctx->pc = 0x271a60u;
    // NOP
    // 0x271a64: 0x45030006
    ctx->pc = 0x271A64u;
    {
        const bool branch_taken_0x271a64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x271a64) {
            ctx->pc = 0x271A68u;
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
            ctx->pc = 0x271A80u;
            goto label_271a80;
        }
    }
    ctx->pc = 0x271A6Cu;
    // 0x271a6c: 0x46052b02
    ctx->pc = 0x271a6cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x271a70: 0x46026300
    ctx->pc = 0x271a70u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x271a74: 0xc0ba284
    ctx->pc = 0x271A74u;
    SET_GPR_U32(ctx, 31, 0x271A7Cu);
    ctx->pc = 0x271A78u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271A7Cu; }
    }
    if (ctx->pc != 0x271A7Cu) { return; }
    ctx->pc = 0x271A7Cu;
    // 0x271a7c: 0xe62000d0
    ctx->pc = 0x271a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
label_271a80:
    // 0x271a80: 0x26300140
    ctx->pc = 0x271a80u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 320));
    // 0x271a84: 0x240202d
    ctx->pc = 0x271a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271a88: 0xc09a2e4
    ctx->pc = 0x271A88u;
    SET_GPR_U32(ctx, 31, 0x271A90u);
    ctx->pc = 0x271A8Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x268B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        calc_cam_pyr_0x268b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271A90u; }
    }
    if (ctx->pc != 0x271A90u) { return; }
    ctx->pc = 0x271A90u;
    // 0x271a90: 0x240202d
    ctx->pc = 0x271a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271a94: 0xc09a760
    ctx->pc = 0x271A94u;
    SET_GPR_U32(ctx, 31, 0x271A9Cu);
    ctx->pc = 0x271A98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x269D80u;
    {
        const uint32_t __entryPc = ctx->pc;
        cam_orient_to_0x269d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271A9Cu; }
    }
    if (ctx->pc != 0x271A9Cu) { return; }
    ctx->pc = 0x271A9Cu;
    // 0x271a9c: 0x1000007e
    ctx->pc = 0x271A9Cu;
    {
        const bool branch_taken_0x271a9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x271AA0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 212)));
        if (branch_taken_0x271a9c) {
            ctx->pc = 0x271C98u;
            goto label_271c98;
        }
    }
    ctx->pc = 0x271AA4u;
label_271aa4:
    // 0x271aa4: 0x3c014049
    ctx->pc = 0x271aa4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x271aa8: 0x34210fdb
    ctx->pc = 0x271aa8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x271aac: 0x44816800
    ctx->pc = 0x271aacu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x271ab0: 0xc0b5a46
    ctx->pc = 0x271AB0u;
    SET_GPR_U32(ctx, 31, 0x271AB8u);
    ctx->pc = 0x271AB4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D6918u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddAngle_0x2d6918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271AB8u; }
    }
    if (ctx->pc != 0x271AB8u) { return; }
    ctx->pc = 0x271AB8u;
    // 0x271ab8: 0xe62000b4
    ctx->pc = 0x271ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 180), bits); }
    // 0x271abc: 0x3c014170
    ctx->pc = 0x271abcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16752 << 16));
    // 0x271ac0: 0x44810000
    ctx->pc = 0x271ac0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x271ac4: 0xe62000d0
    ctx->pc = 0x271ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x271ac8: 0x3c03003c
    ctx->pc = 0x271ac8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x271acc: 0x24020001
    ctx->pc = 0x271accu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x271ad0: 0xac6238d4
    ctx->pc = 0x271ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14548), GPR_U32(ctx, 2));
    // 0x271ad4: 0x8e2200d4
    ctx->pc = 0x271ad4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x271ad8: 0x24420001
    ctx->pc = 0x271ad8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x271adc: 0x1000006d
    ctx->pc = 0x271ADCu;
    {
        const bool branch_taken_0x271adc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x271AE0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
        if (branch_taken_0x271adc) {
            ctx->pc = 0x271C94u;
            goto label_271c94;
        }
    }
    ctx->pc = 0x271AE4u;
label_271ae4:
    // 0x271ae4: 0x44800000
    ctx->pc = 0x271ae4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x271ae8: 0x46000832
    ctx->pc = 0x271ae8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271aec: 0x0
    ctx->pc = 0x271aecu;
    // NOP
    // 0x271af0: 0x45030029
    ctx->pc = 0x271AF0u;
    {
        const bool branch_taken_0x271af0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x271af0) {
            ctx->pc = 0x271AF4u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->pc = 0x271B98u;
            goto label_271b98;
        }
    }
    ctx->pc = 0x271AF8u;
    // 0x271af8: 0x3c030031
    ctx->pc = 0x271af8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x271afc: 0x8c62ffbc
    ctx->pc = 0x271afcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x271b00: 0x4400005
    ctx->pc = 0x271B00u;
    {
        const bool branch_taken_0x271b00 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x271B04u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x271b00) {
            ctx->pc = 0x271B18u;
            goto label_271b18;
        }
    }
    ctx->pc = 0x271B08u;
    // 0x271b08: 0x44826800
    ctx->pc = 0x271b08u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x271b0c: 0x46806b60
    ctx->pc = 0x271b0cu;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[13]);
    // 0x271b10: 0x10000008
    ctx->pc = 0x271B10u;
    {
        const bool branch_taken_0x271b10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x271b10) {
            ctx->pc = 0x271B34u;
            goto label_271b34;
        }
    }
    ctx->pc = 0x271B18u;
label_271b18:
    // 0x271b18: 0x8c820000
    ctx->pc = 0x271b18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x271b1c: 0x30430001
    ctx->pc = 0x271b1cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x271b20: 0x21042
    ctx->pc = 0x271b20u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x271b24: 0x621825
    ctx->pc = 0x271b24u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x271b28: 0x44836800
    ctx->pc = 0x271b28u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 3);
    // 0x271b2c: 0x46806b60
    ctx->pc = 0x271b2cu;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[13]);
    // 0x271b30: 0x460d6b40
    ctx->pc = 0x271b30u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
label_271b34:
    // 0x271b34: 0x3c013d4c
    ctx->pc = 0x271b34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15692 << 16));
    // 0x271b38: 0x3421cccd
    ctx->pc = 0x271b38u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x271b3c: 0x44810000
    ctx->pc = 0x271b3cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x271b40: 0x4480a000
    ctx->pc = 0x271b40u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x271b44: 0x46140834
    ctx->pc = 0x271b44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271b48: 0x0
    ctx->pc = 0x271b48u;
    // NOP
    // 0x271b4c: 0x45000009
    ctx->pc = 0x271B4Cu;
    {
        const bool branch_taken_0x271b4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x271B50u;
        ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
        if (branch_taken_0x271b4c) {
            ctx->pc = 0x271B74u;
            goto label_271b74;
        }
    }
    ctx->pc = 0x271B54u;
    // 0x271b54: 0xc0b5a46
    ctx->pc = 0x271B54u;
    SET_GPR_U32(ctx, 31, 0x271B5Cu);
    ctx->pc = 0x271B58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D6918u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddAngle_0x2d6918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271B5Cu; }
    }
    if (ctx->pc != 0x271B5Cu) { return; }
    ctx->pc = 0x271B5Cu;
    // 0x271b5c: 0x4600a036
    ctx->pc = 0x271b5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271b60: 0x0
    ctx->pc = 0x271b60u;
    // NOP
    // 0x271b64: 0x4500000b
    ctx->pc = 0x271B64u;
    {
        const bool branch_taken_0x271b64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x271B68u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 176), bits); }
        if (branch_taken_0x271b64) {
            ctx->pc = 0x271B94u;
            goto label_271b94;
        }
    }
    ctx->pc = 0x271B6Cu;
    // 0x271b6c: 0x10000009
    ctx->pc = 0x271B6Cu;
    {
        const bool branch_taken_0x271b6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x271B70u;
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 176), bits); }
        if (branch_taken_0x271b6c) {
            ctx->pc = 0x271B94u;
            goto label_271b94;
        }
    }
    ctx->pc = 0x271B74u;
label_271b74:
    // 0x271b74: 0xc0b5a3e
    ctx->pc = 0x271B74u;
    SET_GPR_U32(ctx, 31, 0x271B7Cu);
    ctx->pc = 0x271B78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D68F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SubAngle_0x2d68f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271B7Cu; }
    }
    if (ctx->pc != 0x271B7Cu) { return; }
    ctx->pc = 0x271B7Cu;
    // 0x271b7c: 0x44800800
    ctx->pc = 0x271b7cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x271b80: 0x46010036
    ctx->pc = 0x271b80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271b84: 0x0
    ctx->pc = 0x271b84u;
    // NOP
    // 0x271b88: 0x45000002
    ctx->pc = 0x271B88u;
    {
        const bool branch_taken_0x271b88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x271B8Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 176), bits); }
        if (branch_taken_0x271b88) {
            ctx->pc = 0x271B94u;
            goto label_271b94;
        }
    }
    ctx->pc = 0x271B90u;
    // 0x271b90: 0xe62100b0
    ctx->pc = 0x271b90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 176), bits); }
label_271b94:
    // 0x271b94: 0xc62c00b4
    ctx->pc = 0x271b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_271b98:
    // 0x271b98: 0xc0b5a1a
    ctx->pc = 0x271B98u;
    SET_GPR_U32(ctx, 31, 0x271BA0u);
    ctx->pc = 0x271B9Cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[21]);
    ctx->pc = 0x2D6868u;
    {
        const uint32_t __entryPc = ctx->pc;
        FixAngle_0x2d6868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271BA0u; }
    }
    if (ctx->pc != 0x271BA0u) { return; }
    ctx->pc = 0x271BA0u;
    // 0x271ba0: 0x46000046
    ctx->pc = 0x271ba0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x271ba4: 0x44800000
    ctx->pc = 0x271ba4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x271ba8: 0x46000832
    ctx->pc = 0x271ba8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271bac: 0x0
    ctx->pc = 0x271bacu;
    // NOP
    // 0x271bb0: 0x4503002c
    ctx->pc = 0x271BB0u;
    {
        const bool branch_taken_0x271bb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x271bb0) {
            ctx->pc = 0x271BB4u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x271C64u;
            goto label_271c64;
        }
    }
    ctx->pc = 0x271BB8u;
    // 0x271bb8: 0x3c030031
    ctx->pc = 0x271bb8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x271bbc: 0x8c62ffbc
    ctx->pc = 0x271bbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x271bc0: 0x4400005
    ctx->pc = 0x271BC0u;
    {
        const bool branch_taken_0x271bc0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x271BC4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x271bc0) {
            ctx->pc = 0x271BD8u;
            goto label_271bd8;
        }
    }
    ctx->pc = 0x271BC8u;
    // 0x271bc8: 0x44826800
    ctx->pc = 0x271bc8u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x271bcc: 0x46806b60
    ctx->pc = 0x271bccu;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[13]);
    // 0x271bd0: 0x10000008
    ctx->pc = 0x271BD0u;
    {
        const bool branch_taken_0x271bd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x271bd0) {
            ctx->pc = 0x271BF4u;
            goto label_271bf4;
        }
    }
    ctx->pc = 0x271BD8u;
label_271bd8:
    // 0x271bd8: 0x8c820000
    ctx->pc = 0x271bd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x271bdc: 0x30430001
    ctx->pc = 0x271bdcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x271be0: 0x21042
    ctx->pc = 0x271be0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x271be4: 0x621825
    ctx->pc = 0x271be4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x271be8: 0x44836800
    ctx->pc = 0x271be8u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 3);
    // 0x271bec: 0x46806b60
    ctx->pc = 0x271becu;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[13]);
    // 0x271bf0: 0x460d6b40
    ctx->pc = 0x271bf0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
label_271bf4:
    // 0x271bf4: 0x3c013d0e
    ctx->pc = 0x271bf4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15630 << 16));
    // 0x271bf8: 0x3421fa36
    ctx->pc = 0x271bf8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 64054));
    // 0x271bfc: 0x44810000
    ctx->pc = 0x271bfcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x271c00: 0x4480a000
    ctx->pc = 0x271c00u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x271c04: 0x46140834
    ctx->pc = 0x271c04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271c08: 0x0
    ctx->pc = 0x271c08u;
    // NOP
    // 0x271c0c: 0x45000009
    ctx->pc = 0x271C0Cu;
    {
        const bool branch_taken_0x271c0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x271C10u;
        ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
        if (branch_taken_0x271c0c) {
            ctx->pc = 0x271C34u;
            goto label_271c34;
        }
    }
    ctx->pc = 0x271C14u;
    // 0x271c14: 0xc0b5a46
    ctx->pc = 0x271C14u;
    SET_GPR_U32(ctx, 31, 0x271C1Cu);
    ctx->pc = 0x271C18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D6918u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddAngle_0x2d6918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271C1Cu; }
    }
    if (ctx->pc != 0x271C1Cu) { return; }
    ctx->pc = 0x271C1Cu;
    // 0x271c1c: 0xe62000b4
    ctx->pc = 0x271c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 180), bits); }
    // 0x271c20: 0xc0b5a1a
    ctx->pc = 0x271C20u;
    SET_GPR_U32(ctx, 31, 0x271C28u);
    ctx->pc = 0x271C24u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    ctx->pc = 0x2D6868u;
    {
        const uint32_t __entryPc = ctx->pc;
        FixAngle_0x2d6868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271C28u; }
    }
    if (ctx->pc != 0x271C28u) { return; }
    ctx->pc = 0x271C28u;
    // 0x271c28: 0x4600a036
    ctx->pc = 0x271c28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271c2c: 0x10000009
    ctx->pc = 0x271C2Cu;
    {
        const bool branch_taken_0x271c2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x271c2c) {
            ctx->pc = 0x271C54u;
            goto label_271c54;
        }
    }
    ctx->pc = 0x271C34u;
label_271c34:
    // 0x271c34: 0xc0b5a3e
    ctx->pc = 0x271C34u;
    SET_GPR_U32(ctx, 31, 0x271C3Cu);
    ctx->pc = 0x271C38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D68F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SubAngle_0x2d68f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271C3Cu; }
    }
    if (ctx->pc != 0x271C3Cu) { return; }
    ctx->pc = 0x271C3Cu;
    // 0x271c3c: 0xe62000b4
    ctx->pc = 0x271c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 180), bits); }
    // 0x271c40: 0xc0b5a1a
    ctx->pc = 0x271C40u;
    SET_GPR_U32(ctx, 31, 0x271C48u);
    ctx->pc = 0x271C44u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    ctx->pc = 0x2D6868u;
    {
        const uint32_t __entryPc = ctx->pc;
        FixAngle_0x2d6868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271C48u; }
    }
    if (ctx->pc != 0x271C48u) { return; }
    ctx->pc = 0x271C48u;
    // 0x271c48: 0x44800800
    ctx->pc = 0x271c48u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x271c4c: 0x46010036
    ctx->pc = 0x271c4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271c50: 0x0
    ctx->pc = 0x271c50u;
    // NOP
label_271c54:
    // 0x271c54: 0x45030001
    ctx->pc = 0x271C54u;
    {
        const bool branch_taken_0x271c54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x271c54) {
            ctx->pc = 0x271C58u;
            { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 180), bits); }
            ctx->pc = 0x271C5Cu;
            goto label_271c5c;
        }
    }
    ctx->pc = 0x271C5Cu;
label_271c5c:
    // 0x271c5c: 0xc62100b0
    ctx->pc = 0x271c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271c60: 0x44800000
    ctx->pc = 0x271c60u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_271c64:
    // 0x271c64: 0x46000832
    ctx->pc = 0x271c64u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271c68: 0x0
    ctx->pc = 0x271c68u;
    // NOP
    // 0x271c6c: 0x4502000a
    ctx->pc = 0x271C6Cu;
    {
        const bool branch_taken_0x271c6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x271c6c) {
            ctx->pc = 0x271C70u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->pc = 0x271C98u;
            goto label_271c98;
        }
    }
    ctx->pc = 0x271C74u;
    // 0x271c74: 0xc62000b4
    ctx->pc = 0x271c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271c78: 0x46150032
    ctx->pc = 0x271c78u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271c7c: 0x0
    ctx->pc = 0x271c7cu;
    // NOP
    // 0x271c80: 0x45000004
    ctx->pc = 0x271C80u;
    {
        const bool branch_taken_0x271c80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x271C84u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x271c80) {
            ctx->pc = 0x271C94u;
            goto label_271c94;
        }
    }
    ctx->pc = 0x271C88u;
    // 0x271c88: 0x10000002
    ctx->pc = 0x271C88u;
    {
        const bool branch_taken_0x271c88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x271C8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
        if (branch_taken_0x271c88) {
            ctx->pc = 0x271C94u;
            goto label_271c94;
        }
    }
    ctx->pc = 0x271C90u;
label_271c90:
    // 0x271c90: 0xae2000b8
    ctx->pc = 0x271c90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
label_271c94:
    // 0x271c94: 0x8e2300d4
    ctx->pc = 0x271c94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_271c98:
    // 0x271c98: 0x24020001
    ctx->pc = 0x271c98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x271c9c: 0x10620029
    ctx->pc = 0x271C9Cu;
    {
        const bool branch_taken_0x271c9c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x271CA0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 48));
        if (branch_taken_0x271c9c) {
            ctx->pc = 0x271D44u;
            goto label_271d44;
        }
    }
    ctx->pc = 0x271CA4u;
    // 0x271ca4: 0x8e220100
    ctx->pc = 0x271ca4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x271ca8: 0xc4400040
    ctx->pc = 0x271ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271cac: 0xe6200070
    ctx->pc = 0x271cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x271cb0: 0xc4400044
    ctx->pc = 0x271cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271cb4: 0xe6200074
    ctx->pc = 0x271cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x271cb8: 0xc4400048
    ctx->pc = 0x271cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271cbc: 0xe6200078
    ctx->pc = 0x271cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x271cc0: 0x200202d
    ctx->pc = 0x271cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271cc4: 0xc0b5ae8
    ctx->pc = 0x271CC4u;
    SET_GPR_U32(ctx, 31, 0x271CCCu);
    ctx->pc = 0x271CC8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 176));
    ctx->pc = 0x2D6BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateYPRMatrix_0x2d6ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271CCCu; }
    }
    if (ctx->pc != 0x271CCCu) { return; }
    ctx->pc = 0x271CCCu;
    // 0x271ccc: 0xafa00020
    ctx->pc = 0x271cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x271cd0: 0xafa00024
    ctx->pc = 0x271cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x271cd4: 0xc62000d0
    ctx->pc = 0x271cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271cd8: 0xe7a00028
    ctx->pc = 0x271cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x271cdc: 0x27a40020
    ctx->pc = 0x271cdcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x271ce0: 0x27a50010
    ctx->pc = 0x271ce0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    // 0x271ce4: 0xc0b57a2
    ctx->pc = 0x271CE4u;
    SET_GPR_U32(ctx, 31, 0x271CECu);
    ctx->pc = 0x271CE8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldVector_0x2d5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271CECu; }
    }
    if (ctx->pc != 0x271CECu) { return; }
    ctx->pc = 0x271CECu;
    // 0x271cec: 0xc6200070
    ctx->pc = 0x271cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271cf0: 0xc7a10010
    ctx->pc = 0x271cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271cf4: 0x46010000
    ctx->pc = 0x271cf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x271cf8: 0xe6200140
    ctx->pc = 0x271cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 320), bits); }
    // 0x271cfc: 0xc6200074
    ctx->pc = 0x271cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271d00: 0xc7a10014
    ctx->pc = 0x271d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271d04: 0x46010000
    ctx->pc = 0x271d04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x271d08: 0xe6200144
    ctx->pc = 0x271d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 324), bits); }
    // 0x271d0c: 0xc6200078
    ctx->pc = 0x271d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271d10: 0xc7a10018
    ctx->pc = 0x271d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271d14: 0x46010000
    ctx->pc = 0x271d14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x271d18: 0xe6200148
    ctx->pc = 0x271d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
    // 0x271d1c: 0x3c02003c
    ctx->pc = 0x271d1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x271d20: 0x8c4238d4
    ctx->pc = 0x271d20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14548)));
    // 0x271d24: 0x10400004
    ctx->pc = 0x271D24u;
    {
        const bool branch_taken_0x271d24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x271D28u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 112));
        if (branch_taken_0x271d24) {
            ctx->pc = 0x271D38u;
            goto label_271d38;
        }
    }
    ctx->pc = 0x271D2Cu;
    // 0x271d2c: 0x26250140
    ctx->pc = 0x271d2cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 320));
    // 0x271d30: 0xc099c08
    ctx->pc = 0x271D30u;
    SET_GPR_U32(ctx, 31, 0x271D38u);
    ctx->pc = 0x271D34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x267020u;
    {
        const uint32_t __entryPc = ctx->pc;
        fix_radius_0x267020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271D38u; }
    }
    if (ctx->pc != 0x271D38u) { return; }
    ctx->pc = 0x271D38u;
label_271d38:
    // 0x271d38: 0x240202d
    ctx->pc = 0x271d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271d3c: 0xc09a760
    ctx->pc = 0x271D3Cu;
    SET_GPR_U32(ctx, 31, 0x271D44u);
    ctx->pc = 0x271D40u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 320));
    ctx->pc = 0x269D80u;
    {
        const uint32_t __entryPc = ctx->pc;
        cam_orient_to_0x269d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271D44u; }
    }
    if (ctx->pc != 0x271D44u) { return; }
    ctx->pc = 0x271D44u;
label_271d44:
    // 0x271d44: 0xdfbf00a0
    ctx->pc = 0x271d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_271d48:
    // 0x271d48: 0xdfb20090
    ctx->pc = 0x271d48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x271d4c: 0xdfb10080
    ctx->pc = 0x271d4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x271d50: 0xdfb00070
    ctx->pc = 0x271d50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x271d54: 0xc7b500b8
    ctx->pc = 0x271d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x271d58: 0xc7b400b0
    ctx->pc = 0x271d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x271d5c: 0x3e00008
    ctx->pc = 0x271D5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271D60u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2718A0u: goto label_2718a0;
            case 0x2718DCu: goto label_2718dc;
            case 0x2718ECu: goto label_2718ec;
            case 0x271900u: goto label_271900;
            case 0x271984u: goto label_271984;
            case 0x2719C8u: goto label_2719c8;
            case 0x271A80u: goto label_271a80;
            case 0x271AA4u: goto label_271aa4;
            case 0x271AE4u: goto label_271ae4;
            case 0x271B18u: goto label_271b18;
            case 0x271B34u: goto label_271b34;
            case 0x271B74u: goto label_271b74;
            case 0x271B94u: goto label_271b94;
            case 0x271B98u: goto label_271b98;
            case 0x271BD8u: goto label_271bd8;
            case 0x271BF4u: goto label_271bf4;
            case 0x271C34u: goto label_271c34;
            case 0x271C54u: goto label_271c54;
            case 0x271C5Cu: goto label_271c5c;
            case 0x271C64u: goto label_271c64;
            case 0x271C90u: goto label_271c90;
            case 0x271C94u: goto label_271c94;
            case 0x271C98u: goto label_271c98;
            case 0x271D38u: goto label_271d38;
            case 0x271D44u: goto label_271d44;
            case 0x271D48u: goto label_271d48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x271D64u;
}
