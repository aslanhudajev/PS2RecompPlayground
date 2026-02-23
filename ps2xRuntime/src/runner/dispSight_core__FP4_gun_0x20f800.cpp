#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dispSight_core__FP4_gun
// Address: 0x20f800 - 0x20f964
void dispSight_core__FP4_gun_0x20f800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dispSight_core__FP4_gun");


    ctx->pc = 0x20f800u;

    // 0x20f800: 0x27bdff50
    ctx->pc = 0x20f800u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x20f804: 0x7fbf0000
    ctx->pc = 0x20f804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x20f808: 0x84880006
    ctx->pc = 0x20f808u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x20f80c: 0x3c020050
    ctx->pc = 0x20f80cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20f810: 0x2445fecb
    ctx->pc = 0x20f810u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294966987));
    // 0x20f814: 0x3c020027
    ctx->pc = 0x20f814u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x20f818: 0x244633a0
    ctx->pc = 0x20f818u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 13216));
    // 0x20f81c: 0x3c010050
    ctx->pc = 0x20f81cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20f820: 0x81040
    ctx->pc = 0x20f820u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), 1));
    // 0x20f824: 0x481021
    ctx->pc = 0x20f824u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x20f828: 0x21080
    ctx->pc = 0x20f828u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f82c: 0xa21021
    ctx->pc = 0x20f82cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x20f830: 0x80470000
    ctx->pc = 0x20f830u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20f834: 0x82880
    ctx->pc = 0x20f834u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 8), 2));
    // 0x20f838: 0x8423e504
    ctx->pc = 0x20f838u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x20f83c: 0x738c0
    ctx->pc = 0x20f83cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 3));
    // 0x20f840: 0xc73021
    ctx->pc = 0x20f840u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x20f844: 0xa62821
    ctx->pc = 0x20f844u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x20f848: 0x2402000c
    ctx->pc = 0x20f848u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x20f84c: 0x14620023
    ctx->pc = 0x20F84Cu;
    {
        const bool branch_taken_0x20f84c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x20F850u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x20f84c) {
            ctx->pc = 0x20F8DCu;
            goto label_20f8dc;
        }
    }
    ctx->pc = 0x20F854u;
    // 0x20f854: 0xafa50058
    ctx->pc = 0x20f854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
    // 0x20f858: 0x84880008
    ctx->pc = 0x20f858u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x20f85c: 0x3c023c54
    ctx->pc = 0x20f85cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15444 << 16));
    // 0x20f860: 0x3446fdf4
    ctx->pc = 0x20f860u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 65012));
    // 0x20f864: 0x240700e0
    ctx->pc = 0x20f864u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 224));
    // 0x20f868: 0x3c053f80
    ctx->pc = 0x20f868u;
    SET_GPR_U32(ctx, 5, ((uint32_t)16256 << 16));
    // 0x20f86c: 0x2403ffff
    ctx->pc = 0x20f86cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20f870: 0x25020140
    ctx->pc = 0x20f870u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 8), 320));
    // 0x20f874: 0x44820000
    ctx->pc = 0x20f874u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x20f878: 0x0
    ctx->pc = 0x20f878u;
    // NOP
    // 0x20f87c: 0x46800020
    ctx->pc = 0x20f87cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x20f880: 0x2402200a
    ctx->pc = 0x20f880u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8202));
    // 0x20f884: 0xe7a0001c
    ctx->pc = 0x20f884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x20f888: 0x8484000a
    ctx->pc = 0x20f888u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x20f88c: 0xe42023
    ctx->pc = 0x20f88cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x20f890: 0x44840000
    ctx->pc = 0x20f890u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x20f894: 0x0
    ctx->pc = 0x20f894u;
    // NOP
    // 0x20f898: 0x46800020
    ctx->pc = 0x20f898u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x20f89c: 0x27a40010
    ctx->pc = 0x20f89cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x20f8a0: 0xe7a00020
    ctx->pc = 0x20f8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x20f8a4: 0xafa60024
    ctx->pc = 0x20f8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x20f8a8: 0xafa50028
    ctx->pc = 0x20f8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x20f8ac: 0xafa5002c
    ctx->pc = 0x20f8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 5));
    // 0x20f8b0: 0xafa00034
    ctx->pc = 0x20f8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x20f8b4: 0xafa00030
    ctx->pc = 0x20f8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x20f8b8: 0xafa5003c
    ctx->pc = 0x20f8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 5));
    // 0x20f8bc: 0xafa50038
    ctx->pc = 0x20f8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x20f8c0: 0xafa00040
    ctx->pc = 0x20f8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x20f8c4: 0xafa50044
    ctx->pc = 0x20f8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 5));
    // 0x20f8c8: 0xafa30048
    ctx->pc = 0x20f8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x20f8cc: 0xc085bd8
    ctx->pc = 0x20F8CCu;
    SET_GPR_U32(ctx, 31, 0x20F8D4u);
    ctx->pc = 0x20F8D0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    ctx->pc = 0x216F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPut__FP7SPR_ARG_0x216f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F8D4u; }
        else if (ctx->pc != 0x20F8D4u) { ctx->pc = 0x20F8D4u; }
    }
    if (ctx->pc != 0x20F8D4u) { return; }
    ctx->pc = 0x20F8D4u;
    // 0x20f8d4: 0x10000021
    ctx->pc = 0x20F8D4u;
    {
        const bool branch_taken_0x20f8d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F8D8u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x20f8d4) {
            ctx->pc = 0x20F95Cu;
            goto label_20f95c;
        }
    }
    ctx->pc = 0x20F8DCu;
