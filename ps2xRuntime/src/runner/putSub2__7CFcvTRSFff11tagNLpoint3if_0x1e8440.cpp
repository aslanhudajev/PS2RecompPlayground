#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putSub2__7CFcvTRSFff11tagNLpoint3if
// Address: 0x1e8440 - 0x1e8b74
void putSub2__7CFcvTRSFff11tagNLpoint3if_0x1e8440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putSub2__7CFcvTRSFff11tagNLpoint3if");


    ctx->pc = 0x1e8440u;

    // 0x1e8440: 0x27bdff80
    ctx->pc = 0x1e8440u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1e8444: 0x7fbf0050
    ctx->pc = 0x1e8444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1e8448: 0x7fb30040
    ctx->pc = 0x1e8448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1e844c: 0x7fb20030
    ctx->pc = 0x1e844cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e8450: 0x7fb10020
    ctx->pc = 0x1e8450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e8454: 0x7fb00010
    ctx->pc = 0x1e8454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e8458: 0xe7b7000c
    ctx->pc = 0x1e8458u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e845c: 0xe7b60008
    ctx->pc = 0x1e845cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e8460: 0xe7b50004
    ctx->pc = 0x1e8460u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e8464: 0xe7b40000
    ctx->pc = 0x1e8464u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e8468: 0xc4a20000
    ctx->pc = 0x1e8468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e846c: 0xc4a10004
    ctx->pc = 0x1e846cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8470: 0xc4a00008
    ctx->pc = 0x1e8470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8474: 0x27a30060
    ctx->pc = 0x1e8474u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e8478: 0x46006586
    ctx->pc = 0x1e8478u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x1e847c: 0x46006d46
    ctx->pc = 0x1e847cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x1e8480: 0x70c08e28
    ctx->pc = 0x1e8480u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e8484: 0x46007506
    ctx->pc = 0x1e8484u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    // 0x1e8488: 0xe4620000
    ctx->pc = 0x1e8488u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1e848c: 0xe4610004
    ctx->pc = 0x1e848cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1e8490: 0xe4600008
    ctx->pc = 0x1e8490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1e8494: 0x84830000
    ctx->pc = 0x1e8494u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e8498: 0x14600007
    ctx->pc = 0x1E8498u;
    {
        const bool branch_taken_0x1e8498 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E849Cu;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e8498) {
            ctx->pc = 0x1E84B8u;
            goto label_1e84b8;
        }
    }
    ctx->pc = 0x1E84A0u;
    // 0x1e84a0: 0x86430002
    ctx->pc = 0x1e84a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1e84a4: 0x14600005
    ctx->pc = 0x1E84A4u;
    {
        const bool branch_taken_0x1e84a4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E84A8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 32));
        if (branch_taken_0x1e84a4) {
            ctx->pc = 0x1E84BCu;
            goto label_1e84bc;
        }
    }
    ctx->pc = 0x1E84ACu;
    // 0x1e84ac: 0x86430004
    ctx->pc = 0x1e84acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1e84b0: 0x10600017
    ctx->pc = 0x1E84B0u;
    {
        const bool branch_taken_0x1e84b0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e84b0) {
            ctx->pc = 0x1E8510u;
            goto label_1e8510;
        }
    }
    ctx->pc = 0x1E84B8u;
label_1e84b8:
    // 0x1e84b8: 0x26440020
    ctx->pc = 0x1e84b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 32));
label_1e84bc:
    // 0x1e84bc: 0x4600b306
    ctx->pc = 0x1e84bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1e84c0: 0xc079bd4
    ctx->pc = 0x1E84C0u;
    SET_GPR_U32(ctx, 31, 0x1E84C8u);
    ctx->pc = 0x1E84C4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x1E6F50u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcFrm__7CFcurveFfP11tagNLpoint3_0x1e6f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E84C8u; }
        else if (ctx->pc != 0x1E84C8u) { ctx->pc = 0x1E84C8u; }
    }
    if (ctx->pc != 0x1E84C8u) { return; }
    ctx->pc = 0x1E84C8u;
    // 0x1e84c8: 0x8e4200ec
    ctx->pc = 0x1e84c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 236)));
    // 0x1e84cc: 0x30420001
    ctx->pc = 0x1e84ccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x1e84d0: 0x1040000b
    ctx->pc = 0x1E84D0u;
    {
        const bool branch_taken_0x1e84d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e84d0) {
            ctx->pc = 0x1E8500u;
            goto label_1e8500;
        }
    }
    ctx->pc = 0x1E84D8u;
    // 0x1e84d8: 0xc64300c8
    ctx->pc = 0x1e84d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e84dc: 0xc7a20070
    ctx->pc = 0x1e84dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e84e0: 0xc7a10074
    ctx->pc = 0x1e84e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e84e4: 0xc7a00078
    ctx->pc = 0x1e84e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e84e8: 0x46031302
    ctx->pc = 0x1e84e8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1e84ec: 0x46030b42
    ctx->pc = 0x1e84ecu;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1e84f0: 0xc06c202
    ctx->pc = 0x1E84F0u;
    SET_GPR_U32(ctx, 31, 0x1E84F8u);
    ctx->pc = 0x1E84F4u;
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E84F8u; }
        else if (ctx->pc != 0x1E84F8u) { ctx->pc = 0x1E84F8u; }
    }
    if (ctx->pc != 0x1E84F8u) { return; }
    ctx->pc = 0x1E84F8u;
    // 0x1e84f8: 0x10000006
    ctx->pc = 0x1E84F8u;
    {
        const bool branch_taken_0x1e84f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E84FCu;
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
        if (branch_taken_0x1e84f8) {
            ctx->pc = 0x1E8514u;
            goto label_1e8514;
        }
    }
    ctx->pc = 0x1E8500u;
label_1e8500:
    // 0x1e8500: 0xc7ad0074
    ctx->pc = 0x1e8500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e8504: 0xc7ae0078
    ctx->pc = 0x1e8504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1e8508: 0xc06c202
    ctx->pc = 0x1E8508u;
    SET_GPR_U32(ctx, 31, 0x1E8510u);
    ctx->pc = 0x1E850Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8510u; }
        else if (ctx->pc != 0x1E8510u) { ctx->pc = 0x1E8510u; }
    }
    if (ctx->pc != 0x1E8510u) { return; }
    ctx->pc = 0x1E8510u;
label_1e8510:
    // 0x1e8510: 0x86430006
    ctx->pc = 0x1e8510u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_1e8514:
    // 0x1e8514: 0x14600008
    ctx->pc = 0x1E8514u;
    {
        const bool branch_taken_0x1e8514 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E8518u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 60));
        if (branch_taken_0x1e8514) {
            ctx->pc = 0x1E8538u;
            goto label_1e8538;
        }
    }
    ctx->pc = 0x1E851Cu;
    // 0x1e851c: 0x86430008
    ctx->pc = 0x1e851cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e8520: 0x14600004
    ctx->pc = 0x1E8520u;
    {
        const bool branch_taken_0x1e8520 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e8520) {
            ctx->pc = 0x1E8534u;
            goto label_1e8534;
        }
    }
    ctx->pc = 0x1E8528u;
    // 0x1e8528: 0x8643000a
    ctx->pc = 0x1e8528u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x1e852c: 0x10600035
    ctx->pc = 0x1E852Cu;
    {
        const bool branch_taken_0x1e852c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e852c) {
            ctx->pc = 0x1E8604u;
            goto label_1e8604;
        }
    }
    ctx->pc = 0x1E8534u;
label_1e8534:
    // 0x1e8534: 0x2644003c
    ctx->pc = 0x1e8534u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 60));
