#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: find_closest_player
// Address: 0x2373b8 - 0x237840
void find_closest_player_0x2373b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2373b8u;

    // 0x2373b8: 0x27bdff80
    ctx->pc = 0x2373b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2373bc: 0xffbf0040
    ctx->pc = 0x2373bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2373c0: 0xffb20030
    ctx->pc = 0x2373c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2373c4: 0xffb10020
    ctx->pc = 0x2373c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2373c8: 0xffb00010
    ctx->pc = 0x2373c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2373cc: 0xe7b80070
    ctx->pc = 0x2373ccu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2373d0: 0xe7b70068
    ctx->pc = 0x2373d0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2373d4: 0xe7b60060
    ctx->pc = 0x2373d4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2373d8: 0xe7b50058
    ctx->pc = 0x2373d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2373dc: 0xe7b40050
    ctx->pc = 0x2373dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2373e0: 0x240303b0
    ctx->pc = 0x2373e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x2373e4: 0x831818
    ctx->pc = 0x2373e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2373e8: 0x3c020033
    ctx->pc = 0x2373e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x2373ec: 0x2442dfd0
    ctx->pc = 0x2373ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x2373f0: 0x628021
    ctx->pc = 0x2373f0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2373f4: 0x3c0147c3
    ctx->pc = 0x2373f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18371 << 16));
    // 0x2373f8: 0x34215000
    ctx->pc = 0x2373f8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 20480));
    // 0x2373fc: 0x4481b000
    ctx->pc = 0x2373fcu;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 1);
    // 0x237400: 0x3c020032
    ctx->pc = 0x237400u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x237404: 0x24511bc0
    ctx->pc = 0x237404u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x237408: 0x24030001
    ctx->pc = 0x237408u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x23740c: 0x8e2200fc
    ctx->pc = 0x23740cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x237410: 0x10430009
    ctx->pc = 0x237410u;
    {
        const bool branch_taken_0x237410 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x237414u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x237410) {
            ctx->pc = 0x237438u;
            goto label_237438;
        }
    }
    ctx->pc = 0x237418u;
    // 0x237418: 0x26520001
    ctx->pc = 0x237418u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x23741c: 0x0
    ctx->pc = 0x23741cu;
    // NOP
label_237420:
    // 0x237420: 0x2a420004
    ctx->pc = 0x237420u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
    // 0x237424: 0x10400007
    ctx->pc = 0x237424u;
    {
        const bool branch_taken_0x237424 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x237428u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 11008));
        if (branch_taken_0x237424) {
            ctx->pc = 0x237444u;
            goto label_237444;
        }
    }
    ctx->pc = 0x23742Cu;
    // 0x23742c: 0x8e2200fc
    ctx->pc = 0x23742cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x237430: 0x5443fffb
    ctx->pc = 0x237430u;
    {
        const bool branch_taken_0x237430 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x237430) {
            ctx->pc = 0x237434u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x237420u;
            goto label_237420;
        }
    }
    ctx->pc = 0x237438u;
label_237438:
    // 0x237438: 0x2a420004
    ctx->pc = 0x237438u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
    // 0x23743c: 0x14400003
    ctx->pc = 0x23743Cu;
    {
        const bool branch_taken_0x23743c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x237440u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x23743c) {
            ctx->pc = 0x23744Cu;
            goto label_23744c;
        }
    }
    ctx->pc = 0x237444u;
