#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: backWaitPos__10PeopleTaskFv
// Address: 0x20a820 - 0x20a9e0
void backWaitPos__10PeopleTaskFv_0x20a820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("backWaitPos__10PeopleTaskFv");


    ctx->pc = 0x20a820u;

    // 0x20a820: 0x27bdffd0
    ctx->pc = 0x20a820u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20a824: 0x7fbf0020
    ctx->pc = 0x20a824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x20a828: 0x7fb10010
    ctx->pc = 0x20a828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20a82c: 0x7fb00000
    ctx->pc = 0x20a82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20a830: 0x8c821df4
    ctx->pc = 0x20a830u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 7668)));
    // 0x20a834: 0x10400021
    ctx->pc = 0x20A834u;
    {
        const bool branch_taken_0x20a834 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20A838u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20a834) {
            ctx->pc = 0x20A8BCu;
            goto label_20a8bc;
        }
    }
    ctx->pc = 0x20A83Cu;
    // 0x20a83c: 0x2402fffc
    ctx->pc = 0x20a83cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x20a840: 0xae221dd0
    ctx->pc = 0x20a840u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7632), GPR_U32(ctx, 2));
    // 0x20a844: 0x8e221df4
    ctx->pc = 0x20a844u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 7668)));
    // 0x20a848: 0x8f848c48
    ctx->pc = 0x20a848u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x20a84c: 0xc4420000
    ctx->pc = 0x20a84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20a850: 0x8c830004
    ctx->pc = 0x20a850u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20a854: 0xc4400008
    ctx->pc = 0x20a854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a858: 0x31040
    ctx->pc = 0x20a858u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x20a85c: 0x431021
    ctx->pc = 0x20a85cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a860: 0x21080
    ctx->pc = 0x20a860u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20a864: 0x431021
    ctx->pc = 0x20a864u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a868: 0x21100
    ctx->pc = 0x20a868u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x20a86c: 0x441021
    ctx->pc = 0x20a86cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20a870: 0xc4430090
    ctx->pc = 0x20a870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20a874: 0xc4410098
    ctx->pc = 0x20a874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a878: 0x46021881
    ctx->pc = 0x20a878u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x20a87c: 0x46000801
    ctx->pc = 0x20a87cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20a880: 0x4602101a
    ctx->pc = 0x20a880u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x20a884: 0xc06c2a8
    ctx->pc = 0x20A884u;
    SET_GPR_U32(ctx, 31, 0x20A88Cu);
    ctx->pc = 0x20A888u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    ctx->pc = 0x1B0AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0AA0_0x1b0aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A88Cu; }
        else if (ctx->pc != 0x20A88Cu) { ctx->pc = 0x20A88Cu; }
    }
    if (ctx->pc != 0x20A88Cu) { return; }
    ctx->pc = 0x20A88Cu;
    // 0x20a88c: 0xc6221df8
    ctx->pc = 0x20a88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20a890: 0x3c024040
    ctx->pc = 0x20a890u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16448 << 16));
    // 0x20a894: 0x44820800
    ctx->pc = 0x20a894u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x20a898: 0x0
    ctx->pc = 0x20a898u;
    // NOP
    // 0x20a89c: 0x46020001
    ctx->pc = 0x20a89cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x20a8a0: 0x46010034
    ctx->pc = 0x20a8a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a8a4: 0x0
    ctx->pc = 0x20a8a4u;
    // NOP
    // 0x20a8a8: 0x45010048
    ctx->pc = 0x20A8A8u;
    {
        const bool branch_taken_0x20a8a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20A8ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x20a8a8) {
            ctx->pc = 0x20A9CCu;
            goto label_20a9cc;
        }
    }
    ctx->pc = 0x20A8B0u;
    // 0x20a8b0: 0x70001628
    ctx->pc = 0x20a8b0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20a8b4: 0x10000046
    ctx->pc = 0x20A8B4u;
    {
        const bool branch_taken_0x20a8b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20A8B8u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x20a8b4) {
            ctx->pc = 0x20A9D0u;
            goto label_20a9d0;
        }
    }
    ctx->pc = 0x20A8BCu;
