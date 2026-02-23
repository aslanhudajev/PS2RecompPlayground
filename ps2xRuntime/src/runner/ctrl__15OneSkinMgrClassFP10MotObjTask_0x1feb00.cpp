#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ctrl__15OneSkinMgrClassFP10MotObjTask
// Address: 0x1feb00 - 0x1fed40
void ctrl__15OneSkinMgrClassFP10MotObjTask_0x1feb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ctrl__15OneSkinMgrClassFP10MotObjTask");


    ctx->pc = 0x1feb00u;

label_1feb00:
    // 0x1feb00: 0x27bdff80
    ctx->pc = 0x1feb00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
label_1feb04:
    // 0x1feb04: 0x7fbf0070
    ctx->pc = 0x1feb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
label_1feb08:
    // 0x1feb08: 0x7fb60060
    ctx->pc = 0x1feb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1feb0c:
    // 0x1feb0c: 0x7fb50050
    ctx->pc = 0x1feb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1feb10:
    // 0x1feb10: 0x7fb40040
    ctx->pc = 0x1feb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1feb14:
    // 0x1feb14: 0x7fb30030
    ctx->pc = 0x1feb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1feb18:
    // 0x1feb18: 0x7fb20020
    ctx->pc = 0x1feb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1feb1c:
    // 0x1feb1c: 0x7fb10010
    ctx->pc = 0x1feb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1feb20:
    // 0x1feb20: 0x7fb00000
    ctx->pc = 0x1feb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1feb24:
    // 0x1feb24: 0x84a6002c
    ctx->pc = 0x1feb24u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
label_1feb28:
    // 0x1feb28: 0x70a0ae28
    ctx->pc = 0x1feb28u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1feb2c:
    // 0x1feb2c: 0x3c030051
    ctx->pc = 0x1feb2cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)81 << 16));
label_1feb30:
    // 0x1feb30: 0x24632270
    ctx->pc = 0x1feb30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8816));
label_1feb34:
    // 0x1feb34: 0x7080b628
    ctx->pc = 0x1feb34u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1feb38:
    // 0x1feb38: 0x62840
    ctx->pc = 0x1feb38u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 1));
label_1feb3c:
    // 0x1feb3c: 0xa62821
    ctx->pc = 0x1feb3cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1feb40:
    // 0x1feb40: 0x52880
    ctx->pc = 0x1feb40u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
label_1feb44:
    // 0x1feb44: 0x651821
    ctx->pc = 0x1feb44u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1feb48:
    // 0x1feb48: 0xac83000c
    ctx->pc = 0x1feb48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_1feb4c:
    // 0x1feb4c: 0x8c84000c
    ctx->pc = 0x1feb4cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1feb50:
    // 0x1feb50: 0x8c830000
    ctx->pc = 0x1feb50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1feb54:
    // 0x1feb54: 0x10600070
label_1feb58:
    if (ctx->pc == 0x1FEB58u) {
        ctx->pc = 0x1FEB5Cu;
        goto label_1feb5c;
    }
    ctx->pc = 0x1FEB54u;
    {
        const bool branch_taken_0x1feb54 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1feb54) {
            ctx->pc = 0x1FED18u;
            goto label_1fed18;
        }
    }
    ctx->pc = 0x1FEB5Cu;
label_1feb5c:
    // 0x1feb5c: 0x8c900004
    ctx->pc = 0x1feb5cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1feb60:
    // 0x1feb60: 0x8c830008
    ctx->pc = 0x1feb60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1feb64:
    // 0x1feb64: 0x3c0101f3
    ctx->pc = 0x1feb64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)499 << 16));
label_1feb68:
    // 0x1feb68: 0xaec30004
    ctx->pc = 0x1feb68u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 3));
label_1feb6c:
    // 0x1feb6c: 0x86a4002c
    ctx->pc = 0x1feb6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 44)));
label_1feb70:
    // 0x1feb70: 0x8ec3000c
    ctx->pc = 0x1feb70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_1feb74:
    // 0x1feb74: 0x42040
    ctx->pc = 0x1feb74u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
label_1feb78:
    // 0x1feb78: 0x810821
    ctx->pc = 0x1feb78u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_1feb7c:
    // 0x1feb7c: 0x84249860
    ctx->pc = 0x1feb7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294940768)));
label_1feb80:
    // 0x1feb80: 0x8c630008
    ctx->pc = 0x1feb80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1feb84:
    // 0x1feb84: 0x42180
    ctx->pc = 0x1feb84u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 6));
label_1feb88:
    // 0x1feb88: 0x641821
    ctx->pc = 0x1feb88u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1feb8c:
    // 0x1feb8c: 0xaec30008
    ctx->pc = 0x1feb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 3));
