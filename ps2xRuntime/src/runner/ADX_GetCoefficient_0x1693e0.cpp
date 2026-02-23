#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"
#include <iostream>

// Function: ADX_GetCoefficient
// Address: 0x1693e0 - 0x1695d4
void ADX_GetCoefficient_0x1693e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADX_GetCoefficient");

    std::cerr << "[ADX_GetCoefficient] entry" << std::endl;
    ctx->pc = 0x1693e0u;

    // 0x1693e0: 0x27bdff70
    ctx->pc = 0x1693e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1693e4: 0xe7b60080
    ctx->pc = 0x1693e4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1693e8: 0x3c014000
    ctx->pc = 0x1693e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x1693ec: 0x4481b000
    ctx->pc = 0x1693ecu;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 1);
    // 0x1693f0: 0xe7b40070
    ctx->pc = 0x1693f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1693f4: 0x0
    ctx->pc = 0x1693f4u;
    // NOP
    // 0x1693f8: 0x0
    ctx->pc = 0x1693f8u;
    // NOP
    // 0x1693fc: 0x46160504
    ctx->pc = 0x1693fcu;
    std::cerr << "[ADX_GetCoefficient] before FPU_SQRT" << std::endl;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x169400: 0xffb50050
    ctx->pc = 0x169400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x169404: 0xffb40040
    ctx->pc = 0x169404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x169408: 0xe0a82d
    ctx->pc = 0x169408u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16940c: 0xffb10010
    ctx->pc = 0x16940cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x169410: 0xc0a02d
    ctx->pc = 0x169410u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169414: 0xffb00000
    ctx->pc = 0x169414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169418: 0xa0882d
    ctx->pc = 0x169418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16941c: 0xe7b50078
    ctx->pc = 0x16941cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x169420: 0x80802d
    ctx->pc = 0x169420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169424: 0xffbf0060
    ctx->pc = 0x169424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x169428: 0x4614a032
    ctx->pc = 0x169428u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16942c: 0xffb30030
    ctx->pc = 0x16942cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x169430: 0xffb20020
    ctx->pc = 0x169430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x169434: 0x45010004
    ctx->pc = 0x169434u;
    {
        const bool branch_taken_0x169434 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x169438u;
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        if (branch_taken_0x169434) {
            ctx->pc = 0x169448u;
            goto label_169448;
        }
    }
    ctx->pc = 0x16943Cu;
    // 0x16943c: 0xc0541fe
    ctx->pc = 0x16943Cu;
    SET_GPR_U32(ctx, 31, 0x169444u);
    ctx->pc = 0x169440u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x1507F8u;
    std::cerr << "[ADX_GetCoefficient] before sqrtf#1" << std::endl;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x1507f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169444u; }
        else if (ctx->pc != 0x169444u) { ctx->pc = 0x169444u; }
    }
    if (ctx->pc != 0x169444u) { return; }
    ctx->pc = 0x169444u;
    // 0x169444: 0x46000546
    ctx->pc = 0x169444u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_169448:
    // 0x169448: 0xc052e16
    ctx->pc = 0x169448u;
    SET_GPR_U32(ctx, 31, 0x169450u);
    ctx->pc = 0x16944Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B858u;
    std::cerr << "[ADX_GetCoefficient] before litodp#1" << std::endl;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169450u; }
        else if (ctx->pc != 0x169450u) { ctx->pc = 0x169450u; }
    }
    if (ctx->pc != 0x169450u) { return; }
    ctx->pc = 0x169450u;
    // 0x169450: 0x3c01002c
    ctx->pc = 0x169450u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x169454: 0xdc259100
    ctx->pc = 0x169454u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294938880)));
    // 0x169458: 0xc052cb8
    ctx->pc = 0x169458u;
    SET_GPR_U32(ctx, 31, 0x169460u);
    ctx->pc = 0x16945Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B2E0u;
    std::cerr << "[ADX_GetCoefficient] before dpmul" << std::endl;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169460u; }
        else if (ctx->pc != 0x169460u) { ctx->pc = 0x169460u; }
    }
    if (ctx->pc != 0x169460u) { return; }
    ctx->pc = 0x169460u;
    // 0x169460: 0x40802d
    ctx->pc = 0x169460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169464: 0xc052e16
    ctx->pc = 0x169464u;
    SET_GPR_U32(ctx, 31, 0x16946Cu);
    ctx->pc = 0x169468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16946Cu; }
        else if (ctx->pc != 0x16946Cu) { ctx->pc = 0x16946Cu; }
    }
    if (ctx->pc != 0x16946Cu) { return; }
    ctx->pc = 0x16946Cu;
    // 0x16946c: 0x200202d
    ctx->pc = 0x16946cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169470: 0xc052d62
    ctx->pc = 0x169470u;
    SET_GPR_U32(ctx, 31, 0x169478u);
    ctx->pc = 0x169474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B588u;
    std::cerr << "[ADX_GetCoefficient] before dpdiv#1" << std::endl;
    {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x14b588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169478u; }
        else if (ctx->pc != 0x169478u) { ctx->pc = 0x169478u; }
    }
    if (ctx->pc != 0x169478u) { return; }
    ctx->pc = 0x169478u;
    // 0x169478: 0xc052eac
    ctx->pc = 0x169478u;
    SET_GPR_U32(ctx, 31, 0x169480u);
    ctx->pc = 0x16947Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14BAB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x14bab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169480u; }
        else if (ctx->pc != 0x169480u) { ctx->pc = 0x169480u; }
    }
    if (ctx->pc != 0x169480u) { return; }
    ctx->pc = 0x169480u;
    // 0x169480: 0xc054130
    ctx->pc = 0x169480u;
    SET_GPR_U32(ctx, 31, 0x169488u);
    ctx->pc = 0x169484u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x1504C0u;
    std::cerr << "[ADX_GetCoefficient] before cosf" << std::endl;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x1504c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169488u; }
        else if (ctx->pc != 0x169488u) { ctx->pc = 0x169488u; }
    }
    if (ctx->pc != 0x169488u) { return; }
    ctx->pc = 0x169488u;
    // 0x169488: 0xc0531aa
    ctx->pc = 0x169488u;
    SET_GPR_U32(ctx, 31, 0x169490u);
    ctx->pc = 0x16948Cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    ctx->pc = 0x14C6A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x14c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169490u; }
        else if (ctx->pc != 0x169490u) { ctx->pc = 0x169490u; }
    }
    if (ctx->pc != 0x169490u) { return; }
    ctx->pc = 0x169490u;
    // 0x169490: 0x4600a006
    ctx->pc = 0x169490u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x169494: 0x46000032
    ctx->pc = 0x169494u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x169498: 0x0
    ctx->pc = 0x169498u;
    // NOP
    // 0x16949c: 0x45010003
    ctx->pc = 0x16949Cu;
    {
        const bool branch_taken_0x16949c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1694A0u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16949c) {
            ctx->pc = 0x1694ACu;
            goto label_1694ac;
        }
    }
    ctx->pc = 0x1694A4u;
    // 0x1694a4: 0xc0541fe
    ctx->pc = 0x1694A4u;
    SET_GPR_U32(ctx, 31, 0x1694ACu);
    ctx->pc = 0x1694A8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x1507F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x1507f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1694ACu; }
        else if (ctx->pc != 0x1694ACu) { ctx->pc = 0x1694ACu; }
    }
    if (ctx->pc != 0x1694ACu) { return; }
    ctx->pc = 0x1694ACu;
