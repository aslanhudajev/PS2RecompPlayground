#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dispLife__10PlayerTaskFv
// Address: 0x211950 - 0x2120f8
void dispLife__10PlayerTaskFv_0x211950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dispLife__10PlayerTaskFv");


    ctx->pc = 0x211950u;

    // 0x211950: 0x27bdfe80
    ctx->pc = 0x211950u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x211954: 0x7fbf0030
    ctx->pc = 0x211954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x211958: 0x7fb20020
    ctx->pc = 0x211958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21195c: 0x7fb10010
    ctx->pc = 0x21195cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x211960: 0x7fb00000
    ctx->pc = 0x211960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x211964: 0x70809628
    ctx->pc = 0x211964u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x211968: 0x8f848d68
    ctx->pc = 0x211968u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937960)));
    // 0x21196c: 0x24030002
    ctx->pc = 0x21196cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x211970: 0x80840004
    ctx->pc = 0x211970u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x211974: 0x10830009
    ctx->pc = 0x211974u;
    {
        const bool branch_taken_0x211974 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x211978u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x211974) {
            ctx->pc = 0x21199Cu;
            goto label_21199c;
        }
    }
    ctx->pc = 0x21197Cu;
    // 0x21197c: 0x10830003
    ctx->pc = 0x21197Cu;
    {
        const bool branch_taken_0x21197c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x21197c) {
            ctx->pc = 0x21198Cu;
            goto label_21198c;
        }
    }
    ctx->pc = 0x211984u;
    // 0x211984: 0x100001d7
    ctx->pc = 0x211984u;
    {
        const bool branch_taken_0x211984 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x211988u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x211984) {
            ctx->pc = 0x2120E4u;
            goto label_2120e4;
        }
    }
    ctx->pc = 0x21198Cu;
label_21198c:
    // 0x21198c: 0x8f838cb0
    ctx->pc = 0x21198cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x211990: 0x30630008
    ctx->pc = 0x211990u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 8));
    // 0x211994: 0x106001d2
    ctx->pc = 0x211994u;
    {
        const bool branch_taken_0x211994 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x211994) {
            ctx->pc = 0x2120E0u;
            goto label_2120e0;
        }
    }
    ctx->pc = 0x21199Cu;
label_21199c:
    // 0x21199c: 0x8e431cbc
    ctx->pc = 0x21199cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 7356)));
    // 0x2119a0: 0x8c630010
    ctx->pc = 0x2119a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2119a4: 0x28630007
    ctx->pc = 0x2119a4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 7));
    // 0x2119a8: 0x1460010e
    ctx->pc = 0x2119A8u;
    {
        const bool branch_taken_0x2119a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2119ACu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2119a8) {
            ctx->pc = 0x211DE4u;
            goto label_211de4;
        }
    }
    ctx->pc = 0x2119B0u;
    // 0x2119b0: 0x4bede37d
    ctx->pc = 0x2119b0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x2119b4: 0x4bedeb7d
    ctx->pc = 0x2119b4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x2119b8: 0x4bedf37d
    ctx->pc = 0x2119b8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x2119bc: 0x4bedfb7d
    ctx->pc = 0x2119bcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x2119c0: 0x8e421cb8
    ctx->pc = 0x2119c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 7352)));
    // 0x2119c4: 0x1440000e
    ctx->pc = 0x2119C4u;
    {
        const bool branch_taken_0x2119c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2119C8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)15428 << 16));
        if (branch_taken_0x2119c4) {
            ctx->pc = 0x211A00u;
            goto label_211a00;
        }
    }
    ctx->pc = 0x2119CCu;
    // 0x2119cc: 0x3c02bc44
    ctx->pc = 0x2119ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48196 << 16));
    // 0x2119d0: 0x34429ba6
    ctx->pc = 0x2119d0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39846));
    // 0x2119d4: 0x44826000
    ctx->pc = 0x2119d4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x2119d8: 0x3c02bc1b
    ctx->pc = 0x2119d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48155 << 16));
    // 0x2119dc: 0x3442a5e3
    ctx->pc = 0x2119dcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 42467));
    // 0x2119e0: 0x44826800
    ctx->pc = 0x2119e0u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x2119e4: 0x3c02bca3
    ctx->pc = 0x2119e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48291 << 16));
    // 0x2119e8: 0x3442d70a
    ctx->pc = 0x2119e8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 55050));
    // 0x2119ec: 0x44827000
    ctx->pc = 0x2119ecu;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x2119f0: 0xc06c202
    ctx->pc = 0x2119F0u;
    SET_GPR_U32(ctx, 31, 0x2119F8u);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2119F8u; }
        else if (ctx->pc != 0x2119F8u) { ctx->pc = 0x2119F8u; }
    }
    if (ctx->pc != 0x2119F8u) { return; }
    ctx->pc = 0x2119F8u;
    // 0x2119f8: 0x1000000c
    ctx->pc = 0x2119F8u;
    {
        const bool branch_taken_0x2119f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2119FCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 7352)));
        if (branch_taken_0x2119f8) {
            ctx->pc = 0x211A2Cu;
            goto label_211a2c;
        }
    }
    ctx->pc = 0x211A00u;
label_211a00:
    // 0x211a00: 0x34429ba6
    ctx->pc = 0x211a00u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39846));
    // 0x211a04: 0x44826000
    ctx->pc = 0x211a04u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x211a08: 0x3c02bc1b
    ctx->pc = 0x211a08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48155 << 16));
    // 0x211a0c: 0x3442a5e3
    ctx->pc = 0x211a0cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 42467));
    // 0x211a10: 0x44826800
    ctx->pc = 0x211a10u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x211a14: 0x3c02bca3
    ctx->pc = 0x211a14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48291 << 16));
    // 0x211a18: 0x3442d70a
    ctx->pc = 0x211a18u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 55050));
    // 0x211a1c: 0x44827000
    ctx->pc = 0x211a1cu;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x211a20: 0xc06c202
    ctx->pc = 0x211A20u;
    SET_GPR_U32(ctx, 31, 0x211A28u);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211A28u; }
        else if (ctx->pc != 0x211A28u) { ctx->pc = 0x211A28u; }
    }
    if (ctx->pc != 0x211A28u) { return; }
    ctx->pc = 0x211A28u;
    // 0x211a28: 0x8e421cb8
    ctx->pc = 0x211a28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 7352)));
