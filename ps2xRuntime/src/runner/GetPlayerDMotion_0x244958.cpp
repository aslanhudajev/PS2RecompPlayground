#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetPlayerDMotion
// Address: 0x244958 - 0x244f9c
void GetPlayerDMotion_0x244958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x244958u;

    // 0x244958: 0x27bdff90
    ctx->pc = 0x244958u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x24495c: 0xffbf0030
    ctx->pc = 0x24495cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x244960: 0xffb20020
    ctx->pc = 0x244960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x244964: 0xffb10010
    ctx->pc = 0x244964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x244968: 0xffb00000
    ctx->pc = 0x244968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24496c: 0xe7b90068
    ctx->pc = 0x24496cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x244970: 0xe7b80060
    ctx->pc = 0x244970u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x244974: 0xe7b70058
    ctx->pc = 0x244974u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x244978: 0xe7b60050
    ctx->pc = 0x244978u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x24497c: 0xe7b50048
    ctx->pc = 0x24497cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x244980: 0xe7b40040
    ctx->pc = 0x244980u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x244984: 0x80902d
    ctx->pc = 0x244984u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244988: 0x8e430000
    ctx->pc = 0x244988u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24498c: 0x2402003c
    ctx->pc = 0x24498cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x244990: 0x621818
    ctx->pc = 0x244990u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x244994: 0x3c020031
    ctx->pc = 0x244994u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x244998: 0x24421b90
    ctx->pc = 0x244998u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7056));
    // 0x24499c: 0x628821
    ctx->pc = 0x24499cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2449a0: 0xc620001c
    ctx->pc = 0x2449a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2449a4: 0x46006500
    ctx->pc = 0x2449a4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2449a8: 0xc640086c
    ctx->pc = 0x2449a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2449ac: 0x4600a501
    ctx->pc = 0x2449acu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2449b0: 0x3c014049
    ctx->pc = 0x2449b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x2449b4: 0x34210fdb
    ctx->pc = 0x2449b4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2449b8: 0x44810000
    ctx->pc = 0x2449b8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2449bc: 0x46140034
    ctx->pc = 0x2449bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2449c0: 0x45000006
    ctx->pc = 0x2449C0u;
    {
        const bool branch_taken_0x2449c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2449c0) {
            ctx->pc = 0x2449DCu;
            goto label_2449dc;
        }
    }
    ctx->pc = 0x2449C8u;
    // 0x2449c8: 0x3c0140c9
    ctx->pc = 0x2449c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2449cc: 0x34210fdb
    ctx->pc = 0x2449ccu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2449d0: 0x44810000
    ctx->pc = 0x2449d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2449d4: 0x10000016
    ctx->pc = 0x2449D4u;
    {
        const bool branch_taken_0x2449d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2449D8u;
        ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x2449d4) {
            ctx->pc = 0x244A30u;
            goto label_244a30;
        }
    }
    ctx->pc = 0x2449DCu;
label_2449dc:
    // 0x2449dc: 0x3c01c049
    ctx->pc = 0x2449dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x2449e0: 0x34210fdb
    ctx->pc = 0x2449e0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2449e4: 0x44810000
    ctx->pc = 0x2449e4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2449e8: 0x4600a036
    ctx->pc = 0x2449e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2449ec: 0x0
    ctx->pc = 0x2449ecu;
    // NOP
    // 0x2449f0: 0x4502000f
    ctx->pc = 0x2449F0u;
    {
        const bool branch_taken_0x2449f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2449f0) {
            ctx->pc = 0x2449F4u;
            ctx->f[0] = FPU_MOV_S(ctx->f[20]);
            ctx->pc = 0x244A30u;
            goto label_244a30;
        }
    }
    ctx->pc = 0x2449F8u;
    // 0x2449f8: 0x3c0140c9
    ctx->pc = 0x2449f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2449fc: 0x34210fdb
    ctx->pc = 0x2449fcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x244a00: 0x44810000
    ctx->pc = 0x244a00u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x244a04: 0x1000000a
    ctx->pc = 0x244A04u;
    {
        const bool branch_taken_0x244a04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x244A08u;
        ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x244a04) {
            ctx->pc = 0x244A30u;
            goto label_244a30;
        }
    }
    ctx->pc = 0x244A0Cu;
label_244a0c:
    // 0x244a0c: 0x24032b00
    ctx->pc = 0x244a0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x244a10: 0x431818
    ctx->pc = 0x244a10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x244a14: 0x3c020032
    ctx->pc = 0x244a14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x244a18: 0x24421bc0
    ctx->pc = 0x244a18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x244a1c: 0x621821
    ctx->pc = 0x244a1cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x244a20: 0x10000121
    ctx->pc = 0x244A20u;
    {
        const bool branch_taken_0x244a20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x244A24u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 1684), GPR_U32(ctx, 3));
        if (branch_taken_0x244a20) {
            ctx->pc = 0x244EA8u;
            goto label_244ea8;
        }
    }
    ctx->pc = 0x244A28u;
label_244a28:
    // 0x244a28: 0x1000011f
    ctx->pc = 0x244A28u;
    {
        const bool branch_taken_0x244a28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x244A2Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 13));
        if (branch_taken_0x244a28) {
            ctx->pc = 0x244EA8u;
            goto label_244ea8;
        }
    }
    ctx->pc = 0x244A30u;
