#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: attach__15OneSkinMgrClassFP10MotObjTaskP10ONESKIN_DB
// Address: 0x1fed40 - 0x1fef60
void attach__15OneSkinMgrClassFP10MotObjTaskP10ONESKIN_DB_0x1fed40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("attach__15OneSkinMgrClassFP10MotObjTaskP10ONESKIN_DB");


    ctx->pc = 0x1fed40u;

label_1fed40:
    // 0x1fed40: 0x27bdff80
    ctx->pc = 0x1fed40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
label_1fed44:
    // 0x1fed44: 0x7fbf0070
    ctx->pc = 0x1fed44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
label_1fed48:
    // 0x1fed48: 0x7fb60060
    ctx->pc = 0x1fed48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1fed4c:
    // 0x1fed4c: 0x7fb50050
    ctx->pc = 0x1fed4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1fed50:
    // 0x1fed50: 0x7fb40040
    ctx->pc = 0x1fed50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1fed54:
    // 0x1fed54: 0x7fb30030
    ctx->pc = 0x1fed54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1fed58:
    // 0x1fed58: 0x7fb20020
    ctx->pc = 0x1fed58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fed5c:
    // 0x1fed5c: 0x7fb10010
    ctx->pc = 0x1fed5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fed60:
    // 0x1fed60: 0x7fb00000
    ctx->pc = 0x1fed60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fed64:
    // 0x1fed64: 0x70c0a628
    ctx->pc = 0x1fed64u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_1fed68:
    // 0x1fed68: 0x84a6002c
    ctx->pc = 0x1fed68u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
label_1fed6c:
    // 0x1fed6c: 0x70a0ae28
    ctx->pc = 0x1fed6cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1fed70:
    // 0x1fed70: 0x3c030051
    ctx->pc = 0x1fed70u;
    SET_GPR_U32(ctx, 3, ((uint32_t)81 << 16));
label_1fed74:
    // 0x1fed74: 0x24632270
    ctx->pc = 0x1fed74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8816));
label_1fed78:
    // 0x1fed78: 0x7080b628
    ctx->pc = 0x1fed78u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1fed7c:
    // 0x1fed7c: 0x62840
    ctx->pc = 0x1fed7cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 1));
label_1fed80:
    // 0x1fed80: 0xa62821
    ctx->pc = 0x1fed80u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1fed84:
    // 0x1fed84: 0x52880
    ctx->pc = 0x1fed84u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
label_1fed88:
    // 0x1fed88: 0x651821
    ctx->pc = 0x1fed88u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1fed8c:
    // 0x1fed8c: 0xac83000c
    ctx->pc = 0x1fed8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_1fed90:
    // 0x1fed90: 0x8c84000c
    ctx->pc = 0x1fed90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1fed94:
    // 0x1fed94: 0x8c830000
    ctx->pc = 0x1fed94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fed98:
    // 0x1fed98: 0x10600067
label_1fed9c:
    if (ctx->pc == 0x1FED9Cu) {
        ctx->pc = 0x1FEDA0u;
        goto label_1feda0;
    }
    ctx->pc = 0x1FED98u;
    {
        const bool branch_taken_0x1fed98 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fed98) {
            ctx->pc = 0x1FEF38u;
            goto label_1fef38;
        }
    }
    ctx->pc = 0x1FEDA0u;
label_1feda0:
    // 0x1feda0: 0x8c830008
    ctx->pc = 0x1feda0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1feda4:
    // 0x1feda4: 0x3c0101f3
    ctx->pc = 0x1feda4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)499 << 16));
label_1feda8:
    // 0x1feda8: 0xaec30004
    ctx->pc = 0x1feda8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 3));
label_1fedac:
    // 0x1fedac: 0x86a4002c
    ctx->pc = 0x1fedacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 44)));
label_1fedb0:
    // 0x1fedb0: 0x8ec3000c
    ctx->pc = 0x1fedb0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_1fedb4:
    // 0x1fedb4: 0x42040
    ctx->pc = 0x1fedb4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
label_1fedb8:
    // 0x1fedb8: 0x810821
    ctx->pc = 0x1fedb8u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_1fedbc:
    // 0x1fedbc: 0x84249860
    ctx->pc = 0x1fedbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294940768)));
label_1fedc0:
    // 0x1fedc0: 0x8c630008
    ctx->pc = 0x1fedc0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1fedc4:
    // 0x1fedc4: 0x42180
    ctx->pc = 0x1fedc4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 6));
label_1fedc8:
    // 0x1fedc8: 0x641821
    ctx->pc = 0x1fedc8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1fedcc:
    // 0x1fedcc: 0xaec30008
    ctx->pc = 0x1fedccu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 3));
