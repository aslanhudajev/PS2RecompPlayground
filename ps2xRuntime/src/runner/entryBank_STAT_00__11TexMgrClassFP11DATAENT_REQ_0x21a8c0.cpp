#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryBank_STAT_00__11TexMgrClassFP11DATAENT_REQ
// Address: 0x21a8c0 - 0x21aa3c
void entryBank_STAT_00__11TexMgrClassFP11DATAENT_REQ_0x21a8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryBank_STAT_00__11TexMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x21a8c0u;

    // 0x21a8c0: 0x27bdffc0
    ctx->pc = 0x21a8c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21a8c4: 0x7fbf0030
    ctx->pc = 0x21a8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x21a8c8: 0x7fb20020
    ctx->pc = 0x21a8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21a8cc: 0x7fb10010
    ctx->pc = 0x21a8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21a8d0: 0x7fb00000
    ctx->pc = 0x21a8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21a8d4: 0x8ca30008
    ctx->pc = 0x21a8d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x21a8d8: 0x70809628
    ctx->pc = 0x21a8d8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x21a8dc: 0x3c020092
    ctx->pc = 0x21a8dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)146 << 16));
    // 0x21a8e0: 0x24424d00
    ctx->pc = 0x21a8e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19712));
    // 0x21a8e4: 0x3c0101fb
    ctx->pc = 0x21a8e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)507 << 16));
    // 0x21a8e8: 0x3207c
    ctx->pc = 0x21a8e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 1));
    // 0x21a8ec: 0x4207e
    ctx->pc = 0x21a8ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 1));
    // 0x21a8f0: 0x418c0
    ctx->pc = 0x21a8f0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x21a8f4: 0x641823
    ctx->pc = 0x21a8f4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21a8f8: 0x31880
    ctx->pc = 0x21a8f8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x21a8fc: 0x44040
    ctx->pc = 0x21a8fcu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 4), 1));
    // 0x21a900: 0x438021
    ctx->pc = 0x21a900u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21a904: 0x1010821
    ctx->pc = 0x21a904u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 1)));
    // 0x21a908: 0x84221c28
    ctx->pc = 0x21a908u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 7208)));
    // 0x21a90c: 0x30420001
    ctx->pc = 0x21a90cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x21a910: 0x54400008
    ctx->pc = 0x21A910u;
    {
        const bool branch_taken_0x21a910 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x21a910) {
            ctx->pc = 0x21A914u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x21A934u;
            goto label_21a934;
        }
    }
    ctx->pc = 0x21A918u;
    // 0x21a918: 0x3c02004a
    ctx->pc = 0x21a918u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
    // 0x21a91c: 0x2442f560
    ctx->pc = 0x21a91cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294964576));
    // 0x21a920: 0x441021
    ctx->pc = 0x21a920u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21a924: 0x80420000
    ctx->pc = 0x21a924u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21a928: 0x10400002
    ctx->pc = 0x21A928u;
    {
        const bool branch_taken_0x21a928 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A92Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21a928) {
            ctx->pc = 0x21A934u;
            goto label_21a934;
        }
    }
    ctx->pc = 0x21A930u;
    // 0x21a930: 0x24040001
    ctx->pc = 0x21a930u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_21a934:
    // 0x21a934: 0x8e020014
    ctx->pc = 0x21a934u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x21a938: 0x24420001
    ctx->pc = 0x21a938u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x21a93c: 0xae020014
    ctx->pc = 0x21a93cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x21a940: 0x8e020018
    ctx->pc = 0x21a940u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x21a944: 0x8e060008
    ctx->pc = 0x21a944u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21a948: 0x8e070000
    ctx->pc = 0x21a948u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21a94c: 0x30450001
    ctx->pc = 0x21a94cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 2), 1));
    // 0x21a950: 0x6182b
    ctx->pc = 0x21a950u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x21a954: 0x7102b
    ctx->pc = 0x21a954u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x21a958: 0x621025
    ctx->pc = 0x21a958u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21a95c: 0x10400007
    ctx->pc = 0x21A95Cu;
    {
        const bool branch_taken_0x21a95c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x21a95c) {
            ctx->pc = 0x21A97Cu;
            goto label_21a97c;
        }
    }
    ctx->pc = 0x21A964u;
    // 0x21a964: 0x10a40005
    ctx->pc = 0x21A964u;
    {
        const bool branch_taken_0x21a964 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 4));
        ctx->pc = 0x21A968u;
        SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
        if (branch_taken_0x21a964) {
            ctx->pc = 0x21A97Cu;
            goto label_21a97c;
        }
    }
    ctx->pc = 0x21A96Cu;
    // 0x21a96c: 0xc05114a
    ctx->pc = 0x21A96Cu;
    SET_GPR_U32(ctx, 31, 0x21A974u);
    ctx->pc = 0x21A970u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294950624));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A974u; }
        else if (ctx->pc != 0x21A974u) { ctx->pc = 0x21A974u; }
    }
    if (ctx->pc != 0x21A974u) { return; }
    ctx->pc = 0x21A974u;
