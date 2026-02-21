#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: place_logic12
// Address: 0x254020 - 0x25433c
void place_logic12_0x254020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x254020u;

    // 0x254020: 0x27bdff40
    ctx->pc = 0x254020u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x254024: 0xffbf00b0
    ctx->pc = 0x254024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x254028: 0xffb200a0
    ctx->pc = 0x254028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x25402c: 0xffb10090
    ctx->pc = 0x25402cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
    // 0x254030: 0xffb00080
    ctx->pc = 0x254030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x254034: 0x80882d
    ctx->pc = 0x254034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254038: 0xa0902d
    ctx->pc = 0x254038u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25403c: 0x240303b0
    ctx->pc = 0x25403cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x254040: 0x2431818
    ctx->pc = 0x254040u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x254044: 0x3c020033
    ctx->pc = 0x254044u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x254048: 0x2442dfd0
    ctx->pc = 0x254048u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x25404c: 0x628021
    ctx->pc = 0x25404cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x254050: 0xae000330
    ctx->pc = 0x254050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 0));
    // 0x254054: 0x82230004
    ctx->pc = 0x254054u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x254058: 0x10600005
    ctx->pc = 0x254058u;
    {
        const bool branch_taken_0x254058 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x25405Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x254058) {
            ctx->pc = 0x254070u;
            goto label_254070;
        }
    }
    ctx->pc = 0x254060u;
    // 0x254060: 0x1062004b
    ctx->pc = 0x254060u;
    {
        const bool branch_taken_0x254060 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x254064u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x254060) {
            ctx->pc = 0x254190u;
            goto label_254190;
        }
    }
    ctx->pc = 0x254068u;
    // 0x254068: 0x10000090
    ctx->pc = 0x254068u;
    {
        const bool branch_taken_0x254068 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25406Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 756), bits); }
        if (branch_taken_0x254068) {
            ctx->pc = 0x2542ACu;
            goto label_2542ac;
        }
    }
    ctx->pc = 0x254070u;
label_254070:
    // 0x254070: 0xc6000040
    ctx->pc = 0x254070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254074: 0xe7a00040
    ctx->pc = 0x254074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x254078: 0xc6000044
    ctx->pc = 0x254078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25407c: 0xe7a00044
    ctx->pc = 0x25407cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x254080: 0xc6000048
    ctx->pc = 0x254080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254084: 0xe7a00048
    ctx->pc = 0x254084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x254088: 0xc6210010
    ctx->pc = 0x254088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25408c: 0x3c013fc9
    ctx->pc = 0x25408cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x254090: 0x34210fdb
    ctx->pc = 0x254090u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x254094: 0x44810000
    ctx->pc = 0x254094u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x254098: 0x46000840
    ctx->pc = 0x254098u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25409c: 0x3c014049
    ctx->pc = 0x25409cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x2540a0: 0x34210fdb
    ctx->pc = 0x2540a0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2540a4: 0x44810000
    ctx->pc = 0x2540a4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2540a8: 0x46010034
    ctx->pc = 0x2540a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2540ac: 0x0
    ctx->pc = 0x2540acu;
    // NOP
    // 0x2540b0: 0x45020006
    ctx->pc = 0x2540B0u;
    {
        const bool branch_taken_0x2540b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2540b0) {
            ctx->pc = 0x2540B4u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x2540CCu;
            goto label_2540cc;
        }
    }
    ctx->pc = 0x2540B8u;
    // 0x2540b8: 0x3c0140c9
    ctx->pc = 0x2540b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2540bc: 0x34210fdb
    ctx->pc = 0x2540bcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2540c0: 0x44810000
    ctx->pc = 0x2540c0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2540c4: 0x10000010
    ctx->pc = 0x2540C4u;
    {
        const bool branch_taken_0x2540c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2540C8u;
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x2540c4) {
            ctx->pc = 0x254108u;
            goto label_254108;
        }
    }
    ctx->pc = 0x2540CCu;