label_1fedd0:
    // 0x1fedd0: 0x4bede37d
    ctx->pc = 0x1fedd0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_1fedd4:
    // 0x1fedd4: 0x4bedeb7d
    ctx->pc = 0x1fedd4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_1fedd8:
    // 0x1fedd8: 0x4bedf37d
    ctx->pc = 0x1fedd8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_1feddc:
    // 0x1feddc: 0x4bedfb7d
    ctx->pc = 0x1feddcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_1fede0:
    // 0x1fede0: 0x8e850008
    ctx->pc = 0x1fede0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1fede4:
    // 0x1fede4: 0x3c030027
    ctx->pc = 0x1fede4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
label_1fede8:
    // 0x1fede8: 0x2464cfb0
    ctx->pc = 0x1fede8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294954928));
label_1fedec:
    // 0x1fedec: 0xaec50010
    ctx->pc = 0x1fedecu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 5));
label_1fedf0:
    // 0x1fedf0: 0x8e910000
    ctx->pc = 0x1fedf0u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1fedf4:
    // 0x1fedf4: 0x8ea31c9c
    ctx->pc = 0x1fedf4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 7324)));
label_1fedf8:
    // 0x1fedf8: 0x119080
    ctx->pc = 0x1fedf8u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 17), 2));
label_1fedfc:
    // 0x1fedfc: 0x922021
    ctx->pc = 0x1fedfcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_1fee00:
    // 0x1fee00: 0x30630001
    ctx->pc = 0x1fee00u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
label_1fee04:
    // 0x1fee04: 0x10600048
label_1fee08:
    if (ctx->pc == 0x1FEE08u) {
        ctx->pc = 0x1FEE08u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x1FEE0Cu;
        goto label_1fee0c;
    }
    ctx->pc = 0x1FEE04u;
    {
        const bool branch_taken_0x1fee04 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FEE08u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x1fee04) {
            ctx->pc = 0x1FEF28u;
            goto label_1fef28;
        }
    }
    ctx->pc = 0x1FEE0Cu;
label_1fee0c:
    // 0x1fee0c: 0x101403
    ctx->pc = 0x1fee0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 16));
label_1fee10:
    // 0x1fee10: 0x3045ffff
    ctx->pc = 0x1fee10u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 2), 65535));
label_1fee14:
    // 0x1fee14: 0x3c020050
    ctx->pc = 0x1fee14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1fee18:
    // 0x1fee18: 0x51900
    ctx->pc = 0x1fee18u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 4));
label_1fee1c:
    // 0x1fee1c: 0x2442ea20
    ctx->pc = 0x1fee1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961696));
label_1fee20:
    // 0x1fee20: 0x431021
    ctx->pc = 0x1fee20u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fee24:
    // 0x1fee24: 0x8c430000
    ctx->pc = 0x1fee24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fee28:
    // 0x1fee28: 0x3c028000
    ctx->pc = 0x1fee28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
label_1fee2c:
    // 0x1fee2c: 0x621024
    ctx->pc = 0x1fee2cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1fee30:
    // 0x1fee30: 0x14400004
label_1fee34:
    if (ctx->pc == 0x1FEE34u) {
        ctx->pc = 0x1FEE38u;
        goto label_1fee38;
    }
    ctx->pc = 0x1FEE30u;
    {
        const bool branch_taken_0x1fee30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1fee30) {
            ctx->pc = 0x1FEE44u;
            goto label_1fee44;
        }
    }
    ctx->pc = 0x1FEE38u;
label_1fee38:
    // 0x1fee38: 0x3c020051
    ctx->pc = 0x1fee38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_1fee3c:
    // 0x1fee3c: 0xc0863cc
label_1fee40:
    if (ctx->pc == 0x1FEE40u) {
        ctx->pc = 0x1FEE40u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
        ctx->pc = 0x1FEE44u;
        goto label_1fee44;
    }
    ctx->pc = 0x1FEE3Cu;
    SET_GPR_U32(ctx, 31, 0x1FEE44u);
    ctx->pc = 0x1FEE40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x218F30u;
    {
        const uint32_t __entryPc = ctx->pc;
        waitEntryBankObjImm__13EntryDatClassFi_0x218f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEE44u; }
        else if (ctx->pc != 0x1FEE44u) { ctx->pc = 0x1FEE44u; }
    }
    if (ctx->pc != 0x1FEE44u) { return; }
    ctx->pc = 0x1FEE44u;
label_1fee44:
    // 0x1fee44: 0x3c020052
    ctx->pc = 0x1fee44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
label_1fee48:
    // 0x1fee48: 0x244294d0
    ctx->pc = 0x1fee48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294939856));
