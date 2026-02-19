#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterDoDamageFX
// Address: 0x294828 - 0x295030
void CritterDoDamageFX_0x294828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x294828u;

label_294828:
    // 0x294828: 0x27bdff20
    ctx->pc = 0x294828u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
label_29482c:
    // 0x29482c: 0xffbf00b0
    ctx->pc = 0x29482cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_294830:
    // 0x294830: 0xffb600a0
    ctx->pc = 0x294830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_294834:
    // 0x294834: 0xffb50090
    ctx->pc = 0x294834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_294838:
    // 0x294838: 0xffb40080
    ctx->pc = 0x294838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_29483c:
    // 0x29483c: 0xffb30070
    ctx->pc = 0x29483cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_294840:
    // 0x294840: 0xffb20060
    ctx->pc = 0x294840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_294844:
    // 0x294844: 0xffb10050
    ctx->pc = 0x294844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_294848:
    // 0x294848: 0xffb00040
    ctx->pc = 0x294848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_29484c:
    // 0x29484c: 0xe7b600d0
    ctx->pc = 0x29484cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_294850:
    // 0x294850: 0xe7b500c8
    ctx->pc = 0x294850u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_294854:
    // 0x294854: 0xe7b400c0
    ctx->pc = 0x294854u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_294858:
    // 0x294858: 0x80982d
    ctx->pc = 0x294858u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29485c:
    // 0x29485c: 0xc0902d
    ctx->pc = 0x29485cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_294860:
    // 0x294860: 0x8e620004
    ctx->pc = 0x294860u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_294864:
    // 0x294864: 0x8c550130
    ctx->pc = 0x294864u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_294868:
    // 0x294868: 0x24020050
    ctx->pc = 0x294868u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
label_29486c:
    // 0x29486c: 0xa22818
    ctx->pc = 0x29486cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_294870:
    // 0x294870: 0x8ea20044
    ctx->pc = 0x294870u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_294874:
    // 0x294874: 0xa28821
    ctx->pc = 0x294874u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_294878:
    // 0x294878: 0x96220002
    ctx->pc = 0x294878u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_29487c:
    // 0x29487c: 0x30424000
    ctx->pc = 0x29487cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16384));
label_294880:
    // 0x294880: 0x1040000a
label_294884:
    if (ctx->pc == 0x294884u) {
        ctx->pc = 0x294884u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x294888u;
        goto label_294888;
    }
    ctx->pc = 0x294880u;
    {
        const bool branch_taken_0x294880 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x294884u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x294880) {
            ctx->pc = 0x2948ACu;
            goto label_2948ac;
        }
    }
    ctx->pc = 0x294888u;
label_294888:
    // 0x294888: 0xc6610b50
    ctx->pc = 0x294888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29488c:
    // 0x29488c: 0x44800000
    ctx->pc = 0x29488cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_294890:
    // 0x294890: 0x46010034
    ctx->pc = 0x294890u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_294894:
    // 0x294894: 0x0
    ctx->pc = 0x294894u;
    // NOP
label_294898:
    // 0x294898: 0x45000004
label_29489c:
    if (ctx->pc == 0x29489Cu) {
        ctx->pc = 0x29489Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2948A0u;
        goto label_2948a0;
    }
    ctx->pc = 0x294898u;
    {
        const bool branch_taken_0x294898 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29489Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x294898) {
            ctx->pc = 0x2948ACu;
            goto label_2948ac;
        }
    }
    ctx->pc = 0x2948A0u;
label_2948a0:
    // 0x2948a0: 0x86230000
    ctx->pc = 0x2948a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_2948a4:
    // 0x2948a4: 0x146201d5
label_2948a8:
    if (ctx->pc == 0x2948A8u) {
        ctx->pc = 0x2948A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2948ACu;
        goto label_2948ac;
    }
    ctx->pc = 0x2948A4u;
    {
        const bool branch_taken_0x2948a4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2948A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2948a4) {
            ctx->pc = 0x294FFCu;
            goto label_294ffc;
        }
    }
    ctx->pc = 0x2948ACu;
label_2948ac:
    // 0x2948ac: 0x8e630070
    ctx->pc = 0x2948acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_2948b0:
    // 0x2948b0: 0x3c013f80
    ctx->pc = 0x2948b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_2948b4:
    // 0x2948b4: 0x4481a000
    ctx->pc = 0x2948b4u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_2948b8:
    // 0x2948b8: 0x50600006
label_2948bc:
    if (ctx->pc == 0x2948BCu) {
        ctx->pc = 0x2948BCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x2948C0u;
        goto label_2948c0;
    }
    ctx->pc = 0x2948B8u;
    {
        const bool branch_taken_0x2948b8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2948b8) {
            ctx->pc = 0x2948BCu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x2948D4u;
            goto label_2948d4;
        }
    }
    ctx->pc = 0x2948C0u;
label_2948c0:
    // 0x2948c0: 0x8c620060
    ctx->pc = 0x2948c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_2948c4:
    // 0x2948c4: 0x30420008
    ctx->pc = 0x2948c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
label_2948c8:
    // 0x2948c8: 0x54400001
label_2948cc:
    if (ctx->pc == 0x2948CCu) {
        ctx->pc = 0x2948CCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x2948D0u;
        goto label_2948d0;
    }
    ctx->pc = 0x2948C8u;
    {
        const bool branch_taken_0x2948c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2948c8) {
            ctx->pc = 0x2948CCu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->pc = 0x2948D0u;
            goto label_2948d0;
        }
    }
    ctx->pc = 0x2948D0u;
label_2948d0:
    // 0x2948d0: 0xc6200020
    ctx->pc = 0x2948d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2948d4:
    // 0x2948d4: 0x4600a082
    ctx->pc = 0x2948d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2948d8:
    // 0x2948d8: 0xe7a20020
    ctx->pc = 0x2948d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2948dc:
    // 0x2948dc: 0xc6200024
    ctx->pc = 0x2948dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2948e0:
    // 0x2948e0: 0x4600a042
    ctx->pc = 0x2948e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2948e4:
    // 0x2948e4: 0xe7a10024
    ctx->pc = 0x2948e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2948e8:
    // 0x2948e8: 0xc6200028
    ctx->pc = 0x2948e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2948ec:
    // 0x2948ec: 0x4600a002
    ctx->pc = 0x2948ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2948f0:
    // 0x2948f0: 0x1240000b
label_2948f4:
    if (ctx->pc == 0x2948F4u) {
        ctx->pc = 0x2948F4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->pc = 0x2948F8u;
        goto label_2948f8;
    }
    ctx->pc = 0x2948F0u;
    {
        const bool branch_taken_0x2948f0 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x2948F4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        if (branch_taken_0x2948f0) {
            ctx->pc = 0x294920u;
            goto label_294920;
        }
    }
    ctx->pc = 0x2948F8u;
label_2948f8:
    // 0x2948f8: 0xe7a20000
    ctx->pc = 0x2948f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2948fc:
    // 0x2948fc: 0xe7a10004
    ctx->pc = 0x2948fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_294900:
    // 0x294900: 0x1200001c
label_294904:
    if (ctx->pc == 0x294904u) {
        ctx->pc = 0x294904u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->pc = 0x294908u;
        goto label_294908;
    }
    ctx->pc = 0x294900u;
    {
        const bool branch_taken_0x294900 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x294904u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        if (branch_taken_0x294900) {
            ctx->pc = 0x294974u;
            goto label_294974;
        }
    }
    ctx->pc = 0x294908u;
label_294908:
    // 0x294908: 0x200202d
    ctx->pc = 0x294908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29490c:
    // 0x29490c: 0x200282d
    ctx->pc = 0x29490cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_294910:
    // 0x294910: 0xc0b587e
label_294914:
    if (ctx->pc == 0x294914u) {
        ctx->pc = 0x294914u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x294918u;
        goto label_294918;
    }
    ctx->pc = 0x294910u;
    SET_GPR_U32(ctx, 31, 0x294918u);
    ctx->pc = 0x294914u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 19), 16));
    ctx->pc = 0x2D61F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MulBodyVecMat4_0x2d61f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294918u; }
    }
    if (ctx->pc != 0x294918u) { return; }
    ctx->pc = 0x294918u;
label_294918:
    // 0x294918: 0x10000007
label_29491c:
    if (ctx->pc == 0x29491Cu) {
        ctx->pc = 0x29491Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x294920u;
        goto label_294920;
    }
    ctx->pc = 0x294918u;
    {
        const bool branch_taken_0x294918 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29491Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x294918) {
            ctx->pc = 0x294938u;
            goto label_294938;
        }
    }
    ctx->pc = 0x294920u;
label_294920:
    // 0x294920: 0x12000011
label_294924:
    if (ctx->pc == 0x294924u) {
        ctx->pc = 0x294924u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x294928u;
        goto label_294928;
    }
    ctx->pc = 0x294920u;
    {
        const bool branch_taken_0x294920 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x294924u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x294920) {
            ctx->pc = 0x294968u;
            goto label_294968;
        }
    }
    ctx->pc = 0x294928u;
label_294928:
    // 0x294928: 0x3a0282d
    ctx->pc = 0x294928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29492c:
    // 0x29492c: 0xc0b585c
label_294930:
    if (ctx->pc == 0x294930u) {
        ctx->pc = 0x294930u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x294934u;
        goto label_294934;
    }
    ctx->pc = 0x29492Cu;
    SET_GPR_U32(ctx, 31, 0x294934u);
    ctx->pc = 0x294930u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 19), 16));
    ctx->pc = 0x2D6170u;
    {
        const uint32_t __entryPc = ctx->pc;
        MulVecMat3_0x2d6170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294934u; }
    }
    if (ctx->pc != 0x294934u) { return; }
    ctx->pc = 0x294934u;
label_294934:
    // 0x294934: 0xc6000000
    ctx->pc = 0x294934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294938:
    // 0x294938: 0xc7a10000
    ctx->pc = 0x294938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29493c:
    // 0x29493c: 0x46010000
    ctx->pc = 0x29493cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_294940:
    // 0x294940: 0xe7a00000
    ctx->pc = 0x294940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_294944:
    // 0x294944: 0xc6000004
    ctx->pc = 0x294944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294948:
    // 0x294948: 0xc7a10004
    ctx->pc = 0x294948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29494c:
    // 0x29494c: 0x46010000
    ctx->pc = 0x29494cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_294950:
    // 0x294950: 0xe7a00004
    ctx->pc = 0x294950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_294954:
    // 0x294954: 0xc6000008
    ctx->pc = 0x294954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294958:
    // 0x294958: 0xc7a10008
    ctx->pc = 0x294958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29495c:
    // 0x29495c: 0x46010000
    ctx->pc = 0x29495cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_294960:
    // 0x294960: 0x10000004
label_294964:
    if (ctx->pc == 0x294964u) {
        ctx->pc = 0x294964u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->pc = 0x294968u;
        goto label_294968;
    }
    ctx->pc = 0x294960u;
    {
        const bool branch_taken_0x294960 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x294964u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        if (branch_taken_0x294960) {
            ctx->pc = 0x294974u;
            goto label_294974;
        }
    }
    ctx->pc = 0x294968u;
label_294968:
    // 0x294968: 0x3a0282d
    ctx->pc = 0x294968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29496c:
    // 0x29496c: 0xc0b5836
label_294970:
    if (ctx->pc == 0x294970u) {
        ctx->pc = 0x294970u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x294974u;
        goto label_294974;
    }
    ctx->pc = 0x29496Cu;
    SET_GPR_U32(ctx, 31, 0x294974u);
    ctx->pc = 0x294970u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 19), 16));
    ctx->pc = 0x2D60D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MulVecMat4_0x2d60d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294974u; }
    }
    if (ctx->pc != 0x294974u) { return; }
    ctx->pc = 0x294974u;
label_294974:
    // 0x294974: 0x260202d
    ctx->pc = 0x294974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_294978:
    // 0x294978: 0x86250040
    ctx->pc = 0x294978u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
label_29497c:
    // 0x29497c: 0x3a0302d
    ctx->pc = 0x29497cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_294980:
    // 0x294980: 0x240382d
    ctx->pc = 0x294980u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_294984:
    // 0x294984: 0xc0a50f4
label_294988:
    if (ctx->pc == 0x294988u) {
        ctx->pc = 0x294988u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x29498Cu;
        goto label_29498c;
    }
    ctx->pc = 0x294984u;
    SET_GPR_U32(ctx, 31, 0x29498Cu);
    ctx->pc = 0x294988u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2943D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDoSfx_0x2943d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29498Cu; }
    }
    if (ctx->pc != 0x29498Cu) { return; }
    ctx->pc = 0x29498Cu;
label_29498c:
    // 0x29498c: 0x40a02d
    ctx->pc = 0x29498cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_294990:
    // 0x294990: 0x6800199
label_294994:
    if (ctx->pc == 0x294994u) {
        ctx->pc = 0x294994u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2049));
        ctx->pc = 0x294998u;
        goto label_294998;
    }
    ctx->pc = 0x294990u;
    {
        const bool branch_taken_0x294990 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x294994u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2049));
        if (branch_taken_0x294990) {
            ctx->pc = 0x294FF8u;
            goto label_294ff8;
        }
    }
    ctx->pc = 0x294998u;
label_294998:
    // 0x294998: 0x86220040
    ctx->pc = 0x294998u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
label_29499c:
    // 0x29499c: 0x24030050
    ctx->pc = 0x29499cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 80));
label_2949a0:
    // 0x2949a0: 0x431018
    ctx->pc = 0x2949a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2949a4:
    // 0x2949a4: 0x8ea3004c
    ctx->pc = 0x2949a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_2949a8:
    // 0x2949a8: 0x43b021
    ctx->pc = 0x2949a8u;
    SET_GPR_U32(ctx, 22, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2949ac:
    // 0x2949ac: 0x8e620004
    ctx->pc = 0x2949acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2949b0:
    // 0x2949b0: 0x8c420120
    ctx->pc = 0x2949b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 288)));
label_2949b4:
    // 0x2949b4: 0x84430020
    ctx->pc = 0x2949b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_2949b8:
    // 0x2949b8: 0x24020004
    ctx->pc = 0x2949b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_2949bc:
    // 0x2949bc: 0x1062000d
label_2949c0:
    if (ctx->pc == 0x2949C0u) {
        ctx->pc = 0x2949C0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->pc = 0x2949C4u;
        goto label_2949c4;
    }
    ctx->pc = 0x2949BCu;
    {
        const bool branch_taken_0x2949bc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2949C0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        if (branch_taken_0x2949bc) {
            ctx->pc = 0x2949F4u;
            goto label_2949f4;
        }
    }
    ctx->pc = 0x2949C4u;
label_2949c4:
    // 0x2949c4: 0x24100809
    ctx->pc = 0x2949c4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2057));
label_2949c8:
    // 0x2949c8: 0x3c030034
    ctx->pc = 0x2949c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_2949cc:
    // 0x2949cc: 0x24630eb0
    ctx->pc = 0x2949ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
label_2949d0:
    // 0x2949d0: 0x240200f0
    ctx->pc = 0x2949d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
label_2949d4:
    // 0x2949d4: 0x2821018
    ctx->pc = 0x2949d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2949d8:
    // 0x2949d8: 0x431021
    ctx->pc = 0x2949d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2949dc:
    // 0x2949dc: 0x260202d
    ctx->pc = 0x2949dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2949e0:
    // 0x2949e0: 0x3c014479
    ctx->pc = 0x2949e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17529 << 16));
