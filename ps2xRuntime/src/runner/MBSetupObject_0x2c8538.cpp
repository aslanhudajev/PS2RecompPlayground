#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBSetupObject
// Address: 0x2c8538 - 0x2c8744
void MBSetupObject_0x2c8538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c8538u;

    // 0x2c8538: 0x27bdff90
    ctx->pc = 0x2c8538u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2c853c: 0xffbf0050
    ctx->pc = 0x2c853cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c8540: 0xffb20040
    ctx->pc = 0x2c8540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2c8544: 0xffb10030
    ctx->pc = 0x2c8544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2c8548: 0xffb00020
    ctx->pc = 0x2c8548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2c854c: 0xe7b50068
    ctx->pc = 0x2c854cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2c8550: 0xe7b40060
    ctx->pc = 0x2c8550u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2c8554: 0x80882d
    ctx->pc = 0x2c8554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8558: 0xa0902d
    ctx->pc = 0x2c8558u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c855c: 0x46006506
    ctx->pc = 0x2c855cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2c8560: 0x46006d46
    ctx->pc = 0x2c8560u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2c8564: 0x3c03003a
    ctx->pc = 0x2c8564u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2c8568: 0x24640c20
    ctx->pc = 0x2c8568u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 3104));
    // 0x2c856c: 0x8c620c20
    ctx->pc = 0x2c856cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 3104)));
    // 0x2c8570: 0x24420001
    ctx->pc = 0x2c8570u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c8574: 0xac620c20
    ctx->pc = 0x2c8574u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3104), GPR_U32(ctx, 2));
    // 0x2c8578: 0x8c820014
    ctx->pc = 0x2c8578u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2c857c: 0x24420001
    ctx->pc = 0x2c857cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c8580: 0xac820014
    ctx->pc = 0x2c8580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x2c8584: 0x3c020038
    ctx->pc = 0x2c8584u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c8588: 0x8c42b1ac
    ctx->pc = 0x2c8588u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294947244)));
    // 0x2c858c: 0x14400004
    ctx->pc = 0x2C858Cu;
    {
        const bool branch_taken_0x2c858c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C8590u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c858c) {
            ctx->pc = 0x2C85A0u;
            goto label_2c85a0;
        }
    }
    ctx->pc = 0x2C8594u;
    // 0x2c8594: 0x8c820018
    ctx->pc = 0x2c8594u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2c8598: 0x24420001
    ctx->pc = 0x2c8598u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c859c: 0xac820018
    ctx->pc = 0x2c859cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
label_2c85a0:
    // 0x2c85a0: 0x8e220060
    ctx->pc = 0x2c85a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2c85a4: 0x3c030010
    ctx->pc = 0x2c85a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16 << 16));
    // 0x2c85a8: 0x34630400
    ctx->pc = 0x2c85a8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 1024));
    // 0x2c85ac: 0x431024
    ctx->pc = 0x2c85acu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c85b0: 0x10400030
    ctx->pc = 0x2C85B0u;
    {
        const bool branch_taken_0x2c85b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C85B4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2c85b0) {
            ctx->pc = 0x2C8674u;
            goto label_2c8674;
        }
    }
    ctx->pc = 0x2C85B8u;
    // 0x2c85b8: 0x8c42dee0
    ctx->pc = 0x2c85b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2c85bc: 0x8c460004
    ctx->pc = 0x2c85bcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c85c0: 0x3a0202d
    ctx->pc = 0x2c85c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c85c4: 0x26450030
    ctx->pc = 0x2c85c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 48));
    // 0x2c85c8: 0xc0b626d
    ctx->pc = 0x2C85C8u;
    SET_GPR_U32(ctx, 31, 0x2C85D0u);
    ctx->pc = 0x2C85CCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 720));
    ctx->pc = 0x2D89B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_002D89B4_0x2d89b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C85D0u; }
    }
    if (ctx->pc != 0x2C85D0u) { return; }
    ctx->pc = 0x2C85D0u;
    // 0x2c85d0: 0x8e220060
    ctx->pc = 0x2c85d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2c85d4: 0x3c030010
    ctx->pc = 0x2c85d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16 << 16));
    // 0x2c85d8: 0x431024
    ctx->pc = 0x2c85d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c85dc: 0x10400005
    ctx->pc = 0x2C85DCu;
    {
        const bool branch_taken_0x2c85dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C85E0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
        if (branch_taken_0x2c85dc) {
            ctx->pc = 0x2C85F4u;
            goto label_2c85f4;
        }
    }
    ctx->pc = 0x2C85E4u;
    // 0x2c85e4: 0x3c01437f
    ctx->pc = 0x2c85e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17279 << 16));
    // 0x2c85e8: 0x44810000
    ctx->pc = 0x2c85e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c85ec: 0x10000005
    ctx->pc = 0x2C85ECu;
    {
        const bool branch_taken_0x2c85ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C85F0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x2c85ec) {
            ctx->pc = 0x2C8604u;
            goto label_2c8604;
        }
    }
    ctx->pc = 0x2C85F4u;