label_237444:
    // 0x237444: 0xa60002f2
    ctx->pc = 0x237444u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 754), (uint16_t)GPR_U32(ctx, 0));
    // 0x237448: 0x3c020033
    ctx->pc = 0x237448u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_23744c:
    // 0x23744c: 0x8c45c7c4
    ctx->pc = 0x23744cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294952900)));
    // 0x237450: 0x4a0004a
    ctx->pc = 0x237450u;
    {
        const bool branch_taken_0x237450 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x237454u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x237450) {
            ctx->pc = 0x23757Cu;
            goto label_23757c;
        }
    }
    ctx->pc = 0x237458u;
    // 0x237458: 0x24631bc0
    ctx->pc = 0x237458u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7104));
    // 0x23745c: 0x24022b00
    ctx->pc = 0x23745cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x237460: 0xa21018
    ctx->pc = 0x237460u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x237464: 0x432821
    ctx->pc = 0x237464u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x237468: 0x8ca300fc
    ctx->pc = 0x237468u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 252)));
    // 0x23746c: 0x24020001
    ctx->pc = 0x23746cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x237470: 0x14620043
    ctx->pc = 0x237470u;
    {
        const bool branch_taken_0x237470 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x237474u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x237470) {
            ctx->pc = 0x237580u;
            goto label_237580;
        }
    }
    ctx->pc = 0x237478u;
    // 0x237478: 0x8ca20138
    ctx->pc = 0x237478u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 312)));
    // 0x23747c: 0x30420004
    ctx->pc = 0x23747cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x237480: 0x1440003f
    ctx->pc = 0x237480u;
    {
        const bool branch_taken_0x237480 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x237484u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x237480) {
            ctx->pc = 0x237580u;
            goto label_237580;
        }
    }
    ctx->pc = 0x237488u;
    // 0x237488: 0x8e030000
    ctx->pc = 0x237488u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23748c: 0x2402001e
    ctx->pc = 0x23748cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
    // 0x237490: 0x54620007
    ctx->pc = 0x237490u;
    {
        const bool branch_taken_0x237490 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x237490) {
            ctx->pc = 0x237494u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
            ctx->pc = 0x2374B0u;
            goto label_2374b0;
        }
    }
    ctx->pc = 0x237498u;
    // 0x237498: 0x8ca20134
    ctx->pc = 0x237498u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 308)));
    // 0x23749c: 0x3c030008
    ctx->pc = 0x23749cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)8 << 16));
    // 0x2374a0: 0x431024
    ctx->pc = 0x2374a0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2374a4: 0x14400036
    ctx->pc = 0x2374A4u;
    {
        const bool branch_taken_0x2374a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2374A8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2374a4) {
            ctx->pc = 0x237580u;
            goto label_237580;
        }
    }
    ctx->pc = 0x2374ACu;
    // 0x2374ac: 0x96020288
    ctx->pc = 0x2374acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
label_2374b0:
    // 0x2374b0: 0xa602028a
    ctx->pc = 0x2374b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 650), (uint16_t)GPR_U32(ctx, 2));
    // 0x2374b4: 0x3c030033
    ctx->pc = 0x2374b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x2374b8: 0x9462c7c4
    ctx->pc = 0x2374b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294952900)));
    // 0x2374bc: 0xa6020288
    ctx->pc = 0x2374bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 648), (uint16_t)GPR_U32(ctx, 2));
    // 0x2374c0: 0x3c040032
    ctx->pc = 0x2374c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x2374c4: 0x24841bc0
    ctx->pc = 0x2374c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7104));
    // 0x2374c8: 0x8c63c7c4
    ctx->pc = 0x2374c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294952900)));
    // 0x2374cc: 0x24022b00
    ctx->pc = 0x2374ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x2374d0: 0x621818
    ctx->pc = 0x2374d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2374d4: 0x641821
    ctx->pc = 0x2374d4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2374d8: 0xc6010060
    ctx->pc = 0x2374d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2374dc: 0xc4600070
    ctx->pc = 0x2374dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2374e0: 0x46000b01
    ctx->pc = 0x2374e0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2374e4: 0xe7ac0000
    ctx->pc = 0x2374e4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2374e8: 0xc6020064
    ctx->pc = 0x2374e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2374ec: 0xc4600074
    ctx->pc = 0x2374ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2374f0: 0x46001081
    ctx->pc = 0x2374f0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2374f4: 0xe7a20004
    ctx->pc = 0x2374f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2374f8: 0xc6010068
    ctx->pc = 0x2374f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2374fc: 0xc4600078
    ctx->pc = 0x2374fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237500: 0x46000841
    ctx->pc = 0x237500u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x237504: 0xe7a10008
    ctx->pc = 0x237504u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x237508: 0x460c6002
    ctx->pc = 0x237508u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x23750c: 0x46021082
    ctx->pc = 0x23750cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x237510: 0x46020000
    ctx->pc = 0x237510u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x237514: 0x46010842
    ctx->pc = 0x237514u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x237518: 0x46010000
    ctx->pc = 0x237518u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23751c: 0x0
    ctx->pc = 0x23751cu;
    // NOP
    // 0x237520: 0x0
    ctx->pc = 0x237520u;
    // NOP
    // 0x237524: 0x460000c4
    ctx->pc = 0x237524u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x237528: 0x46031832
    ctx->pc = 0x237528u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23752c: 0x0
    ctx->pc = 0x23752cu;
    // NOP
    // 0x237530: 0x45030007
    ctx->pc = 0x237530u;
    {
        const bool branch_taken_0x237530 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x237530) {
            ctx->pc = 0x237534u;
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 656), bits); }
            ctx->pc = 0x237550u;
            goto label_237550;
        }
    }
    ctx->pc = 0x237538u;
    // 0x237538: 0x460c6302
    ctx->pc = 0x237538u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x23753c: 0x46026300
    ctx->pc = 0x23753cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x237540: 0xc0ba284
    ctx->pc = 0x237540u;
    SET_GPR_U32(ctx, 31, 0x237548u);
    ctx->pc = 0x237544u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237548u; }
    }
    if (ctx->pc != 0x237548u) { return; }
    ctx->pc = 0x237548u;
    // 0x237548: 0x460000c6
    ctx->pc = 0x237548u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x23754c: 0xe6030290
    ctx->pc = 0x23754cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 656), bits); }