label_1feb90:
    // 0x1feb90: 0x4bede37d
    ctx->pc = 0x1feb90u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_1feb94:
    // 0x1feb94: 0x4bedeb7d
    ctx->pc = 0x1feb94u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_1feb98:
    // 0x1feb98: 0x4bedf37d
    ctx->pc = 0x1feb98u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_1feb9c:
    // 0x1feb9c: 0x4bedfb7d
    ctx->pc = 0x1feb9cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_1feba0:
    // 0x1feba0: 0x8ea31c9c
    ctx->pc = 0x1feba0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 7324)));
label_1feba4:
    // 0x1feba4: 0x30630001
    ctx->pc = 0x1feba4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
label_1feba8:
    // 0x1feba8: 0x10600057
label_1febac:
    if (ctx->pc == 0x1FEBACu) {
        ctx->pc = 0x1FEBACu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1FEBB0u;
        goto label_1febb0;
    }
    ctx->pc = 0x1FEBA8u;
    {
        const bool branch_taken_0x1feba8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FEBACu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1feba8) {
            ctx->pc = 0x1FED08u;
            goto label_1fed08;
        }
    }
    ctx->pc = 0x1FEBB0u;
label_1febb0:
    // 0x1febb0: 0x10000050
label_1febb4:
    if (ctx->pc == 0x1FEBB4u) {
        ctx->pc = 0x1FEBB4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->pc = 0x1FEBB8u;
        goto label_1febb8;
    }
    ctx->pc = 0x1FEBB0u;
    {
        const bool branch_taken_0x1febb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FEBB4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 12)));
        if (branch_taken_0x1febb0) {
            ctx->pc = 0x1FECF4u;
            goto label_1fecf4;
        }
    }
    ctx->pc = 0x1FEBB8u;
label_1febb8:
    // 0x1febb8: 0x8e030008
    ctx->pc = 0x1febb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1febbc:
    // 0x1febbc: 0xaec30010
    ctx->pc = 0x1febbcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 3));
label_1febc0:
    // 0x1febc0: 0x8ec40010
    ctx->pc = 0x1febc0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_1febc4:
    // 0x1febc4: 0x41900
    ctx->pc = 0x1febc4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
label_1febc8:
    // 0x1febc8: 0x641823
    ctx->pc = 0x1febc8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1febcc:
    // 0x1febcc: 0x31900
    ctx->pc = 0x1febccu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
label_1febd0:
    // 0x1febd0: 0x2a32021
    ctx->pc = 0x1febd0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_1febd4:
    // 0x1febd4: 0x8c830124
    ctx->pc = 0x1febd4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 292)));
label_1febd8:
    // 0x1febd8: 0x30634000
    ctx->pc = 0x1febd8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 16384));
label_1febdc:
    // 0x1febdc: 0x50600043
label_1febe0:
    if (ctx->pc == 0x1FEBE0u) {
        ctx->pc = 0x1FEBE0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x1FEBE4u;
        goto label_1febe4;
    }
    ctx->pc = 0x1FEBDCu;
    {
        const bool branch_taken_0x1febdc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1febdc) {
            ctx->pc = 0x1FEBE0u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x1FECECu;
            goto label_1fecec;
        }
    }
    ctx->pc = 0x1FEBE4u;
label_1febe4:
    // 0x1febe4: 0x8c930070
    ctx->pc = 0x1febe4u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_1febe8:
    // 0x1febe8: 0x3c030027
    ctx->pc = 0x1febe8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
label_1febec:
    // 0x1febec: 0x2463cfb0
    ctx->pc = 0x1febecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294954928));
label_1febf0:
    // 0x1febf0: 0x132080
    ctx->pc = 0x1febf0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 19), 2));
label_1febf4:
    // 0x1febf4: 0x641821
    ctx->pc = 0x1febf4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1febf8:
    // 0x1febf8: 0x8c720000
    ctx->pc = 0x1febf8u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1febfc:
    // 0x1febfc: 0x1240003a
label_1fec00:
    if (ctx->pc == 0x1FEC00u) {
        ctx->pc = 0x1FEC04u;
        goto label_1fec04;
    }
    ctx->pc = 0x1FEBFCu;
    {
        const bool branch_taken_0x1febfc = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x1febfc) {
            ctx->pc = 0x1FECE8u;
            goto label_1fece8;
        }
    }
    ctx->pc = 0x1FEC04u;
label_1fec04:
    // 0x1fec04: 0x121403
    ctx->pc = 0x1fec04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 16));
label_1fec08:
    // 0x1fec08: 0x3045ffff
    ctx->pc = 0x1fec08u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 2), 65535));
label_1fec0c:
    // 0x1fec0c: 0x3c020050
    ctx->pc = 0x1fec0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1fec10:
    // 0x1fec10: 0x51900
    ctx->pc = 0x1fec10u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 4));
label_1fec14:
    // 0x1fec14: 0x2442ea20
    ctx->pc = 0x1fec14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961696));