label_244a30:
    // 0x244a30: 0x8e42080c
    ctx->pc = 0x244a30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2060)));
    // 0x244a34: 0x1040000b
    ctx->pc = 0x244A34u;
    {
        const bool branch_taken_0x244a34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x244A38u;
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x244a34) {
            ctx->pc = 0x244A64u;
            goto label_244a64;
        }
    }
    ctx->pc = 0x244A3Cu;
    // 0x244a3c: 0x3c020036
    ctx->pc = 0x244a3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x244a40: 0x8c42d934
    ctx->pc = 0x244a40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x244a44: 0x4400007
    ctx->pc = 0x244A44u;
    {
        const bool branch_taken_0x244a44 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x244A48u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294964991));
        if (branch_taken_0x244a44) {
            ctx->pc = 0x244A64u;
            goto label_244a64;
        }
    }
    ctx->pc = 0x244A4Cu;
    // 0x244a4c: 0x8e220008
    ctx->pc = 0x244a4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x244a50: 0x431024
    ctx->pc = 0x244a50u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x244a54: 0xae220008
    ctx->pc = 0x244a54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x244a58: 0x8e220004
    ctx->pc = 0x244a58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x244a5c: 0x431024
    ctx->pc = 0x244a5cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x244a60: 0xae220004
    ctx->pc = 0x244a60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_244a64:
    // 0x244a64: 0x8e420138
    ctx->pc = 0x244a64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 312)));
    // 0x244a68: 0x30420400
    ctx->pc = 0x244a68u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1024));
    // 0x244a6c: 0x10400009
    ctx->pc = 0x244A6Cu;
    {
        const bool branch_taken_0x244a6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x244A70u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x244a6c) {
            ctx->pc = 0x244A94u;
            goto label_244a94;
        }
    }
    ctx->pc = 0x244A74u;
    // 0x244a74: 0x8e230004
    ctx->pc = 0x244a74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x244a78: 0x30620400
    ctx->pc = 0x244a78u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1024));
    // 0x244a7c: 0x10400004
    ctx->pc = 0x244A7Cu;
    {
        const bool branch_taken_0x244a7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x244A80u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294966271));
        if (branch_taken_0x244a7c) {
            ctx->pc = 0x244A90u;
            goto label_244a90;
        }
    }
    ctx->pc = 0x244A84u;
    // 0x244a84: 0x621024
    ctx->pc = 0x244a84u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x244a88: 0x34420200
    ctx->pc = 0x244a88u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 512));
    // 0x244a8c: 0xae220004
    ctx->pc = 0x244a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_244a90:
    // 0x244a90: 0x3c020031
    ctx->pc = 0x244a90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_244a94:
    // 0x244a94: 0xdc420e28
    ctx->pc = 0x244a94u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x244a98: 0x30420010
    ctx->pc = 0x244a98u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x244a9c: 0x54400006
    ctx->pc = 0x244A9Cu;
    {
        const bool branch_taken_0x244a9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x244a9c) {
            ctx->pc = 0x244AA0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->pc = 0x244AB8u;
            goto label_244ab8;
        }
    }
    ctx->pc = 0x244AA4u;
    // 0x244aa4: 0x3c020031
    ctx->pc = 0x244aa4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x244aa8: 0x8c420000
    ctx->pc = 0x244aa8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x244aac: 0x10400009
    ctx->pc = 0x244AACu;
    {
        const bool branch_taken_0x244aac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x244AB0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x244aac) {
            ctx->pc = 0x244AD4u;
            goto label_244ad4;
        }
    }
    ctx->pc = 0x244AB4u;
    // 0x244ab4: 0x8e230008
    ctx->pc = 0x244ab4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_244ab8:
    // 0x244ab8: 0x30622000
    ctx->pc = 0x244ab8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 8192));
    // 0x244abc: 0x10400004
    ctx->pc = 0x244ABCu;
    {
        const bool branch_taken_0x244abc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x244AC0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294959103));
        if (branch_taken_0x244abc) {
            ctx->pc = 0x244AD0u;
            goto label_244ad0;
        }
    }
    ctx->pc = 0x244AC4u;
    // 0x244ac4: 0x621024
    ctx->pc = 0x244ac4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x244ac8: 0x34420800
    ctx->pc = 0x244ac8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2048));
    // 0x244acc: 0xae220008
    ctx->pc = 0x244accu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_244ad0:
    // 0x244ad0: 0x802d
    ctx->pc = 0x244ad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244ad4:
    // 0x244ad4: 0x3c020031
    ctx->pc = 0x244ad4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x244ad8: 0x4480c800
    ctx->pc = 0x244ad8u;
    *(uint32_t*)&ctx->f[25] = GPR_U32(ctx, 0);
    // 0x244adc: 0x3c014016
    ctx->pc = 0x244adcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16406 << 16));
    // 0x244ae0: 0x3421cbe5
    ctx->pc = 0x244ae0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52197));
    // 0x244ae4: 0x4481a800
    ctx->pc = 0x244ae4u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x244ae8: 0x3c01c016
    ctx->pc = 0x244ae8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49174 << 16));
    // 0x244aec: 0x3421cbe5
    ctx->pc = 0x244aecu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52197));
    // 0x244af0: 0x4481b000
    ctx->pc = 0x244af0u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 1);
    // 0x244af4: 0x3c013f49
    ctx->pc = 0x244af4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16201 << 16));
    // 0x244af8: 0x34210fdb
    ctx->pc = 0x244af8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x244afc: 0x4481b800
    ctx->pc = 0x244afcu;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 1);
    // 0x244b00: 0x3c01bf49
    ctx->pc = 0x244b00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48969 << 16));
    // 0x244b04: 0x34210fdb
    ctx->pc = 0x244b04u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x244b08: 0x4481c000
    ctx->pc = 0x244b08u;
    *(uint32_t*)&ctx->f[24] = GPR_U32(ctx, 1);
    // 0x244b0c: 0x100000c8
    ctx->pc = 0x244B0Cu;
    {
        const bool branch_taken_0x244b0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x244B10u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967272));
        if (branch_taken_0x244b0c) {
            ctx->pc = 0x244E30u;
            goto label_244e30;
        }
    }
    ctx->pc = 0x244B14u;
    // 0x244b14: 0x0
    ctx->pc = 0x244b14u;
    // NOP
label_244b18:
    // 0x244b18: 0x3c030001
    ctx->pc = 0x244b18u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x244b1c: 0x431024
    ctx->pc = 0x244b1cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x244b20: 0x10400005
    ctx->pc = 0x244B20u;
    {
        const bool branch_taken_0x244b20 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x244B24u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 25));
        if (branch_taken_0x244b20) {
            ctx->pc = 0x244B38u;
            goto label_244b38;
        }
    }
    ctx->pc = 0x244B28u;
    // 0x244b28: 0x9642092e
    ctx->pc = 0x244b28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2350)));
    // 0x244b2c: 0x30420080
    ctx->pc = 0x244b2cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 128));
    // 0x244b30: 0x10000015
    ctx->pc = 0x244B30u;
    {
        const bool branch_taken_0x244b30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x244B34u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
        if (branch_taken_0x244b30) {
            ctx->pc = 0x244B88u;
            goto label_244b88;
        }
    }
    ctx->pc = 0x244B38u;
