#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: read_SYNCH_gun1__11GunMgrClassFi
// Address: 0x1ee080 - 0x1ee1cc
void read_SYNCH_gun1__11GunMgrClassFi_0x1ee080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("read_SYNCH_gun1__11GunMgrClassFi");


    ctx->pc = 0x1ee080u;

    // 0x1ee080: 0x27bdffc0
    ctx->pc = 0x1ee080u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ee084: 0x51080
    ctx->pc = 0x1ee084u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ee088: 0x7fbf0030
    ctx->pc = 0x1ee088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1ee08c: 0x7fb20020
    ctx->pc = 0x1ee08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ee090: 0x7fb10010
    ctx->pc = 0x1ee090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ee094: 0x451821
    ctx->pc = 0x1ee094u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ee098: 0x31080
    ctx->pc = 0x1ee098u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ee09c: 0x621021
    ctx->pc = 0x1ee09cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ee0a0: 0x7fb00000
    ctx->pc = 0x1ee0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ee0a4: 0x21080
    ctx->pc = 0x1ee0a4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ee0a8: 0x828021
    ctx->pc = 0x1ee0a8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ee0ac: 0x70809628
    ctx->pc = 0x1ee0acu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ee0b0: 0x70a08e28
    ctx->pc = 0x1ee0b0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ee0b4: 0x72202628
    ctx->pc = 0x1ee0b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ee0b8: 0xc080978
    ctx->pc = 0x1EE0B8u;
    SET_GPR_U32(ctx, 31, 0x1EE0C0u);
    ctx->pc = 0x1EE0BCu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2025E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_PullTrigger__Fi_0x2025e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE0C0u; }
        else if (ctx->pc != 0x1EE0C0u) { ctx->pc = 0x1EE0C0u; }
    }
    if (ctx->pc != 0x1EE0C0u) { return; }
    ctx->pc = 0x1EE0C0u;
    // 0x1ee0c0: 0x10400008
    ctx->pc = 0x1EE0C0u;
    {
        const bool branch_taken_0x1ee0c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ee0c0) {
            ctx->pc = 0x1EE0E4u;
            goto label_1ee0e4;
        }
    }
    ctx->pc = 0x1EE0C8u;
    // 0x1ee0c8: 0x82030010
    ctx->pc = 0x1ee0c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ee0cc: 0x14600005
    ctx->pc = 0x1EE0CCu;
    {
        const bool branch_taken_0x1ee0cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EE0D0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ee0cc) {
            ctx->pc = 0x1EE0E4u;
            goto label_1ee0e4;
        }
    }
    ctx->pc = 0x1EE0D4u;
    // 0x1ee0d4: 0xc07ba88
    ctx->pc = 0x1EE0D4u;
    SET_GPR_U32(ctx, 31, 0x1EE0DCu);
    ctx->pc = 0x1EEA20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReqGunFlash__Fi_0x1eea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE0DCu; }
        else if (ctx->pc != 0x1EE0DCu) { ctx->pc = 0x1EE0DCu; }
    }
    if (ctx->pc != 0x1EE0DCu) { return; }
    ctx->pc = 0x1EE0DCu;
    // 0x1ee0dc: 0x24030004
    ctx->pc = 0x1ee0dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ee0e0: 0xa2030010
    ctx->pc = 0x1ee0e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 3));
label_1ee0e4:
    // 0x1ee0e4: 0x82030010
    ctx->pc = 0x1ee0e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ee0e8: 0x58600008
    ctx->pc = 0x1EE0E8u;
    {
        const bool branch_taken_0x1ee0e8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1ee0e8) {
            ctx->pc = 0x1EE0ECu;
            SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x1EE10Cu;
            goto label_1ee10c;
        }
    }
    ctx->pc = 0x1EE0F0u;
    // 0x1ee0f0: 0x2463ffff
    ctx->pc = 0x1ee0f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ee0f4: 0xa2030010
    ctx->pc = 0x1ee0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ee0f8: 0x82030010
    ctx->pc = 0x1ee0f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ee0fc: 0x14600002
    ctx->pc = 0x1EE0FCu;
    {
        const bool branch_taken_0x1ee0fc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EE100u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1ee0fc) {
            ctx->pc = 0x1EE108u;
            goto label_1ee108;
        }
    }
    ctx->pc = 0x1EE104u;
    // 0x1ee104: 0xa203000e
    ctx->pc = 0x1ee104u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 3));
label_1ee108:
    // 0x1ee108: 0x111840
    ctx->pc = 0x1ee108u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 1));
label_1ee10c:
    // 0x1ee10c: 0x711821
    ctx->pc = 0x1ee10cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1ee110: 0x31880
    ctx->pc = 0x1ee110u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ee114: 0x711821
    ctx->pc = 0x1ee114u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1ee118: 0x32040
    ctx->pc = 0x1ee118u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ee11c: 0x3c030050
    ctx->pc = 0x1ee11cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1ee120: 0x2463dc4a
    ctx->pc = 0x1ee120u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294958154));
    // 0x1ee124: 0x641821
    ctx->pc = 0x1ee124u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ee128: 0x84640000
    ctx->pc = 0x1ee128u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ee12c: 0x10800005
    ctx->pc = 0x1EE12Cu;
    {
        const bool branch_taken_0x1ee12c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EE130u;
        SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 65535));
        if (branch_taken_0x1ee12c) {
            ctx->pc = 0x1EE144u;
            goto label_1ee144;
        }
    }
    ctx->pc = 0x1EE134u;
    // 0x1ee134: 0x24030001
    ctx->pc = 0x1ee134u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee138: 0x14830005
    ctx->pc = 0x1EE138u;
    {
        const bool branch_taken_0x1ee138 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1EE13Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ee138) {
            ctx->pc = 0x1EE150u;
            goto label_1ee150;
        }
    }
    ctx->pc = 0x1EE140u;
    // 0x1ee140: 0x3403ffff
    ctx->pc = 0x1ee140u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 65535));