label_2949e4:
    // 0x2949e4: 0x3421c000
    ctx->pc = 0x2949e4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 49152));
label_2949e8:
    // 0x2949e8: 0x44816000
    ctx->pc = 0x2949e8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_2949ec:
    // 0x2949ec: 0xc0a67da
label_2949f0:
    if (ctx->pc == 0x2949F0u) {
        ctx->pc = 0x2949F0u;
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 234)));
        ctx->pc = 0x2949F4u;
        goto label_2949f4;
    }
    ctx->pc = 0x2949ECu;
    SET_GPR_U32(ctx, 31, 0x2949F4u);
    ctx->pc = 0x2949F0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 234)));
    ctx->pc = 0x299F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterSetFxHitTime_0x299f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2949F4u; }
    }
    if (ctx->pc != 0x2949F4u) { return; }
    ctx->pc = 0x2949F4u;
label_2949f4:
    // 0x2949f4: 0x96220000
    ctx->pc = 0x2949f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_2949f8:
    // 0x2949f8: 0x2442ffff
    ctx->pc = 0x2949f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_2949fc:
    // 0x2949fc: 0x21400
    ctx->pc = 0x2949fcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
label_294a00:
    // 0x294a00: 0x21c03
    ctx->pc = 0x294a00u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
label_294a04:
    // 0x294a04: 0x2c620008
    ctx->pc = 0x294a04u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 8));
label_294a08:
    // 0x294a08: 0x10400021
label_294a0c:
    if (ctx->pc == 0x294A0Cu) {
        ctx->pc = 0x294A0Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x294A10u;
        goto label_294a10;
    }
    ctx->pc = 0x294A08u;
    {
        const bool branch_taken_0x294a08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x294A0Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x294a08) {
            ctx->pc = 0x294A90u;
            goto label_294a90;
        }
    }
    ctx->pc = 0x294A10u;
label_294a10:
    // 0x294a10: 0x2442e260
    ctx->pc = 0x294a10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959712));
label_294a14:
    // 0x294a14: 0x31880
    ctx->pc = 0x294a14u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_294a18:
    // 0x294a18: 0x621821
    ctx->pc = 0x294a18u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_294a1c:
    // 0x294a1c: 0x8c620000
    ctx->pc = 0x294a1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_294a20:
    // 0x294a20: 0x400008
label_294a24:
    if (ctx->pc == 0x294A24u) {
        ctx->pc = 0x294A28u;
        goto label_294a28;
    }
    ctx->pc = 0x294A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x294828u: goto label_294828;
            case 0x29482Cu: goto label_29482c;
            case 0x294830u: goto label_294830;
            case 0x294834u: goto label_294834;
            case 0x294838u: goto label_294838;
            case 0x29483Cu: goto label_29483c;
            case 0x294840u: goto label_294840;
            case 0x294844u: goto label_294844;
            case 0x294848u: goto label_294848;
            case 0x29484Cu: goto label_29484c;
            case 0x294850u: goto label_294850;
            case 0x294854u: goto label_294854;
            case 0x294858u: goto label_294858;
            case 0x29485Cu: goto label_29485c;
            case 0x294860u: goto label_294860;
            case 0x294864u: goto label_294864;
            case 0x294868u: goto label_294868;
            case 0x29486Cu: goto label_29486c;
            case 0x294870u: goto label_294870;
            case 0x294874u: goto label_294874;
            case 0x294878u: goto label_294878;
            case 0x29487Cu: goto label_29487c;
            case 0x294880u: goto label_294880;
            case 0x294884u: goto label_294884;
            case 0x294888u: goto label_294888;
            case 0x29488Cu: goto label_29488c;
            case 0x294890u: goto label_294890;
            case 0x294894u: goto label_294894;
            case 0x294898u: goto label_294898;
            case 0x29489Cu: goto label_29489c;
            case 0x2948A0u: goto label_2948a0;
            case 0x2948A4u: goto label_2948a4;
            case 0x2948A8u: goto label_2948a8;
            case 0x2948ACu: goto label_2948ac;
            case 0x2948B0u: goto label_2948b0;
            case 0x2948B4u: goto label_2948b4;
            case 0x2948B8u: goto label_2948b8;
            case 0x2948BCu: goto label_2948bc;
            case 0x2948C0u: goto label_2948c0;
            case 0x2948C4u: goto label_2948c4;
            case 0x2948C8u: goto label_2948c8;
            case 0x2948CCu: goto label_2948cc;
            case 0x2948D0u: goto label_2948d0;
            case 0x2948D4u: goto label_2948d4;
            case 0x2948D8u: goto label_2948d8;
            case 0x2948DCu: goto label_2948dc;
            case 0x2948E0u: goto label_2948e0;
            case 0x2948E4u: goto label_2948e4;
            case 0x2948E8u: goto label_2948e8;
            case 0x2948ECu: goto label_2948ec;
            case 0x2948F0u: goto label_2948f0;
            case 0x2948F4u: goto label_2948f4;
            case 0x2948F8u: goto label_2948f8;
            case 0x2948FCu: goto label_2948fc;
            case 0x294900u: goto label_294900;
            case 0x294904u: goto label_294904;
            case 0x294908u: goto label_294908;
            case 0x29490Cu: goto label_29490c;
            case 0x294910u: goto label_294910;
            case 0x294914u: goto label_294914;
            case 0x294918u: goto label_294918;
            case 0x29491Cu: goto label_29491c;
            case 0x294920u: goto label_294920;
            case 0x294924u: goto label_294924;
            case 0x294928u: goto label_294928;
            case 0x29492Cu: goto label_29492c;
            case 0x294930u: goto label_294930;
            case 0x294934u: goto label_294934;
            case 0x294938u: goto label_294938;
            case 0x29493Cu: goto label_29493c;
            case 0x294940u: goto label_294940;
            case 0x294944u: goto label_294944;
            case 0x294948u: goto label_294948;
            case 0x29494Cu: goto label_29494c;
            case 0x294950u: goto label_294950;
            case 0x294954u: goto label_294954;
            case 0x294958u: goto label_294958;
            case 0x29495Cu: goto label_29495c;
            case 0x294960u: goto label_294960;
            case 0x294964u: goto label_294964;
            case 0x294968u: goto label_294968;
            case 0x29496Cu: goto label_29496c;
            case 0x294970u: goto label_294970;
            case 0x294974u: goto label_294974;
            case 0x294978u: goto label_294978;
            case 0x29497Cu: goto label_29497c;
            case 0x294980u: goto label_294980;
            case 0x294984u: goto label_294984;
            case 0x294988u: goto label_294988;
            case 0x29498Cu: goto label_29498c;
            case 0x294990u: goto label_294990;
            case 0x294994u: goto label_294994;
            case 0x294998u: goto label_294998;
            case 0x29499Cu: goto label_29499c;
            case 0x2949A0u: goto label_2949a0;
            case 0x2949A4u: goto label_2949a4;
            case 0x2949A8u: goto label_2949a8;
            case 0x2949ACu: goto label_2949ac;
            case 0x2949B0u: goto label_2949b0;
            case 0x2949B4u: goto label_2949b4;
            case 0x2949B8u: goto label_2949b8;
            case 0x2949BCu: goto label_2949bc;
            case 0x2949C0u: goto label_2949c0;
            case 0x2949C4u: goto label_2949c4;
            case 0x2949C8u: goto label_2949c8;
            case 0x2949CCu: goto label_2949cc;
            case 0x2949D0u: goto label_2949d0;
            case 0x2949D4u: goto label_2949d4;
            case 0x2949D8u: goto label_2949d8;
            case 0x2949DCu: goto label_2949dc;
            case 0x2949E0u: goto label_2949e0;
            case 0x2949E4u: goto label_2949e4;
            case 0x2949E8u: goto label_2949e8;
            case 0x2949ECu: goto label_2949ec;
            case 0x2949F0u: goto label_2949f0;
            case 0x2949F4u: goto label_2949f4;
            case 0x2949F8u: goto label_2949f8;
            case 0x2949FCu: goto label_2949fc;
            case 0x294A00u: goto label_294a00;
            case 0x294A04u: goto label_294a04;
            case 0x294A08u: goto label_294a08;
            case 0x294A0Cu: goto label_294a0c;
            case 0x294A10u: goto label_294a10;
            case 0x294A14u: goto label_294a14;
            case 0x294A18u: goto label_294a18;
            case 0x294A1Cu: goto label_294a1c;
            case 0x294A20u: goto label_294a20;
            case 0x294A24u: goto label_294a24;
            case 0x294A28u: goto label_294a28;
            case 0x294A2Cu: goto label_294a2c;
            case 0x294A30u: goto label_294a30;
            case 0x294A34u: goto label_294a34;
            case 0x294A38u: goto label_294a38;
            case 0x294A3Cu: goto label_294a3c;
            case 0x294A40u: goto label_294a40;
            case 0x294A44u: goto label_294a44;
            case 0x294A48u: goto label_294a48;
            case 0x294A4Cu: goto label_294a4c;
            case 0x294A50u: goto label_294a50;
            case 0x294A54u: goto label_294a54;
            case 0x294A58u: goto label_294a58;
            case 0x294A5Cu: goto label_294a5c;
            case 0x294A60u: goto label_294a60;
            case 0x294A64u: goto label_294a64;
            case 0x294A68u: goto label_294a68;
            case 0x294A6Cu: goto label_294a6c;
            case 0x294A70u: goto label_294a70;
            case 0x294A74u: goto label_294a74;
            case 0x294A78u: goto label_294a78;
            case 0x294A7Cu: goto label_294a7c;
            case 0x294A80u: goto label_294a80;
            case 0x294A84u: goto label_294a84;
            case 0x294A88u: goto label_294a88;
            case 0x294A8Cu: goto label_294a8c;
            case 0x294A90u: goto label_294a90;
            case 0x294A94u: goto label_294a94;
            case 0x294A98u: goto label_294a98;
            case 0x294A9Cu: goto label_294a9c;
            case 0x294AA0u: goto label_294aa0;
            case 0x294AA4u: goto label_294aa4;
            case 0x294AA8u: goto label_294aa8;
            case 0x294AACu: goto label_294aac;
            case 0x294AB0u: goto label_294ab0;
            case 0x294AB4u: goto label_294ab4;
            case 0x294AB8u: goto label_294ab8;
            case 0x294ABCu: goto label_294abc;
            case 0x294AC0u: goto label_294ac0;
            case 0x294AC4u: goto label_294ac4;
            case 0x294AC8u: goto label_294ac8;
            case 0x294ACCu: goto label_294acc;
            case 0x294AD0u: goto label_294ad0;
            case 0x294AD4u: goto label_294ad4;
            case 0x294AD8u: goto label_294ad8;
            case 0x294ADCu: goto label_294adc;
            case 0x294AE0u: goto label_294ae0;
            case 0x294AE4u: goto label_294ae4;
            case 0x294AE8u: goto label_294ae8;
            case 0x294AECu: goto label_294aec;
            case 0x294AF0u: goto label_294af0;
            case 0x294AF4u: goto label_294af4;
            case 0x294AF8u: goto label_294af8;
            case 0x294AFCu: goto label_294afc;
            case 0x294B00u: goto label_294b00;
            case 0x294B04u: goto label_294b04;
            case 0x294B08u: goto label_294b08;
            case 0x294B0Cu: goto label_294b0c;
            case 0x294B10u: goto label_294b10;
            case 0x294B14u: goto label_294b14;
            case 0x294B18u: goto label_294b18;
            case 0x294B1Cu: goto label_294b1c;
            case 0x294B20u: goto label_294b20;
            case 0x294B24u: goto label_294b24;
            case 0x294B28u: goto label_294b28;
            case 0x294B2Cu: goto label_294b2c;
            case 0x294B30u: goto label_294b30;
            case 0x294B34u: goto label_294b34;
            case 0x294B38u: goto label_294b38;
            case 0x294B3Cu: goto label_294b3c;
            case 0x294B40u: goto label_294b40;
            case 0x294B44u: goto label_294b44;
            case 0x294B48u: goto label_294b48;
            case 0x294B4Cu: goto label_294b4c;
            case 0x294B50u: goto label_294b50;
            case 0x294B54u: goto label_294b54;
            case 0x294B58u: goto label_294b58;
            case 0x294B5Cu: goto label_294b5c;
            case 0x294B60u: goto label_294b60;
            case 0x294B64u: goto label_294b64;
            case 0x294B68u: goto label_294b68;
            case 0x294B6Cu: goto label_294b6c;
            case 0x294B70u: goto label_294b70;
            case 0x294B74u: goto label_294b74;
            case 0x294B78u: goto label_294b78;
            case 0x294B7Cu: goto label_294b7c;
            case 0x294B80u: goto label_294b80;
            case 0x294B84u: goto label_294b84;
            case 0x294B88u: goto label_294b88;
            case 0x294B8Cu: goto label_294b8c;
            case 0x294B90u: goto label_294b90;
            case 0x294B94u: goto label_294b94;
            case 0x294B98u: goto label_294b98;
            case 0x294B9Cu: goto label_294b9c;
            case 0x294BA0u: goto label_294ba0;
            case 0x294BA4u: goto label_294ba4;
            case 0x294BA8u: goto label_294ba8;
            case 0x294BACu: goto label_294bac;
            case 0x294BB0u: goto label_294bb0;
            case 0x294BB4u: goto label_294bb4;
            case 0x294BB8u: goto label_294bb8;
            case 0x294BBCu: goto label_294bbc;
            case 0x294BC0u: goto label_294bc0;
            case 0x294BC4u: goto label_294bc4;
            case 0x294BC8u: goto label_294bc8;
            case 0x294BCCu: goto label_294bcc;
            case 0x294BD0u: goto label_294bd0;
            case 0x294BD4u: goto label_294bd4;
            case 0x294BD8u: goto label_294bd8;
            case 0x294BDCu: goto label_294bdc;
            case 0x294BE0u: goto label_294be0;
            case 0x294BE4u: goto label_294be4;
            case 0x294BE8u: goto label_294be8;
            case 0x294BECu: goto label_294bec;
            case 0x294BF0u: goto label_294bf0;
            case 0x294BF4u: goto label_294bf4;
            case 0x294BF8u: goto label_294bf8;
            case 0x294BFCu: goto label_294bfc;
            case 0x294C00u: goto label_294c00;
            case 0x294C04u: goto label_294c04;
            case 0x294C08u: goto label_294c08;
            case 0x294C0Cu: goto label_294c0c;
            case 0x294C10u: goto label_294c10;
            case 0x294C14u: goto label_294c14;
            case 0x294C18u: goto label_294c18;
            case 0x294C1Cu: goto label_294c1c;
            case 0x294C20u: goto label_294c20;
            case 0x294C24u: goto label_294c24;
            case 0x294C28u: goto label_294c28;
            case 0x294C2Cu: goto label_294c2c;
            case 0x294C30u: goto label_294c30;
            case 0x294C34u: goto label_294c34;
            case 0x294C38u: goto label_294c38;
            case 0x294C3Cu: goto label_294c3c;
            case 0x294C40u: goto label_294c40;
            case 0x294C44u: goto label_294c44;
            case 0x294C48u: goto label_294c48;
            case 0x294C4Cu: goto label_294c4c;
            case 0x294C50u: goto label_294c50;
            case 0x294C54u: goto label_294c54;
            case 0x294C58u: goto label_294c58;
            case 0x294C5Cu: goto label_294c5c;
            case 0x294C60u: goto label_294c60;
            case 0x294C64u: goto label_294c64;
            case 0x294C68u: goto label_294c68;
            case 0x294C6Cu: goto label_294c6c;
            case 0x294C70u: goto label_294c70;
            case 0x294C74u: goto label_294c74;
            case 0x294C78u: goto label_294c78;
            case 0x294C7Cu: goto label_294c7c;
            case 0x294C80u: goto label_294c80;
            case 0x294C84u: goto label_294c84;
            case 0x294C88u: goto label_294c88;
            case 0x294C8Cu: goto label_294c8c;
            case 0x294C90u: goto label_294c90;
            case 0x294C94u: goto label_294c94;
            case 0x294C98u: goto label_294c98;
            case 0x294C9Cu: goto label_294c9c;
            case 0x294CA0u: goto label_294ca0;
            case 0x294CA4u: goto label_294ca4;
            case 0x294CA8u: goto label_294ca8;
            case 0x294CACu: goto label_294cac;
            case 0x294CB0u: goto label_294cb0;
            case 0x294CB4u: goto label_294cb4;
            case 0x294CB8u: goto label_294cb8;
            case 0x294CBCu: goto label_294cbc;
            case 0x294CC0u: goto label_294cc0;
            case 0x294CC4u: goto label_294cc4;
            case 0x294CC8u: goto label_294cc8;
            case 0x294CCCu: goto label_294ccc;
            case 0x294CD0u: goto label_294cd0;
            case 0x294CD4u: goto label_294cd4;
            case 0x294CD8u: goto label_294cd8;
            case 0x294CDCu: goto label_294cdc;
            case 0x294CE0u: goto label_294ce0;
            case 0x294CE4u: goto label_294ce4;
            case 0x294CE8u: goto label_294ce8;
            case 0x294CECu: goto label_294cec;
            case 0x294CF0u: goto label_294cf0;
            case 0x294CF4u: goto label_294cf4;
            case 0x294CF8u: goto label_294cf8;
            case 0x294CFCu: goto label_294cfc;
            case 0x294D00u: goto label_294d00;
            case 0x294D04u: goto label_294d04;
            case 0x294D08u: goto label_294d08;
            case 0x294D0Cu: goto label_294d0c;
            case 0x294D10u: goto label_294d10;
            case 0x294D14u: goto label_294d14;
            case 0x294D18u: goto label_294d18;
            case 0x294D1Cu: goto label_294d1c;
            case 0x294D20u: goto label_294d20;
            case 0x294D24u: goto label_294d24;
            case 0x294D28u: goto label_294d28;
            case 0x294D2Cu: goto label_294d2c;
            case 0x294D30u: goto label_294d30;
            case 0x294D34u: goto label_294d34;
            case 0x294D38u: goto label_294d38;
            case 0x294D3Cu: goto label_294d3c;
            case 0x294D40u: goto label_294d40;
            case 0x294D44u: goto label_294d44;
            case 0x294D48u: goto label_294d48;
            case 0x294D4Cu: goto label_294d4c;
            case 0x294D50u: goto label_294d50;
            case 0x294D54u: goto label_294d54;
            case 0x294D58u: goto label_294d58;
            case 0x294D5Cu: goto label_294d5c;
            case 0x294D60u: goto label_294d60;
            case 0x294D64u: goto label_294d64;
            case 0x294D68u: goto label_294d68;
            case 0x294D6Cu: goto label_294d6c;
            case 0x294D70u: goto label_294d70;
            case 0x294D74u: goto label_294d74;
            case 0x294D78u: goto label_294d78;
            case 0x294D7Cu: goto label_294d7c;
            case 0x294D80u: goto label_294d80;
            case 0x294D84u: goto label_294d84;
            case 0x294D88u: goto label_294d88;
            case 0x294D8Cu: goto label_294d8c;
            case 0x294D90u: goto label_294d90;
            case 0x294D94u: goto label_294d94;
            case 0x294D98u: goto label_294d98;
            case 0x294D9Cu: goto label_294d9c;
            case 0x294DA0u: goto label_294da0;
            case 0x294DA4u: goto label_294da4;
            case 0x294DA8u: goto label_294da8;
            case 0x294DACu: goto label_294dac;
            case 0x294DB0u: goto label_294db0;
            case 0x294DB4u: goto label_294db4;
            case 0x294DB8u: goto label_294db8;
            case 0x294DBCu: goto label_294dbc;
            case 0x294DC0u: goto label_294dc0;
            case 0x294DC4u: goto label_294dc4;
            case 0x294DC8u: goto label_294dc8;
            case 0x294DCCu: goto label_294dcc;
            case 0x294DD0u: goto label_294dd0;
            case 0x294DD4u: goto label_294dd4;
            case 0x294DD8u: goto label_294dd8;
            case 0x294DDCu: goto label_294ddc;
            case 0x294DE0u: goto label_294de0;
            case 0x294DE4u: goto label_294de4;
            case 0x294DE8u: goto label_294de8;
            case 0x294DECu: goto label_294dec;
            case 0x294DF0u: goto label_294df0;
            case 0x294DF4u: goto label_294df4;
            case 0x294DF8u: goto label_294df8;
            case 0x294DFCu: goto label_294dfc;
            case 0x294E00u: goto label_294e00;
            case 0x294E04u: goto label_294e04;
            case 0x294E08u: goto label_294e08;
            case 0x294E0Cu: goto label_294e0c;
            case 0x294E10u: goto label_294e10;
            case 0x294E14u: goto label_294e14;
            case 0x294E18u: goto label_294e18;
            case 0x294E1Cu: goto label_294e1c;
            case 0x294E20u: goto label_294e20;
            case 0x294E24u: goto label_294e24;
            case 0x294E28u: goto label_294e28;
            case 0x294E2Cu: goto label_294e2c;
            case 0x294E30u: goto label_294e30;
            case 0x294E34u: goto label_294e34;
            case 0x294E38u: goto label_294e38;
            case 0x294E3Cu: goto label_294e3c;
            case 0x294E40u: goto label_294e40;
            case 0x294E44u: goto label_294e44;
            case 0x294E48u: goto label_294e48;
            case 0x294E4Cu: goto label_294e4c;
            case 0x294E50u: goto label_294e50;
            case 0x294E54u: goto label_294e54;
            case 0x294E58u: goto label_294e58;
            case 0x294E5Cu: goto label_294e5c;
            case 0x294E60u: goto label_294e60;
            case 0x294E64u: goto label_294e64;
            case 0x294E68u: goto label_294e68;
            case 0x294E6Cu: goto label_294e6c;
            case 0x294E70u: goto label_294e70;
            case 0x294E74u: goto label_294e74;
            case 0x294E78u: goto label_294e78;
            case 0x294E7Cu: goto label_294e7c;
            case 0x294E80u: goto label_294e80;
            case 0x294E84u: goto label_294e84;
            case 0x294E88u: goto label_294e88;
            case 0x294E8Cu: goto label_294e8c;
            case 0x294E90u: goto label_294e90;
            case 0x294E94u: goto label_294e94;
            case 0x294E98u: goto label_294e98;
            case 0x294E9Cu: goto label_294e9c;
            case 0x294EA0u: goto label_294ea0;
            case 0x294EA4u: goto label_294ea4;
            case 0x294EA8u: goto label_294ea8;
            case 0x294EACu: goto label_294eac;
            case 0x294EB0u: goto label_294eb0;
            case 0x294EB4u: goto label_294eb4;
            case 0x294EB8u: goto label_294eb8;
            case 0x294EBCu: goto label_294ebc;
            case 0x294EC0u: goto label_294ec0;
            case 0x294EC4u: goto label_294ec4;
            case 0x294EC8u: goto label_294ec8;
            case 0x294ECCu: goto label_294ecc;
            case 0x294ED0u: goto label_294ed0;
            case 0x294ED4u: goto label_294ed4;
            case 0x294ED8u: goto label_294ed8;
            case 0x294EDCu: goto label_294edc;
            case 0x294EE0u: goto label_294ee0;
            case 0x294EE4u: goto label_294ee4;
            case 0x294EE8u: goto label_294ee8;
            case 0x294EECu: goto label_294eec;
            case 0x294EF0u: goto label_294ef0;
            case 0x294EF4u: goto label_294ef4;
            case 0x294EF8u: goto label_294ef8;
            case 0x294EFCu: goto label_294efc;
            case 0x294F00u: goto label_294f00;
            case 0x294F04u: goto label_294f04;
            case 0x294F08u: goto label_294f08;
            case 0x294F0Cu: goto label_294f0c;
            case 0x294F10u: goto label_294f10;
            case 0x294F14u: goto label_294f14;
            case 0x294F18u: goto label_294f18;
            case 0x294F1Cu: goto label_294f1c;
            case 0x294F20u: goto label_294f20;
            case 0x294F24u: goto label_294f24;
            case 0x294F28u: goto label_294f28;
            case 0x294F2Cu: goto label_294f2c;
            case 0x294F30u: goto label_294f30;
            case 0x294F34u: goto label_294f34;
            case 0x294F38u: goto label_294f38;
            case 0x294F3Cu: goto label_294f3c;
            case 0x294F40u: goto label_294f40;
            case 0x294F44u: goto label_294f44;
            case 0x294F48u: goto label_294f48;
            case 0x294F4Cu: goto label_294f4c;
            case 0x294F50u: goto label_294f50;
            case 0x294F54u: goto label_294f54;
            case 0x294F58u: goto label_294f58;
            case 0x294F5Cu: goto label_294f5c;
            case 0x294F60u: goto label_294f60;
            case 0x294F64u: goto label_294f64;
            case 0x294F68u: goto label_294f68;
            case 0x294F6Cu: goto label_294f6c;
            case 0x294F70u: goto label_294f70;
            case 0x294F74u: goto label_294f74;
            case 0x294F78u: goto label_294f78;
            case 0x294F7Cu: goto label_294f7c;
            case 0x294F80u: goto label_294f80;
            case 0x294F84u: goto label_294f84;
            case 0x294F88u: goto label_294f88;
            case 0x294F8Cu: goto label_294f8c;
            case 0x294F90u: goto label_294f90;
            case 0x294F94u: goto label_294f94;
            case 0x294F98u: goto label_294f98;
            case 0x294F9Cu: goto label_294f9c;
            case 0x294FA0u: goto label_294fa0;
            case 0x294FA4u: goto label_294fa4;
            case 0x294FA8u: goto label_294fa8;
            case 0x294FACu: goto label_294fac;
            case 0x294FB0u: goto label_294fb0;
            case 0x294FB4u: goto label_294fb4;
            case 0x294FB8u: goto label_294fb8;
            case 0x294FBCu: goto label_294fbc;
            case 0x294FC0u: goto label_294fc0;
            case 0x294FC4u: goto label_294fc4;
            case 0x294FC8u: goto label_294fc8;
            case 0x294FCCu: goto label_294fcc;
            case 0x294FD0u: goto label_294fd0;
            case 0x294FD4u: goto label_294fd4;
            case 0x294FD8u: goto label_294fd8;
            case 0x294FDCu: goto label_294fdc;
            case 0x294FE0u: goto label_294fe0;
            case 0x294FE4u: goto label_294fe4;
            case 0x294FE8u: goto label_294fe8;
            case 0x294FECu: goto label_294fec;
            case 0x294FF0u: goto label_294ff0;
            case 0x294FF4u: goto label_294ff4;
            case 0x294FF8u: goto label_294ff8;
            case 0x294FFCu: goto label_294ffc;
            case 0x295000u: goto label_295000;
            case 0x295004u: goto label_295004;
            case 0x295008u: goto label_295008;
            case 0x29500Cu: goto label_29500c;
            case 0x295010u: goto label_295010;
            case 0x295014u: goto label_295014;
            case 0x295018u: goto label_295018;
            case 0x29501Cu: goto label_29501c;
            case 0x295020u: goto label_295020;
            case 0x295024u: goto label_295024;
            case 0x295028u: goto label_295028;
            case 0x29502Cu: goto label_29502c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x294A28u;
