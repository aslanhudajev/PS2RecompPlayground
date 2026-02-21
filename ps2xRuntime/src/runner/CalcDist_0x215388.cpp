#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CalcDist
// Address: 0x215388 - 0x2156c0
void CalcDist_0x215388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x215388u;

    // 0x215388: 0x27bdff50
    ctx->pc = 0x215388u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x21538c: 0xffbf0080
    ctx->pc = 0x21538cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x215390: 0xffb70070
    ctx->pc = 0x215390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x215394: 0xffb60060
    ctx->pc = 0x215394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x215398: 0xffb50050
    ctx->pc = 0x215398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x21539c: 0xffb40040
    ctx->pc = 0x21539cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2153a0: 0xffb30030
    ctx->pc = 0x2153a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2153a4: 0xffb20020
    ctx->pc = 0x2153a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2153a8: 0xffb10010
    ctx->pc = 0x2153a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2153ac: 0xffb00000
    ctx->pc = 0x2153acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2153b0: 0xe7b700a8
    ctx->pc = 0x2153b0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2153b4: 0xe7b600a0
    ctx->pc = 0x2153b4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2153b8: 0xe7b50098
    ctx->pc = 0x2153b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2153bc: 0xe7b40090
    ctx->pc = 0x2153bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2153c0: 0x80a02d
    ctx->pc = 0x2153c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2153c4: 0xa0982d
    ctx->pc = 0x2153c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2153c8: 0xc0b02d
    ctx->pc = 0x2153c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2153cc: 0xc08544a
    ctx->pc = 0x2153CCu;
    SET_GPR_U32(ctx, 31, 0x2153D4u);
    ctx->pc = 0x2153D0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
    ctx->pc = 0x215128u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcFrustrumNormals_0x215128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2153D4u; }
    }
    if (ctx->pc != 0x2153D4u) { return; }
    ctx->pc = 0x2153D4u;
    // 0x2153d4: 0x3c020031
    ctx->pc = 0x2153d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2153d8: 0x8c43002c
    ctx->pc = 0x2153d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2153dc: 0x24020001
    ctx->pc = 0x2153dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2153e0: 0x1462000d
    ctx->pc = 0x2153E0u;
    {
        const bool branch_taken_0x2153e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2153E4u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2153e0) {
            ctx->pc = 0x215418u;
            goto label_215418;
        }
    }
    ctx->pc = 0x2153E8u;
    // 0x2153e8: 0x3c020032
    ctx->pc = 0x2153e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2153ec: 0x8c42f7e0
    ctx->pc = 0x2153ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965216)));
    // 0x2153f0: 0x10400004
    ctx->pc = 0x2153F0u;
    {
        const bool branch_taken_0x2153f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2153F4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2153f0) {
            ctx->pc = 0x215404u;
            goto label_215404;
        }
    }
    ctx->pc = 0x2153F8u;
    // 0x2153f8: 0xc440f79c
    ctx->pc = 0x2153f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2153fc: 0x100000a1
    ctx->pc = 0x2153FCu;
    {
        const bool branch_taken_0x2153fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x215400u;
        ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
        if (branch_taken_0x2153fc) {
            ctx->pc = 0x215684u;
            goto label_215684;
        }
    }
    ctx->pc = 0x215404u;
label_215404:
    // 0x215404: 0x3c020034
    ctx->pc = 0x215404u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x215408: 0x8c42e7c8
    ctx->pc = 0x215408u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x21540c: 0x8c420060
    ctx->pc = 0x21540cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x215410: 0x1000009c
    ctx->pc = 0x215410u;
    {
        const bool branch_taken_0x215410 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x215414u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x215410) {
            ctx->pc = 0x215684u;
            goto label_215684;
        }
    }
    ctx->pc = 0x215418u;