label_1e8538:
    // 0x1e8538: 0x4600b306
    ctx->pc = 0x1e8538u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1e853c: 0xc079bd4
    ctx->pc = 0x1E853Cu;
    SET_GPR_U32(ctx, 31, 0x1E8544u);
    ctx->pc = 0x1E8540u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x1E6F50u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcFrm__7CFcurveFfP11tagNLpoint3_0x1e6f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8544u; }
        else if (ctx->pc != 0x1E8544u) { ctx->pc = 0x1E8544u; }
    }
    if (ctx->pc != 0x1E8544u) { return; }
    ctx->pc = 0x1E8544u;
    // 0x1e8544: 0x8643000a
    ctx->pc = 0x1e8544u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x1e8548: 0x1060000e
    ctx->pc = 0x1E8548u;
    {
        const bool branch_taken_0x1e8548 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8548) {
            ctx->pc = 0x1E8584u;
            goto label_1e8584;
        }
    }
    ctx->pc = 0x1E8550u;
    // 0x1e8550: 0x3c023f00
    ctx->pc = 0x1e8550u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x1e8554: 0x44821000
    ctx->pc = 0x1e8554u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x1e8558: 0xc7a00078
    ctx->pc = 0x1e8558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e855c: 0x3c024336
    ctx->pc = 0x1e855cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17206 << 16));
    // 0x1e8560: 0x34420b61
    ctx->pc = 0x1e8560u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2913));
    // 0x1e8564: 0x44820800
    ctx->pc = 0x1e8564u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1e8568: 0x0
    ctx->pc = 0x1e8568u;
    // NOP
    // 0x1e856c: 0x46000802
    ctx->pc = 0x1e856cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e8570: 0x46001000
    ctx->pc = 0x1e8570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1e8574: 0x46000024
    ctx->pc = 0x1e8574u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1e8578: 0x44020000
    ctx->pc = 0x1e8578u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1e857c: 0xc06c157
    ctx->pc = 0x1E857Cu;
    SET_GPR_U32(ctx, 31, 0x1E8584u);
    ctx->pc = 0x1E8580u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 65535));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8584u; }
        else if (ctx->pc != 0x1E8584u) { ctx->pc = 0x1E8584u; }
    }
    if (ctx->pc != 0x1E8584u) { return; }
    ctx->pc = 0x1E8584u;
label_1e8584:
    // 0x1e8584: 0x86430008
    ctx->pc = 0x1e8584u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e8588: 0x1060000e
    ctx->pc = 0x1E8588u;
    {
        const bool branch_taken_0x1e8588 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8588) {
            ctx->pc = 0x1E85C4u;
            goto label_1e85c4;
        }
    }
    ctx->pc = 0x1E8590u;
    // 0x1e8590: 0x3c023f00
    ctx->pc = 0x1e8590u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x1e8594: 0x44821000
    ctx->pc = 0x1e8594u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x1e8598: 0xc7a00074
    ctx->pc = 0x1e8598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e859c: 0x3c024336
    ctx->pc = 0x1e859cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17206 << 16));
    // 0x1e85a0: 0x34420b61
    ctx->pc = 0x1e85a0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2913));
    // 0x1e85a4: 0x44820800
    ctx->pc = 0x1e85a4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1e85a8: 0x0
    ctx->pc = 0x1e85a8u;
    // NOP
    // 0x1e85ac: 0x46000802
    ctx->pc = 0x1e85acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e85b0: 0x46001000
    ctx->pc = 0x1e85b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1e85b4: 0x46000024
    ctx->pc = 0x1e85b4u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1e85b8: 0x44020000
    ctx->pc = 0x1e85b8u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1e85bc: 0xc06c0fb
    ctx->pc = 0x1E85BCu;
    SET_GPR_U32(ctx, 31, 0x1E85C4u);
    ctx->pc = 0x1E85C0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 65535));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E85C4u; }
        else if (ctx->pc != 0x1E85C4u) { ctx->pc = 0x1E85C4u; }
    }
    if (ctx->pc != 0x1E85C4u) { return; }
    ctx->pc = 0x1E85C4u;
label_1e85c4:
    // 0x1e85c4: 0x86430006
    ctx->pc = 0x1e85c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x1e85c8: 0x1060000e
    ctx->pc = 0x1E85C8u;
    {
        const bool branch_taken_0x1e85c8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e85c8) {
            ctx->pc = 0x1E8604u;
            goto label_1e8604;
        }
    }
    ctx->pc = 0x1E85D0u;
    // 0x1e85d0: 0x3c023f00
    ctx->pc = 0x1e85d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x1e85d4: 0x44821000
    ctx->pc = 0x1e85d4u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x1e85d8: 0xc7a00070
    ctx->pc = 0x1e85d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e85dc: 0x3c024336
    ctx->pc = 0x1e85dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17206 << 16));
    // 0x1e85e0: 0x34420b61
    ctx->pc = 0x1e85e0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2913));
    // 0x1e85e4: 0x44820800
    ctx->pc = 0x1e85e4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1e85e8: 0x0
    ctx->pc = 0x1e85e8u;
    // NOP
    // 0x1e85ec: 0x46000802
    ctx->pc = 0x1e85ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e85f0: 0x46001000
    ctx->pc = 0x1e85f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1e85f4: 0x46000024
    ctx->pc = 0x1e85f4u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1e85f8: 0x44020000
    ctx->pc = 0x1e85f8u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1e85fc: 0xc06c09f
    ctx->pc = 0x1E85FCu;
    SET_GPR_U32(ctx, 31, 0x1E8604u);
    ctx->pc = 0x1E8600u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 65535));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8604u; }
        else if (ctx->pc != 0x1E8604u) { ctx->pc = 0x1E8604u; }
    }
    if (ctx->pc != 0x1E8604u) { return; }
    ctx->pc = 0x1E8604u;
label_1e8604:
    // 0x1e8604: 0x8643000c
    ctx->pc = 0x1e8604u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1e8608: 0x14600008
    ctx->pc = 0x1E8608u;
    {
        const bool branch_taken_0x1e8608 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E860Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 88));
        if (branch_taken_0x1e8608) {
            ctx->pc = 0x1E862Cu;
            goto label_1e862c;
        }
    }
    ctx->pc = 0x1E8610u;
    // 0x1e8610: 0x8643000e
    ctx->pc = 0x1e8610u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x1e8614: 0x14600004
    ctx->pc = 0x1E8614u;
    {
        const bool branch_taken_0x1e8614 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e8614) {
            ctx->pc = 0x1E8628u;
            goto label_1e8628;
        }
    }
    ctx->pc = 0x1E861Cu;
    // 0x1e861c: 0x86430010
    ctx->pc = 0x1e861cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1e8620: 0x1060004b
    ctx->pc = 0x1E8620u;
    {
        const bool branch_taken_0x1e8620 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8620) {
            ctx->pc = 0x1E8750u;
            goto label_1e8750;
        }
    }
    ctx->pc = 0x1E8628u;
label_1e8628:
    // 0x1e8628: 0x26440058
    ctx->pc = 0x1e8628u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 88));
