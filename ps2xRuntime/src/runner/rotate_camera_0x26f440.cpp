#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: rotate_camera
// Address: 0x26f440 - 0x26fa28
void rotate_camera_0x26f440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26f440u;

    // 0x26f440: 0x27bdffd0
    ctx->pc = 0x26f440u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26f444: 0xffbf0010
    ctx->pc = 0x26f444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26f448: 0xffb00000
    ctx->pc = 0x26f448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26f44c: 0xe7b40020
    ctx->pc = 0x26f44cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x26f450: 0x3c020034
    ctx->pc = 0x26f450u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26f454: 0x8c42f914
    ctx->pc = 0x26f454u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965524)));
    // 0x26f458: 0x14400079
    ctx->pc = 0x26F458u;
    {
        const bool branch_taken_0x26f458 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26F45Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 416));
        if (branch_taken_0x26f458) {
            ctx->pc = 0x26F640u;
            goto label_26f640;
        }
    }
    ctx->pc = 0x26F460u;
    // 0x26f460: 0x3c020034
    ctx->pc = 0x26f460u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26f464: 0x2443f8f4
    ctx->pc = 0x26f464u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294965492));
    // 0x26f468: 0xc442f8f4
    ctx->pc = 0x26f468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26f46c: 0x3c020032
    ctx->pc = 0x26f46cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x26f470: 0x8c420808
    ctx->pc = 0x26f470u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2056)));
    // 0x26f474: 0x10400167
    ctx->pc = 0x26F474u;
    {
        const bool branch_taken_0x26f474 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26F478u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x26f474) {
            ctx->pc = 0x26FA14u;
            goto label_26fa14;
        }
    }
    ctx->pc = 0x26F47Cu;
    // 0x26f47c: 0x8c42080c
    ctx->pc = 0x26f47cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
    // 0x26f480: 0x14400165
    ctx->pc = 0x26F480u;
    {
        const bool branch_taken_0x26f480 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26F484u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x26f480) {
            ctx->pc = 0x26FA18u;
            goto label_26fa18;
        }
    }
    ctx->pc = 0x26F488u;
    // 0x26f488: 0x3c02003c
    ctx->pc = 0x26f488u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26f48c: 0x8c4238e4
    ctx->pc = 0x26f48cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14564)));
    // 0x26f490: 0x18400027
    ctx->pc = 0x26F490u;
    {
        const bool branch_taken_0x26f490 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26F494u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x26f490) {
            ctx->pc = 0x26F530u;
            goto label_26f530;
        }
    }
    ctx->pc = 0x26F498u;
    // 0x26f498: 0xa0302d
    ctx->pc = 0x26f498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f49c: 0x3c030031
    ctx->pc = 0x26f49cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x26f4a0: 0x8c62ffbc
    ctx->pc = 0x26f4a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x26f4a4: 0x4400005
    ctx->pc = 0x26F4A4u;
    {
        const bool branch_taken_0x26f4a4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26F4A8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x26f4a4) {
            ctx->pc = 0x26F4BCu;
            goto label_26f4bc;
        }
    }
    ctx->pc = 0x26F4ACu;
    // 0x26f4ac: 0x44820800
    ctx->pc = 0x26f4acu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x26f4b0: 0x46800860
    ctx->pc = 0x26f4b0u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x26f4b4: 0x10000008
    ctx->pc = 0x26F4B4u;
    {
        const bool branch_taken_0x26f4b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x26f4b4) {
            ctx->pc = 0x26F4D8u;
            goto label_26f4d8;
        }
    }
    ctx->pc = 0x26F4BCu;
label_26f4bc:
    // 0x26f4bc: 0x8c820000
    ctx->pc = 0x26f4bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26f4c0: 0x30430001
    ctx->pc = 0x26f4c0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x26f4c4: 0x21042
    ctx->pc = 0x26f4c4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x26f4c8: 0x621825
    ctx->pc = 0x26f4c8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26f4cc: 0x44830800
    ctx->pc = 0x26f4ccu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x26f4d0: 0x46800860
    ctx->pc = 0x26f4d0u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x26f4d4: 0x46010840
    ctx->pc = 0x26f4d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_26f4d8:
    // 0x26f4d8: 0x3c013d56
    ctx->pc = 0x26f4d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15702 << 16));
    // 0x26f4dc: 0x34217750
    ctx->pc = 0x26f4dcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 30544));
    // 0x26f4e0: 0x44810000
    ctx->pc = 0x26f4e0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26f4e4: 0x46000802
    ctx->pc = 0x26f4e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26f4e8: 0xc4c10000
    ctx->pc = 0x26f4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f4ec: 0x46010000
    ctx->pc = 0x26f4ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26f4f0: 0xe4a00000
    ctx->pc = 0x26f4f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x26f4f4: 0x3c030034
    ctx->pc = 0x26f4f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x26f4f8: 0x2463e9c0
    ctx->pc = 0x26f4f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294961600));
    // 0x26f4fc: 0x3c020034
    ctx->pc = 0x26f4fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26f500: 0x8c42f8f0
    ctx->pc = 0x26f500u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965488)));
    // 0x26f504: 0x21080
    ctx->pc = 0x26f504u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x26f508: 0x431021
    ctx->pc = 0x26f508u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26f50c: 0xc4410000
    ctx->pc = 0x26f50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f510: 0x46011034
    ctx->pc = 0x26f510u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f514: 0x0
    ctx->pc = 0x26f514u;
    // NOP
    // 0x26f518: 0x45000044
    ctx->pc = 0x26F518u;
    {
        const bool branch_taken_0x26f518 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26F51Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26f518) {
            ctx->pc = 0x26F62Cu;
            goto label_26f62c;
        }
    }
    ctx->pc = 0x26F520u;
    // 0x26f520: 0xc440f8f4
    ctx->pc = 0x26f520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f524: 0x46000836
    ctx->pc = 0x26f524u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f528: 0x1000003b
    ctx->pc = 0x26F528u;
    {
        const bool branch_taken_0x26f528 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x26f528) {
            ctx->pc = 0x26F618u;
            goto label_26f618;
        }
    }
    ctx->pc = 0x26F530u;
