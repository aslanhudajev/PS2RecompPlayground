#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__13TrnKomonoTaskFP11ENEMY_TABLE
// Address: 0x21f8e0 - 0x21fb10
void init__13TrnKomonoTaskFP11ENEMY_TABLE_0x21f8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__13TrnKomonoTaskFP11ENEMY_TABLE");


    ctx->pc = 0x21f8e0u;

    // 0x21f8e0: 0x27bdffe0
    ctx->pc = 0x21f8e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21f8e4: 0x7fbf0010
    ctx->pc = 0x21f8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x21f8e8: 0x7fb00000
    ctx->pc = 0x21f8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21f8ec: 0x8c86016c
    ctx->pc = 0x21f8ecu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 364)));
    // 0x21f8f0: 0x70808628
    ctx->pc = 0x21f8f0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x21f8f4: 0x3c040047
    ctx->pc = 0x21f8f4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)71 << 16));
    // 0x21f8f8: 0x348200f6
    ctx->pc = 0x21f8f8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), 246));
    // 0x21f8fc: 0x10c2002a
    ctx->pc = 0x21F8FCu;
    {
        const bool branch_taken_0x21f8fc = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x21F900u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), 247));
        if (branch_taken_0x21f8fc) {
            ctx->pc = 0x21F9A8u;
            goto label_21f9a8;
        }
    }
    ctx->pc = 0x21F904u;
    // 0x21f904: 0x348200d6
    ctx->pc = 0x21f904u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), 214));
    // 0x21f908: 0x10c20025
    ctx->pc = 0x21F908u;
    {
        const bool branch_taken_0x21f908 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x21F90Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), 215));
        if (branch_taken_0x21f908) {
            ctx->pc = 0x21F9A0u;
            goto label_21f9a0;
        }
    }
    ctx->pc = 0x21F910u;
    // 0x21f910: 0x3c020041
    ctx->pc = 0x21f910u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65 << 16));
    // 0x21f914: 0x34430051
    ctx->pc = 0x21f914u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 81));
    // 0x21f918: 0x50c3001f
    ctx->pc = 0x21F918u;
    {
        const bool branch_taken_0x21f918 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        if (branch_taken_0x21f918) {
            ctx->pc = 0x21F91Cu;
            SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 82));
            ctx->pc = 0x21F998u;
            goto label_21f998;
        }
    }
    ctx->pc = 0x21F920u;
    // 0x21f920: 0x348200b3
    ctx->pc = 0x21f920u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), 179));
    // 0x21f924: 0x10c2001a
    ctx->pc = 0x21F924u;
    {
        const bool branch_taken_0x21f924 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x21F928u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), 180));
        if (branch_taken_0x21f924) {
            ctx->pc = 0x21F990u;
            goto label_21f990;
        }
    }
    ctx->pc = 0x21F92Cu;
    // 0x21f92c: 0x3c020040
    ctx->pc = 0x21f92cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)64 << 16));
    // 0x21f930: 0x3443003a
    ctx->pc = 0x21f930u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 58));
    // 0x21f934: 0x50c30014
    ctx->pc = 0x21F934u;
    {
        const bool branch_taken_0x21f934 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        if (branch_taken_0x21f934) {
            ctx->pc = 0x21F938u;
            SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 59));
            ctx->pc = 0x21F988u;
            goto label_21f988;
        }
    }
    ctx->pc = 0x21F93Cu;
    // 0x21f93c: 0x3c020043
    ctx->pc = 0x21f93cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)67 << 16));
    // 0x21f940: 0x34430013
    ctx->pc = 0x21f940u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 19));
    // 0x21f944: 0x50c3000e
    ctx->pc = 0x21F944u;
    {
        const bool branch_taken_0x21f944 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        if (branch_taken_0x21f944) {
            ctx->pc = 0x21F948u;
            SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 20));
            ctx->pc = 0x21F980u;
            goto label_21f980;
        }
    }
    ctx->pc = 0x21F94Cu;
    // 0x21f94c: 0x3c03003c
    ctx->pc = 0x21f94cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x21f950: 0x3462003c
    ctx->pc = 0x21f950u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 60));
    // 0x21f954: 0x10c20008
    ctx->pc = 0x21F954u;
    {
        const bool branch_taken_0x21f954 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x21F958u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 61));
        if (branch_taken_0x21f954) {
            ctx->pc = 0x21F978u;
            goto label_21f978;
        }
    }
    ctx->pc = 0x21F95Cu;
    // 0x21f95c: 0x3462001c
    ctx->pc = 0x21f95cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 28));
    // 0x21f960: 0x10c20003
    ctx->pc = 0x21F960u;
    {
        const bool branch_taken_0x21f960 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x21F964u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 29));
        if (branch_taken_0x21f960) {
            ctx->pc = 0x21F970u;
            goto label_21f970;
        }
    }
    ctx->pc = 0x21F968u;
    // 0x21f968: 0x10000010
    ctx->pc = 0x21F968u;
    {
        const bool branch_taken_0x21f968 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21F96Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 0));
        if (branch_taken_0x21f968) {
            ctx->pc = 0x21F9ACu;
            goto label_21f9ac;
        }
    }
    ctx->pc = 0x21F970u;
