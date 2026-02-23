#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dispCartridgeBorn__10PlayerTaskFfff
// Address: 0x210b80 - 0x210e40
void dispCartridgeBorn__10PlayerTaskFfff_0x210b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dispCartridgeBorn__10PlayerTaskFfff");


    ctx->pc = 0x210b80u;

    // 0x210b80: 0x27bdffc0
    ctx->pc = 0x210b80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x210b84: 0x7fbf0030
    ctx->pc = 0x210b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x210b88: 0x7fb10020
    ctx->pc = 0x210b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x210b8c: 0x7fb00010
    ctx->pc = 0x210b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x210b90: 0xe7b60008
    ctx->pc = 0x210b90u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x210b94: 0xe7b50004
    ctx->pc = 0x210b94u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x210b98: 0xe7b40000
    ctx->pc = 0x210b98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x210b9c: 0x70808e28
    ctx->pc = 0x210b9cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x210ba0: 0x3c020050
    ctx->pc = 0x210ba0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x210ba4: 0x46006586
    ctx->pc = 0x210ba4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x210ba8: 0x46006d46
    ctx->pc = 0x210ba8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x210bac: 0x46007506
    ctx->pc = 0x210bacu;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    // 0x210bb0: 0xc07ce18
    ctx->pc = 0x210BB0u;
    SET_GPR_U32(ctx, 31, 0x210BB8u);
    ctx->pc = 0x210BB4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210BB8u; }
        else if (ctx->pc != 0x210BB8u) { ctx->pc = 0x210BB8u; }
    }
    if (ctx->pc != 0x210BB8u) { return; }
    ctx->pc = 0x210BB8u;
    // 0x210bb8: 0x1c400099
    ctx->pc = 0x210BB8u;
    {
        const bool branch_taken_0x210bb8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x210bb8) {
            ctx->pc = 0x210E20u;
            goto label_210e20;
        }
    }
    ctx->pc = 0x210BC0u;
    // 0x210bc0: 0x8e2424e0
    ctx->pc = 0x210bc0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 9440)));
    // 0x210bc4: 0x24020012
    ctx->pc = 0x210bc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 18));
    // 0x210bc8: 0x41880
    ctx->pc = 0x210bc8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x210bcc: 0x641821
    ctx->pc = 0x210bccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x210bd0: 0x31840
    ctx->pc = 0x210bd0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x210bd4: 0x641821
    ctx->pc = 0x210bd4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x210bd8: 0x31880
    ctx->pc = 0x210bd8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x210bdc: 0x2231821
    ctx->pc = 0x210bdcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x210be0: 0x247024e4
    ctx->pc = 0x210be0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 9444));
    // 0x210be4: 0x24830001
    ctx->pc = 0x210be4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 1));
    // 0x210be8: 0xae2324e0
    ctx->pc = 0x210be8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 9440), GPR_U32(ctx, 3));
    // 0x210bec: 0x8e2324e0
    ctx->pc = 0x210becu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 9440)));
    // 0x210bf0: 0x14620002
    ctx->pc = 0x210BF0u;
    {
        const bool branch_taken_0x210bf0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x210bf0) {
            ctx->pc = 0x210BFCu;
            goto label_210bfc;
        }
    }
    ctx->pc = 0x210BF8u;
    // 0x210bf8: 0xae2024e0
    ctx->pc = 0x210bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 9440), GPR_U32(ctx, 0));