label_26f530:
    // 0x26f530: 0x3c020034
    ctx->pc = 0x26f530u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26f534: 0x2445f8f4
    ctx->pc = 0x26f534u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294965492));
    // 0x26f538: 0xa0302d
    ctx->pc = 0x26f538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f53c: 0x3c030031
    ctx->pc = 0x26f53cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x26f540: 0x8c62ffbc
    ctx->pc = 0x26f540u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x26f544: 0x4400005
    ctx->pc = 0x26F544u;
    {
        const bool branch_taken_0x26f544 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26F548u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x26f544) {
            ctx->pc = 0x26F55Cu;
            goto label_26f55c;
        }
    }
    ctx->pc = 0x26F54Cu;
    // 0x26f54c: 0x44820000
    ctx->pc = 0x26f54cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x26f550: 0x46800020
    ctx->pc = 0x26f550u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x26f554: 0x10000008
    ctx->pc = 0x26F554u;
    {
        const bool branch_taken_0x26f554 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x26f554) {
            ctx->pc = 0x26F578u;
            goto label_26f578;
        }
    }
    ctx->pc = 0x26F55Cu;
label_26f55c:
    // 0x26f55c: 0x8c820000
    ctx->pc = 0x26f55cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26f560: 0x30430001
    ctx->pc = 0x26f560u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x26f564: 0x21042
    ctx->pc = 0x26f564u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x26f568: 0x621825
    ctx->pc = 0x26f568u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26f56c: 0x44830000
    ctx->pc = 0x26f56cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x26f570: 0x46800020
    ctx->pc = 0x26f570u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x26f574: 0x46000000
    ctx->pc = 0x26f574u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_26f578:
    // 0x26f578: 0x3c013d56
    ctx->pc = 0x26f578u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15702 << 16));
    // 0x26f57c: 0x34217750
    ctx->pc = 0x26f57cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 30544));
    // 0x26f580: 0x44810800
    ctx->pc = 0x26f580u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x26f584: 0x46010042
    ctx->pc = 0x26f584u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26f588: 0xc4c00000
    ctx->pc = 0x26f588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f58c: 0x46010001
    ctx->pc = 0x26f58cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x26f590: 0xe4a00000
    ctx->pc = 0x26f590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x26f594: 0x3c020034
    ctx->pc = 0x26f594u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26f598: 0x8c43f8f0
    ctx->pc = 0x26f598u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294965488)));
    // 0x26f59c: 0x24020002
    ctx->pc = 0x26f59cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x26f5a0: 0x14620010
    ctx->pc = 0x26F5A0u;
    {
        const bool branch_taken_0x26f5a0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x26F5A4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x26f5a0) {
            ctx->pc = 0x26F5E4u;
            goto label_26f5e4;
        }
    }
    ctx->pc = 0x26F5A8u;
    // 0x26f5a8: 0x3c01c049
    ctx->pc = 0x26f5a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x26f5ac: 0x34210fdb
    ctx->pc = 0x26f5acu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26f5b0: 0x44810800
    ctx->pc = 0x26f5b0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x26f5b4: 0x46020834
    ctx->pc = 0x26f5b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f5b8: 0x0
    ctx->pc = 0x26f5b8u;
    // NOP
    // 0x26f5bc: 0x4500001b
    ctx->pc = 0x26F5BCu;
    {
        const bool branch_taken_0x26f5bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26F5C0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x26f5bc) {
            ctx->pc = 0x26F62Cu;
            goto label_26f62c;
        }
    }
    ctx->pc = 0x26F5C4u;
    // 0x26f5c4: 0xc460f8f4
    ctx->pc = 0x26f5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f5c8: 0x46010036
    ctx->pc = 0x26f5c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f5cc: 0x0
    ctx->pc = 0x26f5ccu;
    // NOP
    // 0x26f5d0: 0x45000016
    ctx->pc = 0x26F5D0u;
    {
        const bool branch_taken_0x26f5d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26F5D4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26f5d0) {
            ctx->pc = 0x26F62Cu;
            goto label_26f62c;
        }
    }
    ctx->pc = 0x26F5D8u;
    // 0x26f5d8: 0xc440e9c8
    ctx->pc = 0x26f5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f5dc: 0x10000011
    ctx->pc = 0x26F5DCu;
    {
        const bool branch_taken_0x26f5dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26F5E0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294965492), bits); }
        if (branch_taken_0x26f5dc) {
            ctx->pc = 0x26F624u;
            goto label_26f624;
        }
    }
    ctx->pc = 0x26F5E4u;