label_1fee4c:
    // 0x1fee4c: 0x519821
    ctx->pc = 0x1fee4cu;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1fee50:
    // 0x1fee50: 0x82630000
    ctx->pc = 0x1fee50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_1fee54:
    // 0x1fee54: 0x14600007
label_1fee58:
    if (ctx->pc == 0x1FEE58u) {
        ctx->pc = 0x1FEE58u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1FEE5Cu;
        goto label_1fee5c;
    }
    ctx->pc = 0x1FEE54u;
    {
        const bool branch_taken_0x1fee54 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FEE58u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1fee54) {
            ctx->pc = 0x1FEE74u;
            goto label_1fee74;
        }
    }
    ctx->pc = 0x1FEE5Cu;
label_1fee5c:
    // 0x1fee5c: 0x72c02628
    ctx->pc = 0x1fee5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
label_1fee60:
    // 0x1fee60: 0x72802e28
    ctx->pc = 0x1fee60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_1fee64:
    // 0x1fee64: 0xc07fa9c
label_1fee68:
    if (ctx->pc == 0x1FEE68u) {
        ctx->pc = 0x1FEE68u;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1FEE6Cu;
        goto label_1fee6c;
    }
    ctx->pc = 0x1FEE64u;
    SET_GPR_U32(ctx, 31, 0x1FEE6Cu);
    ctx->pc = 0x1FEE68u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FEA70u;
    {
        const uint32_t __entryPc = ctx->pc;
        vertex_set__15OneSkinMgrClassFP10ONESKIN_DBi_0x1fea70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEE6Cu; }
        else if (ctx->pc != 0x1FEE6Cu) { ctx->pc = 0x1FEE6Cu; }
    }
    if (ctx->pc != 0x1FEE6Cu) { return; }
    ctx->pc = 0x1FEE6Cu;
label_1fee6c:
    // 0x1fee6c: 0x1000000f
label_1fee70:
    if (ctx->pc == 0x1FEE70u) {
        ctx->pc = 0x1FEE70u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 16)));
        ctx->pc = 0x1FEE74u;
        goto label_1fee74;
    }
    ctx->pc = 0x1FEE6Cu;
    {
        const bool branch_taken_0x1fee6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FEE70u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 16)));
        if (branch_taken_0x1fee6c) {
            ctx->pc = 0x1FEEACu;
            goto label_1feeac;
        }
    }
    ctx->pc = 0x1FEE74u;
label_1fee74:
    // 0x1fee74: 0x1462000c
label_1fee78:
    if (ctx->pc == 0x1FEE78u) {
        ctx->pc = 0x1FEE78u;
        SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
        ctx->pc = 0x1FEE7Cu;
        goto label_1fee7c;
    }
    ctx->pc = 0x1FEE74u;
    {
        const bool branch_taken_0x1fee74 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1FEE78u;
        SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
        if (branch_taken_0x1fee74) {
            ctx->pc = 0x1FEEA8u;
            goto label_1feea8;
        }
    }
    ctx->pc = 0x1FEE7Cu;
label_1fee7c:
    // 0x1fee7c: 0x244225f0
    ctx->pc = 0x1fee7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9712));
label_1fee80:
    // 0x1fee80: 0x521021
    ctx->pc = 0x1fee80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1fee84:
    // 0x1fee84: 0x8c430000
    ctx->pc = 0x1fee84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fee88:
    // 0x1fee88: 0x8ec60010
    ctx->pc = 0x1fee88u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_1fee8c:
    // 0x1fee8c: 0x72c02628
    ctx->pc = 0x1fee8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
label_1fee90:
    // 0x1fee90: 0x2402ffc0
    ctx->pc = 0x1fee90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
label_1fee94:
    // 0x1fee94: 0x2463003f
    ctx->pc = 0x1fee94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 63));
label_1fee98:
    // 0x1fee98: 0xc07fc28
label_1fee9c:
    if (ctx->pc == 0x1FEE9Cu) {
        ctx->pc = 0x1FEE9Cu;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1FEEA0u;
        goto label_1feea0;
    }
    ctx->pc = 0x1FEE98u;
    SET_GPR_U32(ctx, 31, 0x1FEEA0u);
    ctx->pc = 0x1FEE9Cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1FF0A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        weight100_cut__15OneSkinMgrClassFPA0_ii_0x1ff0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEEA0u; }
        else if (ctx->pc != 0x1FEEA0u) { ctx->pc = 0x1FEEA0u; }
    }
    if (ctx->pc != 0x1FEEA0u) { return; }
    ctx->pc = 0x1FEEA0u;