label_20f8dc:
    // 0x20f8dc: 0xafa500a8
    ctx->pc = 0x20f8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
    // 0x20f8e0: 0x84880008
    ctx->pc = 0x20f8e0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x20f8e4: 0x240700e0
    ctx->pc = 0x20f8e4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 224));
    // 0x20f8e8: 0x3c063f00
    ctx->pc = 0x20f8e8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)16128 << 16));
    // 0x20f8ec: 0x3c053f80
    ctx->pc = 0x20f8ecu;
    SET_GPR_U32(ctx, 5, ((uint32_t)16256 << 16));
    // 0x20f8f0: 0x2403ffff
    ctx->pc = 0x20f8f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20f8f4: 0x2402200a
    ctx->pc = 0x20f8f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8202));
    // 0x20f8f8: 0x25080140
    ctx->pc = 0x20f8f8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 320));
    // 0x20f8fc: 0x44880000
    ctx->pc = 0x20f8fcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 8);
    // 0x20f900: 0x0
    ctx->pc = 0x20f900u;
    // NOP
    // 0x20f904: 0x46800020
    ctx->pc = 0x20f904u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x20f908: 0xe7a0006c
    ctx->pc = 0x20f908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x20f90c: 0x8484000a
    ctx->pc = 0x20f90cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x20f910: 0xe42023
    ctx->pc = 0x20f910u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x20f914: 0x44840000
    ctx->pc = 0x20f914u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x20f918: 0x0
    ctx->pc = 0x20f918u;
    // NOP
    // 0x20f91c: 0x46800020
    ctx->pc = 0x20f91cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x20f920: 0x27a40060
    ctx->pc = 0x20f920u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    // 0x20f924: 0xe7a00070
    ctx->pc = 0x20f924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x20f928: 0xafa60074
    ctx->pc = 0x20f928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 6));
    // 0x20f92c: 0xafa50078
    ctx->pc = 0x20f92cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 5));
    // 0x20f930: 0xafa5007c
    ctx->pc = 0x20f930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 5));
    // 0x20f934: 0xafa00084
    ctx->pc = 0x20f934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x20f938: 0xafa00080
    ctx->pc = 0x20f938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x20f93c: 0xafa5008c
    ctx->pc = 0x20f93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 5));
    // 0x20f940: 0xafa50088
    ctx->pc = 0x20f940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 5));
    // 0x20f944: 0xafa00090
    ctx->pc = 0x20f944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x20f948: 0xafa50094
    ctx->pc = 0x20f948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 5));
    // 0x20f94c: 0xafa30098
    ctx->pc = 0x20f94cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
    // 0x20f950: 0xc085bd8
    ctx->pc = 0x20F950u;
    SET_GPR_U32(ctx, 31, 0x20F958u);
    ctx->pc = 0x20F954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    ctx->pc = 0x216F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPut__FP7SPR_ARG_0x216f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F958u; }
        else if (ctx->pc != 0x20F958u) { ctx->pc = 0x20F958u; }
    }
    if (ctx->pc != 0x20F958u) { return; }
    ctx->pc = 0x20F958u;
    // 0x20f958: 0x7bbf0000
    ctx->pc = 0x20f958u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20f95c:
    // 0x20f95c: 0x3e00008
    ctx->pc = 0x20F95Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F960u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20F8DCu: goto label_20f8dc;
            case 0x20F95Cu: goto label_20f95c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20F964u;
}