label_26f5e4:
    // 0x26f5e4: 0x2463e9c0
    ctx->pc = 0x26f5e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294961600));
    // 0x26f5e8: 0x3c020034
    ctx->pc = 0x26f5e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26f5ec: 0x8c42f8f0
    ctx->pc = 0x26f5ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965488)));
    // 0x26f5f0: 0x21080
    ctx->pc = 0x26f5f0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x26f5f4: 0x431021
    ctx->pc = 0x26f5f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26f5f8: 0xc4410000
    ctx->pc = 0x26f5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f5fc: 0x46020834
    ctx->pc = 0x26f5fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f600: 0x0
    ctx->pc = 0x26f600u;
    // NOP
    // 0x26f604: 0x45000009
    ctx->pc = 0x26F604u;
    {
        const bool branch_taken_0x26f604 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26F608u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26f604) {
            ctx->pc = 0x26F62Cu;
            goto label_26f62c;
        }
    }
    ctx->pc = 0x26F60Cu;
    // 0x26f60c: 0xc440f8f4
    ctx->pc = 0x26f60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f610: 0x46010036
    ctx->pc = 0x26f610u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f614: 0x0
    ctx->pc = 0x26f614u;
    // NOP
label_26f618:
    // 0x26f618: 0x45000005
    ctx->pc = 0x26F618u;
    {
        const bool branch_taken_0x26f618 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26F61Cu;
        SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
        if (branch_taken_0x26f618) {
            ctx->pc = 0x26F630u;
            goto label_26f630;
        }
    }
    ctx->pc = 0x26F620u;
    // 0x26f620: 0xe441f8f4
    ctx->pc = 0x26f620u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965492), bits); }
label_26f624:
    // 0x26f624: 0x3c020032
    ctx->pc = 0x26f624u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x26f628: 0xac400808
    ctx->pc = 0x26f628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2056), GPR_U32(ctx, 0));
label_26f62c:
    // 0x26f62c: 0x3c100034
    ctx->pc = 0x26f62cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
label_26f630:
    // 0x26f630: 0xc0b5a1a
    ctx->pc = 0x26F630u;
    SET_GPR_U32(ctx, 31, 0x26F638u);
    ctx->pc = 0x26F634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D6868u;
    {
        const uint32_t __entryPc = ctx->pc;
        FixAngle_0x2d6868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F638u; }
    }
    if (ctx->pc != 0x26F638u) { return; }
    ctx->pc = 0x26F638u;
    // 0x26f638: 0x100000f6
    ctx->pc = 0x26F638u;
    {
        const bool branch_taken_0x26f638 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26F63Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294965492), bits); }
        if (branch_taken_0x26f638) {
            ctx->pc = 0x26FA14u;
            goto label_26fa14;
        }
    }
    ctx->pc = 0x26F640u;