label_1fec18:
    // 0x1fec18: 0x431021
    ctx->pc = 0x1fec18u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fec1c:
    // 0x1fec1c: 0x8c430000
    ctx->pc = 0x1fec1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fec20:
    // 0x1fec20: 0x3c028000
    ctx->pc = 0x1fec20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
label_1fec24:
    // 0x1fec24: 0x621024
    ctx->pc = 0x1fec24u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1fec28:
    // 0x1fec28: 0x14400005
label_1fec2c:
    if (ctx->pc == 0x1FEC2Cu) {
        ctx->pc = 0x1FEC30u;
        goto label_1fec30;
    }
    ctx->pc = 0x1FEC28u;
    {
        const bool branch_taken_0x1fec28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1fec28) {
            ctx->pc = 0x1FEC40u;
            goto label_1fec40;
        }
    }
    ctx->pc = 0x1FEC30u;
label_1fec30:
    // 0x1fec30: 0x3c020051
    ctx->pc = 0x1fec30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_1fec34:
    // 0x1fec34: 0xc0863cc
label_1fec38:
    if (ctx->pc == 0x1FEC38u) {
        ctx->pc = 0x1FEC38u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
        ctx->pc = 0x1FEC3Cu;
        goto label_1fec3c;
    }
    ctx->pc = 0x1FEC34u;
    SET_GPR_U32(ctx, 31, 0x1FEC3Cu);
    ctx->pc = 0x1FEC38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x218F30u;
    {
        const uint32_t __entryPc = ctx->pc;
        waitEntryBankObjImm__13EntryDatClassFi_0x218f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEC3Cu; }
        else if (ctx->pc != 0x1FEC3Cu) { ctx->pc = 0x1FEC3Cu; }
    }
    if (ctx->pc != 0x1FEC3Cu) { return; }
    ctx->pc = 0x1FEC3Cu;
label_1fec3c:
    // 0x1fec3c: 0x0
    ctx->pc = 0x1fec3cu;
    // NOP
label_1fec40:
    // 0x1fec40: 0x3c020052
    ctx->pc = 0x1fec40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
label_1fec44:
    // 0x1fec44: 0x244294d0
    ctx->pc = 0x1fec44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294939856));
label_1fec48:
    // 0x1fec48: 0x53a021
    ctx->pc = 0x1fec48u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1fec4c:
    // 0x1fec4c: 0x82820000
    ctx->pc = 0x1fec4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_1fec50:
    // 0x1fec50: 0x14400005
label_1fec54:
    if (ctx->pc == 0x1FEC54u) {
        ctx->pc = 0x1FEC54u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1FEC58u;
        goto label_1fec58;
    }
    ctx->pc = 0x1FEC50u;
    {
        const bool branch_taken_0x1fec50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FEC54u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fec50) {
            ctx->pc = 0x1FEC68u;
            goto label_1fec68;
        }
    }
    ctx->pc = 0x1FEC58u;
label_1fec58:
    // 0x1fec58: 0x72002e28
    ctx->pc = 0x1fec58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1fec5c:
    // 0x1fec5c: 0xc07fa9c
label_1fec60:
    if (ctx->pc == 0x1FEC60u) {
        ctx->pc = 0x1FEC60u;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1FEC64u;
        goto label_1fec64;
    }
    ctx->pc = 0x1FEC5Cu;
    SET_GPR_U32(ctx, 31, 0x1FEC64u);
    ctx->pc = 0x1FEC60u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FEA70u;
    {
        const uint32_t __entryPc = ctx->pc;
        vertex_set__15OneSkinMgrClassFP10ONESKIN_DBi_0x1fea70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEC64u; }
        else if (ctx->pc != 0x1FEC64u) { ctx->pc = 0x1FEC64u; }
    }
    if (ctx->pc != 0x1FEC64u) { return; }
    ctx->pc = 0x1FEC64u;
label_1fec64:
    // 0x1fec64: 0x0
    ctx->pc = 0x1fec64u;
    // NOP
label_1fec68:
    // 0x1fec68: 0x8ec30010
    ctx->pc = 0x1fec68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_1fec6c:
    // 0x1fec6c: 0x31100
    ctx->pc = 0x1fec6cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
label_1fec70:
    // 0x1fec70: 0x431023
    ctx->pc = 0x1fec70u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fec74:
    // 0x1fec74: 0x21100
    ctx->pc = 0x1fec74u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1fec78:
    // 0x1fec78: 0x2a21021
    ctx->pc = 0x1fec78u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1fec7c:
    // 0x1fec7c: 0xc06c038
label_1fec80:
    if (ctx->pc == 0x1FEC80u) {
        ctx->pc = 0x1FEC80u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 160));
        ctx->pc = 0x1FEC84u;
        goto label_1fec84;
    }
    ctx->pc = 0x1FEC7Cu;
    SET_GPR_U32(ctx, 31, 0x1FEC84u);
    ctx->pc = 0x1FEC80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 160));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEC84u; }
        else if (ctx->pc != 0x1FEC84u) { ctx->pc = 0x1FEC84u; }
    }
    if (ctx->pc != 0x1FEC84u) { return; }
    ctx->pc = 0x1FEC84u;
