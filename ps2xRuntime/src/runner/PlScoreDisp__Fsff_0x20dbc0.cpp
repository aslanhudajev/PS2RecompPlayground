#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PlScoreDisp__Fsff
// Address: 0x20dbc0 - 0x20dd00
void PlScoreDisp__Fsff_0x20dbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PlScoreDisp__Fsff");


    ctx->pc = 0x20dbc0u;

    // 0x20dbc0: 0x4243c
    ctx->pc = 0x20dbc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x20dbc4: 0x4243f
    ctx->pc = 0x20dbc4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x20dbc8: 0x41900
    ctx->pc = 0x20dbc8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x20dbcc: 0x642023
    ctx->pc = 0x20dbccu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20dbd0: 0x27bdff70
    ctx->pc = 0x20dbd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x20dbd4: 0x418c0
    ctx->pc = 0x20dbd4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x20dbd8: 0x7fbf0030
    ctx->pc = 0x20dbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x20dbdc: 0x641823
    ctx->pc = 0x20dbdcu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20dbe0: 0x7fb10020
    ctx->pc = 0x20dbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x20dbe4: 0x320c0
    ctx->pc = 0x20dbe4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 3));
    // 0x20dbe8: 0x7fb00010
    ctx->pc = 0x20dbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20dbec: 0xe7b50004
    ctx->pc = 0x20dbecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x20dbf0: 0x3c030050
    ctx->pc = 0x20dbf0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x20dbf4: 0x2463dd2c
    ctx->pc = 0x20dbf4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294958380));
    // 0x20dbf8: 0xe7b40000
    ctx->pc = 0x20dbf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20dbfc: 0x641821
    ctx->pc = 0x20dbfcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20dc00: 0x8c700000
    ctx->pc = 0x20dc00u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20dc04: 0x46006546
    ctx->pc = 0x20dc04u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x20dc08: 0x46006d06
    ctx->pc = 0x20dc08u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x20dc0c: 0x70002e28
    ctx->pc = 0x20dc0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20dc10: 0x3c03000f
    ctx->pc = 0x20dc10u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15 << 16));
    // 0x20dc14: 0x34714240
    ctx->pc = 0x20dc14u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 3), 16960));
label_20dc18:
    // 0x20dc18: 0x16200002
    ctx->pc = 0x20DC18u;
    {
        const bool branch_taken_0x20dc18 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x20DC1Cu;
        { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
        if (branch_taken_0x20dc18) {
            ctx->pc = 0x20DC24u;
            goto label_20dc24;
        }
    }
    ctx->pc = 0x20DC20u;
    // 0x20dc20: 0x1cd
    ctx->pc = 0x20dc20u;
    runtime->handleBreak(rdram, ctx);
label_20dc24:
    // 0x20dc24: 0x2012
    ctx->pc = 0x20dc24u;
    SET_GPR_U32(ctx, 4, ctx->lo);
    // 0x20dc28: 0x2403000a
    ctx->pc = 0x20dc28u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x20dc2c: 0x83001a
    ctx->pc = 0x20dc2cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x20dc30: 0x0
    ctx->pc = 0x20dc30u;
    // NOP
    // 0x20dc34: 0x0
    ctx->pc = 0x20dc34u;
    // NOP
    // 0x20dc38: 0x2010
    ctx->pc = 0x20dc38u;
    SET_GPR_U32(ctx, 4, ctx->hi);
    // 0x20dc3c: 0x54a00007
    ctx->pc = 0x20DC3Cu;
    {
        const bool branch_taken_0x20dc3c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x20dc3c) {
            ctx->pc = 0x20DC40u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1551));
            ctx->pc = 0x20DC5Cu;
            goto label_20dc5c;
        }
    }
    ctx->pc = 0x20DC44u;
    // 0x20dc44: 0x14800004
    ctx->pc = 0x20DC44u;
    {
        const bool branch_taken_0x20dc44 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x20DC48u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x20dc44) {
            ctx->pc = 0x20DC58u;
            goto label_20dc58;
        }
    }
    ctx->pc = 0x20DC4Cu;
    // 0x20dc4c: 0x16230019
    ctx->pc = 0x20DC4Cu;
    {
        const bool branch_taken_0x20dc4c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 3));
        ctx->pc = 0x20DC50u;
        SET_GPR_U32(ctx, 3, ((uint32_t)16736 << 16));
        if (branch_taken_0x20dc4c) {
            ctx->pc = 0x20DCB4u;
            goto label_20dcb4;
        }
    }
    ctx->pc = 0x20DC54u;
    // 0x20dc54: 0x0
    ctx->pc = 0x20dc54u;
    // NOP