label_1e862c:
    // 0x1e862c: 0x4600b306
    ctx->pc = 0x1e862cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1e8630: 0xc079bd4
    ctx->pc = 0x1E8630u;
    SET_GPR_U32(ctx, 31, 0x1E8638u);
    ctx->pc = 0x1E8634u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x1E6F50u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcFrm__7CFcurveFfP11tagNLpoint3_0x1e6f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8638u; }
        else if (ctx->pc != 0x1E8638u) { ctx->pc = 0x1E8638u; }
    }
    if (ctx->pc != 0x1E8638u) { return; }
    ctx->pc = 0x1E8638u;
    // 0x1e8638: 0x8642000c
    ctx->pc = 0x1e8638u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1e863c: 0x14400002
    ctx->pc = 0x1E863Cu;
    {
        const bool branch_taken_0x1e863c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E8640u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x1e863c) {
            ctx->pc = 0x1E8648u;
            goto label_1e8648;
        }
    }
    ctx->pc = 0x1E8644u;
    // 0x1e8644: 0xafa20070
    ctx->pc = 0x1e8644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_1e8648:
    // 0x1e8648: 0x8642000e
    ctx->pc = 0x1e8648u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x1e864c: 0x14400002
    ctx->pc = 0x1E864Cu;
    {
        const bool branch_taken_0x1e864c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E8650u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x1e864c) {
            ctx->pc = 0x1E8658u;
            goto label_1e8658;
        }
    }
    ctx->pc = 0x1E8654u;
    // 0x1e8654: 0xafa20074
    ctx->pc = 0x1e8654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_1e8658:
    // 0x1e8658: 0x86420010
    ctx->pc = 0x1e8658u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1e865c: 0x14400002
    ctx->pc = 0x1E865Cu;
    {
        const bool branch_taken_0x1e865c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E8660u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x1e865c) {
            ctx->pc = 0x1E8668u;
            goto label_1e8668;
        }
    }
    ctx->pc = 0x1E8664u;
    // 0x1e8664: 0xafa20078
    ctx->pc = 0x1e8664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_1e8668:
    // 0x1e8668: 0x8e4200ec
    ctx->pc = 0x1e8668u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 236)));
    // 0x1e866c: 0x30420004
    ctx->pc = 0x1e866cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x1e8670: 0x10400024
    ctx->pc = 0x1E8670u;
    {
        const bool branch_taken_0x1e8670 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8670) {
            ctx->pc = 0x1E8704u;
            goto label_1e8704;
        }
    }
    ctx->pc = 0x1E8678u;
    // 0x1e8678: 0xc64400d8
    ctx->pc = 0x1e8678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e867c: 0xc7a00070
    ctx->pc = 0x1e867cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8680: 0x27b00074
    ctx->pc = 0x1e8680u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 116));
    // 0x1e8684: 0x27b30078
    ctx->pc = 0x1e8684u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 120));
    // 0x1e8688: 0xc64300dc
    ctx->pc = 0x1e8688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e868c: 0xc6020000
    ctx->pc = 0x1e868cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e8690: 0xc64100e0
    ctx->pc = 0x1e8690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8694: 0x46002302
    ctx->pc = 0x1e8694u;
    ctx->f[12] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1e8698: 0xc6600000
    ctx->pc = 0x1e8698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e869c: 0x46021b42
    ctx->pc = 0x1e869cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1e86a0: 0xc06c1b3
    ctx->pc = 0x1E86A0u;
    SET_GPR_U32(ctx, 31, 0x1E86A8u);
    ctx->pc = 0x1E86A4u;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E86A8u; }
        else if (ctx->pc != 0x1E86A8u) { ctx->pc = 0x1E86A8u; }
    }
    if (ctx->pc != 0x1E86A8u) { return; }
    ctx->pc = 0x1E86A8u;
    // 0x1e86a8: 0xc6000000
    ctx->pc = 0x1e86a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e86ac: 0xc64100dc
    ctx->pc = 0x1e86acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e86b0: 0xc64300d8
    ctx->pc = 0x1e86b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e86b4: 0xc7a20070
    ctx->pc = 0x1e86b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e86b8: 0x46000802
    ctx->pc = 0x1e86b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e86bc: 0x46021b02
    ctx->pc = 0x1e86bcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1e86c0: 0x46006036
    ctx->pc = 0x1e86c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e86c4: 0x0
    ctx->pc = 0x1e86c4u;
    // NOP
    // 0x1e86c8: 0x45010002
    ctx->pc = 0x1E86C8u;
    {
        const bool branch_taken_0x1e86c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e86c8) {
            ctx->pc = 0x1E86D4u;
            goto label_1e86d4;
        }
    }
    ctx->pc = 0x1E86D0u;
    // 0x1e86d0: 0x46000306
    ctx->pc = 0x1e86d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1e86d4:
    // 0x1e86d4: 0xc6600000
    ctx->pc = 0x1e86d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e86d8: 0xc64100e0
    ctx->pc = 0x1e86d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e86dc: 0x46000802
    ctx->pc = 0x1e86dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e86e0: 0x46006036
    ctx->pc = 0x1e86e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e86e4: 0x0
    ctx->pc = 0x1e86e4u;
    // NOP
    // 0x1e86e8: 0x45010002
    ctx->pc = 0x1E86E8u;
    {
        const bool branch_taken_0x1e86e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e86e8) {
            ctx->pc = 0x1E86F4u;
            goto label_1e86f4;
        }
    }
    ctx->pc = 0x1E86F0u;
    // 0x1e86f0: 0x46000306
    ctx->pc = 0x1e86f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1e86f4:
    // 0x1e86f4: 0xc06b218
    ctx->pc = 0x1E86F4u;
    SET_GPR_U32(ctx, 31, 0x1E86FCu);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E86FCu; }
        else if (ctx->pc != 0x1E86FCu) { ctx->pc = 0x1E86FCu; }
    }
    if (ctx->pc != 0x1E86FCu) { return; }
    ctx->pc = 0x1E86FCu;
    // 0x1e86fc: 0x1000002c
    ctx->pc = 0x1E86FCu;
    {
        const bool branch_taken_0x1e86fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E8700u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 236)));
        if (branch_taken_0x1e86fc) {
            ctx->pc = 0x1E87B0u;
            goto label_1e87b0;
        }
    }
    ctx->pc = 0x1E8704u;
label_1e8704:
    // 0x1e8704: 0xc7ac0070
    ctx->pc = 0x1e8704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e8708: 0xc7ad0074
    ctx->pc = 0x1e8708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e870c: 0x460c6836
    ctx->pc = 0x1e870cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8710: 0x0
    ctx->pc = 0x1e8710u;
    // NOP
    // 0x1e8714: 0x45010002
    ctx->pc = 0x1E8714u;
    {
        const bool branch_taken_0x1e8714 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8718u;
        ctx->f[23] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x1e8714) {
            ctx->pc = 0x1E8720u;
            goto label_1e8720;
        }
    }
    ctx->pc = 0x1E871Cu;
    // 0x1e871c: 0x46006dc6
    ctx->pc = 0x1e871cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
label_1e8720:
    // 0x1e8720: 0xc7ae0078
    ctx->pc = 0x1e8720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1e8724: 0x46177036
    ctx->pc = 0x1e8724u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8728: 0x0
    ctx->pc = 0x1e8728u;
    // NOP
    // 0x1e872c: 0x45010002
    ctx->pc = 0x1E872Cu;
    {
        const bool branch_taken_0x1e872c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e872c) {
            ctx->pc = 0x1E8738u;
            goto label_1e8738;
        }
    }
    ctx->pc = 0x1E8734u;
    // 0x1e8734: 0x460075c6
    ctx->pc = 0x1e8734u;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
label_1e8738:
    // 0x1e8738: 0xc06c1b3
    ctx->pc = 0x1E8738u;
    SET_GPR_U32(ctx, 31, 0x1E8740u);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8740u; }
        else if (ctx->pc != 0x1E8740u) { ctx->pc = 0x1E8740u; }
    }
    if (ctx->pc != 0x1E8740u) { return; }
    ctx->pc = 0x1E8740u;
    // 0x1e8740: 0xc06b218
    ctx->pc = 0x1E8740u;
    SET_GPR_U32(ctx, 31, 0x1E8748u);
    ctx->pc = 0x1E8744u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8748u; }
        else if (ctx->pc != 0x1E8748u) { ctx->pc = 0x1E8748u; }
    }
    if (ctx->pc != 0x1E8748u) { return; }
    ctx->pc = 0x1E8748u;
    // 0x1e8748: 0x10000018
    ctx->pc = 0x1E8748u;
    {
        const bool branch_taken_0x1e8748 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8748) {
            ctx->pc = 0x1E87ACu;
            goto label_1e87ac;
        }
    }
    ctx->pc = 0x1E8750u;
