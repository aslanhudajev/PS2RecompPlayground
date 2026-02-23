#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: checkVampDamageMotEnd__10PeopleTaskFv
// Address: 0x20b360 - 0x20b404
void checkVampDamageMotEnd__10PeopleTaskFv_0x20b360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("checkVampDamageMotEnd__10PeopleTaskFv");


    ctx->pc = 0x20b360u;

    // 0x20b360: 0x8c831d74
    ctx->pc = 0x20b360u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7540)));
    // 0x20b364: 0x30630004
    ctx->pc = 0x20b364u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 4));
    // 0x20b368: 0x1060000e
    ctx->pc = 0x20B368u;
    {
        const bool branch_taken_0x20b368 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x20b368) {
            ctx->pc = 0x20B3A4u;
            goto label_20b3a4;
        }
    }
    ctx->pc = 0x20B370u;
    // 0x20b370: 0x8083006c
    ctx->pc = 0x20b370u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x20b374: 0x14600021
    ctx->pc = 0x20B374u;
    {
        const bool branch_taken_0x20b374 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x20b374) {
            ctx->pc = 0x20B3FCu;
            goto label_20b3fc;
        }
    }
    ctx->pc = 0x20B37Cu;
    // 0x20b37c: 0x8c86000c
    ctx->pc = 0x20b37cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x20b380: 0x3c03bfff
    ctx->pc = 0x20b380u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49151 << 16));
    // 0x20b384: 0x3465ffff
    ctx->pc = 0x20b384u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 65535));
    // 0x20b388: 0x2403fffb
    ctx->pc = 0x20b388u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x20b38c: 0xc52824
    ctx->pc = 0x20b38cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x20b390: 0xac85000c
    ctx->pc = 0x20b390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x20b394: 0x8c851d74
    ctx->pc = 0x20b394u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 7540)));
    // 0x20b398: 0xa31824
    ctx->pc = 0x20b398u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x20b39c: 0x10000017
    ctx->pc = 0x20B39Cu;
    {
        const bool branch_taken_0x20b39c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B3A0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 7540), GPR_U32(ctx, 3));
        if (branch_taken_0x20b39c) {
            ctx->pc = 0x20B3FCu;
            goto label_20b3fc;
        }
    }
    ctx->pc = 0x20B3A4u;
label_20b3a4:
    // 0x20b3a4: 0x8c830034
    ctx->pc = 0x20b3a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x20b3a8: 0xc4810044
    ctx->pc = 0x20b3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b3ac: 0xc4801da8
    ctx->pc = 0x20b3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 7592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b3b0: 0x3c0101fb
    ctx->pc = 0x20b3b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)507 << 16));
    // 0x20b3b4: 0x31840
    ctx->pc = 0x20b3b4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x20b3b8: 0x610821
    ctx->pc = 0x20b3b8u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x20b3bc: 0x842373e4
    ctx->pc = 0x20b3bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 29668)));
    // 0x20b3c0: 0x46000840
    ctx->pc = 0x20b3c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20b3c4: 0x44830000
    ctx->pc = 0x20b3c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x20b3c8: 0x0
    ctx->pc = 0x20b3c8u;
    // NOP
    // 0x20b3cc: 0x46800020
    ctx->pc = 0x20b3ccu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x20b3d0: 0x46000834
    ctx->pc = 0x20b3d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b3d4: 0x0
    ctx->pc = 0x20b3d4u;
    // NOP
    // 0x20b3d8: 0x45010008
    ctx->pc = 0x20B3D8u;
    {
        const bool branch_taken_0x20b3d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b3d8) {
            ctx->pc = 0x20B3FCu;
            goto label_20b3fc;
        }
    }
    ctx->pc = 0x20B3E0u;
    // 0x20b3e0: 0x8c86000c
    ctx->pc = 0x20b3e0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x20b3e4: 0x3c03bfff
    ctx->pc = 0x20b3e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49151 << 16));
    // 0x20b3e8: 0x3465ffff
    ctx->pc = 0x20b3e8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 65535));
    // 0x20b3ec: 0x2403ffff
    ctx->pc = 0x20b3ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20b3f0: 0xc52824
    ctx->pc = 0x20b3f0u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x20b3f4: 0xac85000c
    ctx->pc = 0x20b3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x20b3f8: 0xac831dac
    ctx->pc = 0x20b3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7596), GPR_U32(ctx, 3));
label_20b3fc:
    // 0x20b3fc: 0x3e00008
    ctx->pc = 0x20B3FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20B3A4u: goto label_20b3a4;
            case 0x20B3FCu: goto label_20b3fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20B404u;
}