label_21f970:
    // 0x21f970: 0x1000000e
    ctx->pc = 0x21F970u;
    {
        const bool branch_taken_0x21f970 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21F974u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 2));
        if (branch_taken_0x21f970) {
            ctx->pc = 0x21F9ACu;
            goto label_21f9ac;
        }
    }
    ctx->pc = 0x21F978u;
label_21f978:
    // 0x21f978: 0x1000000c
    ctx->pc = 0x21F978u;
    {
        const bool branch_taken_0x21f978 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21F97Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 2));
        if (branch_taken_0x21f978) {
            ctx->pc = 0x21F9ACu;
            goto label_21f9ac;
        }
    }
    ctx->pc = 0x21F980u;
label_21f980:
    // 0x21f980: 0x1000000a
    ctx->pc = 0x21F980u;
    {
        const bool branch_taken_0x21f980 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21F984u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 2));
        if (branch_taken_0x21f980) {
            ctx->pc = 0x21F9ACu;
            goto label_21f9ac;
        }
    }
    ctx->pc = 0x21F988u;
label_21f988:
    // 0x21f988: 0x10000008
    ctx->pc = 0x21F988u;
    {
        const bool branch_taken_0x21f988 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21F98Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 2));
        if (branch_taken_0x21f988) {
            ctx->pc = 0x21F9ACu;
            goto label_21f9ac;
        }
    }
    ctx->pc = 0x21F990u;
label_21f990:
    // 0x21f990: 0x10000006
    ctx->pc = 0x21F990u;
    {
        const bool branch_taken_0x21f990 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21F994u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 2));
        if (branch_taken_0x21f990) {
            ctx->pc = 0x21F9ACu;
            goto label_21f9ac;
        }
    }
    ctx->pc = 0x21F998u;
label_21f998:
    // 0x21f998: 0x10000004
    ctx->pc = 0x21F998u;
    {
        const bool branch_taken_0x21f998 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21F99Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 2));
        if (branch_taken_0x21f998) {
            ctx->pc = 0x21F9ACu;
            goto label_21f9ac;
        }
    }
    ctx->pc = 0x21F9A0u;
label_21f9a0:
    // 0x21f9a0: 0x10000002
    ctx->pc = 0x21F9A0u;
    {
        const bool branch_taken_0x21f9a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21F9A4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 2));
        if (branch_taken_0x21f9a0) {
            ctx->pc = 0x21F9ACu;
            goto label_21f9ac;
        }
    }
    ctx->pc = 0x21F9A8u;
label_21f9a8:
    // 0x21f9a8: 0xae020170
    ctx->pc = 0x21f9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 2));
label_21f9ac:
    // 0x21f9ac: 0x24020001
    ctx->pc = 0x21f9acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f9b0: 0xae02000c
    ctx->pc = 0x21f9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x21f9b4: 0x8e03000c
    ctx->pc = 0x21f9b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x21f9b8: 0x3c020001
    ctx->pc = 0x21f9b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x21f9bc: 0x72002628
    ctx->pc = 0x21f9bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x21f9c0: 0x621025
    ctx->pc = 0x21f9c0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21f9c4: 0xae02000c
    ctx->pc = 0x21f9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x21f9c8: 0x12000002
    ctx->pc = 0x21F9C8u;
    {
        const bool branch_taken_0x21f9c8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x21F9CCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 0));
        if (branch_taken_0x21f9c8) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F9D0u;
    // 0x21f9d0: 0x2604002c
    ctx->pc = 0x21f9d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 44));
label_21f9d4:
    // 0x21f9d4: 0xae040004
    ctx->pc = 0x21f9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x21f9d8: 0x12000002
    ctx->pc = 0x21F9D8u;
    {
        const bool branch_taken_0x21f9d8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x21F9DCu;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21f9d8) {
            ctx->pc = 0x21F9E4u;
            goto label_21f9e4;
        }
    }
    ctx->pc = 0x21F9E0u;
    // 0x21f9e0: 0x260200b0
    ctx->pc = 0x21f9e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 176));