label_1e8750:
    // 0x1e8750: 0x8e4300ec
    ctx->pc = 0x1e8750u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 236)));
    // 0x1e8754: 0x30630004
    ctx->pc = 0x1e8754u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 4));
    // 0x1e8758: 0x10600014
    ctx->pc = 0x1E8758u;
    {
        const bool branch_taken_0x1e8758 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8758) {
            ctx->pc = 0x1E87ACu;
            goto label_1e87ac;
        }
    }
    ctx->pc = 0x1E8760u;
    // 0x1e8760: 0xc64d00dc
    ctx->pc = 0x1e8760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e8764: 0xc64e00e0
    ctx->pc = 0x1e8764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1e8768: 0xc06c1b3
    ctx->pc = 0x1E8768u;
    SET_GPR_U32(ctx, 31, 0x1E8770u);
    ctx->pc = 0x1E876Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8770u; }
        else if (ctx->pc != 0x1E8770u) { ctx->pc = 0x1E8770u; }
    }
    if (ctx->pc != 0x1E8770u) { return; }
    ctx->pc = 0x1E8770u;
    // 0x1e8770: 0xc64c00d8
    ctx->pc = 0x1e8770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e8774: 0xc64000dc
    ctx->pc = 0x1e8774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8778: 0x46006036
    ctx->pc = 0x1e8778u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e877c: 0x0
    ctx->pc = 0x1e877cu;
    // NOP
    // 0x1e8780: 0x45010002
    ctx->pc = 0x1E8780u;
    {
        const bool branch_taken_0x1e8780 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8780) {
            ctx->pc = 0x1E878Cu;
            goto label_1e878c;
        }
    }
    ctx->pc = 0x1E8788u;
    // 0x1e8788: 0x46000306
    ctx->pc = 0x1e8788u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1e878c:
    // 0x1e878c: 0xc64000e0
    ctx->pc = 0x1e878cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8790: 0x46006036
    ctx->pc = 0x1e8790u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8794: 0x0
    ctx->pc = 0x1e8794u;
    // NOP
    // 0x1e8798: 0x45010002
    ctx->pc = 0x1E8798u;
    {
        const bool branch_taken_0x1e8798 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8798) {
            ctx->pc = 0x1E87A4u;
            goto label_1e87a4;
        }
    }
    ctx->pc = 0x1E87A0u;
    // 0x1e87a0: 0x46000306
    ctx->pc = 0x1e87a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1e87a4:
    // 0x1e87a4: 0xc06b218
    ctx->pc = 0x1E87A4u;
    SET_GPR_U32(ctx, 31, 0x1E87ACu);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E87ACu; }
        else if (ctx->pc != 0x1E87ACu) { ctx->pc = 0x1E87ACu; }
    }
    if (ctx->pc != 0x1E87ACu) { return; }
    ctx->pc = 0x1E87ACu;
label_1e87ac:
    // 0x1e87ac: 0x8e4300ec
    ctx->pc = 0x1e87acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 236)));
label_1e87b0:
    // 0x1e87b0: 0x30630008
    ctx->pc = 0x1e87b0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 8));
    // 0x1e87b4: 0x10600010
    ctx->pc = 0x1E87B4u;
    {
        const bool branch_taken_0x1e87b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e87b4) {
            ctx->pc = 0x1E87F8u;
            goto label_1e87f8;
        }
    }
    ctx->pc = 0x1E87BCu;
    // 0x1e87bc: 0x3c020050
    ctx->pc = 0x1e87bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e87c0: 0xc07ce18
    ctx->pc = 0x1E87C0u;
    SET_GPR_U32(ctx, 31, 0x1E87C8u);
    ctx->pc = 0x1E87C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E87C8u; }
        else if (ctx->pc != 0x1E87C8u) { ctx->pc = 0x1E87C8u; }
    }
    if (ctx->pc != 0x1E87C8u) { return; }
    ctx->pc = 0x1E87C8u;
    // 0x1e87c8: 0x1c400004
    ctx->pc = 0x1E87C8u;
    {
        const bool branch_taken_0x1e87c8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1e87c8) {
            ctx->pc = 0x1E87DCu;
            goto label_1e87dc;
        }
    }
    ctx->pc = 0x1E87D0u;
    // 0x1e87d0: 0x8e4300ac
    ctx->pc = 0x1e87d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x1e87d4: 0x24630001
    ctx->pc = 0x1e87d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e87d8: 0xae4300ac
    ctx->pc = 0x1e87d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 3));
label_1e87dc:
    // 0x1e87dc: 0x8e4400ac
    ctx->pc = 0x1e87dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x1e87e0: 0x8e4300e8
    ctx->pc = 0x1e87e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 232)));
    // 0x1e87e4: 0x64082a
    ctx->pc = 0x1e87e4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x1e87e8: 0x10200003
    ctx->pc = 0x1E87E8u;
    {
        const bool branch_taken_0x1e87e8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e87e8) {
            ctx->pc = 0x1E87F8u;
            goto label_1e87f8;
        }
    }
    ctx->pc = 0x1E87F0u;
    // 0x1e87f0: 0x8e4300e4
    ctx->pc = 0x1e87f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 228)));
    // 0x1e87f4: 0xae4300ac
    ctx->pc = 0x1e87f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 3));
label_1e87f8:
    // 0x1e87f8: 0x8e5000ac
    ctx->pc = 0x1e87f8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x1e87fc: 0x120000d2
    ctx->pc = 0x1E87FCu;
    {
        const bool branch_taken_0x1e87fc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e87fc) {
            ctx->pc = 0x1E8B48u;
            goto label_1e8b48;
        }
    }
    ctx->pc = 0x1E8804u;
    // 0x1e8804: 0xc7ad0064
    ctx->pc = 0x1e8804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e8808: 0xc7ae0068
    ctx->pc = 0x1e8808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1e880c: 0xc06c202
    ctx->pc = 0x1E880Cu;
    SET_GPR_U32(ctx, 31, 0x1E8814u);
    ctx->pc = 0x1E8810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8814u; }
        else if (ctx->pc != 0x1E8814u) { ctx->pc = 0x1E8814u; }
    }
    if (ctx->pc != 0x1E8814u) { return; }
    ctx->pc = 0x1E8814u;
    // 0x1e8814: 0x4600a306
    ctx->pc = 0x1e8814u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e8818: 0x4600a346
    ctx->pc = 0x1e8818u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1e881c: 0xc06c1b3
    ctx->pc = 0x1E881Cu;
    SET_GPR_U32(ctx, 31, 0x1E8824u);
    ctx->pc = 0x1E8820u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8824u; }
        else if (ctx->pc != 0x1E8824u) { ctx->pc = 0x1E8824u; }
    }
    if (ctx->pc != 0x1E8824u) { return; }
    ctx->pc = 0x1E8824u;
    // 0x1e8824: 0xc06b218
    ctx->pc = 0x1E8824u;
    SET_GPR_U32(ctx, 31, 0x1E882Cu);
    ctx->pc = 0x1E8828u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E882Cu; }
        else if (ctx->pc != 0x1E882Cu) { ctx->pc = 0x1E882Cu; }
    }
    if (ctx->pc != 0x1E882Cu) { return; }
    ctx->pc = 0x1E882Cu;
    // 0x1e882c: 0xc06c0fb
    ctx->pc = 0x1E882Cu;
    SET_GPR_U32(ctx, 31, 0x1E8834u);
    ctx->pc = 0x1E8830u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 17), 8));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8834u; }
        else if (ctx->pc != 0x1E8834u) { ctx->pc = 0x1E8834u; }
    }
    if (ctx->pc != 0x1E8834u) { return; }
    ctx->pc = 0x1E8834u;
    // 0x1e8834: 0x8e4400ec
    ctx->pc = 0x1e8834u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 236)));
    // 0x1e8838: 0x30830002
    ctx->pc = 0x1e8838u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 2));
    // 0x1e883c: 0x5060003e
    ctx->pc = 0x1E883Cu;
    {
        const bool branch_taken_0x1e883c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e883c) {
            ctx->pc = 0x1E8840u;
            SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
            ctx->pc = 0x1E8938u;
            goto label_1e8938;
        }
    }
    ctx->pc = 0x1E8844u;
    // 0x1e8844: 0xc64000d4
    ctx->pc = 0x1e8844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8848: 0x4600b034
    ctx->pc = 0x1e8848u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e884c: 0x0
    ctx->pc = 0x1e884cu;
    // NOP
    // 0x1e8850: 0x4503001b
    ctx->pc = 0x1E8850u;
    {
        const bool branch_taken_0x1e8850 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8850) {
            ctx->pc = 0x1E8854u;
            SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
            ctx->pc = 0x1E88C0u;
            goto label_1e88c0;
        }
    }
    ctx->pc = 0x1E8858u;
    // 0x1e8858: 0xc64c00d0
    ctx->pc = 0x1e8858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e885c: 0x44800000
    ctx->pc = 0x1e885cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1e8860: 0x0
    ctx->pc = 0x1e8860u;
    // NOP
    // 0x1e8864: 0x46006036
    ctx->pc = 0x1e8864u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8868: 0x0
    ctx->pc = 0x1e8868u;
    // NOP
    // 0x1e886c: 0x4501000c
    ctx->pc = 0x1E886Cu;
    {
        const bool branch_taken_0x1e886c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e886c) {
            ctx->pc = 0x1E88A0u;
            goto label_1e88a0;
        }
    }
    ctx->pc = 0x1E8874u;
    // 0x1e8874: 0x30820040
    ctx->pc = 0x1e8874u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
    // 0x1e8878: 0x10400007
    ctx->pc = 0x1E8878u;
    {
        const bool branch_taken_0x1e8878 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E887Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e8878) {
            ctx->pc = 0x1E8898u;
            goto label_1e8898;
        }
    }
    ctx->pc = 0x1E8880u;
    // 0x1e8880: 0xc08541c
    ctx->pc = 0x1E8880u;
    SET_GPR_U32(ctx, 31, 0x1E8888u);
    ctx->pc = 0x1E8884u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x215070u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetAlphaPoly__Fif_0x215070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8888u; }
        else if (ctx->pc != 0x1E8888u) { ctx->pc = 0x1E8888u; }
    }
    if (ctx->pc != 0x1E8888u) { return; }
    ctx->pc = 0x1E8888u;
    // 0x1e8888: 0xc0853c8
    ctx->pc = 0x1E8888u;
    SET_GPR_U32(ctx, 31, 0x1E8890u);
    ctx->pc = 0x1E888Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8890u; }
        else if (ctx->pc != 0x1E8890u) { ctx->pc = 0x1E8890u; }
    }
    if (ctx->pc != 0x1E8890u) { return; }
    ctx->pc = 0x1E8890u;
    // 0x1e8890: 0x10000004
    ctx->pc = 0x1E8890u;
    {
        const bool branch_taken_0x1e8890 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E8894u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x1e8890) {
            ctx->pc = 0x1E88A4u;
            goto label_1e88a4;
        }
    }
    ctx->pc = 0x1E8898u;
