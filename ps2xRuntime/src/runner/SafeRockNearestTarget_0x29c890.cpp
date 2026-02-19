#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SafeRockNearestTarget
// Address: 0x29c890 - 0x29ca34
void SafeRockNearestTarget_0x29c890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29c890u;

    // 0x29c890: 0x27bdff30
    ctx->pc = 0x29c890u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x29c894: 0xffbf00b0
    ctx->pc = 0x29c894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x29c898: 0xffb400a0
    ctx->pc = 0x29c898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x29c89c: 0xffb30090
    ctx->pc = 0x29c89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x29c8a0: 0xffb20080
    ctx->pc = 0x29c8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x29c8a4: 0xffb10070
    ctx->pc = 0x29c8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x29c8a8: 0xffb00060
    ctx->pc = 0x29c8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x29c8ac: 0xe7b400c0
    ctx->pc = 0x29c8acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x29c8b0: 0x3c016258
    ctx->pc = 0x29c8b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)25176 << 16));
    // 0x29c8b4: 0x3421d727
    ctx->pc = 0x29c8b4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55079));
    // 0x29c8b8: 0x4481a000
    ctx->pc = 0x29c8b8u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x29c8bc: 0x481001f
    ctx->pc = 0x29C8BCu;
    {
        const bool branch_taken_0x29c8bc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x29C8C0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x29c8bc) {
            ctx->pc = 0x29C93Cu;
            goto label_29c93c;
        }
    }
    ctx->pc = 0x29C8C4u;
    // 0x29c8c4: 0x3c020036
    ctx->pc = 0x29c8c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29c8c8: 0x40202d
    ctx->pc = 0x29c8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c8cc: 0x8c42d7d8
    ctx->pc = 0x29c8ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957016)));
    // 0x29c8d0: 0x18400018
    ctx->pc = 0x29C8D0u;
    {
        const bool branch_taken_0x29c8d0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29C8D4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29c8d0) {
            ctx->pc = 0x29C934u;
            goto label_29c934;
        }
    }
    ctx->pc = 0x29C8D8u;
    // 0x29c8d8: 0x3c130036
    ctx->pc = 0x29c8d8u;
    SET_GPR_U32(ctx, 19, ((uint32_t)54 << 16));
    // 0x29c8dc: 0x3c020036
    ctx->pc = 0x29c8dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29c8e0: 0x2450d758
    ctx->pc = 0x29c8e0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294956888));
    // 0x29c8e4: 0x26230001
    ctx->pc = 0x29c8e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 1));
label_29c8e8:
    // 0x29c8e8: 0x8e62d7dc
    ctx->pc = 0x29c8e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294957020)));
    // 0x29c8ec: 0x621821
    ctx->pc = 0x29c8ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29c8f0: 0x8c82d7d8
    ctx->pc = 0x29c8f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294957016)));
    // 0x29c8f4: 0x62001a
    ctx->pc = 0x29c8f4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x29c8f8: 0x1810
    ctx->pc = 0x29c8f8u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x29c8fc: 0x50400001
    ctx->pc = 0x29C8FCu;
    {
        const bool branch_taken_0x29c8fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x29c8fc) {
            ctx->pc = 0x29C900u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x29C904u;
            goto label_29c904;
        }
    }
    ctx->pc = 0x29C904u;
label_29c904:
    // 0x29c904: 0x60902d
    ctx->pc = 0x29c904u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c908: 0x111080
    ctx->pc = 0x29c908u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x29c90c: 0x501021
    ctx->pc = 0x29c90cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x29c910: 0xc094d72
    ctx->pc = 0x29C910u;
    SET_GPR_U32(ctx, 31, 0x29C918u);
    ctx->pc = 0x29C914u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2535C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SafeRockActive_0x2535c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C918u; }
    }
    if (ctx->pc != 0x29C918u) { return; }
    ctx->pc = 0x29C918u;
    // 0x29c918: 0x1040003c
    ctx->pc = 0x29C918u;
    {
        const bool branch_taken_0x29c918 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29C91Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x29c918) {
            ctx->pc = 0x29CA0Cu;
            goto label_29ca0c;
        }
    }
    ctx->pc = 0x29C920u;
    // 0x29c920: 0x3c040036
    ctx->pc = 0x29c920u;
    SET_GPR_U32(ctx, 4, ((uint32_t)54 << 16));
    // 0x29c924: 0x8c82d7d8
    ctx->pc = 0x29c924u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294957016)));
    // 0x29c928: 0x222102a
    ctx->pc = 0x29c928u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x29c92c: 0x1440ffee
    ctx->pc = 0x29C92Cu;
    {
        const bool branch_taken_0x29c92c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29C930u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x29c92c) {
            ctx->pc = 0x29C8E8u;
            goto label_29c8e8;
        }
    }
    ctx->pc = 0x29C934u;