label_2c85f4:
    // 0x2c85f4: 0x3c020038
    ctx->pc = 0x2c85f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c85f8: 0x3c01437f
    ctx->pc = 0x2c85f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17279 << 16));
    // 0x2c85fc: 0x44810000
    ctx->pc = 0x2c85fcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c8600: 0xc441c994
    ctx->pc = 0x2c8600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c8604:
    // 0x2c8604: 0x0
    ctx->pc = 0x2c8604u;
    // NOP
    // 0x2c8608: 0x0
    ctx->pc = 0x2c8608u;
    // NOP
    // 0x2c860c: 0x46010003
    ctx->pc = 0x2c860cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2c8610: 0xc7a1000c
    ctx->pc = 0x2c8610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8614: 0x46010042
    ctx->pc = 0x2c8614u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c8618: 0x3c01437f
    ctx->pc = 0x2c8618u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17279 << 16));
    // 0x2c861c: 0x44810000
    ctx->pc = 0x2c861cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c8620: 0x46000834
    ctx->pc = 0x2c8620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8624: 0x0
    ctx->pc = 0x2c8624u;
    // NOP
    // 0x2c8628: 0x45000011
    ctx->pc = 0x2C8628u;
    {
        const bool branch_taken_0x2c8628 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C862Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
        if (branch_taken_0x2c8628) {
            ctx->pc = 0x2C8670u;
            goto label_2c8670;
        }
    }
    ctx->pc = 0x2C8630u;
    // 0x2c8630: 0x44800000
    ctx->pc = 0x2c8630u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2c8634: 0x46000834
    ctx->pc = 0x2c8634u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8638: 0x45000003
    ctx->pc = 0x2C8638u;
    {
        const bool branch_taken_0x2c8638 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8638) {
            ctx->pc = 0x2C8648u;
            goto label_2c8648;
        }
    }
    ctx->pc = 0x2C8640u;
    // 0x2c8640: 0x10000004
    ctx->pc = 0x2C8640u;
    {
        const bool branch_taken_0x2c8640 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C8644u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 83), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x2c8640) {
            ctx->pc = 0x2C8654u;
            goto label_2c8654;
        }
    }
    ctx->pc = 0x2C8648u;
label_2c8648:
    // 0x2c8648: 0x46000824
    ctx->pc = 0x2c8648u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x2c864c: 0x44020000
    ctx->pc = 0x2c864cu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x2c8650: 0xa2220053
    ctx->pc = 0x2c8650u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 83), (uint8_t)GPR_U32(ctx, 2));