label_1ee144:
    // 0x1ee144: 0xa6030000
    ctx->pc = 0x1ee144u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ee148: 0x10000003
    ctx->pc = 0x1EE148u;
    {
        const bool branch_taken_0x1ee148 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EE14Cu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1ee148) {
            ctx->pc = 0x1EE158u;
            goto label_1ee158;
        }
    }
    ctx->pc = 0x1EE150u;
label_1ee150:
    // 0x1ee150: 0xc07b9e4
    ctx->pc = 0x1EE150u;
    SET_GPR_U32(ctx, 31, 0x1EE158u);
    ctx->pc = 0x1EE790u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_gunposiGC1__FP4_gun_0x1ee790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE158u; }
        else if (ctx->pc != 0x1EE158u) { ctx->pc = 0x1EE158u; }
    }
    if (ctx->pc != 0x1EE158u) { return; }
    ctx->pc = 0x1EE158u;
label_1ee158:
    // 0x1ee158: 0x96030000
    ctx->pc = 0x1ee158u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ee15c: 0x3404ffff
    ctx->pc = 0x1ee15cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1ee160: 0x14640009
    ctx->pc = 0x1EE160u;
    {
        const bool branch_taken_0x1ee160 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x1EE164u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1ee160) {
            ctx->pc = 0x1EE188u;
            goto label_1ee188;
        }
    }
    ctx->pc = 0x1EE168u;
    // 0x1ee168: 0x96030002
    ctx->pc = 0x1ee168u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1ee16c: 0x10640003
    ctx->pc = 0x1EE16Cu;
    {
        const bool branch_taken_0x1ee16c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x1EE170u;
        SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ee16c) {
            ctx->pc = 0x1EE17Cu;
            goto label_1ee17c;
        }
    }
    ctx->pc = 0x1EE174u;
    // 0x1ee174: 0x10000003
    ctx->pc = 0x1EE174u;
    {
        const bool branch_taken_0x1ee174 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ee174) {
            ctx->pc = 0x1EE184u;
            goto label_1ee184;
        }
    }
    ctx->pc = 0x1EE17Cu;
label_1ee17c:
    // 0x1ee17c: 0x10000003
    ctx->pc = 0x1EE17Cu;
    {
        const bool branch_taken_0x1ee17c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EE180u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1ee17c) {
            ctx->pc = 0x1EE18Cu;
            goto label_1ee18c;
        }
    }
    ctx->pc = 0x1EE184u;
label_1ee184:
    // 0x1ee184: 0x24030001
    ctx->pc = 0x1ee184u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1ee188:
    // 0x1ee188: 0xa6030004
    ctx->pc = 0x1ee188u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
label_1ee18c:
    // 0x1ee18c: 0x86030004
    ctx->pc = 0x1ee18cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ee190: 0x10600005
    ctx->pc = 0x1EE190u;
    {
        const bool branch_taken_0x1ee190 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EE194u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ee190) {
            ctx->pc = 0x1EE1A8u;
            goto label_1ee1a8;
        }
    }
    ctx->pc = 0x1EE198u;
    // 0x1ee198: 0xc07b9a4
    ctx->pc = 0x1EE198u;
    SET_GPR_U32(ctx, 31, 0x1EE1A0u);
    ctx->pc = 0x1EE19Cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EE690u;
    {
        const uint32_t __entryPc = ctx->pc;
        adjustVal_cz__11GunMgrClassFP4_gun_0x1ee690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE1A0u; }
        else if (ctx->pc != 0x1EE1A0u) { ctx->pc = 0x1EE1A0u; }
    }
    if (ctx->pc != 0x1EE1A0u) { return; }
    ctx->pc = 0x1EE1A0u;
    // 0x1ee1a0: 0x10000005
    ctx->pc = 0x1EE1A0u;
    {
        const bool branch_taken_0x1ee1a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EE1A4u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x1ee1a0) {
            ctx->pc = 0x1EE1B8u;
            goto label_1ee1b8;
        }
    }
    ctx->pc = 0x1EE1A8u;
label_1ee1a8:
    // 0x1ee1a8: 0xa6000008
    ctx->pc = 0x1ee1a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ee1ac: 0xa600000a
    ctx->pc = 0x1ee1acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ee1b0: 0xa600000c
    ctx->pc = 0x1ee1b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ee1b4: 0x7bbf0030
    ctx->pc = 0x1ee1b4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ee1b8:
    // 0x1ee1b8: 0x7bb20020
    ctx->pc = 0x1ee1b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee1bc: 0x7bb10010
    ctx->pc = 0x1ee1bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee1c0: 0x7bb00000
    ctx->pc = 0x1ee1c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee1c4: 0x3e00008
    ctx->pc = 0x1EE1C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE1C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EE0E4u: goto label_1ee0e4;
            case 0x1EE108u: goto label_1ee108;
            case 0x1EE10Cu: goto label_1ee10c;
            case 0x1EE144u: goto label_1ee144;
            case 0x1EE150u: goto label_1ee150;
            case 0x1EE158u: goto label_1ee158;
            case 0x1EE17Cu: goto label_1ee17c;
            case 0x1EE184u: goto label_1ee184;
            case 0x1EE188u: goto label_1ee188;
            case 0x1EE18Cu: goto label_1ee18c;
            case 0x1EE1A8u: goto label_1ee1a8;
            case 0x1EE1B8u: goto label_1ee1b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EE1CCu;
}