label_29c934:
    // 0x29c934: 0x10000036
    ctx->pc = 0x29C934u;
    {
        const bool branch_taken_0x29c934 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29C938u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x29c934) {
            ctx->pc = 0x29CA10u;
            goto label_29ca10;
        }
    }
    ctx->pc = 0x29C93Cu;
label_29c93c:
    // 0x29c93c: 0x3c030032
    ctx->pc = 0x29c93cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x29c940: 0x24631bc0
    ctx->pc = 0x29c940u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7104));
    // 0x29c944: 0x24022b00
    ctx->pc = 0x29c944u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x29c948: 0x821018
    ctx->pc = 0x29c948u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29c94c: 0x431021
    ctx->pc = 0x29c94cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29c950: 0xc4400050
    ctx->pc = 0x29c950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c954: 0xe7a00050
    ctx->pc = 0x29c954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x29c958: 0xc4400054
    ctx->pc = 0x29c958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c95c: 0xe7a00054
    ctx->pc = 0x29c95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x29c960: 0xc4400058
    ctx->pc = 0x29c960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c964: 0xe7a00058
    ctx->pc = 0x29c964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x29c968: 0x3c020036
    ctx->pc = 0x29c968u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29c96c: 0x8c42d7d8
    ctx->pc = 0x29c96cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957016)));
    // 0x29c970: 0x18400026
    ctx->pc = 0x29C970u;
    {
        const bool branch_taken_0x29c970 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29C974u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29c970) {
            ctx->pc = 0x29CA0Cu;
            goto label_29ca0c;
        }
    }
    ctx->pc = 0x29C978u;
    // 0x29c978: 0x3c020036
    ctx->pc = 0x29c978u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29c97c: 0x2454d758
    ctx->pc = 0x29c97cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294956888));
    // 0x29c980: 0x3c130036
    ctx->pc = 0x29c980u;
    SET_GPR_U32(ctx, 19, ((uint32_t)54 << 16));
    // 0x29c984: 0x111080
    ctx->pc = 0x29c984u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
