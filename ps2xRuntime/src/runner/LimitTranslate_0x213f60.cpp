#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LimitTranslate
// Address: 0x213f60 - 0x214128
void LimitTranslate_0x213f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x213f60u;

    // 0x213f60: 0x27bdffe0
    ctx->pc = 0x213f60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x213f64: 0x80302d
    ctx->pc = 0x213f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213f68: 0xafa00010
    ctx->pc = 0x213f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x213f6c: 0xafa00014
    ctx->pc = 0x213f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x213f70: 0xafa00018
    ctx->pc = 0x213f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x213f74: 0xafa00000
    ctx->pc = 0x213f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x213f78: 0xafa00004
    ctx->pc = 0x213f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x213f7c: 0xafa00008
    ctx->pc = 0x213f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x213f80: 0x80c501a4
    ctx->pc = 0x213f80u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 420)));
    // 0x213f84: 0x3c020032
    ctx->pc = 0x213f84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x213f88: 0x8cc301a4
    ctx->pc = 0x213f88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 420)));
    // 0x213f8c: 0x60582d
    ctx->pc = 0x213f8cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213f90: 0x8c42f778
    ctx->pc = 0x213f90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965112)));
    // 0x213f94: 0x621821
    ctx->pc = 0x213f94u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x213f98: 0xa3182a
    ctx->pc = 0x213f98u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 3)));
    // 0x213f9c: 0x10600030
    ctx->pc = 0x213F9Cu;
    {
        const bool branch_taken_0x213f9c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x213FA0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x213f9c) {
            ctx->pc = 0x214060u;
            goto label_214060;
        }
    }
    ctx->pc = 0x213FA4u;
    // 0x213fa4: 0x3c0d0032
    ctx->pc = 0x213fa4u;
    SET_GPR_U32(ctx, 13, ((uint32_t)50 << 16));
    // 0x213fa8: 0x382d
    ctx->pc = 0x213fa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213fac: 0x240c000c
    ctx->pc = 0x213facu;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 12));
    // 0x213fb0: 0x24ca0114
    ctx->pc = 0x213fb0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 6), 276));
    // 0x213fb4: 0xc4c600a4
    ctx->pc = 0x213fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x213fb8: 0x24c90118
    ctx->pc = 0x213fb8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 6), 280));
    // 0x213fbc: 0xc4c500a8
    ctx->pc = 0x213fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x213fc0: 0x24c8011c
    ctx->pc = 0x213fc0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 6), 284));
    // 0x213fc4: 0xc4c400ac
    ctx->pc = 0x213fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_213fc8:
    // 0x213fc8: 0x8da4f778
    ctx->pc = 0x213fc8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 13), 4294965112)));
    // 0x213fcc: 0xa4001a
    ctx->pc = 0x213fccu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x213fd0: 0x1810
    ctx->pc = 0x213fd0u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x213fd4: 0x50870001
    ctx->pc = 0x213FD4u;
    {
        const bool branch_taken_0x213fd4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 7));
        if (branch_taken_0x213fd4) {
            ctx->pc = 0x213FD8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x213FDCu;
            goto label_213fdc;
        }
    }
    ctx->pc = 0x213FDCu;
label_213fdc:
    // 0x213fdc: 0x6c1818
    ctx->pc = 0x213fdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x213fe0: 0x1431021
    ctx->pc = 0x213fe0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x213fe4: 0xc4430000
    ctx->pc = 0x213fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x213fe8: 0x460618c1
    ctx->pc = 0x213fe8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x213fec: 0xe7a30010
    ctx->pc = 0x213fecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x213ff0: 0x50870001
    ctx->pc = 0x213FF0u;
    {
        const bool branch_taken_0x213ff0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 7));
        if (branch_taken_0x213ff0) {
            ctx->pc = 0x213FF4u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x213FF8u;
            goto label_213ff8;
        }
    }
    ctx->pc = 0x213FF8u;
label_213ff8:
    // 0x213ff8: 0x1231021
    ctx->pc = 0x213ff8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x213ffc: 0xc4420000
    ctx->pc = 0x213ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214000: 0x46051081
    ctx->pc = 0x214000u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x214004: 0xe7a20014
    ctx->pc = 0x214004u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x214008: 0x50870001
    ctx->pc = 0x214008u;
    {
        const bool branch_taken_0x214008 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 7));
        if (branch_taken_0x214008) {
            ctx->pc = 0x21400Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x214010u;
            goto label_214010;
        }
    }
    ctx->pc = 0x214010u;