label_237550:
    // 0x237550: 0x3c040032
    ctx->pc = 0x237550u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x237554: 0x24841bc0
    ctx->pc = 0x237554u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7104));
    // 0x237558: 0x3c020033
    ctx->pc = 0x237558u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23755c: 0x8c42c7c4
    ctx->pc = 0x23755cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952900)));
    // 0x237560: 0x24032b00
    ctx->pc = 0x237560u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x237564: 0x431018
    ctx->pc = 0x237564u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x237568: 0x441021
    ctx->pc = 0x237568u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23756c: 0xc4400944
    ctx->pc = 0x23756cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237570: 0x46001800
    ctx->pc = 0x237570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x237574: 0x1000008a
    ctx->pc = 0x237574u;
    {
        const bool branch_taken_0x237574 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x237578u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 652), bits); }
        if (branch_taken_0x237574) {
            ctx->pc = 0x2377A0u;
            goto label_2377a0;
        }
    }
    ctx->pc = 0x23757Cu;
label_23757c:
    // 0x23757c: 0x3c020032
    ctx->pc = 0x23757cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_237580:
    // 0x237580: 0x8c4207b0
    ctx->pc = 0x237580u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1968)));
    // 0x237584: 0x30420007
    ctx->pc = 0x237584u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 7));
    // 0x237588: 0x30830007
    ctx->pc = 0x237588u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 7));
    // 0x23758c: 0x10430004
    ctx->pc = 0x23758Cu;
    {
        const bool branch_taken_0x23758c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x237590u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23758c) {
            ctx->pc = 0x2375A0u;
            goto label_2375a0;
        }
    }
    ctx->pc = 0x237594u;
    // 0x237594: 0x86020288
    ctx->pc = 0x237594u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x237598: 0x4410005
    ctx->pc = 0x237598u;
    {
        const bool branch_taken_0x237598 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x23759Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
        if (branch_taken_0x237598) {
            ctx->pc = 0x2375B0u;
            goto label_2375b0;
        }
    }
    ctx->pc = 0x2375A0u;
label_2375a0:
    // 0x2375a0: 0x86020288
    ctx->pc = 0x2375a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x2375a4: 0x440000b
    ctx->pc = 0x2375A4u;
    {
        const bool branch_taken_0x2375a4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2375A8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2375a4) {
            ctx->pc = 0x2375D4u;
            goto label_2375d4;
        }
    }
    ctx->pc = 0x2375ACu;
    // 0x2375ac: 0x3c040032
    ctx->pc = 0x2375acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
label_2375b0:
    // 0x2375b0: 0x24841bc0
    ctx->pc = 0x2375b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7104));
    // 0x2375b4: 0x86020288
    ctx->pc = 0x2375b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x2375b8: 0x24032b00
    ctx->pc = 0x2375b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x2375bc: 0x431018
    ctx->pc = 0x2375bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2375c0: 0x441021
    ctx->pc = 0x2375c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2375c4: 0x8c4200fc
    ctx->pc = 0x2375c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x2375c8: 0x2403ffff
    ctx->pc = 0x2375c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2375cc: 0x38420001
    ctx->pc = 0x2375ccu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x2375d0: 0x62280b
    ctx->pc = 0x2375d0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