label_294a28:
    // 0x294a28: 0x96220002
    ctx->pc = 0x294a28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_294a2c:
    // 0x294a2c: 0x30424000
    ctx->pc = 0x294a2cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16384));
label_294a30:
    // 0x294a30: 0x10400017
label_294a34:
    if (ctx->pc == 0x294A34u) {
        ctx->pc = 0x294A34u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 6));
        ctx->pc = 0x294A38u;
        goto label_294a38;
    }
    ctx->pc = 0x294A30u;
    {
        const bool branch_taken_0x294a30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x294A34u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 6));
        if (branch_taken_0x294a30) {
            ctx->pc = 0x294A90u;
            goto label_294a90;
        }
    }
    ctx->pc = 0x294A38u;
label_294a38:
    // 0x294a38: 0xc6610b50
    ctx->pc = 0x294a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294a3c:
    // 0x294a3c: 0x44800000
    ctx->pc = 0x294a3cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_294a40:
    // 0x294a40: 0x46010034
    ctx->pc = 0x294a40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_294a44:
    // 0x294a44: 0x0
    ctx->pc = 0x294a44u;
    // NOP
label_294a48:
    // 0x294a48: 0x45000011
label_294a4c:
    if (ctx->pc == 0x294A4Cu) {
        ctx->pc = 0x294A4Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x294A50u;
        goto label_294a50;
    }
    ctx->pc = 0x294A48u;
    {
        const bool branch_taken_0x294a48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x294A4Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x294a48) {
            ctx->pc = 0x294A90u;
            goto label_294a90;
        }
    }
    ctx->pc = 0x294A50u;
label_294a50:
    // 0x294a50: 0x24420eb0
    ctx->pc = 0x294a50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3760));
label_294a54:
    // 0x294a54: 0x240300f0
    ctx->pc = 0x294a54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 240));
label_294a58:
    // 0x294a58: 0x2831818
    ctx->pc = 0x294a58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_294a5c:
    // 0x294a5c: 0x621821
    ctx->pc = 0x294a5cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_294a60:
    // 0x294a60: 0x3c020031
    ctx->pc = 0x294a60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_294a64:
    // 0x294a64: 0xc440ffb4
    ctx->pc = 0x294a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294a68:
    // 0x294a68: 0x46010000
    ctx->pc = 0x294a68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_294a6c:
    // 0x294a6c: 0x10000008
label_294a70:
    if (ctx->pc == 0x294A70u) {
        ctx->pc = 0x294A70u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
        ctx->pc = 0x294A74u;
        goto label_294a74;
    }
    ctx->pc = 0x294A6Cu;
    {
        const bool branch_taken_0x294a6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x294A70u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
        if (branch_taken_0x294a6c) {
            ctx->pc = 0x294A90u;
            goto label_294a90;
        }
    }
    ctx->pc = 0x294A74u;
label_294a74:
    // 0x294a74: 0x10000006
label_294a78:
    if (ctx->pc == 0x294A78u) {
        ctx->pc = 0x294A78u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x294A7Cu;
        goto label_294a7c;
    }
    ctx->pc = 0x294A74u;
    {
        const bool branch_taken_0x294a74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x294A78u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 48));
        if (branch_taken_0x294a74) {
            ctx->pc = 0x294A90u;
            goto label_294a90;
        }
    }
    ctx->pc = 0x294A7Cu;
label_294a7c:
    // 0x294a7c: 0x10000004
