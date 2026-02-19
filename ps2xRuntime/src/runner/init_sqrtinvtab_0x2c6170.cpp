#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_sqrtinvtab
// Address: 0x2c6170 - 0x2c63c0
void init_sqrtinvtab_0x2c6170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c6170u;

    // 0x2c6170: 0x27bdffb0
    ctx->pc = 0x2c6170u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c6174: 0xffbf0030
    ctx->pc = 0x2c6174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c6178: 0xffb20020
    ctx->pc = 0x2c6178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c617c: 0xffb10010
    ctx->pc = 0x2c617cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c6180: 0xffb00000
    ctx->pc = 0x2c6180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c6184: 0xe7b50048
    ctx->pc = 0x2c6184u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2c6188: 0xe7b40040
    ctx->pc = 0x2c6188u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2c618c: 0x3c020038
    ctx->pc = 0x2c618cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c6190: 0x2451b3c8
    ctx->pc = 0x2c6190u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294947784));
    // 0x2c6194: 0x24100001
    ctx->pc = 0x2c6194u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6198: 0x3c013d4c
    ctx->pc = 0x2c6198u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15692 << 16));
    // 0x2c619c: 0x3421cccd
    ctx->pc = 0x2c619cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x2c61a0: 0x4481a800
    ctx->pc = 0x2c61a0u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x2c61a4: 0x3c013f80
    ctx->pc = 0x2c61a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2c61a8: 0x4481a000
    ctx->pc = 0x2c61a8u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x2c61ac: 0x0
    ctx->pc = 0x2c61acu;
    // NOP
label_2c61b0:
    // 0x2c61b0: 0x44900000
    ctx->pc = 0x2c61b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 16);
    // 0x2c61b4: 0x46800020
    ctx->pc = 0x2c61b4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c61b8: 0x46150302
    ctx->pc = 0x2c61b8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2c61bc: 0x220902d
    ctx->pc = 0x2c61bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c61c0: 0x0
    ctx->pc = 0x2c61c0u;
    // NOP
    // 0x2c61c4: 0x0
    ctx->pc = 0x2c61c4u;
    // NOP
    // 0x2c61c8: 0x460c0004
    ctx->pc = 0x2c61c8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2c61cc: 0x46000032
    ctx->pc = 0x2c61ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c61d0: 0x0
    ctx->pc = 0x2c61d0u;
    // NOP
    // 0x2c61d4: 0x45010003
    ctx->pc = 0x2C61D4u;
    {
        const bool branch_taken_0x2c61d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C61D8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x2c61d4) {
            ctx->pc = 0x2C61E4u;
            goto label_2c61e4;
        }
    }
    ctx->pc = 0x2C61DCu;
    // 0x2c61dc: 0xc0ba284
    ctx->pc = 0x2C61DCu;
    SET_GPR_U32(ctx, 31, 0x2C61E4u);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C61E4u; }
    }
    if (ctx->pc != 0x2C61E4u) { return; }
    ctx->pc = 0x2C61E4u;
label_2c61e4:
    // 0x2c61e4: 0x0
    ctx->pc = 0x2c61e4u;
    // NOP
    // 0x2c61e8: 0x0
    ctx->pc = 0x2c61e8u;
    // NOP
    // 0x2c61ec: 0x4600a003
    ctx->pc = 0x2c61ecu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
    // 0x2c61f0: 0x26100001
    ctx->pc = 0x2c61f0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c61f4: 0x2a0200c9
    ctx->pc = 0x2c61f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 201));
    // 0x2c61f8: 0x1440ffed
    ctx->pc = 0x2C61F8u;
    {
        const bool branch_taken_0x2c61f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C61FCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        if (branch_taken_0x2c61f8) {
            ctx->pc = 0x2C61B0u;
            goto label_2c61b0;
        }
    }
    ctx->pc = 0x2C6200u;
    // 0x2c6200: 0x24100001
    ctx->pc = 0x2c6200u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6204: 0x3c013f80
    ctx->pc = 0x2c6204u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2c6208: 0x4481a000
    ctx->pc = 0x2c6208u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x2c620c: 0x0
    ctx->pc = 0x2c620cu;
    // NOP