label_1e8898:
    // 0x1e8898: 0xc0853e4
    ctx->pc = 0x1E8898u;
    SET_GPR_U32(ctx, 31, 0x1E88A0u);
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E88A0u; }
        else if (ctx->pc != 0x1E88A0u) { ctx->pc = 0x1E88A0u; }
    }
    if (ctx->pc != 0x1E88A0u) { return; }
    ctx->pc = 0x1E88A0u;
label_1e88a0:
    // 0x1e88a0: 0xc64100d0
    ctx->pc = 0x1e88a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e88a4:
    // 0x1e88a4: 0x3c033d75
    ctx->pc = 0x1e88a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15733 << 16));
    // 0x1e88a8: 0x3463c290
    ctx->pc = 0x1e88a8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 49808));
    // 0x1e88ac: 0x44830000
    ctx->pc = 0x1e88acu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1e88b0: 0x0
    ctx->pc = 0x1e88b0u;
    // NOP
    // 0x1e88b4: 0x46000801
    ctx->pc = 0x1e88b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e88b8: 0x1000003b
    ctx->pc = 0x1E88B8u;
    {
        const bool branch_taken_0x1e88b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E88BCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 208), bits); }
        if (branch_taken_0x1e88b8) {
            ctx->pc = 0x1E89A8u;
            goto label_1e89a8;
        }
    }
    ctx->pc = 0x1E88C0u;
label_1e88c0:
    // 0x1e88c0: 0x44820000
    ctx->pc = 0x1e88c0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1e88c4: 0x0
    ctx->pc = 0x1e88c4u;
    // NOP
    // 0x1e88c8: 0x46150032
    ctx->pc = 0x1e88c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e88cc: 0x0
    ctx->pc = 0x1e88ccu;
    // NOP
    // 0x1e88d0: 0x4500000c
    ctx->pc = 0x1E88D0u;
    {
        const bool branch_taken_0x1e88d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E88D4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
        if (branch_taken_0x1e88d0) {
            ctx->pc = 0x1E8904u;
            goto label_1e8904;
        }
    }
    ctx->pc = 0x1E88D8u;
    // 0x1e88d8: 0x30820040
    ctx->pc = 0x1e88d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
    // 0x1e88dc: 0x10400005
    ctx->pc = 0x1E88DCu;
    {
        const bool branch_taken_0x1e88dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E88E0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e88dc) {
            ctx->pc = 0x1E88F4u;
            goto label_1e88f4;
        }
    }
    ctx->pc = 0x1E88E4u;
    // 0x1e88e4: 0xc0853c8
    ctx->pc = 0x1E88E4u;
    SET_GPR_U32(ctx, 31, 0x1E88ECu);
    ctx->pc = 0x1E88E8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E88ECu; }
        else if (ctx->pc != 0x1E88ECu) { ctx->pc = 0x1E88ECu; }
    }
    if (ctx->pc != 0x1E88ECu) { return; }
    ctx->pc = 0x1E88ECu;
    // 0x1e88ec: 0x1000002f
    ctx->pc = 0x1E88ECu;
    {
        const bool branch_taken_0x1e88ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E88F0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 176)));
        if (branch_taken_0x1e88ec) {
            ctx->pc = 0x1E89ACu;
            goto label_1e89ac;
        }
    }
    ctx->pc = 0x1E88F4u;
label_1e88f4:
    // 0x1e88f4: 0xc0853ac
    ctx->pc = 0x1E88F4u;
    SET_GPR_U32(ctx, 31, 0x1E88FCu);
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E88FCu; }
        else if (ctx->pc != 0x1E88FCu) { ctx->pc = 0x1E88FCu; }
    }
    if (ctx->pc != 0x1E88FCu) { return; }
    ctx->pc = 0x1E88FCu;
    // 0x1e88fc: 0x1000002a
    ctx->pc = 0x1E88FCu;
    {
        const bool branch_taken_0x1e88fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e88fc) {
            ctx->pc = 0x1E89A8u;
            goto label_1e89a8;
        }
    }
    ctx->pc = 0x1E8904u;
label_1e8904:
    // 0x1e8904: 0x10400008
    ctx->pc = 0x1E8904u;
    {
        const bool branch_taken_0x1e8904 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E8908u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e8904) {
            ctx->pc = 0x1E8928u;
            goto label_1e8928;
        }
    }
    ctx->pc = 0x1E890Cu;
    // 0x1e890c: 0x72002628
    ctx->pc = 0x1e890cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e8910: 0xc08541c
    ctx->pc = 0x1E8910u;
    SET_GPR_U32(ctx, 31, 0x1E8918u);
    ctx->pc = 0x1E8914u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x215070u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetAlphaPoly__Fif_0x215070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8918u; }
        else if (ctx->pc != 0x1E8918u) { ctx->pc = 0x1E8918u; }
    }
    if (ctx->pc != 0x1E8918u) { return; }
    ctx->pc = 0x1E8918u;
    // 0x1e8918: 0xc0853c8
    ctx->pc = 0x1E8918u;
    SET_GPR_U32(ctx, 31, 0x1E8920u);
    ctx->pc = 0x1E891Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8920u; }
        else if (ctx->pc != 0x1E8920u) { ctx->pc = 0x1E8920u; }
    }
    if (ctx->pc != 0x1E8920u) { return; }
    ctx->pc = 0x1E8920u;
    // 0x1e8920: 0x10000021
    ctx->pc = 0x1E8920u;
    {
        const bool branch_taken_0x1e8920 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8920) {
            ctx->pc = 0x1E89A8u;
            goto label_1e89a8;
        }
    }
    ctx->pc = 0x1E8928u;
label_1e8928:
    // 0x1e8928: 0xc0853e4
    ctx->pc = 0x1E8928u;
    SET_GPR_U32(ctx, 31, 0x1E8930u);
    ctx->pc = 0x1E892Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8930u; }
        else if (ctx->pc != 0x1E8930u) { ctx->pc = 0x1E8930u; }
    }
    if (ctx->pc != 0x1E8930u) { return; }
    ctx->pc = 0x1E8930u;
    // 0x1e8930: 0x1000001d
    ctx->pc = 0x1E8930u;
    {
        const bool branch_taken_0x1e8930 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8930) {
            ctx->pc = 0x1E89A8u;
            goto label_1e89a8;
        }
    }
    ctx->pc = 0x1E8938u;
