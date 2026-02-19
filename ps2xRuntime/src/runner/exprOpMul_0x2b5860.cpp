#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: exprOpMul
// Address: 0x2b5860 - 0x2b58cc
void exprOpMul_0x2b5860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b5860u;

label_2b5860:
    // 0x2b5860: 0x8c820000
    ctx->pc = 0x2b5860u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b5864:
    // 0x2b5864: 0x2443fffc
    ctx->pc = 0x2b5864u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967292));
label_2b5868:
    // 0x2b5868: 0x2c620010
    ctx->pc = 0x2b5868u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 16));
label_2b586c:
    // 0x2b586c: 0x10400011
label_2b5870:
    if (ctx->pc == 0x2B5870u) {
        ctx->pc = 0x2B5870u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x2B5874u;
        goto label_2b5874;
    }
    ctx->pc = 0x2B586Cu;
    {
        const bool branch_taken_0x2b586c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5870u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2b586c) {
            ctx->pc = 0x2B58B4u;
            goto label_2b58b4;
        }
    }
    ctx->pc = 0x2B5874u;
label_2b5874:
    // 0x2b5874: 0x24424aa0
    ctx->pc = 0x2b5874u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19104));
label_2b5878:
    // 0x2b5878: 0x31880
    ctx->pc = 0x2b5878u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2b587c:
    // 0x2b587c: 0x621821
    ctx->pc = 0x2b587cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b5880:
    // 0x2b5880: 0x8c620000
    ctx->pc = 0x2b5880u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b5884:
    // 0x2b5884: 0x400008
label_2b5888:
    if (ctx->pc == 0x2B5888u) {
        ctx->pc = 0x2B588Cu;
        goto label_2b588c;
    }
    ctx->pc = 0x2B5884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B5860u: goto label_2b5860;
            case 0x2B5864u: goto label_2b5864;
            case 0x2B5868u: goto label_2b5868;
            case 0x2B586Cu: goto label_2b586c;
            case 0x2B5870u: goto label_2b5870;
            case 0x2B5874u: goto label_2b5874;
            case 0x2B5878u: goto label_2b5878;
            case 0x2B587Cu: goto label_2b587c;
            case 0x2B5880u: goto label_2b5880;
            case 0x2B5884u: goto label_2b5884;
            case 0x2B5888u: goto label_2b5888;
            case 0x2B588Cu: goto label_2b588c;
            case 0x2B5890u: goto label_2b5890;
            case 0x2B5894u: goto label_2b5894;
            case 0x2B5898u: goto label_2b5898;
            case 0x2B589Cu: goto label_2b589c;
            case 0x2B58A0u: goto label_2b58a0;
            case 0x2B58A4u: goto label_2b58a4;
            case 0x2B58A8u: goto label_2b58a8;
            case 0x2B58ACu: goto label_2b58ac;
            case 0x2B58B0u: goto label_2b58b0;
            case 0x2B58B4u: goto label_2b58b4;
            case 0x2B58B8u: goto label_2b58b8;
            case 0x2B58BCu: goto label_2b58bc;
            case 0x2B58C0u: goto label_2b58c0;
            case 0x2B58C4u: goto label_2b58c4;
            case 0x2B58C8u: goto label_2b58c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B588Cu;
label_2b588c:
    // 0x2b588c: 0xc4a00010
    ctx->pc = 0x2b588cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b5890:
    // 0x2b5890: 0xc4c10010
    ctx->pc = 0x2b5890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b5894:
    // 0x2b5894: 0x46010002
    ctx->pc = 0x2b5894u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b5898:
    // 0x2b5898: 0x10000009
label_2b589c:
    if (ctx->pc == 0x2B589Cu) {
        ctx->pc = 0x2B589Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->pc = 0x2B58A0u;
        goto label_2b58a0;
    }
    ctx->pc = 0x2B5898u;
    {
        const bool branch_taken_0x2b5898 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B589Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        if (branch_taken_0x2b5898) {
            ctx->pc = 0x2B58C0u;
            goto label_2b58c0;
        }
    }
    ctx->pc = 0x2B58A0u;
label_2b58a0:
    // 0x2b58a0: 0x8ca20010
    ctx->pc = 0x2b58a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_2b58a4:
    // 0x2b58a4: 0x8cc30010
    ctx->pc = 0x2b58a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_2b58a8:
    // 0x2b58a8: 0x431018
    ctx->pc = 0x2b58a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2b58ac:
    // 0x2b58ac: 0x10000004
label_2b58b0:
    if (ctx->pc == 0x2B58B0u) {
        ctx->pc = 0x2B58B0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x2B58B4u;
        goto label_2b58b4;
    }
    ctx->pc = 0x2B58ACu;
    {
        const bool branch_taken_0x2b58ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B58B0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x2b58ac) {
            ctx->pc = 0x2B58C0u;
            goto label_2b58c0;
        }
    }
    ctx->pc = 0x2B58B4u;
label_2b58b4:
    // 0x2b58b4: 0x3c07003b
    ctx->pc = 0x2b58b4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)59 << 16));
label_2b58b8:
    // 0x2b58b8: 0x80ad496
label_2b58bc:
    if (ctx->pc == 0x2B58BCu) {
        ctx->pc = 0x2B58BCu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 19088));
        ctx->pc = 0x2B58C0u;
        goto label_2b58c0;
    }
    ctx->pc = 0x2B58B8u;
    ctx->pc = 0x2B58BCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 19088));
    ctx->pc = 0x2B5258u;
    typeError_0x2b5258(rdram, ctx, runtime); return;
    ctx->pc = 0x2B58C0u;
label_2b58c0:
    // 0x2b58c0: 0x8ca20000
    ctx->pc = 0x2b58c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2b58c4:
    // 0x2b58c4: 0x3e00008
label_2b58c8:
    if (ctx->pc == 0x2B58C8u) {
        ctx->pc = 0x2B58C8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2B58CCu;
        goto label_fallthrough_0x2b58c4;
    }
    ctx->pc = 0x2B58C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B58C8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B5860u: goto label_2b5860;
            case 0x2B5864u: goto label_2b5864;
            case 0x2B5868u: goto label_2b5868;
            case 0x2B586Cu: goto label_2b586c;
            case 0x2B5870u: goto label_2b5870;
            case 0x2B5874u: goto label_2b5874;
            case 0x2B5878u: goto label_2b5878;
            case 0x2B587Cu: goto label_2b587c;
            case 0x2B5880u: goto label_2b5880;
            case 0x2B5884u: goto label_2b5884;
            case 0x2B5888u: goto label_2b5888;
            case 0x2B588Cu: goto label_2b588c;
            case 0x2B5890u: goto label_2b5890;
            case 0x2B5894u: goto label_2b5894;
            case 0x2B5898u: goto label_2b5898;
            case 0x2B589Cu: goto label_2b589c;
            case 0x2B58A0u: goto label_2b58a0;
            case 0x2B58A4u: goto label_2b58a4;
            case 0x2B58A8u: goto label_2b58a8;
            case 0x2B58ACu: goto label_2b58ac;
            case 0x2B58B0u: goto label_2b58b0;
            case 0x2B58B4u: goto label_2b58b4;
            case 0x2B58B8u: goto label_2b58b8;
            case 0x2B58BCu: goto label_2b58bc;
            case 0x2B58C0u: goto label_2b58c0;
            case 0x2B58C4u: goto label_2b58c4;
            case 0x2B58C8u: goto label_2b58c8;
            default: break;
        }
        return;
    }
label_fallthrough_0x2b58c4:
    ctx->pc = 0x2B58CCu;
}