label_2540cc:
    // 0x2540cc: 0x3c013fc9
    ctx->pc = 0x2540ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x2540d0: 0x34210fdb
    ctx->pc = 0x2540d0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2540d4: 0x44810800
    ctx->pc = 0x2540d4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2540d8: 0x46010040
    ctx->pc = 0x2540d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2540dc: 0x3c01c049
    ctx->pc = 0x2540dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x2540e0: 0x34210fdb
    ctx->pc = 0x2540e0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2540e4: 0x44810000
    ctx->pc = 0x2540e4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2540e8: 0x46000836
    ctx->pc = 0x2540e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2540ec: 0x0
    ctx->pc = 0x2540ecu;
    // NOP
    // 0x2540f0: 0x45020006
    ctx->pc = 0x2540F0u;
    {
        const bool branch_taken_0x2540f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2540f0) {
            ctx->pc = 0x2540F4u;
            WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
            ctx->pc = 0x25410Cu;
            goto label_25410c;
        }
    }
    ctx->pc = 0x2540F8u;
    // 0x2540f8: 0x3c0140c9
    ctx->pc = 0x2540f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2540fc: 0x34210fdb
    ctx->pc = 0x2540fcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x254100: 0x44810000
    ctx->pc = 0x254100u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x254104: 0x46000840
    ctx->pc = 0x254104u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_254108:
    // 0x254108: 0xafa00060
    ctx->pc = 0x254108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_25410c:
    // 0x25410c: 0xe7a10064
    ctx->pc = 0x25410cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x254110: 0xafa00068
    ctx->pc = 0x254110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x254114: 0x3a0202d
    ctx->pc = 0x254114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254118: 0xc0b5ae8
    ctx->pc = 0x254118u;
    SET_GPR_U32(ctx, 31, 0x254120u);
    ctx->pc = 0x25411Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x2D6BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateYPRMatrix_0x2d6ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254120u; }
    }
    if (ctx->pc != 0x254120u) { return; }
    ctx->pc = 0x254120u;
    // 0x254120: 0xafa00070
    ctx->pc = 0x254120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x254124: 0xafa00074
    ctx->pc = 0x254124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x254128: 0x3c014060
    ctx->pc = 0x254128u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16480 << 16));
    // 0x25412c: 0x44810000
    ctx->pc = 0x25412cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x254130: 0xe7a00078
    ctx->pc = 0x254130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x254134: 0x27a40070
    ctx->pc = 0x254134u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 112));
    // 0x254138: 0x27a50050
    ctx->pc = 0x254138u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    // 0x25413c: 0xc0b57a2
    ctx->pc = 0x25413Cu;
    SET_GPR_U32(ctx, 31, 0x254144u);
    ctx->pc = 0x254140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldVector_0x2d5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254144u; }
    }
    if (ctx->pc != 0x254144u) { return; }
    ctx->pc = 0x254144u;
    // 0x254144: 0xc7a00040
    ctx->pc = 0x254144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254148: 0xc7a10050
    ctx->pc = 0x254148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25414c: 0x46010000
    ctx->pc = 0x25414cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x254150: 0xe60002f4
    ctx->pc = 0x254150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 756), bits); }
    // 0x254154: 0xc7a00044
    ctx->pc = 0x254154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254158: 0xc7a10054
    ctx->pc = 0x254158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25415c: 0x46010000
    ctx->pc = 0x25415cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x254160: 0xe60002f8
    ctx->pc = 0x254160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 760), bits); }
    // 0x254164: 0xc7a00048
    ctx->pc = 0x254164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254168: 0xc7a10058
    ctx->pc = 0x254168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25416c: 0x46010000
    ctx->pc = 0x25416cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x254170: 0xe60002fc
    ctx->pc = 0x254170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 764), bits); }
    // 0x254174: 0x240202d
    ctx->pc = 0x254174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254178: 0xc08e640
    ctx->pc = 0x254178u;
    SET_GPR_U32(ctx, 31, 0x254180u);
    ctx->pc = 0x25417Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 756));
    ctx->pc = 0x239900u;
    {
        const uint32_t __entryPc = ctx->pc;
        trans_enemy_0x239900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254180u; }
    }
    if (ctx->pc != 0x254180u) { return; }
    ctx->pc = 0x254180u;
    // 0x254180: 0x10400050
    ctx->pc = 0x254180u;
    {
        const bool branch_taken_0x254180 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x254184u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x254180) {
            ctx->pc = 0x2542C4u;
            goto label_2542c4;
        }
    }
    ctx->pc = 0x254188u;
    // 0x254188: 0x1000004e
    ctx->pc = 0x254188u;
    {
        const bool branch_taken_0x254188 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25418Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 2));
        if (branch_taken_0x254188) {
            ctx->pc = 0x2542C4u;
            goto label_2542c4;
        }
    }
    ctx->pc = 0x254190u;