label_2c8654:
    // 0x2c8654: 0xc7ac000c
    ctx->pc = 0x2c8654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c8658: 0x240202d
    ctx->pc = 0x2c8658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c865c: 0x220282d
    ctx->pc = 0x2c865cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8660: 0xc0b1f40
    ctx->pc = 0x2C8660u;
    SET_GPR_U32(ctx, 31, 0x2C8668u);
    ctx->pc = 0x2C8664u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
    ctx->pc = 0x2C7D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddDistObject_0x2c7d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8668u; }
    }
    if (ctx->pc != 0x2C8668u) { return; }
    ctx->pc = 0x2C8668u;
    // 0x2c8668: 0x1000002f
    ctx->pc = 0x2C8668u;
    {
        const bool branch_taken_0x2c8668 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C866Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2c8668) {
            ctx->pc = 0x2C8728u;
            goto label_2c8728;
        }
    }
    ctx->pc = 0x2C8670u;
label_2c8670:
    // 0x2c8670: 0xa2220053
    ctx->pc = 0x2c8670u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 83), (uint8_t)GPR_U32(ctx, 2));
label_2c8674:
    // 0x2c8674: 0x12000023
    ctx->pc = 0x2C8674u;
    {
        const bool branch_taken_0x2c8674 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c8674) {
            ctx->pc = 0x2C8704u;
            goto label_2c8704;
        }
    }
    ctx->pc = 0x2C867Cu;
    // 0x2c867c: 0x8e230060
    ctx->pc = 0x2c867cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2c8680: 0x30620800
    ctx->pc = 0x2c8680u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2048));
    // 0x2c8684: 0x1040001f
    ctx->pc = 0x2C8684u;
    {
        const bool branch_taken_0x2c8684 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c8684) {
            ctx->pc = 0x2C8704u;
            goto label_2c8704;
        }
    }
    ctx->pc = 0x2C868Cu;
    // 0x2c868c: 0x92220053
    ctx->pc = 0x2c868cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 83)));
    // 0x2c8690: 0x1440000a
    ctx->pc = 0x2C8690u;
    {
        const bool branch_taken_0x2c8690 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C8694u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2c8690) {
            ctx->pc = 0x2C86BCu;
            goto label_2c86bc;
        }
    }
    ctx->pc = 0x2C8698u;
    // 0x2c8698: 0x3c024080
    ctx->pc = 0x2c8698u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16512 << 16));
    // 0x2c869c: 0x621024
    ctx->pc = 0x2c869cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c86a0: 0x14400006
    ctx->pc = 0x2C86A0u;
    {
        const bool branch_taken_0x2c86a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C86A4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2c86a0) {
            ctx->pc = 0x2C86BCu;
            goto label_2c86bc;
        }
    }
    ctx->pc = 0x2C86A8u;
    // 0x2c86a8: 0x8e220070
    ctx->pc = 0x2c86a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2c86ac: 0x8c420008
    ctx->pc = 0x2c86acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c86b0: 0x30420001
    ctx->pc = 0x2c86b0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2c86b4: 0x10400013
    ctx->pc = 0x2C86B4u;
    {
        const bool branch_taken_0x2c86b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C86B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2c86b4) {
            ctx->pc = 0x2C8704u;
            goto label_2c8704;
        }
    }
    ctx->pc = 0x2C86BCu;