label_210bfc:
    // 0x210bfc: 0xe6160000
    ctx->pc = 0x210bfcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x210c00: 0xe6150004
    ctx->pc = 0x210c00u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x210c04: 0xc069fb8
    ctx->pc = 0x210C04u;
    SET_GPR_U32(ctx, 31, 0x210C0Cu);
    ctx->pc = 0x210C08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210C0Cu; }
        else if (ctx->pc != 0x210C0Cu) { ctx->pc = 0x210C0Cu; }
    }
    if (ctx->pc != 0x210C0Cu) { return; }
    ctx->pc = 0x210C0Cu;
    // 0x210c0c: 0x304203ff
    ctx->pc = 0x210c0cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1023));
    // 0x210c10: 0xc069fb8
    ctx->pc = 0x210C10u;
    SET_GPR_U32(ctx, 31, 0x210C18u);
    ctx->pc = 0x210C14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210C18u; }
        else if (ctx->pc != 0x210C18u) { ctx->pc = 0x210C18u; }
    }
    if (ctx->pc != 0x210C18u) { return; }
    ctx->pc = 0x210C18u;
    // 0x210c18: 0x24420100
    ctx->pc = 0x210c18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 256));
    // 0x210c1c: 0x304203ff
    ctx->pc = 0x210c1cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1023));
    // 0x210c20: 0xc069fb8
    ctx->pc = 0x210C20u;
    SET_GPR_U32(ctx, 31, 0x210C28u);
    ctx->pc = 0x210C24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210C28u; }
        else if (ctx->pc != 0x210C28u) { ctx->pc = 0x210C28u; }
    }
    if (ctx->pc != 0x210C28u) { return; }
    ctx->pc = 0x210C28u;
    // 0x210c28: 0x24030014
    ctx->pc = 0x210c28u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
    // 0x210c2c: 0x43001a
    ctx->pc = 0x210c2cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x210c30: 0x3c010050
    ctx->pc = 0x210c30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x210c34: 0x0
    ctx->pc = 0x210c34u;
    // NOP
    // 0x210c38: 0x1810
    ctx->pc = 0x210c38u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x210c3c: 0x3c023727
    ctx->pc = 0x210c3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)14119 << 16));
    // 0x210c40: 0x3442c5ac
    ctx->pc = 0x210c40u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 50604));
    // 0x210c44: 0x44830800
    ctx->pc = 0x210c44u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x210c48: 0x44821000
    ctx->pc = 0x210c48u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x210c4c: 0x46800860
    ctx->pc = 0x210c4cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x210c50: 0x3c023951
    ctx->pc = 0x210c50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)14673 << 16));
    // 0x210c54: 0x3442b717
    ctx->pc = 0x210c54u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46871));
    // 0x210c58: 0x46011042
    ctx->pc = 0x210c58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x210c5c: 0x44820000
    ctx->pc = 0x210c5cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x210c60: 0x0
    ctx->pc = 0x210c60u;
    // NOP
    // 0x210c64: 0x46010000
    ctx->pc = 0x210c64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x210c68: 0x2402000a
    ctx->pc = 0x210c68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x210c6c: 0xe6000010
    ctx->pc = 0x210c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x210c70: 0xae000014
    ctx->pc = 0x210c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x210c74: 0x8423e504
    ctx->pc = 0x210c74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x210c78: 0x14620041
    ctx->pc = 0x210C78u;
    {
        const bool branch_taken_0x210c78 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x210c78) {
            ctx->pc = 0x210D80u;
            goto label_210d80;
        }
    }
    ctx->pc = 0x210C80u;
    // 0x210c80: 0x8f838bcc
    ctx->pc = 0x210c80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x210c84: 0x24020001
    ctx->pc = 0x210c84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x210c88: 0x1462003d
    ctx->pc = 0x210C88u;
    {
        const bool branch_taken_0x210c88 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x210c88) {
            ctx->pc = 0x210D80u;
            goto label_210d80;
        }
    }
    ctx->pc = 0x210C90u;
    // 0x210c90: 0x8e251cb8
    ctx->pc = 0x210c90u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 7352)));
    // 0x210c94: 0x3c020050
    ctx->pc = 0x210c94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x210c98: 0x2443fc80
    ctx->pc = 0x210c98u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294966400));
    // 0x210c9c: 0x2402000d
    ctx->pc = 0x210c9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
    // 0x210ca0: 0x52080
    ctx->pc = 0x210ca0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 2));
    // 0x210ca4: 0x641821
    ctx->pc = 0x210ca4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x210ca8: 0x80630000
    ctx->pc = 0x210ca8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x210cac: 0x10620006
    ctx->pc = 0x210CACu;
    {
        const bool branch_taken_0x210cac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x210CB0u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x210cac) {
            ctx->pc = 0x210CC8u;
            goto label_210cc8;
        }
    }
    ctx->pc = 0x210CB4u;
    // 0x210cb4: 0x2402000b
    ctx->pc = 0x210cb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
    // 0x210cb8: 0x50620004
    ctx->pc = 0x210CB8u;
    {
        const bool branch_taken_0x210cb8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x210cb8) {
            ctx->pc = 0x210CBCu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x210CCCu;
            goto label_210ccc;
        }
    }
    ctx->pc = 0x210CC0u;
    // 0x210cc0: 0x10000002
    ctx->pc = 0x210CC0u;
    {
        const bool branch_taken_0x210cc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x210cc0) {
            ctx->pc = 0x210CCCu;
            goto label_210ccc;
        }
    }
    ctx->pc = 0x210CC8u;
label_210cc8:
    // 0x210cc8: 0x24110001
    ctx->pc = 0x210cc8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