label_244b38:
    // 0x244b38: 0x8e220004
    ctx->pc = 0x244b38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x244b3c: 0x30428000
    ctx->pc = 0x244b3cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x244b40: 0x10400005
    ctx->pc = 0x244B40u;
    {
        const bool branch_taken_0x244b40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x244B44u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 26));
        if (branch_taken_0x244b40) {
            ctx->pc = 0x244B58u;
            goto label_244b58;
        }
    }
    ctx->pc = 0x244B48u;
    // 0x244b48: 0x9642092e
    ctx->pc = 0x244b48u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2350)));
    // 0x244b4c: 0x30420080
    ctx->pc = 0x244b4cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 128));
    // 0x244b50: 0x1000000d
    ctx->pc = 0x244B50u;
    {
        const bool branch_taken_0x244b50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x244B54u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
        if (branch_taken_0x244b50) {
            ctx->pc = 0x244B88u;
            goto label_244b88;
        }
    }
    ctx->pc = 0x244B58u;
label_244b58:
    // 0x244b58: 0x8e220004
    ctx->pc = 0x244b58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x244b5c: 0x30420100
    ctx->pc = 0x244b5cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x244b60: 0x10400005
    ctx->pc = 0x244B60u;
    {
        const bool branch_taken_0x244b60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x244B64u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 24));
        if (branch_taken_0x244b60) {
            ctx->pc = 0x244B78u;
            goto label_244b78;
        }
    }
    ctx->pc = 0x244B68u;
    // 0x244b68: 0x9642092e
    ctx->pc = 0x244b68u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2350)));
    // 0x244b6c: 0x30420080
    ctx->pc = 0x244b6cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 128));
    // 0x244b70: 0x10000005
    ctx->pc = 0x244B70u;
    {
        const bool branch_taken_0x244b70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x244B74u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
        if (branch_taken_0x244b70) {
            ctx->pc = 0x244B88u;
            goto label_244b88;
        }
    }
    ctx->pc = 0x244B78u;
label_244b78:
    // 0x244b78: 0x8643092e
    ctx->pc = 0x244b78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2350)));
    // 0x244b7c: 0x24020080
    ctx->pc = 0x244b7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
    // 0x244b80: 0x50620001
    ctx->pc = 0x244B80u;
    {
        const bool branch_taken_0x244b80 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x244b80) {
            ctx->pc = 0x244B84u;
            WRITE16(ADD32(GPR_U32(ctx, 18), 2350), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x244B88u;
            goto label_244b88;
        }
    }
    ctx->pc = 0x244B88u;
