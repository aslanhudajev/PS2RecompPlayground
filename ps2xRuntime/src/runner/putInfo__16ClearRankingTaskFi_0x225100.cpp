#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putInfo__16ClearRankingTaskFi
// Address: 0x225100 - 0x22535c
void putInfo__16ClearRankingTaskFi_0x225100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putInfo__16ClearRankingTaskFi");


    ctx->pc = 0x225100u;

    // 0x225100: 0x27bdff90
    ctx->pc = 0x225100u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x225104: 0x7fbf0060
    ctx->pc = 0x225104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x225108: 0x7fb50050
    ctx->pc = 0x225108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x22510c: 0x7fb40040
    ctx->pc = 0x22510cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x225110: 0x7fb30030
    ctx->pc = 0x225110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x225114: 0x7fb20020
    ctx->pc = 0x225114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x225118: 0x7fb10010
    ctx->pc = 0x225118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22511c: 0x7fb00000
    ctx->pc = 0x22511cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x225120: 0x58080
    ctx->pc = 0x225120u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 5), 2));
    // 0x225124: 0x27828518
    ctx->pc = 0x225124u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 28), 4294935832));
    // 0x225128: 0x70809628
    ctx->pc = 0x225128u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x22512c: 0x70a0ae28
    ctx->pc = 0x22512cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x225130: 0x70008e28
    ctx->pc = 0x225130u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x225134: 0x70009e28
    ctx->pc = 0x225134u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x225138: 0x10000013
    ctx->pc = 0x225138u;
    {
        const bool branch_taken_0x225138 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22513Cu;
        SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        if (branch_taken_0x225138) {
            ctx->pc = 0x225188u;
            goto label_225188;
        }
    }
    ctx->pc = 0x225140u;
label_225140:
    // 0x225140: 0x8023fec5
    ctx->pc = 0x225140u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x225144: 0x8e840000
    ctx->pc = 0x225144u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x225148: 0x3c02002c
    ctx->pc = 0x225148u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x22514c: 0x244220f0
    ctx->pc = 0x22514cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8432));
    // 0x225150: 0x31900
    ctx->pc = 0x225150u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x225154: 0x932021
    ctx->pc = 0x225154u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x225158: 0x431821
    ctx->pc = 0x225158u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22515c: 0x8c820000
    ctx->pc = 0x22515cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x225160: 0xc48c0004
    ctx->pc = 0x225160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x225164: 0xc48d0008
    ctx->pc = 0x225164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x225168: 0x21080
    ctx->pc = 0x225168u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x22516c: 0x431021
    ctx->pc = 0x22516cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x225170: 0x8c440000
    ctx->pc = 0x225170u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225174: 0xc08967c
    ctx->pc = 0x225174u;
    SET_GPR_U32(ctx, 31, 0x22517Cu);
    ctx->pc = 0x225178u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 600));
    ctx->pc = 0x2259F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_RankSprPutTask__Fiffi_0x2259f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22517Cu; }
        else if (ctx->pc != 0x22517Cu) { ctx->pc = 0x22517Cu; }
    }
    if (ctx->pc != 0x22517Cu) { return; }
    ctx->pc = 0x22517Cu;
    // 0x22517c: 0x2673000c
    ctx->pc = 0x22517cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 12));
    // 0x225180: 0x26310001
    ctx->pc = 0x225180u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x225184: 0x0
    ctx->pc = 0x225184u;
    // NOP