label_26f640:
    // 0x26f640: 0x831818
    ctx->pc = 0x26f640u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26f644: 0x3c020034
    ctx->pc = 0x26f644u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26f648: 0x2442eb60
    ctx->pc = 0x26f648u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x26f64c: 0x628021
    ctx->pc = 0x26f64cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26f650: 0x3c020032
    ctx->pc = 0x26f650u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x26f654: 0x8c42080c
    ctx->pc = 0x26f654u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
    // 0x26f658: 0x144000ee
    ctx->pc = 0x26F658u;
    {
        const bool branch_taken_0x26f658 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26F65Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        if (branch_taken_0x26f658) {
            ctx->pc = 0x26FA14u;
            goto label_26fa14;
        }
    }
    ctx->pc = 0x26F660u;
    // 0x26f660: 0x3c020034
    ctx->pc = 0x26f660u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26f664: 0x8c42fa00
    ctx->pc = 0x26f664u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965760)));
    // 0x26f668: 0x144000eb
    ctx->pc = 0x26F668u;
    {
        const bool branch_taken_0x26f668 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26F66Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x26f668) {
            ctx->pc = 0x26FA18u;
            goto label_26fa18;
        }
    }
    ctx->pc = 0x26F670u;
    // 0x26f670: 0x3c03003c
    ctx->pc = 0x26f670u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x26f674: 0x24623910
    ctx->pc = 0x26f674u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 14608));
    // 0x26f678: 0xc4400004
    ctx->pc = 0x26f678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f67c: 0xe4400008
    ctx->pc = 0x26f67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x26f680: 0xc4603910
    ctx->pc = 0x26f680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 14608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f684: 0xe4400004
    ctx->pc = 0x26f684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x26f688: 0x3c013eaa
    ctx->pc = 0x26f688u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16042 << 16));
    // 0x26f68c: 0x3421aaab
    ctx->pc = 0x26f68cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 43691));
    // 0x26f690: 0x44816000
    ctx->pc = 0x26f690u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x26f694: 0xc09bb2e
    ctx->pc = 0x26F694u;
    SET_GPR_U32(ctx, 31, 0x26F69Cu);
    ctx->pc = 0x26F698u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 14608), bits); }
    ctx->pc = 0x26ECB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        receive_yaw_0x26ecb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F69Cu; }
    }
    if (ctx->pc != 0x26F69Cu) { return; }
    ctx->pc = 0x26F69Cu;
    // 0x26f69c: 0x3c020034
    ctx->pc = 0x26f69cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26f6a0: 0xc441f8f4
    ctx->pc = 0x26f6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f6a4: 0xc60000b4
    ctx->pc = 0x26f6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f6a8: 0x46000841
    ctx->pc = 0x26f6a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26f6ac: 0x46000845
    ctx->pc = 0x26f6acu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x26f6b0: 0x3c014049
    ctx->pc = 0x26f6b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x26f6b4: 0x34210fdb
    ctx->pc = 0x26f6b4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26f6b8: 0x44810000
    ctx->pc = 0x26f6b8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26f6bc: 0x46010034
    ctx->pc = 0x26f6bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f6c0: 0x45000005
    ctx->pc = 0x26F6C0u;
    {
        const bool branch_taken_0x26f6c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f6c0) {
            ctx->pc = 0x26F6D8u;
            goto label_26f6d8;
        }
    }
    ctx->pc = 0x26F6C8u;
    // 0x26f6c8: 0x3c0140c9
    ctx->pc = 0x26f6c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x26f6cc: 0x34210fdb
    ctx->pc = 0x26f6ccu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26f6d0: 0x44810000
    ctx->pc = 0x26f6d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26f6d4: 0x46010041
    ctx->pc = 0x26f6d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_26f6d8:
    // 0x26f6d8: 0x3c013c4c
    ctx->pc = 0x26f6d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15436 << 16));
    // 0x26f6dc: 0x3421cccd
    ctx->pc = 0x26f6dcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x26f6e0: 0x44810000
    ctx->pc = 0x26f6e0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26f6e4: 0x46000842
    ctx->pc = 0x26f6e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26f6e8: 0x3c013b8e
    ctx->pc = 0x26f6e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15246 << 16));
    // 0x26f6ec: 0x3421fa36
    ctx->pc = 0x26f6ecu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 64054));
    // 0x26f6f0: 0x44810000
    ctx->pc = 0x26f6f0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26f6f4: 0x46000834
    ctx->pc = 0x26f6f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f6f8: 0x0
    ctx->pc = 0x26f6f8u;
    // NOP
    // 0x26f6fc: 0x45030001
    ctx->pc = 0x26F6FCu;
    {
        const bool branch_taken_0x26f6fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f6fc) {
            ctx->pc = 0x26F700u;
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x26F704u;
            goto label_26f704;
        }
    }
    ctx->pc = 0x26F704u;
label_26f704:
    // 0x26f704: 0x3c030031
    ctx->pc = 0x26f704u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x26f708: 0x8c62ffbc
    ctx->pc = 0x26f708u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x26f70c: 0x4400005
    ctx->pc = 0x26F70Cu;
    {
        const bool branch_taken_0x26f70c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26F710u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x26f70c) {
            ctx->pc = 0x26F724u;
            goto label_26f724;
        }
    }
    ctx->pc = 0x26F714u;
    // 0x26f714: 0x44820000
    ctx->pc = 0x26f714u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x26f718: 0x46800020
    ctx->pc = 0x26f718u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x26f71c: 0x10000009
    ctx->pc = 0x26F71Cu;
    {
        const bool branch_taken_0x26f71c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26F720u;
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x26f71c) {
            ctx->pc = 0x26F744u;
            goto label_26f744;
        }
    }
    ctx->pc = 0x26F724u;