label_2375d4:
    // 0x2375d4: 0x50a00073
    ctx->pc = 0x2375D4u;
    {
        const bool branch_taken_0x2375d4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x2375d4) {
            ctx->pc = 0x2375D8u;
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
            ctx->pc = 0x2377A4u;
            goto label_2377a4;
        }
    }
    ctx->pc = 0x2375DCu;
    // 0x2375dc: 0x96020288
    ctx->pc = 0x2375dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x2375e0: 0xa602028a
    ctx->pc = 0x2375e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 650), (uint16_t)GPR_U32(ctx, 2));
    // 0x2375e4: 0x2402ffff
    ctx->pc = 0x2375e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2375e8: 0xa6020288
    ctx->pc = 0x2375e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 648), (uint16_t)GPR_U32(ctx, 2));
    // 0x2375ec: 0x3c0147c3
    ctx->pc = 0x2375ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)18371 << 16));
    // 0x2375f0: 0x34215000
    ctx->pc = 0x2375f0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 20480));
    // 0x2375f4: 0x44810000
    ctx->pc = 0x2375f4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2375f8: 0xe600028c
    ctx->pc = 0x2375f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 652), bits); }
    // 0x2375fc: 0xe6000290
    ctx->pc = 0x2375fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 656), bits); }
    // 0x237600: 0x8e030000
    ctx->pc = 0x237600u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x237604: 0x2402001e
    ctx->pc = 0x237604u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
    // 0x237608: 0x14620004
    ctx->pc = 0x237608u;
    {
        const bool branch_taken_0x237608 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x23760Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
        if (branch_taken_0x237608) {
            ctx->pc = 0x23761Cu;
            goto label_23761c;
        }
    }
    ctx->pc = 0x237610u;
    // 0x237610: 0x2402ffff
    ctx->pc = 0x237610u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x237614: 0xae02033c
    ctx->pc = 0x237614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 2));
    // 0x237618: 0x2a420004
    ctx->pc = 0x237618u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
label_23761c:
    // 0x23761c: 0x50400061
    ctx->pc = 0x23761Cu;
    {
        const bool branch_taken_0x23761c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x23761c) {
            ctx->pc = 0x237620u;
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
            ctx->pc = 0x2377A4u;
            goto label_2377a4;
        }
    }
    ctx->pc = 0x237624u;
    // 0x237624: 0x3c0140a0
    ctx->pc = 0x237624u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x237628: 0x4481c000
    ctx->pc = 0x237628u;
    *(uint32_t*)&ctx->f[24] = GPR_U32(ctx, 1);
    // 0x23762c: 0x3c014049
    ctx->pc = 0x23762cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x237630: 0x34210fdb
    ctx->pc = 0x237630u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x237634: 0x4481b800
    ctx->pc = 0x237634u;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 1);