label_254190:
    // 0x254190: 0xe7a00040
    ctx->pc = 0x254190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x254194: 0xc6000044
    ctx->pc = 0x254194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254198: 0xe7a00044
    ctx->pc = 0x254198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x25419c: 0xc6000048
    ctx->pc = 0x25419cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2541a0: 0xe7a00048
    ctx->pc = 0x2541a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2541a4: 0xc6210010
    ctx->pc = 0x2541a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2541a8: 0x3c013fc9
    ctx->pc = 0x2541a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x2541ac: 0x34210fdb
    ctx->pc = 0x2541acu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2541b0: 0x44810000
    ctx->pc = 0x2541b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2541b4: 0x46000841
    ctx->pc = 0x2541b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2541b8: 0x3c014049
    ctx->pc = 0x2541b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x2541bc: 0x34210fdb
    ctx->pc = 0x2541bcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2541c0: 0x44810000
    ctx->pc = 0x2541c0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2541c4: 0x46010034
    ctx->pc = 0x2541c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2541c8: 0x0
    ctx->pc = 0x2541c8u;
    // NOP
    // 0x2541cc: 0x45020006
    ctx->pc = 0x2541CCu;
    {
        const bool branch_taken_0x2541cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2541cc) {
            ctx->pc = 0x2541D0u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x2541E8u;
            goto label_2541e8;
        }
    }
    ctx->pc = 0x2541D4u;
    // 0x2541d4: 0x3c0140c9
    ctx->pc = 0x2541d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2541d8: 0x34210fdb
    ctx->pc = 0x2541d8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2541dc: 0x44810000
    ctx->pc = 0x2541dcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2541e0: 0x10000010
    ctx->pc = 0x2541E0u;
    {
        const bool branch_taken_0x2541e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2541E4u;
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x2541e0) {
            ctx->pc = 0x254224u;
            goto label_254224;
        }
    }
    ctx->pc = 0x2541E8u;
label_2541e8:
    // 0x2541e8: 0x3c013fc9
    ctx->pc = 0x2541e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x2541ec: 0x34210fdb
    ctx->pc = 0x2541ecu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2541f0: 0x44810800
    ctx->pc = 0x2541f0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2541f4: 0x46010041
    ctx->pc = 0x2541f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2541f8: 0x3c01c049
    ctx->pc = 0x2541f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x2541fc: 0x34210fdb
    ctx->pc = 0x2541fcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x254200: 0x44810000
    ctx->pc = 0x254200u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x254204: 0x46000836
    ctx->pc = 0x254204u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x254208: 0x0
    ctx->pc = 0x254208u;
    // NOP
    // 0x25420c: 0x45020006
    ctx->pc = 0x25420Cu;
    {
        const bool branch_taken_0x25420c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25420c) {
            ctx->pc = 0x254210u;
            WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
            ctx->pc = 0x254228u;
            goto label_254228;
        }
    }
    ctx->pc = 0x254214u;
    // 0x254214: 0x3c0140c9
    ctx->pc = 0x254214u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x254218: 0x34210fdb
    ctx->pc = 0x254218u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x25421c: 0x44810000
    ctx->pc = 0x25421cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x254220: 0x46000840
    ctx->pc = 0x254220u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_254224:
    // 0x254224: 0xafa00060
    ctx->pc = 0x254224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_254228:
    // 0x254228: 0xe7a10064
    ctx->pc = 0x254228u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x25422c: 0xafa00068
    ctx->pc = 0x25422cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x254230: 0x3a0202d
    ctx->pc = 0x254230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254234: 0xc0b5ae8
    ctx->pc = 0x254234u;
    SET_GPR_U32(ctx, 31, 0x25423Cu);
    ctx->pc = 0x254238u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x2D6BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateYPRMatrix_0x2d6ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25423Cu; }
    }
    if (ctx->pc != 0x25423Cu) { return; }
    ctx->pc = 0x25423Cu;
    // 0x25423c: 0xafa00070
    ctx->pc = 0x25423cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x254240: 0xafa00074
    ctx->pc = 0x254240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x254244: 0x3c014060
    ctx->pc = 0x254244u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16480 << 16));
    // 0x254248: 0x44810000
    ctx->pc = 0x254248u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x25424c: 0xe7a00078
    ctx->pc = 0x25424cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x254250: 0x27a40070
    ctx->pc = 0x254250u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 112));
    // 0x254254: 0x27a50050
    ctx->pc = 0x254254u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    // 0x254258: 0xc0b57a2
    ctx->pc = 0x254258u;
    SET_GPR_U32(ctx, 31, 0x254260u);
    ctx->pc = 0x25425Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldVector_0x2d5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254260u; }
    }
    if (ctx->pc != 0x254260u) { return; }
    ctx->pc = 0x254260u;
    // 0x254260: 0xc7a00040
    ctx->pc = 0x254260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254264: 0xc7a10050
    ctx->pc = 0x254264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x254268: 0x46010000
    ctx->pc = 0x254268u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25426c: 0xe60002f4
    ctx->pc = 0x25426cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 756), bits); }
    // 0x254270: 0xc7a00044
    ctx->pc = 0x254270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254274: 0xc7a10054
    ctx->pc = 0x254274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x254278: 0x46010000
    ctx->pc = 0x254278u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25427c: 0xe60002f8
    ctx->pc = 0x25427cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 760), bits); }
    // 0x254280: 0xc7a00048
    ctx->pc = 0x254280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254284: 0xc7a10058
    ctx->pc = 0x254284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x254288: 0x46010000
    ctx->pc = 0x254288u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25428c: 0xe60002fc
    ctx->pc = 0x25428cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 764), bits); }
    // 0x254290: 0x240202d
    ctx->pc = 0x254290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254294: 0xc08e640
    ctx->pc = 0x254294u;
    SET_GPR_U32(ctx, 31, 0x25429Cu);
    ctx->pc = 0x254298u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 756));
    ctx->pc = 0x239900u;
    {
        const uint32_t __entryPc = ctx->pc;
        trans_enemy_0x239900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25429Cu; }
    }
    if (ctx->pc != 0x25429Cu) { return; }
    ctx->pc = 0x25429Cu;
    // 0x25429c: 0x10400009
    ctx->pc = 0x25429Cu;
    {
        const bool branch_taken_0x25429c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2542A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x25429c) {
            ctx->pc = 0x2542C4u;
            goto label_2542c4;
        }
    }
    ctx->pc = 0x2542A4u;
    // 0x2542a4: 0x10000007
    ctx->pc = 0x2542A4u;
    {
        const bool branch_taken_0x2542a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2542A8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 2));
        if (branch_taken_0x2542a4) {
            ctx->pc = 0x2542C4u;
            goto label_2542c4;
        }
    }
    ctx->pc = 0x2542ACu;
