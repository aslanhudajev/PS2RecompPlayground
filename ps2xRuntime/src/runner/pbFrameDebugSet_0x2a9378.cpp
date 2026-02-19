#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbFrameDebugSet
// Address: 0x2a9378 - 0x2a9b3c
void pbFrameDebugSet_0x2a9378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a9378u;

    // 0x2a9378: 0x3c020037
    ctx->pc = 0x2a9378u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a937c: 0x8c438330
    ctx->pc = 0x2a937cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294935344)));
    // 0x2a9380: 0x8c620014
    ctx->pc = 0x2a9380u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2a9384: 0x104001eb
    ctx->pc = 0x2A9384u;
    {
        const bool branch_taken_0x2a9384 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A9388u;
        SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 3), 24));
        if (branch_taken_0x2a9384) {
            ctx->pc = 0x2A9B34u;
            goto label_2a9b34;
        }
    }
    ctx->pc = 0x2A938Cu;
    // 0x2a938c: 0x8f020010
    ctx->pc = 0x2a938cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 24), 16)));
    // 0x2a9390: 0x104001e8
    ctx->pc = 0x2A9390u;
    {
        const bool branch_taken_0x2a9390 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A9394u;
        SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 0), 4294966784));
        if (branch_taken_0x2a9390) {
            ctx->pc = 0x2A9B34u;
            goto label_2a9b34;
        }
    }
    ctx->pc = 0x2A9398u;
    // 0x2a9398: 0xc7000044
    ctx->pc = 0x2a9398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a939c: 0x46800020
    ctx->pc = 0x2a939cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2a93a0: 0xc701003c
    ctx->pc = 0x2a93a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a93a4: 0x46800860
    ctx->pc = 0x2a93a4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2a93a8: 0x0
    ctx->pc = 0x2a93a8u;
    // NOP
    // 0x2a93ac: 0x0
    ctx->pc = 0x2a93acu;
    // NOP
    // 0x2a93b0: 0x46010003
    ctx->pc = 0x2a93b0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2a93b4: 0xe700004c
    ctx->pc = 0x2a93b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 76), bits); }
    // 0x2a93b8: 0xc7000048
    ctx->pc = 0x2a93b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a93bc: 0x46800020
    ctx->pc = 0x2a93bcu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2a93c0: 0xc7010040
    ctx->pc = 0x2a93c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a93c4: 0x46800860
    ctx->pc = 0x2a93c4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2a93c8: 0x0
    ctx->pc = 0x2a93c8u;
    // NOP
    // 0x2a93cc: 0x0
    ctx->pc = 0x2a93ccu;
    // NOP
    // 0x2a93d0: 0x46010003
    ctx->pc = 0x2a93d0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2a93d4: 0xe7000050
    ctx->pc = 0x2a93d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 80), bits); }
    // 0x2a93d8: 0xc7000080
    ctx->pc = 0x2a93d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a93dc: 0x46800020
    ctx->pc = 0x2a93dcu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2a93e0: 0xc7010078
    ctx->pc = 0x2a93e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a93e4: 0x46800860
    ctx->pc = 0x2a93e4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2a93e8: 0x0
    ctx->pc = 0x2a93e8u;
    // NOP
    // 0x2a93ec: 0x0
    ctx->pc = 0x2a93ecu;
    // NOP
    // 0x2a93f0: 0x46010003
    ctx->pc = 0x2a93f0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2a93f4: 0xe7000088
    ctx->pc = 0x2a93f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 136), bits); }
    // 0x2a93f8: 0xc7000084
    ctx->pc = 0x2a93f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a93fc: 0x46800020
    ctx->pc = 0x2a93fcu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2a9400: 0xc701007c
    ctx->pc = 0x2a9400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9404: 0x46800860
    ctx->pc = 0x2a9404u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2a9408: 0x0
    ctx->pc = 0x2a9408u;
    // NOP
    // 0x2a940c: 0x0
    ctx->pc = 0x2a940cu;
    // NOP
    // 0x2a9410: 0x46010003
    ctx->pc = 0x2a9410u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2a9414: 0xe700008c
    ctx->pc = 0x2a9414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 140), bits); }
    // 0x2a9418: 0x8f040014
    ctx->pc = 0x2a9418u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a941c: 0x9f03001c
    ctx->pc = 0x2a941cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 28)));
    // 0x2a9420: 0x306301ff
    ctx->pc = 0x2a9420u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 511));
    // 0x2a9424: 0xdc8201e0
    ctx->pc = 0x2a9424u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 480)));
    // 0x2a9428: 0x4f1024
    ctx->pc = 0x2a9428u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2a942c: 0x431025
    ctx->pc = 0x2a942cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a9430: 0xfc8201e0
    ctx->pc = 0x2a9430u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 480), GPR_U64(ctx, 2));
    // 0x2a9434: 0x8f040014
    ctx->pc = 0x2a9434u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a9438: 0x9f030024
    ctx->pc = 0x2a9438u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 36)));
    // 0x2a943c: 0x3063003f
    ctx->pc = 0x2a943cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 63));
    // 0x2a9440: 0x31a78
    ctx->pc = 0x2a9440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 9);
    // 0x2a9444: 0xdc8201e0
    ctx->pc = 0x2a9444u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 480)));
    // 0x2a9448: 0x240e81ff
    ctx->pc = 0x2a9448u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 0), 4294935039));
    // 0x2a944c: 0x4e1024
    ctx->pc = 0x2a944cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x2a9450: 0x431025
    ctx->pc = 0x2a9450u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a9454: 0xfc8201e0
    ctx->pc = 0x2a9454u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 480), GPR_U64(ctx, 2));
    // 0x2a9458: 0x8f040014
    ctx->pc = 0x2a9458u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a945c: 0x9f030028
    ctx->pc = 0x2a945cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 40)));
    // 0x2a9460: 0x3063001f
    ctx->pc = 0x2a9460u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 31));
    // 0x2a9464: 0x31bf8
    ctx->pc = 0x2a9464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 15);
    // 0x2a9468: 0xdc8201e0
    ctx->pc = 0x2a9468u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 480)));
    // 0x2a946c: 0x3c0cfff0
    ctx->pc = 0x2a946cu;
    SET_GPR_U32(ctx, 12, ((uint32_t)65520 << 16));
    // 0x2a9470: 0x358c7fff
    ctx->pc = 0x2a9470u;
    SET_GPR_U32(ctx, 12, OR32(GPR_U32(ctx, 12), 32767));
    // 0x2a9474: 0x4c1024
    ctx->pc = 0x2a9474u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2a9478: 0x431025
    ctx->pc = 0x2a9478u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a947c: 0xfc8201e0
    ctx->pc = 0x2a947cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 480), GPR_U64(ctx, 2));
    // 0x2a9480: 0x8f040014
    ctx->pc = 0x2a9480u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a9484: 0x9f03002c
    ctx->pc = 0x2a9484u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 44)));
    // 0x2a9488: 0x306307ff
    ctx->pc = 0x2a9488u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 2047));
    // 0x2a948c: 0x3183c
    ctx->pc = 0x2a948cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a9490: 0xdc8201e0
    ctx->pc = 0x2a9490u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 480)));
    // 0x2a9494: 0x240df800
    ctx->pc = 0x2a9494u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 4294965248));
    // 0x2a9498: 0xd6c38
    ctx->pc = 0x2a9498u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 16);
    // 0x2a949c: 0x35adffff
    ctx->pc = 0x2a949cu;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), 65535));
    // 0x2a94a0: 0xd6c38
    ctx->pc = 0x2a94a0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 16);
    // 0x2a94a4: 0x35adffff
    ctx->pc = 0x2a94a4u;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), 65535));
    // 0x2a94a8: 0x4d1024
    ctx->pc = 0x2a94a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x2a94ac: 0x431025
    ctx->pc = 0x2a94acu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a94b0: 0xfc8201e0
    ctx->pc = 0x2a94b0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 480), GPR_U64(ctx, 2));
    // 0x2a94b4: 0x8f040014
    ctx->pc = 0x2a94b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a94b8: 0x9f030030
    ctx->pc = 0x2a94b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 48)));
    // 0x2a94bc: 0x306307ff
    ctx->pc = 0x2a94bcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 2047));
    // 0x2a94c0: 0x31afc
    ctx->pc = 0x2a94c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 11));
    // 0x2a94c4: 0xdc8201e0
    ctx->pc = 0x2a94c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 480)));
    // 0x2a94c8: 0x3c0bffc0
    ctx->pc = 0x2a94c8u;
    SET_GPR_U32(ctx, 11, ((uint32_t)65472 << 16));
    // 0x2a94cc: 0x356b07ff
    ctx->pc = 0x2a94ccu;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), 2047));
    // 0x2a94d0: 0xb5c38
    ctx->pc = 0x2a94d0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 16);
    // 0x2a94d4: 0x356bffff
    ctx->pc = 0x2a94d4u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), 65535));
    // 0x2a94d8: 0xb5c38
    ctx->pc = 0x2a94d8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 16);
    // 0x2a94dc: 0x356bffff
    ctx->pc = 0x2a94dcu;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), 65535));
    // 0x2a94e0: 0x4b1024
    ctx->pc = 0x2a94e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2a94e4: 0x431025
    ctx->pc = 0x2a94e4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a94e8: 0xfc8201e0
    ctx->pc = 0x2a94e8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 480), GPR_U64(ctx, 2));
    // 0x2a94ec: 0x8f040014
    ctx->pc = 0x2a94ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a94f0: 0x9f030034
    ctx->pc = 0x2a94f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 52)));
    // 0x2a94f4: 0x30630fff
    ctx->pc = 0x2a94f4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 4095));
    // 0x2a94f8: 0xdc8201e8
    ctx->pc = 0x2a94f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 488)));
    // 0x2a94fc: 0x240af000
    ctx->pc = 0x2a94fcu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x2a9500: 0x4a1024
    ctx->pc = 0x2a9500u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2a9504: 0x431025
    ctx->pc = 0x2a9504u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a9508: 0xfc8201e8
    ctx->pc = 0x2a9508u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 488), GPR_U64(ctx, 2));
    // 0x2a950c: 0x8f040014
    ctx->pc = 0x2a950cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a9510: 0x9f030038
    ctx->pc = 0x2a9510u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 56)));
    // 0x2a9514: 0x306307ff
    ctx->pc = 0x2a9514u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 2047));
    // 0x2a9518: 0x31b38
    ctx->pc = 0x2a9518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 12);
    // 0x2a951c: 0xdc8201e8
    ctx->pc = 0x2a951cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 488)));
    // 0x2a9520: 0x3c08ff80
    ctx->pc = 0x2a9520u;
    SET_GPR_U32(ctx, 8, ((uint32_t)65408 << 16));
    // 0x2a9524: 0x35080fff
    ctx->pc = 0x2a9524u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 4095));
    // 0x2a9528: 0x481024
    ctx->pc = 0x2a9528u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2a952c: 0x431025
    ctx->pc = 0x2a952cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a9530: 0xfc8201e8
    ctx->pc = 0x2a9530u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 488), GPR_U64(ctx, 2));
    // 0x2a9534: 0x8f040014
    ctx->pc = 0x2a9534u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a9538: 0x9f03003c
    ctx->pc = 0x2a9538u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 60)));
    // 0x2a953c: 0x3063000f
    ctx->pc = 0x2a953cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 15));
    // 0x2a9540: 0x31df8
    ctx->pc = 0x2a9540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 23);
    // 0x2a9544: 0xdc8201e8
    ctx->pc = 0x2a9544u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 488)));
    // 0x2a9548: 0x3c09f87f
    ctx->pc = 0x2a9548u;
    SET_GPR_U32(ctx, 9, ((uint32_t)63615 << 16));
    // 0x2a954c: 0x3529ffff
    ctx->pc = 0x2a954cu;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 65535));
    // 0x2a9550: 0x491024
    ctx->pc = 0x2a9550u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2a9554: 0x431025
    ctx->pc = 0x2a9554u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a9558: 0xfc8201e8
    ctx->pc = 0x2a9558u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 488), GPR_U64(ctx, 2));
    // 0x2a955c: 0x8f040014
    ctx->pc = 0x2a955cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a9560: 0x9f030040
    ctx->pc = 0x2a9560u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 64)));
    // 0x2a9564: 0x30630003
    ctx->pc = 0x2a9564u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 3));
    // 0x2a9568: 0x31ef8
    ctx->pc = 0x2a9568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 27);
    // 0x2a956c: 0xdc8201e8
    ctx->pc = 0x2a956cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 488)));
    // 0x2a9570: 0x3c07e7ff
    ctx->pc = 0x2a9570u;
    SET_GPR_U32(ctx, 7, ((uint32_t)59391 << 16));
    // 0x2a9574: 0x34e7ffff
    ctx->pc = 0x2a9574u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x2a9578: 0x471024
    ctx->pc = 0x2a9578u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2a957c: 0x431025
    ctx->pc = 0x2a957cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a9580: 0xfc8201e8
    ctx->pc = 0x2a9580u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 488), GPR_U64(ctx, 2));
    // 0x2a9584: 0x8f040014
    ctx->pc = 0x2a9584u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a9588: 0x9f030044
    ctx->pc = 0x2a9588u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 68)));
    // 0x2a958c: 0x30630fff
    ctx->pc = 0x2a958cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 4095));
    // 0x2a9590: 0x3183c
    ctx->pc = 0x2a9590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a9594: 0xdc8201e8
    ctx->pc = 0x2a9594u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 488)));
    // 0x2a9598: 0x2406f000
    ctx->pc = 0x2a9598u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x2a959c: 0x63438
    ctx->pc = 0x2a959cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a95a0: 0x34c6ffff
    ctx->pc = 0x2a95a0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
    // 0x2a95a4: 0x63438
    ctx->pc = 0x2a95a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a95a8: 0x34c6ffff
    ctx->pc = 0x2a95a8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
    // 0x2a95ac: 0x461024
    ctx->pc = 0x2a95acu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2a95b0: 0x431025
    ctx->pc = 0x2a95b0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a95b4: 0xfc8201e8
    ctx->pc = 0x2a95b4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 488), GPR_U64(ctx, 2));
    // 0x2a95b8: 0x8f040014
    ctx->pc = 0x2a95b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a95bc: 0x9f030048
    ctx->pc = 0x2a95bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 72)));
    // 0x2a95c0: 0x306307ff
    ctx->pc = 0x2a95c0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 2047));
    // 0x2a95c4: 0x31b3c
    ctx->pc = 0x2a95c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x2a95c8: 0xdc8201e8
    ctx->pc = 0x2a95c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 488)));
    // 0x2a95cc: 0x3c05ff80
    ctx->pc = 0x2a95ccu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65408 << 16));
    // 0x2a95d0: 0x34a50fff
    ctx->pc = 0x2a95d0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 4095));
    // 0x2a95d4: 0x52c38
    ctx->pc = 0x2a95d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2a95d8: 0x34a5ffff
    ctx->pc = 0x2a95d8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x2a95dc: 0x52c38
    ctx->pc = 0x2a95dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2a95e0: 0x34a5ffff
    ctx->pc = 0x2a95e0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x2a95e4: 0x451024
    ctx->pc = 0x2a95e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a95e8: 0x431025
    ctx->pc = 0x2a95e8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a95ec: 0xfc8201e8
    ctx->pc = 0x2a95ecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 488), GPR_U64(ctx, 2));
    // 0x2a95f0: 0x8f040014
    ctx->pc = 0x2a95f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a95f4: 0x9f030058
    ctx->pc = 0x2a95f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 88)));
    // 0x2a95f8: 0x306301ff
    ctx->pc = 0x2a95f8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 511));
    // 0x2a95fc: 0xdc8201f0
    ctx->pc = 0x2a95fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 496)));
    // 0x2a9600: 0x4f1024
    ctx->pc = 0x2a9600u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2a9604: 0x431025
    ctx->pc = 0x2a9604u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a9608: 0xfc8201f0
    ctx->pc = 0x2a9608u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 496), GPR_U64(ctx, 2));
    // 0x2a960c: 0x8f040014
    ctx->pc = 0x2a960cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a9610: 0x9f030060
    ctx->pc = 0x2a9610u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 96)));
    // 0x2a9614: 0x3063003f
    ctx->pc = 0x2a9614u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 63));
    // 0x2a9618: 0x31a78
    ctx->pc = 0x2a9618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 9);
    // 0x2a961c: 0xdc8201f0
    ctx->pc = 0x2a961cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 496)));
    // 0x2a9620: 0x4e1024
    ctx->pc = 0x2a9620u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x2a9624: 0x431025
    ctx->pc = 0x2a9624u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a9628: 0xfc8201f0
    ctx->pc = 0x2a9628u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 496), GPR_U64(ctx, 2));
    // 0x2a962c: 0x8f040014
    ctx->pc = 0x2a962cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a9630: 0x9f030064
    ctx->pc = 0x2a9630u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 100)));
    // 0x2a9634: 0x3063001f
    ctx->pc = 0x2a9634u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 31));
    // 0x2a9638: 0x31bf8
    ctx->pc = 0x2a9638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 15);
    // 0x2a963c: 0xdc8201f0
    ctx->pc = 0x2a963cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 496)));
    // 0x2a9640: 0x4c1024
    ctx->pc = 0x2a9640u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2a9644: 0x431025
    ctx->pc = 0x2a9644u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a9648: 0xfc8201f0
    ctx->pc = 0x2a9648u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 496), GPR_U64(ctx, 2));
    // 0x2a964c: 0x8f040014
    ctx->pc = 0x2a964cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a9650: 0x9f030068
    ctx->pc = 0x2a9650u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 104)));
    // 0x2a9654: 0x306307ff
    ctx->pc = 0x2a9654u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 2047));
    // 0x2a9658: 0x3183c
    ctx->pc = 0x2a9658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a965c: 0xdc8201f0
    ctx->pc = 0x2a965cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 496)));
    // 0x2a9660: 0x4d1024
    ctx->pc = 0x2a9660u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x2a9664: 0x431025
    ctx->pc = 0x2a9664u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a9668: 0xfc8201f0
    ctx->pc = 0x2a9668u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 496), GPR_U64(ctx, 2));
    // 0x2a966c: 0x8f040014
    ctx->pc = 0x2a966cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a9670: 0x9f03006c
    ctx->pc = 0x2a9670u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 108)));
    // 0x2a9674: 0x306307ff
    ctx->pc = 0x2a9674u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 2047));
    // 0x2a9678: 0x31afc
    ctx->pc = 0x2a9678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 11));
    // 0x2a967c: 0xdc8201f0
    ctx->pc = 0x2a967cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 496)));
    // 0x2a9680: 0x4b1024
    ctx->pc = 0x2a9680u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2a9684: 0x431025
    ctx->pc = 0x2a9684u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a9688: 0xfc8201f0
    ctx->pc = 0x2a9688u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 496), GPR_U64(ctx, 2));
    // 0x2a968c: 0x8f040014
    ctx->pc = 0x2a968cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a9690: 0x9f030070
    ctx->pc = 0x2a9690u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 112)));
    // 0x2a9694: 0x30630fff
    ctx->pc = 0x2a9694u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 4095));
    // 0x2a9698: 0xdc8201f8
    ctx->pc = 0x2a9698u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 504)));
    // 0x2a969c: 0x4a1024
    ctx->pc = 0x2a969cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2a96a0: 0x431025
    ctx->pc = 0x2a96a0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a96a4: 0xfc8201f8
    ctx->pc = 0x2a96a4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 504), GPR_U64(ctx, 2));
    // 0x2a96a8: 0x8f040014
    ctx->pc = 0x2a96a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a96ac: 0x9f030074
    ctx->pc = 0x2a96acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 116)));
    // 0x2a96b0: 0x306307ff
    ctx->pc = 0x2a96b0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 2047));
    // 0x2a96b4: 0x31b38
    ctx->pc = 0x2a96b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 12);
    // 0x2a96b8: 0xdc8201f8
    ctx->pc = 0x2a96b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 504)));
    // 0x2a96bc: 0x481024
    ctx->pc = 0x2a96bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2a96c0: 0x431025
    ctx->pc = 0x2a96c0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a96c4: 0xfc8201f8
    ctx->pc = 0x2a96c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 504), GPR_U64(ctx, 2));
    // 0x2a96c8: 0x8f040014
    ctx->pc = 0x2a96c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a96cc: 0x9f030078
    ctx->pc = 0x2a96ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 120)));
    // 0x2a96d0: 0x3063000f
    ctx->pc = 0x2a96d0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 15));
    // 0x2a96d4: 0x31df8
    ctx->pc = 0x2a96d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 23);
    // 0x2a96d8: 0xdc8201f8
    ctx->pc = 0x2a96d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 504)));
    // 0x2a96dc: 0x491024
    ctx->pc = 0x2a96dcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2a96e0: 0x431025
    ctx->pc = 0x2a96e0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a96e4: 0xfc8201f8
    ctx->pc = 0x2a96e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 504), GPR_U64(ctx, 2));
    // 0x2a96e8: 0x8f040014
    ctx->pc = 0x2a96e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a96ec: 0x9f03007c
    ctx->pc = 0x2a96ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 124)));
    // 0x2a96f0: 0x30630003
    ctx->pc = 0x2a96f0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 3));
    // 0x2a96f4: 0x31ef8
    ctx->pc = 0x2a96f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 27);
    // 0x2a96f8: 0xdc8201f8
    ctx->pc = 0x2a96f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 504)));
    // 0x2a96fc: 0x471024
    ctx->pc = 0x2a96fcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2a9700: 0x431025
    ctx->pc = 0x2a9700u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a9704: 0xfc8201f8
    ctx->pc = 0x2a9704u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 504), GPR_U64(ctx, 2));
    // 0x2a9708: 0x8f040014
    ctx->pc = 0x2a9708u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a970c: 0x9f030080
    ctx->pc = 0x2a970cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 128)));
    // 0x2a9710: 0x30630fff
    ctx->pc = 0x2a9710u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 4095));
    // 0x2a9714: 0x3183c
    ctx->pc = 0x2a9714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a9718: 0xdc8201f8
    ctx->pc = 0x2a9718u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 504)));
    // 0x2a971c: 0x461024
    ctx->pc = 0x2a971cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2a9720: 0x431025
    ctx->pc = 0x2a9720u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a9724: 0xfc8201f8
    ctx->pc = 0x2a9724u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 504), GPR_U64(ctx, 2));
    // 0x2a9728: 0x8f040014
    ctx->pc = 0x2a9728u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a972c: 0x9f030084
    ctx->pc = 0x2a972cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 132)));
    // 0x2a9730: 0x306307ff
    ctx->pc = 0x2a9730u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 2047));
    // 0x2a9734: 0x31b3c
    ctx->pc = 0x2a9734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x2a9738: 0xdc8201f8
    ctx->pc = 0x2a9738u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 504)));
    // 0x2a973c: 0x451024
    ctx->pc = 0x2a973cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a9740: 0x431025
    ctx->pc = 0x2a9740u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a9744: 0xfc8201f8
    ctx->pc = 0x2a9744u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 504), GPR_U64(ctx, 2));
    // 0x2a9748: 0x8f040014
    ctx->pc = 0x2a9748u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a974c: 0x9f030020
    ctx->pc = 0x2a974cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 32)));
    // 0x2a9750: 0x306301ff
    ctx->pc = 0x2a9750u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 511));
    // 0x2a9754: 0xdc8203e0
    ctx->pc = 0x2a9754u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 992)));
    // 0x2a9758: 0x4f1024
    ctx->pc = 0x2a9758u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2a975c: 0x431025
    ctx->pc = 0x2a975cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a9760: 0xfc8203e0
    ctx->pc = 0x2a9760u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 992), GPR_U64(ctx, 2));
    // 0x2a9764: 0x8f040014
    ctx->pc = 0x2a9764u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a9768: 0x9f030024
    ctx->pc = 0x2a9768u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 36)));
    // 0x2a976c: 0x3063003f
    ctx->pc = 0x2a976cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 63));
    // 0x2a9770: 0x31a78
    ctx->pc = 0x2a9770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 9);
    // 0x2a9774: 0xdc8203e0
    ctx->pc = 0x2a9774u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 992)));
    // 0x2a9778: 0x4e1024
    ctx->pc = 0x2a9778u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x2a977c: 0x431025
    ctx->pc = 0x2a977cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a9780: 0xfc8203e0
    ctx->pc = 0x2a9780u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 992), GPR_U64(ctx, 2));
    // 0x2a9784: 0x8f040014
    ctx->pc = 0x2a9784u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a9788: 0x9f030028
    ctx->pc = 0x2a9788u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 40)));
    // 0x2a978c: 0x3063001f
    ctx->pc = 0x2a978cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 31));
    // 0x2a9790: 0x31bf8
    ctx->pc = 0x2a9790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 15);
    // 0x2a9794: 0xdc8203e0
    ctx->pc = 0x2a9794u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 992)));
    // 0x2a9798: 0x4c1024
    ctx->pc = 0x2a9798u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2a979c: 0x431025
    ctx->pc = 0x2a979cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a97a0: 0xfc8203e0
    ctx->pc = 0x2a97a0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 992), GPR_U64(ctx, 2));
    // 0x2a97a4: 0x8f040014
    ctx->pc = 0x2a97a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a97a8: 0x9f03002c
    ctx->pc = 0x2a97a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 44)));
    // 0x2a97ac: 0x306307ff
    ctx->pc = 0x2a97acu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 2047));
    // 0x2a97b0: 0x3183c
    ctx->pc = 0x2a97b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a97b4: 0xdc8203e0
    ctx->pc = 0x2a97b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 992)));
    // 0x2a97b8: 0x4d1024
    ctx->pc = 0x2a97b8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x2a97bc: 0x431025
    ctx->pc = 0x2a97bcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a97c0: 0xfc8203e0
    ctx->pc = 0x2a97c0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 992), GPR_U64(ctx, 2));
    // 0x2a97c4: 0x8f040014
    ctx->pc = 0x2a97c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a97c8: 0x9f030030
    ctx->pc = 0x2a97c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 48)));
    // 0x2a97cc: 0x306307ff
    ctx->pc = 0x2a97ccu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 2047));
    // 0x2a97d0: 0x31afc
    ctx->pc = 0x2a97d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 11));
    // 0x2a97d4: 0xdc8203e0
    ctx->pc = 0x2a97d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 992)));
    // 0x2a97d8: 0x4b1024
    ctx->pc = 0x2a97d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2a97dc: 0x431025
    ctx->pc = 0x2a97dcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a97e0: 0xfc8203e0
    ctx->pc = 0x2a97e0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 992), GPR_U64(ctx, 2));
    // 0x2a97e4: 0x8f040014
    ctx->pc = 0x2a97e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a97e8: 0x9f030034
    ctx->pc = 0x2a97e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 52)));
    // 0x2a97ec: 0x30630fff
    ctx->pc = 0x2a97ecu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 4095));
    // 0x2a97f0: 0xdc8203e8
    ctx->pc = 0x2a97f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 1000)));
    // 0x2a97f4: 0x4a1024
    ctx->pc = 0x2a97f4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2a97f8: 0x431025
    ctx->pc = 0x2a97f8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a97fc: 0xfc8203e8
    ctx->pc = 0x2a97fcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1000), GPR_U64(ctx, 2));
    // 0x2a9800: 0x8f040014
    ctx->pc = 0x2a9800u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a9804: 0x9f030038
    ctx->pc = 0x2a9804u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 56)));
    // 0x2a9808: 0x306307ff
    ctx->pc = 0x2a9808u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 2047));
    // 0x2a980c: 0x31b38
    ctx->pc = 0x2a980cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 12);
    // 0x2a9810: 0xdc8203e8
    ctx->pc = 0x2a9810u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 1000)));
    // 0x2a9814: 0x481024
    ctx->pc = 0x2a9814u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2a9818: 0x431025
    ctx->pc = 0x2a9818u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a981c: 0xfc8203e8
    ctx->pc = 0x2a981cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1000), GPR_U64(ctx, 2));
    // 0x2a9820: 0x8f040014
    ctx->pc = 0x2a9820u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a9824: 0x9f03003c
    ctx->pc = 0x2a9824u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 60)));
    // 0x2a9828: 0x3063000f
    ctx->pc = 0x2a9828u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 15));
    // 0x2a982c: 0x31df8
    ctx->pc = 0x2a982cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 23);
    // 0x2a9830: 0xdc8203e8
    ctx->pc = 0x2a9830u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 1000)));
    // 0x2a9834: 0x491024
    ctx->pc = 0x2a9834u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2a9838: 0x431025
    ctx->pc = 0x2a9838u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a983c: 0xfc8203e8
    ctx->pc = 0x2a983cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1000), GPR_U64(ctx, 2));
    // 0x2a9840: 0x8f040014
    ctx->pc = 0x2a9840u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a9844: 0x9f030040
    ctx->pc = 0x2a9844u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 64)));
    // 0x2a9848: 0x30630003
    ctx->pc = 0x2a9848u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 3));
    // 0x2a984c: 0x31ef8
    ctx->pc = 0x2a984cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 27);
    // 0x2a9850: 0xdc8203e8
    ctx->pc = 0x2a9850u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 1000)));
    // 0x2a9854: 0x471024
    ctx->pc = 0x2a9854u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2a9858: 0x431025
    ctx->pc = 0x2a9858u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a985c: 0xfc8203e8
    ctx->pc = 0x2a985cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1000), GPR_U64(ctx, 2));
    // 0x2a9860: 0x8f040014
    ctx->pc = 0x2a9860u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a9864: 0x9f030044
    ctx->pc = 0x2a9864u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 68)));
    // 0x2a9868: 0x30630fff
    ctx->pc = 0x2a9868u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 4095));
    // 0x2a986c: 0x3183c
    ctx->pc = 0x2a986cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a9870: 0xdc8203e8
    ctx->pc = 0x2a9870u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 1000)));
    // 0x2a9874: 0x461024
    ctx->pc = 0x2a9874u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2a9878: 0x431025
    ctx->pc = 0x2a9878u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a987c: 0xfc8203e8
    ctx->pc = 0x2a987cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1000), GPR_U64(ctx, 2));
    // 0x2a9880: 0x8f040014
    ctx->pc = 0x2a9880u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a9884: 0x9f030048
    ctx->pc = 0x2a9884u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 72)));
    // 0x2a9888: 0x306307ff
    ctx->pc = 0x2a9888u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 2047));
    // 0x2a988c: 0x31b3c
    ctx->pc = 0x2a988cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x2a9890: 0xdc8203e8
    ctx->pc = 0x2a9890u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 1000)));
    // 0x2a9894: 0x451024
    ctx->pc = 0x2a9894u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a9898: 0x431025
    ctx->pc = 0x2a9898u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a989c: 0xfc8203e8
    ctx->pc = 0x2a989cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1000), GPR_U64(ctx, 2));
    // 0x2a98a0: 0x8f040014
    ctx->pc = 0x2a98a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a98a4: 0x9f03005c
    ctx->pc = 0x2a98a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 92)));
    // 0x2a98a8: 0x306301ff
    ctx->pc = 0x2a98a8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 511));
    // 0x2a98ac: 0xdc8203f0
    ctx->pc = 0x2a98acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 1008)));
    // 0x2a98b0: 0x4f1024
    ctx->pc = 0x2a98b0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2a98b4: 0x431025
    ctx->pc = 0x2a98b4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a98b8: 0xfc8203f0
    ctx->pc = 0x2a98b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1008), GPR_U64(ctx, 2));
    // 0x2a98bc: 0x8f040014
    ctx->pc = 0x2a98bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a98c0: 0x9f030060
    ctx->pc = 0x2a98c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 96)));
    // 0x2a98c4: 0x3063003f
    ctx->pc = 0x2a98c4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 63));
    // 0x2a98c8: 0x31a78
    ctx->pc = 0x2a98c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 9);
    // 0x2a98cc: 0xdc8203f0
    ctx->pc = 0x2a98ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 1008)));
    // 0x2a98d0: 0x4e1024
    ctx->pc = 0x2a98d0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x2a98d4: 0x431025
    ctx->pc = 0x2a98d4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a98d8: 0xfc8203f0
    ctx->pc = 0x2a98d8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1008), GPR_U64(ctx, 2));
    // 0x2a98dc: 0x8f040014
    ctx->pc = 0x2a98dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a98e0: 0x9f030064
    ctx->pc = 0x2a98e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 100)));
    // 0x2a98e4: 0x3063001f
    ctx->pc = 0x2a98e4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 31));
    // 0x2a98e8: 0x31bf8
    ctx->pc = 0x2a98e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 15);
    // 0x2a98ec: 0xdc8203f0
    ctx->pc = 0x2a98ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 1008)));
    // 0x2a98f0: 0x4c1024
    ctx->pc = 0x2a98f0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2a98f4: 0x431025
    ctx->pc = 0x2a98f4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a98f8: 0xfc8203f0
    ctx->pc = 0x2a98f8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1008), GPR_U64(ctx, 2));
    // 0x2a98fc: 0x8f040014
    ctx->pc = 0x2a98fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a9900: 0x9f030068
    ctx->pc = 0x2a9900u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 104)));
    // 0x2a9904: 0x306307ff
    ctx->pc = 0x2a9904u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 2047));
    // 0x2a9908: 0x3183c
    ctx->pc = 0x2a9908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a990c: 0xdc8203f0
    ctx->pc = 0x2a990cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 1008)));
    // 0x2a9910: 0x4d1024
    ctx->pc = 0x2a9910u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x2a9914: 0x431025
    ctx->pc = 0x2a9914u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a9918: 0xfc8203f0
    ctx->pc = 0x2a9918u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1008), GPR_U64(ctx, 2));
    // 0x2a991c: 0x8f040014
    ctx->pc = 0x2a991cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a9920: 0x9f03006c
    ctx->pc = 0x2a9920u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 108)));
    // 0x2a9924: 0x306307ff
    ctx->pc = 0x2a9924u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 2047));
    // 0x2a9928: 0x31afc
    ctx->pc = 0x2a9928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 11));
    // 0x2a992c: 0xdc8203f0
    ctx->pc = 0x2a992cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 1008)));
    // 0x2a9930: 0x4b1024
    ctx->pc = 0x2a9930u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2a9934: 0x431025
    ctx->pc = 0x2a9934u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a9938: 0xfc8203f0
    ctx->pc = 0x2a9938u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1008), GPR_U64(ctx, 2));
    // 0x2a993c: 0x8f040014
    ctx->pc = 0x2a993cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a9940: 0x9f030070
    ctx->pc = 0x2a9940u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 112)));
    // 0x2a9944: 0x30630fff
    ctx->pc = 0x2a9944u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 4095));
    // 0x2a9948: 0xdc8203f8
    ctx->pc = 0x2a9948u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 1016)));
    // 0x2a994c: 0x4a1024
    ctx->pc = 0x2a994cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2a9950: 0x431025
    ctx->pc = 0x2a9950u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a9954: 0xfc8203f8
    ctx->pc = 0x2a9954u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1016), GPR_U64(ctx, 2));
    // 0x2a9958: 0x8f040014
    ctx->pc = 0x2a9958u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a995c: 0x9f030074
    ctx->pc = 0x2a995cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 116)));
    // 0x2a9960: 0x306307ff
    ctx->pc = 0x2a9960u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 2047));
    // 0x2a9964: 0x31b38
    ctx->pc = 0x2a9964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 12);
    // 0x2a9968: 0xdc8203f8
    ctx->pc = 0x2a9968u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 1016)));
    // 0x2a996c: 0x481024
    ctx->pc = 0x2a996cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2a9970: 0x431025
    ctx->pc = 0x2a9970u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a9974: 0xfc8203f8
    ctx->pc = 0x2a9974u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1016), GPR_U64(ctx, 2));
    // 0x2a9978: 0x8f040014
    ctx->pc = 0x2a9978u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a997c: 0x9f030078
    ctx->pc = 0x2a997cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 120)));
    // 0x2a9980: 0x3063000f
    ctx->pc = 0x2a9980u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 15));
    // 0x2a9984: 0x31df8
    ctx->pc = 0x2a9984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 23);
    // 0x2a9988: 0xdc8203f8
    ctx->pc = 0x2a9988u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 1016)));
    // 0x2a998c: 0x491024
    ctx->pc = 0x2a998cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2a9990: 0x431025
    ctx->pc = 0x2a9990u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a9994: 0xfc8203f8
    ctx->pc = 0x2a9994u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1016), GPR_U64(ctx, 2));
    // 0x2a9998: 0x8f040014
    ctx->pc = 0x2a9998u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a999c: 0x9f03007c
    ctx->pc = 0x2a999cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 124)));
    // 0x2a99a0: 0x30630003
    ctx->pc = 0x2a99a0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 3));
    // 0x2a99a4: 0x31ef8
    ctx->pc = 0x2a99a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 27);
    // 0x2a99a8: 0xdc8203f8
    ctx->pc = 0x2a99a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 1016)));
    // 0x2a99ac: 0x471024
    ctx->pc = 0x2a99acu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2a99b0: 0x431025
    ctx->pc = 0x2a99b0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a99b4: 0xfc8203f8
    ctx->pc = 0x2a99b4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1016), GPR_U64(ctx, 2));
    // 0x2a99b8: 0x8f040014
    ctx->pc = 0x2a99b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a99bc: 0x9f030080
    ctx->pc = 0x2a99bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 128)));
    // 0x2a99c0: 0x30630fff
    ctx->pc = 0x2a99c0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 4095));
    // 0x2a99c4: 0x3183c
    ctx->pc = 0x2a99c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a99c8: 0xdc8203f8
    ctx->pc = 0x2a99c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 1016)));
    // 0x2a99cc: 0x461024
    ctx->pc = 0x2a99ccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2a99d0: 0x431025
    ctx->pc = 0x2a99d0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a99d4: 0xfc8203f8
    ctx->pc = 0x2a99d4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1016), GPR_U64(ctx, 2));
    // 0x2a99d8: 0x8f040014
    ctx->pc = 0x2a99d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a99dc: 0x9f030084
    ctx->pc = 0x2a99dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 132)));
    // 0x2a99e0: 0x306307ff
    ctx->pc = 0x2a99e0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 2047));
    // 0x2a99e4: 0x31b3c
    ctx->pc = 0x2a99e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x2a99e8: 0xdc8203f8
    ctx->pc = 0x2a99e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 1016)));
    // 0x2a99ec: 0x451024
    ctx->pc = 0x2a99ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a99f0: 0x431025
    ctx->pc = 0x2a99f0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a99f4: 0xfc8203f8
    ctx->pc = 0x2a99f4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1016), GPR_U64(ctx, 2));
    // 0x2a99f8: 0x8f040014
    ctx->pc = 0x2a99f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a99fc: 0x9f030018
    ctx->pc = 0x2a99fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 24)));
    // 0x2a9a00: 0x30630001
    ctx->pc = 0x2a9a00u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x2a9a04: 0xdc8201c0
    ctx->pc = 0x2a9a04u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x2a9a08: 0x2406fffe
    ctx->pc = 0x2a9a08u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2a9a0c: 0x461024
    ctx->pc = 0x2a9a0cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2a9a10: 0x431025
    ctx->pc = 0x2a9a10u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a9a14: 0xfc8201c0
    ctx->pc = 0x2a9a14u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 448), GPR_U64(ctx, 2));
    // 0x2a9a18: 0x8f040014
    ctx->pc = 0x2a9a18u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a9a1c: 0x9f030054
    ctx->pc = 0x2a9a1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 84)));
    // 0x2a9a20: 0x30630001
    ctx->pc = 0x2a9a20u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x2a9a24: 0x31878
    ctx->pc = 0x2a9a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 1);
    // 0x2a9a28: 0xdc8201c0
    ctx->pc = 0x2a9a28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x2a9a2c: 0x2405fffd
    ctx->pc = 0x2a9a2cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2a9a30: 0x451024
    ctx->pc = 0x2a9a30u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a9a34: 0x431025
    ctx->pc = 0x2a9a34u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a9a38: 0xfc8201c0
    ctx->pc = 0x2a9a38u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 448), GPR_U64(ctx, 2));
    // 0x2a9a3c: 0x8f030014
    ctx->pc = 0x2a9a3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a9a40: 0x93020004
    ctx->pc = 0x2a9a40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 4)));
    // 0x2a9a44: 0xa06201c1
    ctx->pc = 0x2a9a44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 449), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a9a48: 0x8f030014
    ctx->pc = 0x2a9a48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a9a4c: 0xdc6201c0
    ctx->pc = 0x2a9a4cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 448)));
    // 0x2a9a50: 0xfc6201c8
    ctx->pc = 0x2a9a50u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 456), GPR_U64(ctx, 2));
    // 0x2a9a54: 0x8f040014
    ctx->pc = 0x2a9a54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a9a58: 0x9f030018
    ctx->pc = 0x2a9a58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 24)));
    // 0x2a9a5c: 0x30630001
    ctx->pc = 0x2a9a5cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x2a9a60: 0xdc8203c0
    ctx->pc = 0x2a9a60u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 960)));
    // 0x2a9a64: 0x461024
    ctx->pc = 0x2a9a64u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2a9a68: 0x431025
    ctx->pc = 0x2a9a68u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a9a6c: 0xfc8203c0
    ctx->pc = 0x2a9a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 960), GPR_U64(ctx, 2));
    // 0x2a9a70: 0x8f040014
    ctx->pc = 0x2a9a70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a9a74: 0x9f030054
    ctx->pc = 0x2a9a74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 84)));
    // 0x2a9a78: 0x30630001
    ctx->pc = 0x2a9a78u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x2a9a7c: 0x31878
    ctx->pc = 0x2a9a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 1);
    // 0x2a9a80: 0xdc8203c0
    ctx->pc = 0x2a9a80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 960)));
    // 0x2a9a84: 0x451024
    ctx->pc = 0x2a9a84u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a9a88: 0x431025
    ctx->pc = 0x2a9a88u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a9a8c: 0xfc8203c0
    ctx->pc = 0x2a9a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 960), GPR_U64(ctx, 2));
    // 0x2a9a90: 0x8f030014
    ctx->pc = 0x2a9a90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a9a94: 0x93020004
    ctx->pc = 0x2a9a94u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 4)));
    // 0x2a9a98: 0xa06203c1
    ctx->pc = 0x2a9a98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 961), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a9a9c: 0x8f030014
    ctx->pc = 0x2a9a9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x2a9aa0: 0xdc6203c0
    ctx->pc = 0x2a9aa0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 960)));
    // 0x2a9aa4: 0xfc6203c8
    ctx->pc = 0x2a9aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 968), GPR_U64(ctx, 2));
    // 0x2a9aa8: 0x8f030010
    ctx->pc = 0x2a9aa8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 16)));
    // 0x2a9aac: 0xdc6201d0
    ctx->pc = 0x2a9aacu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 464)));
    // 0x2a9ab0: 0x2405fffc
    ctx->pc = 0x2a9ab0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x2a9ab4: 0x451024
    ctx->pc = 0x2a9ab4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a9ab8: 0xfc6201d0
    ctx->pc = 0x2a9ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 464), GPR_U64(ctx, 2));
    // 0x2a9abc: 0x8f040010
    ctx->pc = 0x2a9abcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 16)));
    // 0x2a9ac0: 0x9f020008
    ctx->pc = 0x2a9ac0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 24), 8)));
    // 0x2a9ac4: 0xdc8301d0
    ctx->pc = 0x2a9ac4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 464)));
    // 0x2a9ac8: 0x431025
    ctx->pc = 0x2a9ac8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a9acc: 0xfc8201d0
    ctx->pc = 0x2a9accu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 464), GPR_U64(ctx, 2));
    // 0x2a9ad0: 0x8f040010
    ctx->pc = 0x2a9ad0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 16)));
    // 0x2a9ad4: 0x8f02000c
    ctx->pc = 0x2a9ad4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 24), 12)));
    // 0x2a9ad8: 0x21040
    ctx->pc = 0x2a9ad8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x2a9adc: 0x2103c
    ctx->pc = 0x2a9adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a9ae0: 0x2103e
    ctx->pc = 0x2a9ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2a9ae4: 0xdc8301d0
    ctx->pc = 0x2a9ae4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 464)));
    // 0x2a9ae8: 0x431025
    ctx->pc = 0x2a9ae8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a9aec: 0xfc8201d0
    ctx->pc = 0x2a9aecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 464), GPR_U64(ctx, 2));
    // 0x2a9af0: 0x8f030010
    ctx->pc = 0x2a9af0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 16)));
    // 0x2a9af4: 0xdc6203d0
    ctx->pc = 0x2a9af4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 976)));
    // 0x2a9af8: 0x451024
    ctx->pc = 0x2a9af8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a9afc: 0xfc6203d0
    ctx->pc = 0x2a9afcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 976), GPR_U64(ctx, 2));
    // 0x2a9b00: 0x8f040010
    ctx->pc = 0x2a9b00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 16)));
    // 0x2a9b04: 0x9f020008
    ctx->pc = 0x2a9b04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 24), 8)));
    // 0x2a9b08: 0xdc8303d0
    ctx->pc = 0x2a9b08u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 976)));
    // 0x2a9b0c: 0x431025
    ctx->pc = 0x2a9b0cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a9b10: 0xfc8203d0
    ctx->pc = 0x2a9b10u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 976), GPR_U64(ctx, 2));
    // 0x2a9b14: 0x8f040010
    ctx->pc = 0x2a9b14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 16)));
    // 0x2a9b18: 0x8f02000c
    ctx->pc = 0x2a9b18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 24), 12)));
    // 0x2a9b1c: 0x21040
    ctx->pc = 0x2a9b1cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x2a9b20: 0x2103c
    ctx->pc = 0x2a9b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a9b24: 0x2103e
    ctx->pc = 0x2a9b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2a9b28: 0xdc8303d0
    ctx->pc = 0x2a9b28u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 976)));
    // 0x2a9b2c: 0x431025
    ctx->pc = 0x2a9b2cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a9b30: 0xfc8203d0
    ctx->pc = 0x2a9b30u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 976), GPR_U64(ctx, 2));
label_2a9b34:
    // 0x2a9b34: 0x3e00008
    ctx->pc = 0x2A9B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A9B34u: goto label_2a9b34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A9B3Cu;
}