label_1694ac:
    // 0x1694ac: 0xc0531aa
    ctx->pc = 0x1694ACu;
    SET_GPR_U32(ctx, 31, 0x1694B4u);
    ctx->pc = 0x1694B0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x14C6A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x14c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1694B4u; }
        else if (ctx->pc != 0x1694B4u) { ctx->pc = 0x1694B4u; }
    }
    if (ctx->pc != 0x1694B4u) { return; }
    ctx->pc = 0x1694B4u;
    // 0x1694b4: 0x3405ffc0
    ctx->pc = 0x1694b4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65472));
    // 0x1694b8: 0x52bbc
    ctx->pc = 0x1694b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1694bc: 0xc052c9e
    ctx->pc = 0x1694BCu;
    SET_GPR_U32(ctx, 31, 0x1694C4u);
    ctx->pc = 0x1694C0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B278u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x14b278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1694C4u; }
        else if (ctx->pc != 0x1694C4u) { ctx->pc = 0x1694C4u; }
    }
    if (ctx->pc != 0x1694C4u) { return; }
    ctx->pc = 0x1694C4u;
    // 0x1694c4: 0x40902d
    ctx->pc = 0x1694c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1694c8: 0x260202d
    ctx->pc = 0x1694c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1694cc: 0xc052c88
    ctx->pc = 0x1694CCu;
    SET_GPR_U32(ctx, 31, 0x1694D4u);
    ctx->pc = 0x1694D0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B220u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x14b220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1694D4u; }
        else if (ctx->pc != 0x1694D4u) { ctx->pc = 0x1694D4u; }
    }
    if (ctx->pc != 0x1694D4u) { return; }
    ctx->pc = 0x1694D4u;
    // 0x1694d4: 0x40802d
    ctx->pc = 0x1694d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1694d8: 0x260202d
    ctx->pc = 0x1694d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1694dc: 0xc052c9e
    ctx->pc = 0x1694DCu;
    SET_GPR_U32(ctx, 31, 0x1694E4u);
    ctx->pc = 0x1694E0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B278u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x14b278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1694E4u; }
        else if (ctx->pc != 0x1694E4u) { ctx->pc = 0x1694E4u; }
    }
    if (ctx->pc != 0x1694E4u) { return; }
    ctx->pc = 0x1694E4u;
    // 0x1694e4: 0x200202d
    ctx->pc = 0x1694e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1694e8: 0xc052cb8
    ctx->pc = 0x1694E8u;
    SET_GPR_U32(ctx, 31, 0x1694F0u);
    ctx->pc = 0x1694ECu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1694F0u; }
        else if (ctx->pc != 0x1694F0u) { ctx->pc = 0x1694F0u; }
    }
    if (ctx->pc != 0x1694F0u) { return; }
    ctx->pc = 0x1694F0u;
    // 0x1694f0: 0x40802d
    ctx->pc = 0x1694f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1694f4: 0xc052eac
    ctx->pc = 0x1694F4u;
    SET_GPR_U32(ctx, 31, 0x1694FCu);
    ctx->pc = 0x1694F8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14BAB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x14bab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1694FCu; }
        else if (ctx->pc != 0x1694FCu) { ctx->pc = 0x1694FCu; }
    }
    if (ctx->pc != 0x1694FCu) { return; }
    ctx->pc = 0x1694FCu;
    // 0x1694fc: 0x0
    ctx->pc = 0x1694fcu;
    // NOP
    // 0x169500: 0x0
    ctx->pc = 0x169500u;
    // NOP
    // 0x169504: 0x46000004
    ctx->pc = 0x169504u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x169508: 0x46000032
    ctx->pc = 0x169508u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16950c: 0x45010005
    ctx->pc = 0x16950Cu;
    {
        const bool branch_taken_0x16950c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16950c) {
            ctx->pc = 0x169524u;
            goto label_169524;
        }
    }
    ctx->pc = 0x169514u;
    // 0x169514: 0xc052eac
    ctx->pc = 0x169514u;
    SET_GPR_U32(ctx, 31, 0x16951Cu);
    ctx->pc = 0x169518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14BAB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x14bab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16951Cu; }
        else if (ctx->pc != 0x16951Cu) { ctx->pc = 0x16951Cu; }
    }
    if (ctx->pc != 0x16951Cu) { return; }
    ctx->pc = 0x16951Cu;
    // 0x16951c: 0xc0541fe
    ctx->pc = 0x16951Cu;
    SET_GPR_U32(ctx, 31, 0x169524u);
    ctx->pc = 0x169520u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x1507F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x1507f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169524u; }
        else if (ctx->pc != 0x169524u) { ctx->pc = 0x169524u; }
    }
    if (ctx->pc != 0x169524u) { return; }
    ctx->pc = 0x169524u;