label_2c6210:
    // 0x2c6210: 0x44906000
    ctx->pc = 0x2c6210u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 16);
    // 0x2c6214: 0x46806320
    ctx->pc = 0x2c6214u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x2c6218: 0x220902d
    ctx->pc = 0x2c6218u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c621c: 0x0
    ctx->pc = 0x2c621cu;
    // NOP
    // 0x2c6220: 0x0
    ctx->pc = 0x2c6220u;
    // NOP
    // 0x2c6224: 0x460c0004
    ctx->pc = 0x2c6224u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2c6228: 0x46000032
    ctx->pc = 0x2c6228u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c622c: 0x0
    ctx->pc = 0x2c622cu;
    // NOP
    // 0x2c6230: 0x45010003
    ctx->pc = 0x2C6230u;
    {
        const bool branch_taken_0x2c6230 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C6234u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x2c6230) {
            ctx->pc = 0x2C6240u;
            goto label_2c6240;
        }
    }
    ctx->pc = 0x2C6238u;
    // 0x2c6238: 0xc0ba284
    ctx->pc = 0x2C6238u;
    SET_GPR_U32(ctx, 31, 0x2C6240u);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6240u; }
    }
    if (ctx->pc != 0x2C6240u) { return; }
    ctx->pc = 0x2C6240u;
label_2c6240:
    // 0x2c6240: 0x0
    ctx->pc = 0x2c6240u;
    // NOP
    // 0x2c6244: 0x0
    ctx->pc = 0x2c6244u;
    // NOP
    // 0x2c6248: 0x4600a003
    ctx->pc = 0x2c6248u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
    // 0x2c624c: 0x26100001
    ctx->pc = 0x2c624cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c6250: 0x2a0200c9
    ctx->pc = 0x2c6250u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 201));
    // 0x2c6254: 0x1440ffee
    ctx->pc = 0x2C6254u;
    {
        const bool branch_taken_0x2c6254 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C6258u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        if (branch_taken_0x2c6254) {
            ctx->pc = 0x2C6210u;
            goto label_2c6210;
        }
    }
    ctx->pc = 0x2C625Cu;
    // 0x2c625c: 0x24100001
    ctx->pc = 0x2c625cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6260: 0x3c0141a0
    ctx->pc = 0x2c6260u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16800 << 16));
    // 0x2c6264: 0x4481a800
    ctx->pc = 0x2c6264u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x2c6268: 0x3c013f80
    ctx->pc = 0x2c6268u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2c626c: 0x4481a000
    ctx->pc = 0x2c626cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_2c6270:
    // 0x2c6270: 0x44900000
    ctx->pc = 0x2c6270u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 16);
    // 0x2c6274: 0x46800020
    ctx->pc = 0x2c6274u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c6278: 0x46150302
    ctx->pc = 0x2c6278u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2c627c: 0x220902d
    ctx->pc = 0x2c627cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6280: 0x0
    ctx->pc = 0x2c6280u;
    // NOP
    // 0x2c6284: 0x0
    ctx->pc = 0x2c6284u;
    // NOP
    // 0x2c6288: 0x460c0004
    ctx->pc = 0x2c6288u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2c628c: 0x46000032
    ctx->pc = 0x2c628cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6290: 0x0
    ctx->pc = 0x2c6290u;
    // NOP
    // 0x2c6294: 0x45010003
    ctx->pc = 0x2C6294u;
    {
        const bool branch_taken_0x2c6294 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C6298u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x2c6294) {
            ctx->pc = 0x2C62A4u;
            goto label_2c62a4;
        }
    }
    ctx->pc = 0x2C629Cu;
    // 0x2c629c: 0xc0ba284
    ctx->pc = 0x2C629Cu;
    SET_GPR_U32(ctx, 31, 0x2C62A4u);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C62A4u; }
    }
    if (ctx->pc != 0x2C62A4u) { return; }
    ctx->pc = 0x2C62A4u;