label_2c86bc:
    // 0x2c86bc: 0x8c42dee0
    ctx->pc = 0x2c86bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2c86c0: 0x8c460004
    ctx->pc = 0x2c86c0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c86c4: 0x27a40010
    ctx->pc = 0x2c86c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c86c8: 0x26450030
    ctx->pc = 0x2c86c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 48));
    // 0x2c86cc: 0xc0b626d
    ctx->pc = 0x2C86CCu;
    SET_GPR_U32(ctx, 31, 0x2C86D4u);
    ctx->pc = 0x2C86D0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 720));
    ctx->pc = 0x2D89B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_002D89B4_0x2d89b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C86D4u; }
    }
    if (ctx->pc != 0x2C86D4u) { return; }
    ctx->pc = 0x2C86D4u;
    // 0x2c86d4: 0x44800000
    ctx->pc = 0x2c86d4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2c86d8: 0x4600a032
    ctx->pc = 0x2c86d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c86dc: 0x0
    ctx->pc = 0x2c86dcu;
    // NOP
    // 0x2c86e0: 0x45000002
    ctx->pc = 0x2C86E0u;
    {
        const bool branch_taken_0x2c86e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C86E4u;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        if (branch_taken_0x2c86e0) {
            ctx->pc = 0x2C86ECu;
            goto label_2c86ec;
        }
    }
    ctx->pc = 0x2C86E8u;
    // 0x2c86e8: 0xc7ac001c
    ctx->pc = 0x2c86e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c86ec:
    // 0x2c86ec: 0x240202d
    ctx->pc = 0x2c86ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c86f0: 0x220282d
    ctx->pc = 0x2c86f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c86f4: 0xc0b1eee
    ctx->pc = 0x2C86F4u;
    SET_GPR_U32(ctx, 31, 0x2C86FCu);
    ctx->pc = 0x2C86F8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
    ctx->pc = 0x2C7BB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddSortObject_0x2c7bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C86FCu; }
    }
    if (ctx->pc != 0x2C86FCu) { return; }
    ctx->pc = 0x2C86FCu;
    // 0x2c86fc: 0x1000000a
    ctx->pc = 0x2C86FCu;
    {
        const bool branch_taken_0x2c86fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C8700u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2c86fc) {
            ctx->pc = 0x2C8728u;
            goto label_2c8728;
        }
    }
    ctx->pc = 0x2C8704u;
label_2c8704:
    // 0x2c8704: 0xc0af69e
    ctx->pc = 0x2C8704u;
    SET_GPR_U32(ctx, 31, 0x2C870Cu);
    ctx->pc = 0x2C8708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BDA78u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSendObjTextures_0x2bda78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C870Cu; }
    }
    if (ctx->pc != 0x2C870Cu) { return; }
    ctx->pc = 0x2C870Cu;
    // 0x2c870c: 0x3c100037
    ctx->pc = 0x2c870cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)55 << 16));
    // 0x2c8710: 0x240202d
    ctx->pc = 0x2c8710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8714: 0x220282d
    ctx->pc = 0x2c8714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8718: 0xc0af988
    ctx->pc = 0x2C8718u;
    SET_GPR_U32(ctx, 31, 0x2C8720u);
    ctx->pc = 0x2C871Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 10608)));
    ctx->pc = 0x2BE620u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDrawObject_0x2be620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8720u; }
    }
    if (ctx->pc != 0x2C8720u) { return; }
    ctx->pc = 0x2C8720u;
    // 0x2c8720: 0xae022970
    ctx->pc = 0x2c8720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10608), GPR_U32(ctx, 2));
    // 0x2c8724: 0xdfbf0050
    ctx->pc = 0x2c8724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2c8728:
    // 0x2c8728: 0xdfb20040
    ctx->pc = 0x2c8728u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c872c: 0xdfb10030
    ctx->pc = 0x2c872cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c8730: 0xdfb00020
    ctx->pc = 0x2c8730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c8734: 0xc7b50068
    ctx->pc = 0x2c8734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c8738: 0xc7b40060
    ctx->pc = 0x2c8738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c873c: 0x3e00008
    ctx->pc = 0x2C873Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8740u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C85A0u: goto label_2c85a0;
            case 0x2C85F4u: goto label_2c85f4;
            case 0x2C8604u: goto label_2c8604;
            case 0x2C8648u: goto label_2c8648;
            case 0x2C8654u: goto label_2c8654;
            case 0x2C8670u: goto label_2c8670;
            case 0x2C8674u: goto label_2c8674;
            case 0x2C86BCu: goto label_2c86bc;
            case 0x2C86ECu: goto label_2c86ec;
            case 0x2C8704u: goto label_2c8704;
            case 0x2C8728u: goto label_2c8728;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C8744u;
}
