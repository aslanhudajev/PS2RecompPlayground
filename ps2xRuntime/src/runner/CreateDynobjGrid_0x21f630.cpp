#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CreateDynobjGrid
// Address: 0x21f630 - 0x21f930
void CreateDynobjGrid_0x21f630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21f630u;

    // 0x21f630: 0x27bdff70
    ctx->pc = 0x21f630u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x21f634: 0xffbf0080
    ctx->pc = 0x21f634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x21f638: 0xffb70070
    ctx->pc = 0x21f638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x21f63c: 0xffb60060
    ctx->pc = 0x21f63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x21f640: 0xffb50050
    ctx->pc = 0x21f640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x21f644: 0xffb40040
    ctx->pc = 0x21f644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x21f648: 0xffb30030
    ctx->pc = 0x21f648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x21f64c: 0xffb20020
    ctx->pc = 0x21f64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21f650: 0xffb10010
    ctx->pc = 0x21f650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21f654: 0xffb00000
    ctx->pc = 0x21f654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21f658: 0x40034800
    ctx->pc = 0x21f658u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x21f65c: 0x3c02003a
    ctx->pc = 0x21f65cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x21f660: 0x8c4221d0
    ctx->pc = 0x21f660u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x21f664: 0xac430078
    ctx->pc = 0x21f664u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
    // 0x21f668: 0x3c10003c
    ctx->pc = 0x21f668u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x21f66c: 0x8e06d5ec
    ctx->pc = 0x21f66cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4294956524)));
    // 0x21f670: 0x24c60001
    ctx->pc = 0x21f670u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x21f674: 0x3c02003c
    ctx->pc = 0x21f674u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21f678: 0x8c44d5e4
    ctx->pc = 0x21f678u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294956516)));
    // 0x21f67c: 0x282d
    ctx->pc = 0x21f67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f680: 0xc0becc6
    ctx->pc = 0x21F680u;
    SET_GPR_U32(ctx, 31, 0x21F688u);
    ctx->pc = 0x21F684u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    ctx->pc = 0x2FB318u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x2fb318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F688u; }
    }
    if (ctx->pc != 0x21F688u) { return; }
    ctx->pc = 0x21F688u;
    // 0x21f688: 0x3c02003c
    ctx->pc = 0x21f688u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21f68c: 0x8c46d5f4
    ctx->pc = 0x21f68cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294956532)));
    // 0x21f690: 0x3c02003c
    ctx->pc = 0x21f690u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21f694: 0x8c44d5f0
    ctx->pc = 0x21f694u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294956528)));
    // 0x21f698: 0x282d
    ctx->pc = 0x21f698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f69c: 0xc0becc6
    ctx->pc = 0x21F69Cu;
    SET_GPR_U32(ctx, 31, 0x21F6A4u);
    ctx->pc = 0x21F6A0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x2FB318u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x2fb318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F6A4u; }
    }
    if (ctx->pc != 0x21F6A4u) { return; }
    ctx->pc = 0x21F6A4u;
    // 0x21f6a4: 0xae00d5ec
    ctx->pc = 0x21f6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294956524), GPR_U32(ctx, 0));
    // 0x21f6a8: 0x3c02003c
    ctx->pc = 0x21f6a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21f6ac: 0x8c42d5e0
    ctx->pc = 0x21f6acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956512)));
    // 0x21f6b0: 0x18400089
    ctx->pc = 0x21F6B0u;
    {
        const bool branch_taken_0x21f6b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21F6B4u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21f6b0) {
            ctx->pc = 0x21F8D8u;
            goto label_21f8d8;
        }
    }
    ctx->pc = 0x21F6B8u;
    // 0x21f6b8: 0x3c17003c
    ctx->pc = 0x21f6b8u;
    SET_GPR_U32(ctx, 23, ((uint32_t)60 << 16));
    // 0x21f6bc: 0x3c020032
    ctx->pc = 0x21f6bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21f6c0: 0x2453f9f8
    ctx->pc = 0x21f6c0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x21f6c4: 0x3c160100
    ctx->pc = 0x21f6c4u;
    SET_GPR_U32(ctx, 22, ((uint32_t)256 << 16));
    // 0x21f6c8: 0x3c15003c
    ctx->pc = 0x21f6c8u;
    SET_GPR_U32(ctx, 21, ((uint32_t)60 << 16));
    // 0x21f6cc: 0x3c14003c
    ctx->pc = 0x21f6ccu;
    SET_GPR_U32(ctx, 20, ((uint32_t)60 << 16));
    // 0x21f6d0: 0x24020050
    ctx->pc = 0x21f6d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
    // 0x21f6d4: 0x0
    ctx->pc = 0x21f6d4u;
    // NOP
