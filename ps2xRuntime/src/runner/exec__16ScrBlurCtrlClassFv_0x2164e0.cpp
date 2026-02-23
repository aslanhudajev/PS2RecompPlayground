#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: exec__16ScrBlurCtrlClassFv
// Address: 0x2164e0 - 0x2165ac
void exec__16ScrBlurCtrlClassFv_0x2164e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("exec__16ScrBlurCtrlClassFv");


    ctx->pc = 0x2164e0u;

    // 0x2164e0: 0x27bdffe0
    ctx->pc = 0x2164e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2164e4: 0x7fbf0010
    ctx->pc = 0x2164e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2164e8: 0x7fb00000
    ctx->pc = 0x2164e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2164ec: 0x8c830010
    ctx->pc = 0x2164ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2164f0: 0x1060001a
    ctx->pc = 0x2164F0u;
    {
        const bool branch_taken_0x2164f0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2164F4u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2164f0) {
            ctx->pc = 0x21655Cu;
            goto label_21655c;
        }
    }
    ctx->pc = 0x2164F8u;
    // 0x2164f8: 0x2462ffff
    ctx->pc = 0x2164f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2164fc: 0xae020010
    ctx->pc = 0x2164fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x216500: 0xc601000c
    ctx->pc = 0x216500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x216504: 0xc6000008
    ctx->pc = 0x216504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216508: 0x44801000
    ctx->pc = 0x216508u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x21650c: 0x46010000
    ctx->pc = 0x21650cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x216510: 0x46020034
    ctx->pc = 0x216510u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x216514: 0x0
    ctx->pc = 0x216514u;
    // NOP
    // 0x216518: 0x45000003
    ctx->pc = 0x216518u;
    {
        const bool branch_taken_0x216518 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21651Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        if (branch_taken_0x216518) {
            ctx->pc = 0x216528u;
            goto label_216528;
        }
    }
    ctx->pc = 0x216520u;
    // 0x216520: 0x10000009
    ctx->pc = 0x216520u;
    {
        const bool branch_taken_0x216520 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x216524u;
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        if (branch_taken_0x216520) {
            ctx->pc = 0x216548u;
            goto label_216548;
        }
    }
    ctx->pc = 0x216528u;
label_216528:
    // 0x216528: 0x3c0242fe
    ctx->pc = 0x216528u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17150 << 16));
    // 0x21652c: 0x44820800
    ctx->pc = 0x21652cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x216530: 0x0
    ctx->pc = 0x216530u;
    // NOP
    // 0x216534: 0x46010036
    ctx->pc = 0x216534u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x216538: 0x0
    ctx->pc = 0x216538u;
    // NOP
    // 0x21653c: 0x45010002
    ctx->pc = 0x21653Cu;
    {
        const bool branch_taken_0x21653c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21653c) {
            ctx->pc = 0x216548u;
            goto label_216548;
        }
    }
    ctx->pc = 0x216544u;
    // 0x216544: 0xe6010008
    ctx->pc = 0x216544u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_216548:
    // 0x216548: 0xc6000008
    ctx->pc = 0x216548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21654c: 0x46000024
    ctx->pc = 0x21654cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x216550: 0x44020000
    ctx->pc = 0x216550u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x216554: 0xc06c438
    ctx->pc = 0x216554u;
    SET_GPR_U32(ctx, 31, 0x21655Cu);
    ctx->pc = 0x216558u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 127));
    ctx->pc = 0x1B10E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlBlurSetStrength_0x1b10e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21655Cu; }
        else if (ctx->pc != 0x21655Cu) { ctx->pc = 0x21655Cu; }
    }
    if (ctx->pc != 0x21655Cu) { return; }
    ctx->pc = 0x21655Cu;
label_21655c:
    // 0x21655c: 0x8e030000
    ctx->pc = 0x21655cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x216560: 0x1060000e
    ctx->pc = 0x216560u;
    {
        const bool branch_taken_0x216560 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x216560) {
            ctx->pc = 0x21659Cu;
            goto label_21659c;
        }
    }
    ctx->pc = 0x216568u;
    // 0x216568: 0x8e020014
    ctx->pc = 0x216568u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x21656c: 0x14400003
    ctx->pc = 0x21656Cu;
    {
        const bool branch_taken_0x21656c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x216570u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21656c) {
            ctx->pc = 0x21657Cu;
            goto label_21657c;
        }
    }
    ctx->pc = 0x216574u;
    // 0x216574: 0xc06c3d8
    ctx->pc = 0x216574u;
    SET_GPR_U32(ctx, 31, 0x21657Cu);
    ctx->pc = 0x216578u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B0F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlBlurSetFrameBuffer_0x1b0f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21657Cu; }
        else if (ctx->pc != 0x21657Cu) { ctx->pc = 0x21657Cu; }
    }
    if (ctx->pc != 0x21657Cu) { return; }
    ctx->pc = 0x21657Cu;
label_21657c:
    // 0x21657c: 0xc06c2cc
    ctx->pc = 0x21657Cu;
    SET_GPR_U32(ctx, 31, 0x216584u);
    ctx->pc = 0x1B0B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlBlur_0x1b0b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216584u; }
        else if (ctx->pc != 0x216584u) { ctx->pc = 0x216584u; }
    }
    if (ctx->pc != 0x216584u) { return; }
    ctx->pc = 0x216584u;
    // 0x216584: 0x8e030014
    ctx->pc = 0x216584u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x216588: 0x10600004
    ctx->pc = 0x216588u;
    {
        const bool branch_taken_0x216588 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x216588) {
            ctx->pc = 0x21659Cu;
            goto label_21659c;
        }
    }
    ctx->pc = 0x216590u;
    // 0x216590: 0x8c640008
    ctx->pc = 0x216590u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x216594: 0xc06c3d8
    ctx->pc = 0x216594u;
    SET_GPR_U32(ctx, 31, 0x21659Cu);
    ctx->pc = 0x216598u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1B0F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlBlurSetFrameBuffer_0x1b0f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21659Cu; }
        else if (ctx->pc != 0x21659Cu) { ctx->pc = 0x21659Cu; }
    }
    if (ctx->pc != 0x21659Cu) { return; }
    ctx->pc = 0x21659Cu;
label_21659c:
    // 0x21659c: 0x7bbf0010
    ctx->pc = 0x21659cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2165a0: 0x7bb00000
    ctx->pc = 0x2165a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2165a4: 0x3e00008
    ctx->pc = 0x2165A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2165A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216528u: goto label_216528;
            case 0x216548u: goto label_216548;
            case 0x21655Cu: goto label_21655c;
            case 0x21657Cu: goto label_21657c;
            case 0x21659Cu: goto label_21659c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2165ACu;
}