label_1fec84:
    // 0x1fec84: 0x8ec30010
    ctx->pc = 0x1fec84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_1fec88:
    // 0x1fec88: 0x8ec20008
    ctx->pc = 0x1fec88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1fec8c:
    // 0x1fec8c: 0x31980
    ctx->pc = 0x1fec8cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 6));
label_1fec90:
    // 0x1fec90: 0xc06c04e
label_1fec94:
    if (ctx->pc == 0x1FEC94u) {
        ctx->pc = 0x1FEC94u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1FEC98u;
        goto label_1fec98;
    }
    ctx->pc = 0x1FEC90u;
    SET_GPR_U32(ctx, 31, 0x1FEC98u);
    ctx->pc = 0x1FEC94u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEC98u; }
        else if (ctx->pc != 0x1FEC98u) { ctx->pc = 0x1FEC98u; }
    }
    if (ctx->pc != 0x1FEC98u) { return; }
    ctx->pc = 0x1FEC98u;
label_1fec98:
    // 0x1fec98: 0x8e030004
    ctx->pc = 0x1fec98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fec9c:
    // 0x1fec9c: 0x8ec20004
    ctx->pc = 0x1fec9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_1feca0:
    // 0x1feca0: 0x31980
    ctx->pc = 0x1feca0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 6));
label_1feca4:
    // 0x1feca4: 0xc06c04e
label_1feca8:
    if (ctx->pc == 0x1FECA8u) {
        ctx->pc = 0x1FECA8u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1FECACu;
        goto label_1fecac;
    }
    ctx->pc = 0x1FECA4u;
    SET_GPR_U32(ctx, 31, 0x1FECACu);
    ctx->pc = 0x1FECA8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FECACu; }
        else if (ctx->pc != 0x1FECACu) { ctx->pc = 0x1FECACu; }
    }
    if (ctx->pc != 0x1FECACu) { return; }
    ctx->pc = 0x1FECACu;
label_1fecac:
    // 0x1fecac: 0x82820000
    ctx->pc = 0x1fecacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_1fecb0:
    // 0x1fecb0: 0x18400007
label_1fecb4:
    if (ctx->pc == 0x1FECB4u) {
        ctx->pc = 0x1FECB8u;
        goto label_1fecb8;
    }
    ctx->pc = 0x1FECB0u;
    {
        const bool branch_taken_0x1fecb0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1fecb0) {
            ctx->pc = 0x1FECD0u;
            goto label_1fecd0;
        }
    }
    ctx->pc = 0x1FECB8u;
label_1fecb8:
    // 0x1fecb8: 0x8ec50004
    ctx->pc = 0x1fecb8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_1fecbc:
    // 0x1fecbc: 0x8ec60008
    ctx->pc = 0x1fecbcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1fecc0:
    // 0x1fecc0: 0x8e070004
    ctx->pc = 0x1fecc0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fecc4:
    // 0x1fecc4: 0x72602628
    ctx->pc = 0x1fecc4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_1fecc8:
    // 0x1fecc8: 0xc080048
label_1feccc:
    if (ctx->pc == 0x1FECCCu) {
        ctx->pc = 0x1FECCCu;
        SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1FECD0u;
        goto label_1fecd0;
    }
    ctx->pc = 0x1FECC8u;
    SET_GPR_U32(ctx, 31, 0x1FECD0u);
    ctx->pc = 0x1FECCCu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    ctx->pc = 0x200120u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSendOskMat__FiP11tagNLmatrixP11tagNLmatrixiP10MotObjTask_0x200120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FECD0u; }
        else if (ctx->pc != 0x1FECD0u) { ctx->pc = 0x1FECD0u; }
    }
    if (ctx->pc != 0x1FECD0u) { return; }
    ctx->pc = 0x1FECD0u;
label_1fecd0:
    // 0x1fecd0: 0x8eb91ca4
    ctx->pc = 0x1fecd0u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 21), 7332)));
label_1fecd4:
    // 0x1fecd4: 0x8e060008
    ctx->pc = 0x1fecd4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1fecd8:
    // 0x1fecd8: 0x72402e28
    ctx->pc = 0x1fecd8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_1fecdc:
    // 0x1fecdc: 0x8f390010
    ctx->pc = 0x1fecdcu;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1fece0:
    // 0x1fece0: 0x320f809