label_20a8bc:
    // 0x20a8bc: 0x8e220030
    ctx->pc = 0x20a8bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x20a8c0: 0xc4400038
    ctx->pc = 0x20a8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a8c4: 0xc44c0030
    ctx->pc = 0x20a8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20a8c8: 0xc069e68
    ctx->pc = 0x20A8C8u;
    SET_GPR_U32(ctx, 31, 0x20A8D0u);
    ctx->pc = 0x20A8CCu;
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
    ctx->pc = 0x1A79A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan2_0x1a79a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A8D0u; }
        else if (ctx->pc != 0x20A8D0u) { ctx->pc = 0x20A8D0u; }
    }
    if (ctx->pc != 0x20A8D0u) { return; }
    ctx->pc = 0x20A8D0u;
    // 0x20a8d0: 0x2143c
    ctx->pc = 0x20a8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20a8d4: 0x2143f
    ctx->pc = 0x20a8d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x20a8d8: 0x44820000
    ctx->pc = 0x20a8d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x20a8dc: 0x0
    ctx->pc = 0x20a8dcu;
    // NOP
    // 0x20a8e0: 0x46800060
    ctx->pc = 0x20a8e0u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x20a8e4: 0x3c023bb4
    ctx->pc = 0x20a8e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15284 << 16));
    // 0x20a8e8: 0x44820000
    ctx->pc = 0x20a8e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x20a8ec: 0x0
    ctx->pc = 0x20a8ecu;
    // NOP
    // 0x20a8f0: 0x46010002
    ctx->pc = 0x20a8f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20a8f4: 0x46000024
    ctx->pc = 0x20a8f4u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x20a8f8: 0x44100000
    ctx->pc = 0x20a8f8u;
    SET_GPR_U32(ctx, 16, *(uint32_t*)&ctx->f[0]);
    // 0x20a8fc: 0x0
    ctx->pc = 0x20a8fcu;
    // NOP
    // 0x20a900: 0x5a000004
    ctx->pc = 0x20A900u;
    {
        const bool branch_taken_0x20a900 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x20a900) {
            ctx->pc = 0x20A904u;
            SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
            ctx->pc = 0x20A914u;
            goto label_20a914;
        }
    }
    ctx->pc = 0x20A908u;
    // 0x20a908: 0x10000002
    ctx->pc = 0x20A908u;
    {
        const bool branch_taken_0x20a908 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20a908) {
            ctx->pc = 0x20A914u;
            goto label_20a914;
        }
    }
    ctx->pc = 0x20A910u;
    // 0x20a910: 0x108023
    ctx->pc = 0x20a910u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_20a914:
    // 0x20a914: 0x3c020050
    ctx->pc = 0x20a914u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20a918: 0x2443fb00
    ctx->pc = 0x20a918u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294966016));
    // 0x20a91c: 0x3c023fb6
    ctx->pc = 0x20a91cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16310 << 16));
    // 0x20a920: 0x3442db6e
    ctx->pc = 0x20a920u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 56174));
    // 0x20a924: 0x8f848c48
    ctx->pc = 0x20a924u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x20a928: 0x44820800
    ctx->pc = 0x20a928u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x20a92c: 0x8c820004
    ctx->pc = 0x20a92cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20a930: 0x21080
    ctx->pc = 0x20a930u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20a934: 0x621021
    ctx->pc = 0x20a934u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20a938: 0xc4400000
    ctx->pc = 0x20a938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a93c: 0xc053146
    ctx->pc = 0x20A93Cu;
    SET_GPR_U32(ctx, 31, 0x20A944u);
    ctx->pc = 0x20A940u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x14C518u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x14c518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A944u; }
        else if (ctx->pc != 0x20A944u) { ctx->pc = 0x20A944u; }
    }
    if (ctx->pc != 0x20A944u) { return; }
    ctx->pc = 0x20A944u;
    // 0x20a944: 0x3c035555
    ctx->pc = 0x20a944u;
    SET_GPR_U32(ctx, 3, ((uint32_t)21845 << 16));
    // 0x20a948: 0x34635556
    ctx->pc = 0x20a948u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 21846));
    // 0x20a94c: 0x620018
    ctx->pc = 0x20a94cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x20a950: 0x227c2
    ctx->pc = 0x20a950u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 2), 31));
    // 0x20a954: 0x0
    ctx->pc = 0x20a954u;
    // NOP
    // 0x20a958: 0x1810
    ctx->pc = 0x20a958u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x20a95c: 0x641821
    ctx->pc = 0x20a95cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20a960: 0x70082a
    ctx->pc = 0x20a960u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 16)));
    // 0x20a964: 0x10200005
    ctx->pc = 0x20A964u;
    {
        const bool branch_taken_0x20a964 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x20A968u;
        SET_GPR_U32(ctx, 3, ((uint32_t)10922 << 16));
        if (branch_taken_0x20a964) {
            ctx->pc = 0x20A97Cu;
            goto label_20a97c;
        }
    }
    ctx->pc = 0x20A96Cu;
    // 0x20a96c: 0x2402fffe
    ctx->pc = 0x20a96cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x20a970: 0x1000000f
    ctx->pc = 0x20A970u;
    {
        const bool branch_taken_0x20a970 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20A974u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7632), GPR_U32(ctx, 2));
        if (branch_taken_0x20a970) {
            ctx->pc = 0x20A9B0u;
            goto label_20a9b0;
        }
    }
    ctx->pc = 0x20A978u;
    // 0x20a978: 0x3c032aaa
    ctx->pc = 0x20a978u;
    SET_GPR_U32(ctx, 3, ((uint32_t)10922 << 16));