label_211a2c:
    // 0x211a2c: 0x14400075
    ctx->pc = 0x211A2Cu;
    {
        const bool branch_taken_0x211a2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x211A30u;
        SET_GPR_U32(ctx, 2, ((uint32_t)15070 << 16));
        if (branch_taken_0x211a2c) {
            ctx->pc = 0x211C04u;
            goto label_211c04;
        }
    }
    ctx->pc = 0x211A34u;
    // 0x211a34: 0x3c023ade
    ctx->pc = 0x211a34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15070 << 16));
    // 0x211a38: 0x3442d288
    ctx->pc = 0x211a38u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 53896));
    // 0x211a3c: 0x44826000
    ctx->pc = 0x211a3cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x211a40: 0x0
    ctx->pc = 0x211a40u;
    // NOP
    // 0x211a44: 0x46006346
    ctx->pc = 0x211a44u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x211a48: 0xc06c1b3
    ctx->pc = 0x211A48u;
    SET_GPR_U32(ctx, 31, 0x211A50u);
    ctx->pc = 0x211A4Cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211A50u; }
        else if (ctx->pc != 0x211A50u) { ctx->pc = 0x211A50u; }
    }
    if (ctx->pc != 0x211A50u) { return; }
    ctx->pc = 0x211A50u;
    // 0x211a50: 0x3c023ade
    ctx->pc = 0x211a50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15070 << 16));
    // 0x211a54: 0x3442d288
    ctx->pc = 0x211a54u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 53896));
    // 0x211a58: 0x44826000
    ctx->pc = 0x211a58u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x211a5c: 0xc06b218
    ctx->pc = 0x211A5Cu;
    SET_GPR_U32(ctx, 31, 0x211A64u);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211A64u; }
        else if (ctx->pc != 0x211A64u) { ctx->pc = 0x211A64u; }
    }
    if (ctx->pc != 0x211A64u) { return; }
    ctx->pc = 0x211A64u;
    // 0x211a64: 0x3c020001
    ctx->pc = 0x211a64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x211a68: 0x344400ba
    ctx->pc = 0x211a68u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 186));
    // 0x211a6c: 0xc085400
    ctx->pc = 0x211A6Cu;
    SET_GPR_U32(ctx, 31, 0x211A74u);
    ctx->pc = 0x211A70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x215000u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatCE__Fii_0x215000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211A74u; }
        else if (ctx->pc != 0x211A74u) { ctx->pc = 0x211A74u; }
    }
    if (ctx->pc != 0x211A74u) { return; }
    ctx->pc = 0x211A74u;
    // 0x211a74: 0x3c02bca3
    ctx->pc = 0x211a74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48291 << 16));
    // 0x211a78: 0x44806000
    ctx->pc = 0x211a78u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x211a7c: 0x3442d70a
    ctx->pc = 0x211a7cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 55050));
    // 0x211a80: 0x44827000
    ctx->pc = 0x211a80u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x211a84: 0xc06c202
    ctx->pc = 0x211A84u;
    SET_GPR_U32(ctx, 31, 0x211A8Cu);
    ctx->pc = 0x211A88u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211A8Cu; }
        else if (ctx->pc != 0x211A8Cu) { ctx->pc = 0x211A8Cu; }
    }
    if (ctx->pc != 0x211A8Cu) { return; }
    ctx->pc = 0x211A8Cu;
    // 0x211a8c: 0x8f848be4
    ctx->pc = 0x211a8cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937572)));
    // 0x211a90: 0x24030028
    ctx->pc = 0x211a90u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 40));
    // 0x211a94: 0x3c020001
    ctx->pc = 0x211a94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x211a98: 0x3442010c
    ctx->pc = 0x211a98u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 268));
    // 0x211a9c: 0x24050001
    ctx->pc = 0x211a9cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x211aa0: 0x83001a
    ctx->pc = 0x211aa0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x211aa4: 0x0
    ctx->pc = 0x211aa4u;
    // NOP
    // 0x211aa8: 0x0
    ctx->pc = 0x211aa8u;
    // NOP
    // 0x211aac: 0x1810
    ctx->pc = 0x211aacu;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x211ab0: 0xc085400
    ctx->pc = 0x211AB0u;
    SET_GPR_U32(ctx, 31, 0x211AB8u);
    ctx->pc = 0x211AB4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x215000u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatCE__Fii_0x215000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211AB8u; }
        else if (ctx->pc != 0x211AB8u) { ctx->pc = 0x211AB8u; }
    }
    if (ctx->pc != 0x211AB8u) { return; }
    ctx->pc = 0x211AB8u;
    // 0x211ab8: 0xc069fb8
    ctx->pc = 0x211AB8u;
    SET_GPR_U32(ctx, 31, 0x211AC0u);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211AC0u; }
        else if (ctx->pc != 0x211AC0u) { ctx->pc = 0x211AC0u; }
    }
    if (ctx->pc != 0x211AC0u) { return; }
    ctx->pc = 0x211AC0u;
    // 0x211ac0: 0x2403000a
    ctx->pc = 0x211ac0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x211ac4: 0x43001a
    ctx->pc = 0x211ac4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x211ac8: 0x0
    ctx->pc = 0x211ac8u;
    // NOP
    // 0x211acc: 0x0
    ctx->pc = 0x211accu;
    // NOP
    // 0x211ad0: 0x1810
    ctx->pc = 0x211ad0u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x211ad4: 0x24020009
    ctx->pc = 0x211ad4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x211ad8: 0x1462000b
    ctx->pc = 0x211AD8u;
    {
        const bool branch_taken_0x211ad8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x211ADCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)48196 << 16));
        if (branch_taken_0x211ad8) {
            ctx->pc = 0x211B08u;
            goto label_211b08;
        }
    }
    ctx->pc = 0x211AE0u;
    // 0x211ae0: 0x34429ba6
    ctx->pc = 0x211ae0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39846));
    // 0x211ae4: 0x44826000
    ctx->pc = 0x211ae4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x211ae8: 0x3c02bc1b
    ctx->pc = 0x211ae8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48155 << 16));
    // 0x211aec: 0x3442a5e3
    ctx->pc = 0x211aecu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 42467));
    // 0x211af0: 0x44826800
    ctx->pc = 0x211af0u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x211af4: 0x3c02bca3
    ctx->pc = 0x211af4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48291 << 16));
    // 0x211af8: 0x3442d70a
    ctx->pc = 0x211af8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 55050));
    // 0x211afc: 0x44827000
    ctx->pc = 0x211afcu;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x211b00: 0xc0848a4
    ctx->pc = 0x211B00u;
    SET_GPR_U32(ctx, 31, 0x211B08u);
    ctx->pc = 0x211B04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x212290u;
    {
        const uint32_t __entryPc = ctx->pc;
        dispLifePtclBorn__10PlayerTaskFfff_0x212290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211B08u; }
        else if (ctx->pc != 0x211B08u) { ctx->pc = 0x211B08u; }
    }
    if (ctx->pc != 0x211B08u) { return; }
    ctx->pc = 0x211B08u;
label_211b08:
    // 0x211b08: 0x8e421cbc
    ctx->pc = 0x211b08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 7356)));
    // 0x211b0c: 0x8c420010
    ctx->pc = 0x211b0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x211b10: 0x2450060f
    ctx->pc = 0x211b10u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 1551));
    // 0x211b14: 0x2a01060f
    ctx->pc = 0x211b14u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 1551));
    // 0x211b18: 0x10200003
    ctx->pc = 0x211B18u;
    {
        const bool branch_taken_0x211b18 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x211B1Cu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 1561));
        if (branch_taken_0x211b18) {
            ctx->pc = 0x211B28u;
            goto label_211b28;
        }
    }
    ctx->pc = 0x211B20u;
    // 0x211b20: 0x2410060f
    ctx->pc = 0x211b20u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1551));
    // 0x211b24: 0x2a010619
    ctx->pc = 0x211b24u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 1561));