label_20dc58:
    // 0x20dc58: 0x2482060f
    ctx->pc = 0x20dc58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1551));
label_20dc5c:
    // 0x20dc5c: 0xafa20088
    ctx->pc = 0x20dc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x20dc60: 0xe7b5004c
    ctx->pc = 0x20dc60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x20dc64: 0x3c023c65
    ctx->pc = 0x20dc64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15461 << 16));
    // 0x20dc68: 0xe7b40050
    ctx->pc = 0x20dc68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x20dc6c: 0x34426042
    ctx->pc = 0x20dc6cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 24642));
    // 0x20dc70: 0xafa20054
    ctx->pc = 0x20dc70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x20dc74: 0x3c023f80
    ctx->pc = 0x20dc74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x20dc78: 0xafa20058
    ctx->pc = 0x20dc78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x20dc7c: 0xafa2005c
    ctx->pc = 0x20dc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x20dc80: 0xafa00064
    ctx->pc = 0x20dc80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x20dc84: 0xafa00060
    ctx->pc = 0x20dc84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x20dc88: 0xafa2006c
    ctx->pc = 0x20dc88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x20dc8c: 0xafa20068
    ctx->pc = 0x20dc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x20dc90: 0xafa00070
    ctx->pc = 0x20dc90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x20dc94: 0xafa20074
    ctx->pc = 0x20dc94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x20dc98: 0x2402ffff
    ctx->pc = 0x20dc98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20dc9c: 0xafa20078
    ctx->pc = 0x20dc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x20dca0: 0x27a40040
    ctx->pc = 0x20dca0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x20dca4: 0xc085bd8
    ctx->pc = 0x20DCA4u;
    SET_GPR_U32(ctx, 31, 0x20DCACu);
    ctx->pc = 0x20DCA8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    ctx->pc = 0x216F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPut__FP7SPR_ARG_0x216f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DCACu; }
        else if (ctx->pc != 0x20DCACu) { ctx->pc = 0x20DCACu; }
    }
    if (ctx->pc != 0x20DCACu) { return; }
    ctx->pc = 0x20DCACu;
    // 0x20dcac: 0x24050001
    ctx->pc = 0x20dcacu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20dcb0: 0x3c034160
    ctx->pc = 0x20dcb0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16736 << 16));
label_20dcb4:
    // 0x20dcb4: 0x44830000
    ctx->pc = 0x20dcb4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x20dcb8: 0x1127c2
    ctx->pc = 0x20dcb8u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 17), 31));
    // 0x20dcbc: 0x3c036666
    ctx->pc = 0x20dcbcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)26214 << 16));
    // 0x20dcc0: 0x34636667
    ctx->pc = 0x20dcc0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 26215));
    // 0x20dcc4: 0x710018
    ctx->pc = 0x20dcc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x20dcc8: 0x0
    ctx->pc = 0x20dcc8u;
    // NOP
    // 0x20dccc: 0x0
    ctx->pc = 0x20dcccu;
    // NOP
    // 0x20dcd0: 0x1810
    ctx->pc = 0x20dcd0u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x20dcd4: 0x31883
    ctx->pc = 0x20dcd4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x20dcd8: 0x648821
    ctx->pc = 0x20dcd8u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20dcdc: 0x1e20ffce
    ctx->pc = 0x20DCDCu;
    {
        const bool branch_taken_0x20dcdc = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x20DCE0u;
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        if (branch_taken_0x20dcdc) {
            ctx->pc = 0x20DC18u;
            goto label_20dc18;
        }
    }
    ctx->pc = 0x20DCE4u;
    // 0x20dce4: 0x7bbf0030
    ctx->pc = 0x20dce4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20dce8: 0x7bb10020
    ctx->pc = 0x20dce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20dcec: 0x7bb00010
    ctx->pc = 0x20dcecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20dcf0: 0xc7b50004
    ctx->pc = 0x20dcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20dcf4: 0xc7b40000
    ctx->pc = 0x20dcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20dcf8: 0x3e00008
    ctx->pc = 0x20DCF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DCFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20DC18u: goto label_20dc18;
            case 0x20DC24u: goto label_20dc24;
            case 0x20DC58u: goto label_20dc58;
            case 0x20DC5Cu: goto label_20dc5c;
            case 0x20DCB4u: goto label_20dcb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20DD00u;
}
