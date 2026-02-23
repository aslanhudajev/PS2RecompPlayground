#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adjustVal_cz__11GunMgrClassFP4_gun
// Address: 0x1ee690 - 0x1ee790
void adjustVal_cz__11GunMgrClassFP4_gun_0x1ee690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adjustVal_cz__11GunMgrClassFP4_gun");


    ctx->pc = 0x1ee690u;

    // 0x1ee690: 0x27bdffc0
    ctx->pc = 0x1ee690u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ee694: 0x7fbf0030
    ctx->pc = 0x1ee694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1ee698: 0x7fb20020
    ctx->pc = 0x1ee698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ee69c: 0x7fb10010
    ctx->pc = 0x1ee69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ee6a0: 0x7fb00000
    ctx->pc = 0x1ee6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ee6a4: 0x84a40006
    ctx->pc = 0x1ee6a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x1ee6a8: 0xc07bf9c
    ctx->pc = 0x1EE6A8u;
    SET_GPR_U32(ctx, 31, 0x1EE6B0u);
    ctx->pc = 0x1EE6ACu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EFE70u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetGunDevice__Fi_0x1efe70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE6B0u; }
        else if (ctx->pc != 0x1EE6B0u) { ctx->pc = 0x1EE6B0u; }
    }
    if (ctx->pc != 0x1EE6B0u) { return; }
    ctx->pc = 0x1EE6B0u;
    // 0x1ee6b0: 0x24030003
    ctx->pc = 0x1ee6b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ee6b4: 0x10430006
    ctx->pc = 0x1EE6B4u;
    {
        const bool branch_taken_0x1ee6b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1EE6B8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1ee6b4) {
            ctx->pc = 0x1EE6D0u;
            goto label_1ee6d0;
        }
    }
    ctx->pc = 0x1EE6BCu;
    // 0x1ee6bc: 0x24030002
    ctx->pc = 0x1ee6bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ee6c0: 0x10430003
    ctx->pc = 0x1EE6C0u;
    {
        const bool branch_taken_0x1ee6c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1ee6c0) {
            ctx->pc = 0x1EE6D0u;
            goto label_1ee6d0;
        }
    }
    ctx->pc = 0x1EE6C8u;
    // 0x1ee6c8: 0x1000001b
    ctx->pc = 0x1EE6C8u;
    {
        const bool branch_taken_0x1ee6c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EE6CCu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 4294966977));
        if (branch_taken_0x1ee6c8) {
            ctx->pc = 0x1EE738u;
            goto label_1ee738;
        }
    }
    ctx->pc = 0x1EE6D0u;
label_1ee6d0:
    // 0x1ee6d0: 0x8424e504
    ctx->pc = 0x1ee6d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x1ee6d4: 0x24030014
    ctx->pc = 0x1ee6d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ee6d8: 0x10830004
    ctx->pc = 0x1EE6D8u;
    {
        const bool branch_taken_0x1ee6d8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1ee6d8) {
            ctx->pc = 0x1EE6ECu;
            goto label_1ee6ec;
        }
    }
    ctx->pc = 0x1EE6E0u;
    // 0x1ee6e0: 0x87838b58
    ctx->pc = 0x1ee6e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937432)));
    // 0x1ee6e4: 0x10600007
    ctx->pc = 0x1EE6E4u;
    {
        const bool branch_taken_0x1ee6e4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EE6E8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1ee6e4) {
            ctx->pc = 0x1EE704u;
            goto label_1ee704;
        }
    }
    ctx->pc = 0x1EE6ECu;
label_1ee6ec:
    // 0x1ee6ec: 0x96250000
    ctx->pc = 0x1ee6ecu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ee6f0: 0x96240002
    ctx->pc = 0x1ee6f0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1ee6f4: 0x240300e0
    ctx->pc = 0x1ee6f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 224));
    // 0x1ee6f8: 0x24b0fec0
    ctx->pc = 0x1ee6f8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 5), 4294966976));
    // 0x1ee6fc: 0x1000000d
    ctx->pc = 0x1EE6FCu;
    {
        const bool branch_taken_0x1ee6fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EE700u;
        SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        if (branch_taken_0x1ee6fc) {
            ctx->pc = 0x1EE734u;
            goto label_1ee734;
        }
    }
    ctx->pc = 0x1EE704u;