label_244b88:
    // 0x244b88: 0x160000c7
    ctx->pc = 0x244B88u;
    {
        const bool branch_taken_0x244b88 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x244B8Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)2 << 16));
        if (branch_taken_0x244b88) {
            ctx->pc = 0x244EA8u;
            goto label_244ea8;
        }
    }
    ctx->pc = 0x244B90u;
    // 0x244b90: 0x8e220004
    ctx->pc = 0x244b90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x244b94: 0x431024
    ctx->pc = 0x244b94u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x244b98: 0x50400012
    ctx->pc = 0x244B98u;
    {
        const bool branch_taken_0x244b98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x244b98) {
            ctx->pc = 0x244B9Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->pc = 0x244BE4u;
            goto label_244be4;
        }
    }
    ctx->pc = 0x244BA0u;
    // 0x244ba0: 0xc6410800
    ctx->pc = 0x244ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244ba4: 0x3c014248
    ctx->pc = 0x244ba4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16968 << 16));
    // 0x244ba8: 0x44810000
    ctx->pc = 0x244ba8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x244bac: 0x46010036
    ctx->pc = 0x244bacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244bb0: 0x0
    ctx->pc = 0x244bb0u;
    // NOP
    // 0x244bb4: 0x4502000b
    ctx->pc = 0x244BB4u;
    {
        const bool branch_taken_0x244bb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x244bb4) {
            ctx->pc = 0x244BB8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->pc = 0x244BE4u;
            goto label_244be4;
        }
    }
    ctx->pc = 0x244BBCu;
    // 0x244bbc: 0x3c0140a0
    ctx->pc = 0x244bbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x244bc0: 0x44816000
    ctx->pc = 0x244bc0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x244bc4: 0x3c013f34
    ctx->pc = 0x244bc4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16180 << 16));
    // 0x244bc8: 0x3421fdf4
    ctx->pc = 0x244bc8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65012));
    // 0x244bcc: 0x44816800
    ctx->pc = 0x244bccu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x244bd0: 0xc0911c0
    ctx->pc = 0x244BD0u;
    SET_GPR_U32(ctx, 31, 0x244BD8u);
    ctx->pc = 0x244BD4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x244700u;
    {
        const uint32_t __entryPc = ctx->pc;
        combo_player_0x244700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244BD8u; }
    }
    if (ctx->pc != 0x244BD8u) { return; }
    ctx->pc = 0x244BD8u;
    // 0x244bd8: 0x443ff8c
    ctx->pc = 0x244BD8u;
    {
        const bool branch_taken_0x244bd8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x244bd8) {
            ctx->pc = 0x244BDCu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 22));
            ctx->pc = 0x244A0Cu;
            goto label_244a0c;
        }
    }
    ctx->pc = 0x244BE0u;
    // 0x244be0: 0x8e220008
    ctx->pc = 0x244be0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_244be4:
    // 0x244be4: 0x30420800
    ctx->pc = 0x244be4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2048));
    // 0x244be8: 0x50400007
    ctx->pc = 0x244BE8u;
    {
        const bool branch_taken_0x244be8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x244be8) {
            ctx->pc = 0x244BECu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->pc = 0x244C08u;
            goto label_244c08;
        }
    }
    ctx->pc = 0x244BF0u;
    // 0x244bf0: 0xc6400800
    ctx->pc = 0x244bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244bf4: 0x4600c836
    ctx->pc = 0x244bf4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244bf8: 0x0
    ctx->pc = 0x244bf8u;
    // NOP
    // 0x244bfc: 0x450300aa
    ctx->pc = 0x244BFCu;
    {
        const bool branch_taken_0x244bfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x244bfc) {
            ctx->pc = 0x244C00u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 21));
            ctx->pc = 0x244EA8u;
            goto label_244ea8;
        }
    }
    ctx->pc = 0x244C04u;
    // 0x244c04: 0x8e220008
    ctx->pc = 0x244c04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_244c08:
    // 0x244c08: 0x30421000
    ctx->pc = 0x244c08u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4096));
    // 0x244c0c: 0x544000a6
    ctx->pc = 0x244C0Cu;
    {
        const bool branch_taken_0x244c0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x244c0c) {
            ctx->pc = 0x244C10u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2));
            ctx->pc = 0x244EA8u;
            goto label_244ea8;
        }
    }
    ctx->pc = 0x244C14u;
    // 0x244c14: 0xc6200028
    ctx->pc = 0x244c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244c18: 0x44800800
    ctx->pc = 0x244c18u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x244c1c: 0x46000834
    ctx->pc = 0x244c1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244c20: 0x0
    ctx->pc = 0x244c20u;
    // NOP
    // 0x244c24: 0x45020032
    ctx->pc = 0x244C24u;
    {
        const bool branch_taken_0x244c24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x244c24) {
            ctx->pc = 0x244C28u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->pc = 0x244CF0u;
            goto label_244cf0;
        }
    }
    ctx->pc = 0x244C2Cu;
    // 0x244c2c: 0xc6200020
    ctx->pc = 0x244c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244c30: 0x46000834
    ctx->pc = 0x244c30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244c34: 0x0
    ctx->pc = 0x244c34u;
    // NOP
    // 0x244c38: 0x45020028
    ctx->pc = 0x244C38u;
    {
        const bool branch_taken_0x244c38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x244c38) {
            ctx->pc = 0x244C3Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->pc = 0x244CDCu;
            goto label_244cdc;
        }
    }
    ctx->pc = 0x244C40u;
    // 0x244c40: 0xc6200024
    ctx->pc = 0x244c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244c44: 0xc621001c
    ctx->pc = 0x244c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244c48: 0x46010501
    ctx->pc = 0x244c48u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x244c4c: 0x3c014049
    ctx->pc = 0x244c4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x244c50: 0x34210fdb
    ctx->pc = 0x244c50u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x244c54: 0x44810000
    ctx->pc = 0x244c54u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x244c58: 0x46140034
    ctx->pc = 0x244c58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244c5c: 0x45000006
    ctx->pc = 0x244C5Cu;
    {
        const bool branch_taken_0x244c5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x244c5c) {
            ctx->pc = 0x244C78u;
            goto label_244c78;
        }
    }
    ctx->pc = 0x244C64u;
    // 0x244c64: 0x3c0140c9
    ctx->pc = 0x244c64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x244c68: 0x34210fdb
    ctx->pc = 0x244c68u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x244c6c: 0x44810000
    ctx->pc = 0x244c6cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x244c70: 0x1000000c
    ctx->pc = 0x244C70u;
    {
        const bool branch_taken_0x244c70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x244C74u;
        ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x244c70) {
            ctx->pc = 0x244CA4u;
            goto label_244ca4;
        }
    }
    ctx->pc = 0x244C78u;
label_244c78:
    // 0x244c78: 0x3c01c049
    ctx->pc = 0x244c78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x244c7c: 0x34210fdb
    ctx->pc = 0x244c7cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x244c80: 0x44810000
    ctx->pc = 0x244c80u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x244c84: 0x4600a036
    ctx->pc = 0x244c84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244c88: 0x0
    ctx->pc = 0x244c88u;
    // NOP
    // 0x244c8c: 0x45020005
    ctx->pc = 0x244C8Cu;
    {
        const bool branch_taken_0x244c8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x244c8c) {
            ctx->pc = 0x244C90u;
            ctx->f[0] = FPU_MOV_S(ctx->f[20]);
            ctx->pc = 0x244CA4u;
            goto label_244ca4;
        }
    }
    ctx->pc = 0x244C94u;
    // 0x244c94: 0x3c0140c9
    ctx->pc = 0x244c94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x244c98: 0x34210fdb
    ctx->pc = 0x244c98u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x244c9c: 0x44810000
    ctx->pc = 0x244c9cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x244ca0: 0x4600a000
    ctx->pc = 0x244ca0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_244ca4:
    // 0x244ca4: 0x46000506
    ctx->pc = 0x244ca4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x244ca8: 0x4614a834
    ctx->pc = 0x244ca8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244cac: 0x0
    ctx->pc = 0x244cacu;
    // NOP
    // 0x244cb0: 0x45010050
    ctx->pc = 0x244CB0u;
    {
        const bool branch_taken_0x244cb0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x244CB4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 18));
        if (branch_taken_0x244cb0) {
            ctx->pc = 0x244DF4u;
            goto label_244df4;
        }
    }
    ctx->pc = 0x244CB8u;
    // 0x244cb8: 0x4616a034
    ctx->pc = 0x244cb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244cbc: 0x4501004d
    ctx->pc = 0x244CBCu;
    {
        const bool branch_taken_0x244cbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x244cbc) {
            ctx->pc = 0x244DF4u;
            goto label_244df4;
        }
    }
    ctx->pc = 0x244CC4u;
    // 0x244cc4: 0x4614b834
    ctx->pc = 0x244cc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244cc8: 0x0
    ctx->pc = 0x244cc8u;
    // NOP
    // 0x244ccc: 0x45010049
    ctx->pc = 0x244CCCu;
    {
        const bool branch_taken_0x244ccc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x244CD0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 20));
        if (branch_taken_0x244ccc) {
            ctx->pc = 0x244DF4u;
            goto label_244df4;
        }
    }
    ctx->pc = 0x244CD4u;
    // 0x244cd4: 0x1000001b
    ctx->pc = 0x244CD4u;
    {
        const bool branch_taken_0x244cd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x244cd4) {
            ctx->pc = 0x244D44u;
            goto label_244d44;
        }
    }
    ctx->pc = 0x244CDCu;