label_20a97c:
    // 0x20a97c: 0x3463aaab
    ctx->pc = 0x20a97cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 43691));
    // 0x20a980: 0x620018
    ctx->pc = 0x20a980u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x20a984: 0x0
    ctx->pc = 0x20a984u;
    // NOP
    // 0x20a988: 0x0
    ctx->pc = 0x20a988u;
    // NOP
    // 0x20a98c: 0x1010
    ctx->pc = 0x20a98cu;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x20a990: 0x441021
    ctx->pc = 0x20a990u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20a994: 0x50082a
    ctx->pc = 0x20a994u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x20a998: 0x10200004
    ctx->pc = 0x20A998u;
    {
        const bool branch_taken_0x20a998 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x20a998) {
            ctx->pc = 0x20A9ACu;
            goto label_20a9ac;
        }
    }
    ctx->pc = 0x20A9A0u;
    // 0x20a9a0: 0x2402fffd
    ctx->pc = 0x20a9a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x20a9a4: 0x10000002
    ctx->pc = 0x20A9A4u;
    {
        const bool branch_taken_0x20a9a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20A9A8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7632), GPR_U32(ctx, 2));
        if (branch_taken_0x20a9a4) {
            ctx->pc = 0x20A9B0u;
            goto label_20a9b0;
        }
    }
    ctx->pc = 0x20A9ACu;
label_20a9ac:
    // 0x20a9ac: 0xae201dd0
    ctx->pc = 0x20a9acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7632), GPR_U32(ctx, 0));
label_20a9b0:
    // 0x20a9b0: 0xc6211df8
    ctx->pc = 0x20a9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a9b4: 0xc6201df0
    ctx->pc = 0x20a9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a9b8: 0x46000836
    ctx->pc = 0x20a9b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a9bc: 0x0
    ctx->pc = 0x20a9bcu;
    // NOP
    // 0x20a9c0: 0x45000002
    ctx->pc = 0x20A9C0u;
    {
        const bool branch_taken_0x20a9c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20A9C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x20a9c0) {
            ctx->pc = 0x20A9CCu;
            goto label_20a9cc;
        }
    }
    ctx->pc = 0x20A9C8u;
    // 0x20a9c8: 0x70001628
    ctx->pc = 0x20a9c8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20a9cc:
    // 0x20a9cc: 0x7bbf0020
    ctx->pc = 0x20a9ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20a9d0:
    // 0x20a9d0: 0x7bb10010
    ctx->pc = 0x20a9d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a9d4: 0x7bb00000
    ctx->pc = 0x20a9d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a9d8: 0x3e00008
    ctx->pc = 0x20A9D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A9DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20A8BCu: goto label_20a8bc;
            case 0x20A914u: goto label_20a914;
            case 0x20A97Cu: goto label_20a97c;
            case 0x20A9ACu: goto label_20a9ac;
            case 0x20A9B0u: goto label_20a9b0;
            case 0x20A9CCu: goto label_20a9cc;
            case 0x20A9D0u: goto label_20a9d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20A9E0u;
}