label_211b28:
    // 0x211b28: 0x14200002
    ctx->pc = 0x211B28u;
    {
        const bool branch_taken_0x211b28 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x211B2Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1562));
        if (branch_taken_0x211b28) {
            ctx->pc = 0x211B34u;
            goto label_211b34;
        }
    }
    ctx->pc = 0x211B30u;
    // 0x211b30: 0x24100618
    ctx->pc = 0x211b30u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1560));
label_211b34:
    // 0x211b34: 0xafa20088
    ctx->pc = 0x211b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x211b38: 0x3c0242c2
    ctx->pc = 0x211b38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17090 << 16));
    // 0x211b3c: 0xafa2004c
    ctx->pc = 0x211b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x211b40: 0x3c0243ca
    ctx->pc = 0x211b40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17354 << 16));
    // 0x211b44: 0x34428000
    ctx->pc = 0x211b44u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32768));
    // 0x211b48: 0xafa20050
    ctx->pc = 0x211b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x211b4c: 0x3c023c54
    ctx->pc = 0x211b4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15444 << 16));
    // 0x211b50: 0x3442fdf4
    ctx->pc = 0x211b50u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65012));
    // 0x211b54: 0xafa20054
    ctx->pc = 0x211b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x211b58: 0x3c023f80
    ctx->pc = 0x211b58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x211b5c: 0xafa20058
    ctx->pc = 0x211b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x211b60: 0xafa2005c
    ctx->pc = 0x211b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x211b64: 0xafa00064
    ctx->pc = 0x211b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x211b68: 0xafa00060
    ctx->pc = 0x211b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x211b6c: 0xafa2006c
    ctx->pc = 0x211b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x211b70: 0xafa20068
    ctx->pc = 0x211b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x211b74: 0xafa00070
    ctx->pc = 0x211b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x211b78: 0xafa20074
    ctx->pc = 0x211b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x211b7c: 0x2402ffff
    ctx->pc = 0x211b7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211b80: 0xafa20078
    ctx->pc = 0x211b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x211b84: 0x24020200
    ctx->pc = 0x211b84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 512));
    // 0x211b88: 0xafa2007c
    ctx->pc = 0x211b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x211b8c: 0x27a40040
    ctx->pc = 0x211b8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x211b90: 0xc085c08
    ctx->pc = 0x211B90u;
    SET_GPR_U32(ctx, 31, 0x211B98u);
    ctx->pc = 0x211B94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x217020u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPutCE__FP7SPR_ARGi_0x217020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211B98u; }
        else if (ctx->pc != 0x211B98u) { ctx->pc = 0x211B98u; }
    }
    if (ctx->pc != 0x211B98u) { return; }
    ctx->pc = 0x211B98u;
    // 0x211b98: 0xafb000d8
    ctx->pc = 0x211b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 16));
    // 0x211b9c: 0x3c0242e2
    ctx->pc = 0x211b9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17122 << 16));
    // 0x211ba0: 0xafa2009c
    ctx->pc = 0x211ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x211ba4: 0x3c0243ca
    ctx->pc = 0x211ba4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17354 << 16));
    // 0x211ba8: 0x34428000
    ctx->pc = 0x211ba8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32768));
    // 0x211bac: 0xafa200a0
    ctx->pc = 0x211bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x211bb0: 0x3c023c54
    ctx->pc = 0x211bb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15444 << 16));
    // 0x211bb4: 0x3442fdf4
    ctx->pc = 0x211bb4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65012));
    // 0x211bb8: 0xafa200a4
    ctx->pc = 0x211bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x211bbc: 0x3c023f80
    ctx->pc = 0x211bbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x211bc0: 0xafa200a8
    ctx->pc = 0x211bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x211bc4: 0xafa200ac
    ctx->pc = 0x211bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x211bc8: 0xafa000b4
    ctx->pc = 0x211bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    // 0x211bcc: 0xafa000b0
    ctx->pc = 0x211bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x211bd0: 0xafa200bc
    ctx->pc = 0x211bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x211bd4: 0xafa200b8
    ctx->pc = 0x211bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x211bd8: 0xafa000c0
    ctx->pc = 0x211bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x211bdc: 0xafa200c4
    ctx->pc = 0x211bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x211be0: 0x2402ffff
    ctx->pc = 0x211be0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211be4: 0xafa200c8
    ctx->pc = 0x211be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x211be8: 0x24020200
    ctx->pc = 0x211be8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 512));
    // 0x211bec: 0xafa200cc
    ctx->pc = 0x211becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x211bf0: 0x27a40090
    ctx->pc = 0x211bf0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
    // 0x211bf4: 0xc085c08
    ctx->pc = 0x211BF4u;
    SET_GPR_U32(ctx, 31, 0x211BFCu);
    ctx->pc = 0x211BF8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x217020u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPutCE__FP7SPR_ARGi_0x217020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211BFCu; }
        else if (ctx->pc != 0x211BFCu) { ctx->pc = 0x211BFCu; }
    }
    if (ctx->pc != 0x211BFCu) { return; }
    ctx->pc = 0x211BFCu;
    // 0x211bfc: 0x10000075
    ctx->pc = 0x211BFCu;
    {
        const bool branch_taken_0x211bfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x211C00u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x211bfc) {
            ctx->pc = 0x211DD4u;
            goto label_211dd4;
        }
    }
    ctx->pc = 0x211C04u;