label_244cdc:
    // 0x244cdc: 0x30630400
    ctx->pc = 0x244cdcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1024));
    // 0x244ce0: 0x2410000f
    ctx->pc = 0x244ce0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 15));
    // 0x244ce4: 0x24020010
    ctx->pc = 0x244ce4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x244ce8: 0x10000042
    ctx->pc = 0x244CE8u;
    {
        const bool branch_taken_0x244ce8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x244CECu;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 2));
        if (branch_taken_0x244ce8) {
            ctx->pc = 0x244DF4u;
            goto label_244df4;
        }
    }
    ctx->pc = 0x244CF0u;
label_244cf0:
    // 0x244cf0: 0x30624000
    ctx->pc = 0x244cf0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16384));
    // 0x244cf4: 0x5040002b
    ctx->pc = 0x244CF4u;
    {
        const bool branch_taken_0x244cf4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x244cf4) {
            ctx->pc = 0x244CF8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->pc = 0x244DA4u;
            goto label_244da4;
        }
    }
    ctx->pc = 0x244CFCu;
    // 0x244cfc: 0xc6200020
    ctx->pc = 0x244cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244d00: 0x4600c834
    ctx->pc = 0x244d00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244d04: 0x0
    ctx->pc = 0x244d04u;
    // NOP
    // 0x244d08: 0x45000025
    ctx->pc = 0x244D08u;
    {
        const bool branch_taken_0x244d08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x244D0Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1536));
        if (branch_taken_0x244d08) {
            ctx->pc = 0x244DA0u;
            goto label_244da0;
        }
    }
    ctx->pc = 0x244D10u;
    // 0x244d10: 0x10400012
    ctx->pc = 0x244D10u;
    {
        const bool branch_taken_0x244d10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x244d10) {
            ctx->pc = 0x244D5Cu;
            goto label_244d5c;
        }
    }
    ctx->pc = 0x244D18u;
    // 0x244d18: 0x4614a834
    ctx->pc = 0x244d18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244d1c: 0x0
    ctx->pc = 0x244d1cu;
    // NOP
    // 0x244d20: 0x45010034
    ctx->pc = 0x244D20u;
    {
        const bool branch_taken_0x244d20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x244D24u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 18));
        if (branch_taken_0x244d20) {
            ctx->pc = 0x244DF4u;
            goto label_244df4;
        }
    }
    ctx->pc = 0x244D28u;
    // 0x244d28: 0x4616a034
    ctx->pc = 0x244d28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244d2c: 0x45010031
    ctx->pc = 0x244D2Cu;
    {
        const bool branch_taken_0x244d2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x244d2c) {
            ctx->pc = 0x244DF4u;
            goto label_244df4;
        }
    }
    ctx->pc = 0x244D34u;
    // 0x244d34: 0x4614b834
    ctx->pc = 0x244d34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244d38: 0x0
    ctx->pc = 0x244d38u;
    // NOP
    // 0x244d3c: 0x4501002d
    ctx->pc = 0x244D3Cu;
    {
        const bool branch_taken_0x244d3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x244D40u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 20));
        if (branch_taken_0x244d3c) {
            ctx->pc = 0x244DF4u;
            goto label_244df4;
        }
    }
    ctx->pc = 0x244D44u;
label_244d44:
    // 0x244d44: 0x4618a034
    ctx->pc = 0x244d44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244d48: 0x0
    ctx->pc = 0x244d48u;
    // NOP
    // 0x244d4c: 0x45000029
    ctx->pc = 0x244D4Cu;
    {
        const bool branch_taken_0x244d4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x244D50u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 17));
        if (branch_taken_0x244d4c) {
            ctx->pc = 0x244DF4u;
            goto label_244df4;
        }
    }
    ctx->pc = 0x244D54u;
    // 0x244d54: 0x10000027
    ctx->pc = 0x244D54u;
    {
        const bool branch_taken_0x244d54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x244D58u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 19));
        if (branch_taken_0x244d54) {
            ctx->pc = 0x244DF4u;
            goto label_244df4;
        }
    }
    ctx->pc = 0x244D5Cu;
label_244d5c:
    // 0x244d5c: 0x4614a834
    ctx->pc = 0x244d5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244d60: 0x0
    ctx->pc = 0x244d60u;
    // NOP
    // 0x244d64: 0x45010023
    ctx->pc = 0x244D64u;
    {
        const bool branch_taken_0x244d64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x244D68u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x244d64) {
            ctx->pc = 0x244DF4u;
            goto label_244df4;
        }
    }
    ctx->pc = 0x244D6Cu;
    // 0x244d6c: 0x4616a034
    ctx->pc = 0x244d6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244d70: 0x45010020
    ctx->pc = 0x244D70u;
    {
        const bool branch_taken_0x244d70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x244d70) {
            ctx->pc = 0x244DF4u;
            goto label_244df4;
        }
    }
    ctx->pc = 0x244D78u;
    // 0x244d78: 0x4614b834
    ctx->pc = 0x244d78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244d7c: 0x0
    ctx->pc = 0x244d7cu;
    // NOP
    // 0x244d80: 0x4501001c
    ctx->pc = 0x244D80u;
    {
        const bool branch_taken_0x244d80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x244D84u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x244d80) {
            ctx->pc = 0x244DF4u;
            goto label_244df4;
        }
    }
    ctx->pc = 0x244D88u;
    // 0x244d88: 0x4618a034
    ctx->pc = 0x244d88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244d8c: 0x0
    ctx->pc = 0x244d8cu;
    // NOP
    // 0x244d90: 0x45000018
    ctx->pc = 0x244D90u;
    {
        const bool branch_taken_0x244d90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x244D94u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 9));
        if (branch_taken_0x244d90) {
            ctx->pc = 0x244DF4u;
            goto label_244df4;
        }
    }
    ctx->pc = 0x244D98u;
    // 0x244d98: 0x10000016
    ctx->pc = 0x244D98u;
    {
        const bool branch_taken_0x244d98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x244D9Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 11));
        if (branch_taken_0x244d98) {
            ctx->pc = 0x244DF4u;
            goto label_244df4;
        }
    }
    ctx->pc = 0x244DA0u;