label_1fece4:
    if (ctx->pc == 0x1FECE4u) {
        ctx->pc = 0x1FECE4u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1FECE8u;
        goto label_1fece8;
    }
    ctx->pc = 0x1FECE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FECE8u);
        ctx->pc = 0x1FECE4u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FEB00u: goto label_1feb00;
            case 0x1FEB04u: goto label_1feb04;
            case 0x1FEB08u: goto label_1feb08;
            case 0x1FEB0Cu: goto label_1feb0c;
            case 0x1FEB10u: goto label_1feb10;
            case 0x1FEB14u: goto label_1feb14;
            case 0x1FEB18u: goto label_1feb18;
            case 0x1FEB1Cu: goto label_1feb1c;
            case 0x1FEB20u: goto label_1feb20;
            case 0x1FEB24u: goto label_1feb24;
            case 0x1FEB28u: goto label_1feb28;
            case 0x1FEB2Cu: goto label_1feb2c;
            case 0x1FEB30u: goto label_1feb30;
            case 0x1FEB34u: goto label_1feb34;
            case 0x1FEB38u: goto label_1feb38;
            case 0x1FEB3Cu: goto label_1feb3c;
            case 0x1FEB40u: goto label_1feb40;
            case 0x1FEB44u: goto label_1feb44;
            case 0x1FEB48u: goto label_1feb48;
            case 0x1FEB4Cu: goto label_1feb4c;
            case 0x1FEB50u: goto label_1feb50;
            case 0x1FEB54u: goto label_1feb54;
            case 0x1FEB58u: goto label_1feb58;
            case 0x1FEB5Cu: goto label_1feb5c;
            case 0x1FEB60u: goto label_1feb60;
            case 0x1FEB64u: goto label_1feb64;
            case 0x1FEB68u: goto label_1feb68;
            case 0x1FEB6Cu: goto label_1feb6c;
            case 0x1FEB70u: goto label_1feb70;
            case 0x1FEB74u: goto label_1feb74;
            case 0x1FEB78u: goto label_1feb78;
            case 0x1FEB7Cu: goto label_1feb7c;
            case 0x1FEB80u: goto label_1feb80;
            case 0x1FEB84u: goto label_1feb84;
            case 0x1FEB88u: goto label_1feb88;
            case 0x1FEB8Cu: goto label_1feb8c;
            case 0x1FEB90u: goto label_1feb90;
            case 0x1FEB94u: goto label_1feb94;
            case 0x1FEB98u: goto label_1feb98;
            case 0x1FEB9Cu: goto label_1feb9c;
            case 0x1FEBA0u: goto label_1feba0;
            case 0x1FEBA4u: goto label_1feba4;
            case 0x1FEBA8u: goto label_1feba8;
            case 0x1FEBACu: goto label_1febac;
            case 0x1FEBB0u: goto label_1febb0;
            case 0x1FEBB4u: goto label_1febb4;
            case 0x1FEBB8u: goto label_1febb8;
            case 0x1FEBBCu: goto label_1febbc;
            case 0x1FEBC0u: goto label_1febc0;
            case 0x1FEBC4u: goto label_1febc4;
            case 0x1FEBC8u: goto label_1febc8;
            case 0x1FEBCCu: goto label_1febcc;
            case 0x1FEBD0u: goto label_1febd0;
            case 0x1FEBD4u: goto label_1febd4;
            case 0x1FEBD8u: goto label_1febd8;
            case 0x1FEBDCu: goto label_1febdc;
            case 0x1FEBE0u: goto label_1febe0;
            case 0x1FEBE4u: goto label_1febe4;
            case 0x1FEBE8u: goto label_1febe8;
            case 0x1FEBECu: goto label_1febec;
            case 0x1FEBF0u: goto label_1febf0;
            case 0x1FEBF4u: goto label_1febf4;
            case 0x1FEBF8u: goto label_1febf8;
            case 0x1FEBFCu: goto label_1febfc;
            case 0x1FEC00u: goto label_1fec00;
            case 0x1FEC04u: goto label_1fec04;
            case 0x1FEC08u: goto label_1fec08;
            case 0x1FEC0Cu: goto label_1fec0c;
            case 0x1FEC10u: goto label_1fec10;
            case 0x1FEC14u: goto label_1fec14;
            case 0x1FEC18u: goto label_1fec18;
            case 0x1FEC1Cu: goto label_1fec1c;
            case 0x1FEC20u: goto label_1fec20;
            case 0x1FEC24u: goto label_1fec24;
            case 0x1FEC28u: goto label_1fec28;
            case 0x1FEC2Cu: goto label_1fec2c;
            case 0x1FEC30u: goto label_1fec30;
            case 0x1FEC34u: goto label_1fec34;
            case 0x1FEC38u: goto label_1fec38;
            case 0x1FEC3Cu: goto label_1fec3c;
            case 0x1FEC40u: goto label_1fec40;
            case 0x1FEC44u: goto label_1fec44;
            case 0x1FEC48u: goto label_1fec48;
            case 0x1FEC4Cu: goto label_1fec4c;
            case 0x1FEC50u: goto label_1fec50;
            case 0x1FEC54u: goto label_1fec54;
            case 0x1FEC58u: goto label_1fec58;
            case 0x1FEC5Cu: goto label_1fec5c;
            case 0x1FEC60u: goto label_1fec60;
            case 0x1FEC64u: goto label_1fec64;
            case 0x1FEC68u: goto label_1fec68;
            case 0x1FEC6Cu: goto label_1fec6c;
            case 0x1FEC70u: goto label_1fec70;
            case 0x1FEC74u: goto label_1fec74;
            case 0x1FEC78u: goto label_1fec78;
            case 0x1FEC7Cu: goto label_1fec7c;
            case 0x1FEC80u: goto label_1fec80;
            case 0x1FEC84u: goto label_1fec84;
            case 0x1FEC88u: goto label_1fec88;
            case 0x1FEC8Cu: goto label_1fec8c;
            case 0x1FEC90u: goto label_1fec90;
            case 0x1FEC94u: goto label_1fec94;
            case 0x1FEC98u: goto label_1fec98;
            case 0x1FEC9Cu: goto label_1fec9c;
            case 0x1FECA0u: goto label_1feca0;
            case 0x1FECA4u: goto label_1feca4;
            case 0x1FECA8u: goto label_1feca8;
            case 0x1FECACu: goto label_1fecac;
            case 0x1FECB0u: goto label_1fecb0;
            case 0x1FECB4u: goto label_1fecb4;
            case 0x1FECB8u: goto label_1fecb8;
            case 0x1FECBCu: goto label_1fecbc;
            case 0x1FECC0u: goto label_1fecc0;
            case 0x1FECC4u: goto label_1fecc4;
            case 0x1FECC8u: goto label_1fecc8;
            case 0x1FECCCu: goto label_1feccc;
            case 0x1FECD0u: goto label_1fecd0;
            case 0x1FECD4u: goto label_1fecd4;
            case 0x1FECD8u: goto label_1fecd8;
            case 0x1FECDCu: goto label_1fecdc;
            case 0x1FECE0u: goto label_1fece0;
            case 0x1FECE4u: goto label_1fece4;
            case 0x1FECE8u: goto label_1fece8;
            case 0x1FECECu: goto label_1fecec;
            case 0x1FECF0u: goto label_1fecf0;
            case 0x1FECF4u: goto label_1fecf4;
            case 0x1FECF8u: goto label_1fecf8;
            case 0x1FECFCu: goto label_1fecfc;
            case 0x1FED00u: goto label_1fed00;
            case 0x1FED04u: goto label_1fed04;
            case 0x1FED08u: goto label_1fed08;
            case 0x1FED0Cu: goto label_1fed0c;
            case 0x1FED10u: goto label_1fed10;
            case 0x1FED14u: goto label_1fed14;
            case 0x1FED18u: goto label_1fed18;
            case 0x1FED1Cu: goto label_1fed1c;
            case 0x1FED20u: goto label_1fed20;
            case 0x1FED24u: goto label_1fed24;
            case 0x1FED28u: goto label_1fed28;
            case 0x1FED2Cu: goto label_1fed2c;
            case 0x1FED30u: goto label_1fed30;
            case 0x1FED34u: goto label_1fed34;
            case 0x1FED38u: goto label_1fed38;
            case 0x1FED3Cu: goto label_1fed3c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FECE8u; }
            if (ctx->pc != 0x1FECE8u) { return; }
        }
    }
    ctx->pc = 0x1FECE8u;