label_1feea0:
    // 0x1feea0: 0x24020002
    ctx->pc = 0x1feea0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_1feea4:
    // 0x1feea4: 0xa2620000
    ctx->pc = 0x1feea4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_1feea8:
    // 0x1feea8: 0x8ec30010
    ctx->pc = 0x1feea8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_1feeac:
    // 0x1feeac: 0x31100
    ctx->pc = 0x1feeacu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
label_1feeb0:
    // 0x1feeb0: 0x431023
    ctx->pc = 0x1feeb0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1feeb4:
    // 0x1feeb4: 0x21100
    ctx->pc = 0x1feeb4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1feeb8:
    // 0x1feeb8: 0x2a21021
    ctx->pc = 0x1feeb8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1feebc:
    // 0x1feebc: 0xc06c038
label_1feec0:
    if (ctx->pc == 0x1FEEC0u) {
        ctx->pc = 0x1FEEC0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 160));
        ctx->pc = 0x1FEEC4u;
        goto label_1feec4;
    }
    ctx->pc = 0x1FEEBCu;
    SET_GPR_U32(ctx, 31, 0x1FEEC4u);
    ctx->pc = 0x1FEEC0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 160));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEEC4u; }
        else if (ctx->pc != 0x1FEEC4u) { ctx->pc = 0x1FEEC4u; }
    }
    if (ctx->pc != 0x1FEEC4u) { return; }
    ctx->pc = 0x1FEEC4u;
label_1feec4:
    // 0x1feec4: 0x8ec30010
    ctx->pc = 0x1feec4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_1feec8:
    // 0x1feec8: 0x8ec20008
    ctx->pc = 0x1feec8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1feecc:
    // 0x1feecc: 0x31980
    ctx->pc = 0x1feeccu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 6));
label_1feed0:
    // 0x1feed0: 0xc06c04e
label_1feed4:
    if (ctx->pc == 0x1FEED4u) {
        ctx->pc = 0x1FEED4u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1FEED8u;
        goto label_1feed8;
    }
    ctx->pc = 0x1FEED0u;
    SET_GPR_U32(ctx, 31, 0x1FEED8u);
    ctx->pc = 0x1FEED4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEED8u; }
        else if (ctx->pc != 0x1FEED8u) { ctx->pc = 0x1FEED8u; }
    }
    if (ctx->pc != 0x1FEED8u) { return; }
    ctx->pc = 0x1FEED8u;
label_1feed8:
    // 0x1feed8: 0x8e830004
    ctx->pc = 0x1feed8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1feedc:
    // 0x1feedc: 0x8ec20004
    ctx->pc = 0x1feedcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_1feee0:
    // 0x1feee0: 0x31980
    ctx->pc = 0x1feee0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 6));
label_1feee4:
    // 0x1feee4: 0xc06c04e
label_1feee8:
    if (ctx->pc == 0x1FEEE8u) {
        ctx->pc = 0x1FEEE8u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1FEEECu;
        goto label_1feeec;
    }
    ctx->pc = 0x1FEEE4u;
    SET_GPR_U32(ctx, 31, 0x1FEEECu);
    ctx->pc = 0x1FEEE8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEEECu; }
        else if (ctx->pc != 0x1FEEECu) { ctx->pc = 0x1FEEECu; }
    }
    if (ctx->pc != 0x1FEEECu) { return; }
    ctx->pc = 0x1FEEECu;
label_1feeec:
    // 0x1feeec: 0x82620000
    ctx->pc = 0x1feeecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_1feef0:
    // 0x1feef0: 0x18400007
label_1feef4:
    if (ctx->pc == 0x1FEEF4u) {
        ctx->pc = 0x1FEEF8u;
        goto label_1feef8;
    }
    ctx->pc = 0x1FEEF0u;
    {
        const bool branch_taken_0x1feef0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1feef0) {
            ctx->pc = 0x1FEF10u;
            goto label_1fef10;
        }
    }
    ctx->pc = 0x1FEEF8u;
label_1feef8:
    // 0x1feef8: 0x8ec50004
    ctx->pc = 0x1feef8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_1feefc:
    // 0x1feefc: 0x8ec60008
    ctx->pc = 0x1feefcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1fef00:
    // 0x1fef00: 0x8e870004
    ctx->pc = 0x1fef00u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1fef04:
    // 0x1fef04: 0x72202628
    ctx->pc = 0x1fef04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1fef08:
    // 0x1fef08: 0xc080048