label_237638:
    // 0x237638: 0x8e2300fc
    ctx->pc = 0x237638u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x23763c: 0x24020001
    ctx->pc = 0x23763cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x237640: 0x54620054
    ctx->pc = 0x237640u;
    {
        const bool branch_taken_0x237640 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x237640) {
            ctx->pc = 0x237644u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x237794u;
            goto label_237794;
        }
    }
    ctx->pc = 0x237648u;
    // 0x237648: 0x8e220138
    ctx->pc = 0x237648u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x23764c: 0x30420004
    ctx->pc = 0x23764cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x237650: 0x54400050
    ctx->pc = 0x237650u;
    {
        const bool branch_taken_0x237650 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x237650) {
            ctx->pc = 0x237654u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x237794u;
            goto label_237794;
        }
    }
    ctx->pc = 0x237658u;
    // 0x237658: 0xc6030060
    ctx->pc = 0x237658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23765c: 0xc6200070
    ctx->pc = 0x23765cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237660: 0x460018c1
    ctx->pc = 0x237660u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x237664: 0xe7a30000
    ctx->pc = 0x237664u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x237668: 0xc6020064
    ctx->pc = 0x237668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23766c: 0xc6200074
    ctx->pc = 0x23766cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237670: 0x46001081
    ctx->pc = 0x237670u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x237674: 0xe7a20004
    ctx->pc = 0x237674u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x237678: 0xc6000068
    ctx->pc = 0x237678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23767c: 0xc6210078
    ctx->pc = 0x23767cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x237680: 0x46010001
    ctx->pc = 0x237680u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x237684: 0xe7a00008
    ctx->pc = 0x237684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x237688: 0x460318c2
    ctx->pc = 0x237688u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x23768c: 0x46021082
    ctx->pc = 0x23768cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x237690: 0x460218c0
    ctx->pc = 0x237690u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x237694: 0x46000002
    ctx->pc = 0x237694u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x237698: 0x46001b00
    ctx->pc = 0x237698u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x23769c: 0x0
    ctx->pc = 0x23769cu;
    // NOP
    // 0x2376a0: 0x0
    ctx->pc = 0x2376a0u;
    // NOP
    // 0x2376a4: 0x460c0004
    ctx->pc = 0x2376a4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2376a8: 0x46000032
    ctx->pc = 0x2376a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2376ac: 0x0
    ctx->pc = 0x2376acu;
    // NOP
    // 0x2376b0: 0x45010004
    ctx->pc = 0x2376B0u;
    {
        const bool branch_taken_0x2376b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2376B4u;
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x2376b0) {
            ctx->pc = 0x2376C4u;
            goto label_2376c4;
        }
    }
    ctx->pc = 0x2376B8u;
    // 0x2376b8: 0xc0ba284
    ctx->pc = 0x2376B8u;
    SET_GPR_U32(ctx, 31, 0x2376C0u);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2376C0u; }
    }
    if (ctx->pc != 0x2376C0u) { return; }
    ctx->pc = 0x2376C0u;
    // 0x2376c0: 0x46000546
    ctx->pc = 0x2376c0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2376c4:
    // 0x2376c4: 0xc6000314
    ctx->pc = 0x2376c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2376c8: 0x46150034
    ctx->pc = 0x2376c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2376cc: 0x0
    ctx->pc = 0x2376ccu;
    // NOP
    // 0x2376d0: 0x4501002f
    ctx->pc = 0x2376D0u;
    {
        const bool branch_taken_0x2376d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2376D4u;
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        if (branch_taken_0x2376d0) {
            ctx->pc = 0x237790u;
            goto label_237790;
        }
    }
    ctx->pc = 0x2376D8u;
    // 0x2376d8: 0x8e030000
    ctx->pc = 0x2376d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2376dc: 0x2402001e
    ctx->pc = 0x2376dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
    // 0x2376e0: 0x5462000d
    ctx->pc = 0x2376E0u;
    {
        const bool branch_taken_0x2376e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2376e0) {
            ctx->pc = 0x2376E4u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x237718u;
            goto label_237718;
        }
    }
    ctx->pc = 0x2376E8u;
    // 0x2376e8: 0x8e220134
    ctx->pc = 0x2376e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x2376ec: 0x3c030008
    ctx->pc = 0x2376ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)8 << 16));
    // 0x2376f0: 0x431024
    ctx->pc = 0x2376f0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2376f4: 0x50400008
    ctx->pc = 0x2376F4u;
    {
        const bool branch_taken_0x2376f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2376f4) {
            ctx->pc = 0x2376F8u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x237718u;
            goto label_237718;
        }
    }
    ctx->pc = 0x2376FCu;
    // 0x2376fc: 0x4616a834
    ctx->pc = 0x2376fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x237700: 0x0
    ctx->pc = 0x237700u;
    // NOP
    // 0x237704: 0x45020023
    ctx->pc = 0x237704u;
    {
        const bool branch_taken_0x237704 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x237704) {
            ctx->pc = 0x237708u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x237794u;
            goto label_237794;
        }
    }
    ctx->pc = 0x23770Cu;
    // 0x23770c: 0x4600ad86
    ctx->pc = 0x23770cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[21]);
    // 0x237710: 0x1000001f
    ctx->pc = 0x237710u;
    {
        const bool branch_taken_0x237710 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x237714u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 18));
        if (branch_taken_0x237710) {
            ctx->pc = 0x237790u;
            goto label_237790;
        }
    }
    ctx->pc = 0x237718u;