label_244da0:
    // 0x244da0: 0x8e220008
    ctx->pc = 0x244da0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_244da4:
    // 0x244da4: 0x30422000
    ctx->pc = 0x244da4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8192));
    // 0x244da8: 0x5040000a
    ctx->pc = 0x244DA8u;
    {
        const bool branch_taken_0x244da8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x244da8) {
            ctx->pc = 0x244DACu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->pc = 0x244DD4u;
            goto label_244dd4;
        }
    }
    ctx->pc = 0x244DB0u;
    // 0x244db0: 0xc6410800
    ctx->pc = 0x244db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244db4: 0x3c0140a0
    ctx->pc = 0x244db4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x244db8: 0x44810000
    ctx->pc = 0x244db8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x244dbc: 0x46010036
    ctx->pc = 0x244dbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244dc0: 0x0
    ctx->pc = 0x244dc0u;
    // NOP
    // 0x244dc4: 0x45020003
    ctx->pc = 0x244DC4u;
    {
        const bool branch_taken_0x244dc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x244dc4) {
            ctx->pc = 0x244DC8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->pc = 0x244DD4u;
            goto label_244dd4;
        }
    }
    ctx->pc = 0x244DCCu;
    // 0x244dcc: 0x10000009
    ctx->pc = 0x244DCCu;
    {
        const bool branch_taken_0x244dcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x244DD0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x244dcc) {
            ctx->pc = 0x244DF4u;
            goto label_244df4;
        }
    }
    ctx->pc = 0x244DD4u;
label_244dd4:
    // 0x244dd4: 0x30420200
    ctx->pc = 0x244dd4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 512));
    // 0x244dd8: 0x50400003
    ctx->pc = 0x244DD8u;
    {
        const bool branch_taken_0x244dd8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x244dd8) {
            ctx->pc = 0x244DDCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->pc = 0x244DE8u;
            goto label_244de8;
        }
    }
    ctx->pc = 0x244DE0u;
    // 0x244de0: 0x10000004
    ctx->pc = 0x244DE0u;
    {
        const bool branch_taken_0x244de0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x244DE4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x244de0) {
            ctx->pc = 0x244DF4u;
            goto label_244df4;
        }
    }
    ctx->pc = 0x244DE8u;
label_244de8:
    // 0x244de8: 0x30420400
    ctx->pc = 0x244de8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1024));
    // 0x244dec: 0x24030010
    ctx->pc = 0x244decu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
    // 0x244df0: 0x62800b
    ctx->pc = 0x244df0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
label_244df4:
    // 0x244df4: 0x5600002d
    ctx->pc = 0x244DF4u;
    {
        const bool branch_taken_0x244df4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x244df4) {
            ctx->pc = 0x244DF8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 480)));
            ctx->pc = 0x244EACu;
            goto label_244eac;
        }
    }
    ctx->pc = 0x244DFCu;
    // 0x244dfc: 0xc6210020
    ctx->pc = 0x244dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244e00: 0x3c013f40
    ctx->pc = 0x244e00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16192 << 16));
    // 0x244e04: 0x44810000
    ctx->pc = 0x244e04u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x244e08: 0x46010034
    ctx->pc = 0x244e08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244e0c: 0x0
    ctx->pc = 0x244e0cu;
    // NOP
    // 0x244e10: 0x4501ff05
    ctx->pc = 0x244E10u;
    {
        const bool branch_taken_0x244e10 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x244E14u;
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        if (branch_taken_0x244e10) {
            ctx->pc = 0x244A28u;
            goto label_244a28;
        }
    }
    ctx->pc = 0x244E18u;
    // 0x244e18: 0x4600c834
    ctx->pc = 0x244e18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244e1c: 0x0
    ctx->pc = 0x244e1cu;
    // NOP
    // 0x244e20: 0x45000021
    ctx->pc = 0x244E20u;
    {
        const bool branch_taken_0x244e20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x244E24u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x244e20) {
            ctx->pc = 0x244EA8u;
            goto label_244ea8;
        }
    }
    ctx->pc = 0x244E28u;
    // 0x244e28: 0x1000001f
    ctx->pc = 0x244E28u;
    {
        const bool branch_taken_0x244e28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x244E2Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x244e28) {
            ctx->pc = 0x244EA8u;
            goto label_244ea8;
        }
    }
    ctx->pc = 0x244E30u;
label_244e30:
    // 0x244e30: 0x9642093c
    ctx->pc = 0x244e30u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2364)));
    // 0x244e34: 0x30420040
    ctx->pc = 0x244e34u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
    // 0x244e38: 0x50400003
    ctx->pc = 0x244E38u;
    {
        const bool branch_taken_0x244e38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x244e38) {
            ctx->pc = 0x244E3Cu;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2364)));
            ctx->pc = 0x244E48u;
            goto label_244e48;
        }
    }
    ctx->pc = 0x244E40u;
    // 0x244e40: 0x10000017
    ctx->pc = 0x244E40u;
    {
        const bool branch_taken_0x244e40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x244E44u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 39));
        if (branch_taken_0x244e40) {
            ctx->pc = 0x244EA0u;
            goto label_244ea0;
        }
    }
    ctx->pc = 0x244E48u;
label_244e48:
    // 0x244e48: 0x30420010
    ctx->pc = 0x244e48u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x244e4c: 0x50400003
    ctx->pc = 0x244E4Cu;
    {
        const bool branch_taken_0x244e4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x244e4c) {
            ctx->pc = 0x244E50u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2364)));
            ctx->pc = 0x244E5Cu;
            goto label_244e5c;
        }
    }
    ctx->pc = 0x244E54u;
    // 0x244e54: 0x10000012
    ctx->pc = 0x244E54u;
    {
        const bool branch_taken_0x244e54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x244E58u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 38));
        if (branch_taken_0x244e54) {
            ctx->pc = 0x244EA0u;
            goto label_244ea0;
        }
    }
    ctx->pc = 0x244E5Cu;