label_21f6d8:
    // 0x21f6d8: 0x2421018
    ctx->pc = 0x21f6d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21f6dc: 0x8ee3d5dc
    ctx->pc = 0x21f6dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 23), 4294956508)));
    // 0x21f6e0: 0x438821
    ctx->pc = 0x21f6e0u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21f6e4: 0x86230040
    ctx->pc = 0x21f6e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x21f6e8: 0x2402003c
    ctx->pc = 0x21f6e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x21f6ec: 0x621818
    ctx->pc = 0x21f6ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21f6f0: 0x8e620004
    ctx->pc = 0x21f6f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x21f6f4: 0x628021
    ctx->pc = 0x21f6f4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21f6f8: 0x8e020010
    ctx->pc = 0x21f6f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21f6fc: 0x561024
    ctx->pc = 0x21f6fcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x21f700: 0x10400004
    ctx->pc = 0x21F700u;
    {
        const bool branch_taken_0x21f700 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21F704u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21f700) {
            ctx->pc = 0x21F714u;
            goto label_21f714;
        }
    }
    ctx->pc = 0x21F708u;
    // 0x21f708: 0x8e040028
    ctx->pc = 0x21f708u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x21f70c: 0xc0b4302
    ctx->pc = 0x21F70Cu;
    SET_GPR_U32(ctx, 31, 0x21F714u);
    ctx->pc = 0x21F710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetWorldMat_0x2d0c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F714u; }
    }
    if (ctx->pc != 0x21F714u) { return; }
    ctx->pc = 0x21F714u;
label_21f714:
    // 0x21f714: 0xa6200042
    ctx->pc = 0x21f714u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 66), (uint16_t)GPR_U32(ctx, 0));
    // 0x21f718: 0x8e020010
    ctx->pc = 0x21f718u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21f71c: 0x561024
    ctx->pc = 0x21f71cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x21f720: 0x14400007
    ctx->pc = 0x21F720u;
    {
        const bool branch_taken_0x21f720 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21F724u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 48));
        if (branch_taken_0x21f720) {
            ctx->pc = 0x21F740u;
            goto label_21f740;
        }
    }
    ctx->pc = 0x21F728u;
    // 0x21f728: 0x8e020010
    ctx->pc = 0x21f728u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21f72c: 0x30421000
    ctx->pc = 0x21f72cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4096));
    // 0x21f730: 0x10400003
    ctx->pc = 0x21F730u;
    {
        const bool branch_taken_0x21f730 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21F734u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 28));
        if (branch_taken_0x21f730) {
            ctx->pc = 0x21F740u;
            goto label_21f740;
        }
    }
    ctx->pc = 0x21F738u;
    // 0x21f738: 0x8e020028
    ctx->pc = 0x21f738u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x21f73c: 0x24450030
    ctx->pc = 0x21f73cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 48));