label_2542ac:
    // 0x2542ac: 0xc6000044
    ctx->pc = 0x2542acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2542b0: 0xe60002f8
    ctx->pc = 0x2542b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 760), bits); }
    // 0x2542b4: 0xc6000048
    ctx->pc = 0x2542b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2542b8: 0xe60002fc
    ctx->pc = 0x2542b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 764), bits); }
    // 0x2542bc: 0x24020004
    ctx->pc = 0x2542bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2542c0: 0xae020330
    ctx->pc = 0x2542c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 2));
label_2542c4:
    // 0x2542c4: 0x8e020330
    ctx->pc = 0x2542c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x2542c8: 0x10400017
    ctx->pc = 0x2542C8u;
    {
        const bool branch_taken_0x2542c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2542CCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        if (branch_taken_0x2542c8) {
            ctx->pc = 0x254328u;
            goto label_254328;
        }
    }
    ctx->pc = 0x2542D0u;
    // 0x2542d0: 0x92220002
    ctx->pc = 0x2542d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2542d4: 0x24420001
    ctx->pc = 0x2542d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2542d8: 0xa2220002
    ctx->pc = 0x2542d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2542dc: 0x92220004
    ctx->pc = 0x2542dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2542e0: 0x24420001
    ctx->pc = 0x2542e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2542e4: 0xa2220004
    ctx->pc = 0x2542e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x2542e8: 0xc6000040
    ctx->pc = 0x2542e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2542ec: 0xe6000300
    ctx->pc = 0x2542ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
    // 0x2542f0: 0xc6000044
    ctx->pc = 0x2542f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2542f4: 0xe6000304
    ctx->pc = 0x2542f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 772), bits); }
    // 0x2542f8: 0xc6000048
    ctx->pc = 0x2542f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2542fc: 0xe6000308
    ctx->pc = 0x2542fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 776), bits); }
    // 0x254300: 0x82220002
    ctx->pc = 0x254300u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x254304: 0x82230003
    ctx->pc = 0x254304u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x254308: 0x43102a
    ctx->pc = 0x254308u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x25430c: 0x14400007
    ctx->pc = 0x25430Cu;
    {
        const bool branch_taken_0x25430c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x254310u;
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        if (branch_taken_0x25430c) {
            ctx->pc = 0x25432Cu;
            goto label_25432c;
        }
    }
    ctx->pc = 0x254314u;
    // 0x254314: 0x24020007
    ctx->pc = 0x254314u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x254318: 0xa222000a
    ctx->pc = 0x254318u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x25431c: 0x24020003
    ctx->pc = 0x25431cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x254320: 0xa2220004
    ctx->pc = 0x254320u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x254324: 0xdfbf00b0
    ctx->pc = 0x254324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_254328:
    // 0x254328: 0xdfb200a0
    ctx->pc = 0x254328u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_25432c:
    // 0x25432c: 0xdfb10090
    ctx->pc = 0x25432cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x254330: 0xdfb00080
    ctx->pc = 0x254330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x254334: 0x3e00008
    ctx->pc = 0x254334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254338u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x254070u: goto label_254070;
            case 0x2540CCu: goto label_2540cc;
            case 0x254108u: goto label_254108;
            case 0x25410Cu: goto label_25410c;
            case 0x254190u: goto label_254190;
            case 0x2541E8u: goto label_2541e8;
            case 0x254224u: goto label_254224;
            case 0x254228u: goto label_254228;
            case 0x2542ACu: goto label_2542ac;
            case 0x2542C4u: goto label_2542c4;
            case 0x254328u: goto label_254328;
            case 0x25432Cu: goto label_25432c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25433Cu;
}