label_244e5c:
    // 0x244e5c: 0x30420080
    ctx->pc = 0x244e5cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 128));
    // 0x244e60: 0x10400003
    ctx->pc = 0x244E60u;
    {
        const bool branch_taken_0x244e60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x244E64u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x244e60) {
            ctx->pc = 0x244E70u;
            goto label_244e70;
        }
    }
    ctx->pc = 0x244E68u;
    // 0x244e68: 0x1000000d
    ctx->pc = 0x244E68u;
    {
        const bool branch_taken_0x244e68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x244E6Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 23));
        if (branch_taken_0x244e68) {
            ctx->pc = 0x244EA0u;
            goto label_244ea0;
        }
    }
    ctx->pc = 0x244E70u;
label_244e70:
    // 0x244e70: 0xdc420e28
    ctx->pc = 0x244e70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x244e74: 0x30420010
    ctx->pc = 0x244e74u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x244e78: 0x54400005
    ctx->pc = 0x244E78u;
    {
        const bool branch_taken_0x244e78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x244e78) {
            ctx->pc = 0x244E7Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->pc = 0x244E90u;
            goto label_244e90;
        }
    }
    ctx->pc = 0x244E80u;
    // 0x244e80: 0x8c620018
    ctx->pc = 0x244e80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x244e84: 0x10400006
    ctx->pc = 0x244E84u;
    {
        const bool branch_taken_0x244e84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x244e84) {
            ctx->pc = 0x244EA0u;
            goto label_244ea0;
        }
    }
    ctx->pc = 0x244E8Cu;
    // 0x244e8c: 0x8e220004
    ctx->pc = 0x244e8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_244e90:
    // 0x244e90: 0x3c030800
    ctx->pc = 0x244e90u;
    SET_GPR_U32(ctx, 3, ((uint32_t)2048 << 16));
    // 0x244e94: 0x431024
    ctx->pc = 0x244e94u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x244e98: 0x2403001d
    ctx->pc = 0x244e98u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 29));
    // 0x244e9c: 0x62800b
    ctx->pc = 0x244e9cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
label_244ea0:
    // 0x244ea0: 0x5200ff1d
    ctx->pc = 0x244EA0u;
    {
        const bool branch_taken_0x244ea0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x244ea0) {
            ctx->pc = 0x244EA4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->pc = 0x244B18u;
            goto label_244b18;
        }
    }
    ctx->pc = 0x244EA8u;
label_244ea8:
    // 0x244ea8: 0x8e4301e0
    ctx->pc = 0x244ea8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 480)));
label_244eac:
    // 0x244eac: 0x24020073
    ctx->pc = 0x244eacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 115));
    // 0x244eb0: 0x10620005
    ctx->pc = 0x244EB0u;
    {
        const bool branch_taken_0x244eb0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x244EB4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 117));
        if (branch_taken_0x244eb0) {
            ctx->pc = 0x244EC8u;
            goto label_244ec8;
        }
    }
    ctx->pc = 0x244EB8u;
    // 0x244eb8: 0x1062000e
    ctx->pc = 0x244EB8u;
    {
        const bool branch_taken_0x244eb8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x244EBCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294967272));
        if (branch_taken_0x244eb8) {
            ctx->pc = 0x244EF4u;
            goto label_244ef4;
        }
    }
    ctx->pc = 0x244EC0u;
    // 0x244ec0: 0x1000001b
    ctx->pc = 0x244EC0u;
    {
        const bool branch_taken_0x244ec0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x244EC4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
        if (branch_taken_0x244ec0) {
            ctx->pc = 0x244F30u;
            goto label_244f30;
        }
    }
    ctx->pc = 0x244EC8u;
label_244ec8:
    // 0x244ec8: 0x24020018
    ctx->pc = 0x244ec8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x244ecc: 0x56020007
    ctx->pc = 0x244ECCu;
    {
        const bool branch_taken_0x244ecc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        if (branch_taken_0x244ecc) {
            ctx->pc = 0x244ED0u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2350)));
            ctx->pc = 0x244EECu;
            goto label_244eec;
        }
    }
    ctx->pc = 0x244ED4u;
    // 0x244ed4: 0x9643092e
    ctx->pc = 0x244ed4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2350)));
    // 0x244ed8: 0x30620004
    ctx->pc = 0x244ed8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 4));
    // 0x244edc: 0x10400013
    ctx->pc = 0x244EDCu;
    {
        const bool branch_taken_0x244edc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x244EE0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x244edc) {
            ctx->pc = 0x244F2Cu;
            goto label_244f2c;
        }
    }
    ctx->pc = 0x244EE4u;
    // 0x244ee4: 0x10000011
    ctx->pc = 0x244EE4u;
    {
        const bool branch_taken_0x244ee4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x244EE8u;
        WRITE16(ADD32(GPR_U32(ctx, 18), 2350), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x244ee4) {
            ctx->pc = 0x244F2Cu;
            goto label_244f2c;
        }
    }
    ctx->pc = 0x244EECu;
label_244eec:
    // 0x244eec: 0x1000000e
    ctx->pc = 0x244EECu;
    {
        const bool branch_taken_0x244eec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x244EF0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4));
        if (branch_taken_0x244eec) {
            ctx->pc = 0x244F28u;
            goto label_244f28;
        }
    }
    ctx->pc = 0x244EF4u;