label_294a80:
    if (ctx->pc == 0x294A80u) {
        ctx->pc = 0x294A80u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x294A84u;
        goto label_294a84;
    }
    ctx->pc = 0x294A7Cu;
    {
        const bool branch_taken_0x294a7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x294A80u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 32));
        if (branch_taken_0x294a7c) {
            ctx->pc = 0x294A90u;
            goto label_294a90;
        }
    }
    ctx->pc = 0x294A84u;
label_294a84:
    // 0x294a84: 0x3c01bf80
    ctx->pc = 0x294a84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
label_294a88:
    // 0x294a88: 0x4481a800
    ctx->pc = 0x294a88u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
label_294a8c:
    // 0x294a8c: 0x802d
    ctx->pc = 0x294a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_294a90:
    // 0x294a90: 0x8e220004
    ctx->pc = 0x294a90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_294a94:
    // 0x294a94: 0x3c030002
    ctx->pc = 0x294a94u;
    SET_GPR_U32(ctx, 3, ((uint32_t)2 << 16));
label_294a98:
    // 0x294a98: 0x2032025
    ctx->pc = 0x294a98u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_294a9c:
    // 0x294a9c: 0x431024
    ctx->pc = 0x294a9cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_294aa0:
    // 0x294aa0: 0x82800b
    ctx->pc = 0x294aa0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 4));
label_294aa4:
    // 0x294aa4: 0x96220002
    ctx->pc = 0x294aa4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_294aa8:
    // 0x294aa8: 0x30420040
    ctx->pc = 0x294aa8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
label_294aac:
    // 0x294aac: 0x10400002
label_294ab0:
    if (ctx->pc == 0x294AB0u) {
        ctx->pc = 0x294AB0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->pc = 0x294AB4u;
        goto label_294ab4;
    }
    ctx->pc = 0x294AACu;
    {
        const bool branch_taken_0x294aac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x294AB0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967289));
        if (branch_taken_0x294aac) {
            ctx->pc = 0x294AB8u;
            goto label_294ab8;
        }
    }
    ctx->pc = 0x294AB4u;
label_294ab4:
    // 0x294ab4: 0x2028024
    ctx->pc = 0x294ab4u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_294ab8:
    // 0x294ab8: 0x96220002
    ctx->pc = 0x294ab8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_294abc:
    // 0x294abc: 0x30421000
    ctx->pc = 0x294abcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4096));
label_294ac0:
    // 0x294ac0: 0x10400002
label_294ac4:
    if (ctx->pc == 0x294AC4u) {
        ctx->pc = 0x294AC4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x294AC8u;
        goto label_294ac8;
    }
    ctx->pc = 0x294AC0u;
    {
        const bool branch_taken_0x294ac0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x294AC4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x294ac0) {
            ctx->pc = 0x294ACCu;
            goto label_294acc;
        }
    }
    ctx->pc = 0x294AC8u;
label_294ac8:
    // 0x294ac8: 0x2028024
    ctx->pc = 0x294ac8u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_294acc:
    // 0x294acc: 0x96220002
    ctx->pc = 0x294accu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_294ad0:
    // 0x294ad0: 0x30422000
    ctx->pc = 0x294ad0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8192));
label_294ad4:
    // 0x294ad4: 0x36030400
    ctx->pc = 0x294ad4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 16), 1024));
label_294ad8:
    // 0x294ad8: 0x62800b
    ctx->pc = 0x294ad8u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
label_294adc:
    // 0x294adc: 0x3c030034
    ctx->pc = 0x294adcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_294ae0:
    // 0x294ae0: 0x24630eb0
    ctx->pc = 0x294ae0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
label_294ae4:
    // 0x294ae4: 0x240200f0
    ctx->pc = 0x294ae4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
label_294ae8:
    // 0x294ae8: 0x2821018
    ctx->pc = 0x294ae8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_294aec:
    // 0x294aec: 0x432821
    ctx->pc = 0x294aecu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_294af0:
    // 0x294af0: 0x8ca20064
    ctx->pc = 0x294af0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 100)));
label_294af4:
    // 0x294af4: 0x2021025
    ctx->pc = 0x294af4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_294af8:
    // 0x294af8: 0xaca20064
    ctx->pc = 0x294af8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 2));
label_294afc:
    // 0x294afc: 0x8ec20000
    ctx->pc = 0x294afcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_294b00:
    // 0x294b00: 0x30420010
    ctx->pc = 0x294b00u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
label_294b04:
    // 0x294b04: 0x50400008
label_294b08:
    if (ctx->pc == 0x294B08u) {
        ctx->pc = 0x294B08u;
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x294B0Cu;
        goto label_294b0c;
    }
    ctx->pc = 0x294B04u;
    {
        const bool branch_taken_0x294b04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x294b04) {
            ctx->pc = 0x294B08u;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x294B28u;
            goto label_294b28;
        }
    }
    ctx->pc = 0x294B0Cu;
label_294b0c:
    // 0x294b0c: 0x86220042
    ctx->pc = 0x294b0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 66)));
label_294b10:
    // 0x294b10: 0x4430005
label_294b14:
    if (ctx->pc == 0x294B14u) {
        ctx->pc = 0x294B14u;
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x294B18u;
        goto label_294b18;
    }
    ctx->pc = 0x294B10u;
    {
        const bool branch_taken_0x294b10 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x294b10) {
            ctx->pc = 0x294B14u;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x294B28u;
            goto label_294b28;
        }
    }
    ctx->pc = 0x294B18u;
label_294b18:
    // 0x294b18: 0x280202d
    ctx->pc = 0x294b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_294b1c:
    // 0x294b1c: 0xc09eaa0
label_294b20:
    if (ctx->pc == 0x294B20u) {
        ctx->pc = 0x294B20u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 20)));
        ctx->pc = 0x294B24u;
        goto label_294b24;
    }
    ctx->pc = 0x294B1Cu;
    SET_GPR_U32(ctx, 31, 0x294B24u);
    ctx->pc = 0x294B20u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 20)));
    ctx->pc = 0x27AA80u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlaceEffectOnFloor_0x27aa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294B24u; }
    }
    if (ctx->pc != 0x294B24u) { return; }
    ctx->pc = 0x294B24u;
label_294b24:
    // 0x294b24: 0x86230000
    ctx->pc = 0x294b24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_294b28:
    // 0x294b28: 0x24020001
    ctx->pc = 0x294b28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_294b2c:
    // 0x294b2c: 0x1062001a
label_294b30:
    if (ctx->pc == 0x294B30u) {
        ctx->pc = 0x294B34u;
        goto label_294b34;
    }
    ctx->pc = 0x294B2Cu;
    {
        const bool branch_taken_0x294b2c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x294b2c) {
            ctx->pc = 0x294B98u;
            goto label_294b98;
        }
    }
    ctx->pc = 0x294B34u;
label_294b34:
    // 0x294b34: 0xc62c0014
    ctx->pc = 0x294b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_294b38:
    // 0x294b38: 0x44800000
    ctx->pc = 0x294b38u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_294b3c:
    // 0x294b3c: 0x46006032
    ctx->pc = 0x294b3cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_294b40:
    // 0x294b40: 0x0
    ctx->pc = 0x294b40u;
    // NOP
label_294b44:
    // 0x294b44: 0x4503000a
label_294b48:
    if (ctx->pc == 0x294B48u) {
        ctx->pc = 0x294B48u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x294B4Cu;
        goto label_294b4c;
    }
    ctx->pc = 0x294B44u;
    {
        const bool branch_taken_0x294b44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x294b44) {
            ctx->pc = 0x294B48u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->pc = 0x294B70u;
            goto label_294b70;
        }
    }
    ctx->pc = 0x294B4Cu;
label_294b4c:
    // 0x294b4c: 0x3c030034
    ctx->pc = 0x294b4cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_294b50:
    // 0x294b50: 0x24630eb0
    ctx->pc = 0x294b50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
label_294b54:
    // 0x294b54: 0x240200f0
    ctx->pc = 0x294b54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
label_294b58:
    // 0x294b58: 0x2821018
    ctx->pc = 0x294b58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_294b5c:
    // 0x294b5c: 0x431021
    ctx->pc = 0x294b5cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_294b60:
    // 0x294b60: 0xc0b5632
label_294b64:
    if (ctx->pc == 0x294B64u) {
        ctx->pc = 0x294B64u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->pc = 0x294B68u;
        goto label_294b68;
    }
    ctx->pc = 0x294B60u;
    SET_GPR_U32(ctx, 31, 0x294B68u);
    ctx->pc = 0x294B64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->pc = 0x2D58C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        YawMat3_0x2d58c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294B68u; }
    }
    if (ctx->pc != 0x294B68u) { return; }
    ctx->pc = 0x294B68u;
label_294b68:
    // 0x294b68: 0xc62c001c
    ctx->pc = 0x294b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_294b6c:
    // 0x294b6c: 0x44800000
    ctx->pc = 0x294b6cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_294b70:
    // 0x294b70: 0x46006032
    ctx->pc = 0x294b70u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_294b74:
    // 0x294b74: 0x0
    ctx->pc = 0x294b74u;
    // NOP
label_294b78:
    // 0x294b78: 0x45010007
label_294b7c:
    if (ctx->pc == 0x294B7Cu) {
        ctx->pc = 0x294B7Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        ctx->pc = 0x294B80u;
        goto label_294b80;
    }
    ctx->pc = 0x294B78u;
    {
        const bool branch_taken_0x294b78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x294B7Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x294b78) {
            ctx->pc = 0x294B98u;
            goto label_294b98;
        }
    }
    ctx->pc = 0x294B80u;
label_294b80:
    // 0x294b80: 0x24630eb0
    ctx->pc = 0x294b80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
label_294b84:
    // 0x294b84: 0x240200f0
    ctx->pc = 0x294b84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
label_294b88:
    // 0x294b88: 0x2821018
    ctx->pc = 0x294b88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_294b8c:
    // 0x294b8c: 0x431021
    ctx->pc = 0x294b8cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_294b90:
    // 0x294b90: 0xc0b55da
label_294b94:
    if (ctx->pc == 0x294B94u) {
        ctx->pc = 0x294B94u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->pc = 0x294B98u;
        goto label_294b98;
    }
    ctx->pc = 0x294B90u;
    SET_GPR_U32(ctx, 31, 0x294B98u);
    ctx->pc = 0x294B94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->pc = 0x2D5768u;
    {
        const uint32_t __entryPc = ctx->pc;
        WPitchMat3_0x2d5768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294B98u; }
    }
    if (ctx->pc != 0x294B98u) { return; }
    ctx->pc = 0x294B98u;
label_294b98:
    // 0x294b98: 0x44800000
    ctx->pc = 0x294b98u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_294b9c:
    // 0x294b9c: 0x46150036
    ctx->pc = 0x294b9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_294ba0:
    // 0x294ba0: 0x0
    ctx->pc = 0x294ba0u;
    // NOP
label_294ba4:
    // 0x294ba4: 0x45000114
label_294ba8:
    if (ctx->pc == 0x294BA8u) {
        ctx->pc = 0x294BA8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        ctx->pc = 0x294BACu;
        goto label_294bac;
    }
    ctx->pc = 0x294BA4u;
    {
        const bool branch_taken_0x294ba4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x294BA8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x294ba4) {
            ctx->pc = 0x294FF8u;
            goto label_294ff8;
        }
    }
    ctx->pc = 0x294BACu;
label_294bac:
    // 0x294bac: 0xc621000c
    ctx->pc = 0x294bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294bb0:
    // 0x294bb0: 0x4601a042
    ctx->pc = 0x294bb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_294bb4:
    // 0x294bb4: 0xc6200008
    ctx->pc = 0x294bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294bb8:
    // 0x294bb8: 0x4600a582
    ctx->pc = 0x294bb8u;
    ctx->f[22] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_294bbc:
    // 0x294bbc: 0x24630eb0
    ctx->pc = 0x294bbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
label_294bc0:
    // 0x294bc0: 0x240200f0
    ctx->pc = 0x294bc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
label_294bc4:
    // 0x294bc4: 0x2821018
    ctx->pc = 0x294bc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_294bc8:
    // 0x294bc8: 0x439021
    ctx->pc = 0x294bc8u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_294bcc:
    // 0x294bcc: 0x3c020034
    ctx->pc = 0x294bccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_294bd0:
    // 0x294bd0: 0x8c42e7c8
    ctx->pc = 0x294bd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
label_294bd4:
    // 0x294bd4: 0xc44000bc
    ctx->pc = 0x294bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294bd8:
    // 0x294bd8: 0x4600a802
    ctx->pc = 0x294bd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_294bdc:
    // 0x294bdc: 0xe64000ac
    ctx->pc = 0x294bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 172), bits); }
label_294be0:
    // 0x294be0: 0xc6200018
    ctx->pc = 0x294be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294be4:
    // 0x294be4: 0xe640009c
    ctx->pc = 0x294be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 156), bits); }
label_294be8:
    // 0x294be8: 0xe64100b8
    ctx->pc = 0x294be8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 184), bits); }
label_294bec:
    // 0x294bec: 0x8e220004
    ctx->pc = 0x294becu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_294bf0:
    // 0x294bf0: 0xae4200b4
    ctx->pc = 0x294bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
label_294bf4:
    // 0x294bf4: 0x86220042
    ctx->pc = 0x294bf4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 66)));
label_294bf8:
    // 0x294bf8: 0x4400010
label_294bfc:
    if (ctx->pc == 0x294BFCu) {
        ctx->pc = 0x294BFCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x294C00u;
        goto label_294c00;
    }
    ctx->pc = 0x294BF8u;
    {
        const bool branch_taken_0x294bf8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x294BFCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 80));
        if (branch_taken_0x294bf8) {
            ctx->pc = 0x294C3Cu;
            goto label_294c3c;
        }
    }
    ctx->pc = 0x294C00u;
label_294c00:
    // 0x294c00: 0x508018
    ctx->pc = 0x294c00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_294c04:
    // 0x294c04: 0x8ea2004c
    ctx->pc = 0x294c04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_294c08:
    // 0x294c08: 0x2028021
    ctx->pc = 0x294c08u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_294c0c:
    // 0x294c0c: 0x280202d
    ctx->pc = 0x294c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_294c10:
    // 0x294c10: 0x8e050008
    ctx->pc = 0x294c10u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_294c14:
    // 0x294c14: 0x8e06000c
    ctx->pc = 0x294c14u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_294c18:
    // 0x294c18: 0xc09f768
label_294c1c:
    if (ctx->pc == 0x294C1Cu) {
        ctx->pc = 0x294C1Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x294C20u;
        goto label_294c20;
    }
    ctx->pc = 0x294C18u;
    SET_GPR_U32(ctx, 31, 0x294C20u);
    ctx->pc = 0x294C1Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27DDA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetHit_0x27dda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294C20u; }
    }
    if (ctx->pc != 0x294C20u) { return; }
    ctx->pc = 0x294C20u;
label_294c20:
    // 0x294c20: 0x8e020000
    ctx->pc = 0x294c20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_294c24:
    // 0x294c24: 0x30420010
    ctx->pc = 0x294c24u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
label_294c28:
    // 0x294c28: 0x10400004
label_294c2c:
    if (ctx->pc == 0x294C2Cu) {
        ctx->pc = 0x294C2Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)32 << 16));
        ctx->pc = 0x294C30u;
        goto label_294c30;
    }
    ctx->pc = 0x294C28u;
    {
        const bool branch_taken_0x294c28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x294C2Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)32 << 16));
        if (branch_taken_0x294c28) {
            ctx->pc = 0x294C3Cu;
            goto label_294c3c;
        }
    }
    ctx->pc = 0x294C30u;