label_26f724:
    // 0x26f724: 0x8c820000
    ctx->pc = 0x26f724u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26f728: 0x30430001
    ctx->pc = 0x26f728u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x26f72c: 0x21042
    ctx->pc = 0x26f72cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x26f730: 0x621825
    ctx->pc = 0x26f730u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26f734: 0x44830000
    ctx->pc = 0x26f734u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x26f738: 0x46800020
    ctx->pc = 0x26f738u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x26f73c: 0x46000000
    ctx->pc = 0x26f73cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x26f740: 0x46000842
    ctx->pc = 0x26f740u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_26f744:
    // 0x26f744: 0x3c02003c
    ctx->pc = 0x26f744u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26f748: 0x8c4238e4
    ctx->pc = 0x26f748u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14564)));
    // 0x26f74c: 0x18400041
    ctx->pc = 0x26F74Cu;
    {
        const bool branch_taken_0x26f74c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26F750u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26f74c) {
            ctx->pc = 0x26F854u;
            goto label_26f854;
        }
    }
    ctx->pc = 0x26F754u;
    // 0x26f754: 0xc60200b4
    ctx->pc = 0x26f754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26f758: 0xc440f8f4
    ctx->pc = 0x26f758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f75c: 0x46001032
    ctx->pc = 0x26f75cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f760: 0x0
    ctx->pc = 0x26f760u;
    // NOP
    // 0x26f764: 0x4503003c
    ctx->pc = 0x26F764u;
    {
        const bool branch_taken_0x26f764 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f764) {
            ctx->pc = 0x26F768u;
            SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
            ctx->pc = 0x26F858u;
            goto label_26f858;
        }
    }
    ctx->pc = 0x26F76Cu;
    // 0x26f76c: 0x46020840
    ctx->pc = 0x26f76cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x26f770: 0x3c014049
    ctx->pc = 0x26f770u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x26f774: 0x34210fdb
    ctx->pc = 0x26f774u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26f778: 0x44810000
    ctx->pc = 0x26f778u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26f77c: 0x46010034
    ctx->pc = 0x26f77cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f780: 0x0
    ctx->pc = 0x26f780u;
    // NOP
    // 0x26f784: 0x45000006
    ctx->pc = 0x26F784u;
    {
        const bool branch_taken_0x26f784 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26F788u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
        if (branch_taken_0x26f784) {
            ctx->pc = 0x26F7A0u;
            goto label_26f7a0;
        }
    }
    ctx->pc = 0x26F78Cu;
    // 0x26f78c: 0x3c0140c9
    ctx->pc = 0x26f78cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x26f790: 0x34210fdb
    ctx->pc = 0x26f790u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26f794: 0x44810000
    ctx->pc = 0x26f794u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26f798: 0x1000000d
    ctx->pc = 0x26F798u;
    {
        const bool branch_taken_0x26f798 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26F79Cu;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x26f798) {
            ctx->pc = 0x26F7D0u;
            goto label_26f7d0;
        }
    }
    ctx->pc = 0x26F7A0u;
label_26f7a0:
    // 0x26f7a0: 0xc60100b4
    ctx->pc = 0x26f7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f7a4: 0x3c01c049
    ctx->pc = 0x26f7a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x26f7a8: 0x34210fdb
    ctx->pc = 0x26f7a8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26f7ac: 0x44810000
    ctx->pc = 0x26f7acu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26f7b0: 0x46000836
    ctx->pc = 0x26f7b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f7b4: 0x0
    ctx->pc = 0x26f7b4u;
    // NOP
    // 0x26f7b8: 0x45020005
    ctx->pc = 0x26F7B8u;
    {
        const bool branch_taken_0x26f7b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f7b8) {
            ctx->pc = 0x26F7BCu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x26F7D0u;
            goto label_26f7d0;
        }
    }
    ctx->pc = 0x26F7C0u;
    // 0x26f7c0: 0x3c0140c9
    ctx->pc = 0x26f7c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x26f7c4: 0x34210fdb
    ctx->pc = 0x26f7c4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26f7c8: 0x44810000
    ctx->pc = 0x26f7c8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26f7cc: 0x46000800
    ctx->pc = 0x26f7ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26f7d0:
    // 0x26f7d0: 0x46140034
    ctx->pc = 0x26f7d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f7d4: 0x0
    ctx->pc = 0x26f7d4u;
    // NOP
    // 0x26f7d8: 0x4500000d
    ctx->pc = 0x26F7D8u;
    {
        const bool branch_taken_0x26f7d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26F7DCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
        if (branch_taken_0x26f7d8) {
            ctx->pc = 0x26F810u;
            goto label_26f810;
        }
    }
    ctx->pc = 0x26F7E0u;
    // 0x26f7e0: 0x3c020034
    ctx->pc = 0x26f7e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26f7e4: 0xc441f8f4
    ctx->pc = 0x26f7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f7e8: 0x4601a034
    ctx->pc = 0x26f7e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f7ec: 0x0
    ctx->pc = 0x26f7ecu;
    // NOP
    // 0x26f7f0: 0x4503005d
    ctx->pc = 0x26F7F0u;
    {
        const bool branch_taken_0x26f7f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f7f0) {
            ctx->pc = 0x26F7F4u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x26F968u;
            goto label_26f968;
        }
    }
    ctx->pc = 0x26F7F8u;
    // 0x26f7f8: 0x46000836
    ctx->pc = 0x26f7f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f7fc: 0x0
    ctx->pc = 0x26f7fcu;
    // NOP
    // 0x26f800: 0x4500005c
    ctx->pc = 0x26F800u;
    {
        const bool branch_taken_0x26f800 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26F804u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x26f800) {
            ctx->pc = 0x26F974u;
            goto label_26f974;
        }
    }
    ctx->pc = 0x26F808u;
    // 0x26f808: 0x10000058
    ctx->pc = 0x26F808u;
    {
        const bool branch_taken_0x26f808 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26F80Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
        if (branch_taken_0x26f808) {
            ctx->pc = 0x26F96Cu;
            goto label_26f96c;
        }
    }
    ctx->pc = 0x26F810u;