label_215418:
    // 0x215418: 0x4480b000
    ctx->pc = 0x215418u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 0);
    // 0x21541c: 0x3c020032
    ctx->pc = 0x21541cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x215420: 0x24571bc0
    ctx->pc = 0x215420u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x215424: 0x151100
    ctx->pc = 0x215424u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 4));
label_215428:
    // 0x215428: 0x561021
    ctx->pc = 0x215428u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x21542c: 0xc4440000
    ctx->pc = 0x21542cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x215430: 0xc6810000
    ctx->pc = 0x215430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215434: 0x46012042
    ctx->pc = 0x215434u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x215438: 0xc4430004
    ctx->pc = 0x215438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21543c: 0xc6800004
    ctx->pc = 0x21543cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215440: 0x46001802
    ctx->pc = 0x215440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x215444: 0x46000840
    ctx->pc = 0x215444u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x215448: 0xc4420008
    ctx->pc = 0x215448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21544c: 0xc6800008
    ctx->pc = 0x21544cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215450: 0x46001002
    ctx->pc = 0x215450u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x215454: 0x46000840
    ctx->pc = 0x215454u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x215458: 0x3c013f80
    ctx->pc = 0x215458u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x21545c: 0x44810000
    ctx->pc = 0x21545cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x215460: 0x0
    ctx->pc = 0x215460u;
    // NOP
    // 0x215464: 0x0
    ctx->pc = 0x215464u;
    // NOP
    // 0x215468: 0x46010543
    ctx->pc = 0x215468u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[21] = ctx->f[0] / ctx->f[1];
    // 0x21546c: 0xc6600000
    ctx->pc = 0x21546cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215470: 0x46002102
    ctx->pc = 0x215470u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x215474: 0xc6600004
    ctx->pc = 0x215474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215478: 0x460018c2
    ctx->pc = 0x215478u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x21547c: 0x46032100
    ctx->pc = 0x21547cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x215480: 0xc6600008
    ctx->pc = 0x215480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215484: 0x46001082
    ctx->pc = 0x215484u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x215488: 0x46022500
    ctx->pc = 0x215488u;
    ctx->f[20] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x21548c: 0x902d
    ctx->pc = 0x21548cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215490: 0x151100
    ctx->pc = 0x215490u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 4));
    // 0x215494: 0x568821
    ctx->pc = 0x215494u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x215498: 0x24022b00
    ctx->pc = 0x215498u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x21549c: 0x0
    ctx->pc = 0x21549cu;
    // NOP
label_2154a0:
    // 0x2154a0: 0x2421818
    ctx->pc = 0x2154a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2154a4: 0x778021
    ctx->pc = 0x2154a4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2154a8: 0xc085208
    ctx->pc = 0x2154A8u;
    SET_GPR_U32(ctx, 31, 0x2154B0u);
    ctx->pc = 0x2154ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x214820u;
    {
        const uint32_t __entryPc = ctx->pc;
        CamIsPlayerValid_0x214820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2154B0u; }
    }
    if (ctx->pc != 0x2154B0u) { return; }
    ctx->pc = 0x2154B0u;
    // 0x2154b0: 0x10400041
    ctx->pc = 0x2154B0u;
    {
        const bool branch_taken_0x2154b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2154B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 96));
        if (branch_taken_0x2154b0) {
            ctx->pc = 0x2155B8u;
            goto label_2155b8;
        }
    }
    ctx->pc = 0x2154B8u;
    // 0x2154b8: 0xc6200000
    ctx->pc = 0x2154b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2154bc: 0xc6010060
    ctx->pc = 0x2154bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2154c0: 0x46010002
    ctx->pc = 0x2154c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2154c4: 0xc6210004
    ctx->pc = 0x2154c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2154c8: 0xc4420004
    ctx->pc = 0x2154c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2154cc: 0x46020842
    ctx->pc = 0x2154ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2154d0: 0x46010000
    ctx->pc = 0x2154d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2154d4: 0xc6210008
    ctx->pc = 0x2154d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2154d8: 0xc4420008
    ctx->pc = 0x2154d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2154dc: 0x46020842
    ctx->pc = 0x2154dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2154e0: 0x46010000
    ctx->pc = 0x2154e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2154e4: 0x4600a001
    ctx->pc = 0x2154e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2154e8: 0x46150002
    ctx->pc = 0x2154e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2154ec: 0x46160034
    ctx->pc = 0x2154ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2154f0: 0x0
    ctx->pc = 0x2154f0u;
    // NOP
    // 0x2154f4: 0x45000003
    ctx->pc = 0x2154F4u;
    {
        const bool branch_taken_0x2154f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2154F8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 80));
        if (branch_taken_0x2154f4) {
            ctx->pc = 0x215504u;
            goto label_215504;
        }
    }
    ctx->pc = 0x2154FCu;
    // 0x2154fc: 0x1000000e
    ctx->pc = 0x2154FCu;
    {
        const bool branch_taken_0x2154fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x215500u;
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        if (branch_taken_0x2154fc) {
            ctx->pc = 0x215538u;
            goto label_215538;
        }
    }
    ctx->pc = 0x215504u;
