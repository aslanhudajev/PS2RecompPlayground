#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitJoyAng
// Address: 0x205400 - 0x2055ec
void InitJoyAng_0x205400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x205400u;

    // 0x205400: 0x27bdff60
    ctx->pc = 0x205400u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x205404: 0xffbf0070
    ctx->pc = 0x205404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x205408: 0xffb60060
    ctx->pc = 0x205408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x20540c: 0xffb50050
    ctx->pc = 0x20540cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x205410: 0xffb40040
    ctx->pc = 0x205410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x205414: 0xffb30030
    ctx->pc = 0x205414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x205418: 0xffb20020
    ctx->pc = 0x205418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20541c: 0xffb10010
    ctx->pc = 0x20541cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x205420: 0xffb00000
    ctx->pc = 0x205420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x205424: 0xe7b70098
    ctx->pc = 0x205424u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x205428: 0xe7b60090
    ctx->pc = 0x205428u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x20542c: 0xe7b50088
    ctx->pc = 0x20542cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x205430: 0xe7b40080
    ctx->pc = 0x205430u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x205434: 0x3c01c040
    ctx->pc = 0x205434u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49216 << 16));
    // 0x205438: 0x4481a800
    ctx->pc = 0x205438u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x20543c: 0x982d
    ctx->pc = 0x20543cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205440: 0x4480b000
    ctx->pc = 0x205440u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 0);
    // 0x205444: 0x3c02003c
    ctx->pc = 0x205444u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x205448: 0x2452bf88
    ctx->pc = 0x205448u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294950792));
    // 0x20544c: 0x2416001c
    ctx->pc = 0x20544cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 28));
    // 0x205450: 0x3c02003c
    ctx->pc = 0x205450u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x205454: 0x2455c050
    ctx->pc = 0x205454u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294950992));
    // 0x205458: 0x3c020031
    ctx->pc = 0x205458u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x20545c: 0x24541a88
    ctx->pc = 0x20545cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 6792));
    // 0x205460: 0x3c013f80
    ctx->pc = 0x205460u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x205464: 0x4481b800
    ctx->pc = 0x205464u;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 1);
label_205468:
    // 0x205468: 0x3c014040
    ctx->pc = 0x205468u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x20546c: 0x4481a000
    ctx->pc = 0x20546cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x205470: 0x882d
    ctx->pc = 0x205470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205474: 0x2768018
    ctx->pc = 0x205474u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_205478:
    // 0x205478: 0x4616a832
    ctx->pc = 0x205478u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20547c: 0x45000009
    ctx->pc = 0x20547Cu;
    {
        const bool branch_taken_0x20547c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20547c) {
            ctx->pc = 0x2054A4u;
            goto label_2054a4;
        }
    }
    ctx->pc = 0x205484u;
    // 0x205484: 0x4616a032
    ctx->pc = 0x205484u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x205488: 0x0
    ctx->pc = 0x205488u;
    // NOP
    // 0x20548c: 0x45000005
    ctx->pc = 0x20548Cu;
    {
        const bool branch_taken_0x20548c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x205490u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x20548c) {
            ctx->pc = 0x2054A4u;
            goto label_2054a4;
        }
    }
    ctx->pc = 0x205494u;
    // 0x205494: 0x501021
    ctx->pc = 0x205494u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x205498: 0x521021
    ctx->pc = 0x205498u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x20549c: 0x10000029
    ctx->pc = 0x20549Cu;
    {
        const bool branch_taken_0x20549c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2054A0u;
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        if (branch_taken_0x20549c) {
            ctx->pc = 0x205544u;
            goto label_205544;
        }
    }
    ctx->pc = 0x2054A4u;
