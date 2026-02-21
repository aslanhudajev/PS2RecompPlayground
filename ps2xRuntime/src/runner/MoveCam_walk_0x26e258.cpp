#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MoveCam_walk
// Address: 0x26e258 - 0x26e564
void MoveCam_walk_0x26e258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26e258u;

    // 0x26e258: 0x27bdff20
    ctx->pc = 0x26e258u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x26e25c: 0xffbf00c0
    ctx->pc = 0x26e25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x26e260: 0xffb300b0
    ctx->pc = 0x26e260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 19));
    // 0x26e264: 0xffb200a0
    ctx->pc = 0x26e264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x26e268: 0xffb10090
    ctx->pc = 0x26e268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
    // 0x26e26c: 0xffb00080
    ctx->pc = 0x26e26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x26e270: 0xe7b400d0
    ctx->pc = 0x26e270u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x26e274: 0x80982d
    ctx->pc = 0x26e274u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e278: 0x240301a0
    ctx->pc = 0x26e278u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26e27c: 0x2631818
    ctx->pc = 0x26e27cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26e280: 0x3c020034
    ctx->pc = 0x26e280u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26e284: 0x2442eb60
    ctx->pc = 0x26e284u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x26e288: 0x166000ae
    ctx->pc = 0x26E288u;
    {
        const bool branch_taken_0x26e288 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x26E28Cu;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x26e288) {
            ctx->pc = 0x26E544u;
            goto label_26e544;
        }
    }
    ctx->pc = 0x26E290u;
    // 0x26e290: 0xc6400070
    ctx->pc = 0x26e290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e294: 0xe7a00070
    ctx->pc = 0x26e294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x26e298: 0xc6400074
    ctx->pc = 0x26e298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e29c: 0xe7a00074
    ctx->pc = 0x26e29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x26e2a0: 0xc6400078
    ctx->pc = 0x26e2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e2a4: 0xe7a00078
    ctx->pc = 0x26e2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x26e2a8: 0xc0b9e4a
    ctx->pc = 0x26E2A8u;
    SET_GPR_U32(ctx, 31, 0x26E2B0u);
    ctx->pc = 0x26E2ACu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E2B0u; }
    }
    if (ctx->pc != 0x26E2B0u) { return; }
    ctx->pc = 0x26E2B0u;
    // 0x26e2b0: 0xe7a00060
    ctx->pc = 0x26e2b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x26e2b4: 0xafa00064
    ctx->pc = 0x26e2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x26e2b8: 0xc0b9dce
    ctx->pc = 0x26E2B8u;
    SET_GPR_U32(ctx, 31, 0x26E2C0u);
    ctx->pc = 0x26E2BCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E2C0u; }
    }
    if (ctx->pc != 0x26E2C0u) { return; }
    ctx->pc = 0x26E2C0u;
    // 0x26e2c0: 0xe7a00068
    ctx->pc = 0x26e2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x26e2c4: 0x3c030031
    ctx->pc = 0x26e2c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x26e2c8: 0x8c62ffbc
    ctx->pc = 0x26e2c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x26e2cc: 0x4400005
    ctx->pc = 0x26E2CCu;
    {
        const bool branch_taken_0x26e2cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26E2D0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x26e2cc) {
            ctx->pc = 0x26E2E4u;
            goto label_26e2e4;
        }
    }
    ctx->pc = 0x26E2D4u;
    // 0x26e2d4: 0x44820800
    ctx->pc = 0x26e2d4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x26e2d8: 0x46800860
    ctx->pc = 0x26e2d8u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x26e2dc: 0x10000008
    ctx->pc = 0x26E2DCu;
    {
        const bool branch_taken_0x26e2dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x26e2dc) {
            ctx->pc = 0x26E300u;
            goto label_26e300;
        }
    }
    ctx->pc = 0x26E2E4u;