label_2c62a4:
    // 0x2c62a4: 0x0
    ctx->pc = 0x2c62a4u;
    // NOP
    // 0x2c62a8: 0x0
    ctx->pc = 0x2c62a8u;
    // NOP
    // 0x2c62ac: 0x4600a003
    ctx->pc = 0x2c62acu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
    // 0x2c62b0: 0x26100001
    ctx->pc = 0x2c62b0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c62b4: 0x2a0200c9
    ctx->pc = 0x2c62b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 201));
    // 0x2c62b8: 0x1440ffed
    ctx->pc = 0x2C62B8u;
    {
        const bool branch_taken_0x2c62b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C62BCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        if (branch_taken_0x2c62b8) {
            ctx->pc = 0x2C6270u;
            goto label_2c6270;
        }
    }
    ctx->pc = 0x2C62C0u;
    // 0x2c62c0: 0x24100001
    ctx->pc = 0x2c62c0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c62c4: 0x3c0143fa
    ctx->pc = 0x2c62c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17402 << 16));
    // 0x2c62c8: 0x4481a800
    ctx->pc = 0x2c62c8u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x2c62cc: 0x3c013f80
    ctx->pc = 0x2c62ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2c62d0: 0x4481a000
    ctx->pc = 0x2c62d0u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x2c62d4: 0x0
    ctx->pc = 0x2c62d4u;
    // NOP
label_2c62d8:
    // 0x2c62d8: 0x44900000
    ctx->pc = 0x2c62d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 16);
    // 0x2c62dc: 0x46800020
    ctx->pc = 0x2c62dcu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c62e0: 0x46150302
    ctx->pc = 0x2c62e0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2c62e4: 0x220902d
    ctx->pc = 0x2c62e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c62e8: 0x0
    ctx->pc = 0x2c62e8u;
    // NOP
    // 0x2c62ec: 0x0
    ctx->pc = 0x2c62ecu;
    // NOP
    // 0x2c62f0: 0x460c0004
    ctx->pc = 0x2c62f0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2c62f4: 0x46000032
    ctx->pc = 0x2c62f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c62f8: 0x0
    ctx->pc = 0x2c62f8u;
    // NOP
    // 0x2c62fc: 0x45010003
    ctx->pc = 0x2C62FCu;
    {
        const bool branch_taken_0x2c62fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C6300u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x2c62fc) {
            ctx->pc = 0x2C630Cu;
            goto label_2c630c;
        }
    }
    ctx->pc = 0x2C6304u;
    // 0x2c6304: 0xc0ba284
    ctx->pc = 0x2C6304u;
    SET_GPR_U32(ctx, 31, 0x2C630Cu);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C630Cu; }
    }
    if (ctx->pc != 0x2C630Cu) { return; }
    ctx->pc = 0x2C630Cu;