label_169524:
    // 0x169524: 0x34118160
    ctx->pc = 0x169524u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 0), 33120));
    // 0x169528: 0x118bfc
    ctx->pc = 0x169528u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 15));
    // 0x16952c: 0xc0531aa
    ctx->pc = 0x16952Cu;
    SET_GPR_U32(ctx, 31, 0x169534u);
    ctx->pc = 0x169530u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x14C6A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x14c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169534u; }
        else if (ctx->pc != 0x169534u) { ctx->pc = 0x169534u; }
    }
    if (ctx->pc != 0x169534u) { return; }
    ctx->pc = 0x169534u;
    // 0x169534: 0x260202d
    ctx->pc = 0x169534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169538: 0xc052c9e
    ctx->pc = 0x169538u;
    SET_GPR_U32(ctx, 31, 0x169540u);
    ctx->pc = 0x16953Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B278u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x14b278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169540u; }
        else if (ctx->pc != 0x169540u) { ctx->pc = 0x169540u; }
    }
    if (ctx->pc != 0x169540u) { return; }
    ctx->pc = 0x169540u;
    // 0x169540: 0x240282d
    ctx->pc = 0x169540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169544: 0xc052d62
    ctx->pc = 0x169544u;
    SET_GPR_U32(ctx, 31, 0x16954Cu);
    ctx->pc = 0x169548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B588u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x14b588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16954Cu; }
        else if (ctx->pc != 0x16954Cu) { ctx->pc = 0x16954Cu; }
    }
    if (ctx->pc != 0x16954Cu) { return; }
    ctx->pc = 0x16954Cu;
    // 0x16954c: 0x40802d
    ctx->pc = 0x16954cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169550: 0x200202d
    ctx->pc = 0x169550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169554: 0xc052c88
    ctx->pc = 0x169554u;
    SET_GPR_U32(ctx, 31, 0x16955Cu);
    ctx->pc = 0x169558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B220u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x14b220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16955Cu; }
        else if (ctx->pc != 0x16955Cu) { ctx->pc = 0x16955Cu; }
    }
    if (ctx->pc != 0x16955Cu) { return; }
    ctx->pc = 0x16955Cu;
    // 0x16955c: 0x220282d
    ctx->pc = 0x16955cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169560: 0xc052cb8
    ctx->pc = 0x169560u;
    SET_GPR_U32(ctx, 31, 0x169568u);
    ctx->pc = 0x169564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169568u; }
        else if (ctx->pc != 0x169568u) { ctx->pc = 0x169568u; }
    }
    if (ctx->pc != 0x169568u) { return; }
    ctx->pc = 0x169568u;
    // 0x169568: 0xc052e44
    ctx->pc = 0x169568u;
    SET_GPR_U32(ctx, 31, 0x169570u);
    ctx->pc = 0x16956Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B910u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x14b910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169570u; }
        else if (ctx->pc != 0x169570u) { ctx->pc = 0x169570u; }
    }
    if (ctx->pc != 0x169570u) { return; }
    ctx->pc = 0x169570u;
    // 0x169570: 0xa6820000
    ctx->pc = 0x169570u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x169574: 0x200282d
    ctx->pc = 0x169574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169578: 0xc052c9e
    ctx->pc = 0x169578u;
    SET_GPR_U32(ctx, 31, 0x169580u);
    ctx->pc = 0x16957Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B278u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x14b278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169580u; }
        else if (ctx->pc != 0x169580u) { ctx->pc = 0x169580u; }
    }
    if (ctx->pc != 0x169580u) { return; }
    ctx->pc = 0x169580u;
    // 0x169580: 0x200282d
    ctx->pc = 0x169580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169584: 0xc052cb8
    ctx->pc = 0x169584u;
    SET_GPR_U32(ctx, 31, 0x16958Cu);
    ctx->pc = 0x169588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16958Cu; }
        else if (ctx->pc != 0x16958Cu) { ctx->pc = 0x16958Cu; }
    }
    if (ctx->pc != 0x16958Cu) { return; }
    ctx->pc = 0x16958Cu;
    // 0x16958c: 0x220282d
    ctx->pc = 0x16958cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169590: 0xc052cb8
    ctx->pc = 0x169590u;
    SET_GPR_U32(ctx, 31, 0x169598u);
    ctx->pc = 0x169594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169598u; }
        else if (ctx->pc != 0x169598u) { ctx->pc = 0x169598u; }
    }
    if (ctx->pc != 0x169598u) { return; }
    ctx->pc = 0x169598u;
    // 0x169598: 0xc052e44
    ctx->pc = 0x169598u;
    SET_GPR_U32(ctx, 31, 0x1695A0u);
    ctx->pc = 0x16959Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B910u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x14b910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1695A0u; }
        else if (ctx->pc != 0x1695A0u) { ctx->pc = 0x1695A0u; }
    }
    if (ctx->pc != 0x1695A0u) { return; }
    ctx->pc = 0x1695A0u;
    // 0x1695a0: 0xa6a20000
    ctx->pc = 0x1695a0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1695a4: 0xdfbf0060
    ctx->pc = 0x1695a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1695a8: 0xdfb50050
    ctx->pc = 0x1695a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1695ac: 0xdfb40040
    ctx->pc = 0x1695acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1695b0: 0xdfb30030
    ctx->pc = 0x1695b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1695b4: 0xdfb20020
    ctx->pc = 0x1695b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1695b8: 0xdfb10010
    ctx->pc = 0x1695b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1695bc: 0xdfb00000
    ctx->pc = 0x1695bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1695c0: 0xc7b60080
    ctx->pc = 0x1695c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1695c4: 0xc7b50078
    ctx->pc = 0x1695c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1695c8: 0xc7b40070
    ctx->pc = 0x1695c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1695cc: 0x3e00008
    ctx->pc = 0x1695CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1695D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169448u: goto label_169448;
            case 0x1694ACu: goto label_1694ac;
            case 0x169524u: goto label_169524;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1695D4u;
}