label_1e8938:
    // 0x1e8938: 0x44820000
    ctx->pc = 0x1e8938u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1e893c: 0x0
    ctx->pc = 0x1e893cu;
    // NOP
    // 0x1e8940: 0x46150032
    ctx->pc = 0x1e8940u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8944: 0x0
    ctx->pc = 0x1e8944u;
    // NOP
    // 0x1e8948: 0x4500000c
    ctx->pc = 0x1E8948u;
    {
        const bool branch_taken_0x1e8948 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E894Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
        if (branch_taken_0x1e8948) {
            ctx->pc = 0x1E897Cu;
            goto label_1e897c;
        }
    }
    ctx->pc = 0x1E8950u;
    // 0x1e8950: 0x30820040
    ctx->pc = 0x1e8950u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
    // 0x1e8954: 0x10400005
    ctx->pc = 0x1E8954u;
    {
        const bool branch_taken_0x1e8954 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E8958u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e8954) {
            ctx->pc = 0x1E896Cu;
            goto label_1e896c;
        }
    }
    ctx->pc = 0x1E895Cu;
    // 0x1e895c: 0xc0853c8
    ctx->pc = 0x1E895Cu;
    SET_GPR_U32(ctx, 31, 0x1E8964u);
    ctx->pc = 0x1E8960u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8964u; }
        else if (ctx->pc != 0x1E8964u) { ctx->pc = 0x1E8964u; }
    }
    if (ctx->pc != 0x1E8964u) { return; }
    ctx->pc = 0x1E8964u;
    // 0x1e8964: 0x10000010
    ctx->pc = 0x1E8964u;
    {
        const bool branch_taken_0x1e8964 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8964) {
            ctx->pc = 0x1E89A8u;
            goto label_1e89a8;
        }
    }
    ctx->pc = 0x1E896Cu;
label_1e896c:
    // 0x1e896c: 0xc0853ac
    ctx->pc = 0x1E896Cu;
    SET_GPR_U32(ctx, 31, 0x1E8974u);
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8974u; }
        else if (ctx->pc != 0x1E8974u) { ctx->pc = 0x1E8974u; }
    }
    if (ctx->pc != 0x1E8974u) { return; }
    ctx->pc = 0x1E8974u;
    // 0x1e8974: 0x1000000c
    ctx->pc = 0x1E8974u;
    {
        const bool branch_taken_0x1e8974 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8974) {
            ctx->pc = 0x1E89A8u;
            goto label_1e89a8;
        }
    }
    ctx->pc = 0x1E897Cu;
label_1e897c:
    // 0x1e897c: 0x10400008
    ctx->pc = 0x1E897Cu;
    {
        const bool branch_taken_0x1e897c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E8980u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e897c) {
            ctx->pc = 0x1E89A0u;
            goto label_1e89a0;
        }
    }
    ctx->pc = 0x1E8984u;
    // 0x1e8984: 0x72002628
    ctx->pc = 0x1e8984u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e8988: 0xc08541c
    ctx->pc = 0x1E8988u;
    SET_GPR_U32(ctx, 31, 0x1E8990u);
    ctx->pc = 0x1E898Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x215070u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetAlphaPoly__Fif_0x215070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8990u; }
        else if (ctx->pc != 0x1E8990u) { ctx->pc = 0x1E8990u; }
    }
    if (ctx->pc != 0x1E8990u) { return; }
    ctx->pc = 0x1E8990u;
    // 0x1e8990: 0xc0853c8
    ctx->pc = 0x1E8990u;
    SET_GPR_U32(ctx, 31, 0x1E8998u);
    ctx->pc = 0x1E8994u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8998u; }
        else if (ctx->pc != 0x1E8998u) { ctx->pc = 0x1E8998u; }
    }
    if (ctx->pc != 0x1E8998u) { return; }
    ctx->pc = 0x1E8998u;
    // 0x1e8998: 0x10000003
    ctx->pc = 0x1E8998u;
    {
        const bool branch_taken_0x1e8998 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8998) {
            ctx->pc = 0x1E89A8u;
            goto label_1e89a8;
        }
    }
    ctx->pc = 0x1E89A0u;
label_1e89a0:
    // 0x1e89a0: 0xc0853e4
    ctx->pc = 0x1E89A0u;
    SET_GPR_U32(ctx, 31, 0x1E89A8u);
    ctx->pc = 0x1E89A4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E89A8u; }
        else if (ctx->pc != 0x1E89A8u) { ctx->pc = 0x1E89A8u; }
    }
    if (ctx->pc != 0x1E89A8u) { return; }
    ctx->pc = 0x1E89A8u;
label_1e89a8:
    // 0x1e89a8: 0x8e4300b0
    ctx->pc = 0x1e89a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_1e89ac:
    // 0x1e89ac: 0x10600066
    ctx->pc = 0x1E89ACu;
    {
        const bool branch_taken_0x1e89ac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E89B0u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e89ac) {
            ctx->pc = 0x1E8B48u;
            goto label_1e8b48;
        }
    }
    ctx->pc = 0x1E89B4u;
    // 0x1e89b4: 0x10000060
    ctx->pc = 0x1E89B4u;
    {
        const bool branch_taken_0x1e89b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E89B8u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e89b4) {
            ctx->pc = 0x1E8B38u;
            goto label_1e8b38;
        }
    }
    ctx->pc = 0x1E89BCu;
label_1e89bc:
    // 0x1e89bc: 0x8e4400ec
    ctx->pc = 0x1e89bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 236)));
    // 0x1e89c0: 0x30830002
    ctx->pc = 0x1e89c0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 2));
    // 0x1e89c4: 0x5060003c
    ctx->pc = 0x1E89C4u;
    {
        const bool branch_taken_0x1e89c4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e89c4) {
            ctx->pc = 0x1E89C8u;
            SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
            ctx->pc = 0x1E8AB8u;
            goto label_1e8ab8;
        }
    }
    ctx->pc = 0x1E89CCu;
    // 0x1e89cc: 0xc64000d4
    ctx->pc = 0x1e89ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e89d0: 0x4600b034
    ctx->pc = 0x1e89d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e89d4: 0x0
    ctx->pc = 0x1e89d4u;
    // NOP
    // 0x1e89d8: 0x45030016
    ctx->pc = 0x1E89D8u;
    {
        const bool branch_taken_0x1e89d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e89d8) {
            ctx->pc = 0x1E89DCu;
            SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
            ctx->pc = 0x1E8A34u;
            goto label_1e8a34;
        }
    }
    ctx->pc = 0x1E89E0u;
    // 0x1e89e0: 0xc64c00d0
    ctx->pc = 0x1e89e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e89e4: 0x44800000
    ctx->pc = 0x1e89e4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1e89e8: 0x0
    ctx->pc = 0x1e89e8u;
    // NOP
    // 0x1e89ec: 0x46006036
    ctx->pc = 0x1e89ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e89f0: 0x0
    ctx->pc = 0x1e89f0u;
    // NOP
    // 0x1e89f4: 0x4503004f
    ctx->pc = 0x1E89F4u;
    {
        const bool branch_taken_0x1e89f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e89f4) {
            ctx->pc = 0x1E89F8u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
            ctx->pc = 0x1E8B34u;
            goto label_1e8b34;
        }
    }
    ctx->pc = 0x1E89FCu;
    // 0x1e89fc: 0x30820040
    ctx->pc = 0x1e89fcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
    // 0x1e8a00: 0x10400007
    ctx->pc = 0x1E8A00u;
    {
        const bool branch_taken_0x1e8a00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8a00) {
            ctx->pc = 0x1E8A20u;
            goto label_1e8a20;
        }
    }
    ctx->pc = 0x1E8A08u;
    // 0x1e8a08: 0xc08541c
    ctx->pc = 0x1E8A08u;
    SET_GPR_U32(ctx, 31, 0x1E8A10u);
    ctx->pc = 0x1E8A0Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    ctx->pc = 0x215070u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetAlphaPoly__Fif_0x215070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A10u; }
        else if (ctx->pc != 0x1E8A10u) { ctx->pc = 0x1E8A10u; }
    }
    if (ctx->pc != 0x1E8A10u) { return; }
    ctx->pc = 0x1E8A10u;
    // 0x1e8a10: 0xc0853c8
    ctx->pc = 0x1E8A10u;
    SET_GPR_U32(ctx, 31, 0x1E8A18u);
    ctx->pc = 0x1E8A14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A18u; }
        else if (ctx->pc != 0x1E8A18u) { ctx->pc = 0x1E8A18u; }
    }
    if (ctx->pc != 0x1E8A18u) { return; }
    ctx->pc = 0x1E8A18u;
    // 0x1e8a18: 0x10000045
    ctx->pc = 0x1E8A18u;
    {
        const bool branch_taken_0x1e8a18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8a18) {
            ctx->pc = 0x1E8B30u;
            goto label_1e8b30;
        }
    }
    ctx->pc = 0x1E8A20u;