label_214010:
    // 0x214010: 0x1031821
    ctx->pc = 0x214010u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x214014: 0xc4610000
    ctx->pc = 0x214014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214018: 0x46040841
    ctx->pc = 0x214018u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x21401c: 0xe7a10018
    ctx->pc = 0x21401cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x214020: 0xc7a00000
    ctx->pc = 0x214020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214024: 0x46030000
    ctx->pc = 0x214024u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x214028: 0xe7a00000
    ctx->pc = 0x214028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x21402c: 0xc7a00004
    ctx->pc = 0x21402cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214030: 0x46020000
    ctx->pc = 0x214030u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x214034: 0xe7a00004
    ctx->pc = 0x214034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x214038: 0xc7a00008
    ctx->pc = 0x214038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21403c: 0x46010000
    ctx->pc = 0x21403cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x214040: 0x24a20001
    ctx->pc = 0x214040u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 1));
    // 0x214044: 0x21600
    ctx->pc = 0x214044u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
    // 0x214048: 0x22e03
    ctx->pc = 0x214048u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 24));
    // 0x21404c: 0x1642021
    ctx->pc = 0x21404cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x214050: 0xa4202a
    ctx->pc = 0x214050u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 4)));
    // 0x214054: 0x1480ffdc
    ctx->pc = 0x214054u;
    {
        const bool branch_taken_0x214054 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x214058u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        if (branch_taken_0x214054) {
            ctx->pc = 0x213FC8u;
            goto label_213fc8;
        }
    }
    ctx->pc = 0x21405Cu;
    // 0x21405c: 0x3c020032
    ctx->pc = 0x21405cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_214060:
    // 0x214060: 0xc443f778
    ctx->pc = 0x214060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x214064: 0x468018e0
    ctx->pc = 0x214064u;
    ctx->f[3] = FPU_CVT_S_W(*(int32_t*)&ctx->f[3]);
    // 0x214068: 0x3c013f80
    ctx->pc = 0x214068u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x21406c: 0x44811000
    ctx->pc = 0x21406cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x214070: 0x0
    ctx->pc = 0x214070u;
    // NOP
    // 0x214074: 0x0
    ctx->pc = 0x214074u;
    // NOP
    // 0x214078: 0x460310c3
    ctx->pc = 0x214078u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[3] = ctx->f[2] / ctx->f[3];
    // 0x21407c: 0xc7a00000
    ctx->pc = 0x21407cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214080: 0x460018c2
    ctx->pc = 0x214080u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x214084: 0xe7a30000
    ctx->pc = 0x214084u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x214088: 0xc440f778
    ctx->pc = 0x214088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21408c: 0x46800020
    ctx->pc = 0x21408cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x214090: 0x0
    ctx->pc = 0x214090u;
    // NOP
    // 0x214094: 0x0
    ctx->pc = 0x214094u;
    // NOP
    // 0x214098: 0x46001003
    ctx->pc = 0x214098u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x21409c: 0xc7a10004
    ctx->pc = 0x21409cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2140a0: 0x46010042
    ctx->pc = 0x2140a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2140a4: 0xe7a10004
    ctx->pc = 0x2140a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2140a8: 0xc440f778
    ctx->pc = 0x2140a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2140ac: 0x46800020
    ctx->pc = 0x2140acu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2140b0: 0x0
    ctx->pc = 0x2140b0u;
    // NOP
    // 0x2140b4: 0x0
    ctx->pc = 0x2140b4u;
    // NOP
    // 0x2140b8: 0x46001083
    ctx->pc = 0x2140b8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
    // 0x2140bc: 0xc7a00008
    ctx->pc = 0x2140bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2140c0: 0x46001082
    ctx->pc = 0x2140c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2140c4: 0xe7a20008
    ctx->pc = 0x2140c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2140c8: 0xc4c000a4
    ctx->pc = 0x2140c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2140cc: 0x46030000
    ctx->pc = 0x2140ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2140d0: 0xe4c000a4
    ctx->pc = 0x2140d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 164), bits); }
    // 0x2140d4: 0xc4c000a8
    ctx->pc = 0x2140d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2140d8: 0x46010000
    ctx->pc = 0x2140d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2140dc: 0xe4c000a8
    ctx->pc = 0x2140dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 168), bits); }
    // 0x2140e0: 0xc4c000ac
    ctx->pc = 0x2140e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2140e4: 0x46020000
    ctx->pc = 0x2140e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2140e8: 0xe4c000ac
    ctx->pc = 0x2140e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 172), bits); }
    // 0x2140ec: 0x44800000
    ctx->pc = 0x2140ecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2140f0: 0x46001832
    ctx->pc = 0x2140f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2140f4: 0x0
    ctx->pc = 0x2140f4u;
    // NOP
    // 0x2140f8: 0x45000008
    ctx->pc = 0x2140F8u;
    {
        const bool branch_taken_0x2140f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2140FCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2140f8) {
            ctx->pc = 0x21411Cu;
            goto label_21411c;
        }
    }
    ctx->pc = 0x214100u;
    // 0x214100: 0x46000832
    ctx->pc = 0x214100u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214104: 0x0
    ctx->pc = 0x214104u;
    // NOP
    // 0x214108: 0x45020005
    ctx->pc = 0x214108u;
    {
        const bool branch_taken_0x214108 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x214108) {
            ctx->pc = 0x21410Cu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x214120u;
            goto label_214120;
        }
    }
    ctx->pc = 0x214110u;
    // 0x214110: 0x46001032
    ctx->pc = 0x214110u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214114: 0x45010002
    ctx->pc = 0x214114u;
    {
        const bool branch_taken_0x214114 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x214114) {
            ctx->pc = 0x214120u;
            goto label_214120;
        }
    }
    ctx->pc = 0x21411Cu;
label_21411c:
    // 0x21411c: 0x24020001
    ctx->pc = 0x21411cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_214120:
    // 0x214120: 0x3e00008
    ctx->pc = 0x214120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214124u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x213FC8u: goto label_213fc8;
            case 0x213FDCu: goto label_213fdc;
            case 0x213FF8u: goto label_213ff8;
            case 0x214010u: goto label_214010;
            case 0x214060u: goto label_214060;
            case 0x21411Cu: goto label_21411c;
            case 0x214120u: goto label_214120;
            default: break;
        }
        return;
    }
    ctx->pc = 0x214128u;
}