label_294c30:
    // 0x294c30: 0x8e420064
    ctx->pc = 0x294c30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_294c34:
    // 0x294c34: 0x431025
    ctx->pc = 0x294c34u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_294c38:
    // 0x294c38: 0xae420064
    ctx->pc = 0x294c38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
label_294c3c:
    // 0x294c3c: 0x86220044
    ctx->pc = 0x294c3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 68)));
label_294c40:
    // 0x294c40: 0x440002e
label_294c44:
    if (ctx->pc == 0x294C44u) {
        ctx->pc = 0x294C44u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x294C48u;
        goto label_294c48;
    }
    ctx->pc = 0x294C40u;
    {
        const bool branch_taken_0x294c40 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x294C44u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 80));
        if (branch_taken_0x294c40) {
            ctx->pc = 0x294CFCu;
            goto label_294cfc;
        }
    }
    ctx->pc = 0x294C48u;
label_294c48:
    // 0x294c48: 0x8ea3004c
    ctx->pc = 0x294c48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_294c4c:
    // 0x294c4c: 0x441018
    ctx->pc = 0x294c4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_294c50:
    // 0x294c50: 0x431021
    ctx->pc = 0x294c50u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_294c54:
    // 0x294c54: 0x8c450008
    ctx->pc = 0x294c54u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_294c58:
    // 0x294c58: 0x86220046
    ctx->pc = 0x294c58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 70)));
label_294c5c:
    // 0x294c5c: 0x4400004
label_294c60:
    if (ctx->pc == 0x294C60u) {
        ctx->pc = 0x294C60u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x294C64u;
        goto label_294c64;
    }
    ctx->pc = 0x294C5Cu;
    {
        const bool branch_taken_0x294c5c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x294C60u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x294c5c) {
            ctx->pc = 0x294C70u;
            goto label_294c70;
        }
    }
    ctx->pc = 0x294C64u;
label_294c64:
    // 0x294c64: 0x443018
    ctx->pc = 0x294c64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_294c68:
    // 0x294c68: 0xc31021
    ctx->pc = 0x294c68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_294c6c:
    // 0x294c6c: 0x8c460008
    ctx->pc = 0x294c6cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_294c70:
    // 0x294c70: 0xc634003c
    ctx->pc = 0x294c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_294c74:
    // 0x294c74: 0x44800000
    ctx->pc = 0x294c74u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_294c78:
    // 0x294c78: 0x4600a036
    ctx->pc = 0x294c78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_294c7c:
    // 0x294c7c: 0x0
    ctx->pc = 0x294c7cu;
    // NOP
label_294c80:
    // 0x294c80: 0x45000003
label_294c84:
    if (ctx->pc == 0x294C84u) {
        ctx->pc = 0x294C84u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x294C88u;
        goto label_294c88;
    }
    ctx->pc = 0x294C80u;
    {
        const bool branch_taken_0x294c80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x294C84u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x294c80) {
            ctx->pc = 0x294C90u;
            goto label_294c90;
        }
    }
    ctx->pc = 0x294C88u;
label_294c88:
    // 0x294c88: 0x3c014170
    ctx->pc = 0x294c88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16752 << 16));
label_294c8c:
    // 0x294c8c: 0x4481a000
    ctx->pc = 0x294c8cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_294c90:
    // 0x294c90: 0xc09f802
label_294c94:
    if (ctx->pc == 0x294C94u) {
        ctx->pc = 0x294C94u;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x294C98u;
        goto label_294c98;
    }
    ctx->pc = 0x294C90u;
    SET_GPR_U32(ctx, 31, 0x294C98u);
    ctx->pc = 0x294C94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x27E008u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetMorph_0x27e008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294C98u; }
    }
    if (ctx->pc != 0x294C98u) { return; }
    ctx->pc = 0x294C98u;
label_294c98:
    // 0x294c98: 0x96220002
    ctx->pc = 0x294c98u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_294c9c:
    // 0x294c9c: 0x30420800
    ctx->pc = 0x294c9cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2048));
label_294ca0:
    // 0x294ca0: 0x10400008
label_294ca4:
    if (ctx->pc == 0x294CA4u) {
        ctx->pc = 0x294CA4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x294CA8u;
        goto label_294ca8;
    }
    ctx->pc = 0x294CA0u;
    {
        const bool branch_taken_0x294ca0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x294CA4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x294ca0) {
            ctx->pc = 0x294CC4u;
            goto label_294cc4;
        }
    }
    ctx->pc = 0x294CA8u;
label_294ca8:
    // 0x294ca8: 0x24420eb0
    ctx->pc = 0x294ca8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3760));
label_294cac:
    // 0x294cac: 0x240300f0
    ctx->pc = 0x294cacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 240));
label_294cb0:
    // 0x294cb0: 0x2831818
    ctx->pc = 0x294cb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_294cb4:
    // 0x294cb4: 0x621821
    ctx->pc = 0x294cb4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_294cb8:
    // 0x294cb8: 0x8c620064
    ctx->pc = 0x294cb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_294cbc:
    // 0x294cbc: 0x34428000
    ctx->pc = 0x294cbcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32768));
label_294cc0:
    // 0x294cc0: 0xac620064
    ctx->pc = 0x294cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
label_294cc4:
    // 0x294cc4: 0x8e220004
    ctx->pc = 0x294cc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_294cc8:
    // 0x294cc8: 0x3c030400
    ctx->pc = 0x294cc8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1024 << 16));
label_294ccc:
    // 0x294ccc: 0x431024
    ctx->pc = 0x294cccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_294cd0:
    // 0x294cd0: 0x1040000a
label_294cd4:
    if (ctx->pc == 0x294CD4u) {
        ctx->pc = 0x294CD4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        ctx->pc = 0x294CD8u;
        goto label_294cd8;
    }
    ctx->pc = 0x294CD0u;
    {
        const bool branch_taken_0x294cd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x294CD4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x294cd0) {
            ctx->pc = 0x294CFCu;
            goto label_294cfc;
        }
    }
    ctx->pc = 0x294CD8u;
label_294cd8:
    // 0x294cd8: 0x24630eb0
    ctx->pc = 0x294cd8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
label_294cdc:
    // 0x294cdc: 0x240200f0
    ctx->pc = 0x294cdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
label_294ce0:
    // 0x294ce0: 0x2821018
    ctx->pc = 0x294ce0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_294ce4:
    // 0x294ce4: 0x431021
    ctx->pc = 0x294ce4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_294ce8:
    // 0x294ce8: 0xe4540078
    ctx->pc = 0x294ce8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
label_294cec:
    // 0x294cec: 0x8c430064
    ctx->pc = 0x294cecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_294cf0:
    // 0x294cf0: 0x2404ffdf
    ctx->pc = 0x294cf0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967263));
label_294cf4:
    // 0x294cf4: 0x641824
    ctx->pc = 0x294cf4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_294cf8:
    // 0x294cf8: 0xac430064
    ctx->pc = 0x294cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
label_294cfc:
    // 0x294cfc: 0xc6210030
    ctx->pc = 0x294cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294d00:
    // 0x294d00: 0x44800000
    ctx->pc = 0x294d00u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_294d04:
    // 0x294d04: 0x46010034
    ctx->pc = 0x294d04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_294d08:
    // 0x294d08: 0x0
    ctx->pc = 0x294d08u;
    // NOP
label_294d0c:
    // 0x294d0c: 0x450000ab
label_294d10:
    if (ctx->pc == 0x294D10u) {
        ctx->pc = 0x294D10u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x294D14u;
        goto label_294d14;
    }
    ctx->pc = 0x294D0Cu;
    {
        const bool branch_taken_0x294d0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x294D10u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x294d0c) {
            ctx->pc = 0x294FBCu;
            goto label_294fbc;
        }
    }
    ctx->pc = 0x294D14u;
label_294d14:
    // 0x294d14: 0xc660011c
    ctx->pc = 0x294d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294d18:
    // 0x294d18: 0x3c013f00
    ctx->pc = 0x294d18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
label_294d1c:
    // 0x294d1c: 0x44810800
    ctx->pc = 0x294d1cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_294d20:
    // 0x294d20: 0x46010034
    ctx->pc = 0x294d20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_294d24:
    // 0x294d24: 0x0
    ctx->pc = 0x294d24u;
    // NOP
label_294d28:
    // 0x294d28: 0x45010009
label_294d2c:
    if (ctx->pc == 0x294D2Cu) {
        ctx->pc = 0x294D2Cu;
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x294D30u;
        goto label_294d30;
    }
    ctx->pc = 0x294D28u;
    {
        const bool branch_taken_0x294d28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x294D2Cu;
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        if (branch_taken_0x294d28) {
            ctx->pc = 0x294D50u;
            goto label_294d50;
        }
    }
    ctx->pc = 0x294D30u;
label_294d30:
    // 0x294d30: 0xc661011c
    ctx->pc = 0x294d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294d34:
    // 0x294d34: 0x3c013fc0
    ctx->pc = 0x294d34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16320 << 16));
label_294d38:
    // 0x294d38: 0x44810000
    ctx->pc = 0x294d38u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_294d3c:
    // 0x294d3c: 0x46010034
    ctx->pc = 0x294d3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_294d40:
    // 0x294d40: 0x0
    ctx->pc = 0x294d40u;
    // NOP
label_294d44:
    // 0x294d44: 0x45010002
label_294d48:
    if (ctx->pc == 0x294D48u) {
        ctx->pc = 0x294D48u;
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x294D4Cu;
        goto label_294d4c;
    }
    ctx->pc = 0x294D44u;
    {
        const bool branch_taken_0x294d44 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x294D48u;
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x294d44) {
            ctx->pc = 0x294D50u;
            goto label_294d50;
        }
    }
    ctx->pc = 0x294D4Cu;
label_294d4c:
    // 0x294d4c: 0x46000886
    ctx->pc = 0x294d4cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_294d50:
    // 0x294d50: 0x3c013f00
    ctx->pc = 0x294d50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
label_294d54:
    // 0x294d54: 0x44810000
    ctx->pc = 0x294d54u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_294d58:
    // 0x294d58: 0x46001081
    ctx->pc = 0x294d58u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_294d5c:
    // 0x294d5c: 0x3c013f40
    ctx->pc = 0x294d5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16192 << 16));
label_294d60:
    // 0x294d60: 0x44810000
    ctx->pc = 0x294d60u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_294d64:
    // 0x294d64: 0x46001082
    ctx->pc = 0x294d64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_294d68:
    // 0x294d68: 0xc6200034
    ctx->pc = 0x294d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294d6c:
    // 0x294d6c: 0xc6210030
    ctx->pc = 0x294d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294d70:
    // 0x294d70: 0x46010001
    ctx->pc = 0x294d70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_294d74:
    // 0x294d74: 0x46020002
    ctx->pc = 0x294d74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_294d78:
    // 0x294d78: 0x96220002
    ctx->pc = 0x294d78u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_294d7c:
    // 0x294d7c: 0x30420004
    ctx->pc = 0x294d7cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
label_294d80:
    // 0x294d80: 0x10400008
label_294d84:
    if (ctx->pc == 0x294D84u) {
        ctx->pc = 0x294D84u;
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x294D88u;
        goto label_294d88;
    }
    ctx->pc = 0x294D80u;
    {
        const bool branch_taken_0x294d80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x294D84u;
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x294d80) {
            ctx->pc = 0x294DA4u;
            goto label_294da4;
        }
    }
    ctx->pc = 0x294D88u;
label_294d88:
    // 0x294d88: 0xc6600030
    ctx->pc = 0x294d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294d8c:
    // 0x294d8c: 0xe7a00010
    ctx->pc = 0x294d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_294d90:
    // 0x294d90: 0xc6600034
    ctx->pc = 0x294d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294d94:
    // 0x294d94: 0xe7a00014
    ctx->pc = 0x294d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_294d98:
    // 0x294d98: 0xc6600038
    ctx->pc = 0x294d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294d9c:
    // 0x294d9c: 0x10000023
label_294da0:
    if (ctx->pc == 0x294DA0u) {
        ctx->pc = 0x294DA0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->pc = 0x294DA4u;
        goto label_294da4;
    }
    ctx->pc = 0x294D9Cu;
    {
        const bool branch_taken_0x294d9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x294DA0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        if (branch_taken_0x294d9c) {
            ctx->pc = 0x294E2Cu;
            goto label_294e2c;
        }
    }
    ctx->pc = 0x294DA4u;
label_294da4:
    // 0x294da4: 0x96220002
    ctx->pc = 0x294da4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_294da8:
    // 0x294da8: 0x30420001
    ctx->pc = 0x294da8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_294dac:
    // 0x294dac: 0x50400019
label_294db0:
    if (ctx->pc == 0x294DB0u) {
        ctx->pc = 0x294DB0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x294DB4u;
        goto label_294db4;
    }
    ctx->pc = 0x294DACu;
    {
        const bool branch_taken_0x294dac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x294dac) {
            ctx->pc = 0x294DB0u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x294E14u;
            goto label_294e14;
        }
    }
    ctx->pc = 0x294DB4u;
label_294db4:
    // 0x294db4: 0x86640130
    ctx->pc = 0x294db4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 304)));
label_294db8:
    // 0x294db8: 0x4820016
label_294dbc:
    if (ctx->pc == 0x294DBCu) {
        ctx->pc = 0x294DBCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x294DC0u;
        goto label_294dc0;
    }
    ctx->pc = 0x294DB8u;
    {
        const bool branch_taken_0x294db8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x294db8) {
            ctx->pc = 0x294DBCu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x294E14u;
            goto label_294e14;
        }
    }
    ctx->pc = 0x294DC0u;
label_294dc0:
    // 0x294dc0: 0xc08c61e
label_294dc4:
    if (ctx->pc == 0x294DC4u) {
        ctx->pc = 0x294DC4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x294DC8u;
        goto label_294dc8;
    }
    ctx->pc = 0x294DC0u;
    SET_GPR_U32(ctx, 31, 0x294DC8u);
    ctx->pc = 0x294DC4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x231878u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerColPos_0x231878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294DC8u; }
    }
    if (ctx->pc != 0x294DC8u) { return; }
    ctx->pc = 0x294DC8u;
label_294dc8:
    // 0x294dc8: 0x3c030034
    ctx->pc = 0x294dc8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_294dcc:
    // 0x294dcc: 0x24630eb0
    ctx->pc = 0x294dccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
label_294dd0:
    // 0x294dd0: 0x240200f0
    ctx->pc = 0x294dd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
label_294dd4:
    // 0x294dd4: 0x2821018
    ctx->pc = 0x294dd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_294dd8:
    // 0x294dd8: 0x431021
    ctx->pc = 0x294dd8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_294ddc:
    // 0x294ddc: 0x8c420014
    ctx->pc = 0x294ddcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_294de0:
    // 0x294de0: 0xc7a00010
    ctx->pc = 0x294de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294de4:
    // 0x294de4: 0xc4410030
    ctx->pc = 0x294de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294de8:
    // 0x294de8: 0x46010001
    ctx->pc = 0x294de8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_294dec:
    // 0x294dec: 0xe7a00010
    ctx->pc = 0x294decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_294df0:
    // 0x294df0: 0xc7a00014
    ctx->pc = 0x294df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294df4:
    // 0x294df4: 0xc4410034
    ctx->pc = 0x294df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294df8:
    // 0x294df8: 0x46010001
    ctx->pc = 0x294df8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_294dfc:
    // 0x294dfc: 0xe7a00014
    ctx->pc = 0x294dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_294e00:
    // 0x294e00: 0xc7a00018
    ctx->pc = 0x294e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294e04:
    // 0x294e04: 0xc4410038
    ctx->pc = 0x294e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294e08:
    // 0x294e08: 0x46010001
    ctx->pc = 0x294e08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_294e0c:
    // 0x294e0c: 0x10000007