label_237718:
    // 0x237718: 0x46180002
    ctx->pc = 0x237718u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x23771c: 0x46140034
    ctx->pc = 0x23771cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x237720: 0x0
    ctx->pc = 0x237720u;
    // NOP
    // 0x237724: 0x45020004
    ctx->pc = 0x237724u;
    {
        const bool branch_taken_0x237724 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x237724) {
            ctx->pc = 0x237728u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x237738u;
            goto label_237738;
        }
    }
    ctx->pc = 0x23772Cu;
    // 0x23772c: 0xc6200944
    ctx->pc = 0x23772cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237730: 0x4600a500
    ctx->pc = 0x237730u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x237734: 0xc600028c
    ctx->pc = 0x237734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_237738:
    // 0x237738: 0x4600a034
    ctx->pc = 0x237738u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23773c: 0x0
    ctx->pc = 0x23773cu;
    // NOP
    // 0x237740: 0x45020014
    ctx->pc = 0x237740u;
    {
        const bool branch_taken_0x237740 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x237740) {
            ctx->pc = 0x237744u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x237794u;
            goto label_237794;
        }
    }
    ctx->pc = 0x237748u;
    // 0x237748: 0xc6000310
    ctx->pc = 0x237748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23774c: 0x46170034
    ctx->pc = 0x23774cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x237750: 0x0
    ctx->pc = 0x237750u;
    // NOP
    // 0x237754: 0x4500000b
    ctx->pc = 0x237754u;
    {
        const bool branch_taken_0x237754 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x237758u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 112));
        if (branch_taken_0x237754) {
            ctx->pc = 0x237784u;
            goto label_237784;
        }
    }
    ctx->pc = 0x23775Cu;
    // 0x23775c: 0xc09a2aa
    ctx->pc = 0x23775Cu;
    SET_GPR_U32(ctx, 31, 0x237764u);
    ctx->pc = 0x237760u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 96));
    ctx->pc = 0x268AA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_yaw_0x268aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237764u; }
    }
    if (ctx->pc != 0x237764u) { return; }
    ctx->pc = 0x237764u;
    // 0x237764: 0xc6010258
    ctx->pc = 0x237764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x237768: 0x46010001
    ctx->pc = 0x237768u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23776c: 0x46000005
    ctx->pc = 0x23776cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x237770: 0xc6010310
    ctx->pc = 0x237770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x237774: 0x46000834
    ctx->pc = 0x237774u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x237778: 0x0
    ctx->pc = 0x237778u;
    // NOP
    // 0x23777c: 0x45030005
    ctx->pc = 0x23777Cu;
    {
        const bool branch_taken_0x23777c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23777c) {
            ctx->pc = 0x237780u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x237794u;
            goto label_237794;
        }
    }
    ctx->pc = 0x237784u;
label_237784:
    // 0x237784: 0xe614028c
    ctx->pc = 0x237784u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 652), bits); }
    // 0x237788: 0xe6150290
    ctx->pc = 0x237788u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 656), bits); }
    // 0x23778c: 0xa6120288
    ctx->pc = 0x23778cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 648), (uint16_t)GPR_U32(ctx, 18));
label_237790:
    // 0x237790: 0x26520001
    ctx->pc = 0x237790u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_237794:
    // 0x237794: 0x2a420004
    ctx->pc = 0x237794u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
    // 0x237798: 0x1440ffa7
    ctx->pc = 0x237798u;
    {
        const bool branch_taken_0x237798 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23779Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 11008));
        if (branch_taken_0x237798) {
            ctx->pc = 0x237638u;
            goto label_237638;
        }
    }
    ctx->pc = 0x2377A0u;
label_2377a0:
    // 0x2377a0: 0x86040288
    ctx->pc = 0x2377a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