label_21f9e4:
    // 0x21f9e4: 0xae020000
    ctx->pc = 0x21f9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x21f9e8: 0x3c01002c
    ctx->pc = 0x21f9e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x21f9ec: 0xc4200aa4
    ctx->pc = 0x21f9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 2724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f9f0: 0x3c02002c
    ctx->pc = 0x21f9f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x21f9f4: 0x24440aa0
    ctx->pc = 0x21f9f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 2720));
    // 0x21f9f8: 0x2402ffff
    ctx->pc = 0x21f9f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21f9fc: 0xe60000b0
    ctx->pc = 0x21f9fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x21fa00: 0x3c01002c
    ctx->pc = 0x21fa00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x21fa04: 0xc4200aa8
    ctx->pc = 0x21fa04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 2728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21fa08: 0x1000000b
    ctx->pc = 0x21FA08u;
    {
        const bool branch_taken_0x21fa08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21FA0Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 376), bits); }
        if (branch_taken_0x21fa08) {
            ctx->pc = 0x21FA38u;
            goto label_21fa38;
        }
    }
    ctx->pc = 0x21FA10u;
label_21fa10:
    // 0x21fa10: 0x8e03016c
    ctx->pc = 0x21fa10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 364)));
    // 0x21fa14: 0x54660008
    ctx->pc = 0x21FA14u;
    {
        const bool branch_taken_0x21fa14 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 6));
        if (branch_taken_0x21fa14) {
            ctx->pc = 0x21FA18u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16));
            ctx->pc = 0x21FA38u;
            goto label_21fa38;
        }
    }
    ctx->pc = 0x21FA1Cu;
    // 0x21fa1c: 0xc4800004
    ctx->pc = 0x21fa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21fa20: 0xe60000b0
    ctx->pc = 0x21fa20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x21fa24: 0xc4800008
    ctx->pc = 0x21fa24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21fa28: 0xe6000178
    ctx->pc = 0x21fa28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 376), bits); }
    // 0x21fa2c: 0x8482000c
    ctx->pc = 0x21fa2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21fa30: 0x10000005
    ctx->pc = 0x21FA30u;
    {
        const bool branch_taken_0x21fa30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21FA34u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 2));
        if (branch_taken_0x21fa30) {
            ctx->pc = 0x21FA48u;
            goto label_21fa48;
        }
    }
    ctx->pc = 0x21FA38u;
label_21fa38:
    // 0x21fa38: 0x8c860000
    ctx->pc = 0x21fa38u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21fa3c: 0x14c2fff4
    ctx->pc = 0x21FA3Cu;
    {
        const bool branch_taken_0x21fa3c = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        if (branch_taken_0x21fa3c) {
            ctx->pc = 0x21FA10u;
            goto label_21fa10;
        }
    }
    ctx->pc = 0x21FA44u;
    // 0x21fa44: 0x0
    ctx->pc = 0x21fa44u;
    // NOP