label_210ccc:
    // 0x210ccc: 0x14a00013
    ctx->pc = 0x210CCCu;
    {
        const bool branch_taken_0x210ccc = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x210ccc) {
            ctx->pc = 0x210D1Cu;
            goto label_210d1c;
        }
    }
    ctx->pc = 0x210CD4u;
    // 0x210cd4: 0xc069fb8
    ctx->pc = 0x210CD4u;
    SET_GPR_U32(ctx, 31, 0x210CDCu);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210CDCu; }
        else if (ctx->pc != 0x210CDCu) { ctx->pc = 0x210CDCu; }
    }
    if (ctx->pc != 0x210CDCu) { return; }
    ctx->pc = 0x210CDCu;
    // 0x210cdc: 0x24030014
    ctx->pc = 0x210cdcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
    // 0x210ce0: 0x43001a
    ctx->pc = 0x210ce0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x210ce4: 0x3c033727
    ctx->pc = 0x210ce4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)14119 << 16));
    // 0x210ce8: 0x3463c5ac
    ctx->pc = 0x210ce8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 50604));
    // 0x210cec: 0x44830800
    ctx->pc = 0x210cecu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x210cf0: 0x3c03b727
    ctx->pc = 0x210cf0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)46887 << 16));
    // 0x210cf4: 0x3463c5ac
    ctx->pc = 0x210cf4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 50604));
    // 0x210cf8: 0x44830000
    ctx->pc = 0x210cf8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x210cfc: 0x1810
    ctx->pc = 0x210cfcu;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x210d00: 0x44831000
    ctx->pc = 0x210d00u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
    // 0x210d04: 0x0
    ctx->pc = 0x210d04u;
    // NOP
    // 0x210d08: 0x468010a0
    ctx->pc = 0x210d08u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x210d0c: 0x46020842
    ctx->pc = 0x210d0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x210d10: 0x46010001
    ctx->pc = 0x210d10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x210d14: 0x1000000f
    ctx->pc = 0x210D14u;
    {
        const bool branch_taken_0x210d14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x210D18u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        if (branch_taken_0x210d14) {
            ctx->pc = 0x210D54u;
            goto label_210d54;
        }
    }
    ctx->pc = 0x210D1Cu;
label_210d1c:
    // 0x210d1c: 0xc069fb8
    ctx->pc = 0x210D1Cu;
    SET_GPR_U32(ctx, 31, 0x210D24u);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210D24u; }
        else if (ctx->pc != 0x210D24u) { ctx->pc = 0x210D24u; }
    }
    if (ctx->pc != 0x210D24u) { return; }
    ctx->pc = 0x210D24u;
    // 0x210d24: 0x24030014
    ctx->pc = 0x210d24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
    // 0x210d28: 0x43001a
    ctx->pc = 0x210d28u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x210d2c: 0x3c033727
    ctx->pc = 0x210d2cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)14119 << 16));
    // 0x210d30: 0x3463c5ac
    ctx->pc = 0x210d30u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 50604));
    // 0x210d34: 0x44830800
    ctx->pc = 0x210d34u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x210d38: 0x1810
    ctx->pc = 0x210d38u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x210d3c: 0x44830000
    ctx->pc = 0x210d3cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x210d40: 0x0
    ctx->pc = 0x210d40u;
    // NOP
    // 0x210d44: 0x46800020
    ctx->pc = 0x210d44u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x210d48: 0x46000802
    ctx->pc = 0x210d48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x210d4c: 0x46000800
    ctx->pc = 0x210d4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x210d50: 0xe600000c
    ctx->pc = 0x210d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_210d54:
    // 0x210d54: 0x24030001
    ctx->pc = 0x210d54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x210d58: 0x1623002d
    ctx->pc = 0x210D58u;
    {
        const bool branch_taken_0x210d58 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 3));
        ctx->pc = 0x210D5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        if (branch_taken_0x210d58) {
            ctx->pc = 0x210E10u;
            goto label_210e10;
        }
    }
    ctx->pc = 0x210D60u;
    // 0x210d60: 0xc600000c
    ctx->pc = 0x210d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210d64: 0x3c0340c0
    ctx->pc = 0x210d64u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16576 << 16));
    // 0x210d68: 0x44830800
    ctx->pc = 0x210d68u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x210d6c: 0x2403005a
    ctx->pc = 0x210d6cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 90));
    // 0x210d70: 0x46010002
    ctx->pc = 0x210d70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x210d74: 0xe600000c
    ctx->pc = 0x210d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x210d78: 0x10000025
    ctx->pc = 0x210D78u;
    {
        const bool branch_taken_0x210d78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x210D7Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        if (branch_taken_0x210d78) {
            ctx->pc = 0x210E10u;
            goto label_210e10;
        }
    }
    ctx->pc = 0x210D80u;
