#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DispErs__7BudTaskFv
// Address: 0x2051c0 - 0x2053d0
void DispErs__7BudTaskFv_0x2051c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DispErs__7BudTaskFv");


    ctx->pc = 0x2051c0u;

    // 0x2051c0: 0x27bdffb0
    ctx->pc = 0x2051c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2051c4: 0x7fbf0040
    ctx->pc = 0x2051c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x2051c8: 0x7fb30030
    ctx->pc = 0x2051c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2051cc: 0x7fb20020
    ctx->pc = 0x2051ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2051d0: 0x7fb10010
    ctx->pc = 0x2051d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2051d4: 0x7fb00000
    ctx->pc = 0x2051d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2051d8: 0x70809e28
    ctx->pc = 0x2051d8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2051dc: 0x4bede37d
    ctx->pc = 0x2051dcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x2051e0: 0x4bedeb7d
    ctx->pc = 0x2051e0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x2051e4: 0x4bedf37d
    ctx->pc = 0x2051e4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x2051e8: 0x4bedfb7d
    ctx->pc = 0x2051e8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x2051ec: 0x70008628
    ctx->pc = 0x2051ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2051f0: 0x70009628
    ctx->pc = 0x2051f0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2051f4:
    // 0x2051f4: 0x8e62014c
    ctx->pc = 0x2051f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 332)));
    // 0x2051f8: 0x521021
    ctx->pc = 0x2051f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2051fc: 0x8c460000
    ctx->pc = 0x2051fcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x205200: 0x50c00024
    ctx->pc = 0x205200u;
    {
        const bool branch_taken_0x205200 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x205200) {
            ctx->pc = 0x205204u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x205294u;
            goto label_205294;
        }
    }
    ctx->pc = 0x205208u;
    // 0x205208: 0x8e650150
    ctx->pc = 0x205208u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 336)));
    // 0x20520c: 0x10a00002
    ctx->pc = 0x20520Cu;
    {
        const bool branch_taken_0x20520c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x205210u;
        SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
        if (branch_taken_0x20520c) {
            ctx->pc = 0x205218u;
            goto label_205218;
        }
    }
    ctx->pc = 0x205214u;
    // 0x205214: 0x24a50030
    ctx->pc = 0x205214u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
label_205218:
    // 0x205218: 0x24442250
    ctx->pc = 0x205218u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8784));
    // 0x20521c: 0xc07fbd8
    ctx->pc = 0x20521Cu;
    SET_GPR_U32(ctx, 31, 0x205224u);
    ctx->pc = 0x205220u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FEF60u;
    {
        const uint32_t __entryPc = ctx->pc;
        loadPutMat__15OneSkinMgrClassFP10MotObjTaskP10ONESKIN_DBi_0x1fef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205224u; }
        else if (ctx->pc != 0x205224u) { ctx->pc = 0x205224u; }
    }
    if (ctx->pc != 0x205224u) { return; }
    ctx->pc = 0x205224u;
    // 0x205224: 0x8e65014c
    ctx->pc = 0x205224u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 332)));
    // 0x205228: 0x3c020027
    ctx->pc = 0x205228u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x20522c: 0x2444cfb0
    ctx->pc = 0x20522cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294954928));
    // 0x205230: 0x3c020050
    ctx->pc = 0x205230u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x205234: 0x2443ea20
    ctx->pc = 0x205234u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294961696));
    // 0x205238: 0x3c028000
    ctx->pc = 0x205238u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x20523c: 0xb22821
    ctx->pc = 0x20523cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x205240: 0x8ca50000
    ctx->pc = 0x205240u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x205244: 0x8ca50000
    ctx->pc = 0x205244u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x205248: 0x52880
    ctx->pc = 0x205248u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x20524c: 0x852021
    ctx->pc = 0x20524cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x205250: 0x8c910000
    ctx->pc = 0x205250u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x205254: 0x112403
    ctx->pc = 0x205254u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 16));
    // 0x205258: 0x3085ffff
    ctx->pc = 0x205258u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 4), 65535));
    // 0x20525c: 0x52100
    ctx->pc = 0x20525cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 4));
    // 0x205260: 0x641821
    ctx->pc = 0x205260u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x205264: 0x8c630000
    ctx->pc = 0x205264u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x205268: 0x621024
    ctx->pc = 0x205268u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20526c: 0x14400004
    ctx->pc = 0x20526Cu;
    {
        const bool branch_taken_0x20526c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x205270u;
        SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
        if (branch_taken_0x20526c) {
            ctx->pc = 0x205280u;
            goto label_205280;
        }
    }
    ctx->pc = 0x205274u;
    // 0x205274: 0xc0863cc
    ctx->pc = 0x205274u;
    SET_GPR_U32(ctx, 31, 0x20527Cu);
    ctx->pc = 0x205278u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x218F30u;
    {
        const uint32_t __entryPc = ctx->pc;
        waitEntryBankObjImm__13EntryDatClassFi_0x218f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20527Cu; }
        else if (ctx->pc != 0x20527Cu) { ctx->pc = 0x20527Cu; }
    }
    if (ctx->pc != 0x20527Cu) { return; }
    ctx->pc = 0x20527Cu;
    // 0x20527c: 0x0
    ctx->pc = 0x20527cu;
    // NOP