label_2377a4:
    // 0x2377a4: 0x4800016
    ctx->pc = 0x2377A4u;
    {
        const bool branch_taken_0x2377a4 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x2377a4) {
            ctx->pc = 0x237800u;
            goto label_237800;
        }
    }
    ctx->pc = 0x2377ACu;
    // 0x2377ac: 0xc6010290
    ctx->pc = 0x2377acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2377b0: 0xc6000314
    ctx->pc = 0x2377b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2377b4: 0x46000836
    ctx->pc = 0x2377b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2377b8: 0x0
    ctx->pc = 0x2377b8u;
    // NOP
    // 0x2377bc: 0x45000015
    ctx->pc = 0x2377BCu;
    {
        const bool branch_taken_0x2377bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2377C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2377bc) {
            ctx->pc = 0x237814u;
            goto label_237814;
        }
    }
    ctx->pc = 0x2377C4u;
    // 0x2377c4: 0xa60202f2
    ctx->pc = 0x2377c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 754), (uint16_t)GPR_U32(ctx, 2));
    // 0x2377c8: 0x3c020032
    ctx->pc = 0x2377c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2377cc: 0x24421bc0
    ctx->pc = 0x2377ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x2377d0: 0x24032b00
    ctx->pc = 0x2377d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x2377d4: 0x831818
    ctx->pc = 0x2377d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2377d8: 0x621821
    ctx->pc = 0x2377d8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2377dc: 0x8c620940
    ctx->pc = 0x2377dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 2368)));
    // 0x2377e0: 0x24420001
    ctx->pc = 0x2377e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2377e4: 0xac620940
    ctx->pc = 0x2377e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2368), GPR_U32(ctx, 2));
    // 0x2377e8: 0xc4600944
    ctx->pc = 0x2377e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2377ec: 0x3c014000
    ctx->pc = 0x2377ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x2377f0: 0x44810800
    ctx->pc = 0x2377f0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2377f4: 0x46010000
    ctx->pc = 0x2377f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2377f8: 0x10000006
    ctx->pc = 0x2377F8u;
    {
        const bool branch_taken_0x2377f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2377FCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2372), bits); }
        if (branch_taken_0x2377f8) {
            ctx->pc = 0x237814u;
            goto label_237814;
        }
    }
    ctx->pc = 0x237800u;
label_237800:
    // 0x237800: 0x3c0147c3
    ctx->pc = 0x237800u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18371 << 16));
    // 0x237804: 0x34215000
    ctx->pc = 0x237804u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 20480));
    // 0x237808: 0x44810000
    ctx->pc = 0x237808u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23780c: 0xe6000290
    ctx->pc = 0x23780cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 656), bits); }
    // 0x237810: 0xe600028c
    ctx->pc = 0x237810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 652), bits); }
label_237814:
    // 0x237814: 0xdfbf0040
    ctx->pc = 0x237814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x237818: 0xdfb20030
    ctx->pc = 0x237818u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23781c: 0xdfb10020
    ctx->pc = 0x23781cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237820: 0xdfb00010
    ctx->pc = 0x237820u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237824: 0xc7b80070
    ctx->pc = 0x237824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x237828: 0xc7b70068
    ctx->pc = 0x237828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x23782c: 0xc7b60060
    ctx->pc = 0x23782cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x237830: 0xc7b50058
    ctx->pc = 0x237830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x237834: 0xc7b40050
    ctx->pc = 0x237834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x237838: 0x3e00008
    ctx->pc = 0x237838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23783Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x237420u: goto label_237420;
            case 0x237438u: goto label_237438;
            case 0x237444u: goto label_237444;
            case 0x23744Cu: goto label_23744c;
            case 0x2374B0u: goto label_2374b0;
            case 0x237550u: goto label_237550;
            case 0x23757Cu: goto label_23757c;
            case 0x237580u: goto label_237580;
            case 0x2375A0u: goto label_2375a0;
            case 0x2375B0u: goto label_2375b0;
            case 0x2375D4u: goto label_2375d4;
            case 0x23761Cu: goto label_23761c;
            case 0x237638u: goto label_237638;
            case 0x2376C4u: goto label_2376c4;
            case 0x237718u: goto label_237718;
            case 0x237738u: goto label_237738;
            case 0x237784u: goto label_237784;
            case 0x237790u: goto label_237790;
            case 0x237794u: goto label_237794;
            case 0x2377A0u: goto label_2377a0;
            case 0x2377A4u: goto label_2377a4;
            case 0x237800u: goto label_237800;
            case 0x237814u: goto label_237814;
            default: break;
        }
        return;
    }
    ctx->pc = 0x237840u;
}