label_1fef0c:
    if (ctx->pc == 0x1FEF0Cu) {
        ctx->pc = 0x1FEF0Cu;
        SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1FEF10u;
        goto label_1fef10;
    }
    ctx->pc = 0x1FEF08u;
    SET_GPR_U32(ctx, 31, 0x1FEF10u);
    ctx->pc = 0x1FEF0Cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    ctx->pc = 0x200120u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSendOskMat__FiP11tagNLmatrixP11tagNLmatrixiP10MotObjTask_0x200120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEF10u; }
        else if (ctx->pc != 0x1FEF10u) { ctx->pc = 0x1FEF10u; }
    }
    if (ctx->pc != 0x1FEF10u) { return; }
    ctx->pc = 0x1FEF10u;
label_1fef10:
    // 0x1fef10: 0x8eb91ca4
    ctx->pc = 0x1fef10u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 21), 7332)));
label_1fef14:
    // 0x1fef14: 0x8e860008
    ctx->pc = 0x1fef14u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1fef18:
    // 0x1fef18: 0x72002e28
    ctx->pc = 0x1fef18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1fef1c:
    // 0x1fef1c: 0x8f390014
    ctx->pc = 0x1fef1cu;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1fef20:
    // 0x1fef20: 0x320f809
label_1fef24:
    if (ctx->pc == 0x1FEF24u) {
        ctx->pc = 0x1FEF24u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1FEF28u;
        goto label_1fef28;
    }
    ctx->pc = 0x1FEF20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FEF28u);
        ctx->pc = 0x1FEF24u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FED40u: goto label_1fed40;
            case 0x1FED44u: goto label_1fed44;
            case 0x1FED48u: goto label_1fed48;
            case 0x1FED4Cu: goto label_1fed4c;
            case 0x1FED50u: goto label_1fed50;
            case 0x1FED54u: goto label_1fed54;
            case 0x1FED58u: goto label_1fed58;
            case 0x1FED5Cu: goto label_1fed5c;
            case 0x1FED60u: goto label_1fed60;
            case 0x1FED64u: goto label_1fed64;
            case 0x1FED68u: goto label_1fed68;
            case 0x1FED6Cu: goto label_1fed6c;
            case 0x1FED70u: goto label_1fed70;
            case 0x1FED74u: goto label_1fed74;
            case 0x1FED78u: goto label_1fed78;
            case 0x1FED7Cu: goto label_1fed7c;
            case 0x1FED80u: goto label_1fed80;
            case 0x1FED84u: goto label_1fed84;
            case 0x1FED88u: goto label_1fed88;
            case 0x1FED8Cu: goto label_1fed8c;
            case 0x1FED90u: goto label_1fed90;
            case 0x1FED94u: goto label_1fed94;
            case 0x1FED98u: goto label_1fed98;
            case 0x1FED9Cu: goto label_1fed9c;
            case 0x1FEDA0u: goto label_1feda0;
            case 0x1FEDA4u: goto label_1feda4;
            case 0x1FEDA8u: goto label_1feda8;
            case 0x1FEDACu: goto label_1fedac;
            case 0x1FEDB0u: goto label_1fedb0;
            case 0x1FEDB4u: goto label_1fedb4;
            case 0x1FEDB8u: goto label_1fedb8;
            case 0x1FEDBCu: goto label_1fedbc;
            case 0x1FEDC0u: goto label_1fedc0;
            case 0x1FEDC4u: goto label_1fedc4;
            case 0x1FEDC8u: goto label_1fedc8;
            case 0x1FEDCCu: goto label_1fedcc;
            case 0x1FEDD0u: goto label_1fedd0;
            case 0x1FEDD4u: goto label_1fedd4;
            case 0x1FEDD8u: goto label_1fedd8;
            case 0x1FEDDCu: goto label_1feddc;
            case 0x1FEDE0u: goto label_1fede0;
            case 0x1FEDE4u: goto label_1fede4;
            case 0x1FEDE8u: goto label_1fede8;
            case 0x1FEDECu: goto label_1fedec;
            case 0x1FEDF0u: goto label_1fedf0;
            case 0x1FEDF4u: goto label_1fedf4;
            case 0x1FEDF8u: goto label_1fedf8;
            case 0x1FEDFCu: goto label_1fedfc;
            case 0x1FEE00u: goto label_1fee00;
            case 0x1FEE04u: goto label_1fee04;
            case 0x1FEE08u: goto label_1fee08;
            case 0x1FEE0Cu: goto label_1fee0c;
            case 0x1FEE10u: goto label_1fee10;
            case 0x1FEE14u: goto label_1fee14;
            case 0x1FEE18u: goto label_1fee18;
            case 0x1FEE1Cu: goto label_1fee1c;
            case 0x1FEE20u: goto label_1fee20;
            case 0x1FEE24u: goto label_1fee24;
            case 0x1FEE28u: goto label_1fee28;
            case 0x1FEE2Cu: goto label_1fee2c;
            case 0x1FEE30u: goto label_1fee30;
            case 0x1FEE34u: goto label_1fee34;
            case 0x1FEE38u: goto label_1fee38;
            case 0x1FEE3Cu: goto label_1fee3c;
            case 0x1FEE40u: goto label_1fee40;
            case 0x1FEE44u: goto label_1fee44;
            case 0x1FEE48u: goto label_1fee48;
            case 0x1FEE4Cu: goto label_1fee4c;
            case 0x1FEE50u: goto label_1fee50;
            case 0x1FEE54u: goto label_1fee54;
            case 0x1FEE58u: goto label_1fee58;
            case 0x1FEE5Cu: goto label_1fee5c;
            case 0x1FEE60u: goto label_1fee60;
            case 0x1FEE64u: goto label_1fee64;
            case 0x1FEE68u: goto label_1fee68;
            case 0x1FEE6Cu: goto label_1fee6c;
            case 0x1FEE70u: goto label_1fee70;
            case 0x1FEE74u: goto label_1fee74;
            case 0x1FEE78u: goto label_1fee78;
            case 0x1FEE7Cu: goto label_1fee7c;
            case 0x1FEE80u: goto label_1fee80;
            case 0x1FEE84u: goto label_1fee84;
            case 0x1FEE88u: goto label_1fee88;
            case 0x1FEE8Cu: goto label_1fee8c;
            case 0x1FEE90u: goto label_1fee90;
            case 0x1FEE94u: goto label_1fee94;
            case 0x1FEE98u: goto label_1fee98;
            case 0x1FEE9Cu: goto label_1fee9c;
            case 0x1FEEA0u: goto label_1feea0;
            case 0x1FEEA4u: goto label_1feea4;
            case 0x1FEEA8u: goto label_1feea8;
            case 0x1FEEACu: goto label_1feeac;
            case 0x1FEEB0u: goto label_1feeb0;
            case 0x1FEEB4u: goto label_1feeb4;
            case 0x1FEEB8u: goto label_1feeb8;
            case 0x1FEEBCu: goto label_1feebc;
            case 0x1FEEC0u: goto label_1feec0;
            case 0x1FEEC4u: goto label_1feec4;
            case 0x1FEEC8u: goto label_1feec8;
            case 0x1FEECCu: goto label_1feecc;
            case 0x1FEED0u: goto label_1feed0;
            case 0x1FEED4u: goto label_1feed4;
            case 0x1FEED8u: goto label_1feed8;
            case 0x1FEEDCu: goto label_1feedc;
            case 0x1FEEE0u: goto label_1feee0;
            case 0x1FEEE4u: goto label_1feee4;
            case 0x1FEEE8u: goto label_1feee8;
            case 0x1FEEECu: goto label_1feeec;
            case 0x1FEEF0u: goto label_1feef0;
            case 0x1FEEF4u: goto label_1feef4;
            case 0x1FEEF8u: goto label_1feef8;
            case 0x1FEEFCu: goto label_1feefc;
            case 0x1FEF00u: goto label_1fef00;
            case 0x1FEF04u: goto label_1fef04;
            case 0x1FEF08u: goto label_1fef08;
            case 0x1FEF0Cu: goto label_1fef0c;
            case 0x1FEF10u: goto label_1fef10;
            case 0x1FEF14u: goto label_1fef14;
            case 0x1FEF18u: goto label_1fef18;
            case 0x1FEF1Cu: goto label_1fef1c;
            case 0x1FEF20u: goto label_1fef20;
            case 0x1FEF24u: goto label_1fef24;
            case 0x1FEF28u: goto label_1fef28;
            case 0x1FEF2Cu: goto label_1fef2c;
            case 0x1FEF30u: goto label_1fef30;
            case 0x1FEF34u: goto label_1fef34;
            case 0x1FEF38u: goto label_1fef38;
            case 0x1FEF3Cu: goto label_1fef3c;
            case 0x1FEF40u: goto label_1fef40;
            case 0x1FEF44u: goto label_1fef44;
            case 0x1FEF48u: goto label_1fef48;
            case 0x1FEF4Cu: goto label_1fef4c;
            case 0x1FEF50u: goto label_1fef50;
            case 0x1FEF54u: goto label_1fef54;
            case 0x1FEF58u: goto label_1fef58;
            case 0x1FEF5Cu: goto label_1fef5c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FEF28u; }
            if (ctx->pc != 0x1FEF28u) { return; }
        }
    }
    ctx->pc = 0x1FEF28u;