label_26f810:
    // 0x26f810: 0x3c020034
    ctx->pc = 0x26f810u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26f814: 0xc60300b4
    ctx->pc = 0x26f814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26f818: 0xc442f8f4
    ctx->pc = 0x26f818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26f81c: 0x46021841
    ctx->pc = 0x26f81cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x26f820: 0x3c014049
    ctx->pc = 0x26f820u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x26f824: 0x34210fdb
    ctx->pc = 0x26f824u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26f828: 0x44810000
    ctx->pc = 0x26f828u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26f82c: 0x46000834
    ctx->pc = 0x26f82cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f830: 0x0
    ctx->pc = 0x26f830u;
    // NOP
    // 0x26f834: 0x45020050
    ctx->pc = 0x26F834u;
    {
        const bool branch_taken_0x26f834 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f834) {
            ctx->pc = 0x26F838u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x26F978u;
            goto label_26f978;
        }
    }
    ctx->pc = 0x26F83Cu;
    // 0x26f83c: 0x46031036
    ctx->pc = 0x26f83cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f840: 0x0
    ctx->pc = 0x26f840u;
    // NOP
    // 0x26f844: 0x4502004c
    ctx->pc = 0x26F844u;
    {
        const bool branch_taken_0x26f844 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f844) {
            ctx->pc = 0x26F848u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x26F978u;
            goto label_26f978;
        }
    }
    ctx->pc = 0x26F84Cu;
    // 0x26f84c: 0x10000047
    ctx->pc = 0x26F84Cu;
    {
        const bool branch_taken_0x26f84c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26F850u;
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
        if (branch_taken_0x26f84c) {
            ctx->pc = 0x26F96Cu;
            goto label_26f96c;
        }
    }
    ctx->pc = 0x26F854u;
label_26f854:
    // 0x26f854: 0x3c02003c
    ctx->pc = 0x26f854u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_26f858:
    // 0x26f858: 0x8c4238e4
    ctx->pc = 0x26f858u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14564)));
    // 0x26f85c: 0x4410041
    ctx->pc = 0x26F85Cu;
    {
        const bool branch_taken_0x26f85c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26F860u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26f85c) {
            ctx->pc = 0x26F964u;
            goto label_26f964;
        }
    }
    ctx->pc = 0x26F864u;
    // 0x26f864: 0xc60200b4
    ctx->pc = 0x26f864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26f868: 0xc440f8f4
    ctx->pc = 0x26f868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f86c: 0x46001032
    ctx->pc = 0x26f86cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f870: 0x0
    ctx->pc = 0x26f870u;
    // NOP
    // 0x26f874: 0x4503003d
    ctx->pc = 0x26F874u;
    {
        const bool branch_taken_0x26f874 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f874) {
            ctx->pc = 0x26F878u;
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
            ctx->pc = 0x26F96Cu;
            goto label_26f96c;
        }
    }
    ctx->pc = 0x26F87Cu;
    // 0x26f87c: 0x46011041
    ctx->pc = 0x26f87cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x26f880: 0x3c014049
    ctx->pc = 0x26f880u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x26f884: 0x34210fdb
    ctx->pc = 0x26f884u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26f888: 0x44810000
    ctx->pc = 0x26f888u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26f88c: 0x46010034
    ctx->pc = 0x26f88cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f890: 0x0
    ctx->pc = 0x26f890u;
    // NOP
    // 0x26f894: 0x45000006
    ctx->pc = 0x26F894u;
    {
        const bool branch_taken_0x26f894 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26F898u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
        if (branch_taken_0x26f894) {
            ctx->pc = 0x26F8B0u;
            goto label_26f8b0;
        }
    }
    ctx->pc = 0x26F89Cu;
    // 0x26f89c: 0x3c0140c9
    ctx->pc = 0x26f89cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x26f8a0: 0x34210fdb
    ctx->pc = 0x26f8a0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26f8a4: 0x44810000
    ctx->pc = 0x26f8a4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26f8a8: 0x1000000d
    ctx->pc = 0x26F8A8u;
    {
        const bool branch_taken_0x26f8a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26F8ACu;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x26f8a8) {
            ctx->pc = 0x26F8E0u;
            goto label_26f8e0;
        }
    }
    ctx->pc = 0x26F8B0u;