label_1fece8:
    // 0x1fece8: 0x26310001
    ctx->pc = 0x1fece8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1fecec:
    // 0x1fecec: 0x26100010
    ctx->pc = 0x1fececu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
label_1fecf0:
    // 0x1fecf0: 0x8ec3000c
    ctx->pc = 0x1fecf0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_1fecf4:
    // 0x1fecf4: 0x8c630000
    ctx->pc = 0x1fecf4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1fecf8:
    // 0x1fecf8: 0x223182a
    ctx->pc = 0x1fecf8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
label_1fecfc:
    // 0x1fecfc: 0x1460ffae
label_1fed00:
    if (ctx->pc == 0x1FED00u) {
        ctx->pc = 0x1FED04u;
        goto label_1fed04;
    }
    ctx->pc = 0x1FECFCu;
    {
        const bool branch_taken_0x1fecfc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1fecfc) {
            ctx->pc = 0x1FEBB8u;
            goto label_1febb8;
        }
    }
    ctx->pc = 0x1FED04u;
label_1fed04:
    // 0x1fed04: 0x0
    ctx->pc = 0x1fed04u;
    // NOP
label_1fed08:
    // 0x1fed08: 0x4bff6b7e
    ctx->pc = 0x1fed08u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_1fed0c:
    // 0x1fed0c: 0x4bfe6b7e
    ctx->pc = 0x1fed0cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_1fed10:
    // 0x1fed10: 0x4bfd6b7e
    ctx->pc = 0x1fed10u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_1fed14:
    // 0x1fed14: 0x4bfc6b7e
    ctx->pc = 0x1fed14u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_1fed18:
    // 0x1fed18: 0x7bbf0070
    ctx->pc = 0x1fed18u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1fed1c:
    // 0x1fed1c: 0x7bb60060
    ctx->pc = 0x1fed1cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1fed20:
    // 0x1fed20: 0x7bb50050
    ctx->pc = 0x1fed20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fed24:
    // 0x1fed24: 0x7bb40040
    ctx->pc = 0x1fed24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fed28:
    // 0x1fed28: 0x7bb30030
    ctx->pc = 0x1fed28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fed2c:
    // 0x1fed2c: 0x7bb20020
    ctx->pc = 0x1fed2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fed30:
    // 0x1fed30: 0x7bb10010
    ctx->pc = 0x1fed30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fed34:
    // 0x1fed34: 0x7bb00000
    ctx->pc = 0x1fed34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fed38:
    // 0x1fed38: 0x3e00008