label_1e8a20:
    // 0x1e8a20: 0xc0853e4
    ctx->pc = 0x1E8A20u;
    SET_GPR_U32(ctx, 31, 0x1E8A28u);
    ctx->pc = 0x1E8A24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A28u; }
        else if (ctx->pc != 0x1E8A28u) { ctx->pc = 0x1E8A28u; }
    }
    if (ctx->pc != 0x1E8A28u) { return; }
    ctx->pc = 0x1E8A28u;
    // 0x1e8a28: 0x10000041
    ctx->pc = 0x1E8A28u;
    {
        const bool branch_taken_0x1e8a28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8a28) {
            ctx->pc = 0x1E8B30u;
            goto label_1e8b30;
        }
    }
    ctx->pc = 0x1E8A30u;
    // 0x1e8a30: 0x3c023f80
    ctx->pc = 0x1e8a30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_1e8a34:
    // 0x1e8a34: 0x44820000
    ctx->pc = 0x1e8a34u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1e8a38: 0x0
    ctx->pc = 0x1e8a38u;
    // NOP
    // 0x1e8a3c: 0x46150032
    ctx->pc = 0x1e8a3cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8a40: 0x0
    ctx->pc = 0x1e8a40u;
    // NOP
    // 0x1e8a44: 0x4500000d
    ctx->pc = 0x1E8A44u;
    {
        const bool branch_taken_0x1e8a44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8A48u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
        if (branch_taken_0x1e8a44) {
            ctx->pc = 0x1E8A7Cu;
            goto label_1e8a7c;
        }
    }
    ctx->pc = 0x1E8A4Cu;
    // 0x1e8a4c: 0x30820040
    ctx->pc = 0x1e8a4cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
    // 0x1e8a50: 0x10400005
    ctx->pc = 0x1E8A50u;
    {
        const bool branch_taken_0x1e8a50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8a50) {
            ctx->pc = 0x1E8A68u;
            goto label_1e8a68;
        }
    }
    ctx->pc = 0x1E8A58u;
    // 0x1e8a58: 0xc0853c8
    ctx->pc = 0x1E8A58u;
    SET_GPR_U32(ctx, 31, 0x1E8A60u);
    ctx->pc = 0x1E8A5Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A60u; }
        else if (ctx->pc != 0x1E8A60u) { ctx->pc = 0x1E8A60u; }
    }
    if (ctx->pc != 0x1E8A60u) { return; }
    ctx->pc = 0x1E8A60u;
    // 0x1e8a60: 0x10000033
    ctx->pc = 0x1E8A60u;
    {
        const bool branch_taken_0x1e8a60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8a60) {
            ctx->pc = 0x1E8B30u;
            goto label_1e8b30;
        }
    }
    ctx->pc = 0x1E8A68u;
label_1e8a68:
    // 0x1e8a68: 0xc0853ac
    ctx->pc = 0x1E8A68u;
    SET_GPR_U32(ctx, 31, 0x1E8A70u);
    ctx->pc = 0x1E8A6Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A70u; }
        else if (ctx->pc != 0x1E8A70u) { ctx->pc = 0x1E8A70u; }
    }
    if (ctx->pc != 0x1E8A70u) { return; }
    ctx->pc = 0x1E8A70u;
    // 0x1e8a70: 0x1000002f
    ctx->pc = 0x1E8A70u;
    {
        const bool branch_taken_0x1e8a70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8a70) {
            ctx->pc = 0x1E8B30u;
            goto label_1e8b30;
        }
    }
    ctx->pc = 0x1E8A78u;
    // 0x1e8a78: 0x30820040
    ctx->pc = 0x1e8a78u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
label_1e8a7c:
    // 0x1e8a7c: 0x10400008
    ctx->pc = 0x1E8A7Cu;
    {
        const bool branch_taken_0x1e8a7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8a7c) {
            ctx->pc = 0x1E8AA0u;
            goto label_1e8aa0;
        }
    }
    ctx->pc = 0x1E8A84u;
    // 0x1e8a84: 0x8e2400b4
    ctx->pc = 0x1e8a84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x1e8a88: 0xc08541c
    ctx->pc = 0x1E8A88u;
    SET_GPR_U32(ctx, 31, 0x1E8A90u);
    ctx->pc = 0x1E8A8Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x215070u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetAlphaPoly__Fif_0x215070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A90u; }
        else if (ctx->pc != 0x1E8A90u) { ctx->pc = 0x1E8A90u; }
    }
    if (ctx->pc != 0x1E8A90u) { return; }
    ctx->pc = 0x1E8A90u;
    // 0x1e8a90: 0xc0853c8
    ctx->pc = 0x1E8A90u;
    SET_GPR_U32(ctx, 31, 0x1E8A98u);
    ctx->pc = 0x1E8A94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A98u; }
        else if (ctx->pc != 0x1E8A98u) { ctx->pc = 0x1E8A98u; }
    }
    if (ctx->pc != 0x1E8A98u) { return; }
    ctx->pc = 0x1E8A98u;
    // 0x1e8a98: 0x10000025
    ctx->pc = 0x1E8A98u;
    {
        const bool branch_taken_0x1e8a98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8a98) {
            ctx->pc = 0x1E8B30u;
            goto label_1e8b30;
        }
    }
    ctx->pc = 0x1E8AA0u;
label_1e8aa0:
    // 0x1e8aa0: 0x8e2400b4
    ctx->pc = 0x1e8aa0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x1e8aa4: 0xc0853e4
    ctx->pc = 0x1E8AA4u;
    SET_GPR_U32(ctx, 31, 0x1E8AACu);
    ctx->pc = 0x1E8AA8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8AACu; }
        else if (ctx->pc != 0x1E8AACu) { ctx->pc = 0x1E8AACu; }
    }
    if (ctx->pc != 0x1E8AACu) { return; }
    ctx->pc = 0x1E8AACu;
    // 0x1e8aac: 0x10000020
    ctx->pc = 0x1E8AACu;
    {
        const bool branch_taken_0x1e8aac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8aac) {
            ctx->pc = 0x1E8B30u;
            goto label_1e8b30;
        }
    }
    ctx->pc = 0x1E8AB4u;
    // 0x1e8ab4: 0x3c023f80
    ctx->pc = 0x1e8ab4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_1e8ab8:
    // 0x1e8ab8: 0x44820000
    ctx->pc = 0x1e8ab8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1e8abc: 0x0
    ctx->pc = 0x1e8abcu;
    // NOP
    // 0x1e8ac0: 0x46150032
    ctx->pc = 0x1e8ac0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8ac4: 0x0
    ctx->pc = 0x1e8ac4u;
    // NOP
    // 0x1e8ac8: 0x4500000d
    ctx->pc = 0x1E8AC8u;
    {
        const bool branch_taken_0x1e8ac8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8ACCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
        if (branch_taken_0x1e8ac8) {
            ctx->pc = 0x1E8B00u;
            goto label_1e8b00;
        }
    }
    ctx->pc = 0x1E8AD0u;
    // 0x1e8ad0: 0x30820040
    ctx->pc = 0x1e8ad0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
    // 0x1e8ad4: 0x10400005
    ctx->pc = 0x1E8AD4u;
    {
        const bool branch_taken_0x1e8ad4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8ad4) {
            ctx->pc = 0x1E8AECu;
            goto label_1e8aec;
        }
    }
    ctx->pc = 0x1E8ADCu;
    // 0x1e8adc: 0xc0853c8
    ctx->pc = 0x1E8ADCu;
    SET_GPR_U32(ctx, 31, 0x1E8AE4u);
    ctx->pc = 0x1E8AE0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8AE4u; }
        else if (ctx->pc != 0x1E8AE4u) { ctx->pc = 0x1E8AE4u; }
    }
    if (ctx->pc != 0x1E8AE4u) { return; }
    ctx->pc = 0x1E8AE4u;
    // 0x1e8ae4: 0x10000012
    ctx->pc = 0x1E8AE4u;
    {
        const bool branch_taken_0x1e8ae4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8ae4) {
            ctx->pc = 0x1E8B30u;
            goto label_1e8b30;
        }
    }
    ctx->pc = 0x1E8AECu;