label_211c04:
    // 0x211c04: 0x3442d288
    ctx->pc = 0x211c04u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 53896));
    // 0x211c08: 0x44826000
    ctx->pc = 0x211c08u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x211c0c: 0x0
    ctx->pc = 0x211c0cu;
    // NOP
    // 0x211c10: 0x46006346
    ctx->pc = 0x211c10u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x211c14: 0xc06c1b3
    ctx->pc = 0x211C14u;
    SET_GPR_U32(ctx, 31, 0x211C1Cu);
    ctx->pc = 0x211C18u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211C1Cu; }
        else if (ctx->pc != 0x211C1Cu) { ctx->pc = 0x211C1Cu; }
    }
    if (ctx->pc != 0x211C1Cu) { return; }
    ctx->pc = 0x211C1Cu;
    // 0x211c1c: 0x3c023ade
    ctx->pc = 0x211c1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15070 << 16));
    // 0x211c20: 0x3442d288
    ctx->pc = 0x211c20u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 53896));
    // 0x211c24: 0x44826000
    ctx->pc = 0x211c24u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x211c28: 0xc06b218
    ctx->pc = 0x211C28u;
    SET_GPR_U32(ctx, 31, 0x211C30u);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211C30u; }
        else if (ctx->pc != 0x211C30u) { ctx->pc = 0x211C30u; }
    }
    if (ctx->pc != 0x211C30u) { return; }
    ctx->pc = 0x211C30u;
    // 0x211c30: 0x3c020001
    ctx->pc = 0x211c30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x211c34: 0x344400bb
    ctx->pc = 0x211c34u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 187));
    // 0x211c38: 0xc085400
    ctx->pc = 0x211C38u;
    SET_GPR_U32(ctx, 31, 0x211C40u);
    ctx->pc = 0x211C3Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x215000u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatCE__Fii_0x215000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211C40u; }
        else if (ctx->pc != 0x211C40u) { ctx->pc = 0x211C40u; }
    }
    if (ctx->pc != 0x211C40u) { return; }
    ctx->pc = 0x211C40u;
    // 0x211c40: 0x3c02bca3
    ctx->pc = 0x211c40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48291 << 16));
    // 0x211c44: 0x44806000
    ctx->pc = 0x211c44u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x211c48: 0x3442d70a
    ctx->pc = 0x211c48u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 55050));
    // 0x211c4c: 0x44827000
    ctx->pc = 0x211c4cu;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x211c50: 0xc06c202
    ctx->pc = 0x211C50u;
    SET_GPR_U32(ctx, 31, 0x211C58u);
    ctx->pc = 0x211C54u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211C58u; }
        else if (ctx->pc != 0x211C58u) { ctx->pc = 0x211C58u; }
    }
    if (ctx->pc != 0x211C58u) { return; }
    ctx->pc = 0x211C58u;
    // 0x211c58: 0x8f848be4
    ctx->pc = 0x211c58u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937572)));
    // 0x211c5c: 0x24030028
    ctx->pc = 0x211c5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 40));
    // 0x211c60: 0x3c020001
    ctx->pc = 0x211c60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x211c64: 0x34420140
    ctx->pc = 0x211c64u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 320));
    // 0x211c68: 0x24050001
    ctx->pc = 0x211c68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x211c6c: 0x83001a
    ctx->pc = 0x211c6cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x211c70: 0x0
    ctx->pc = 0x211c70u;
    // NOP
    // 0x211c74: 0x0
    ctx->pc = 0x211c74u;
    // NOP
    // 0x211c78: 0x1810
    ctx->pc = 0x211c78u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x211c7c: 0xc085400
    ctx->pc = 0x211C7Cu;
    SET_GPR_U32(ctx, 31, 0x211C84u);
    ctx->pc = 0x211C80u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x215000u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatCE__Fii_0x215000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211C84u; }
        else if (ctx->pc != 0x211C84u) { ctx->pc = 0x211C84u; }
    }
    if (ctx->pc != 0x211C84u) { return; }
    ctx->pc = 0x211C84u;
    // 0x211c84: 0xc069fb8
    ctx->pc = 0x211C84u;
    SET_GPR_U32(ctx, 31, 0x211C8Cu);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211C8Cu; }
        else if (ctx->pc != 0x211C8Cu) { ctx->pc = 0x211C8Cu; }
    }
    if (ctx->pc != 0x211C8Cu) { return; }
    ctx->pc = 0x211C8Cu;
    // 0x211c8c: 0x2403000a
    ctx->pc = 0x211c8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x211c90: 0x43001a
    ctx->pc = 0x211c90u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x211c94: 0x0
    ctx->pc = 0x211c94u;
    // NOP
    // 0x211c98: 0x0
    ctx->pc = 0x211c98u;
    // NOP
    // 0x211c9c: 0x1810
    ctx->pc = 0x211c9cu;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x211ca0: 0x24020009
    ctx->pc = 0x211ca0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x211ca4: 0x1462000b
    ctx->pc = 0x211CA4u;
    {
        const bool branch_taken_0x211ca4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x211CA8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)15428 << 16));
        if (branch_taken_0x211ca4) {
            ctx->pc = 0x211CD4u;
            goto label_211cd4;
        }
    }
    ctx->pc = 0x211CACu;
    // 0x211cac: 0x34429ba6
    ctx->pc = 0x211cacu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39846));
    // 0x211cb0: 0x44826000
    ctx->pc = 0x211cb0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x211cb4: 0x3c02bca3
    ctx->pc = 0x211cb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48291 << 16));
    // 0x211cb8: 0x3442d70a
    ctx->pc = 0x211cb8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 55050));
    // 0x211cbc: 0x44827000
    ctx->pc = 0x211cbcu;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x211cc0: 0x3c02bc1b
    ctx->pc = 0x211cc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48155 << 16));
    // 0x211cc4: 0x3442a5e3
    ctx->pc = 0x211cc4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 42467));
    // 0x211cc8: 0x44826800
    ctx->pc = 0x211cc8u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x211ccc: 0xc0848a4
    ctx->pc = 0x211CCCu;
    SET_GPR_U32(ctx, 31, 0x211CD4u);
    ctx->pc = 0x211CD0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x212290u;
    {
        const uint32_t __entryPc = ctx->pc;
        dispLifePtclBorn__10PlayerTaskFfff_0x212290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211CD4u; }
        else if (ctx->pc != 0x211CD4u) { ctx->pc = 0x211CD4u; }
    }
    if (ctx->pc != 0x211CD4u) { return; }
    ctx->pc = 0x211CD4u;
label_211cd4:
    // 0x211cd4: 0x8e421cbc
    ctx->pc = 0x211cd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 7356)));
    // 0x211cd8: 0x8c420010
    ctx->pc = 0x211cd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x211cdc: 0x2450060f
    ctx->pc = 0x211cdcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 1551));
    // 0x211ce0: 0x2a01060f
    ctx->pc = 0x211ce0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 1551));
    // 0x211ce4: 0x10200003
    ctx->pc = 0x211CE4u;
    {
        const bool branch_taken_0x211ce4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x211CE8u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 1561));
        if (branch_taken_0x211ce4) {
            ctx->pc = 0x211CF4u;
            goto label_211cf4;
        }
    }
    ctx->pc = 0x211CECu;
    // 0x211cec: 0x2410060f
    ctx->pc = 0x211cecu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1551));
    // 0x211cf0: 0x2a010619
    ctx->pc = 0x211cf0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 1561));
label_211cf4:
    // 0x211cf4: 0x14200002
    ctx->pc = 0x211CF4u;
    {
        const bool branch_taken_0x211cf4 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x211CF8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1562));
        if (branch_taken_0x211cf4) {
            ctx->pc = 0x211D00u;
            goto label_211d00;
        }
    }
    ctx->pc = 0x211CFCu;
    // 0x211cfc: 0x24100618
    ctx->pc = 0x211cfcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1560));