label_26e2e4:
    // 0x26e2e4: 0x8c820000
    ctx->pc = 0x26e2e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26e2e8: 0x30430001
    ctx->pc = 0x26e2e8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x26e2ec: 0x21042
    ctx->pc = 0x26e2ecu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x26e2f0: 0x621825
    ctx->pc = 0x26e2f0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26e2f4: 0x44830800
    ctx->pc = 0x26e2f4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x26e2f8: 0x46800860
    ctx->pc = 0x26e2f8u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x26e2fc: 0x46010840
    ctx->pc = 0x26e2fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_26e300:
    // 0x26e300: 0x3c013dcc
    ctx->pc = 0x26e300u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x26e304: 0x3421cccd
    ctx->pc = 0x26e304u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x26e308: 0x44810000
    ctx->pc = 0x26e308u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26e30c: 0x46000802
    ctx->pc = 0x26e30cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26e310: 0xc7a10060
    ctx->pc = 0x26e310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e314: 0x46010002
    ctx->pc = 0x26e314u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26e318: 0xe7a00060
    ctx->pc = 0x26e318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x26e31c: 0x3c030031
    ctx->pc = 0x26e31cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x26e320: 0x8c62ffbc
    ctx->pc = 0x26e320u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x26e324: 0x4400005
    ctx->pc = 0x26E324u;
    {
        const bool branch_taken_0x26e324 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26E328u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x26e324) {
            ctx->pc = 0x26E33Cu;
            goto label_26e33c;
        }
    }
    ctx->pc = 0x26E32Cu;
    // 0x26e32c: 0x44820800
    ctx->pc = 0x26e32cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x26e330: 0x46800860
    ctx->pc = 0x26e330u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x26e334: 0x10000008
    ctx->pc = 0x26E334u;
    {
        const bool branch_taken_0x26e334 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x26e334) {
            ctx->pc = 0x26E358u;
            goto label_26e358;
        }
    }
    ctx->pc = 0x26E33Cu;
label_26e33c:
    // 0x26e33c: 0x8c820000
    ctx->pc = 0x26e33cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26e340: 0x30430001
    ctx->pc = 0x26e340u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x26e344: 0x21042
    ctx->pc = 0x26e344u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x26e348: 0x621825
    ctx->pc = 0x26e348u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26e34c: 0x44830800
    ctx->pc = 0x26e34cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x26e350: 0x46800860
    ctx->pc = 0x26e350u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x26e354: 0x46010840
    ctx->pc = 0x26e354u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_26e358:
    // 0x26e358: 0x3c013dcc
    ctx->pc = 0x26e358u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x26e35c: 0x3421cccd
    ctx->pc = 0x26e35cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x26e360: 0x44810000
    ctx->pc = 0x26e360u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26e364: 0x46000802
    ctx->pc = 0x26e364u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26e368: 0xc7a10064
    ctx->pc = 0x26e368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e36c: 0x46010002
    ctx->pc = 0x26e36cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26e370: 0xe7a00064
    ctx->pc = 0x26e370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x26e374: 0x3c030031
    ctx->pc = 0x26e374u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x26e378: 0x8c62ffbc
    ctx->pc = 0x26e378u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x26e37c: 0x4400005
    ctx->pc = 0x26E37Cu;
    {
        const bool branch_taken_0x26e37c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26E380u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x26e37c) {
            ctx->pc = 0x26E394u;
            goto label_26e394;
        }
    }
    ctx->pc = 0x26E384u;
    // 0x26e384: 0x44821000
    ctx->pc = 0x26e384u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x26e388: 0x468010a0
    ctx->pc = 0x26e388u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x26e38c: 0x10000008
    ctx->pc = 0x26E38Cu;
    {
        const bool branch_taken_0x26e38c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x26e38c) {
            ctx->pc = 0x26E3B0u;
            goto label_26e3b0;
        }
    }
    ctx->pc = 0x26E394u;