label_294e10:
    if (ctx->pc == 0x294E10u) {
        ctx->pc = 0x294E10u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->pc = 0x294E14u;
        goto label_294e14;
    }
    ctx->pc = 0x294E0Cu;
    {
        const bool branch_taken_0x294e0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x294E10u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        if (branch_taken_0x294e0c) {
            ctx->pc = 0x294E2Cu;
            goto label_294e2c;
        }
    }
    ctx->pc = 0x294E14u;
label_294e14:
    // 0x294e14: 0xe7a00010
    ctx->pc = 0x294e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_294e18:
    // 0x294e18: 0xc6600038
    ctx->pc = 0x294e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294e1c:
    // 0x294e1c: 0xe7a00018
    ctx->pc = 0x294e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_294e20:
    // 0x294e20: 0x3c01bf00
    ctx->pc = 0x294e20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48896 << 16));
label_294e24:
    // 0x294e24: 0x44810000
    ctx->pc = 0x294e24u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_294e28:
    // 0x294e28: 0xe7a00014
    ctx->pc = 0x294e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_294e2c:
    // 0x294e2c: 0x96220002
    ctx->pc = 0x294e2cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_294e30:
    // 0x294e30: 0x30420008
    ctx->pc = 0x294e30u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
label_294e34:
    // 0x294e34: 0x1440000c
label_294e38:
    if (ctx->pc == 0x294E38u) {
        ctx->pc = 0x294E38u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x294E3Cu;
        goto label_294e3c;
    }
    ctx->pc = 0x294E34u;
    {
        const bool branch_taken_0x294e34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x294E38u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
        if (branch_taken_0x294e34) {
            ctx->pc = 0x294E68u;
            goto label_294e68;
        }
    }
    ctx->pc = 0x294E3Cu;
label_294e3c:
    // 0x294e3c: 0x3c013f80
    ctx->pc = 0x294e3cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_294e40:
    // 0x294e40: 0x44816800
    ctx->pc = 0x294e40u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
label_294e44:
    // 0x294e44: 0x4600ab06
    ctx->pc = 0x294e44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_294e48:
    // 0x294e48: 0x0
    ctx->pc = 0x294e48u;
    // NOP
label_294e4c:
    // 0x294e4c: 0x0
    ctx->pc = 0x294e4cu;
    // NOP
label_294e50:
    // 0x294e50: 0x46156b43
    ctx->pc = 0x294e50u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[21];
label_294e54:
    // 0x294e54: 0x44807800
    ctx->pc = 0x294e54u;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 0);
label_294e58:
    // 0x294e58: 0xc0a3dc2
label_294e5c:
    if (ctx->pc == 0x294E5Cu) {
        ctx->pc = 0x294E5Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->pc = 0x294E60u;
        goto label_294e60;
    }
    ctx->pc = 0x294E58u;
    SET_GPR_U32(ctx, 31, 0x294E60u);
    ctx->pc = 0x294E5Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->pc = 0x28F708u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcTargetDir_0x28f708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294E60u; }
    }
    if (ctx->pc != 0x294E60u) { return; }
    ctx->pc = 0x294E60u;
label_294e60:
    // 0x294e60: 0x10000004
label_294e64:
    if (ctx->pc == 0x294E64u) {
        ctx->pc = 0x294E64u;
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x294E68u;
        goto label_294e68;
    }
    ctx->pc = 0x294E60u;
    {
        const bool branch_taken_0x294e60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x294E64u;
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        if (branch_taken_0x294e60) {
            ctx->pc = 0x294E74u;
            goto label_294e74;
        }
    }
    ctx->pc = 0x294E68u;
label_294e68:
    // 0x294e68: 0xc0b58a4
label_294e6c:
    if (ctx->pc == 0x294E6Cu) {
        ctx->pc = 0x294E6Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x294E70u;
        goto label_294e70;
    }
    ctx->pc = 0x294E68u;
    SET_GPR_U32(ctx, 31, 0x294E70u);
    ctx->pc = 0x294E6Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294E70u; }
    }
    if (ctx->pc != 0x294E70u) { return; }
    ctx->pc = 0x294E70u;
label_294e70:
    // 0x294e70: 0x86230000
    ctx->pc = 0x294e70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_294e74:
    // 0x294e74: 0x24020001
    ctx->pc = 0x294e74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_294e78:
    // 0x294e78: 0x1462002d
label_294e7c:
    if (ctx->pc == 0x294E7Cu) {
        ctx->pc = 0x294E7Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x294E80u;
        goto label_294e80;
    }
    ctx->pc = 0x294E78u;
    {
        const bool branch_taken_0x294e78 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x294E7Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x294e78) {
            ctx->pc = 0x294F30u;
            goto label_294f30;
        }
    }
    ctx->pc = 0x294E80u;
label_294e80:
    // 0x294e80: 0xc6200014
    ctx->pc = 0x294e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294e84:
    // 0x294e84: 0x44800800
    ctx->pc = 0x294e84u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
label_294e88:
    // 0x294e88: 0x46010032
    ctx->pc = 0x294e88u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_294e8c:
    // 0x294e8c: 0x0
    ctx->pc = 0x294e8cu;
    // NOP
label_294e90:
    // 0x294e90: 0x45020007
label_294e94:
    if (ctx->pc == 0x294E94u) {
        ctx->pc = 0x294E94u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x294E98u;
        goto label_294e98;
    }
    ctx->pc = 0x294E90u;
    {
        const bool branch_taken_0x294e90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x294e90) {
            ctx->pc = 0x294E94u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->pc = 0x294EB0u;
            goto label_294eb0;
        }
    }
    ctx->pc = 0x294E98u;
label_294e98:
    // 0x294e98: 0xc6200048
    ctx->pc = 0x294e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294e9c:
    // 0x294e9c: 0x46010032
    ctx->pc = 0x294e9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_294ea0:
    // 0x294ea0: 0x0
    ctx->pc = 0x294ea0u;
    // NOP
label_294ea4:
    // 0x294ea4: 0x45030015
label_294ea8:
    if (ctx->pc == 0x294EA8u) {
        ctx->pc = 0x294EA8u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->pc = 0x294EACu;
        goto label_294eac;
    }
    ctx->pc = 0x294EA4u;
    {
        const bool branch_taken_0x294ea4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x294ea4) {
            ctx->pc = 0x294EA8u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->pc = 0x294EFCu;
            goto label_294efc;
        }
    }
    ctx->pc = 0x294EACu;
label_294eac:
    // 0x294eac: 0xc62c0048
    ctx->pc = 0x294eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_294eb0:
    // 0x294eb0: 0x44800000
    ctx->pc = 0x294eb0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_294eb4:
    // 0x294eb4: 0x460c0034
    ctx->pc = 0x294eb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_294eb8:
    // 0x294eb8: 0x0
    ctx->pc = 0x294eb8u;
    // NOP
label_294ebc:
    // 0x294ebc: 0x4500000a
label_294ec0:
    if (ctx->pc == 0x294EC0u) {
        ctx->pc = 0x294EC0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x294EC4u;
        goto label_294ec4;
    }
    ctx->pc = 0x294EBCu;
    {
        const bool branch_taken_0x294ebc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x294EC0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        if (branch_taken_0x294ebc) {
            ctx->pc = 0x294EE8u;
            goto label_294ee8;
        }
    }
    ctx->pc = 0x294EC4u;
label_294ec4:
    // 0x294ec4: 0xc0b5c06
label_294ec8:
    if (ctx->pc == 0x294EC8u) {
        ctx->pc = 0x294ECCu;
        goto label_294ecc;
    }
    ctx->pc = 0x294EC4u;
    SET_GPR_U32(ctx, 31, 0x294ECCu);
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294ECCu; }
    }
    if (ctx->pc != 0x294ECCu) { return; }
    ctx->pc = 0x294ECCu;
label_294ecc:
    // 0x294ecc: 0xc6210048
    ctx->pc = 0x294eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294ed0:
    // 0x294ed0: 0x46000847
    ctx->pc = 0x294ed0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_294ed4:
    // 0x294ed4: 0x3c013f00
    ctx->pc = 0x294ed4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
label_294ed8:
    // 0x294ed8: 0x44811000
    ctx->pc = 0x294ed8u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
label_294edc:
    // 0x294edc: 0x46020842
    ctx->pc = 0x294edcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_294ee0:
    // 0x294ee0: 0x46000840
    ctx->pc = 0x294ee0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_294ee4:
    // 0x294ee4: 0x4601a500
    ctx->pc = 0x294ee4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_294ee8:
    // 0x294ee8: 0x27a50010
    ctx->pc = 0x294ee8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
label_294eec:
    // 0x294eec: 0xa0202d
    ctx->pc = 0x294eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_294ef0:
    // 0x294ef0: 0xc0b57e6
label_294ef4:
    if (ctx->pc == 0x294EF4u) {
        ctx->pc = 0x294EF4u;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x294EF8u;
        goto label_294ef8;
    }
    ctx->pc = 0x294EF0u;
    SET_GPR_U32(ctx, 31, 0x294EF8u);
    ctx->pc = 0x294EF4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2D5F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        YawVec3_0x2d5f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294EF8u; }
    }
    if (ctx->pc != 0x294EF8u) { return; }
    ctx->pc = 0x294EF8u;
label_294ef8:
    // 0x294ef8: 0x96220002
    ctx->pc = 0x294ef8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_294efc:
    // 0x294efc: 0x30420008
    ctx->pc = 0x294efcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
label_294f00:
    // 0x294f00: 0x1040000b
label_294f04:
    if (ctx->pc == 0x294F04u) {
        ctx->pc = 0x294F04u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x294F08u;
        goto label_294f08;
    }
    ctx->pc = 0x294F00u;
    {
        const bool branch_taken_0x294f00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x294F04u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x294f00) {
            ctx->pc = 0x294F30u;
            goto label_294f30;
        }
    }
    ctx->pc = 0x294F08u;
label_294f08:
    // 0x294f08: 0xc62c001c
    ctx->pc = 0x294f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_294f0c:
    // 0x294f0c: 0x44800000
    ctx->pc = 0x294f0cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_294f10:
    // 0x294f10: 0x46006032
    ctx->pc = 0x294f10u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_294f14:
    // 0x294f14: 0x0
    ctx->pc = 0x294f14u;
    // NOP
label_294f18:
    // 0x294f18: 0x45010005
label_294f1c:
    if (ctx->pc == 0x294F1Cu) {
        ctx->pc = 0x294F1Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x294F20u;
        goto label_294f20;
    }
    ctx->pc = 0x294F18u;
    {
        const bool branch_taken_0x294f18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x294F1Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x294f18) {
            ctx->pc = 0x294F30u;
            goto label_294f30;
        }
    }
    ctx->pc = 0x294F20u;
label_294f20:
    // 0x294f20: 0x27a50010
    ctx->pc = 0x294f20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
label_294f24:
    // 0x294f24: 0xc0b580a
label_294f28:
    if (ctx->pc == 0x294F28u) {
        ctx->pc = 0x294F28u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x294F2Cu;
        goto label_294f2c;
    }
    ctx->pc = 0x294F24u;
    SET_GPR_U32(ctx, 31, 0x294F2Cu);
    ctx->pc = 0x294F28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6028u;
    {
        const uint32_t __entryPc = ctx->pc;
        PitchVec3_0x2d6028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294F2Cu; }
    }
    if (ctx->pc != 0x294F2Cu) { return; }
    ctx->pc = 0x294F2Cu;
label_294f2c:
    // 0x294f2c: 0xc7a00010
    ctx->pc = 0x294f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294f30:
    // 0x294f30: 0x4600a802
    ctx->pc = 0x294f30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_294f34:
    // 0x294f34: 0xe7a00010
    ctx->pc = 0x294f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_294f38:
    // 0x294f38: 0xc7a00014
    ctx->pc = 0x294f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294f3c:
    // 0x294f3c: 0x4600a802
    ctx->pc = 0x294f3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_294f40:
    // 0x294f40: 0xe7a00014
    ctx->pc = 0x294f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_294f44:
    // 0x294f44: 0xc7a00018
    ctx->pc = 0x294f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294f48:
    // 0x294f48: 0x4600a802
    ctx->pc = 0x294f48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_294f4c:
    // 0x294f4c: 0xe7a00018
    ctx->pc = 0x294f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_294f50:
    // 0x294f50: 0x8ec20000
    ctx->pc = 0x294f50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_294f54:
    // 0x294f54: 0x30420008
    ctx->pc = 0x294f54u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
label_294f58:
    // 0x294f58: 0x10400011
label_294f5c:
    if (ctx->pc == 0x294F5Cu) {
        ctx->pc = 0x294F5Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x294F60u;
        goto label_294f60;
    }
    ctx->pc = 0x294F58u;
    {
        const bool branch_taken_0x294f58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x294F5Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x294f58) {
            ctx->pc = 0x294FA0u;
            goto label_294fa0;
        }
    }
    ctx->pc = 0x294F60u;
label_294f60:
    // 0x294f60: 0x3c013fc9
    ctx->pc = 0x294f60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
label_294f64:
    // 0x294f64: 0x34210fdb
    ctx->pc = 0x294f64u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
label_294f68:
    // 0x294f68: 0x44816000
    ctx->pc = 0x294f68u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_294f6c:
    // 0x294f6c: 0xc0b5c06
label_294f70:
    if (ctx->pc == 0x294F70u) {
        ctx->pc = 0x294F74u;
        goto label_294f74;
    }
    ctx->pc = 0x294F6Cu;
    SET_GPR_U32(ctx, 31, 0x294F74u);
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294F74u; }
    }
    if (ctx->pc != 0x294F74u) { return; }
    ctx->pc = 0x294F74u;
label_294f74:
    // 0x294f74: 0xe7a00030
    ctx->pc = 0x294f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_294f78:
    // 0x294f78: 0x3c013fc9
    ctx->pc = 0x294f78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
label_294f7c:
    // 0x294f7c: 0x34210fdb
    ctx->pc = 0x294f7cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
label_294f80:
    // 0x294f80: 0x44816000
    ctx->pc = 0x294f80u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_294f84:
    // 0x294f84: 0xc0b5c06
label_294f88:
    if (ctx->pc == 0x294F88u) {
        ctx->pc = 0x294F88u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->pc = 0x294F8Cu;
        goto label_294f8c;
    }
    ctx->pc = 0x294F84u;
    SET_GPR_U32(ctx, 31, 0x294F8Cu);
    ctx->pc = 0x294F88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294F8Cu; }
    }
    if (ctx->pc != 0x294F8Cu) { return; }
    ctx->pc = 0x294F8Cu;
label_294f8c:
    // 0x294f8c: 0xe7a00038
    ctx->pc = 0x294f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_294f90:
    // 0x294f90: 0x280202d
    ctx->pc = 0x294f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_294f94:
    // 0x294f94: 0x27a50010
    ctx->pc = 0x294f94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
label_294f98:
    // 0x294f98: 0x10000003