label_205280:
    // 0x205280: 0xc66c004c
    ctx->pc = 0x205280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x205284: 0xc0853e4
    ctx->pc = 0x205284u;
    SET_GPR_U32(ctx, 31, 0x20528Cu);
    ctx->pc = 0x205288u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20528Cu; }
        else if (ctx->pc != 0x20528Cu) { ctx->pc = 0x20528Cu; }
    }
    if (ctx->pc != 0x20528Cu) { return; }
    ctx->pc = 0x20528Cu;
    // 0x20528c: 0x0
    ctx->pc = 0x20528cu;
    // NOP
    // 0x205290: 0x26100001
    ctx->pc = 0x205290u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_205294:
    // 0x205294: 0x2a020002
    ctx->pc = 0x205294u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 2));
    // 0x205298: 0x1440ffd6
    ctx->pc = 0x205298u;
    {
        const bool branch_taken_0x205298 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20529Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
        if (branch_taken_0x205298) {
            ctx->pc = 0x2051F4u;
            goto label_2051f4;
        }
    }
    ctx->pc = 0x2052A0u;
    // 0x2052a0: 0xc06c038
    ctx->pc = 0x2052A0u;
    SET_GPR_U32(ctx, 31, 0x2052A8u);
    ctx->pc = 0x2052A4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 324)));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2052A8u; }
        else if (ctx->pc != 0x2052A8u) { ctx->pc = 0x2052A8u; }
    }
    if (ctx->pc != 0x2052A8u) { return; }
    ctx->pc = 0x2052A8u;
    // 0x2052a8: 0x8e62014c
    ctx->pc = 0x2052a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 332)));
    // 0x2052ac: 0xc44d0010
    ctx->pc = 0x2052acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2052b0: 0xc44e0014
    ctx->pc = 0x2052b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2052b4: 0xc06c202
    ctx->pc = 0x2052B4u;
    SET_GPR_U32(ctx, 31, 0x2052BCu);
    ctx->pc = 0x2052B8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2052BCu; }
        else if (ctx->pc != 0x2052BCu) { ctx->pc = 0x2052BCu; }
    }
    if (ctx->pc != 0x2052BCu) { return; }
    ctx->pc = 0x2052BCu;
    // 0x2052bc: 0x8e630150
    ctx->pc = 0x2052bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 336)));
    // 0x2052c0: 0x24020003
    ctx->pc = 0x2052c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2052c4: 0x80631e02
    ctx->pc = 0x2052c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 7682)));
    // 0x2052c8: 0x10620010
    ctx->pc = 0x2052C8u;
    {
        const bool branch_taken_0x2052c8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2052CCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 20480));
        if (branch_taken_0x2052c8) {
            ctx->pc = 0x20530Cu;
            goto label_20530c;
        }
    }
    ctx->pc = 0x2052D0u;
    // 0x2052d0: 0x24020002
    ctx->pc = 0x2052d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2052d4: 0x1062000d
    ctx->pc = 0x2052D4u;
    {
        const bool branch_taken_0x2052d4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2052D8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2052d4) {
            ctx->pc = 0x20530Cu;
            goto label_20530c;
        }
    }
    ctx->pc = 0x2052DCu;
    // 0x2052dc: 0x10620005
    ctx->pc = 0x2052DCu;
    {
        const bool branch_taken_0x2052dc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2052E0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7424));
        if (branch_taken_0x2052dc) {
            ctx->pc = 0x2052F4u;
            goto label_2052f4;
        }
    }
    ctx->pc = 0x2052E4u;
    // 0x2052e4: 0x10600003
    ctx->pc = 0x2052E4u;
    {
        const bool branch_taken_0x2052e4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2052e4) {
            ctx->pc = 0x2052F4u;
            goto label_2052f4;
        }
    }
    ctx->pc = 0x2052ECu;
    // 0x2052ec: 0x1000000b
    ctx->pc = 0x2052ECu;
    {
        const bool branch_taken_0x2052ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2052ec) {
            ctx->pc = 0x20531Cu;
            goto label_20531c;
        }
    }
    ctx->pc = 0x2052F4u;