label_21a974:
    // 0x21a974: 0x1000ffff
    ctx->pc = 0x21A974u;
    {
        const bool branch_taken_0x21a974 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x21a974) {
            ctx->pc = 0x21A974u;
            goto label_21a974;
        }
    }
    ctx->pc = 0x21A97Cu;
label_21a97c:
    // 0x21a97c: 0x10c00003
    ctx->pc = 0x21A97Cu;
    {
        const bool branch_taken_0x21a97c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A980u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x21a97c) {
            ctx->pc = 0x21A98Cu;
            goto label_21a98c;
        }
    }
    ctx->pc = 0x21A984u;
    // 0x21a984: 0x10000028
    ctx->pc = 0x21A984u;
    {
        const bool branch_taken_0x21a984 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A988u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x21a984) {
            ctx->pc = 0x21AA28u;
            goto label_21aa28;
        }
    }
    ctx->pc = 0x21A98Cu;
label_21a98c:
    // 0x21a98c: 0x10e00006
    ctx->pc = 0x21A98Cu;
    {
        const bool branch_taken_0x21a98c = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A990u;
        SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
        if (branch_taken_0x21a98c) {
            ctx->pc = 0x21A9A8u;
            goto label_21a9a8;
        }
    }
    ctx->pc = 0x21A994u;
    // 0x21a994: 0x8e4303a8
    ctx->pc = 0x21a994u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 936)));
    // 0x21a998: 0x24040002
    ctx->pc = 0x21a998u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x21a99c: 0x24020001
    ctx->pc = 0x21a99cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a9a0: 0x10000020
    ctx->pc = 0x21A9A0u;
    {
        const bool branch_taken_0x21a9a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A9A4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        if (branch_taken_0x21a9a0) {
            ctx->pc = 0x21AA24u;
            goto label_21aa24;
        }
    }
    ctx->pc = 0x21A9A8u;
