#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: NewCamLimitPlayerDpos
// Address: 0x216390 - 0x21671c
void NewCamLimitPlayerDpos_0x216390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x216390u;

    // 0x216390: 0x27bdfef0
    ctx->pc = 0x216390u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x216394: 0xffbf00f0
    ctx->pc = 0x216394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x216398: 0xffb700e0
    ctx->pc = 0x216398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x21639c: 0xffb600d0
    ctx->pc = 0x21639cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x2163a0: 0xffb500c0
    ctx->pc = 0x2163a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x2163a4: 0xffb400b0
    ctx->pc = 0x2163a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x2163a8: 0xffb300a0
    ctx->pc = 0x2163a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x2163ac: 0xffb20090
    ctx->pc = 0x2163acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x2163b0: 0xffb10080
    ctx->pc = 0x2163b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x2163b4: 0xffb00070
    ctx->pc = 0x2163b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2163b8: 0xe7b50108
    ctx->pc = 0x2163b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2163bc: 0xe7b40100
    ctx->pc = 0x2163bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2163c0: 0x80a02d
    ctx->pc = 0x2163c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2163c4: 0xa0902d
    ctx->pc = 0x2163c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2163c8: 0xc0882d
    ctx->pc = 0x2163c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2163cc: 0xe0b82d
    ctx->pc = 0x2163ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2163d0: 0x24160001
    ctx->pc = 0x2163d0u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2163d4: 0xc68300dc
    ctx->pc = 0x2163d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2163d8: 0x460018c7
    ctx->pc = 0x2163d8u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x2163dc: 0xc68500e0
    ctx->pc = 0x2163dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2163e0: 0x46051942
    ctx->pc = 0x2163e0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x2163e4: 0xc68000a4
    ctx->pc = 0x2163e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2163e8: 0x46002940
    ctx->pc = 0x2163e8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2163ec: 0xe7a50020
    ctx->pc = 0x2163ecu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2163f0: 0xc68400e4
    ctx->pc = 0x2163f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2163f4: 0x46041902
    ctx->pc = 0x2163f4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2163f8: 0xc68000a8
    ctx->pc = 0x2163f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2163fc: 0x46002100
    ctx->pc = 0x2163fcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x216400: 0xe7a40024
    ctx->pc = 0x216400u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x216404: 0xc68000e8
    ctx->pc = 0x216404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216408: 0x460018c2
    ctx->pc = 0x216408u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x21640c: 0xc68000ac
    ctx->pc = 0x21640cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216410: 0x460018c0
    ctx->pc = 0x216410u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x216414: 0xe7a30028
    ctx->pc = 0x216414u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x216418: 0x26530050
    ctx->pc = 0x216418u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 18), 80));
    // 0x21641c: 0xc6420050
    ctx->pc = 0x21641cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x216420: 0xc6280000
    ctx->pc = 0x216420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x216424: 0x46081080
    ctx->pc = 0x216424u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
    // 0x216428: 0xe7a20000
    ctx->pc = 0x216428u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x21642c: 0xc6610004
    ctx->pc = 0x21642cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x216430: 0xc6260004
    ctx->pc = 0x216430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x216434: 0x46060840
    ctx->pc = 0x216434u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x216438: 0xe7a10004
    ctx->pc = 0x216438u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x21643c: 0xc6600008
    ctx->pc = 0x21643cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216440: 0xc6270008
    ctx->pc = 0x216440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x216444: 0x46070000
    ctx->pc = 0x216444u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x216448: 0x46051081
    ctx->pc = 0x216448u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x21644c: 0xe7a20000
    ctx->pc = 0x21644cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x216450: 0x46040841
    ctx->pc = 0x216450u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x216454: 0xe7a10004
    ctx->pc = 0x216454u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x216458: 0x46030001
    ctx->pc = 0x216458u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x21645c: 0xe7a00008
    ctx->pc = 0x21645cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x216460: 0x26530070
    ctx->pc = 0x216460u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 18), 112));
    // 0x216464: 0xc6420070
    ctx->pc = 0x216464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x216468: 0x46081080
    ctx->pc = 0x216468u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
    // 0x21646c: 0xe7a20010
    ctx->pc = 0x21646cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x216470: 0xc6600004
    ctx->pc = 0x216470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216474: 0x46060000
    ctx->pc = 0x216474u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x216478: 0xe7a00014
    ctx->pc = 0x216478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x21647c: 0xc6610008
    ctx->pc = 0x21647cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x216480: 0x46070840
    ctx->pc = 0x216480u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x216484: 0x46051081
    ctx->pc = 0x216484u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x216488: 0xe7a20010
    ctx->pc = 0x216488u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x21648c: 0x46040001
    ctx->pc = 0x21648cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x216490: 0xe7a00014
    ctx->pc = 0x216490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x216494: 0x46030841
    ctx->pc = 0x216494u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x216498: 0xe7a10018
    ctx->pc = 0x216498u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x21649c: 0x46003546
    ctx->pc = 0x21649cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[6]);
    // 0x2164a0: 0xa82d
    ctx->pc = 0x2164a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2164a4: 0x24020003
    ctx->pc = 0x2164a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_2164a8:
    // 0x2164a8: 0x16a20007
    ctx->pc = 0x2164A8u;
    {
        const bool branch_taken_0x2164a8 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 2));
        ctx->pc = 0x2164ACu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 4));
        if (branch_taken_0x2164a8) {
            ctx->pc = 0x2164C8u;
            goto label_2164c8;
        }
    }
    ctx->pc = 0x2164B0u;
    // 0x2164b0: 0xc7a00000
    ctx->pc = 0x2164b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2164b4: 0xe7a00010
    ctx->pc = 0x2164b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2164b8: 0xc7a00004
    ctx->pc = 0x2164b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2164bc: 0xe7a00014
    ctx->pc = 0x2164bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2164c0: 0xc7a00008
    ctx->pc = 0x2164c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2164c4: 0xe7a00018
    ctx->pc = 0x2164c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2164c8:
    // 0x2164c8: 0x2828021
    ctx->pc = 0x2164c8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2164cc: 0xc7a20010
    ctx->pc = 0x2164ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2164d0: 0xc6030040
    ctx->pc = 0x2164d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2164d4: 0x46031082
    ctx->pc = 0x2164d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2164d8: 0xc7a00014
    ctx->pc = 0x2164d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2164dc: 0xc6010044
    ctx->pc = 0x2164dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2164e0: 0x46010002
    ctx->pc = 0x2164e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2164e4: 0x46001080
    ctx->pc = 0x2164e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2164e8: 0xc7a00018
    ctx->pc = 0x2164e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2164ec: 0xc6010048
    ctx->pc = 0x2164ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2164f0: 0x46010002
    ctx->pc = 0x2164f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2164f4: 0x46001080
    ctx->pc = 0x2164f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2164f8: 0x4480a000
    ctx->pc = 0x2164f8u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x2164fc: 0x4602a034
    ctx->pc = 0x2164fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x216500: 0x0
    ctx->pc = 0x216500u;
    // NOP
    // 0x216504: 0x45020073
    ctx->pc = 0x216504u;
    {
        const bool branch_taken_0x216504 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x216504) {
            ctx->pc = 0x216508u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x2166D4u;
            goto label_2166d4;
        }
    }
    ctx->pc = 0x21650Cu;
    // 0x21650c: 0x24160005
    ctx->pc = 0x21650cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 5));
    // 0x216510: 0xe7a30050
    ctx->pc = 0x216510u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x216514: 0xe7b40054
    ctx->pc = 0x216514u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x216518: 0xe7a10058
    ctx->pc = 0x216518u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x21651c: 0xc0b58a4
    ctx->pc = 0x21651Cu;
    SET_GPR_U32(ctx, 31, 0x216524u);
    ctx->pc = 0x216520u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216524u; }
    }
    if (ctx->pc != 0x216524u) { return; }
    ctx->pc = 0x216524u;
    // 0x216524: 0xc6220000
    ctx->pc = 0x216524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x216528: 0xc6000040
    ctx->pc = 0x216528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21652c: 0x46001082
    ctx->pc = 0x21652cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x216530: 0xc6200004
    ctx->pc = 0x216530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216534: 0xc6010044
    ctx->pc = 0x216534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x216538: 0x46010002
    ctx->pc = 0x216538u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21653c: 0x46001080
    ctx->pc = 0x21653cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x216540: 0xc6200008
    ctx->pc = 0x216540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216544: 0xc6010048
    ctx->pc = 0x216544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x216548: 0x46010002
    ctx->pc = 0x216548u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21654c: 0x46001080
    ctx->pc = 0x21654cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x216550: 0x4602a034
    ctx->pc = 0x216550u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x216554: 0x0
    ctx->pc = 0x216554u;
    // NOP
    // 0x216558: 0x4502005e
    ctx->pc = 0x216558u;
    {
        const bool branch_taken_0x216558 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x216558) {
            ctx->pc = 0x21655Cu;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x2166D4u;
            goto label_2166d4;
        }
    }
    ctx->pc = 0x216560u;
    // 0x216560: 0x16e00005
    ctx->pc = 0x216560u;
    {
        const bool branch_taken_0x216560 = (GPR_U32(ctx, 23) != GPR_U32(ctx, 0));
        ctx->pc = 0x216564u;
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        if (branch_taken_0x216560) {
            ctx->pc = 0x216578u;
            goto label_216578;
        }
    }
    ctx->pc = 0x216568u;
    // 0x216568: 0xe6350000
    ctx->pc = 0x216568u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x21656c: 0xe6350004
    ctx->pc = 0x21656cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x216570: 0x10000057
    ctx->pc = 0x216570u;
    {
        const bool branch_taken_0x216570 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x216574u;
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        if (branch_taken_0x216570) {
            ctx->pc = 0x2166D0u;
            goto label_2166d0;
        }
    }
    ctx->pc = 0x216578u;