label_21f740:
    // 0x21f740: 0xc4a00000
    ctx->pc = 0x21f740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f744: 0xc6040030
    ctx->pc = 0x21f744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21f748: 0x46040041
    ctx->pc = 0x21f748u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x21f74c: 0xc6620018
    ctx->pc = 0x21f74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21f750: 0x46020841
    ctx->pc = 0x21f750u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x21f754: 0x3c020032
    ctx->pc = 0x21f754u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21f758: 0xc443fd4c
    ctx->pc = 0x21f758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21f75c: 0x46030842
    ctx->pc = 0x21f75cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x21f760: 0x46000964
    ctx->pc = 0x21f760u;
    *(int32_t*)&ctx->f[5] = FPU_CVT_W_S(ctx->f[1]);
    // 0x21f764: 0x440d2800
    ctx->pc = 0x21f764u;
    SET_GPR_U32(ctx, 13, *(uint32_t*)&ctx->f[5]);
    // 0x21f768: 0x46040000
    ctx->pc = 0x21f768u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x21f76c: 0x46020001
    ctx->pc = 0x21f76cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x21f770: 0x46030002
    ctx->pc = 0x21f770u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x21f774: 0x46000064
    ctx->pc = 0x21f774u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x21f778: 0x44090800
    ctx->pc = 0x21f778u;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[1]);
    // 0x21f77c: 0xc4a10008
    ctx->pc = 0x21f77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21f780: 0x46040801
    ctx->pc = 0x21f780u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x21f784: 0xc6620020
    ctx->pc = 0x21f784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21f788: 0x46020001
    ctx->pc = 0x21f788u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x21f78c: 0x46030002
    ctx->pc = 0x21f78cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x21f790: 0x46000164
    ctx->pc = 0x21f790u;
    *(int32_t*)&ctx->f[5] = FPU_CVT_W_S(ctx->f[0]);
    // 0x21f794: 0x44042800
    ctx->pc = 0x21f794u;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[5]);
    // 0x21f798: 0x46040840
    ctx->pc = 0x21f798u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x21f79c: 0x46020841
    ctx->pc = 0x21f79cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x21f7a0: 0x46030842
    ctx->pc = 0x21f7a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x21f7a4: 0x46000824
    ctx->pc = 0x21f7a4u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x21f7a8: 0x44050000
    ctx->pc = 0x21f7a8u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[0]);
    // 0x21f7ac: 0x5a00005
    ctx->pc = 0x21F7ACu;
    {
        const bool branch_taken_0x21f7ac = (GPR_S32(ctx, 13) < 0);
        ctx->pc = 0x21F7B0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294956536)));
        if (branch_taken_0x21f7ac) {
            ctx->pc = 0x21F7C4u;
            goto label_21f7c4;
        }
    }
    ctx->pc = 0x21F7B4u;
    // 0x21f7b4: 0x2442ffff
    ctx->pc = 0x21f7b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21f7b8: 0x4d182a
    ctx->pc = 0x21f7b8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 13)));
    // 0x21f7bc: 0x10000002
    ctx->pc = 0x21F7BCu;
    {
        const bool branch_taken_0x21f7bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21F7C0u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 13));
        if (branch_taken_0x21f7bc) {
            ctx->pc = 0x21F7C8u;
            goto label_21f7c8;
        }
    }
    ctx->pc = 0x21F7C4u;
label_21f7c4:
    // 0x21f7c4: 0x102d
    ctx->pc = 0x21f7c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f7c8:
    // 0x21f7c8: 0x5200006
    ctx->pc = 0x21F7C8u;
    {
        const bool branch_taken_0x21f7c8 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x21F7CCu;
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21f7c8) {
            ctx->pc = 0x21F7E4u;
            goto label_21f7e4;
        }
    }
    ctx->pc = 0x21F7D0u;
    // 0x21f7d0: 0x8ea2d5f8
    ctx->pc = 0x21f7d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294956536)));
    // 0x21f7d4: 0x2442ffff
    ctx->pc = 0x21f7d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21f7d8: 0x49182a
    ctx->pc = 0x21f7d8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 9)));
    // 0x21f7dc: 0x10000002
    ctx->pc = 0x21F7DCu;
    {
        const bool branch_taken_0x21f7dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21F7E0u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 9));
        if (branch_taken_0x21f7dc) {
            ctx->pc = 0x21F7E8u;
            goto label_21f7e8;
        }
    }
    ctx->pc = 0x21F7E4u;
label_21f7e4:
    // 0x21f7e4: 0x102d
    ctx->pc = 0x21f7e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f7e8:
    // 0x21f7e8: 0x4800006
    ctx->pc = 0x21F7E8u;
    {
        const bool branch_taken_0x21f7e8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x21F7ECu;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21f7e8) {
            ctx->pc = 0x21F804u;
            goto label_21f804;
        }
    }
    ctx->pc = 0x21F7F0u;
    // 0x21f7f0: 0x8e82d5fc
    ctx->pc = 0x21f7f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294956540)));
    // 0x21f7f4: 0x2442ffff
    ctx->pc = 0x21f7f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21f7f8: 0x44182a
    ctx->pc = 0x21f7f8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x21f7fc: 0x10000002
    ctx->pc = 0x21F7FCu;
    {
        const bool branch_taken_0x21f7fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21F800u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
        if (branch_taken_0x21f7fc) {
            ctx->pc = 0x21F808u;
            goto label_21f808;
        }
    }
    ctx->pc = 0x21F804u;