label_1fed3c:
    if (ctx->pc == 0x1FED3Cu) {
        ctx->pc = 0x1FED3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1FED40u;
        goto label_fallthrough_0x1fed38;
    }
    ctx->pc = 0x1FED38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FED3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FEB00u: goto label_1feb00;
            case 0x1FEB04u: goto label_1feb04;
            case 0x1FEB08u: goto label_1feb08;
            case 0x1FEB0Cu: goto label_1feb0c;
            case 0x1FEB10u: goto label_1feb10;
            case 0x1FEB14u: goto label_1feb14;
            case 0x1FEB18u: goto label_1feb18;
            case 0x1FEB1Cu: goto label_1feb1c;
            case 0x1FEB20u: goto label_1feb20;
            case 0x1FEB24u: goto label_1feb24;
            case 0x1FEB28u: goto label_1feb28;
            case 0x1FEB2Cu: goto label_1feb2c;
            case 0x1FEB30u: goto label_1feb30;
            case 0x1FEB34u: goto label_1feb34;
            case 0x1FEB38u: goto label_1feb38;
            case 0x1FEB3Cu: goto label_1feb3c;
            case 0x1FEB40u: goto label_1feb40;
            case 0x1FEB44u: goto label_1feb44;
            case 0x1FEB48u: goto label_1feb48;
            case 0x1FEB4Cu: goto label_1feb4c;
            case 0x1FEB50u: goto label_1feb50;
            case 0x1FEB54u: goto label_1feb54;
            case 0x1FEB58u: goto label_1feb58;
            case 0x1FEB5Cu: goto label_1feb5c;
            case 0x1FEB60u: goto label_1feb60;
            case 0x1FEB64u: goto label_1feb64;
            case 0x1FEB68u: goto label_1feb68;
            case 0x1FEB6Cu: goto label_1feb6c;
            case 0x1FEB70u: goto label_1feb70;
            case 0x1FEB74u: goto label_1feb74;
            case 0x1FEB78u: goto label_1feb78;
            case 0x1FEB7Cu: goto label_1feb7c;
            case 0x1FEB80u: goto label_1feb80;
            case 0x1FEB84u: goto label_1feb84;
            case 0x1FEB88u: goto label_1feb88;
            case 0x1FEB8Cu: goto label_1feb8c;
            case 0x1FEB90u: goto label_1feb90;
            case 0x1FEB94u: goto label_1feb94;
            case 0x1FEB98u: goto label_1feb98;
            case 0x1FEB9Cu: goto label_1feb9c;
            case 0x1FEBA0u: goto label_1feba0;
            case 0x1FEBA4u: goto label_1feba4;
            case 0x1FEBA8u: goto label_1feba8;
            case 0x1FEBACu: goto label_1febac;
            case 0x1FEBB0u: goto label_1febb0;
            case 0x1FEBB4u: goto label_1febb4;
            case 0x1FEBB8u: goto label_1febb8;
            case 0x1FEBBCu: goto label_1febbc;
            case 0x1FEBC0u: goto label_1febc0;
            case 0x1FEBC4u: goto label_1febc4;
            case 0x1FEBC8u: goto label_1febc8;
            case 0x1FEBCCu: goto label_1febcc;
            case 0x1FEBD0u: goto label_1febd0;
            case 0x1FEBD4u: goto label_1febd4;
            case 0x1FEBD8u: goto label_1febd8;
            case 0x1FEBDCu: goto label_1febdc;
            case 0x1FEBE0u: goto label_1febe0;
            case 0x1FEBE4u: goto label_1febe4;
            case 0x1FEBE8u: goto label_1febe8;
            case 0x1FEBECu: goto label_1febec;
            case 0x1FEBF0u: goto label_1febf0;
            case 0x1FEBF4u: goto label_1febf4;
            case 0x1FEBF8u: goto label_1febf8;
            case 0x1FEBFCu: goto label_1febfc;
            case 0x1FEC00u: goto label_1fec00;
            case 0x1FEC04u: goto label_1fec04;
            case 0x1FEC08u: goto label_1fec08;
            case 0x1FEC0Cu: goto label_1fec0c;
            case 0x1FEC10u: goto label_1fec10;
            case 0x1FEC14u: goto label_1fec14;
            case 0x1FEC18u: goto label_1fec18;
            case 0x1FEC1Cu: goto label_1fec1c;
            case 0x1FEC20u: goto label_1fec20;
            case 0x1FEC24u: goto label_1fec24;
            case 0x1FEC28u: goto label_1fec28;
            case 0x1FEC2Cu: goto label_1fec2c;
            case 0x1FEC30u: goto label_1fec30;
            case 0x1FEC34u: goto label_1fec34;
            case 0x1FEC38u: goto label_1fec38;
            case 0x1FEC3Cu: goto label_1fec3c;
            case 0x1FEC40u: goto label_1fec40;
            case 0x1FEC44u: goto label_1fec44;
            case 0x1FEC48u: goto label_1fec48;
            case 0x1FEC4Cu: goto label_1fec4c;
            case 0x1FEC50u: goto label_1fec50;
            case 0x1FEC54u: goto label_1fec54;
            case 0x1FEC58u: goto label_1fec58;
            case 0x1FEC5Cu: goto label_1fec5c;
            case 0x1FEC60u: goto label_1fec60;
            case 0x1FEC64u: goto label_1fec64;
            case 0x1FEC68u: goto label_1fec68;
            case 0x1FEC6Cu: goto label_1fec6c;
            case 0x1FEC70u: goto label_1fec70;
            case 0x1FEC74u: goto label_1fec74;
            case 0x1FEC78u: goto label_1fec78;
            case 0x1FEC7Cu: goto label_1fec7c;
            case 0x1FEC80u: goto label_1fec80;
            case 0x1FEC84u: goto label_1fec84;
            case 0x1FEC88u: goto label_1fec88;
            case 0x1FEC8Cu: goto label_1fec8c;
            case 0x1FEC90u: goto label_1fec90;
            case 0x1FEC94u: goto label_1fec94;
            case 0x1FEC98u: goto label_1fec98;
            case 0x1FEC9Cu: goto label_1fec9c;
            case 0x1FECA0u: goto label_1feca0;
            case 0x1FECA4u: goto label_1feca4;
            case 0x1FECA8u: goto label_1feca8;
            case 0x1FECACu: goto label_1fecac;
            case 0x1FECB0u: goto label_1fecb0;
            case 0x1FECB4u: goto label_1fecb4;
            case 0x1FECB8u: goto label_1fecb8;
            case 0x1FECBCu: goto label_1fecbc;
            case 0x1FECC0u: goto label_1fecc0;
            case 0x1FECC4u: goto label_1fecc4;
            case 0x1FECC8u: goto label_1fecc8;
            case 0x1FECCCu: goto label_1feccc;
            case 0x1FECD0u: goto label_1fecd0;
            case 0x1FECD4u: goto label_1fecd4;
            case 0x1FECD8u: goto label_1fecd8;
            case 0x1FECDCu: goto label_1fecdc;
            case 0x1FECE0u: goto label_1fece0;
            case 0x1FECE4u: goto label_1fece4;
            case 0x1FECE8u: goto label_1fece8;
            case 0x1FECECu: goto label_1fecec;
            case 0x1FECF0u: goto label_1fecf0;
            case 0x1FECF4u: goto label_1fecf4;
            case 0x1FECF8u: goto label_1fecf8;
            case 0x1FECFCu: goto label_1fecfc;
            case 0x1FED00u: goto label_1fed00;
            case 0x1FED04u: goto label_1fed04;
            case 0x1FED08u: goto label_1fed08;
            case 0x1FED0Cu: goto label_1fed0c;
            case 0x1FED10u: goto label_1fed10;
            case 0x1FED14u: goto label_1fed14;
            case 0x1FED18u: goto label_1fed18;
            case 0x1FED1Cu: goto label_1fed1c;
            case 0x1FED20u: goto label_1fed20;
            case 0x1FED24u: goto label_1fed24;
            case 0x1FED28u: goto label_1fed28;
            case 0x1FED2Cu: goto label_1fed2c;
            case 0x1FED30u: goto label_1fed30;
            case 0x1FED34u: goto label_1fed34;
            case 0x1FED38u: goto label_1fed38;
            case 0x1FED3Cu: goto label_1fed3c;
            default: break;
        }
        return;
    }
label_fallthrough_0x1fed38:
    ctx->pc = 0x1FED40u;
}