label_216578:
    // 0x216578: 0xc6260000
    ctx->pc = 0x216578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x21657c: 0xc7a20050
    ctx->pc = 0x21657cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x216580: 0x46023042
    ctx->pc = 0x216580u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x216584: 0xc6270004
    ctx->pc = 0x216584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x216588: 0xc7a30054
    ctx->pc = 0x216588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21658c: 0x46033802
    ctx->pc = 0x21658cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x216590: 0x46000840
    ctx->pc = 0x216590u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x216594: 0xc6250008
    ctx->pc = 0x216594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x216598: 0xc7a40058
    ctx->pc = 0x216598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21659c: 0x46042802
    ctx->pc = 0x21659cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2165a0: 0x46000840
    ctx->pc = 0x2165a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2165a4: 0x46000847
    ctx->pc = 0x2165a4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2165a8: 0x46020882
    ctx->pc = 0x2165a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2165ac: 0x46061080
    ctx->pc = 0x2165acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x2165b0: 0xe6220000
    ctx->pc = 0x2165b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2165b4: 0x460308c2
    ctx->pc = 0x2165b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2165b8: 0x460718c0
    ctx->pc = 0x2165b8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x2165bc: 0xe6230004
    ctx->pc = 0x2165bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2165c0: 0x46040842
    ctx->pc = 0x2165c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2165c4: 0x46050840
    ctx->pc = 0x2165c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x2165c8: 0xe6210008
    ctx->pc = 0x2165c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2165cc: 0xc6600000
    ctx->pc = 0x2165ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2165d0: 0x46020000
    ctx->pc = 0x2165d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2165d4: 0xe7a00030
    ctx->pc = 0x2165d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2165d8: 0xc6600004
    ctx->pc = 0x2165d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2165dc: 0x46030000
    ctx->pc = 0x2165dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2165e0: 0xe7a00034
    ctx->pc = 0x2165e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2165e4: 0xc6600008
    ctx->pc = 0x2165e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2165e8: 0x46010000
    ctx->pc = 0x2165e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2165ec: 0xe7a00038
    ctx->pc = 0x2165ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2165f0: 0x260202d
    ctx->pc = 0x2165f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2165f4: 0x27a50030
    ctx->pc = 0x2165f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2165f8: 0x27a60040
    ctx->pc = 0x2165f8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 64));
    // 0x2165fc: 0xc087ba4
    ctx->pc = 0x2165FCu;
    SET_GPR_U32(ctx, 31, 0x216604u);
    ctx->pc = 0x216600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x21EE90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerWallCollide_0x21ee90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216604u; }
    }
    if (ctx->pc != 0x216604u) { return; }
    ctx->pc = 0x216604u;
    // 0x216604: 0x5440000b
    ctx->pc = 0x216604u;
    {
        const bool branch_taken_0x216604 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x216604) {
            ctx->pc = 0x216608u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x216634u;
            goto label_216634;
        }
    }
    ctx->pc = 0x21660Cu;
    // 0x21660c: 0x240202d
    ctx->pc = 0x21660cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216610: 0x260282d
    ctx->pc = 0x216610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216614: 0x220302d
    ctx->pc = 0x216614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216618: 0xc64c0828
    ctx->pc = 0x216618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21661c: 0xc64d082c
    ctx->pc = 0x21661cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x216620: 0xc0914a4
    ctx->pc = 0x216620u;
    SET_GPR_U32(ctx, 31, 0x216628u);
    ctx->pc = 0x216624u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x245290u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerCollideFloor_0x245290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216628u; }
    }
    if (ctx->pc != 0x216628u) { return; }
    ctx->pc = 0x216628u;
    // 0x216628: 0x1c400005
    ctx->pc = 0x216628u;
    {
        const bool branch_taken_0x216628 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x21662Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 4));
        if (branch_taken_0x216628) {
            ctx->pc = 0x216640u;
            goto label_216640;
        }
    }
    ctx->pc = 0x216630u;
    // 0x216630: 0xae200000
    ctx->pc = 0x216630u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_216634:
    // 0x216634: 0xae200004
    ctx->pc = 0x216634u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x216638: 0xae200008
    ctx->pc = 0x216638u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x21663c: 0x151100
    ctx->pc = 0x21663cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 4));