label_21f804:
    // 0x21f804: 0x102d
    ctx->pc = 0x21f804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f808:
    // 0x21f808: 0x4a00006
    ctx->pc = 0x21F808u;
    {
        const bool branch_taken_0x21f808 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x21F80Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21f808) {
            ctx->pc = 0x21F824u;
            goto label_21f824;
        }
    }
    ctx->pc = 0x21F810u;
    // 0x21f810: 0x8e82d5fc
    ctx->pc = 0x21f810u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294956540)));
    // 0x21f814: 0x2442ffff
    ctx->pc = 0x21f814u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21f818: 0x45182a
    ctx->pc = 0x21f818u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 5)));
    // 0x21f81c: 0x10000002
    ctx->pc = 0x21F81Cu;
    {
        const bool branch_taken_0x21f81c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21F820u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
        if (branch_taken_0x21f81c) {
            ctx->pc = 0x21F828u;
            goto label_21f828;
        }
    }
    ctx->pc = 0x21F824u;
label_21f824:
    // 0x21f824: 0x102d
    ctx->pc = 0x21f824u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f828:
    // 0x21f828: 0x40282d
    ctx->pc = 0x21f828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f82c: 0x80382d
    ctx->pc = 0x21f82cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f830: 0xa7102a
    ctx->pc = 0x21f830u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 7)));
    // 0x21f834: 0x54400023
    ctx->pc = 0x21F834u;
    {
        const bool branch_taken_0x21f834 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x21f834) {
            ctx->pc = 0x21F838u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x21F8C4u;
            goto label_21f8c4;
        }
    }
    ctx->pc = 0x21F83Cu;
    // 0x21f83c: 0x1a0302d
    ctx->pc = 0x21f83cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_21f840:
    // 0x21f840: 0x126102a
    ctx->pc = 0x21f840u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 6)));
    // 0x21f844: 0x5440001b
    ctx->pc = 0x21F844u;
    {
        const bool branch_taken_0x21f844 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x21f844) {
            ctx->pc = 0x21F848u;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
            ctx->pc = 0x21F8B4u;
            goto label_21f8b4;
        }
    }
    ctx->pc = 0x21F84Cu;
    // 0x21f84c: 0x3c08003c
    ctx->pc = 0x21f84cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)60 << 16));
    // 0x21f850: 0x3c02003c
    ctx->pc = 0x21f850u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21f854: 0x8c4cd5e4
    ctx->pc = 0x21f854u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 2), 4294956516)));
    // 0x21f858: 0x3c02003c
    ctx->pc = 0x21f858u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21f85c: 0x8c42d5f8
    ctx->pc = 0x21f85cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956536)));
    // 0x21f860: 0xe25818
    ctx->pc = 0x21f860u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21f864: 0x3c02003c
    ctx->pc = 0x21f864u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21f868: 0x8c4ad5f0
    ctx->pc = 0x21f868u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 2), 4294956528)));
    // 0x21f86c: 0x8d03d5ec
    ctx->pc = 0x21f86cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 4294956524)));