label_210d80:
    // 0x210d80: 0x8e221cb8
    ctx->pc = 0x210d80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 7352)));
    // 0x210d84: 0x14400013
    ctx->pc = 0x210D84u;
    {
        const bool branch_taken_0x210d84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x210d84) {
            ctx->pc = 0x210DD4u;
            goto label_210dd4;
        }
    }
    ctx->pc = 0x210D8Cu;
    // 0x210d8c: 0xc069fb8
    ctx->pc = 0x210D8Cu;
    SET_GPR_U32(ctx, 31, 0x210D94u);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210D94u; }
        else if (ctx->pc != 0x210D94u) { ctx->pc = 0x210D94u; }
    }
    if (ctx->pc != 0x210D94u) { return; }
    ctx->pc = 0x210D94u;
    // 0x210d94: 0x24030014
    ctx->pc = 0x210d94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
    // 0x210d98: 0x43001a
    ctx->pc = 0x210d98u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x210d9c: 0x3c033727
    ctx->pc = 0x210d9cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)14119 << 16));
    // 0x210da0: 0x3463c5ac
    ctx->pc = 0x210da0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 50604));
    // 0x210da4: 0x44830800
    ctx->pc = 0x210da4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x210da8: 0x3c03b727
    ctx->pc = 0x210da8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)46887 << 16));
    // 0x210dac: 0x3463c5ac
    ctx->pc = 0x210dacu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 50604));
    // 0x210db0: 0x44830000
    ctx->pc = 0x210db0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x210db4: 0x1810
    ctx->pc = 0x210db4u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x210db8: 0x44831000
    ctx->pc = 0x210db8u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
    // 0x210dbc: 0x0
    ctx->pc = 0x210dbcu;
    // NOP
    // 0x210dc0: 0x468010a0
    ctx->pc = 0x210dc0u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x210dc4: 0x46020842
    ctx->pc = 0x210dc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x210dc8: 0x46010001
    ctx->pc = 0x210dc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x210dcc: 0x1000000f
    ctx->pc = 0x210DCCu;
    {
        const bool branch_taken_0x210dcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x210DD0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        if (branch_taken_0x210dcc) {
            ctx->pc = 0x210E0Cu;
            goto label_210e0c;
        }
    }
    ctx->pc = 0x210DD4u;
label_210dd4:
    // 0x210dd4: 0xc069fb8
    ctx->pc = 0x210DD4u;
    SET_GPR_U32(ctx, 31, 0x210DDCu);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210DDCu; }
        else if (ctx->pc != 0x210DDCu) { ctx->pc = 0x210DDCu; }
    }
    if (ctx->pc != 0x210DDCu) { return; }
    ctx->pc = 0x210DDCu;
    // 0x210ddc: 0x24030014
    ctx->pc = 0x210ddcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
    // 0x210de0: 0x43001a
    ctx->pc = 0x210de0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x210de4: 0x3c033727
    ctx->pc = 0x210de4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)14119 << 16));
    // 0x210de8: 0x3463c5ac
    ctx->pc = 0x210de8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 50604));
    // 0x210dec: 0x44830800
    ctx->pc = 0x210decu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x210df0: 0x1810
    ctx->pc = 0x210df0u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x210df4: 0x44830000
    ctx->pc = 0x210df4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x210df8: 0x0
    ctx->pc = 0x210df8u;
    // NOP
    // 0x210dfc: 0x46800020
    ctx->pc = 0x210dfcu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x210e00: 0x46000802
    ctx->pc = 0x210e00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x210e04: 0x46000800
    ctx->pc = 0x210e04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x210e08: 0xe600000c
    ctx->pc = 0x210e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_210e0c:
    // 0x210e0c: 0xae00001c
    ctx->pc = 0x210e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_210e10:
    // 0x210e10: 0x24030001
    ctx->pc = 0x210e10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x210e14: 0xae030018
    ctx->pc = 0x210e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x210e18: 0x24030009
    ctx->pc = 0x210e18u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9));
    // 0x210e1c: 0xae030020
    ctx->pc = 0x210e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_210e20:
    // 0x210e20: 0x7bbf0030
    ctx->pc = 0x210e20u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210e24: 0x7bb10020
    ctx->pc = 0x210e24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210e28: 0x7bb00010
    ctx->pc = 0x210e28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210e2c: 0xc7b60008
    ctx->pc = 0x210e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x210e30: 0xc7b50004
    ctx->pc = 0x210e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x210e34: 0xc7b40000
    ctx->pc = 0x210e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x210e38: 0x3e00008
    ctx->pc = 0x210E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210E3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x210BFCu: goto label_210bfc;
            case 0x210CC8u: goto label_210cc8;
            case 0x210CCCu: goto label_210ccc;
            case 0x210D1Cu: goto label_210d1c;
            case 0x210D54u: goto label_210d54;
            case 0x210D80u: goto label_210d80;
            case 0x210DD4u: goto label_210dd4;
            case 0x210E0Cu: goto label_210e0c;
            case 0x210E10u: goto label_210e10;
            case 0x210E20u: goto label_210e20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x210E40u;
}