label_215504:
    // 0x215504: 0xc6220000
    ctx->pc = 0x215504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x215508: 0xc4400000
    ctx->pc = 0x215508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21550c: 0x46001082
    ctx->pc = 0x21550cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x215510: 0xc6200004
    ctx->pc = 0x215510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215514: 0xc4410004
    ctx->pc = 0x215514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215518: 0x46010002
    ctx->pc = 0x215518u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21551c: 0x46001080
    ctx->pc = 0x21551cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x215520: 0xc6200008
    ctx->pc = 0x215520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215524: 0xc4410008
    ctx->pc = 0x215524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215528: 0x46010002
    ctx->pc = 0x215528u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21552c: 0x46001080
    ctx->pc = 0x21552cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x215530: 0x4602a081
    ctx->pc = 0x215530u;
    ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x215534: 0x46151002
    ctx->pc = 0x215534u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
label_215538:
    // 0x215538: 0x46000586
    ctx->pc = 0x215538u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x21553c: 0xc6200000
    ctx->pc = 0x21553cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215540: 0xc4610000
    ctx->pc = 0x215540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215544: 0x46010002
    ctx->pc = 0x215544u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x215548: 0xc6210004
    ctx->pc = 0x215548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21554c: 0xc4620004
    ctx->pc = 0x21554cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x215550: 0x46020842
    ctx->pc = 0x215550u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x215554: 0x46010000
    ctx->pc = 0x215554u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x215558: 0xc6210008
    ctx->pc = 0x215558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21555c: 0xc4620008
    ctx->pc = 0x21555cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x215560: 0x46020842
    ctx->pc = 0x215560u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x215564: 0x46010000
    ctx->pc = 0x215564u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x215568: 0x4600a001
    ctx->pc = 0x215568u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x21556c: 0x46150002
    ctx->pc = 0x21556cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x215570: 0x46160034
    ctx->pc = 0x215570u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215574: 0x0
    ctx->pc = 0x215574u;
    // NOP
    // 0x215578: 0x4501000e
    ctx->pc = 0x215578u;
    {
        const bool branch_taken_0x215578 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21557Cu;
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        if (branch_taken_0x215578) {
            ctx->pc = 0x2155B4u;
            goto label_2155b4;
        }
    }
    ctx->pc = 0x215580u;
    // 0x215580: 0xc6220000
    ctx->pc = 0x215580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x215584: 0xc4600000
    ctx->pc = 0x215584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215588: 0x46001082
    ctx->pc = 0x215588u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x21558c: 0xc6200004
    ctx->pc = 0x21558cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215590: 0xc4610004
    ctx->pc = 0x215590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215594: 0x46010002
    ctx->pc = 0x215594u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x215598: 0x46001080
    ctx->pc = 0x215598u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21559c: 0xc6200008
    ctx->pc = 0x21559cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2155a0: 0xc4610008
    ctx->pc = 0x2155a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2155a4: 0x46010002
    ctx->pc = 0x2155a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2155a8: 0x46001080
    ctx->pc = 0x2155a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2155ac: 0x4602a001
    ctx->pc = 0x2155acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x2155b0: 0x46150002
    ctx->pc = 0x2155b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_2155b4:
    // 0x2155b4: 0x46000586
    ctx->pc = 0x2155b4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2155b8:
    // 0x2155b8: 0x26520001
    ctx->pc = 0x2155b8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x2155bc: 0x2a420004
    ctx->pc = 0x2155bcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
    // 0x2155c0: 0x1440ffb7
    ctx->pc = 0x2155C0u;
    {
        const bool branch_taken_0x2155c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2155C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x2155c0) {
            ctx->pc = 0x2154A0u;
            goto label_2154a0;
        }
    }
    ctx->pc = 0x2155C8u;
    // 0x2155c8: 0x26b50001
    ctx->pc = 0x2155c8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
    // 0x2155cc: 0x2aa20004
    ctx->pc = 0x2155ccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), 4));
    // 0x2155d0: 0x1440ff95
    ctx->pc = 0x2155D0u;
    {
        const bool branch_taken_0x2155d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2155D4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 4));
        if (branch_taken_0x2155d0) {
            ctx->pc = 0x215428u;
            goto label_215428;
        }
    }
    ctx->pc = 0x2155D8u;
    // 0x2155d8: 0x3c020034
    ctx->pc = 0x2155d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2155dc: 0x8c42e7c8
    ctx->pc = 0x2155dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x2155e0: 0x10400005
    ctx->pc = 0x2155E0u;
    {
        const bool branch_taken_0x2155e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2155E4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x2155e0) {
            ctx->pc = 0x2155F8u;
            goto label_2155f8;
        }
    }
    ctx->pc = 0x2155E8u;
    // 0x2155e8: 0x8c420060
    ctx->pc = 0x2155e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2155ec: 0x14400006
    ctx->pc = 0x2155ECu;
    {
        const bool branch_taken_0x2155ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2155F0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2155ec) {
            ctx->pc = 0x215608u;
            goto label_215608;
        }
    }
    ctx->pc = 0x2155F4u;
    // 0x2155f4: 0x3c04003a
    ctx->pc = 0x2155f4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_2155f8:
    // 0x2155f8: 0x24845aa0
    ctx->pc = 0x2155f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23200));
    // 0x2155fc: 0xc0b49a6
    ctx->pc = 0x2155FCu;
    SET_GPR_U32(ctx, 31, 0x215604u);
    ctx->pc = 0x215600u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215604u; }
    }
    if (ctx->pc != 0x215604u) { return; }
    ctx->pc = 0x215604u;
    // 0x215604: 0x3c020034
    ctx->pc = 0x215604u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_215608:
    // 0x215608: 0x8c42e7c8
    ctx->pc = 0x215608u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x21560c: 0x8c420060
    ctx->pc = 0x21560cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x215610: 0xc441002c
    ctx->pc = 0x215610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215614: 0x3c020032
    ctx->pc = 0x215614u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x215618: 0xc440f798
    ctx->pc = 0x215618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21561c: 0x46000801
    ctx->pc = 0x21561cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x215620: 0x4600b036
    ctx->pc = 0x215620u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215624: 0x0
    ctx->pc = 0x215624u;
    // NOP
    // 0x215628: 0x45020006
    ctx->pc = 0x215628u;
    {
        const bool branch_taken_0x215628 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x215628) {
            ctx->pc = 0x21562Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x215644u;
            goto label_215644;
        }
    }
    ctx->pc = 0x215630u;
    // 0x215630: 0x46170834
    ctx->pc = 0x215630u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215634: 0x0
    ctx->pc = 0x215634u;
    // NOP
    // 0x215638: 0x45010012
    ctx->pc = 0x215638u;
    {
        const bool branch_taken_0x215638 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21563Cu;
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        if (branch_taken_0x215638) {
            ctx->pc = 0x215684u;
            goto label_215684;
        }
    }
    ctx->pc = 0x215640u;
    // 0x215640: 0xc441f798
    ctx->pc = 0x215640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_215644:
    // 0x215644: 0x4601b801
    ctx->pc = 0x215644u;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[1]);
    // 0x215648: 0x4600b036
    ctx->pc = 0x215648u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21564c: 0x0
    ctx->pc = 0x21564cu;
    // NOP
    // 0x215650: 0x45000003
    ctx->pc = 0x215650u;
    {
        const bool branch_taken_0x215650 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x215654u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x215650) {
            ctx->pc = 0x215660u;
            goto label_215660;
        }
    }
    ctx->pc = 0x215658u;
    // 0x215658: 0x1000000a
    ctx->pc = 0x215658u;
    {
        const bool branch_taken_0x215658 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21565Cu;
        ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
        if (branch_taken_0x215658) {
            ctx->pc = 0x215684u;
            goto label_215684;
        }
    }
    ctx->pc = 0x215660u;