label_26f8b0:
    // 0x26f8b0: 0xc60100b4
    ctx->pc = 0x26f8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f8b4: 0x3c01c049
    ctx->pc = 0x26f8b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x26f8b8: 0x34210fdb
    ctx->pc = 0x26f8b8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26f8bc: 0x44810000
    ctx->pc = 0x26f8bcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26f8c0: 0x46000836
    ctx->pc = 0x26f8c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f8c4: 0x0
    ctx->pc = 0x26f8c4u;
    // NOP
    // 0x26f8c8: 0x45020005
    ctx->pc = 0x26F8C8u;
    {
        const bool branch_taken_0x26f8c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f8c8) {
            ctx->pc = 0x26F8CCu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x26F8E0u;
            goto label_26f8e0;
        }
    }
    ctx->pc = 0x26F8D0u;
    // 0x26f8d0: 0x3c0140c9
    ctx->pc = 0x26f8d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x26f8d4: 0x34210fdb
    ctx->pc = 0x26f8d4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26f8d8: 0x44810000
    ctx->pc = 0x26f8d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26f8dc: 0x46000800
    ctx->pc = 0x26f8dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26f8e0:
    // 0x26f8e0: 0x4600a034
    ctx->pc = 0x26f8e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f8e4: 0x0
    ctx->pc = 0x26f8e4u;
    // NOP
    // 0x26f8e8: 0x4500000d
    ctx->pc = 0x26F8E8u;
    {
        const bool branch_taken_0x26f8e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26F8ECu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
        if (branch_taken_0x26f8e8) {
            ctx->pc = 0x26F920u;
            goto label_26f920;
        }
    }
    ctx->pc = 0x26F8F0u;
    // 0x26f8f0: 0x3c020034
    ctx->pc = 0x26f8f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26f8f4: 0xc441f8f4
    ctx->pc = 0x26f8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f8f8: 0x46140834
    ctx->pc = 0x26f8f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f8fc: 0x0
    ctx->pc = 0x26f8fcu;
    // NOP
    // 0x26f900: 0x45030019
    ctx->pc = 0x26F900u;
    {
        const bool branch_taken_0x26f900 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f900) {
            ctx->pc = 0x26F904u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x26F968u;
            goto label_26f968;
        }
    }
    ctx->pc = 0x26F908u;
    // 0x26f908: 0x46010036
    ctx->pc = 0x26f908u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f90c: 0x0
    ctx->pc = 0x26f90cu;
    // NOP
    // 0x26f910: 0x45000018
    ctx->pc = 0x26F910u;
    {
        const bool branch_taken_0x26f910 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26F914u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x26f910) {
            ctx->pc = 0x26F974u;
            goto label_26f974;
        }
    }
    ctx->pc = 0x26F918u;
    // 0x26f918: 0x10000014
    ctx->pc = 0x26F918u;
    {
        const bool branch_taken_0x26f918 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26F91Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
        if (branch_taken_0x26f918) {
            ctx->pc = 0x26F96Cu;
            goto label_26f96c;
        }
    }
    ctx->pc = 0x26F920u;
label_26f920:
    // 0x26f920: 0x3c020034
    ctx->pc = 0x26f920u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26f924: 0xc442f8f4
    ctx->pc = 0x26f924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26f928: 0xc60300b4
    ctx->pc = 0x26f928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26f92c: 0x46031041
    ctx->pc = 0x26f92cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x26f930: 0x3c014049
    ctx->pc = 0x26f930u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x26f934: 0x34210fdb
    ctx->pc = 0x26f934u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26f938: 0x44810000
    ctx->pc = 0x26f938u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26f93c: 0x46000834
    ctx->pc = 0x26f93cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f940: 0x0
    ctx->pc = 0x26f940u;
    // NOP
    // 0x26f944: 0x4502000c
    ctx->pc = 0x26F944u;
    {
        const bool branch_taken_0x26f944 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f944) {
            ctx->pc = 0x26F948u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x26F978u;
            goto label_26f978;
        }
    }
    ctx->pc = 0x26F94Cu;
    // 0x26f94c: 0x46021836
    ctx->pc = 0x26f94cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f950: 0x0
    ctx->pc = 0x26f950u;
    // NOP
    // 0x26f954: 0x45020008
    ctx->pc = 0x26F954u;
    {
        const bool branch_taken_0x26f954 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f954) {
            ctx->pc = 0x26F958u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x26F978u;
            goto label_26f978;
        }
    }
    ctx->pc = 0x26F95Cu;
    // 0x26f95c: 0x10000003
    ctx->pc = 0x26F95Cu;
    {
        const bool branch_taken_0x26f95c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26F960u;
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
        if (branch_taken_0x26f95c) {
            ctx->pc = 0x26F96Cu;
            goto label_26f96c;
        }
    }
    ctx->pc = 0x26F964u;
label_26f964:
    // 0x26f964: 0xc440f8f4
    ctx->pc = 0x26f964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26f968:
    // 0x26f968: 0xe60000b4
    ctx->pc = 0x26f968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
label_26f96c:
    // 0x26f96c: 0x3c02003c
    ctx->pc = 0x26f96cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26f970: 0xac4038e4
    ctx->pc = 0x26f970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14564), GPR_U32(ctx, 0));
label_26f974:
    // 0x26f974: 0xc60000b4
    ctx->pc = 0x26f974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26f978:
    // 0x26f978: 0x44800800
    ctx->pc = 0x26f978u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x26f97c: 0x46000834
    ctx->pc = 0x26f97cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f980: 0x0
    ctx->pc = 0x26f980u;
    // NOP
    // 0x26f984: 0x4502000e
    ctx->pc = 0x26F984u;
    {
        const bool branch_taken_0x26f984 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f984) {
            ctx->pc = 0x26F988u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x26F9C0u;
            goto label_26f9c0;
        }
    }
    ctx->pc = 0x26F98Cu;
    // 0x26f98c: 0x3c03003c
    ctx->pc = 0x26f98cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x26f990: 0x24623910
    ctx->pc = 0x26f990u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 14608));
    // 0x26f994: 0xc4400004
    ctx->pc = 0x26f994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f998: 0x46000834
    ctx->pc = 0x26f998u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f99c: 0x0
    ctx->pc = 0x26f99cu;
    // NOP
    // 0x26f9a0: 0x45000005
    ctx->pc = 0x26F9A0u;
    {
        const bool branch_taken_0x26f9a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26F9A4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 14608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x26f9a0) {
            ctx->pc = 0x26F9B8u;
            goto label_26f9b8;
        }
    }
    ctx->pc = 0x26F9A8u;
    // 0x26f9a8: 0x46010034
    ctx->pc = 0x26f9a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f9ac: 0x0
    ctx->pc = 0x26f9acu;
    // NOP
    // 0x26f9b0: 0x45030014
    ctx->pc = 0x26F9B0u;
    {
        const bool branch_taken_0x26f9b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f9b0) {
            ctx->pc = 0x26F9B4u;
            SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
            ctx->pc = 0x26FA04u;
            goto label_26fa04;
        }
    }
    ctx->pc = 0x26F9B8u;