label_21f870:
    // 0x21f870: 0x24630001
    ctx->pc = 0x21f870u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x21f874: 0xad03d5ec
    ctx->pc = 0x21f874u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294956524), GPR_U32(ctx, 3));
    // 0x21f878: 0x31880
    ctx->pc = 0x21f878u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x21f87c: 0x6c1821
    ctx->pc = 0x21f87cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x21f880: 0xa4720000
    ctx->pc = 0x21f880u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x21f884: 0x1662021
    ctx->pc = 0x21f884u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x21f888: 0x42040
    ctx->pc = 0x21f888u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x21f88c: 0x8a2021
    ctx->pc = 0x21f88cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x21f890: 0x94820000
    ctx->pc = 0x21f890u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21f894: 0xa4620002
    ctx->pc = 0x21f894u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x21f898: 0x9502d5ec
    ctx->pc = 0x21f898u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4294956524)));
    // 0x21f89c: 0xa4820000
    ctx->pc = 0x21f89cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x21f8a0: 0x24c60001
    ctx->pc = 0x21f8a0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x21f8a4: 0x126102a
    ctx->pc = 0x21f8a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 6)));
    // 0x21f8a8: 0x1040fff1
    ctx->pc = 0x21F8A8u;
    {
        const bool branch_taken_0x21f8a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21F8ACu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 4294956524)));
        if (branch_taken_0x21f8a8) {
            ctx->pc = 0x21F870u;
            goto label_21f870;
        }
    }
    ctx->pc = 0x21F8B0u;
    // 0x21f8b0: 0x24e70001
    ctx->pc = 0x21f8b0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_21f8b4:
    // 0x21f8b4: 0xa7102a
    ctx->pc = 0x21f8b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 7)));
    // 0x21f8b8: 0x5040ffe1
    ctx->pc = 0x21F8B8u;
    {
        const bool branch_taken_0x21f8b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x21f8b8) {
            ctx->pc = 0x21F8BCu;
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x21F840u;
            goto label_21f840;
        }
    }
    ctx->pc = 0x21F8C0u;
    // 0x21f8c0: 0x26520001
    ctx->pc = 0x21f8c0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_21f8c4:
    // 0x21f8c4: 0x3c02003c
    ctx->pc = 0x21f8c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21f8c8: 0x8c42d5e0
    ctx->pc = 0x21f8c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956512)));
    // 0x21f8cc: 0x242102a
    ctx->pc = 0x21f8ccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x21f8d0: 0x1440ff81
    ctx->pc = 0x21F8D0u;
    {
        const bool branch_taken_0x21f8d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21F8D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
        if (branch_taken_0x21f8d0) {
            ctx->pc = 0x21F6D8u;
            goto label_21f6d8;
        }
    }
    ctx->pc = 0x21F8D8u;
label_21f8d8:
    // 0x21f8d8: 0x40034800
    ctx->pc = 0x21f8d8u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x21f8dc: 0x3c02003a
    ctx->pc = 0x21f8dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x21f8e0: 0x8c4421d0
    ctx->pc = 0x21f8e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x21f8e4: 0x8c820078
    ctx->pc = 0x21f8e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x21f8e8: 0x621823
    ctx->pc = 0x21f8e8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21f8ec: 0x8c820070
    ctx->pc = 0x21f8ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x21f8f0: 0x621821
    ctx->pc = 0x21f8f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21f8f4: 0xac830070
    ctx->pc = 0x21f8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 3));
    // 0x21f8f8: 0x8c820074
    ctx->pc = 0x21f8f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x21f8fc: 0x24420001
    ctx->pc = 0x21f8fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x21f900: 0xac820074
    ctx->pc = 0x21f900u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 2));
    // 0x21f904: 0xdfbf0080
    ctx->pc = 0x21f904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21f908: 0xdfb70070
    ctx->pc = 0x21f908u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21f90c: 0xdfb60060
    ctx->pc = 0x21f90cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21f910: 0xdfb50050
    ctx->pc = 0x21f910u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21f914: 0xdfb40040
    ctx->pc = 0x21f914u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21f918: 0xdfb30030
    ctx->pc = 0x21f918u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21f91c: 0xdfb20020
    ctx->pc = 0x21f91cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21f920: 0xdfb10010
    ctx->pc = 0x21f920u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f924: 0xdfb00000
    ctx->pc = 0x21f924u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f928: 0x3e00008
    ctx->pc = 0x21F928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F92Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21F6D8u: goto label_21f6d8;
            case 0x21F714u: goto label_21f714;
            case 0x21F740u: goto label_21f740;
            case 0x21F7C4u: goto label_21f7c4;
            case 0x21F7C8u: goto label_21f7c8;
            case 0x21F7E4u: goto label_21f7e4;
            case 0x21F7E8u: goto label_21f7e8;
            case 0x21F804u: goto label_21f804;
            case 0x21F808u: goto label_21f808;
            case 0x21F824u: goto label_21f824;
            case 0x21F828u: goto label_21f828;
            case 0x21F840u: goto label_21f840;
            case 0x21F870u: goto label_21f870;
            case 0x21F8B4u: goto label_21f8b4;
            case 0x21F8C4u: goto label_21f8c4;
            case 0x21F8D8u: goto label_21f8d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21F930u;
}