label_2052f4:
    // 0x2052f4: 0xc06c09f
    ctx->pc = 0x2052F4u;
    SET_GPR_U32(ctx, 31, 0x2052FCu);
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2052FCu; }
        else if (ctx->pc != 0x2052FCu) { ctx->pc = 0x2052FCu; }
    }
    if (ctx->pc != 0x2052FCu) { return; }
    ctx->pc = 0x2052FCu;
    // 0x2052fc: 0xc06c157
    ctx->pc = 0x2052FCu;
    SET_GPR_U32(ctx, 31, 0x205304u);
    ctx->pc = 0x205300u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 63488));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205304u; }
        else if (ctx->pc != 0x205304u) { ctx->pc = 0x205304u; }
    }
    if (ctx->pc != 0x205304u) { return; }
    ctx->pc = 0x205304u;
    // 0x205304: 0x10000005
    ctx->pc = 0x205304u;
    {
        const bool branch_taken_0x205304 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x205304) {
            ctx->pc = 0x20531Cu;
            goto label_20531c;
        }
    }
    ctx->pc = 0x20530Cu;
label_20530c:
    // 0x20530c: 0xc06c09f
    ctx->pc = 0x20530Cu;
    SET_GPR_U32(ctx, 31, 0x205314u);
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205314u; }
        else if (ctx->pc != 0x205314u) { ctx->pc = 0x205314u; }
    }
    if (ctx->pc != 0x205314u) { return; }
    ctx->pc = 0x205314u;
    // 0x205314: 0xc06c157
    ctx->pc = 0x205314u;
    SET_GPR_U32(ctx, 31, 0x20531Cu);
    ctx->pc = 0x205318u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 61440));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20531Cu; }
        else if (ctx->pc != 0x20531Cu) { ctx->pc = 0x20531Cu; }
    }
    if (ctx->pc != 0x20531Cu) { return; }
    ctx->pc = 0x20531Cu;
label_20531c:
    // 0x20531c: 0x3c010050
    ctx->pc = 0x20531cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x205320: 0x8c23ec60
    ctx->pc = 0x205320u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294962272)));
    // 0x205324: 0x3c028000
    ctx->pc = 0x205324u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x205328: 0x621024
    ctx->pc = 0x205328u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20532c: 0x14400004
    ctx->pc = 0x20532Cu;
    {
        const bool branch_taken_0x20532c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x205330u;
        SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
        if (branch_taken_0x20532c) {
            ctx->pc = 0x205340u;
            goto label_205340;
        }
    }
    ctx->pc = 0x205334u;
    // 0x205334: 0x244437a0
    ctx->pc = 0x205334u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    // 0x205338: 0xc0863cc
    ctx->pc = 0x205338u;
    SET_GPR_U32(ctx, 31, 0x205340u);
    ctx->pc = 0x20533Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 36));
    ctx->pc = 0x218F30u;
    {
        const uint32_t __entryPc = ctx->pc;
        waitEntryBankObjImm__13EntryDatClassFi_0x218f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205340u; }
        else if (ctx->pc != 0x205340u) { ctx->pc = 0x205340u; }
    }
    if (ctx->pc != 0x205340u) { return; }
    ctx->pc = 0x205340u;