label_21fa48:
    // 0x21fa48: 0xc4a00008
    ctx->pc = 0x21fa48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21fa4c: 0x3c020029
    ctx->pc = 0x21fa4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x21fa50: 0x2443c0d8
    ctx->pc = 0x21fa50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294951128));
    // 0x21fa54: 0x3c020029
    ctx->pc = 0x21fa54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x21fa58: 0x2447bfe8
    ctx->pc = 0x21fa58u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294950888));
    // 0x21fa5c: 0x70003628
    ctx->pc = 0x21fa5cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21fa60: 0xe600002c
    ctx->pc = 0x21fa60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x21fa64: 0xc4a0000c
    ctx->pc = 0x21fa64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21fa68: 0xe6000030
    ctx->pc = 0x21fa68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x21fa6c: 0xc4a00010
    ctx->pc = 0x21fa6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21fa70: 0xe6000034
    ctx->pc = 0x21fa70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x21fa74: 0xae000038
    ctx->pc = 0x21fa74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x21fa78: 0xae00003c
    ctx->pc = 0x21fa78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x21fa7c: 0xae000040
    ctx->pc = 0x21fa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x21fa80: 0xae000044
    ctx->pc = 0x21fa80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x21fa84: 0xae000048
    ctx->pc = 0x21fa84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x21fa88: 0xae00004c
    ctx->pc = 0x21fa88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x21fa8c: 0x94a20002
    ctx->pc = 0x21fa8cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x21fa90: 0xae020050
    ctx->pc = 0x21fa90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x21fa94: 0x94a20004
    ctx->pc = 0x21fa94u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21fa98: 0xae020054
    ctx->pc = 0x21fa98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x21fa9c: 0x94a20006
    ctx->pc = 0x21fa9cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x21faa0: 0xae020058
    ctx->pc = 0x21faa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x21faa4: 0x8c650008
    ctx->pc = 0x21faa4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x21faa8: 0x8e040168
    ctx->pc = 0x21faa8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x21faac: 0xc068f70
    ctx->pc = 0x21FAACu;
    SET_GPR_U32(ctx, 31, 0x21FAB4u);
    ctx->pc = 0x21FAB0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A3DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        newExec__11SystemTask2FPFv_viPiPv_0x1a3dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FAB4u; }
        else if (ctx->pc != 0x21FAB4u) { ctx->pc = 0x21FAB4u; }
    }
    if (ctx->pc != 0x21FAB4u) { return; }
    ctx->pc = 0x21FAB4u;
    // 0x21fab4: 0x3c020029
    ctx->pc = 0x21fab4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x21fab8: 0x2442c0e8
    ctx->pc = 0x21fab8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294951144));
    // 0x21fabc: 0x8c450008
    ctx->pc = 0x21fabcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x21fac0: 0x8e040168
    ctx->pc = 0x21fac0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x21fac4: 0x72004628
    ctx->pc = 0x21fac4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x21fac8: 0x3c020029
    ctx->pc = 0x21fac8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x21facc: 0x2447c008
    ctx->pc = 0x21faccu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294950920));
    // 0x21fad0: 0x3c020001
    ctx->pc = 0x21fad0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x21fad4: 0xc068f70
    ctx->pc = 0x21FAD4u;
    SET_GPR_U32(ctx, 31, 0x21FADCu);
    ctx->pc = 0x21FAD8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 5));
    ctx->pc = 0x1A3DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        newExec__11SystemTask2FPFv_viPiPv_0x1a3dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FADCu; }
        else if (ctx->pc != 0x21FADCu) { ctx->pc = 0x21FADCu; }
    }
    if (ctx->pc != 0x21FADCu) { return; }
    ctx->pc = 0x21FADCu;
    // 0x21fadc: 0x3c020029
    ctx->pc = 0x21fadcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x21fae0: 0x2442c0f8
    ctx->pc = 0x21fae0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294951160));
    // 0x21fae4: 0x8c450008
    ctx->pc = 0x21fae4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x21fae8: 0x8e040168
    ctx->pc = 0x21fae8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x21faec: 0x72004628
    ctx->pc = 0x21faecu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x21faf0: 0x3c060002
    ctx->pc = 0x21faf0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)2 << 16));
    // 0x21faf4: 0x3c020029
    ctx->pc = 0x21faf4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x21faf8: 0xc068f70
    ctx->pc = 0x21FAF8u;
    SET_GPR_U32(ctx, 31, 0x21FB00u);
    ctx->pc = 0x21FAFCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294951112));
    ctx->pc = 0x1A3DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        newExec__11SystemTask2FPFv_viPiPv_0x1a3dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FB00u; }
        else if (ctx->pc != 0x21FB00u) { ctx->pc = 0x21FB00u; }
    }
    if (ctx->pc != 0x21FB00u) { return; }
    ctx->pc = 0x21FB00u;
    // 0x21fb00: 0x7bbf0010
    ctx->pc = 0x21fb00u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21fb04: 0x7bb00000
    ctx->pc = 0x21fb04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fb08: 0x3e00008
    ctx->pc = 0x21FB08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FB0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21F970u: goto label_21f970;
            case 0x21F978u: goto label_21f978;
            case 0x21F980u: goto label_21f980;
            case 0x21F988u: goto label_21f988;
            case 0x21F990u: goto label_21f990;
            case 0x21F998u: goto label_21f998;
            case 0x21F9A0u: goto label_21f9a0;
            case 0x21F9A8u: goto label_21f9a8;
            case 0x21F9ACu: goto label_21f9ac;
            case 0x21F9D4u: goto label_21f9d4;
            case 0x21F9E4u: goto label_21f9e4;
            case 0x21FA10u: goto label_21fa10;
            case 0x21FA38u: goto label_21fa38;
            case 0x21FA48u: goto label_21fa48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21FB10u;
}