label_29c988:
    // 0x29c988: 0x548021
    ctx->pc = 0x29c988u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x29c98c: 0xc094d72
    ctx->pc = 0x29C98Cu;
    SET_GPR_U32(ctx, 31, 0x29C994u);
    ctx->pc = 0x29C990u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x2535C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SafeRockActive_0x2535c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C994u; }
    }
    if (ctx->pc != 0x29C994u) { return; }
    ctx->pc = 0x29C994u;
    // 0x29c994: 0x54400019
    ctx->pc = 0x29C994u;
    {
        const bool branch_taken_0x29c994 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x29c994) {
            ctx->pc = 0x29C998u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x29C9FCu;
            goto label_29c9fc;
        }
    }
    ctx->pc = 0x29C99Cu;
    // 0x29c99c: 0xc094db0
    ctx->pc = 0x29C99Cu;
    SET_GPR_U32(ctx, 31, 0x29C9A4u);
    ctx->pc = 0x29C9A0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x2536C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ItemGetNode_0x2536c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C9A4u; }
    }
    if (ctx->pc != 0x29C9A4u) { return; }
    ctx->pc = 0x29C9A4u;
    // 0x29c9a4: 0x10400014
    ctx->pc = 0x29C9A4u;
    {
        const bool branch_taken_0x29c9a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29C9A8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29c9a4) {
            ctx->pc = 0x29C9F8u;
            goto label_29c9f8;
        }
    }
    ctx->pc = 0x29C9ACu;
    // 0x29c9ac: 0x3a0282d
    ctx->pc = 0x29c9acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c9b0: 0xc0b4302
    ctx->pc = 0x29C9B0u;
    SET_GPR_U32(ctx, 31, 0x29C9B8u);
    ctx->pc = 0x29C9B4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetWorldMat_0x2d0c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C9B8u; }
    }
    if (ctx->pc != 0x29C9B8u) { return; }
    ctx->pc = 0x29C9B8u;
    // 0x29c9b8: 0xc7ac0030
    ctx->pc = 0x29c9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29c9bc: 0xc7a00050
    ctx->pc = 0x29c9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c9c0: 0x46006301
    ctx->pc = 0x29c9c0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x29c9c4: 0xe7ac0040
    ctx->pc = 0x29c9c4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x29c9c8: 0xafa00044
    ctx->pc = 0x29c9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x29c9cc: 0xc7ad0038
    ctx->pc = 0x29c9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29c9d0: 0xc7a00058
    ctx->pc = 0x29c9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c9d4: 0x46006b41
    ctx->pc = 0x29c9d4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x29c9d8: 0xc0b5c34
    ctx->pc = 0x29C9D8u;
    SET_GPR_U32(ctx, 31, 0x29C9E0u);
    ctx->pc = 0x29C9DCu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C9E0u; }
    }
    if (ctx->pc != 0x29C9E0u) { return; }
    ctx->pc = 0x29C9E0u;
    // 0x29c9e0: 0x46140034
    ctx->pc = 0x29c9e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c9e4: 0x0
    ctx->pc = 0x29c9e4u;
    // NOP
    // 0x29c9e8: 0x45020004
    ctx->pc = 0x29C9E8u;
    {
        const bool branch_taken_0x29c9e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c9e8) {
            ctx->pc = 0x29C9ECu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x29C9FCu;
            goto label_29c9fc;
        }
    }
    ctx->pc = 0x29C9F0u;
    // 0x29c9f0: 0x220902d
    ctx->pc = 0x29c9f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c9f4: 0x46000506
    ctx->pc = 0x29c9f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_29c9f8:
    // 0x29c9f8: 0x26310001
    ctx->pc = 0x29c9f8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_29c9fc:
    // 0x29c9fc: 0x8e62d7d8
    ctx->pc = 0x29c9fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294957016)));
    // 0x29ca00: 0x222102a
    ctx->pc = 0x29ca00u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x29ca04: 0x1440ffe0
    ctx->pc = 0x29CA04u;
    {
        const bool branch_taken_0x29ca04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29CA08u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x29ca04) {
            ctx->pc = 0x29C988u;
            goto label_29c988;
        }
    }
    ctx->pc = 0x29CA0Cu;
label_29ca0c:
    // 0x29ca0c: 0x240102d
    ctx->pc = 0x29ca0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29ca10:
    // 0x29ca10: 0xdfbf00b0
    ctx->pc = 0x29ca10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29ca14: 0xdfb400a0
    ctx->pc = 0x29ca14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29ca18: 0xdfb30090
    ctx->pc = 0x29ca18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29ca1c: 0xdfb20080
    ctx->pc = 0x29ca1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29ca20: 0xdfb10070
    ctx->pc = 0x29ca20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29ca24: 0xdfb00060
    ctx->pc = 0x29ca24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29ca28: 0xc7b400c0
    ctx->pc = 0x29ca28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29ca2c: 0x3e00008
    ctx->pc = 0x29CA2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CA30u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29C8E8u: goto label_29c8e8;
            case 0x29C904u: goto label_29c904;
            case 0x29C934u: goto label_29c934;
            case 0x29C93Cu: goto label_29c93c;
            case 0x29C988u: goto label_29c988;
            case 0x29C9F8u: goto label_29c9f8;
            case 0x29C9FCu: goto label_29c9fc;
            case 0x29CA0Cu: goto label_29ca0c;
            case 0x29CA10u: goto label_29ca10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29CA34u;
}