label_244ef4:
    // 0x244ef4: 0x2c420002
    ctx->pc = 0x244ef4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x244ef8: 0x1040000a
    ctx->pc = 0x244EF8u;
    {
        const bool branch_taken_0x244ef8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x244EFCu;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2350)));
        if (branch_taken_0x244ef8) {
            ctx->pc = 0x244F24u;
            goto label_244f24;
        }
    }
    ctx->pc = 0x244F00u;
    // 0x244f00: 0x30420008
    ctx->pc = 0x244f00u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
    // 0x244f04: 0x5440000a
    ctx->pc = 0x244F04u;
    {
        const bool branch_taken_0x244f04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x244f04) {
            ctx->pc = 0x244F08u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->pc = 0x244F30u;
            goto label_244f30;
        }
    }
    ctx->pc = 0x244F0Cu;
    // 0x244f0c: 0x3c020031
    ctx->pc = 0x244f0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x244f10: 0x96430930
    ctx->pc = 0x244f10u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2352)));
    // 0x244f14: 0x9442ffbc
    ctx->pc = 0x244f14u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x244f18: 0x621821
    ctx->pc = 0x244f18u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x244f1c: 0x10000003
    ctx->pc = 0x244F1Cu;
    {
        const bool branch_taken_0x244f1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x244F20u;
        WRITE16(ADD32(GPR_U32(ctx, 18), 2352), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x244f1c) {
            ctx->pc = 0x244F2Cu;
            goto label_244f2c;
        }
    }
    ctx->pc = 0x244F24u;
label_244f24:
    // 0x244f24: 0x34420008
    ctx->pc = 0x244f24u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8));
label_244f28:
    // 0x244f28: 0xa642092e
    ctx->pc = 0x244f28u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2350), (uint16_t)GPR_U32(ctx, 2));
label_244f2c:
    // 0x244f2c: 0x8e230004
    ctx->pc = 0x244f2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_244f30:
    // 0x244f30: 0x30620600
    ctx->pc = 0x244f30u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1536));
    // 0x244f34: 0x5040000a
    ctx->pc = 0x244F34u;
    {
        const bool branch_taken_0x244f34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x244f34) {
            ctx->pc = 0x244F38u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2252)));
            ctx->pc = 0x244F60u;
            goto label_244f60;
        }
    }
    ctx->pc = 0x244F3Cu;
    // 0x244f3c: 0x8e4408cc
    ctx->pc = 0x244f3cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 2252)));
    // 0x244f40: 0x641026
    ctx->pc = 0x244f40u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x244f44: 0x8e4308d0
    ctx->pc = 0x244f44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 2256)));
    // 0x244f48: 0x431025
    ctx->pc = 0x244f48u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x244f4c: 0xae4208d0
    ctx->pc = 0x244f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2256), GPR_U32(ctx, 2));
    // 0x244f50: 0x8e220004
    ctx->pc = 0x244f50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x244f54: 0x822025
    ctx->pc = 0x244f54u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x244f58: 0x10000003
    ctx->pc = 0x244F58u;
    {
        const bool branch_taken_0x244f58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x244F5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 2252), GPR_U32(ctx, 4));
        if (branch_taken_0x244f58) {
            ctx->pc = 0x244F68u;
            goto label_244f68;
        }
    }
    ctx->pc = 0x244F60u;
label_244f60:
    // 0x244f60: 0x54400001
    ctx->pc = 0x244F60u;
    {
        const bool branch_taken_0x244f60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x244f60) {
            ctx->pc = 0x244F64u;
            WRITE32(ADD32(GPR_U32(ctx, 18), 2252), GPR_U32(ctx, 0));
            ctx->pc = 0x244F68u;
            goto label_244f68;
        }
    }
    ctx->pc = 0x244F68u;
label_244f68:
    // 0x244f68: 0x200102d
    ctx->pc = 0x244f68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244f6c: 0xdfbf0030
    ctx->pc = 0x244f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x244f70: 0xdfb20020
    ctx->pc = 0x244f70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x244f74: 0xdfb10010
    ctx->pc = 0x244f74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244f78: 0xdfb00000
    ctx->pc = 0x244f78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244f7c: 0xc7b90068
    ctx->pc = 0x244f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x244f80: 0xc7b80060
    ctx->pc = 0x244f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x244f84: 0xc7b70058
    ctx->pc = 0x244f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x244f88: 0xc7b60050
    ctx->pc = 0x244f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x244f8c: 0xc7b50048
    ctx->pc = 0x244f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x244f90: 0xc7b40040
    ctx->pc = 0x244f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x244f94: 0x3e00008
    ctx->pc = 0x244F94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244F98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2449DCu: goto label_2449dc;
            case 0x244A0Cu: goto label_244a0c;
            case 0x244A28u: goto label_244a28;
            case 0x244A30u: goto label_244a30;
            case 0x244A64u: goto label_244a64;
            case 0x244A90u: goto label_244a90;
            case 0x244A94u: goto label_244a94;
            case 0x244AB8u: goto label_244ab8;
            case 0x244AD0u: goto label_244ad0;
            case 0x244AD4u: goto label_244ad4;
            case 0x244B18u: goto label_244b18;
            case 0x244B38u: goto label_244b38;
            case 0x244B58u: goto label_244b58;
            case 0x244B78u: goto label_244b78;
            case 0x244B88u: goto label_244b88;
            case 0x244BE4u: goto label_244be4;
            case 0x244C08u: goto label_244c08;
            case 0x244C78u: goto label_244c78;
            case 0x244CA4u: goto label_244ca4;
            case 0x244CDCu: goto label_244cdc;
            case 0x244CF0u: goto label_244cf0;
            case 0x244D44u: goto label_244d44;
            case 0x244D5Cu: goto label_244d5c;
            case 0x244DA0u: goto label_244da0;
            case 0x244DA4u: goto label_244da4;
            case 0x244DD4u: goto label_244dd4;
            case 0x244DE8u: goto label_244de8;
            case 0x244DF4u: goto label_244df4;
            case 0x244E30u: goto label_244e30;
            case 0x244E48u: goto label_244e48;
            case 0x244E5Cu: goto label_244e5c;
            case 0x244E70u: goto label_244e70;
            case 0x244E90u: goto label_244e90;
            case 0x244EA0u: goto label_244ea0;
            case 0x244EA8u: goto label_244ea8;
            case 0x244EACu: goto label_244eac;
            case 0x244EC8u: goto label_244ec8;
            case 0x244EECu: goto label_244eec;
            case 0x244EF4u: goto label_244ef4;
            case 0x244F24u: goto label_244f24;
            case 0x244F28u: goto label_244f28;
            case 0x244F2Cu: goto label_244f2c;
            case 0x244F30u: goto label_244f30;
            case 0x244F60u: goto label_244f60;
            case 0x244F68u: goto label_244f68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x244F9Cu;
}