label_2c630c:
    // 0x2c630c: 0x0
    ctx->pc = 0x2c630cu;
    // NOP
    // 0x2c6310: 0x0
    ctx->pc = 0x2c6310u;
    // NOP
    // 0x2c6314: 0x4600a003
    ctx->pc = 0x2c6314u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
    // 0x2c6318: 0x26100001
    ctx->pc = 0x2c6318u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c631c: 0x2a0200c9
    ctx->pc = 0x2c631cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 201));
    // 0x2c6320: 0x1440ffed
    ctx->pc = 0x2C6320u;
    {
        const bool branch_taken_0x2c6320 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C6324u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        if (branch_taken_0x2c6320) {
            ctx->pc = 0x2C62D8u;
            goto label_2c62d8;
        }
    }
    ctx->pc = 0x2C6328u;
    // 0x2c6328: 0x24100001
    ctx->pc = 0x2c6328u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c632c: 0x3c01461c
    ctx->pc = 0x2c632cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17948 << 16));
    // 0x2c6330: 0x34214000
    ctx->pc = 0x2c6330u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 16384));
    // 0x2c6334: 0x4481a800
    ctx->pc = 0x2c6334u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x2c6338: 0x3c013f80
    ctx->pc = 0x2c6338u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2c633c: 0x4481a000
    ctx->pc = 0x2c633cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_2c6340:
    // 0x2c6340: 0x44900000
    ctx->pc = 0x2c6340u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 16);
    // 0x2c6344: 0x46800020
    ctx->pc = 0x2c6344u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c6348: 0x46150302
    ctx->pc = 0x2c6348u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2c634c: 0x220902d
    ctx->pc = 0x2c634cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6350: 0x0
    ctx->pc = 0x2c6350u;
    // NOP
    // 0x2c6354: 0x0
    ctx->pc = 0x2c6354u;
    // NOP
    // 0x2c6358: 0x460c0004
    ctx->pc = 0x2c6358u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2c635c: 0x46000032
    ctx->pc = 0x2c635cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6360: 0x0
    ctx->pc = 0x2c6360u;
    // NOP
    // 0x2c6364: 0x45010003
    ctx->pc = 0x2C6364u;
    {
        const bool branch_taken_0x2c6364 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C6368u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x2c6364) {
            ctx->pc = 0x2C6374u;
            goto label_2c6374;
        }
    }
    ctx->pc = 0x2C636Cu;
    // 0x2c636c: 0xc0ba284
    ctx->pc = 0x2C636Cu;
    SET_GPR_U32(ctx, 31, 0x2C6374u);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6374u; }
    }
    if (ctx->pc != 0x2C6374u) { return; }
    ctx->pc = 0x2C6374u;
label_2c6374:
    // 0x2c6374: 0x0
    ctx->pc = 0x2c6374u;
    // NOP
    // 0x2c6378: 0x0
    ctx->pc = 0x2c6378u;
    // NOP
    // 0x2c637c: 0x4600a003
    ctx->pc = 0x2c637cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
    // 0x2c6380: 0x26100001
    ctx->pc = 0x2c6380u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c6384: 0x2a0200c9
    ctx->pc = 0x2c6384u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 201));
    // 0x2c6388: 0x1440ffed
    ctx->pc = 0x2C6388u;
    {
        const bool branch_taken_0x2c6388 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C638Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        if (branch_taken_0x2c6388) {
            ctx->pc = 0x2C6340u;
            goto label_2c6340;
        }
    }
    ctx->pc = 0x2C6390u;
    // 0x2c6390: 0x3c013727
    ctx->pc = 0x2c6390u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14119 << 16));
    // 0x2c6394: 0x3421c5ac
    ctx->pc = 0x2c6394u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 50604));
    // 0x2c6398: 0x44810000
    ctx->pc = 0x2c6398u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c639c: 0xe6200000
    ctx->pc = 0x2c639cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2c63a0: 0xdfbf0030
    ctx->pc = 0x2c63a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c63a4: 0xdfb20020
    ctx->pc = 0x2c63a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c63a8: 0xdfb10010
    ctx->pc = 0x2c63a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c63ac: 0xdfb00000
    ctx->pc = 0x2c63acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c63b0: 0xc7b50048
    ctx->pc = 0x2c63b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c63b4: 0xc7b40040
    ctx->pc = 0x2c63b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c63b8: 0x3e00008
    ctx->pc = 0x2C63B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C63BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C61B0u: goto label_2c61b0;
            case 0x2C61E4u: goto label_2c61e4;
            case 0x2C6210u: goto label_2c6210;
            case 0x2C6240u: goto label_2c6240;
            case 0x2C6270u: goto label_2c6270;
            case 0x2C62A4u: goto label_2c62a4;
            case 0x2C62D8u: goto label_2c62d8;
            case 0x2C630Cu: goto label_2c630c;
            case 0x2C6340u: goto label_2c6340;
            case 0x2C6374u: goto label_2c6374;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C63C0u;
}