label_216640:
    // 0x216640: 0x2821021
    ctx->pc = 0x216640u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x216644: 0xc6210000
    ctx->pc = 0x216644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x216648: 0xc4420040
    ctx->pc = 0x216648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21664c: 0x46020882
    ctx->pc = 0x21664cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x216650: 0xc6240004
    ctx->pc = 0x216650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x216654: 0xc4400044
    ctx->pc = 0x216654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216658: 0x46002002
    ctx->pc = 0x216658u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x21665c: 0x46001080
    ctx->pc = 0x21665cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x216660: 0xc6230008
    ctx->pc = 0x216660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x216664: 0xc4400048
    ctx->pc = 0x216664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216668: 0x46001802
    ctx->pc = 0x216668u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x21666c: 0x46001080
    ctx->pc = 0x21666cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x216670: 0x46021082
    ctx->pc = 0x216670u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x216674: 0x46010842
    ctx->pc = 0x216674u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x216678: 0x46042102
    ctx->pc = 0x216678u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x21667c: 0x46040840
    ctx->pc = 0x21667cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x216680: 0x460318c2
    ctx->pc = 0x216680u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x216684: 0x46030840
    ctx->pc = 0x216684u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x216688: 0x3c020032
    ctx->pc = 0x216688u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21668c: 0xc440f7b8
    ctx->pc = 0x21668cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216690: 0x46000002
    ctx->pc = 0x216690u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x216694: 0x46000842
    ctx->pc = 0x216694u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x216698: 0x46020834
    ctx->pc = 0x216698u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21669c: 0x0
    ctx->pc = 0x21669cu;
    // NOP
    // 0x2166a0: 0x45000004
    ctx->pc = 0x2166A0u;
    {
        const bool branch_taken_0x2166a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2166A4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x2166a0) {
            ctx->pc = 0x2166B4u;
            goto label_2166b4;
        }
    }
    ctx->pc = 0x2166A8u;
    // 0x2166a8: 0xae200000
    ctx->pc = 0x2166a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2166ac: 0xae200004
    ctx->pc = 0x2166acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2166b0: 0xae200008
    ctx->pc = 0x2166b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_2166b4:
    // 0x2166b4: 0x8c424860
    ctx->pc = 0x2166b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 18528)));
    // 0x2166b8: 0x10400003
    ctx->pc = 0x2166B8u;
    {
        const bool branch_taken_0x2166b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2166BCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x2166b8) {
            ctx->pc = 0x2166C8u;
            goto label_2166c8;
        }
    }
    ctx->pc = 0x2166C0u;
    // 0x2166c0: 0x10000002
    ctx->pc = 0x2166C0u;
    {
        const bool branch_taken_0x2166c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2166C4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 18532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x2166c0) {
            ctx->pc = 0x2166CCu;
            goto label_2166cc;
        }
    }
    ctx->pc = 0x2166C8u;