label_2054a4:
    // 0x2054a4: 0x44800000
    ctx->pc = 0x2054a4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2054a8: 0x4600a832
    ctx->pc = 0x2054a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2054ac: 0x0
    ctx->pc = 0x2054acu;
    // NOP
    // 0x2054b0: 0x45000010
    ctx->pc = 0x2054B0u;
    {
        const bool branch_taken_0x2054b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2054B4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x2054b0) {
            ctx->pc = 0x2054F4u;
            goto label_2054f4;
        }
    }
    ctx->pc = 0x2054B8u;
    // 0x2054b8: 0x501021
    ctx->pc = 0x2054b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2054bc: 0x46140034
    ctx->pc = 0x2054bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2054c0: 0x0
    ctx->pc = 0x2054c0u;
    // NOP
    // 0x2054c4: 0x45000006
    ctx->pc = 0x2054C4u;
    {
        const bool branch_taken_0x2054c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2054C8u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        if (branch_taken_0x2054c4) {
            ctx->pc = 0x2054E0u;
            goto label_2054e0;
        }
    }
    ctx->pc = 0x2054CCu;
    // 0x2054cc: 0x3c013fc9
    ctx->pc = 0x2054ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x2054d0: 0x34210fdb
    ctx->pc = 0x2054d0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2054d4: 0x44810000
    ctx->pc = 0x2054d4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2054d8: 0x1000001a
    ctx->pc = 0x2054D8u;
    {
        const bool branch_taken_0x2054d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2054DCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        if (branch_taken_0x2054d8) {
            ctx->pc = 0x205544u;
            goto label_205544;
        }
    }
    ctx->pc = 0x2054E0u;
label_2054e0:
    // 0x2054e0: 0x3c01bfc9
    ctx->pc = 0x2054e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49097 << 16));
    // 0x2054e4: 0x34210fdb
    ctx->pc = 0x2054e4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2054e8: 0x44810000
    ctx->pc = 0x2054e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2054ec: 0x10000015
    ctx->pc = 0x2054ECu;
    {
        const bool branch_taken_0x2054ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2054F0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        if (branch_taken_0x2054ec) {
            ctx->pc = 0x205544u;
            goto label_205544;
        }
    }
    ctx->pc = 0x2054F4u;
label_2054f4:
    // 0x2054f4: 0x4600a032
    ctx->pc = 0x2054f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2054f8: 0x0
    ctx->pc = 0x2054f8u;
    // NOP
    // 0x2054fc: 0x4500000a
    ctx->pc = 0x2054FCu;
    {
        const bool branch_taken_0x2054fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x205500u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        if (branch_taken_0x2054fc) {
            ctx->pc = 0x205528u;
            goto label_205528;
        }
    }
    ctx->pc = 0x205504u;
    // 0x205504: 0x46150034
    ctx->pc = 0x205504u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x205508: 0x0
    ctx->pc = 0x205508u;
    // NOP
    // 0x20550c: 0x4501000c
    ctx->pc = 0x20550Cu;
    {
        const bool branch_taken_0x20550c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x205510u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        if (branch_taken_0x20550c) {
            ctx->pc = 0x205540u;
            goto label_205540;
        }
    }
    ctx->pc = 0x205514u;
    // 0x205514: 0x3c014049
    ctx->pc = 0x205514u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x205518: 0x34210fdb
    ctx->pc = 0x205518u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x20551c: 0x44810000
    ctx->pc = 0x20551cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x205520: 0x10000008
    ctx->pc = 0x205520u;
    {
        const bool branch_taken_0x205520 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x205524u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        if (branch_taken_0x205520) {
            ctx->pc = 0x205544u;
            goto label_205544;
        }
    }
    ctx->pc = 0x205528u;