label_211d00:
    // 0x211d00: 0xafa20128
    ctx->pc = 0x211d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x211d04: 0x3c02440c
    ctx->pc = 0x211d04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17420 << 16));
    // 0x211d08: 0x34424000
    ctx->pc = 0x211d08u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16384));
    // 0x211d0c: 0xafa200ec
    ctx->pc = 0x211d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x211d10: 0x3c0243ca
    ctx->pc = 0x211d10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17354 << 16));
    // 0x211d14: 0x34428000
    ctx->pc = 0x211d14u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32768));
    // 0x211d18: 0xafa200f0
    ctx->pc = 0x211d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x211d1c: 0x3c023c54
    ctx->pc = 0x211d1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15444 << 16));
    // 0x211d20: 0x3442fdf4
    ctx->pc = 0x211d20u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65012));
    // 0x211d24: 0xafa200f4
    ctx->pc = 0x211d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x211d28: 0x3c023f80
    ctx->pc = 0x211d28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x211d2c: 0xafa200f8
    ctx->pc = 0x211d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x211d30: 0xafa200fc
    ctx->pc = 0x211d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x211d34: 0xafa00104
    ctx->pc = 0x211d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
    // 0x211d38: 0xafa00100
    ctx->pc = 0x211d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x211d3c: 0xafa2010c
    ctx->pc = 0x211d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
    // 0x211d40: 0xafa20108
    ctx->pc = 0x211d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
    // 0x211d44: 0xafa00110
    ctx->pc = 0x211d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x211d48: 0xafa20114
    ctx->pc = 0x211d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    // 0x211d4c: 0x2402ffff
    ctx->pc = 0x211d4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211d50: 0xafa20118
    ctx->pc = 0x211d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
    // 0x211d54: 0x24020200
    ctx->pc = 0x211d54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 512));
    // 0x211d58: 0xafa2011c
    ctx->pc = 0x211d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
    // 0x211d5c: 0x27a400e0
    ctx->pc = 0x211d5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 224));
    // 0x211d60: 0xc085c08
    ctx->pc = 0x211D60u;
    SET_GPR_U32(ctx, 31, 0x211D68u);
    ctx->pc = 0x211D64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x217020u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPutCE__FP7SPR_ARGi_0x217020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211D68u; }
        else if (ctx->pc != 0x211D68u) { ctx->pc = 0x211D68u; }
    }
    if (ctx->pc != 0x211D68u) { return; }
    ctx->pc = 0x211D68u;
    // 0x211d68: 0x3c024410
    ctx->pc = 0x211d68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17424 << 16));
    // 0x211d6c: 0xafb00178
    ctx->pc = 0x211d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 16));
    // 0x211d70: 0x34424000
    ctx->pc = 0x211d70u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16384));
    // 0x211d74: 0xafa2013c
    ctx->pc = 0x211d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
    // 0x211d78: 0x3c0243ca
    ctx->pc = 0x211d78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17354 << 16));
    // 0x211d7c: 0x34428000
    ctx->pc = 0x211d7cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32768));
    // 0x211d80: 0xafa20140
    ctx->pc = 0x211d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x211d84: 0x3c023c54
    ctx->pc = 0x211d84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15444 << 16));
    // 0x211d88: 0x3442fdf4
    ctx->pc = 0x211d88u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65012));
    // 0x211d8c: 0xafa20144
    ctx->pc = 0x211d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x211d90: 0x3c023f80
    ctx->pc = 0x211d90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x211d94: 0xafa20148
    ctx->pc = 0x211d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
    // 0x211d98: 0xafa2014c
    ctx->pc = 0x211d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x211d9c: 0xafa00154
    ctx->pc = 0x211d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
    // 0x211da0: 0xafa00150
    ctx->pc = 0x211da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x211da4: 0xafa2015c
    ctx->pc = 0x211da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
    // 0x211da8: 0xafa20158
    ctx->pc = 0x211da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
    // 0x211dac: 0xafa00160
    ctx->pc = 0x211dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
    // 0x211db0: 0xafa20164
    ctx->pc = 0x211db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
    // 0x211db4: 0x2402ffff
    ctx->pc = 0x211db4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211db8: 0xafa20168
    ctx->pc = 0x211db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
    // 0x211dbc: 0x24020200
    ctx->pc = 0x211dbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 512));
    // 0x211dc0: 0xafa2016c
    ctx->pc = 0x211dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
    // 0x211dc4: 0x27a40130
    ctx->pc = 0x211dc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 304));
    // 0x211dc8: 0xc085c08
    ctx->pc = 0x211DC8u;
    SET_GPR_U32(ctx, 31, 0x211DD0u);
    ctx->pc = 0x211DCCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x217020u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPutCE__FP7SPR_ARGi_0x217020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211DD0u; }
        else if (ctx->pc != 0x211DD0u) { ctx->pc = 0x211DD0u; }
    }
    if (ctx->pc != 0x211DD0u) { return; }
    ctx->pc = 0x211DD0u;
    // 0x211dd0: 0x4bff6b7e
    ctx->pc = 0x211dd0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_211dd4:
    // 0x211dd4: 0x4bfe6b7e
    ctx->pc = 0x211dd4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x211dd8: 0x4bfd6b7e
    ctx->pc = 0x211dd8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x211ddc: 0x100000c0
    ctx->pc = 0x211DDCu;
    {
        const bool branch_taken_0x211ddc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x211DE0u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x211ddc) {
            ctx->pc = 0x2120E0u;
            goto label_2120e0;
        }
    }
    ctx->pc = 0x211DE4u;
label_211de4:
    // 0x211de4: 0x100000b8
    ctx->pc = 0x211DE4u;
    {
        const bool branch_taken_0x211de4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x211DE8u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x211de4) {
            ctx->pc = 0x2120C8u;
            goto label_2120c8;
        }
    }
    ctx->pc = 0x211DECu;
label_211dec:
    // 0x211dec: 0x4bede37d
    ctx->pc = 0x211decu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x211df0: 0x4bedeb7d
    ctx->pc = 0x211df0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x211df4: 0x4bedf37d
    ctx->pc = 0x211df4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x211df8: 0x4bedfb7d
    ctx->pc = 0x211df8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x211dfc: 0x8e421cb8
    ctx->pc = 0x211dfcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 7352)));
    // 0x211e00: 0x14400015
    ctx->pc = 0x211E00u;
    {
        const bool branch_taken_0x211e00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x211e00) {
            ctx->pc = 0x211E58u;
            goto label_211e58;
        }
    }
    ctx->pc = 0x211E08u;
    // 0x211e08: 0x44900000
    ctx->pc = 0x211e08u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 16);
    // 0x211e0c: 0x3c023b03
    ctx->pc = 0x211e0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15107 << 16));
    // 0x211e10: 0x46800020
    ctx->pc = 0x211e10u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x211e14: 0x3442126f
    ctx->pc = 0x211e14u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4719));
    // 0x211e18: 0x44820800
    ctx->pc = 0x211e18u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x211e1c: 0x0
    ctx->pc = 0x211e1cu;
    // NOP
    // 0x211e20: 0x46000842
    ctx->pc = 0x211e20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x211e24: 0x3c023c44
    ctx->pc = 0x211e24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15428 << 16));
    // 0x211e28: 0x34449ba6
    ctx->pc = 0x211e28u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 39846));
    // 0x211e2c: 0x3c02bca3
    ctx->pc = 0x211e2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48291 << 16));
    // 0x211e30: 0x3443d70a
    ctx->pc = 0x211e30u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 55050));
    // 0x211e34: 0x44840000
    ctx->pc = 0x211e34u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x211e38: 0x3c02bc1b
    ctx->pc = 0x211e38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48155 << 16));
    // 0x211e3c: 0x3442a5e3
    ctx->pc = 0x211e3cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 42467));
    // 0x211e40: 0x44837000
    ctx->pc = 0x211e40u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 3);
    // 0x211e44: 0x44826800
    ctx->pc = 0x211e44u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x211e48: 0xc06c202
    ctx->pc = 0x211E48u;
    SET_GPR_U32(ctx, 31, 0x211E50u);
    ctx->pc = 0x211E4Cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211E50u; }
        else if (ctx->pc != 0x211E50u) { ctx->pc = 0x211E50u; }
    }
    if (ctx->pc != 0x211E50u) { return; }
    ctx->pc = 0x211E50u;
    // 0x211e50: 0x10000014
    ctx->pc = 0x211E50u;
    {
        const bool branch_taken_0x211e50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x211E54u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 7352)));
        if (branch_taken_0x211e50) {
            ctx->pc = 0x211EA4u;
            goto label_211ea4;
        }
    }
    ctx->pc = 0x211E58u;