label_1fef28:
    // 0x1fef28: 0x4bff6b7e
    ctx->pc = 0x1fef28u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_1fef2c:
    // 0x1fef2c: 0x4bfe6b7e
    ctx->pc = 0x1fef2cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_1fef30:
    // 0x1fef30: 0x4bfd6b7e
    ctx->pc = 0x1fef30u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_1fef34:
    // 0x1fef34: 0x4bfc6b7e
    ctx->pc = 0x1fef34u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_1fef38:
    // 0x1fef38: 0x7bbf0070
    ctx->pc = 0x1fef38u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1fef3c:
    // 0x1fef3c: 0x7bb60060
    ctx->pc = 0x1fef3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1fef40:
    // 0x1fef40: 0x7bb50050
    ctx->pc = 0x1fef40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fef44:
    // 0x1fef44: 0x7bb40040
    ctx->pc = 0x1fef44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fef48:
    // 0x1fef48: 0x7bb30030
    ctx->pc = 0x1fef48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fef4c:
    // 0x1fef4c: 0x7bb20020
    ctx->pc = 0x1fef4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fef50:
    // 0x1fef50: 0x7bb10010
    ctx->pc = 0x1fef50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fef54:
    // 0x1fef54: 0x7bb00000
    ctx->pc = 0x1fef54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fef58:
    // 0x1fef58: 0x3e00008