label_225188:
    // 0x225188: 0x2e220003
    ctx->pc = 0x225188u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 3));
    // 0x22518c: 0x1440ffec
    ctx->pc = 0x22518Cu;
    {
        const bool branch_taken_0x22518c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x225190u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x22518c) {
            ctx->pc = 0x225140u;
            goto label_225140;
        }
    }
    ctx->pc = 0x225194u;
    // 0x225194: 0x1510c0
    ctx->pc = 0x225194u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 3));
    // 0x225198: 0x551823
    ctx->pc = 0x225198u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x22519c: 0x31080
    ctx->pc = 0x22519cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2251a0: 0x431023
    ctx->pc = 0x2251a0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2251a4: 0x28900
    ctx->pc = 0x2251a4u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 2), 4));
    // 0x2251a8: 0x26220018
    ctx->pc = 0x2251a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 24));
    // 0x2251ac: 0x44820000
    ctx->pc = 0x2251acu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2251b0: 0x3c010050
    ctx->pc = 0x2251b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x2251b4: 0x3c02002b
    ctx->pc = 0x2251b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x2251b8: 0x24448c50
    ctx->pc = 0x2251b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294937680));
    // 0x2251bc: 0x2121021
    ctx->pc = 0x2251bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2251c0: 0x8c430044
    ctx->pc = 0x2251c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2251c4: 0x8025fec5
    ctx->pc = 0x2251c4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x2251c8: 0x3c0642a0
    ctx->pc = 0x2251c8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)17056 << 16));
    // 0x2251cc: 0x46800320
    ctx->pc = 0x2251ccu;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2251d0: 0x31880
    ctx->pc = 0x2251d0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2251d4: 0x51080
    ctx->pc = 0x2251d4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x2251d8: 0x821021
    ctx->pc = 0x2251d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2251dc: 0x8c420000
    ctx->pc = 0x2251dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2251e0: 0x44866800
    ctx->pc = 0x2251e0u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 6);
    // 0x2251e4: 0x431021
    ctx->pc = 0x2251e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2251e8: 0x8c440000
    ctx->pc = 0x2251e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2251ec: 0xc08967c
    ctx->pc = 0x2251ECu;
    SET_GPR_U32(ctx, 31, 0x2251F4u);
    ctx->pc = 0x2251F0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 600));
    ctx->pc = 0x2259F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_RankSprPutTask__Fiffi_0x2259f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2251F4u; }
        else if (ctx->pc != 0x2251F4u) { ctx->pc = 0x2251F4u; }
    }
    if (ctx->pc != 0x2251F4u) { return; }
    ctx->pc = 0x2251F4u;
    // 0x2251f4: 0x70009e28
    ctx->pc = 0x2251f4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2251f8: 0x26340010
    ctx->pc = 0x2251f8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 17), 16));
    // 0x2251fc: 0x1000000a
    ctx->pc = 0x2251FCu;
    {
        const bool branch_taken_0x2251fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x225200u;
        SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        if (branch_taken_0x2251fc) {
            ctx->pc = 0x225228u;
            goto label_225228;
        }
    }
    ctx->pc = 0x225204u;
label_225204:
    // 0x225204: 0x44940000
    ctx->pc = 0x225204u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 20);
    // 0x225208: 0x3c02432b
    ctx->pc = 0x225208u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17195 << 16));
    // 0x22520c: 0x46800320
    ctx->pc = 0x22520cu;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x225210: 0x24040da1
    ctx->pc = 0x225210u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3489));
    // 0x225214: 0x44826800
    ctx->pc = 0x225214u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x225218: 0xc08967c
    ctx->pc = 0x225218u;
    SET_GPR_U32(ctx, 31, 0x225220u);
    ctx->pc = 0x22521Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 600));
    ctx->pc = 0x2259F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_RankSprPutTask__Fiffi_0x2259f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225220u; }
        else if (ctx->pc != 0x225220u) { ctx->pc = 0x225220u; }
    }
    if (ctx->pc != 0x225220u) { return; }
    ctx->pc = 0x225220u;
    // 0x225220: 0x26940014
    ctx->pc = 0x225220u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 20));
    // 0x225224: 0x26730001
    ctx->pc = 0x225224u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_225228:
    // 0x225228: 0x8ea20044
    ctx->pc = 0x225228u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x22522c: 0x53082a
    ctx->pc = 0x22522cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 19)));
    // 0x225230: 0x1020fff4
    ctx->pc = 0x225230u;
    {
        const bool branch_taken_0x225230 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x225234u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        if (branch_taken_0x225230) {
            ctx->pc = 0x225204u;
            goto label_225204;
        }
    }
    ctx->pc = 0x225238u;
    // 0x225238: 0x8c53004c
    ctx->pc = 0x225238u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x22523c: 0x7000a628
    ctx->pc = 0x22523cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x225240: 0x26350088
    ctx->pc = 0x225240u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 17), 136));