label_211e58:
    // 0x211e58: 0x44900000
    ctx->pc = 0x211e58u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 16);
    // 0x211e5c: 0x3c02bb03
    ctx->pc = 0x211e5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)47875 << 16));
    // 0x211e60: 0x46800020
    ctx->pc = 0x211e60u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x211e64: 0x3442126f
    ctx->pc = 0x211e64u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4719));
    // 0x211e68: 0x44820800
    ctx->pc = 0x211e68u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x211e6c: 0x0
    ctx->pc = 0x211e6cu;
    // NOP
    // 0x211e70: 0x46000842
    ctx->pc = 0x211e70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x211e74: 0x3c023c44
    ctx->pc = 0x211e74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15428 << 16));
    // 0x211e78: 0x34449ba6
    ctx->pc = 0x211e78u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 39846));
    // 0x211e7c: 0x3c02bca3
    ctx->pc = 0x211e7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48291 << 16));
    // 0x211e80: 0x3443d70a
    ctx->pc = 0x211e80u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 55050));
    // 0x211e84: 0x44840000
    ctx->pc = 0x211e84u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x211e88: 0x3c02bc1b
    ctx->pc = 0x211e88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48155 << 16));
    // 0x211e8c: 0x3442a5e3
    ctx->pc = 0x211e8cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 42467));
    // 0x211e90: 0x44837000
    ctx->pc = 0x211e90u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 3);
    // 0x211e94: 0x44826800
    ctx->pc = 0x211e94u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x211e98: 0xc06c202
    ctx->pc = 0x211E98u;
    SET_GPR_U32(ctx, 31, 0x211EA0u);
    ctx->pc = 0x211E9Cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211EA0u; }
        else if (ctx->pc != 0x211EA0u) { ctx->pc = 0x211EA0u; }
    }
    if (ctx->pc != 0x211EA0u) { return; }
    ctx->pc = 0x211EA0u;
    // 0x211ea0: 0x8e421cb8
    ctx->pc = 0x211ea0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 7352)));
label_211ea4:
    // 0x211ea4: 0x14400043
    ctx->pc = 0x211EA4u;
    {
        const bool branch_taken_0x211ea4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x211EA8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)15070 << 16));
        if (branch_taken_0x211ea4) {
            ctx->pc = 0x211FB4u;
            goto label_211fb4;
        }
    }
    ctx->pc = 0x211EACu;
    // 0x211eac: 0x3c023ade
    ctx->pc = 0x211eacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15070 << 16));
    // 0x211eb0: 0x3442d288
    ctx->pc = 0x211eb0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 53896));
    // 0x211eb4: 0x44826000
    ctx->pc = 0x211eb4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x211eb8: 0x0
    ctx->pc = 0x211eb8u;
    // NOP
    // 0x211ebc: 0x46006346
    ctx->pc = 0x211ebcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x211ec0: 0xc06c1b3
    ctx->pc = 0x211EC0u;
    SET_GPR_U32(ctx, 31, 0x211EC8u);
    ctx->pc = 0x211EC4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211EC8u; }
        else if (ctx->pc != 0x211EC8u) { ctx->pc = 0x211EC8u; }
    }
    if (ctx->pc != 0x211EC8u) { return; }
    ctx->pc = 0x211EC8u;
    // 0x211ec8: 0x3c023ade
    ctx->pc = 0x211ec8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15070 << 16));
    // 0x211ecc: 0x3442d288
    ctx->pc = 0x211eccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 53896));
    // 0x211ed0: 0x44826000
    ctx->pc = 0x211ed0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x211ed4: 0xc06b218
    ctx->pc = 0x211ED4u;
    SET_GPR_U32(ctx, 31, 0x211EDCu);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211EDCu; }
        else if (ctx->pc != 0x211EDCu) { ctx->pc = 0x211EDCu; }
    }
    if (ctx->pc != 0x211EDCu) { return; }
    ctx->pc = 0x211EDCu;
    // 0x211edc: 0x3c020001
    ctx->pc = 0x211edcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x211ee0: 0x344400ba
    ctx->pc = 0x211ee0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 186));
    // 0x211ee4: 0xc085400
    ctx->pc = 0x211EE4u;
    SET_GPR_U32(ctx, 31, 0x211EECu);
    ctx->pc = 0x211EE8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x215000u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatCE__Fii_0x215000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211EECu; }
        else if (ctx->pc != 0x211EECu) { ctx->pc = 0x211EECu; }
    }
    if (ctx->pc != 0x211EECu) { return; }
    ctx->pc = 0x211EECu;
    // 0x211eec: 0x3c02bca3
    ctx->pc = 0x211eecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48291 << 16));
    // 0x211ef0: 0x44806000
    ctx->pc = 0x211ef0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x211ef4: 0x3442d70a
    ctx->pc = 0x211ef4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 55050));
    // 0x211ef8: 0x44827000
    ctx->pc = 0x211ef8u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x211efc: 0xc06c202
    ctx->pc = 0x211EFCu;
    SET_GPR_U32(ctx, 31, 0x211F04u);
    ctx->pc = 0x211F00u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211F04u; }
        else if (ctx->pc != 0x211F04u) { ctx->pc = 0x211F04u; }
    }
    if (ctx->pc != 0x211F04u) { return; }
    ctx->pc = 0x211F04u;
    // 0x211f04: 0x8f848be4
    ctx->pc = 0x211f04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937572)));
    // 0x211f08: 0x3c020001
    ctx->pc = 0x211f08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x211f0c: 0x24030028
    ctx->pc = 0x211f0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 40));
    // 0x211f10: 0x3442010c
    ctx->pc = 0x211f10u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 268));
    // 0x211f14: 0x24050001
    ctx->pc = 0x211f14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x211f18: 0x912021
    ctx->pc = 0x211f18u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x211f1c: 0x83001a
    ctx->pc = 0x211f1cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x211f20: 0x0
    ctx->pc = 0x211f20u;
    // NOP
    // 0x211f24: 0x0
    ctx->pc = 0x211f24u;
    // NOP
    // 0x211f28: 0x1810
    ctx->pc = 0x211f28u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x211f2c: 0xc085400
    ctx->pc = 0x211F2Cu;
    SET_GPR_U32(ctx, 31, 0x211F34u);
    ctx->pc = 0x211F30u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x215000u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatCE__Fii_0x215000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211F34u; }
        else if (ctx->pc != 0x211F34u) { ctx->pc = 0x211F34u; }
    }
    if (ctx->pc != 0x211F34u) { return; }
    ctx->pc = 0x211F34u;
    // 0x211f34: 0xc069fb8
    ctx->pc = 0x211F34u;
    SET_GPR_U32(ctx, 31, 0x211F3Cu);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211F3Cu; }
        else if (ctx->pc != 0x211F3Cu) { ctx->pc = 0x211F3Cu; }
    }
    if (ctx->pc != 0x211F3Cu) { return; }
    ctx->pc = 0x211F3Cu;
    // 0x211f3c: 0x2403000a
    ctx->pc = 0x211f3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x211f40: 0x43001a
    ctx->pc = 0x211f40u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x211f44: 0x0
    ctx->pc = 0x211f44u;
    // NOP
    // 0x211f48: 0x0
    ctx->pc = 0x211f48u;
    // NOP
    // 0x211f4c: 0x2010
    ctx->pc = 0x211f4cu;
    SET_GPR_U32(ctx, 4, ctx->hi);
    // 0x211f50: 0x24030009
    ctx->pc = 0x211f50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9));
    // 0x211f54: 0x14830056
    ctx->pc = 0x211F54u;
    {
        const bool branch_taken_0x211f54 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x211f54) {
            ctx->pc = 0x2120B0u;
            goto label_2120b0;
        }
    }
    ctx->pc = 0x211F5Cu;
    // 0x211f5c: 0x44900000
    ctx->pc = 0x211f5cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 16);
    // 0x211f60: 0x3c023b03
    ctx->pc = 0x211f60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15107 << 16));
    // 0x211f64: 0x46800020
    ctx->pc = 0x211f64u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x211f68: 0x3442126f
    ctx->pc = 0x211f68u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4719));
    // 0x211f6c: 0x72402628
    ctx->pc = 0x211f6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x211f70: 0x44820800
    ctx->pc = 0x211f70u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x211f74: 0x0
    ctx->pc = 0x211f74u;
    // NOP
    // 0x211f78: 0x46000842
    ctx->pc = 0x211f78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x211f7c: 0x3c023c44
    ctx->pc = 0x211f7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15428 << 16));
    // 0x211f80: 0x34459ba6
    ctx->pc = 0x211f80u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 39846));
    // 0x211f84: 0x3c02bca3
    ctx->pc = 0x211f84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48291 << 16));
    // 0x211f88: 0x3443d70a
    ctx->pc = 0x211f88u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 55050));
    // 0x211f8c: 0x44850000
    ctx->pc = 0x211f8cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
    // 0x211f90: 0x3c02bc1b
    ctx->pc = 0x211f90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48155 << 16));
    // 0x211f94: 0x3442a5e3
    ctx->pc = 0x211f94u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 42467));
    // 0x211f98: 0x44837000
    ctx->pc = 0x211f98u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 3);
    // 0x211f9c: 0x44826800
    ctx->pc = 0x211f9cu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x211fa0: 0xc0848a4
    ctx->pc = 0x211FA0u;
    SET_GPR_U32(ctx, 31, 0x211FA8u);
    ctx->pc = 0x211FA4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x212290u;
    {
        const uint32_t __entryPc = ctx->pc;
        dispLifePtclBorn__10PlayerTaskFfff_0x212290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211FA8u; }
        else if (ctx->pc != 0x211FA8u) { ctx->pc = 0x211FA8u; }
    }
    if (ctx->pc != 0x211FA8u) { return; }
    ctx->pc = 0x211FA8u;
    // 0x211fa8: 0x10000042
    ctx->pc = 0x211FA8u;
    {
        const bool branch_taken_0x211fa8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x211FACu;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x211fa8) {
            ctx->pc = 0x2120B4u;
            goto label_2120b4;
        }
    }
    ctx->pc = 0x211FB0u;
    // 0x211fb0: 0x3c023ade
    ctx->pc = 0x211fb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15070 << 16));