label_21a9a8:
    // 0x21a9a8: 0x2442ad30
    ctx->pc = 0x21a9a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294946096));
    // 0x21a9ac: 0x481021
    ctx->pc = 0x21a9acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x21a9b0: 0x84450000
    ctx->pc = 0x21a9b0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21a9b4: 0xc05adc4
    ctx->pc = 0x21A9B4u;
    SET_GPR_U32(ctx, 31, 0x21A9BCu);
    ctx->pc = 0x21A9B8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16B710u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_OpenAfs_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A9BCu; }
        else if (ctx->pc != 0x21A9BCu) { ctx->pc = 0x21A9BCu; }
    }
    if (ctx->pc != 0x21A9BCu) { return; }
    ctx->pc = 0x21A9BCu;
    // 0x21a9bc: 0x3c010050
    ctx->pc = 0x21a9bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x21a9c0: 0xac220c6c
    ctx->pc = 0x21a9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3180), GPR_U32(ctx, 2));
    // 0x21a9c4: 0x3c010050
    ctx->pc = 0x21a9c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x21a9c8: 0xc05afe2
    ctx->pc = 0x21A9C8u;
    SET_GPR_U32(ctx, 31, 0x21A9D0u);
    ctx->pc = 0x21A9CCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3180)));
    ctx->pc = 0x16BF88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetFsizeSct_0x16bf88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A9D0u; }
        else if (ctx->pc != 0x21A9D0u) { ctx->pc = 0x21A9D0u; }
    }
    if (ctx->pc != 0x21A9D0u) { return; }
    ctx->pc = 0x21A9D0u;
    // 0x21a9d0: 0x70408e28
    ctx->pc = 0x21a9d0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21a9d4: 0x8f828c5c
    ctx->pc = 0x21a9d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x21a9d8: 0x10400005
    ctx->pc = 0x21A9D8u;
    {
        const bool branch_taken_0x21a9d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A9DCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 11));
        if (branch_taken_0x21a9d8) {
            ctx->pc = 0x21A9F0u;
            goto label_21a9f0;
        }
    }
    ctx->pc = 0x21A9E0u;
    // 0x21a9e0: 0xc08551c
    ctx->pc = 0x21A9E0u;
    SET_GPR_U32(ctx, 31, 0x21A9E8u);
    ctx->pc = 0x21A9E4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 17), 11));
    ctx->pc = 0x215470u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetPolCommonBuf__Fi_0x215470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A9E8u; }
        else if (ctx->pc != 0x21A9E8u) { ctx->pc = 0x21A9E8u; }
    }
    if (ctx->pc != 0x21A9E8u) { return; }
    ctx->pc = 0x21A9E8u;
    // 0x21a9e8: 0x10000004
    ctx->pc = 0x21A9E8u;
    {
        const bool branch_taken_0x21a9e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A9ECu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x21a9e8) {
            ctx->pc = 0x21A9FCu;
            goto label_21a9fc;
        }
    }
    ctx->pc = 0x21A9F0u;
label_21a9f0:
    // 0x21a9f0: 0xc06878c
    ctx->pc = 0x21A9F0u;
    SET_GPR_U32(ctx, 31, 0x21A9F8u);
    ctx->pc = 0x21A9F4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A9F8u; }
        else if (ctx->pc != 0x21A9F8u) { ctx->pc = 0x21A9F8u; }
    }
    if (ctx->pc != 0x21A9F8u) { return; }
    ctx->pc = 0x21A9F8u;
    // 0x21a9f8: 0xae020000
    ctx->pc = 0x21a9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_21a9fc:
    // 0x21a9fc: 0x2443003f
    ctx->pc = 0x21a9fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 63));
    // 0x21aa00: 0x2402ffc0
    ctx->pc = 0x21aa00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x21aa04: 0x621024
    ctx->pc = 0x21aa04u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21aa08: 0xae020004
    ctx->pc = 0x21aa08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x21aa0c: 0xae11000c
    ctx->pc = 0x21aa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x21aa10: 0x8e4403a8
    ctx->pc = 0x21aa10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 936)));
    // 0x21aa14: 0x24020001
    ctx->pc = 0x21aa14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21aa18: 0x8c83000c
    ctx->pc = 0x21aa18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21aa1c: 0x24630001
    ctx->pc = 0x21aa1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x21aa20: 0xac83000c
    ctx->pc = 0x21aa20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_21aa24:
    // 0x21aa24: 0x7bbf0030
    ctx->pc = 0x21aa24u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21aa28:
    // 0x21aa28: 0x7bb20020
    ctx->pc = 0x21aa28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21aa2c: 0x7bb10010
    ctx->pc = 0x21aa2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21aa30: 0x7bb00000
    ctx->pc = 0x21aa30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21aa34: 0x3e00008
    ctx->pc = 0x21AA34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AA38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21A934u: goto label_21a934;
            case 0x21A974u: goto label_21a974;
            case 0x21A97Cu: goto label_21a97c;
            case 0x21A98Cu: goto label_21a98c;
            case 0x21A9A8u: goto label_21a9a8;
            case 0x21A9F0u: goto label_21a9f0;
            case 0x21A9FCu: goto label_21a9fc;
            case 0x21AA24u: goto label_21aa24;
            case 0x21AA28u: goto label_21aa28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21AA3Cu;
}