label_1e8aec:
    // 0x1e8aec: 0xc0853ac
    ctx->pc = 0x1E8AECu;
    SET_GPR_U32(ctx, 31, 0x1E8AF4u);
    ctx->pc = 0x1E8AF0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8AF4u; }
        else if (ctx->pc != 0x1E8AF4u) { ctx->pc = 0x1E8AF4u; }
    }
    if (ctx->pc != 0x1E8AF4u) { return; }
    ctx->pc = 0x1E8AF4u;
    // 0x1e8af4: 0x1000000e
    ctx->pc = 0x1E8AF4u;
    {
        const bool branch_taken_0x1e8af4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8af4) {
            ctx->pc = 0x1E8B30u;
            goto label_1e8b30;
        }
    }
    ctx->pc = 0x1E8AFCu;
    // 0x1e8afc: 0x30820040
    ctx->pc = 0x1e8afcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
label_1e8b00:
    // 0x1e8b00: 0x10400008
    ctx->pc = 0x1E8B00u;
    {
        const bool branch_taken_0x1e8b00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8b00) {
            ctx->pc = 0x1E8B24u;
            goto label_1e8b24;
        }
    }
    ctx->pc = 0x1E8B08u;
    // 0x1e8b08: 0x8e2400b4
    ctx->pc = 0x1e8b08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x1e8b0c: 0xc08541c
    ctx->pc = 0x1E8B0Cu;
    SET_GPR_U32(ctx, 31, 0x1E8B14u);
    ctx->pc = 0x1E8B10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x215070u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetAlphaPoly__Fif_0x215070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8B14u; }
        else if (ctx->pc != 0x1E8B14u) { ctx->pc = 0x1E8B14u; }
    }
    if (ctx->pc != 0x1E8B14u) { return; }
    ctx->pc = 0x1E8B14u;
    // 0x1e8b14: 0xc0853c8
    ctx->pc = 0x1E8B14u;
    SET_GPR_U32(ctx, 31, 0x1E8B1Cu);
    ctx->pc = 0x1E8B18u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8B1Cu; }
        else if (ctx->pc != 0x1E8B1Cu) { ctx->pc = 0x1E8B1Cu; }
    }
    if (ctx->pc != 0x1E8B1Cu) { return; }
    ctx->pc = 0x1E8B1Cu;
    // 0x1e8b1c: 0x10000004
    ctx->pc = 0x1E8B1Cu;
    {
        const bool branch_taken_0x1e8b1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8b1c) {
            ctx->pc = 0x1E8B30u;
            goto label_1e8b30;
        }
    }
    ctx->pc = 0x1E8B24u;
label_1e8b24:
    // 0x1e8b24: 0x8e2400b4
    ctx->pc = 0x1e8b24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x1e8b28: 0xc0853e4
    ctx->pc = 0x1E8B28u;
    SET_GPR_U32(ctx, 31, 0x1E8B30u);
    ctx->pc = 0x1E8B2Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8B30u; }
        else if (ctx->pc != 0x1E8B30u) { ctx->pc = 0x1E8B30u; }
    }
    if (ctx->pc != 0x1E8B30u) { return; }
    ctx->pc = 0x1E8B30u;
label_1e8b30:
    // 0x1e8b30: 0x26310004
    ctx->pc = 0x1e8b30u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
label_1e8b34:
    // 0x1e8b34: 0x26100001
    ctx->pc = 0x1e8b34u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1e8b38:
    // 0x1e8b38: 0x8e4300b0
    ctx->pc = 0x1e8b38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x1e8b3c: 0x203182a
    ctx->pc = 0x1e8b3cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1e8b40: 0x1460ff9e
    ctx->pc = 0x1E8B40u;
    {
        const bool branch_taken_0x1e8b40 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e8b40) {
            ctx->pc = 0x1E89BCu;
            goto label_1e89bc;
        }
    }
    ctx->pc = 0x1E8B48u;
label_1e8b48:
    // 0x1e8b48: 0x7bbf0050
    ctx->pc = 0x1e8b48u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e8b4c: 0x7bb30040
    ctx->pc = 0x1e8b4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e8b50: 0x7bb20030
    ctx->pc = 0x1e8b50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8b54: 0x7bb10020
    ctx->pc = 0x1e8b54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8b58: 0x7bb00010
    ctx->pc = 0x1e8b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8b5c: 0xc7b7000c
    ctx->pc = 0x1e8b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1e8b60: 0xc7b60008
    ctx->pc = 0x1e8b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1e8b64: 0xc7b50004
    ctx->pc = 0x1e8b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e8b68: 0xc7b40000
    ctx->pc = 0x1e8b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e8b6c: 0x3e00008
    ctx->pc = 0x1E8B6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8B70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E84B8u: goto label_1e84b8;
            case 0x1E84BCu: goto label_1e84bc;
            case 0x1E8500u: goto label_1e8500;
            case 0x1E8510u: goto label_1e8510;
            case 0x1E8514u: goto label_1e8514;
            case 0x1E8534u: goto label_1e8534;
            case 0x1E8538u: goto label_1e8538;
            case 0x1E8584u: goto label_1e8584;
            case 0x1E85C4u: goto label_1e85c4;
            case 0x1E8604u: goto label_1e8604;
            case 0x1E8628u: goto label_1e8628;
            case 0x1E862Cu: goto label_1e862c;
            case 0x1E8648u: goto label_1e8648;
            case 0x1E8658u: goto label_1e8658;
            case 0x1E8668u: goto label_1e8668;
            case 0x1E86D4u: goto label_1e86d4;
            case 0x1E86F4u: goto label_1e86f4;
            case 0x1E8704u: goto label_1e8704;
            case 0x1E8720u: goto label_1e8720;
            case 0x1E8738u: goto label_1e8738;
            case 0x1E8750u: goto label_1e8750;
            case 0x1E878Cu: goto label_1e878c;
            case 0x1E87A4u: goto label_1e87a4;
            case 0x1E87ACu: goto label_1e87ac;
            case 0x1E87B0u: goto label_1e87b0;
            case 0x1E87DCu: goto label_1e87dc;
            case 0x1E87F8u: goto label_1e87f8;
            case 0x1E8898u: goto label_1e8898;
            case 0x1E88A0u: goto label_1e88a0;
            case 0x1E88A4u: goto label_1e88a4;
            case 0x1E88C0u: goto label_1e88c0;
            case 0x1E88F4u: goto label_1e88f4;
            case 0x1E8904u: goto label_1e8904;
            case 0x1E8928u: goto label_1e8928;
            case 0x1E8938u: goto label_1e8938;
            case 0x1E896Cu: goto label_1e896c;
            case 0x1E897Cu: goto label_1e897c;
            case 0x1E89A0u: goto label_1e89a0;
            case 0x1E89A8u: goto label_1e89a8;
            case 0x1E89ACu: goto label_1e89ac;
            case 0x1E89BCu: goto label_1e89bc;
            case 0x1E8A20u: goto label_1e8a20;
            case 0x1E8A34u: goto label_1e8a34;
            case 0x1E8A68u: goto label_1e8a68;
            case 0x1E8A7Cu: goto label_1e8a7c;
            case 0x1E8AA0u: goto label_1e8aa0;
            case 0x1E8AB8u: goto label_1e8ab8;
            case 0x1E8AECu: goto label_1e8aec;
            case 0x1E8B00u: goto label_1e8b00;
            case 0x1E8B24u: goto label_1e8b24;
            case 0x1E8B30u: goto label_1e8b30;
            case 0x1E8B34u: goto label_1e8b34;
            case 0x1E8B38u: goto label_1e8b38;
            case 0x1E8B48u: goto label_1e8b48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E8B74u;
}