label_205340:
    // 0x205340: 0xc66c004c
    ctx->pc = 0x205340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x205344: 0x3c020024
    ctx->pc = 0x205344u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x205348: 0xc0853e4
    ctx->pc = 0x205348u;
    SET_GPR_U32(ctx, 31, 0x205350u);
    ctx->pc = 0x20534Cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 2));
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205350u; }
        else if (ctx->pc != 0x205350u) { ctx->pc = 0x205350u; }
    }
    if (ctx->pc != 0x205350u) { return; }
    ctx->pc = 0x205350u;
    // 0x205350: 0x4bff6b7e
    ctx->pc = 0x205350u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x205354: 0x4bfe6b7e
    ctx->pc = 0x205354u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x205358: 0x4bfd6b7e
    ctx->pc = 0x205358u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x20535c: 0x4bfc6b7e
    ctx->pc = 0x20535cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x205360: 0x3c020050
    ctx->pc = 0x205360u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x205364: 0xc07ce18
    ctx->pc = 0x205364u;
    SET_GPR_U32(ctx, 31, 0x20536Cu);
    ctx->pc = 0x205368u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20536Cu; }
        else if (ctx->pc != 0x20536Cu) { ctx->pc = 0x20536Cu; }
    }
    if (ctx->pc != 0x20536Cu) { return; }
    ctx->pc = 0x20536Cu;
    // 0x20536c: 0x1c400008
    ctx->pc = 0x20536Cu;
    {
        const bool branch_taken_0x20536c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x20536c) {
            ctx->pc = 0x205390u;
            goto label_205390;
        }
    }
    ctx->pc = 0x205374u;
    // 0x205374: 0xc661004c
    ctx->pc = 0x205374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x205378: 0x3c033d4c
    ctx->pc = 0x205378u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15692 << 16));
    // 0x20537c: 0x3463cccd
    ctx->pc = 0x20537cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
    // 0x205380: 0x44830000
    ctx->pc = 0x205380u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x205384: 0x0
    ctx->pc = 0x205384u;
    // NOP
    // 0x205388: 0x46000801
    ctx->pc = 0x205388u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20538c: 0xe660004c
    ctx->pc = 0x20538cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 76), bits); }
label_205390:
    // 0x205390: 0xc661004c
    ctx->pc = 0x205390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x205394: 0x44800000
    ctx->pc = 0x205394u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x205398: 0x0
    ctx->pc = 0x205398u;
    // NOP
    // 0x20539c: 0x46000836
    ctx->pc = 0x20539cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2053a0: 0x0
    ctx->pc = 0x2053a0u;
    // NOP
    // 0x2053a4: 0x45000003
    ctx->pc = 0x2053A4u;
    {
        const bool branch_taken_0x2053a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2053a4) {
            ctx->pc = 0x2053B4u;
            goto label_2053b4;
        }
    }
    ctx->pc = 0x2053ACu;
    // 0x2053ac: 0xc068fe0
    ctx->pc = 0x2053ACu;
    SET_GPR_U32(ctx, 31, 0x2053B4u);
    ctx->pc = 0x2053B0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 320)));
    ctx->pc = 0x1A3F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        deleteExec__11SystemTask2Fv_0x1a3f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2053B4u; }
        else if (ctx->pc != 0x2053B4u) { ctx->pc = 0x2053B4u; }
    }
    if (ctx->pc != 0x2053B4u) { return; }
    ctx->pc = 0x2053B4u;
label_2053b4:
    // 0x2053b4: 0x7bbf0040
    ctx->pc = 0x2053b4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2053b8: 0x7bb30030
    ctx->pc = 0x2053b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2053bc: 0x7bb20020
    ctx->pc = 0x2053bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2053c0: 0x7bb10010
    ctx->pc = 0x2053c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2053c4: 0x7bb00000
    ctx->pc = 0x2053c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2053c8: 0x3e00008
    ctx->pc = 0x2053C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2053CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2051F4u: goto label_2051f4;
            case 0x205218u: goto label_205218;
            case 0x205280u: goto label_205280;
            case 0x205294u: goto label_205294;
            case 0x2052F4u: goto label_2052f4;
            case 0x20530Cu: goto label_20530c;
            case 0x20531Cu: goto label_20531c;
            case 0x205340u: goto label_205340;
            case 0x205390u: goto label_205390;
            case 0x2053B4u: goto label_2053b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2053D0u;
}