label_211fb4:
    // 0x211fb4: 0x3442d288
    ctx->pc = 0x211fb4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 53896));
    // 0x211fb8: 0x44826000
    ctx->pc = 0x211fb8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x211fbc: 0x0
    ctx->pc = 0x211fbcu;
    // NOP
    // 0x211fc0: 0x46006346
    ctx->pc = 0x211fc0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x211fc4: 0xc06c1b3
    ctx->pc = 0x211FC4u;
    SET_GPR_U32(ctx, 31, 0x211FCCu);
    ctx->pc = 0x211FC8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211FCCu; }
        else if (ctx->pc != 0x211FCCu) { ctx->pc = 0x211FCCu; }
    }
    if (ctx->pc != 0x211FCCu) { return; }
    ctx->pc = 0x211FCCu;
    // 0x211fcc: 0x3c023ade
    ctx->pc = 0x211fccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15070 << 16));
    // 0x211fd0: 0x3442d288
    ctx->pc = 0x211fd0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 53896));
    // 0x211fd4: 0x44826000
    ctx->pc = 0x211fd4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x211fd8: 0xc06b218
    ctx->pc = 0x211FD8u;
    SET_GPR_U32(ctx, 31, 0x211FE0u);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211FE0u; }
        else if (ctx->pc != 0x211FE0u) { ctx->pc = 0x211FE0u; }
    }
    if (ctx->pc != 0x211FE0u) { return; }
    ctx->pc = 0x211FE0u;
    // 0x211fe0: 0x3c020001
    ctx->pc = 0x211fe0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x211fe4: 0x344400bb
    ctx->pc = 0x211fe4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 187));
    // 0x211fe8: 0xc085400
    ctx->pc = 0x211FE8u;
    SET_GPR_U32(ctx, 31, 0x211FF0u);
    ctx->pc = 0x211FECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x215000u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatCE__Fii_0x215000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211FF0u; }
        else if (ctx->pc != 0x211FF0u) { ctx->pc = 0x211FF0u; }
    }
    if (ctx->pc != 0x211FF0u) { return; }
    ctx->pc = 0x211FF0u;
    // 0x211ff0: 0x3c02bca3
    ctx->pc = 0x211ff0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48291 << 16));
    // 0x211ff4: 0x44806000
    ctx->pc = 0x211ff4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x211ff8: 0x3442d70a
    ctx->pc = 0x211ff8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 55050));
    // 0x211ffc: 0x44827000
    ctx->pc = 0x211ffcu;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x212000: 0xc06c202
    ctx->pc = 0x212000u;
    SET_GPR_U32(ctx, 31, 0x212008u);
    ctx->pc = 0x212004u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212008u; }
        else if (ctx->pc != 0x212008u) { ctx->pc = 0x212008u; }
    }
    if (ctx->pc != 0x212008u) { return; }
    ctx->pc = 0x212008u;
    // 0x212008: 0x8f848be4
    ctx->pc = 0x212008u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937572)));
    // 0x21200c: 0x3c020001
    ctx->pc = 0x21200cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x212010: 0x24030028
    ctx->pc = 0x212010u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 40));
    // 0x212014: 0x34420140
    ctx->pc = 0x212014u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 320));
    // 0x212018: 0x24050001
    ctx->pc = 0x212018u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21201c: 0x912021
    ctx->pc = 0x21201cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x212020: 0x83001a
    ctx->pc = 0x212020u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x212024: 0x0
    ctx->pc = 0x212024u;
    // NOP
    // 0x212028: 0x0
    ctx->pc = 0x212028u;
    // NOP
    // 0x21202c: 0x1810
    ctx->pc = 0x21202cu;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x212030: 0xc085400
    ctx->pc = 0x212030u;
    SET_GPR_U32(ctx, 31, 0x212038u);
    ctx->pc = 0x212034u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x215000u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatCE__Fii_0x215000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212038u; }
        else if (ctx->pc != 0x212038u) { ctx->pc = 0x212038u; }
    }
    if (ctx->pc != 0x212038u) { return; }
    ctx->pc = 0x212038u;
    // 0x212038: 0xc069fb8
    ctx->pc = 0x212038u;
    SET_GPR_U32(ctx, 31, 0x212040u);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212040u; }
        else if (ctx->pc != 0x212040u) { ctx->pc = 0x212040u; }
    }
    if (ctx->pc != 0x212040u) { return; }
    ctx->pc = 0x212040u;
    // 0x212040: 0x2403000a
    ctx->pc = 0x212040u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x212044: 0x43001a
    ctx->pc = 0x212044u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x212048: 0x0
    ctx->pc = 0x212048u;
    // NOP
    // 0x21204c: 0x0
    ctx->pc = 0x21204cu;
    // NOP
    // 0x212050: 0x2010
    ctx->pc = 0x212050u;
    SET_GPR_U32(ctx, 4, ctx->hi);
    // 0x212054: 0x24030009
    ctx->pc = 0x212054u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9));
    // 0x212058: 0x14830015
    ctx->pc = 0x212058u;
    {
        const bool branch_taken_0x212058 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x212058) {
            ctx->pc = 0x2120B0u;
            goto label_2120b0;
        }
    }
    ctx->pc = 0x212060u;
    // 0x212060: 0x44900000
    ctx->pc = 0x212060u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 16);
    // 0x212064: 0x3c02bb03
    ctx->pc = 0x212064u;
    SET_GPR_U32(ctx, 2, ((uint32_t)47875 << 16));
    // 0x212068: 0x46800020
    ctx->pc = 0x212068u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x21206c: 0x3442126f
    ctx->pc = 0x21206cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4719));
    // 0x212070: 0x72402628
    ctx->pc = 0x212070u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x212074: 0x44820800
    ctx->pc = 0x212074u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x212078: 0x0
    ctx->pc = 0x212078u;
    // NOP
    // 0x21207c: 0x46000842
    ctx->pc = 0x21207cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x212080: 0x3c023c44
    ctx->pc = 0x212080u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15428 << 16));
    // 0x212084: 0x34459ba6
    ctx->pc = 0x212084u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 39846));
    // 0x212088: 0x3c02bca3
    ctx->pc = 0x212088u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48291 << 16));
    // 0x21208c: 0x3443d70a
    ctx->pc = 0x21208cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 55050));
    // 0x212090: 0x44850000
    ctx->pc = 0x212090u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
    // 0x212094: 0x3c02bc1b
    ctx->pc = 0x212094u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48155 << 16));
    // 0x212098: 0x3442a5e3
    ctx->pc = 0x212098u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 42467));
    // 0x21209c: 0x44837000
    ctx->pc = 0x21209cu;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 3);
    // 0x2120a0: 0x44826800
    ctx->pc = 0x2120a0u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x2120a4: 0xc0848a4
    ctx->pc = 0x2120A4u;
    SET_GPR_U32(ctx, 31, 0x2120ACu);
    ctx->pc = 0x2120A8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->pc = 0x212290u;
    {
        const uint32_t __entryPc = ctx->pc;
        dispLifePtclBorn__10PlayerTaskFfff_0x212290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2120ACu; }
        else if (ctx->pc != 0x2120ACu) { ctx->pc = 0x2120ACu; }
    }
    if (ctx->pc != 0x2120ACu) { return; }
    ctx->pc = 0x2120ACu;
    // 0x2120ac: 0x0
    ctx->pc = 0x2120acu;
    // NOP