label_205528:
    // 0x205528: 0x4600a306
    ctx->pc = 0x205528u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x20552c: 0xc0ba04a
    ctx->pc = 0x20552Cu;
    SET_GPR_U32(ctx, 31, 0x205534u);
    ctx->pc = 0x205530u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205534u; }
    }
    if (ctx->pc != 0x205534u) { return; }
    ctx->pc = 0x205534u;
    // 0x205534: 0x111080
    ctx->pc = 0x205534u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x205538: 0x501021
    ctx->pc = 0x205538u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20553c: 0x521021
    ctx->pc = 0x20553cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_205540:
    // 0x205540: 0xe4400000
    ctx->pc = 0x205540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_205544:
    // 0x205544: 0x4615a842
    ctx->pc = 0x205544u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x205548: 0x4614a002
    ctx->pc = 0x205548u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x20554c: 0x46000b00
    ctx->pc = 0x20554cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x205550: 0x0
    ctx->pc = 0x205550u;
    // NOP
    // 0x205554: 0x0
    ctx->pc = 0x205554u;
    // NOP
    // 0x205558: 0x460c0004
    ctx->pc = 0x205558u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x20555c: 0x46000032
    ctx->pc = 0x20555cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x205560: 0x45010003
    ctx->pc = 0x205560u;
    {
        const bool branch_taken_0x205560 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x205560) {
            ctx->pc = 0x205570u;
            goto label_205570;
        }
    }
    ctx->pc = 0x205568u;
    // 0x205568: 0xc0ba284
    ctx->pc = 0x205568u;
    SET_GPR_U32(ctx, 31, 0x205570u);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205570u; }
    }
    if (ctx->pc != 0x205570u) { return; }
    ctx->pc = 0x205570u;
label_205570:
    // 0x205570: 0x46000064
    ctx->pc = 0x205570u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x205574: 0x44020800
    ctx->pc = 0x205574u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x205578: 0x111880
    ctx->pc = 0x205578u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x20557c: 0x701821
    ctx->pc = 0x20557cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x205580: 0x751821
    ctx->pc = 0x205580u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x205584: 0x21080
    ctx->pc = 0x205584u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x205588: 0x541021
    ctx->pc = 0x205588u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x20558c: 0xc4400000
    ctx->pc = 0x20558cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x205590: 0xe4600000
    ctx->pc = 0x205590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x205594: 0x26310001
    ctx->pc = 0x205594u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x205598: 0x2a220007
    ctx->pc = 0x205598u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 7));
    // 0x20559c: 0x1440ffb6
    ctx->pc = 0x20559Cu;
    {
        const bool branch_taken_0x20559c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2055A0u;
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[23]);
        if (branch_taken_0x20559c) {
            ctx->pc = 0x205478u;
            goto label_205478;
        }
    }
    ctx->pc = 0x2055A4u;
    // 0x2055a4: 0x26730001
    ctx->pc = 0x2055a4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x2055a8: 0x2a620007
    ctx->pc = 0x2055a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 7));
    // 0x2055ac: 0x1440ffae
    ctx->pc = 0x2055ACu;
    {
        const bool branch_taken_0x2055ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2055B0u;
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
        if (branch_taken_0x2055ac) {
            ctx->pc = 0x205468u;
            goto label_205468;
        }
    }
    ctx->pc = 0x2055B4u;
    // 0x2055b4: 0xdfbf0070
    ctx->pc = 0x2055b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2055b8: 0xdfb60060
    ctx->pc = 0x2055b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2055bc: 0xdfb50050
    ctx->pc = 0x2055bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2055c0: 0xdfb40040
    ctx->pc = 0x2055c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2055c4: 0xdfb30030
    ctx->pc = 0x2055c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2055c8: 0xdfb20020
    ctx->pc = 0x2055c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2055cc: 0xdfb10010
    ctx->pc = 0x2055ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2055d0: 0xdfb00000
    ctx->pc = 0x2055d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2055d4: 0xc7b70098
    ctx->pc = 0x2055d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2055d8: 0xc7b60090
    ctx->pc = 0x2055d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2055dc: 0xc7b50088
    ctx->pc = 0x2055dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2055e0: 0xc7b40080
    ctx->pc = 0x2055e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2055e4: 0x3e00008
    ctx->pc = 0x2055E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2055E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x205468u: goto label_205468;
            case 0x205478u: goto label_205478;
            case 0x2054A4u: goto label_2054a4;
            case 0x2054E0u: goto label_2054e0;
            case 0x2054F4u: goto label_2054f4;
            case 0x205528u: goto label_205528;
            case 0x205540u: goto label_205540;
            case 0x205544u: goto label_205544;
            case 0x205570u: goto label_205570;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2055ECu;
}