label_1fef5c:
    if (ctx->pc == 0x1FEF5Cu) {
        ctx->pc = 0x1FEF5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1FEF60u;
        goto label_fallthrough_0x1fef58;
    }
    ctx->pc = 0x1FEF58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEF5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FED40u: goto label_1fed40;
            case 0x1FED44u: goto label_1fed44;
            case 0x1FED48u: goto label_1fed48;
            case 0x1FED4Cu: goto label_1fed4c;
            case 0x1FED50u: goto label_1fed50;
            case 0x1FED54u: goto label_1fed54;
            case 0x1FED58u: goto label_1fed58;
            case 0x1FED5Cu: goto label_1fed5c;
            case 0x1FED60u: goto label_1fed60;
            case 0x1FED64u: goto label_1fed64;
            case 0x1FED68u: goto label_1fed68;
            case 0x1FED6Cu: goto label_1fed6c;
            case 0x1FED70u: goto label_1fed70;
            case 0x1FED74u: goto label_1fed74;
            case 0x1FED78u: goto label_1fed78;
            case 0x1FED7Cu: goto label_1fed7c;
            case 0x1FED80u: goto label_1fed80;
            case 0x1FED84u: goto label_1fed84;
            case 0x1FED88u: goto label_1fed88;
            case 0x1FED8Cu: goto label_1fed8c;
            case 0x1FED90u: goto label_1fed90;
            case 0x1FED94u: goto label_1fed94;
            case 0x1FED98u: goto label_1fed98;
            case 0x1FED9Cu: goto label_1fed9c;
            case 0x1FEDA0u: goto label_1feda0;
            case 0x1FEDA4u: goto label_1feda4;
            case 0x1FEDA8u: goto label_1feda8;
            case 0x1FEDACu: goto label_1fedac;
            case 0x1FEDB0u: goto label_1fedb0;
            case 0x1FEDB4u: goto label_1fedb4;
            case 0x1FEDB8u: goto label_1fedb8;
            case 0x1FEDBCu: goto label_1fedbc;
            case 0x1FEDC0u: goto label_1fedc0;
            case 0x1FEDC4u: goto label_1fedc4;
            case 0x1FEDC8u: goto label_1fedc8;
            case 0x1FEDCCu: goto label_1fedcc;
            case 0x1FEDD0u: goto label_1fedd0;
            case 0x1FEDD4u: goto label_1fedd4;
            case 0x1FEDD8u: goto label_1fedd8;
            case 0x1FEDDCu: goto label_1feddc;
            case 0x1FEDE0u: goto label_1fede0;
            case 0x1FEDE4u: goto label_1fede4;
            case 0x1FEDE8u: goto label_1fede8;
            case 0x1FEDECu: goto label_1fedec;
            case 0x1FEDF0u: goto label_1fedf0;
            case 0x1FEDF4u: goto label_1fedf4;
            case 0x1FEDF8u: goto label_1fedf8;
            case 0x1FEDFCu: goto label_1fedfc;
            case 0x1FEE00u: goto label_1fee00;
            case 0x1FEE04u: goto label_1fee04;
            case 0x1FEE08u: goto label_1fee08;
            case 0x1FEE0Cu: goto label_1fee0c;
            case 0x1FEE10u: goto label_1fee10;
            case 0x1FEE14u: goto label_1fee14;
            case 0x1FEE18u: goto label_1fee18;
            case 0x1FEE1Cu: goto label_1fee1c;
            case 0x1FEE20u: goto label_1fee20;
            case 0x1FEE24u: goto label_1fee24;
            case 0x1FEE28u: goto label_1fee28;
            case 0x1FEE2Cu: goto label_1fee2c;
            case 0x1FEE30u: goto label_1fee30;
            case 0x1FEE34u: goto label_1fee34;
            case 0x1FEE38u: goto label_1fee38;
            case 0x1FEE3Cu: goto label_1fee3c;
            case 0x1FEE40u: goto label_1fee40;
            case 0x1FEE44u: goto label_1fee44;
            case 0x1FEE48u: goto label_1fee48;
            case 0x1FEE4Cu: goto label_1fee4c;
            case 0x1FEE50u: goto label_1fee50;
            case 0x1FEE54u: goto label_1fee54;
            case 0x1FEE58u: goto label_1fee58;
            case 0x1FEE5Cu: goto label_1fee5c;
            case 0x1FEE60u: goto label_1fee60;
            case 0x1FEE64u: goto label_1fee64;
            case 0x1FEE68u: goto label_1fee68;
            case 0x1FEE6Cu: goto label_1fee6c;
            case 0x1FEE70u: goto label_1fee70;
            case 0x1FEE74u: goto label_1fee74;
            case 0x1FEE78u: goto label_1fee78;
            case 0x1FEE7Cu: goto label_1fee7c;
            case 0x1FEE80u: goto label_1fee80;
            case 0x1FEE84u: goto label_1fee84;
            case 0x1FEE88u: goto label_1fee88;
            case 0x1FEE8Cu: goto label_1fee8c;
            case 0x1FEE90u: goto label_1fee90;
            case 0x1FEE94u: goto label_1fee94;
            case 0x1FEE98u: goto label_1fee98;
            case 0x1FEE9Cu: goto label_1fee9c;
            case 0x1FEEA0u: goto label_1feea0;
            case 0x1FEEA4u: goto label_1feea4;
            case 0x1FEEA8u: goto label_1feea8;
            case 0x1FEEACu: goto label_1feeac;
            case 0x1FEEB0u: goto label_1feeb0;
            case 0x1FEEB4u: goto label_1feeb4;
            case 0x1FEEB8u: goto label_1feeb8;
            case 0x1FEEBCu: goto label_1feebc;
            case 0x1FEEC0u: goto label_1feec0;
            case 0x1FEEC4u: goto label_1feec4;
            case 0x1FEEC8u: goto label_1feec8;
            case 0x1FEECCu: goto label_1feecc;
            case 0x1FEED0u: goto label_1feed0;
            case 0x1FEED4u: goto label_1feed4;
            case 0x1FEED8u: goto label_1feed8;
            case 0x1FEEDCu: goto label_1feedc;
            case 0x1FEEE0u: goto label_1feee0;
            case 0x1FEEE4u: goto label_1feee4;
            case 0x1FEEE8u: goto label_1feee8;
            case 0x1FEEECu: goto label_1feeec;
            case 0x1FEEF0u: goto label_1feef0;
            case 0x1FEEF4u: goto label_1feef4;
            case 0x1FEEF8u: goto label_1feef8;
            case 0x1FEEFCu: goto label_1feefc;
            case 0x1FEF00u: goto label_1fef00;
            case 0x1FEF04u: goto label_1fef04;
            case 0x1FEF08u: goto label_1fef08;
            case 0x1FEF0Cu: goto label_1fef0c;
            case 0x1FEF10u: goto label_1fef10;
            case 0x1FEF14u: goto label_1fef14;
            case 0x1FEF18u: goto label_1fef18;
            case 0x1FEF1Cu: goto label_1fef1c;
            case 0x1FEF20u: goto label_1fef20;
            case 0x1FEF24u: goto label_1fef24;
            case 0x1FEF28u: goto label_1fef28;
            case 0x1FEF2Cu: goto label_1fef2c;
            case 0x1FEF30u: goto label_1fef30;
            case 0x1FEF34u: goto label_1fef34;
            case 0x1FEF38u: goto label_1fef38;
            case 0x1FEF3Cu: goto label_1fef3c;
            case 0x1FEF40u: goto label_1fef40;
            case 0x1FEF44u: goto label_1fef44;
            case 0x1FEF48u: goto label_1fef48;
            case 0x1FEF4Cu: goto label_1fef4c;
            case 0x1FEF50u: goto label_1fef50;
            case 0x1FEF54u: goto label_1fef54;
            case 0x1FEF58u: goto label_1fef58;
            case 0x1FEF5Cu: goto label_1fef5c;
            default: break;
        }
        return;
    }
label_fallthrough_0x1fef58:
    ctx->pc = 0x1FEF60u;
}