label_294f9c:
    if (ctx->pc == 0x294F9Cu) {
        ctx->pc = 0x294F9Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x294FA0u;
        goto label_294fa0;
    }
    ctx->pc = 0x294F98u;
    {
        const bool branch_taken_0x294f98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x294F9Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 48));
        if (branch_taken_0x294f98) {
            ctx->pc = 0x294FA8u;
            goto label_294fa8;
        }
    }
    ctx->pc = 0x294FA0u;
label_294fa0:
    // 0x294fa0: 0x27a50010
    ctx->pc = 0x294fa0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
label_294fa4:
    // 0x294fa4: 0x302d
    ctx->pc = 0x294fa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_294fa8:
    // 0x294fa8: 0xc62c0038
    ctx->pc = 0x294fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_294fac:
    // 0x294fac: 0xc09f794
label_294fb0:
    if (ctx->pc == 0x294FB0u) {
        ctx->pc = 0x294FB0u;
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x294FB4u;
        goto label_294fb4;
    }
    ctx->pc = 0x294FACu;
    SET_GPR_U32(ctx, 31, 0x294FB4u);
    ctx->pc = 0x294FB0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x27DE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetPhysics_0x27de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294FB4u; }
    }
    if (ctx->pc != 0x294FB4u) { return; }
    ctx->pc = 0x294FB4u;
label_294fb4:
    // 0x294fb4: 0x10000007
label_294fb8:
    if (ctx->pc == 0x294FB8u) {
        ctx->pc = 0x294FB8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x294FBCu;
        goto label_294fbc;
    }
    ctx->pc = 0x294FB4u;
    {
        const bool branch_taken_0x294fb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x294FB8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x294fb4) {
            ctx->pc = 0x294FD4u;
            goto label_294fd4;
        }
    }
    ctx->pc = 0x294FBCu;
label_294fbc:
    // 0x294fbc: 0x282d
    ctx->pc = 0x294fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_294fc0:
    // 0x294fc0: 0x302d
    ctx->pc = 0x294fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_294fc4:
    // 0x294fc4: 0xc62c0038
    ctx->pc = 0x294fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_294fc8:
    // 0x294fc8: 0xc09f794
label_294fcc:
    if (ctx->pc == 0x294FCCu) {
        ctx->pc = 0x294FCCu;
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x294FD0u;
        goto label_294fd0;
    }
    ctx->pc = 0x294FC8u;
    SET_GPR_U32(ctx, 31, 0x294FD0u);
    ctx->pc = 0x294FCCu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x27DE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetPhysics_0x27de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294FD0u; }
    }
    if (ctx->pc != 0x294FD0u) { return; }
    ctx->pc = 0x294FD0u;
label_294fd0:
    // 0x294fd0: 0x3c020031
    ctx->pc = 0x294fd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_294fd4:
    // 0x294fd4: 0xdc420e28
    ctx->pc = 0x294fd4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
label_294fd8:
    // 0x294fd8: 0x30420010
    ctx->pc = 0x294fd8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
label_294fdc:
    // 0x294fdc: 0x10400006
label_294fe0:
    if (ctx->pc == 0x294FE0u) {
        ctx->pc = 0x294FE0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x294FE4u;
        goto label_294fe4;
    }
    ctx->pc = 0x294FDCu;
    {
        const bool branch_taken_0x294fdc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x294FE0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x294fdc) {
            ctx->pc = 0x294FF8u;
            goto label_294ff8;
        }
    }
    ctx->pc = 0x294FE4u;
label_294fe4:
    // 0x294fe4: 0x8c420008
    ctx->pc = 0x294fe4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_294fe8:
    // 0x294fe8: 0x10400004
label_294fec:
    if (ctx->pc == 0x294FECu) {
        ctx->pc = 0x294FECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x294FF0u;
        goto label_294ff0;
    }
    ctx->pc = 0x294FE8u;
    {
        const bool branch_taken_0x294fe8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x294FECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x294fe8) {
            ctx->pc = 0x294FFCu;
            goto label_294ffc;
        }
    }
    ctx->pc = 0x294FF0u;
label_294ff0:
    // 0x294ff0: 0xc09fde0
label_294ff4:
    if (ctx->pc == 0x294FF4u) {
        ctx->pc = 0x294FF4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x294FF8u;
        goto label_294ff8;
    }
    ctx->pc = 0x294FF0u;
    SET_GPR_U32(ctx, 31, 0x294FF8u);
    ctx->pc = 0x294FF4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27F780u;
    {
        const uint32_t __entryPc = ctx->pc;
        DmgFxAdd_0x27f780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294FF8u; }
    }
    if (ctx->pc != 0x294FF8u) { return; }
    ctx->pc = 0x294FF8u;
label_294ff8:
    // 0x294ff8: 0x280102d
    ctx->pc = 0x294ff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_294ffc:
    // 0x294ffc: 0xdfbf00b0
    ctx->pc = 0x294ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_295000:
    // 0x295000: 0xdfb600a0
    ctx->pc = 0x295000u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_295004:
    // 0x295004: 0xdfb50090
    ctx->pc = 0x295004u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_295008:
    // 0x295008: 0xdfb40080
    ctx->pc = 0x295008u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_29500c:
    // 0x29500c: 0xdfb30070
    ctx->pc = 0x29500cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_295010:
    // 0x295010: 0xdfb20060
    ctx->pc = 0x295010u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_295014:
    // 0x295014: 0xdfb10050
    ctx->pc = 0x295014u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_295018:
    // 0x295018: 0xdfb00040
    ctx->pc = 0x295018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29501c:
    // 0x29501c: 0xc7b600d0
    ctx->pc = 0x29501cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_295020:
    // 0x295020: 0xc7b500c8
    ctx->pc = 0x295020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_295024:
    // 0x295024: 0xc7b400c0
    ctx->pc = 0x295024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_295028:
    // 0x295028: 0x3e00008