label_26e394:
    // 0x26e394: 0x8c820000
    ctx->pc = 0x26e394u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26e398: 0x30430001
    ctx->pc = 0x26e398u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x26e39c: 0x21042
    ctx->pc = 0x26e39cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x26e3a0: 0x621825
    ctx->pc = 0x26e3a0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26e3a4: 0x44831000
    ctx->pc = 0x26e3a4u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
    // 0x26e3a8: 0x468010a0
    ctx->pc = 0x26e3a8u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x26e3ac: 0x46021080
    ctx->pc = 0x26e3acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_26e3b0:
    // 0x26e3b0: 0x3c013dcc
    ctx->pc = 0x26e3b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x26e3b4: 0x3421cccd
    ctx->pc = 0x26e3b4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x26e3b8: 0x44816800
    ctx->pc = 0x26e3b8u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x26e3bc: 0x460d1082
    ctx->pc = 0x26e3bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[13]);
    // 0x26e3c0: 0xc7a00068
    ctx->pc = 0x26e3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e3c4: 0x46001082
    ctx->pc = 0x26e3c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26e3c8: 0xe7a20068
    ctx->pc = 0x26e3c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x26e3cc: 0xc6400070
    ctx->pc = 0x26e3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e3d0: 0xc7a10060
    ctx->pc = 0x26e3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e3d4: 0x46010000
    ctx->pc = 0x26e3d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26e3d8: 0xe6400070
    ctx->pc = 0x26e3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x26e3dc: 0xc64c0074
    ctx->pc = 0x26e3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26e3e0: 0xc7a00064
    ctx->pc = 0x26e3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e3e4: 0x46006300
    ctx->pc = 0x26e3e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x26e3e8: 0xe64c0074
    ctx->pc = 0x26e3e8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
    // 0x26e3ec: 0xc6400078
    ctx->pc = 0x26e3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e3f0: 0x46020000
    ctx->pc = 0x26e3f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x26e3f4: 0xe6400078
    ctx->pc = 0x26e3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
    // 0x26e3f8: 0x3c014090
    ctx->pc = 0x26e3f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16528 << 16));
    // 0x26e3fc: 0x4481a000
    ctx->pc = 0x26e3fcu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x26e400: 0x26440070
    ctx->pc = 0x26e400u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 112));
    // 0x26e404: 0x46146301
    ctx->pc = 0x26e404u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
    // 0x26e408: 0xc087b5c
    ctx->pc = 0x26E408u;
    SET_GPR_U32(ctx, 31, 0x26E410u);
    ctx->pc = 0x26E40Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21ED70u;
    {
        const uint32_t __entryPc = ctx->pc;
        FloorPos_0x21ed70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E410u; }
    }
    if (ctx->pc != 0x26E410u) { return; }
    ctx->pc = 0x26E410u;
    // 0x26e410: 0x46140000
    ctx->pc = 0x26e410u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x26e414: 0xe6400074
    ctx->pc = 0x26e414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
    // 0x26e418: 0x3c040034
    ctx->pc = 0x26e418u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x26e41c: 0x24848b80
    ctx->pc = 0x26e41cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937472));
    // 0x26e420: 0x8e4200dc
    ctx->pc = 0x26e420u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x26e424: 0x24030070
    ctx->pc = 0x26e424u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 112));
    // 0x26e428: 0x431018
    ctx->pc = 0x26e428u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26e42c: 0x441021
    ctx->pc = 0x26e42cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26e430: 0xc44c0030
    ctx->pc = 0x26e430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26e434: 0xc6410070
    ctx->pc = 0x26e434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e438: 0x46016301
    ctx->pc = 0x26e438u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x26e43c: 0xe7ac0060
    ctx->pc = 0x26e43cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x26e440: 0xc4410034
    ctx->pc = 0x26e440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e444: 0x46000841
    ctx->pc = 0x26e444u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26e448: 0xe7a10064
    ctx->pc = 0x26e448u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x26e44c: 0xc44d0038
    ctx->pc = 0x26e44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26e450: 0xc6400078
    ctx->pc = 0x26e450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e454: 0x46006b41
    ctx->pc = 0x26e454u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x26e458: 0xc0b5c34
    ctx->pc = 0x26E458u;
    SET_GPR_U32(ctx, 31, 0x26E460u);
    ctx->pc = 0x26E45Cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E460u; }
    }
    if (ctx->pc != 0x26E460u) { return; }
    ctx->pc = 0x26E460u;
    // 0x26e460: 0x3c013fc0
    ctx->pc = 0x26e460u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16320 << 16));
    // 0x26e464: 0x44810800
    ctx->pc = 0x26e464u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x26e468: 0x46010036
    ctx->pc = 0x26e468u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e46c: 0x0
    ctx->pc = 0x26e46cu;
    // NOP
    // 0x26e470: 0x45020008
    ctx->pc = 0x26E470u;
    {
        const bool branch_taken_0x26e470 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e470) {
            ctx->pc = 0x26E474u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 220)));
            ctx->pc = 0x26E494u;
            goto label_26e494;
        }
    }
    ctx->pc = 0x26E478u;
    // 0x26e478: 0x3c013e32
    ctx->pc = 0x26e478u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15922 << 16));
    // 0x26e47c: 0x3421b8c3
    ctx->pc = 0x26e47cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 47299));
    // 0x26e480: 0x44816000
    ctx->pc = 0x26e480u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x26e484: 0xc08deba
    ctx->pc = 0x26E484u;
    SET_GPR_U32(ctx, 31, 0x26E48Cu);
    ctx->pc = 0x26E488u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 220)));
    ctx->pc = 0x237AE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        find_next_milestone_0x237ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E48Cu; }
    }
    if (ctx->pc != 0x26E48Cu) { return; }
    ctx->pc = 0x26E48Cu;
    // 0x26e48c: 0xae4200dc
    ctx->pc = 0x26e48cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 2));
    // 0x26e490: 0x8e4300dc
    ctx->pc = 0x26e490u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_26e494:
    // 0x26e494: 0x24020070
    ctx->pc = 0x26e494u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 112));
    // 0x26e498: 0x621818
    ctx->pc = 0x26e498u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26e49c: 0x3c040034
    ctx->pc = 0x26e49cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x26e4a0: 0x24848bb0
    ctx->pc = 0x26e4a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937520));
    // 0x26e4a4: 0x26510070
    ctx->pc = 0x26e4a4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 112));
    // 0x26e4a8: 0x642021
    ctx->pc = 0x26e4a8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26e4ac: 0xc09a2aa
    ctx->pc = 0x26E4ACu;
    SET_GPR_U32(ctx, 31, 0x26E4B4u);
    ctx->pc = 0x26E4B0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x268AA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_yaw_0x268aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E4B4u; }
    }
    if (ctx->pc != 0x26E4B4u) { return; }
    ctx->pc = 0x26E4B4u;
    // 0x26e4b4: 0xe64000ec
    ctx->pc = 0x26e4b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
    // 0x26e4b8: 0xc64c00b4
    ctx->pc = 0x26e4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26e4bc: 0xc09b830
    ctx->pc = 0x26E4BCu;
    SET_GPR_U32(ctx, 31, 0x26E4C4u);
    ctx->pc = 0x26E4C0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x26E0C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        cam_turn_0x26e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E4C4u; }
    }
    if (ctx->pc != 0x26E4C4u) { return; }
    ctx->pc = 0x26E4C4u;
    // 0x26e4c4: 0xe64000b4
    ctx->pc = 0x26e4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 180), bits); }
    // 0x26e4c8: 0x3a0202d
    ctx->pc = 0x26e4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e4cc: 0xc0b5ae8
    ctx->pc = 0x26E4CCu;
    SET_GPR_U32(ctx, 31, 0x26E4D4u);
    ctx->pc = 0x26E4D0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 176));
    ctx->pc = 0x2D6BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateYPRMatrix_0x2d6ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E4D4u; }
    }
    if (ctx->pc != 0x26E4D4u) { return; }
    ctx->pc = 0x26E4D4u;
    // 0x26e4d4: 0xafa00040
    ctx->pc = 0x26e4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x26e4d8: 0xafa00044
    ctx->pc = 0x26e4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x26e4dc: 0xc64000d0
    ctx->pc = 0x26e4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e4e0: 0xe7a00048
    ctx->pc = 0x26e4e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x26e4e4: 0x27a40040
    ctx->pc = 0x26e4e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x26e4e8: 0x27a50050
    ctx->pc = 0x26e4e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    // 0x26e4ec: 0xc0b57a2
    ctx->pc = 0x26E4ECu;
    SET_GPR_U32(ctx, 31, 0x26E4F4u);
    ctx->pc = 0x26E4F0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldVector_0x2d5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E4F4u; }
    }
    if (ctx->pc != 0x26E4F4u) { return; }
    ctx->pc = 0x26E4F4u;
    // 0x26e4f4: 0xc6400070
    ctx->pc = 0x26e4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e4f8: 0xc7a10050
    ctx->pc = 0x26e4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e4fc: 0x46010000
    ctx->pc = 0x26e4fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26e500: 0xe6400140
    ctx->pc = 0x26e500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 320), bits); }
    // 0x26e504: 0xc6400074
    ctx->pc = 0x26e504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e508: 0xc7a10054
    ctx->pc = 0x26e508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e50c: 0x46010000
    ctx->pc = 0x26e50cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26e510: 0xe6400144
    ctx->pc = 0x26e510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 324), bits); }
    // 0x26e514: 0xc6400078
    ctx->pc = 0x26e514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e518: 0xc7a10058
    ctx->pc = 0x26e518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e51c: 0x46010000
    ctx->pc = 0x26e51cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26e520: 0xe6400148
    ctx->pc = 0x26e520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 328), bits); }
    // 0x26e524: 0x26500140
    ctx->pc = 0x26e524u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 320));
    // 0x26e528: 0x220202d
    ctx->pc = 0x26e528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e52c: 0x200282d
    ctx->pc = 0x26e52cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e530: 0xc099c08
    ctx->pc = 0x26E530u;
    SET_GPR_U32(ctx, 31, 0x26E538u);
    ctx->pc = 0x26E534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x267020u;
    {
        const uint32_t __entryPc = ctx->pc;
        fix_radius_0x267020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E538u; }
    }
    if (ctx->pc != 0x26E538u) { return; }
    ctx->pc = 0x26E538u;
    // 0x26e538: 0x260202d
    ctx->pc = 0x26e538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e53c: 0xc09a760
    ctx->pc = 0x26E53Cu;
    SET_GPR_U32(ctx, 31, 0x26E544u);
    ctx->pc = 0x26E540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x269D80u;
    {
        const uint32_t __entryPc = ctx->pc;
        cam_orient_to_0x269d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E544u; }
    }
    if (ctx->pc != 0x26E544u) { return; }
    ctx->pc = 0x26E544u;
label_26e544:
    // 0x26e544: 0xdfbf00c0
    ctx->pc = 0x26e544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x26e548: 0xdfb300b0
    ctx->pc = 0x26e548u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26e54c: 0xdfb200a0
    ctx->pc = 0x26e54cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26e550: 0xdfb10090
    ctx->pc = 0x26e550u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26e554: 0xdfb00080
    ctx->pc = 0x26e554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26e558: 0xc7b400d0
    ctx->pc = 0x26e558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26e55c: 0x3e00008
    ctx->pc = 0x26E55Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E560u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26E2E4u: goto label_26e2e4;
            case 0x26E300u: goto label_26e300;
            case 0x26E33Cu: goto label_26e33c;
            case 0x26E358u: goto label_26e358;
            case 0x26E394u: goto label_26e394;
            case 0x26E3B0u: goto label_26e3b0;
            case 0x26E494u: goto label_26e494;
            case 0x26E544u: goto label_26e544;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26E564u;
}