label_2166c8:
    // 0x2166c8: 0xc640088c
    ctx->pc = 0x2166c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2166cc:
    // 0x2166cc: 0xe64008a4
    ctx->pc = 0x2166ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2212), bits); }
label_2166d0:
    // 0x2166d0: 0x26b50001
    ctx->pc = 0x2166d0u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
label_2166d4:
    // 0x2166d4: 0x2aa20004
    ctx->pc = 0x2166d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), 4));
    // 0x2166d8: 0x1440ff73
    ctx->pc = 0x2166D8u;
    {
        const bool branch_taken_0x2166d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2166DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2166d8) {
            ctx->pc = 0x2164A8u;
            goto label_2164a8;
        }
    }
    ctx->pc = 0x2166E0u;
    // 0x2166e0: 0xe6350004
    ctx->pc = 0x2166e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2166e4: 0x2c0102d
    ctx->pc = 0x2166e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2166e8: 0xdfbf00f0
    ctx->pc = 0x2166e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2166ec: 0xdfb700e0
    ctx->pc = 0x2166ecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2166f0: 0xdfb600d0
    ctx->pc = 0x2166f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2166f4: 0xdfb500c0
    ctx->pc = 0x2166f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2166f8: 0xdfb400b0
    ctx->pc = 0x2166f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2166fc: 0xdfb300a0
    ctx->pc = 0x2166fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x216700: 0xdfb20090
    ctx->pc = 0x216700u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x216704: 0xdfb10080
    ctx->pc = 0x216704u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x216708: 0xdfb00070
    ctx->pc = 0x216708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21670c: 0xc7b50108
    ctx->pc = 0x21670cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x216710: 0xc7b40100
    ctx->pc = 0x216710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x216714: 0x3e00008
    ctx->pc = 0x216714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216718u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2164A8u: goto label_2164a8;
            case 0x2164C8u: goto label_2164c8;
            case 0x216578u: goto label_216578;
            case 0x216634u: goto label_216634;
            case 0x216640u: goto label_216640;
            case 0x2166B4u: goto label_2166b4;
            case 0x2166C8u: goto label_2166c8;
            case 0x2166CCu: goto label_2166cc;
            case 0x2166D0u: goto label_2166d0;
            case 0x2166D4u: goto label_2166d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21671Cu;
}