label_225244:
    // 0x225244: 0x2b41023
    ctx->pc = 0x225244u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x225248: 0x44820000
    ctx->pc = 0x225248u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x22524c: 0x24050258
    ctx->pc = 0x22524cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 600));
    // 0x225250: 0x2402000a
    ctx->pc = 0x225250u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x225254: 0x262001a
    ctx->pc = 0x225254u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 19);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x225258: 0x3c02002c
    ctx->pc = 0x225258u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x22525c: 0x24432260
    ctx->pc = 0x22525cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 8800));
    // 0x225260: 0x3c024394
    ctx->pc = 0x225260u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17300 << 16));
    // 0x225264: 0x44826800
    ctx->pc = 0x225264u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x225268: 0x1010
    ctx->pc = 0x225268u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x22526c: 0x21080
    ctx->pc = 0x22526cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x225270: 0x621021
    ctx->pc = 0x225270u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x225274: 0x8c440000
    ctx->pc = 0x225274u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225278: 0xc08967c
    ctx->pc = 0x225278u;
    SET_GPR_U32(ctx, 31, 0x225280u);
    ctx->pc = 0x22527Cu;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    ctx->pc = 0x2259F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_RankSprPutTask__Fiffi_0x2259f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225280u; }
        else if (ctx->pc != 0x225280u) { ctx->pc = 0x225280u; }
    }
    if (ctx->pc != 0x225280u) { return; }
    ctx->pc = 0x225280u;
    // 0x225280: 0x3c026666
    ctx->pc = 0x225280u;
    SET_GPR_U32(ctx, 2, ((uint32_t)26214 << 16));
    // 0x225284: 0x34426667
    ctx->pc = 0x225284u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 26215));
    // 0x225288: 0x530018
    ctx->pc = 0x225288u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x22528c: 0x131fc2
    ctx->pc = 0x22528cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 19), 31));
    // 0x225290: 0x0
    ctx->pc = 0x225290u;
    // NOP
    // 0x225294: 0x1010
    ctx->pc = 0x225294u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x225298: 0x21083
    ctx->pc = 0x225298u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x22529c: 0x439821
    ctx->pc = 0x22529cu;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2252a0: 0x1e60ffe8
    ctx->pc = 0x2252A0u;
    {
        const bool branch_taken_0x2252a0 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x2252A4u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 32));
        if (branch_taken_0x2252a0) {
            ctx->pc = 0x225244u;
            goto label_225244;
        }
    }
    ctx->pc = 0x2252A8u;
    // 0x2252a8: 0x263300a8
    ctx->pc = 0x2252a8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 17), 168));
    // 0x2252ac: 0x44930000
    ctx->pc = 0x2252acu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 19);
    // 0x2252b0: 0x3c024394
    ctx->pc = 0x2252b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17300 << 16));
    // 0x2252b4: 0x46800320
    ctx->pc = 0x2252b4u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2252b8: 0x24040d69
    ctx->pc = 0x2252b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3433));
    // 0x2252bc: 0x44826800
    ctx->pc = 0x2252bcu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x2252c0: 0xc08967c
    ctx->pc = 0x2252C0u;
    SET_GPR_U32(ctx, 31, 0x2252C8u);
    ctx->pc = 0x2252C4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 600));
    ctx->pc = 0x2259F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_RankSprPutTask__Fiffi_0x2259f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2252C8u; }
        else if (ctx->pc != 0x2252C8u) { ctx->pc = 0x2252C8u; }
    }
    if (ctx->pc != 0x2252C8u) { return; }
    ctx->pc = 0x2252C8u;
    // 0x2252c8: 0x2121021
    ctx->pc = 0x2252c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2252cc: 0x8c500054
    ctx->pc = 0x2252ccu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2252d0: 0x70008e28
    ctx->pc = 0x2252d0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2252d4:
    // 0x2252d4: 0x2711023
    ctx->pc = 0x2252d4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x2252d8: 0x44820000
    ctx->pc = 0x2252d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2252dc: 0x3c0343ba
    ctx->pc = 0x2252dcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)17338 << 16));
    // 0x2252e0: 0x2402000a
    ctx->pc = 0x2252e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x2252e4: 0x202001a
    ctx->pc = 0x2252e4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2252e8: 0x44836800
    ctx->pc = 0x2252e8u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 3);
    // 0x2252ec: 0x46800320
    ctx->pc = 0x2252ecu;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2252f0: 0x1810
    ctx->pc = 0x2252f0u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x2252f4: 0x3c02002c
    ctx->pc = 0x2252f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x2252f8: 0x24422260
    ctx->pc = 0x2252f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8800));
    // 0x2252fc: 0x31880
    ctx->pc = 0x2252fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x225300: 0x431021
    ctx->pc = 0x225300u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x225304: 0x8c440000
    ctx->pc = 0x225304u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225308: 0xc08967c
    ctx->pc = 0x225308u;
    SET_GPR_U32(ctx, 31, 0x225310u);
    ctx->pc = 0x22530Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 600));
    ctx->pc = 0x2259F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_RankSprPutTask__Fiffi_0x2259f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225310u; }
        else if (ctx->pc != 0x225310u) { ctx->pc = 0x225310u; }
    }
    if (ctx->pc != 0x225310u) { return; }
    ctx->pc = 0x225310u;
    // 0x225310: 0x3c036666
    ctx->pc = 0x225310u;
    SET_GPR_U32(ctx, 3, ((uint32_t)26214 << 16));
    // 0x225314: 0x34636667
    ctx->pc = 0x225314u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 26215));
    // 0x225318: 0x700018
    ctx->pc = 0x225318u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x22531c: 0x1027c2
    ctx->pc = 0x22531cu;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 16), 31));
    // 0x225320: 0x0
    ctx->pc = 0x225320u;
    // NOP
    // 0x225324: 0x1810
    ctx->pc = 0x225324u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x225328: 0x31883
    ctx->pc = 0x225328u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x22532c: 0x648021
    ctx->pc = 0x22532cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x225330: 0x1e00ffe8
    ctx->pc = 0x225330u;
    {
        const bool branch_taken_0x225330 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x225334u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 24));
        if (branch_taken_0x225330) {
            ctx->pc = 0x2252D4u;
            goto label_2252d4;
        }
    }
    ctx->pc = 0x225338u;
    // 0x225338: 0x7bbf0060
    ctx->pc = 0x225338u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22533c: 0x7bb50050
    ctx->pc = 0x22533cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x225340: 0x7bb40040
    ctx->pc = 0x225340u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x225344: 0x7bb30030
    ctx->pc = 0x225344u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225348: 0x7bb20020
    ctx->pc = 0x225348u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22534c: 0x7bb10010
    ctx->pc = 0x22534cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225350: 0x7bb00000
    ctx->pc = 0x225350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225354: 0x3e00008
    ctx->pc = 0x225354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225358u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x225140u: goto label_225140;
            case 0x225188u: goto label_225188;
            case 0x225204u: goto label_225204;
            case 0x225228u: goto label_225228;
            case 0x225244u: goto label_225244;
            case 0x2252D4u: goto label_2252d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22535Cu;
}