label_26f9b8:
    // 0x26f9b8: 0xc60000b4
    ctx->pc = 0x26f9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f9bc: 0x44800800
    ctx->pc = 0x26f9bcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
label_26f9c0:
    // 0x26f9c0: 0x46010034
    ctx->pc = 0x26f9c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f9c4: 0x0
    ctx->pc = 0x26f9c4u;
    // NOP
    // 0x26f9c8: 0x45000013
    ctx->pc = 0x26F9C8u;
    {
        const bool branch_taken_0x26f9c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26F9CCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x26f9c8) {
            ctx->pc = 0x26FA18u;
            goto label_26fa18;
        }
    }
    ctx->pc = 0x26F9D0u;
    // 0x26f9d0: 0x3c03003c
    ctx->pc = 0x26f9d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x26f9d4: 0x24623910
    ctx->pc = 0x26f9d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 14608));
    // 0x26f9d8: 0xc4400004
    ctx->pc = 0x26f9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f9dc: 0x46010034
    ctx->pc = 0x26f9dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f9e0: 0x0
    ctx->pc = 0x26f9e0u;
    // NOP
    // 0x26f9e4: 0x4502000d
    ctx->pc = 0x26F9E4u;
    {
        const bool branch_taken_0x26f9e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f9e4) {
            ctx->pc = 0x26F9E8u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x26FA1Cu;
            goto label_26fa1c;
        }
    }
    ctx->pc = 0x26F9ECu;
    // 0x26f9ec: 0xc4603910
    ctx->pc = 0x26f9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 14608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f9f0: 0x46000834
    ctx->pc = 0x26f9f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f9f4: 0x0
    ctx->pc = 0x26f9f4u;
    // NOP
    // 0x26f9f8: 0x45020008
    ctx->pc = 0x26F9F8u;
    {
        const bool branch_taken_0x26f9f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f9f8) {
            ctx->pc = 0x26F9FCu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x26FA1Cu;
            goto label_26fa1c;
        }
    }
    ctx->pc = 0x26FA00u;
    // 0x26fa00: 0x3c020034
    ctx->pc = 0x26fa00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_26fa04:
    // 0x26fa04: 0xc440f8f4
    ctx->pc = 0x26fa04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26fa08: 0xe60000b4
    ctx->pc = 0x26fa08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
    // 0x26fa0c: 0x3c02003c
    ctx->pc = 0x26fa0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26fa10: 0xac4038e4
    ctx->pc = 0x26fa10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14564), GPR_U32(ctx, 0));
label_26fa14:
    // 0x26fa14: 0xdfbf0010
    ctx->pc = 0x26fa14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26fa18:
    // 0x26fa18: 0xdfb00000
    ctx->pc = 0x26fa18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26fa1c:
    // 0x26fa1c: 0xc7b40020
    ctx->pc = 0x26fa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26fa20: 0x3e00008
    ctx->pc = 0x26FA20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FA24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26F4BCu: goto label_26f4bc;
            case 0x26F4D8u: goto label_26f4d8;
            case 0x26F530u: goto label_26f530;
            case 0x26F55Cu: goto label_26f55c;
            case 0x26F578u: goto label_26f578;
            case 0x26F5E4u: goto label_26f5e4;
            case 0x26F618u: goto label_26f618;
            case 0x26F624u: goto label_26f624;
            case 0x26F62Cu: goto label_26f62c;
            case 0x26F630u: goto label_26f630;
            case 0x26F640u: goto label_26f640;
            case 0x26F6D8u: goto label_26f6d8;
            case 0x26F704u: goto label_26f704;
            case 0x26F724u: goto label_26f724;
            case 0x26F744u: goto label_26f744;
            case 0x26F7A0u: goto label_26f7a0;
            case 0x26F7D0u: goto label_26f7d0;
            case 0x26F810u: goto label_26f810;
            case 0x26F854u: goto label_26f854;
            case 0x26F858u: goto label_26f858;
            case 0x26F8B0u: goto label_26f8b0;
            case 0x26F8E0u: goto label_26f8e0;
            case 0x26F920u: goto label_26f920;
            case 0x26F964u: goto label_26f964;
            case 0x26F968u: goto label_26f968;
            case 0x26F96Cu: goto label_26f96c;
            case 0x26F974u: goto label_26f974;
            case 0x26F978u: goto label_26f978;
            case 0x26F9B8u: goto label_26f9b8;
            case 0x26F9C0u: goto label_26f9c0;
            case 0x26FA04u: goto label_26fa04;
            case 0x26FA14u: goto label_26fa14;
            case 0x26FA18u: goto label_26fa18;
            case 0x26FA1Cu: goto label_26fa1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26FA28u;
}