label_2120b0:
    // 0x2120b0: 0x4bff6b7e
    ctx->pc = 0x2120b0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_2120b4:
    // 0x2120b4: 0x4bfe6b7e
    ctx->pc = 0x2120b4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2120b8: 0x4bfd6b7e
    ctx->pc = 0x2120b8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2120bc: 0x4bfc6b7e
    ctx->pc = 0x2120bcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2120c0: 0x26310008
    ctx->pc = 0x2120c0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
    // 0x2120c4: 0x26100001
    ctx->pc = 0x2120c4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_2120c8:
    // 0x2120c8: 0x8e431cbc
    ctx->pc = 0x2120c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 7356)));
    // 0x2120cc: 0x8c630010
    ctx->pc = 0x2120ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2120d0: 0x203182a
    ctx->pc = 0x2120d0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x2120d4: 0x1460ff45
    ctx->pc = 0x2120D4u;
    {
        const bool branch_taken_0x2120d4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2120d4) {
            ctx->pc = 0x211DECu;
            goto label_211dec;
        }
    }
    ctx->pc = 0x2120DCu;
    // 0x2120dc: 0x0
    ctx->pc = 0x2120dcu;
    // NOP
label_2120e0:
    // 0x2120e0: 0x7bbf0030
    ctx->pc = 0x2120e0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2120e4:
    // 0x2120e4: 0x7bb20020
    ctx->pc = 0x2120e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2120e8: 0x7bb10010
    ctx->pc = 0x2120e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2120ec: 0x7bb00000
    ctx->pc = 0x2120ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2120f0: 0x3e00008
    ctx->pc = 0x2120F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2120F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21198Cu: goto label_21198c;
            case 0x21199Cu: goto label_21199c;
            case 0x211A00u: goto label_211a00;
            case 0x211A2Cu: goto label_211a2c;
            case 0x211B08u: goto label_211b08;
            case 0x211B28u: goto label_211b28;
            case 0x211B34u: goto label_211b34;
            case 0x211C04u: goto label_211c04;
            case 0x211CD4u: goto label_211cd4;
            case 0x211CF4u: goto label_211cf4;
            case 0x211D00u: goto label_211d00;
            case 0x211DD4u: goto label_211dd4;
            case 0x211DE4u: goto label_211de4;
            case 0x211DECu: goto label_211dec;
            case 0x211E58u: goto label_211e58;
            case 0x211EA4u: goto label_211ea4;
            case 0x211FB4u: goto label_211fb4;
            case 0x2120B0u: goto label_2120b0;
            case 0x2120B4u: goto label_2120b4;
            case 0x2120C8u: goto label_2120c8;
            case 0x2120E0u: goto label_2120e0;
            case 0x2120E4u: goto label_2120e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2120F8u;
}