label_1ee704:
    // 0x1ee704: 0x8426fee4
    ctx->pc = 0x1ee704u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294967012)));
    // 0x1ee708: 0x96270000
    ctx->pc = 0x1ee708u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ee70c: 0x96250002
    ctx->pc = 0x1ee70cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1ee710: 0x240400e0
    ctx->pc = 0x1ee710u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 224));
    // 0x1ee714: 0x3c010050
    ctx->pc = 0x1ee714u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1ee718: 0x8423fee6
    ctx->pc = 0x1ee718u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294967014)));
    // 0x1ee71c: 0x24e7fec0
    ctx->pc = 0x1ee71cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294966976));
    // 0x1ee720: 0x63040
    ctx->pc = 0x1ee720u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 1));
    // 0x1ee724: 0x852023
    ctx->pc = 0x1ee724u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ee728: 0xe68023
    ctx->pc = 0x1ee728u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1ee72c: 0x31840
    ctx->pc = 0x1ee72cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ee730: 0x839021
    ctx->pc = 0x1ee730u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ee734:
    // 0x1ee734: 0x2a01fec1
    ctx->pc = 0x1ee734u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 4294966977));
label_1ee738:
    // 0x1ee738: 0x1420000c
    ctx->pc = 0x1EE738u;
    {
        const bool branch_taken_0x1ee738 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EE73Cu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 320));
        if (branch_taken_0x1ee738) {
            ctx->pc = 0x1EE76Cu;
            goto label_1ee76c;
        }
    }
    ctx->pc = 0x1EE740u;
    // 0x1ee740: 0x1020000a
    ctx->pc = 0x1EE740u;
    {
        const bool branch_taken_0x1ee740 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EE744u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 18), 4294967073));
        if (branch_taken_0x1ee740) {
            ctx->pc = 0x1EE76Cu;
            goto label_1ee76c;
        }
    }
    ctx->pc = 0x1EE748u;
    // 0x1ee748: 0x14200008
    ctx->pc = 0x1EE748u;
    {
        const bool branch_taken_0x1ee748 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EE74Cu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 18), 224));
        if (branch_taken_0x1ee748) {
            ctx->pc = 0x1EE76Cu;
            goto label_1ee76c;
        }
    }
    ctx->pc = 0x1EE750u;
    // 0x1ee750: 0x10200006
    ctx->pc = 0x1EE750u;
    {
        const bool branch_taken_0x1ee750 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ee750) {
            ctx->pc = 0x1EE76Cu;
            goto label_1ee76c;
        }
    }
    ctx->pc = 0x1EE758u;
    // 0x1ee758: 0xa6300008
    ctx->pc = 0x1ee758u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 16));
    // 0x1ee75c: 0xa632000a
    ctx->pc = 0x1ee75cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 18));
    // 0x1ee760: 0x24030001
    ctx->pc = 0x1ee760u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee764: 0x10000004
    ctx->pc = 0x1EE764u;
    {
        const bool branch_taken_0x1ee764 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EE768u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1ee764) {
            ctx->pc = 0x1EE778u;
            goto label_1ee778;
        }
    }
    ctx->pc = 0x1EE76Cu;
label_1ee76c:
    // 0x1ee76c: 0xa6200008
    ctx->pc = 0x1ee76cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ee770: 0xa620000a
    ctx->pc = 0x1ee770u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ee774: 0xa620000c
    ctx->pc = 0x1ee774u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 0));
label_1ee778:
    // 0x1ee778: 0x7bbf0030
    ctx->pc = 0x1ee778u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ee77c: 0x7bb20020
    ctx->pc = 0x1ee77cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee780: 0x7bb10010
    ctx->pc = 0x1ee780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee784: 0x7bb00000
    ctx->pc = 0x1ee784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee788: 0x3e00008
    ctx->pc = 0x1EE788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE78Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EE6D0u: goto label_1ee6d0;
            case 0x1EE6ECu: goto label_1ee6ec;
            case 0x1EE704u: goto label_1ee704;
            case 0x1EE734u: goto label_1ee734;
            case 0x1EE738u: goto label_1ee738;
            case 0x1EE76Cu: goto label_1ee76c;
            case 0x1EE778u: goto label_1ee778;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EE790u;
}