label_215660:
    // 0x215660: 0xc440f79c
    ctx->pc = 0x215660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215664: 0x4600b801
    ctx->pc = 0x215664u;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
    // 0x215668: 0x4600b036
    ctx->pc = 0x215668u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21566c: 0x0
    ctx->pc = 0x21566cu;
    // NOP
    // 0x215670: 0x45010004
    ctx->pc = 0x215670u;
    {
        const bool branch_taken_0x215670 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x215674u;
        ctx->f[0] = FPU_MOV_S(ctx->f[23]);
        if (branch_taken_0x215670) {
            ctx->pc = 0x215684u;
            goto label_215684;
        }
    }
    ctx->pc = 0x215678u;
    // 0x215678: 0x3c020032
    ctx->pc = 0x215678u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21567c: 0xc440f79c
    ctx->pc = 0x21567cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215680: 0x4600b000
    ctx->pc = 0x215680u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_215684:
    // 0x215684: 0xdfbf0080
    ctx->pc = 0x215684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x215688: 0xdfb70070
    ctx->pc = 0x215688u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21568c: 0xdfb60060
    ctx->pc = 0x21568cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x215690: 0xdfb50050
    ctx->pc = 0x215690u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x215694: 0xdfb40040
    ctx->pc = 0x215694u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x215698: 0xdfb30030
    ctx->pc = 0x215698u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21569c: 0xdfb20020
    ctx->pc = 0x21569cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2156a0: 0xdfb10010
    ctx->pc = 0x2156a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2156a4: 0xdfb00000
    ctx->pc = 0x2156a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2156a8: 0xc7b700a8
    ctx->pc = 0x2156a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2156ac: 0xc7b600a0
    ctx->pc = 0x2156acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2156b0: 0xc7b50098
    ctx->pc = 0x2156b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2156b4: 0xc7b40090
    ctx->pc = 0x2156b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2156b8: 0x3e00008
    ctx->pc = 0x2156B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2156BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x215404u: goto label_215404;
            case 0x215418u: goto label_215418;
            case 0x215428u: goto label_215428;
            case 0x2154A0u: goto label_2154a0;
            case 0x215504u: goto label_215504;
            case 0x215538u: goto label_215538;
            case 0x2155B4u: goto label_2155b4;
            case 0x2155B8u: goto label_2155b8;
            case 0x2155F8u: goto label_2155f8;
            case 0x215608u: goto label_215608;
            case 0x215644u: goto label_215644;
            case 0x215660u: goto label_215660;
            case 0x215684u: goto label_215684;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2156C0u;
}