label_29502c:
    if (ctx->pc == 0x29502Cu) {
        ctx->pc = 0x29502Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x295030u;
        goto label_fallthrough_0x295028;
    }
    ctx->pc = 0x295028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29502Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x294828u: goto label_294828;
            case 0x29482Cu: goto label_29482c;
            case 0x294830u: goto label_294830;
            case 0x294834u: goto label_294834;
            case 0x294838u: goto label_294838;
            case 0x29483Cu: goto label_29483c;
            case 0x294840u: goto label_294840;
            case 0x294844u: goto label_294844;
            case 0x294848u: goto label_294848;
            case 0x29484Cu: goto label_29484c;
            case 0x294850u: goto label_294850;
            case 0x294854u: goto label_294854;
            case 0x294858u: goto label_294858;
            case 0x29485Cu: goto label_29485c;
            case 0x294860u: goto label_294860;
            case 0x294864u: goto label_294864;
            case 0x294868u: goto label_294868;
            case 0x29486Cu: goto label_29486c;
            case 0x294870u: goto label_294870;
            case 0x294874u: goto label_294874;
            case 0x294878u: goto label_294878;
            case 0x29487Cu: goto label_29487c;
            case 0x294880u: goto label_294880;
            case 0x294884u: goto label_294884;
            case 0x294888u: goto label_294888;
            case 0x29488Cu: goto label_29488c;
            case 0x294890u: goto label_294890;
            case 0x294894u: goto label_294894;
            case 0x294898u: goto label_294898;
            case 0x29489Cu: goto label_29489c;
            case 0x2948A0u: goto label_2948a0;
            case 0x2948A4u: goto label_2948a4;
            case 0x2948A8u: goto label_2948a8;
            case 0x2948ACu: goto label_2948ac;
            case 0x2948B0u: goto label_2948b0;
            case 0x2948B4u: goto label_2948b4;
            case 0x2948B8u: goto label_2948b8;
            case 0x2948BCu: goto label_2948bc;
            case 0x2948C0u: goto label_2948c0;
            case 0x2948C4u: goto label_2948c4;
            case 0x2948C8u: goto label_2948c8;
            case 0x2948CCu: goto label_2948cc;
            case 0x2948D0u: goto label_2948d0;
            case 0x2948D4u: goto label_2948d4;
            case 0x2948D8u: goto label_2948d8;
            case 0x2948DCu: goto label_2948dc;
            case 0x2948E0u: goto label_2948e0;
            case 0x2948E4u: goto label_2948e4;
            case 0x2948E8u: goto label_2948e8;
            case 0x2948ECu: goto label_2948ec;
            case 0x2948F0u: goto label_2948f0;
            case 0x2948F4u: goto label_2948f4;
            case 0x2948F8u: goto label_2948f8;
            case 0x2948FCu: goto label_2948fc;
            case 0x294900u: goto label_294900;
            case 0x294904u: goto label_294904;
            case 0x294908u: goto label_294908;
            case 0x29490Cu: goto label_29490c;
            case 0x294910u: goto label_294910;
            case 0x294914u: goto label_294914;
            case 0x294918u: goto label_294918;
            case 0x29491Cu: goto label_29491c;
            case 0x294920u: goto label_294920;
            case 0x294924u: goto label_294924;
            case 0x294928u: goto label_294928;
            case 0x29492Cu: goto label_29492c;
            case 0x294930u: goto label_294930;
            case 0x294934u: goto label_294934;
            case 0x294938u: goto label_294938;
            case 0x29493Cu: goto label_29493c;
            case 0x294940u: goto label_294940;
            case 0x294944u: goto label_294944;
            case 0x294948u: goto label_294948;
            case 0x29494Cu: goto label_29494c;
            case 0x294950u: goto label_294950;
            case 0x294954u: goto label_294954;
            case 0x294958u: goto label_294958;
            case 0x29495Cu: goto label_29495c;
            case 0x294960u: goto label_294960;
            case 0x294964u: goto label_294964;
            case 0x294968u: goto label_294968;
            case 0x29496Cu: goto label_29496c;
            case 0x294970u: goto label_294970;
            case 0x294974u: goto label_294974;
            case 0x294978u: goto label_294978;
            case 0x29497Cu: goto label_29497c;
            case 0x294980u: goto label_294980;
            case 0x294984u: goto label_294984;
            case 0x294988u: goto label_294988;
            case 0x29498Cu: goto label_29498c;
            case 0x294990u: goto label_294990;
            case 0x294994u: goto label_294994;
            case 0x294998u: goto label_294998;
            case 0x29499Cu: goto label_29499c;
            case 0x2949A0u: goto label_2949a0;
            case 0x2949A4u: goto label_2949a4;
            case 0x2949A8u: goto label_2949a8;
            case 0x2949ACu: goto label_2949ac;
            case 0x2949B0u: goto label_2949b0;
            case 0x2949B4u: goto label_2949b4;
            case 0x2949B8u: goto label_2949b8;
            case 0x2949BCu: goto label_2949bc;
            case 0x2949C0u: goto label_2949c0;
            case 0x2949C4u: goto label_2949c4;
            case 0x2949C8u: goto label_2949c8;
            case 0x2949CCu: goto label_2949cc;
            case 0x2949D0u: goto label_2949d0;
            case 0x2949D4u: goto label_2949d4;
            case 0x2949D8u: goto label_2949d8;
            case 0x2949DCu: goto label_2949dc;
            case 0x2949E0u: goto label_2949e0;
            case 0x2949E4u: goto label_2949e4;
            case 0x2949E8u: goto label_2949e8;
            case 0x2949ECu: goto label_2949ec;
            case 0x2949F0u: goto label_2949f0;
            case 0x2949F4u: goto label_2949f4;
            case 0x2949F8u: goto label_2949f8;
            case 0x2949FCu: goto label_2949fc;
            case 0x294A00u: goto label_294a00;
            case 0x294A04u: goto label_294a04;
            case 0x294A08u: goto label_294a08;
            case 0x294A0Cu: goto label_294a0c;
            case 0x294A10u: goto label_294a10;
            case 0x294A14u: goto label_294a14;
            case 0x294A18u: goto label_294a18;
            case 0x294A1Cu: goto label_294a1c;
            case 0x294A20u: goto label_294a20;
            case 0x294A24u: goto label_294a24;
            case 0x294A28u: goto label_294a28;
            case 0x294A2Cu: goto label_294a2c;
            case 0x294A30u: goto label_294a30;
            case 0x294A34u: goto label_294a34;
            case 0x294A38u: goto label_294a38;
            case 0x294A3Cu: goto label_294a3c;
            case 0x294A40u: goto label_294a40;
            case 0x294A44u: goto label_294a44;
            case 0x294A48u: goto label_294a48;
            case 0x294A4Cu: goto label_294a4c;
            case 0x294A50u: goto label_294a50;
            case 0x294A54u: goto label_294a54;
            case 0x294A58u: goto label_294a58;
            case 0x294A5Cu: goto label_294a5c;
            case 0x294A60u: goto label_294a60;
            case 0x294A64u: goto label_294a64;
            case 0x294A68u: goto label_294a68;
            case 0x294A6Cu: goto label_294a6c;
            case 0x294A70u: goto label_294a70;
            case 0x294A74u: goto label_294a74;
            case 0x294A78u: goto label_294a78;
            case 0x294A7Cu: goto label_294a7c;
            case 0x294A80u: goto label_294a80;
            case 0x294A84u: goto label_294a84;
            case 0x294A88u: goto label_294a88;
            case 0x294A8Cu: goto label_294a8c;
            case 0x294A90u: goto label_294a90;
            case 0x294A94u: goto label_294a94;
            case 0x294A98u: goto label_294a98;
            case 0x294A9Cu: goto label_294a9c;
            case 0x294AA0u: goto label_294aa0;
            case 0x294AA4u: goto label_294aa4;
            case 0x294AA8u: goto label_294aa8;
            case 0x294AACu: goto label_294aac;
            case 0x294AB0u: goto label_294ab0;
            case 0x294AB4u: goto label_294ab4;
            case 0x294AB8u: goto label_294ab8;
            case 0x294ABCu: goto label_294abc;
            case 0x294AC0u: goto label_294ac0;
            case 0x294AC4u: goto label_294ac4;
            case 0x294AC8u: goto label_294ac8;
            case 0x294ACCu: goto label_294acc;
            case 0x294AD0u: goto label_294ad0;
            case 0x294AD4u: goto label_294ad4;
            case 0x294AD8u: goto label_294ad8;
            case 0x294ADCu: goto label_294adc;
            case 0x294AE0u: goto label_294ae0;
            case 0x294AE4u: goto label_294ae4;
            case 0x294AE8u: goto label_294ae8;
            case 0x294AECu: goto label_294aec;
            case 0x294AF0u: goto label_294af0;
            case 0x294AF4u: goto label_294af4;
            case 0x294AF8u: goto label_294af8;
            case 0x294AFCu: goto label_294afc;
            case 0x294B00u: goto label_294b00;
            case 0x294B04u: goto label_294b04;
            case 0x294B08u: goto label_294b08;
            case 0x294B0Cu: goto label_294b0c;
            case 0x294B10u: goto label_294b10;
            case 0x294B14u: goto label_294b14;
            case 0x294B18u: goto label_294b18;
            case 0x294B1Cu: goto label_294b1c;
            case 0x294B20u: goto label_294b20;
            case 0x294B24u: goto label_294b24;
            case 0x294B28u: goto label_294b28;
            case 0x294B2Cu: goto label_294b2c;
            case 0x294B30u: goto label_294b30;
            case 0x294B34u: goto label_294b34;
            case 0x294B38u: goto label_294b38;
            case 0x294B3Cu: goto label_294b3c;
            case 0x294B40u: goto label_294b40;
            case 0x294B44u: goto label_294b44;
            case 0x294B48u: goto label_294b48;
            case 0x294B4Cu: goto label_294b4c;
            case 0x294B50u: goto label_294b50;
            case 0x294B54u: goto label_294b54;
            case 0x294B58u: goto label_294b58;
            case 0x294B5Cu: goto label_294b5c;
            case 0x294B60u: goto label_294b60;
            case 0x294B64u: goto label_294b64;
            case 0x294B68u: goto label_294b68;
            case 0x294B6Cu: goto label_294b6c;
            case 0x294B70u: goto label_294b70;
            case 0x294B74u: goto label_294b74;
            case 0x294B78u: goto label_294b78;
            case 0x294B7Cu: goto label_294b7c;
            case 0x294B80u: goto label_294b80;
            case 0x294B84u: goto label_294b84;
            case 0x294B88u: goto label_294b88;
            case 0x294B8Cu: goto label_294b8c;
            case 0x294B90u: goto label_294b90;
            case 0x294B94u: goto label_294b94;
            case 0x294B98u: goto label_294b98;
            case 0x294B9Cu: goto label_294b9c;
            case 0x294BA0u: goto label_294ba0;
            case 0x294BA4u: goto label_294ba4;
            case 0x294BA8u: goto label_294ba8;
            case 0x294BACu: goto label_294bac;
            case 0x294BB0u: goto label_294bb0;
            case 0x294BB4u: goto label_294bb4;
            case 0x294BB8u: goto label_294bb8;
            case 0x294BBCu: goto label_294bbc;
            case 0x294BC0u: goto label_294bc0;
            case 0x294BC4u: goto label_294bc4;
            case 0x294BC8u: goto label_294bc8;
            case 0x294BCCu: goto label_294bcc;
            case 0x294BD0u: goto label_294bd0;
            case 0x294BD4u: goto label_294bd4;
            case 0x294BD8u: goto label_294bd8;
            case 0x294BDCu: goto label_294bdc;
            case 0x294BE0u: goto label_294be0;
            case 0x294BE4u: goto label_294be4;
            case 0x294BE8u: goto label_294be8;
            case 0x294BECu: goto label_294bec;
            case 0x294BF0u: goto label_294bf0;
            case 0x294BF4u: goto label_294bf4;
            case 0x294BF8u: goto label_294bf8;
            case 0x294BFCu: goto label_294bfc;
            case 0x294C00u: goto label_294c00;
            case 0x294C04u: goto label_294c04;
            case 0x294C08u: goto label_294c08;
            case 0x294C0Cu: goto label_294c0c;
            case 0x294C10u: goto label_294c10;
            case 0x294C14u: goto label_294c14;
            case 0x294C18u: goto label_294c18;
            case 0x294C1Cu: goto label_294c1c;
            case 0x294C20u: goto label_294c20;
            case 0x294C24u: goto label_294c24;
            case 0x294C28u: goto label_294c28;
            case 0x294C2Cu: goto label_294c2c;
            case 0x294C30u: goto label_294c30;
            case 0x294C34u: goto label_294c34;
            case 0x294C38u: goto label_294c38;
            case 0x294C3Cu: goto label_294c3c;
            case 0x294C40u: goto label_294c40;
            case 0x294C44u: goto label_294c44;
            case 0x294C48u: goto label_294c48;
            case 0x294C4Cu: goto label_294c4c;
            case 0x294C50u: goto label_294c50;
            case 0x294C54u: goto label_294c54;
            case 0x294C58u: goto label_294c58;
            case 0x294C5Cu: goto label_294c5c;
            case 0x294C60u: goto label_294c60;
            case 0x294C64u: goto label_294c64;
            case 0x294C68u: goto label_294c68;
            case 0x294C6Cu: goto label_294c6c;
            case 0x294C70u: goto label_294c70;
            case 0x294C74u: goto label_294c74;
            case 0x294C78u: goto label_294c78;
            case 0x294C7Cu: goto label_294c7c;
            case 0x294C80u: goto label_294c80;
            case 0x294C84u: goto label_294c84;
            case 0x294C88u: goto label_294c88;
            case 0x294C8Cu: goto label_294c8c;
            case 0x294C90u: goto label_294c90;
            case 0x294C94u: goto label_294c94;
            case 0x294C98u: goto label_294c98;
            case 0x294C9Cu: goto label_294c9c;
            case 0x294CA0u: goto label_294ca0;
            case 0x294CA4u: goto label_294ca4;
            case 0x294CA8u: goto label_294ca8;
            case 0x294CACu: goto label_294cac;
            case 0x294CB0u: goto label_294cb0;
            case 0x294CB4u: goto label_294cb4;
            case 0x294CB8u: goto label_294cb8;
            case 0x294CBCu: goto label_294cbc;
            case 0x294CC0u: goto label_294cc0;
            case 0x294CC4u: goto label_294cc4;
            case 0x294CC8u: goto label_294cc8;
            case 0x294CCCu: goto label_294ccc;
            case 0x294CD0u: goto label_294cd0;
            case 0x294CD4u: goto label_294cd4;
            case 0x294CD8u: goto label_294cd8;
            case 0x294CDCu: goto label_294cdc;
            case 0x294CE0u: goto label_294ce0;
            case 0x294CE4u: goto label_294ce4;
            case 0x294CE8u: goto label_294ce8;
            case 0x294CECu: goto label_294cec;
            case 0x294CF0u: goto label_294cf0;
            case 0x294CF4u: goto label_294cf4;
            case 0x294CF8u: goto label_294cf8;
            case 0x294CFCu: goto label_294cfc;
            case 0x294D00u: goto label_294d00;
            case 0x294D04u: goto label_294d04;
            case 0x294D08u: goto label_294d08;
            case 0x294D0Cu: goto label_294d0c;
            case 0x294D10u: goto label_294d10;
            case 0x294D14u: goto label_294d14;
            case 0x294D18u: goto label_294d18;
            case 0x294D1Cu: goto label_294d1c;
            case 0x294D20u: goto label_294d20;
            case 0x294D24u: goto label_294d24;
            case 0x294D28u: goto label_294d28;
            case 0x294D2Cu: goto label_294d2c;
            case 0x294D30u: goto label_294d30;
            case 0x294D34u: goto label_294d34;
            case 0x294D38u: goto label_294d38;
            case 0x294D3Cu: goto label_294d3c;
            case 0x294D40u: goto label_294d40;
            case 0x294D44u: goto label_294d44;
            case 0x294D48u: goto label_294d48;
            case 0x294D4Cu: goto label_294d4c;
            case 0x294D50u: goto label_294d50;
            case 0x294D54u: goto label_294d54;
            case 0x294D58u: goto label_294d58;
            case 0x294D5Cu: goto label_294d5c;
            case 0x294D60u: goto label_294d60;
            case 0x294D64u: goto label_294d64;
            case 0x294D68u: goto label_294d68;
            case 0x294D6Cu: goto label_294d6c;
            case 0x294D70u: goto label_294d70;
            case 0x294D74u: goto label_294d74;
            case 0x294D78u: goto label_294d78;
            case 0x294D7Cu: goto label_294d7c;
            case 0x294D80u: goto label_294d80;
            case 0x294D84u: goto label_294d84;
            case 0x294D88u: goto label_294d88;
            case 0x294D8Cu: goto label_294d8c;
            case 0x294D90u: goto label_294d90;
            case 0x294D94u: goto label_294d94;
            case 0x294D98u: goto label_294d98;
            case 0x294D9Cu: goto label_294d9c;
            case 0x294DA0u: goto label_294da0;
            case 0x294DA4u: goto label_294da4;
            case 0x294DA8u: goto label_294da8;
            case 0x294DACu: goto label_294dac;
            case 0x294DB0u: goto label_294db0;
            case 0x294DB4u: goto label_294db4;
            case 0x294DB8u: goto label_294db8;
            case 0x294DBCu: goto label_294dbc;
            case 0x294DC0u: goto label_294dc0;
            case 0x294DC4u: goto label_294dc4;
            case 0x294DC8u: goto label_294dc8;
            case 0x294DCCu: goto label_294dcc;
            case 0x294DD0u: goto label_294dd0;
            case 0x294DD4u: goto label_294dd4;
            case 0x294DD8u: goto label_294dd8;
            case 0x294DDCu: goto label_294ddc;
            case 0x294DE0u: goto label_294de0;
            case 0x294DE4u: goto label_294de4;
            case 0x294DE8u: goto label_294de8;
            case 0x294DECu: goto label_294dec;
            case 0x294DF0u: goto label_294df0;
            case 0x294DF4u: goto label_294df4;
            case 0x294DF8u: goto label_294df8;
            case 0x294DFCu: goto label_294dfc;
            case 0x294E00u: goto label_294e00;
            case 0x294E04u: goto label_294e04;
            case 0x294E08u: goto label_294e08;
            case 0x294E0Cu: goto label_294e0c;
            case 0x294E10u: goto label_294e10;
            case 0x294E14u: goto label_294e14;
            case 0x294E18u: goto label_294e18;
            case 0x294E1Cu: goto label_294e1c;
            case 0x294E20u: goto label_294e20;
            case 0x294E24u: goto label_294e24;
            case 0x294E28u: goto label_294e28;
            case 0x294E2Cu: goto label_294e2c;
            case 0x294E30u: goto label_294e30;
            case 0x294E34u: goto label_294e34;
            case 0x294E38u: goto label_294e38;
            case 0x294E3Cu: goto label_294e3c;
            case 0x294E40u: goto label_294e40;
            case 0x294E44u: goto label_294e44;
            case 0x294E48u: goto label_294e48;
            case 0x294E4Cu: goto label_294e4c;
            case 0x294E50u: goto label_294e50;
            case 0x294E54u: goto label_294e54;
            case 0x294E58u: goto label_294e58;
            case 0x294E5Cu: goto label_294e5c;
            case 0x294E60u: goto label_294e60;
            case 0x294E64u: goto label_294e64;
            case 0x294E68u: goto label_294e68;
            case 0x294E6Cu: goto label_294e6c;
            case 0x294E70u: goto label_294e70;
            case 0x294E74u: goto label_294e74;
            case 0x294E78u: goto label_294e78;
            case 0x294E7Cu: goto label_294e7c;
            case 0x294E80u: goto label_294e80;
            case 0x294E84u: goto label_294e84;
            case 0x294E88u: goto label_294e88;
            case 0x294E8Cu: goto label_294e8c;
            case 0x294E90u: goto label_294e90;
            case 0x294E94u: goto label_294e94;
            case 0x294E98u: goto label_294e98;
            case 0x294E9Cu: goto label_294e9c;
            case 0x294EA0u: goto label_294ea0;
            case 0x294EA4u: goto label_294ea4;
            case 0x294EA8u: goto label_294ea8;
            case 0x294EACu: goto label_294eac;
            case 0x294EB0u: goto label_294eb0;
            case 0x294EB4u: goto label_294eb4;
            case 0x294EB8u: goto label_294eb8;
            case 0x294EBCu: goto label_294ebc;
            case 0x294EC0u: goto label_294ec0;
            case 0x294EC4u: goto label_294ec4;
            case 0x294EC8u: goto label_294ec8;
            case 0x294ECCu: goto label_294ecc;
            case 0x294ED0u: goto label_294ed0;
            case 0x294ED4u: goto label_294ed4;
            case 0x294ED8u: goto label_294ed8;
            case 0x294EDCu: goto label_294edc;
            case 0x294EE0u: goto label_294ee0;
            case 0x294EE4u: goto label_294ee4;
            case 0x294EE8u: goto label_294ee8;
            case 0x294EECu: goto label_294eec;
            case 0x294EF0u: goto label_294ef0;
            case 0x294EF4u: goto label_294ef4;
            case 0x294EF8u: goto label_294ef8;
            case 0x294EFCu: goto label_294efc;
            case 0x294F00u: goto label_294f00;
            case 0x294F04u: goto label_294f04;
            case 0x294F08u: goto label_294f08;
            case 0x294F0Cu: goto label_294f0c;
            case 0x294F10u: goto label_294f10;
            case 0x294F14u: goto label_294f14;
            case 0x294F18u: goto label_294f18;
            case 0x294F1Cu: goto label_294f1c;
            case 0x294F20u: goto label_294f20;
            case 0x294F24u: goto label_294f24;
            case 0x294F28u: goto label_294f28;
            case 0x294F2Cu: goto label_294f2c;
            case 0x294F30u: goto label_294f30;
            case 0x294F34u: goto label_294f34;
            case 0x294F38u: goto label_294f38;
            case 0x294F3Cu: goto label_294f3c;
            case 0x294F40u: goto label_294f40;
            case 0x294F44u: goto label_294f44;
            case 0x294F48u: goto label_294f48;
            case 0x294F4Cu: goto label_294f4c;
            case 0x294F50u: goto label_294f50;
            case 0x294F54u: goto label_294f54;
            case 0x294F58u: goto label_294f58;
            case 0x294F5Cu: goto label_294f5c;
            case 0x294F60u: goto label_294f60;
            case 0x294F64u: goto label_294f64;
            case 0x294F68u: goto label_294f68;
            case 0x294F6Cu: goto label_294f6c;
            case 0x294F70u: goto label_294f70;
            case 0x294F74u: goto label_294f74;
            case 0x294F78u: goto label_294f78;
            case 0x294F7Cu: goto label_294f7c;
            case 0x294F80u: goto label_294f80;
            case 0x294F84u: goto label_294f84;
            case 0x294F88u: goto label_294f88;
            case 0x294F8Cu: goto label_294f8c;
            case 0x294F90u: goto label_294f90;
            case 0x294F94u: goto label_294f94;
            case 0x294F98u: goto label_294f98;
            case 0x294F9Cu: goto label_294f9c;
            case 0x294FA0u: goto label_294fa0;
            case 0x294FA4u: goto label_294fa4;
            case 0x294FA8u: goto label_294fa8;
            case 0x294FACu: goto label_294fac;
            case 0x294FB0u: goto label_294fb0;
            case 0x294FB4u: goto label_294fb4;
            case 0x294FB8u: goto label_294fb8;
            case 0x294FBCu: goto label_294fbc;
            case 0x294FC0u: goto label_294fc0;
            case 0x294FC4u: goto label_294fc4;
            case 0x294FC8u: goto label_294fc8;
            case 0x294FCCu: goto label_294fcc;
            case 0x294FD0u: goto label_294fd0;
            case 0x294FD4u: goto label_294fd4;
            case 0x294FD8u: goto label_294fd8;
            case 0x294FDCu: goto label_294fdc;
            case 0x294FE0u: goto label_294fe0;
            case 0x294FE4u: goto label_294fe4;
            case 0x294FE8u: goto label_294fe8;
            case 0x294FECu: goto label_294fec;
            case 0x294FF0u: goto label_294ff0;
            case 0x294FF4u: goto label_294ff4;
            case 0x294FF8u: goto label_294ff8;
            case 0x294FFCu: goto label_294ffc;
            case 0x295000u: goto label_295000;
            case 0x295004u: goto label_295004;
            case 0x295008u: goto label_295008;
            case 0x29500Cu: goto label_29500c;
            case 0x295010u: goto label_295010;
            case 0x295014u: goto label_295014;
            case 0x295018u: goto label_295018;
            case 0x29501Cu: goto label_29501c;
            case 0x295020u: goto label_295020;
            case 0x295024u: goto label_295024;
            case 0x295028u: goto label_295028;
            case 0x29502Cu: goto label_29502c;
            default: break;
        }
        return;
    }
label_fallthrough_0x295028:
    ctx->pc = 0x295030u;
}
