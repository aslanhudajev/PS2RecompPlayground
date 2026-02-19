#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DispMenu
// Address: 0x281b38 - 0x281e18
void DispMenu_0x281b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x281b38u;

label_281b38:
    // 0x281b38: 0x27bdff00
    ctx->pc = 0x281b38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967040));
label_281b3c:
    // 0x281b3c: 0xffbf00f0
    ctx->pc = 0x281b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
label_281b40:
    // 0x281b40: 0xffbe00e0
    ctx->pc = 0x281b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 30));
label_281b44:
    // 0x281b44: 0xffb700d0
    ctx->pc = 0x281b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 23));
label_281b48:
    // 0x281b48: 0xffb600c0
    ctx->pc = 0x281b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
label_281b4c:
    // 0x281b4c: 0xffb500b0
    ctx->pc = 0x281b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
label_281b50:
    // 0x281b50: 0xffb400a0
    ctx->pc = 0x281b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
label_281b54:
    // 0x281b54: 0xffb30090
    ctx->pc = 0x281b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
label_281b58:
    // 0x281b58: 0xffb20080
    ctx->pc = 0x281b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
label_281b5c:
    // 0x281b5c: 0xffb10070
    ctx->pc = 0x281b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
label_281b60:
    // 0x281b60: 0xffb00060
    ctx->pc = 0x281b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_281b64:
    // 0x281b64: 0x24040028
    ctx->pc = 0x281b64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 40));
label_281b68:
    // 0x281b68: 0x3c03003c
    ctx->pc = 0x281b68u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_281b6c:
    // 0x281b6c: 0x24020001
    ctx->pc = 0x281b6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_281b70:
    // 0x281b70: 0xac623abc
    ctx->pc = 0x281b70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15036), GPR_U32(ctx, 2));
label_281b74:
    // 0x281b74: 0x3c02003c
    ctx->pc = 0x281b74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_281b78:
    // 0x281b78: 0x3c013fc0
    ctx->pc = 0x281b78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16320 << 16));
label_281b7c:
    // 0x281b7c: 0x44810000
    ctx->pc = 0x281b7cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_281b80:
    // 0x281b80: 0xe4403ac0
    ctx->pc = 0x281b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 15040), bits); }
label_281b84:
    // 0x281b84: 0x3c02003c
    ctx->pc = 0x281b84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_281b88:
    // 0x281b88: 0x24030014
    ctx->pc = 0x281b88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
label_281b8c:
    // 0x281b8c: 0xac433ac8
    ctx->pc = 0x281b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15048), GPR_U32(ctx, 3));
label_281b90:
    // 0x281b90: 0x3c02003c
    ctx->pc = 0x281b90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_281b94:
    // 0x281b94: 0xac443acc
    ctx->pc = 0x281b94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15052), GPR_U32(ctx, 4));
label_281b98:
    // 0x281b98: 0x982d
    ctx->pc = 0x281b98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281b9c:
    // 0x281b9c: 0x40b02d
    ctx->pc = 0x281b9cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_281ba0:
    // 0x281ba0: 0x3c15003c
    ctx->pc = 0x281ba0u;
    SET_GPR_U32(ctx, 21, ((uint32_t)60 << 16));
label_281ba4:
    // 0x281ba4: 0x3c14003c
    ctx->pc = 0x281ba4u;
    SET_GPR_U32(ctx, 20, ((uint32_t)60 << 16));
label_281ba8:
    // 0x281ba8: 0x3c17003c
    ctx->pc = 0x281ba8u;
    SET_GPR_U32(ctx, 23, ((uint32_t)60 << 16));
label_281bac:
    // 0x281bac: 0x3c1e003c
    ctx->pc = 0x281bacu;
    SET_GPR_U32(ctx, 30, ((uint32_t)60 << 16));
label_281bb0:
    // 0x281bb0: 0x24020030
    ctx->pc = 0x281bb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
label_281bb4:
    // 0x281bb4: 0x0
    ctx->pc = 0x281bb4u;
    // NOP
label_281bb8:
    // 0x281bb8: 0x3c030035
    ctx->pc = 0x281bb8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_281bbc:
    // 0x281bbc: 0x24639708
    ctx->pc = 0x281bbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294940424));
label_281bc0:
    // 0x281bc0: 0x600013
    ctx->pc = 0x281bc0u;
    ctx->lo = GPR_U32(ctx, 3);
label_281bc4:
    // 0x281bc4: 0x72628800
    ctx->pc = 0x281bc4u;
    { int64_t acc = ((int64_t)ctx->hi << 32) | ctx->lo; int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_281bc8:
    // 0x281bc8: 0x8e220000
    ctx->pc = 0x281bc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_281bcc:
    // 0x281bcc: 0x10400064
label_281bd0:
    if (ctx->pc == 0x281BD0u) {
        ctx->pc = 0x281BD0u;
        SET_GPR_U32(ctx, 18, ((uint32_t)60 << 16));
        ctx->pc = 0x281BD4u;
        goto label_281bd4;
    }
    ctx->pc = 0x281BCCu;
    {
        const bool branch_taken_0x281bcc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x281BD0u;
        SET_GPR_U32(ctx, 18, ((uint32_t)60 << 16));
        if (branch_taken_0x281bcc) {
            ctx->pc = 0x281D60u;
            goto label_281d60;
        }
    }
    ctx->pc = 0x281BD4u;
label_281bd4:
    // 0x281bd4: 0x3c040035
    ctx->pc = 0x281bd4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_281bd8:
    // 0x281bd8: 0x8c829b90
    ctx->pc = 0x281bd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294941584)));
label_281bdc:
    // 0x281bdc: 0x3c0300ff
    ctx->pc = 0x281bdcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)255 << 16));
label_281be0:
    // 0x281be0: 0x3463ffff
    ctx->pc = 0x281be0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
label_281be4:
    // 0x281be4: 0x3c0400ff
    ctx->pc = 0x281be4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
label_281be8:
    // 0x281be8: 0x3484ff00
    ctx->pc = 0x281be8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65280));
label_281bec:
    // 0x281bec: 0x2621026
    ctx->pc = 0x281becu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_281bf0:
    // 0x281bf0: 0x82180a
    ctx->pc = 0x281bf0u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
label_281bf4:
    // 0x281bf4: 0xae433ac4
    ctx->pc = 0x281bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 15044), GPR_U32(ctx, 3));
label_281bf8:
    // 0x281bf8: 0x3c10003c
    ctx->pc = 0x281bf8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_281bfc:
    // 0x281bfc: 0x24020014
    ctx->pc = 0x281bfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
label_281c00:
    // 0x281c00: 0xae023ac8
    ctx->pc = 0x281c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15048), GPR_U32(ctx, 2));
label_281c04:
    // 0x281c04: 0x8e260000
    ctx->pc = 0x281c04u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_281c08:
    // 0x281c08: 0x80c20000
    ctx->pc = 0x281c08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_281c0c:
    // 0x281c0c: 0x10400017
label_281c10:
    if (ctx->pc == 0x281C10u) {
        ctx->pc = 0x281C10u;
        SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
        ctx->pc = 0x281C14u;
        goto label_281c14;
    }
    ctx->pc = 0x281C0Cu;
    {
        const bool branch_taken_0x281c0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x281C10u;
        SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
        if (branch_taken_0x281c0c) {
            ctx->pc = 0x281C6Cu;
            goto label_281c6c;
        }
    }
    ctx->pc = 0x281C14u;
label_281c14:
    // 0x281c14: 0x27a40010
    ctx->pc = 0x281c14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
label_281c18:
    // 0x281c18: 0xc0b6252
label_281c1c:
    if (ctx->pc == 0x281C1Cu) {
        ctx->pc = 0x281C1Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294951672));
        ctx->pc = 0x281C20u;
        goto label_281c20;
    }
    ctx->pc = 0x281C18u;
    SET_GPR_U32(ctx, 31, 0x281C20u);
    ctx->pc = 0x281C1Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294951672));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281C20u; }
    }
    if (ctx->pc != 0x281C20u) { return; }
    ctx->pc = 0x281C20u;
label_281c20:
    // 0x281c20: 0x8e043ac8
    ctx->pc = 0x281c20u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 15048)));
label_281c24:
    // 0x281c24: 0x8ec53acc
    ctx->pc = 0x281c24u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 15052)));
label_281c28:
    // 0x281c28: 0x8ea63abc
    ctx->pc = 0x281c28u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 15036)));
label_281c2c:
    // 0x281c2c: 0x8e473ac4
    ctx->pc = 0x281c2cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 15044)));
label_281c30:
    // 0x281c30: 0xc68c3ac0
    ctx->pc = 0x281c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 15040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_281c34:
    // 0x281c34: 0xc080510
label_281c38:
    if (ctx->pc == 0x281C38u) {
        ctx->pc = 0x281C38u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x281C3Cu;
        goto label_281c3c;
    }
    ctx->pc = 0x281C34u;
    SET_GPR_U32(ctx, 31, 0x281C3Cu);
    ctx->pc = 0x281C38u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281C3Cu; }
    }
    if (ctx->pc != 0x281C3Cu) { return; }
    ctx->pc = 0x281C3Cu;
label_281c3c:
    // 0x281c3c: 0x40182d
    ctx->pc = 0x281c3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_281c40:
    // 0x281c40: 0x8c620000
    ctx->pc = 0x281c40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_281c44:
    // 0x281c44: 0x3c040004
    ctx->pc = 0x281c44u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4 << 16));
label_281c48:
    // 0x281c48: 0x441025
    ctx->pc = 0x281c48u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_281c4c:
    // 0x281c4c: 0xac620000
    ctx->pc = 0x281c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_281c50:
    // 0x281c50: 0x27a40010
    ctx->pc = 0x281c50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
label_281c54:
    // 0x281c54: 0x8ea53abc
    ctx->pc = 0x281c54u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 15036)));
label_281c58:
    // 0x281c58: 0xc080552
label_281c5c:
    if (ctx->pc == 0x281C5Cu) {
        ctx->pc = 0x281C5Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 15040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x281C60u;
        goto label_281c60;
    }
    ctx->pc = 0x281C58u;
    SET_GPR_U32(ctx, 31, 0x281C60u);
    ctx->pc = 0x281C5Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 15040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x201548u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontStringWidth_0x201548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281C60u; }
    }
    if (ctx->pc != 0x281C60u) { return; }
    ctx->pc = 0x281C60u;
label_281c60:
    // 0x281c60: 0x8e033ac8
    ctx->pc = 0x281c60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 15048)));
label_281c64:
    // 0x281c64: 0x431021
    ctx->pc = 0x281c64u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_281c68:
    // 0x281c68: 0xae023ac8
    ctx->pc = 0x281c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15048), GPR_U32(ctx, 2));
label_281c6c:
    // 0x281c6c: 0x3c030035
    ctx->pc = 0x281c6cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_281c70:
    // 0x281c70: 0x8c629b90
    ctx->pc = 0x281c70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294941584)));
label_281c74:
    // 0x281c74: 0x3403ff00
    ctx->pc = 0x281c74u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 65280));
label_281c78:
    // 0x281c78: 0x2621026
    ctx->pc = 0x281c78u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_281c7c:
    // 0x281c7c: 0x3c0400ff
    ctx->pc = 0x281c7cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
label_281c80:
    // 0x281c80: 0x348400ff
    ctx->pc = 0x281c80u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 255));
label_281c84:
    // 0x281c84: 0x82180a
    ctx->pc = 0x281c84u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
label_281c88:
    // 0x281c88: 0xaee33ac4
    ctx->pc = 0x281c88u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 15044), GPR_U32(ctx, 3));
label_281c8c:
    // 0x281c8c: 0x8e230004
    ctx->pc = 0x281c8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_281c90:
    // 0x281c90: 0x50600026
label_281c94:
    if (ctx->pc == 0x281C94u) {
        ctx->pc = 0x281C94u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->pc = 0x281C98u;
        goto label_281c98;
    }
    ctx->pc = 0x281C90u;
    {
        const bool branch_taken_0x281c90 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x281c90) {
            ctx->pc = 0x281C94u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->pc = 0x281D2Cu;
            goto label_281d2c;
        }
    }
    ctx->pc = 0x281C98u;
label_281c98:
    // 0x281c98: 0x8e22002c
    ctx->pc = 0x281c98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_281c9c:
    // 0x281c9c: 0x50400023
label_281ca0:
    if (ctx->pc == 0x281CA0u) {
        ctx->pc = 0x281CA0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->pc = 0x281CA4u;
        goto label_281ca4;
    }
    ctx->pc = 0x281C9Cu;
    {
        const bool branch_taken_0x281c9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x281c9c) {
            ctx->pc = 0x281CA0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->pc = 0x281D2Cu;
            goto label_281d2c;
        }
    }
    ctx->pc = 0x281CA4u;
label_281ca4:
    // 0x281ca4: 0x8c440000
    ctx->pc = 0x281ca4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_281ca8:
    // 0x281ca8: 0x4800004
label_281cac:
    if (ctx->pc == 0x281CACu) {
        ctx->pc = 0x281CACu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->pc = 0x281CB0u;
        goto label_281cb0;
    }
    ctx->pc = 0x281CA8u;
    {
        const bool branch_taken_0x281ca8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x281CACu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
        if (branch_taken_0x281ca8) {
            ctx->pc = 0x281CBCu;
            goto label_281cbc;
        }
    }
    ctx->pc = 0x281CB0u;
label_281cb0:
    // 0x281cb0: 0x64102a
    ctx->pc = 0x281cb0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
label_281cb4:
    // 0x281cb4: 0x10000002
label_281cb8:
    if (ctx->pc == 0x281CB8u) {
        ctx->pc = 0x281CB8u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
        ctx->pc = 0x281CBCu;
        goto label_281cbc;
    }
    ctx->pc = 0x281CB4u;
    {
        const bool branch_taken_0x281cb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x281CB8u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
        if (branch_taken_0x281cb4) {
            ctx->pc = 0x281CC0u;
            goto label_281cc0;
        }
    }
    ctx->pc = 0x281CBCu;
label_281cbc:
    // 0x281cbc: 0x182d
    ctx->pc = 0x281cbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281cc0:
    // 0x281cc0: 0x10640002
label_281cc4:
    if (ctx->pc == 0x281CC4u) {
        ctx->pc = 0x281CC4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)255 << 16));
        ctx->pc = 0x281CC8u;
        goto label_281cc8;
    }
    ctx->pc = 0x281CC0u;
    {
        const bool branch_taken_0x281cc0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x281CC4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)255 << 16));
        if (branch_taken_0x281cc0) {
            ctx->pc = 0x281CCCu;
            goto label_281ccc;
        }
    }
    ctx->pc = 0x281CC8u;
label_281cc8:
    // 0x281cc8: 0xaee23ac4
    ctx->pc = 0x281cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 15044), GPR_U32(ctx, 2));
label_281ccc:
    // 0x281ccc: 0x41080
    ctx->pc = 0x281cccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
label_281cd0:
    // 0x281cd0: 0x26300008
    ctx->pc = 0x281cd0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 8));
label_281cd4:
    // 0x281cd4: 0x2028021
    ctx->pc = 0x281cd4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_281cd8:
    // 0x281cd8: 0x8fc43ac8
    ctx->pc = 0x281cd8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 15048)));
label_281cdc:
    // 0x281cdc: 0x8ec53acc
    ctx->pc = 0x281cdcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 15052)));
label_281ce0:
    // 0x281ce0: 0x8ea63abc
    ctx->pc = 0x281ce0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 15036)));
label_281ce4:
    // 0x281ce4: 0x8ee73ac4
    ctx->pc = 0x281ce4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 23), 15044)));
label_281ce8:
    // 0x281ce8: 0xc68c3ac0
    ctx->pc = 0x281ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 15040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_281cec:
    // 0x281cec: 0xc080510
label_281cf0:
    if (ctx->pc == 0x281CF0u) {
        ctx->pc = 0x281CF0u;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x281CF4u;
        goto label_281cf4;
    }
    ctx->pc = 0x281CECu;
    SET_GPR_U32(ctx, 31, 0x281CF4u);
    ctx->pc = 0x281CF0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281CF4u; }
    }
    if (ctx->pc != 0x281CF4u) { return; }
    ctx->pc = 0x281CF4u;
label_281cf4:
    // 0x281cf4: 0x40182d
    ctx->pc = 0x281cf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_281cf8:
    // 0x281cf8: 0x8c620000
    ctx->pc = 0x281cf8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_281cfc:
    // 0x281cfc: 0x3c040004
    ctx->pc = 0x281cfcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)4 << 16));
label_281d00:
    // 0x281d00: 0x441025
    ctx->pc = 0x281d00u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_281d04:
    // 0x281d04: 0xac620000
    ctx->pc = 0x281d04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_281d08:
    // 0x281d08: 0x8e040000
    ctx->pc = 0x281d08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_281d0c:
    // 0x281d0c: 0x8ea53abc
    ctx->pc = 0x281d0cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 15036)));
label_281d10:
    // 0x281d10: 0xc080552
label_281d14:
    if (ctx->pc == 0x281D14u) {
        ctx->pc = 0x281D14u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 15040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x281D18u;
        goto label_281d18;
    }
    ctx->pc = 0x281D10u;
    SET_GPR_U32(ctx, 31, 0x281D18u);
    ctx->pc = 0x281D14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 15040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x201548u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontStringWidth_0x201548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281D18u; }
    }
    if (ctx->pc != 0x281D18u) { return; }
    ctx->pc = 0x281D18u;
label_281d18:
    // 0x281d18: 0x8fc33ac8
    ctx->pc = 0x281d18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 15048)));
label_281d1c:
    // 0x281d1c: 0x431021
    ctx->pc = 0x281d1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_281d20:
    // 0x281d20: 0x2442000c
    ctx->pc = 0x281d20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12));
label_281d24:
    // 0x281d24: 0xafc23ac8
    ctx->pc = 0x281d24u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 15048), GPR_U32(ctx, 2));
label_281d28:
    // 0x281d28: 0x8e230028
    ctx->pc = 0x281d28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_281d2c:
    // 0x281d2c: 0x1060000c
label_281d30:
    if (ctx->pc == 0x281D30u) {
        ctx->pc = 0x281D30u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        ctx->pc = 0x281D34u;
        goto label_281d34;
    }
    ctx->pc = 0x281D2Cu;
    {
        const bool branch_taken_0x281d2c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x281D30u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x281d2c) {
            ctx->pc = 0x281D60u;
            goto label_281d60;
        }
    }
    ctx->pc = 0x281D34u;
label_281d34:
    // 0x281d34: 0x8c469b90
    ctx->pc = 0x281d34u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294941584)));
label_281d38:
    // 0x281d38: 0x2663026
    ctx->pc = 0x281d38u;
    SET_GPR_U32(ctx, 6, XOR32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
label_281d3c:
    // 0x281d3c: 0x3402ff00
    ctx->pc = 0x281d3cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65280));
label_281d40:
    // 0x281d40: 0x3c0400ff
    ctx->pc = 0x281d40u;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
label_281d44:
    // 0x281d44: 0x348400ff
    ctx->pc = 0x281d44u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 255));
label_281d48:
    // 0x281d48: 0x86100a
    ctx->pc = 0x281d48u;
    if (GPR_U32(ctx, 6) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
label_281d4c:
    // 0x281d4c: 0xaee23ac4
    ctx->pc = 0x281d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 15044), GPR_U32(ctx, 2));
label_281d50:
    // 0x281d50: 0x8e24002c
    ctx->pc = 0x281d50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_281d54:
    // 0x281d54: 0x282d
    ctx->pc = 0x281d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281d58:
    // 0x281d58: 0x60f809
label_281d5c:
    if (ctx->pc == 0x281D5Cu) {
        ctx->pc = 0x281D5Cu;
        SET_GPR_U32(ctx, 6, SLTU32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x281D60u;
        goto label_281d60;
    }
    ctx->pc = 0x281D58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x281D60u);
        ctx->pc = 0x281D5Cu;
        SET_GPR_U32(ctx, 6, SLTU32(GPR_U32(ctx, 6), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x281B38u: goto label_281b38;
            case 0x281B3Cu: goto label_281b3c;
            case 0x281B40u: goto label_281b40;
            case 0x281B44u: goto label_281b44;
            case 0x281B48u: goto label_281b48;
            case 0x281B4Cu: goto label_281b4c;
            case 0x281B50u: goto label_281b50;
            case 0x281B54u: goto label_281b54;
            case 0x281B58u: goto label_281b58;
            case 0x281B5Cu: goto label_281b5c;
            case 0x281B60u: goto label_281b60;
            case 0x281B64u: goto label_281b64;
            case 0x281B68u: goto label_281b68;
            case 0x281B6Cu: goto label_281b6c;
            case 0x281B70u: goto label_281b70;
            case 0x281B74u: goto label_281b74;
            case 0x281B78u: goto label_281b78;
            case 0x281B7Cu: goto label_281b7c;
            case 0x281B80u: goto label_281b80;
            case 0x281B84u: goto label_281b84;
            case 0x281B88u: goto label_281b88;
            case 0x281B8Cu: goto label_281b8c;
            case 0x281B90u: goto label_281b90;
            case 0x281B94u: goto label_281b94;
            case 0x281B98u: goto label_281b98;
            case 0x281B9Cu: goto label_281b9c;
            case 0x281BA0u: goto label_281ba0;
            case 0x281BA4u: goto label_281ba4;
            case 0x281BA8u: goto label_281ba8;
            case 0x281BACu: goto label_281bac;
            case 0x281BB0u: goto label_281bb0;
            case 0x281BB4u: goto label_281bb4;
            case 0x281BB8u: goto label_281bb8;
            case 0x281BBCu: goto label_281bbc;
            case 0x281BC0u: goto label_281bc0;
            case 0x281BC4u: goto label_281bc4;
            case 0x281BC8u: goto label_281bc8;
            case 0x281BCCu: goto label_281bcc;
            case 0x281BD0u: goto label_281bd0;
            case 0x281BD4u: goto label_281bd4;
            case 0x281BD8u: goto label_281bd8;
            case 0x281BDCu: goto label_281bdc;
            case 0x281BE0u: goto label_281be0;
            case 0x281BE4u: goto label_281be4;
            case 0x281BE8u: goto label_281be8;
            case 0x281BECu: goto label_281bec;
            case 0x281BF0u: goto label_281bf0;
            case 0x281BF4u: goto label_281bf4;
            case 0x281BF8u: goto label_281bf8;
            case 0x281BFCu: goto label_281bfc;
            case 0x281C00u: goto label_281c00;
            case 0x281C04u: goto label_281c04;
            case 0x281C08u: goto label_281c08;
            case 0x281C0Cu: goto label_281c0c;
            case 0x281C10u: goto label_281c10;
            case 0x281C14u: goto label_281c14;
            case 0x281C18u: goto label_281c18;
            case 0x281C1Cu: goto label_281c1c;
            case 0x281C20u: goto label_281c20;
            case 0x281C24u: goto label_281c24;
            case 0x281C28u: goto label_281c28;
            case 0x281C2Cu: goto label_281c2c;
            case 0x281C30u: goto label_281c30;
            case 0x281C34u: goto label_281c34;
            case 0x281C38u: goto label_281c38;
            case 0x281C3Cu: goto label_281c3c;
            case 0x281C40u: goto label_281c40;
            case 0x281C44u: goto label_281c44;
            case 0x281C48u: goto label_281c48;
            case 0x281C4Cu: goto label_281c4c;
            case 0x281C50u: goto label_281c50;
            case 0x281C54u: goto label_281c54;
            case 0x281C58u: goto label_281c58;
            case 0x281C5Cu: goto label_281c5c;
            case 0x281C60u: goto label_281c60;
            case 0x281C64u: goto label_281c64;
            case 0x281C68u: goto label_281c68;
            case 0x281C6Cu: goto label_281c6c;
            case 0x281C70u: goto label_281c70;
            case 0x281C74u: goto label_281c74;
            case 0x281C78u: goto label_281c78;
            case 0x281C7Cu: goto label_281c7c;
            case 0x281C80u: goto label_281c80;
            case 0x281C84u: goto label_281c84;
            case 0x281C88u: goto label_281c88;
            case 0x281C8Cu: goto label_281c8c;
            case 0x281C90u: goto label_281c90;
            case 0x281C94u: goto label_281c94;
            case 0x281C98u: goto label_281c98;
            case 0x281C9Cu: goto label_281c9c;
            case 0x281CA0u: goto label_281ca0;
            case 0x281CA4u: goto label_281ca4;
            case 0x281CA8u: goto label_281ca8;
            case 0x281CACu: goto label_281cac;
            case 0x281CB0u: goto label_281cb0;
            case 0x281CB4u: goto label_281cb4;
            case 0x281CB8u: goto label_281cb8;
            case 0x281CBCu: goto label_281cbc;
            case 0x281CC0u: goto label_281cc0;
            case 0x281CC4u: goto label_281cc4;
            case 0x281CC8u: goto label_281cc8;
            case 0x281CCCu: goto label_281ccc;
            case 0x281CD0u: goto label_281cd0;
            case 0x281CD4u: goto label_281cd4;
            case 0x281CD8u: goto label_281cd8;
            case 0x281CDCu: goto label_281cdc;
            case 0x281CE0u: goto label_281ce0;
            case 0x281CE4u: goto label_281ce4;
            case 0x281CE8u: goto label_281ce8;
            case 0x281CECu: goto label_281cec;
            case 0x281CF0u: goto label_281cf0;
            case 0x281CF4u: goto label_281cf4;
            case 0x281CF8u: goto label_281cf8;
            case 0x281CFCu: goto label_281cfc;
            case 0x281D00u: goto label_281d00;
            case 0x281D04u: goto label_281d04;
            case 0x281D08u: goto label_281d08;
            case 0x281D0Cu: goto label_281d0c;
            case 0x281D10u: goto label_281d10;
            case 0x281D14u: goto label_281d14;
            case 0x281D18u: goto label_281d18;
            case 0x281D1Cu: goto label_281d1c;
            case 0x281D20u: goto label_281d20;
            case 0x281D24u: goto label_281d24;
            case 0x281D28u: goto label_281d28;
            case 0x281D2Cu: goto label_281d2c;
            case 0x281D30u: goto label_281d30;
            case 0x281D34u: goto label_281d34;
            case 0x281D38u: goto label_281d38;
            case 0x281D3Cu: goto label_281d3c;
            case 0x281D40u: goto label_281d40;
            case 0x281D44u: goto label_281d44;
            case 0x281D48u: goto label_281d48;
            case 0x281D4Cu: goto label_281d4c;
            case 0x281D50u: goto label_281d50;
            case 0x281D54u: goto label_281d54;
            case 0x281D58u: goto label_281d58;
            case 0x281D5Cu: goto label_281d5c;
            case 0x281D60u: goto label_281d60;
            case 0x281D64u: goto label_281d64;
            case 0x281D68u: goto label_281d68;
            case 0x281D6Cu: goto label_281d6c;
            case 0x281D70u: goto label_281d70;
            case 0x281D74u: goto label_281d74;
            case 0x281D78u: goto label_281d78;
            case 0x281D7Cu: goto label_281d7c;
            case 0x281D80u: goto label_281d80;
            case 0x281D84u: goto label_281d84;
            case 0x281D88u: goto label_281d88;
            case 0x281D8Cu: goto label_281d8c;
            case 0x281D90u: goto label_281d90;
            case 0x281D94u: goto label_281d94;
            case 0x281D98u: goto label_281d98;
            case 0x281D9Cu: goto label_281d9c;
            case 0x281DA0u: goto label_281da0;
            case 0x281DA4u: goto label_281da4;
            case 0x281DA8u: goto label_281da8;
            case 0x281DACu: goto label_281dac;
            case 0x281DB0u: goto label_281db0;
            case 0x281DB4u: goto label_281db4;
            case 0x281DB8u: goto label_281db8;
            case 0x281DBCu: goto label_281dbc;
            case 0x281DC0u: goto label_281dc0;
            case 0x281DC4u: goto label_281dc4;
            case 0x281DC8u: goto label_281dc8;
            case 0x281DCCu: goto label_281dcc;
            case 0x281DD0u: goto label_281dd0;
            case 0x281DD4u: goto label_281dd4;
            case 0x281DD8u: goto label_281dd8;
            case 0x281DDCu: goto label_281ddc;
            case 0x281DE0u: goto label_281de0;
            case 0x281DE4u: goto label_281de4;
            case 0x281DE8u: goto label_281de8;
            case 0x281DECu: goto label_281dec;
            case 0x281DF0u: goto label_281df0;
            case 0x281DF4u: goto label_281df4;
            case 0x281DF8u: goto label_281df8;
            case 0x281DFCu: goto label_281dfc;
            case 0x281E00u: goto label_281e00;
            case 0x281E04u: goto label_281e04;
            case 0x281E08u: goto label_281e08;
            case 0x281E0Cu: goto label_281e0c;
            case 0x281E10u: goto label_281e10;
            case 0x281E14u: goto label_281e14;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x281D60u; }
            if (ctx->pc != 0x281D60u) { return; }
        }
    }
    ctx->pc = 0x281D60u;
label_281d60:
    // 0x281d60: 0x8ea43abc
    ctx->pc = 0x281d60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 15036)));
label_281d64:
    // 0x281d64: 0xc080570
label_281d68:
    if (ctx->pc == 0x281D68u) {
        ctx->pc = 0x281D68u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 15040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x281D6Cu;
        goto label_281d6c;
    }
    ctx->pc = 0x281D64u;
    SET_GPR_U32(ctx, 31, 0x281D6Cu);
    ctx->pc = 0x281D68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 15040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2015C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontHeight_0x2015c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281D6Cu; }
    }
    if (ctx->pc != 0x281D6Cu) { return; }
    ctx->pc = 0x281D6Cu;
label_281d6c:
    // 0x281d6c: 0x8ec33acc
    ctx->pc = 0x281d6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 15052)));
label_281d70:
    // 0x281d70: 0x431021
    ctx->pc = 0x281d70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_281d74:
    // 0x281d74: 0xaec23acc
    ctx->pc = 0x281d74u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 15052), GPR_U32(ctx, 2));
label_281d78:
    // 0x281d78: 0x26730001
    ctx->pc = 0x281d78u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_281d7c:
    // 0x281d7c: 0x2e620018
    ctx->pc = 0x281d7cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), 24));
label_281d80:
    // 0x281d80: 0x1440ff8d
label_281d84:
    if (ctx->pc == 0x281D84u) {
        ctx->pc = 0x281D84u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x281D88u;
        goto label_281d88;
    }
    ctx->pc = 0x281D80u;
    {
        const bool branch_taken_0x281d80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x281D84u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x281d80) {
            ctx->pc = 0x281BB8u;
            goto label_281bb8;
        }
    }
    ctx->pc = 0x281D88u;
label_281d88:
    // 0x281d88: 0x27a40050
    ctx->pc = 0x281d88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
label_281d8c:
    // 0x281d8c: 0x27a50054
    ctx->pc = 0x281d8cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 84));
label_281d90:
    // 0x281d90: 0x27a60058
    ctx->pc = 0x281d90u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 88));
label_281d94:
    // 0x281d94: 0x27a7005c
    ctx->pc = 0x281d94u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 92));
label_281d98:
    // 0x281d98: 0x402d
    ctx->pc = 0x281d98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281d9c:
    // 0x281d9c: 0xc0885b8
label_281da0:
    if (ctx->pc == 0x281DA0u) {
        ctx->pc = 0x281DA0u;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x281DA4u;
        goto label_281da4;
    }
    ctx->pc = 0x281D9Cu;
    SET_GPR_U32(ctx, 31, 0x281DA4u);
    ctx->pc = 0x281DA0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2216E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioMemUsage_0x2216e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281DA4u; }
    }
    if (ctx->pc != 0x281DA4u) { return; }
    ctx->pc = 0x281DA4u;
label_281da4:
    // 0x281da4: 0x8fa90050
    ctx->pc = 0x281da4u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_281da8:
    // 0x281da8: 0x8faa0054
    ctx->pc = 0x281da8u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_281dac:
    // 0x281dac: 0x8fab0058
    ctx->pc = 0x281dacu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_281db0:
    // 0x281db0: 0x8fa2005c
    ctx->pc = 0x281db0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_281db4:
    // 0x281db4: 0x21283
    ctx->pc = 0x281db4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
label_281db8:
    // 0x281db8: 0xafa20000
    ctx->pc = 0x281db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_281dbc:
    // 0x281dbc: 0x24040080
    ctx->pc = 0x281dbcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 128));
label_281dc0:
    // 0x281dc0: 0x24050014
    ctx->pc = 0x281dc0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 20));
label_281dc4:
    // 0x281dc4: 0x302d
    ctx->pc = 0x281dc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281dc8:
    // 0x281dc8: 0x3c0700ff
    ctx->pc = 0x281dc8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
label_281dcc:
    // 0x281dcc: 0x34e7ffff
    ctx->pc = 0x281dccu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
label_281dd0:
    // 0x281dd0: 0x3c08003b
    ctx->pc = 0x281dd0u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
label_281dd4:
    // 0x281dd4: 0x2508c300
    ctx->pc = 0x281dd4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294951680));
label_281dd8:
    // 0x281dd8: 0x94a83
    ctx->pc = 0x281dd8u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 10));
label_281ddc:
    // 0x281ddc: 0xa5283
    ctx->pc = 0x281ddcu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 10));
label_281de0:
    // 0x281de0: 0xc0804c8
label_281de4:
    if (ctx->pc == 0x281DE4u) {
        ctx->pc = 0x281DE4u;
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 10));
        ctx->pc = 0x281DE8u;
        goto label_281de8;
    }
    ctx->pc = 0x281DE0u;
    SET_GPR_U32(ctx, 31, 0x281DE8u);
    ctx->pc = 0x281DE4u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 10));
    ctx->pc = 0x201320u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawText_0x201320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281DE8u; }
    }
    if (ctx->pc != 0x281DE8u) { return; }
    ctx->pc = 0x281DE8u;
label_281de8:
    // 0x281de8: 0xdfbf00f0
    ctx->pc = 0x281de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_281dec:
    // 0x281dec: 0xdfbe00e0
    ctx->pc = 0x281decu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_281df0:
    // 0x281df0: 0xdfb700d0
    ctx->pc = 0x281df0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_281df4:
    // 0x281df4: 0xdfb600c0
    ctx->pc = 0x281df4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_281df8:
    // 0x281df8: 0xdfb500b0
    ctx->pc = 0x281df8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_281dfc:
    // 0x281dfc: 0xdfb400a0
    ctx->pc = 0x281dfcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_281e00:
    // 0x281e00: 0xdfb30090
    ctx->pc = 0x281e00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_281e04:
    // 0x281e04: 0xdfb20080
    ctx->pc = 0x281e04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_281e08:
    // 0x281e08: 0xdfb10070
    ctx->pc = 0x281e08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_281e0c:
    // 0x281e0c: 0xdfb00060
    ctx->pc = 0x281e0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_281e10:
    // 0x281e10: 0x3e00008
label_281e14:
    if (ctx->pc == 0x281E14u) {
        ctx->pc = 0x281E14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x281E18u;
        goto label_fallthrough_0x281e10;
    }
    ctx->pc = 0x281E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281E14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x281B38u: goto label_281b38;
            case 0x281B3Cu: goto label_281b3c;
            case 0x281B40u: goto label_281b40;
            case 0x281B44u: goto label_281b44;
            case 0x281B48u: goto label_281b48;
            case 0x281B4Cu: goto label_281b4c;
            case 0x281B50u: goto label_281b50;
            case 0x281B54u: goto label_281b54;
            case 0x281B58u: goto label_281b58;
            case 0x281B5Cu: goto label_281b5c;
            case 0x281B60u: goto label_281b60;
            case 0x281B64u: goto label_281b64;
            case 0x281B68u: goto label_281b68;
            case 0x281B6Cu: goto label_281b6c;
            case 0x281B70u: goto label_281b70;
            case 0x281B74u: goto label_281b74;
            case 0x281B78u: goto label_281b78;
            case 0x281B7Cu: goto label_281b7c;
            case 0x281B80u: goto label_281b80;
            case 0x281B84u: goto label_281b84;
            case 0x281B88u: goto label_281b88;
            case 0x281B8Cu: goto label_281b8c;
            case 0x281B90u: goto label_281b90;
            case 0x281B94u: goto label_281b94;
            case 0x281B98u: goto label_281b98;
            case 0x281B9Cu: goto label_281b9c;
            case 0x281BA0u: goto label_281ba0;
            case 0x281BA4u: goto label_281ba4;
            case 0x281BA8u: goto label_281ba8;
            case 0x281BACu: goto label_281bac;
            case 0x281BB0u: goto label_281bb0;
            case 0x281BB4u: goto label_281bb4;
            case 0x281BB8u: goto label_281bb8;
            case 0x281BBCu: goto label_281bbc;
            case 0x281BC0u: goto label_281bc0;
            case 0x281BC4u: goto label_281bc4;
            case 0x281BC8u: goto label_281bc8;
            case 0x281BCCu: goto label_281bcc;
            case 0x281BD0u: goto label_281bd0;
            case 0x281BD4u: goto label_281bd4;
            case 0x281BD8u: goto label_281bd8;
            case 0x281BDCu: goto label_281bdc;
            case 0x281BE0u: goto label_281be0;
            case 0x281BE4u: goto label_281be4;
            case 0x281BE8u: goto label_281be8;
            case 0x281BECu: goto label_281bec;
            case 0x281BF0u: goto label_281bf0;
            case 0x281BF4u: goto label_281bf4;
            case 0x281BF8u: goto label_281bf8;
            case 0x281BFCu: goto label_281bfc;
            case 0x281C00u: goto label_281c00;
            case 0x281C04u: goto label_281c04;
            case 0x281C08u: goto label_281c08;
            case 0x281C0Cu: goto label_281c0c;
            case 0x281C10u: goto label_281c10;
            case 0x281C14u: goto label_281c14;
            case 0x281C18u: goto label_281c18;
            case 0x281C1Cu: goto label_281c1c;
            case 0x281C20u: goto label_281c20;
            case 0x281C24u: goto label_281c24;
            case 0x281C28u: goto label_281c28;
            case 0x281C2Cu: goto label_281c2c;
            case 0x281C30u: goto label_281c30;
            case 0x281C34u: goto label_281c34;
            case 0x281C38u: goto label_281c38;
            case 0x281C3Cu: goto label_281c3c;
            case 0x281C40u: goto label_281c40;
            case 0x281C44u: goto label_281c44;
            case 0x281C48u: goto label_281c48;
            case 0x281C4Cu: goto label_281c4c;
            case 0x281C50u: goto label_281c50;
            case 0x281C54u: goto label_281c54;
            case 0x281C58u: goto label_281c58;
            case 0x281C5Cu: goto label_281c5c;
            case 0x281C60u: goto label_281c60;
            case 0x281C64u: goto label_281c64;
            case 0x281C68u: goto label_281c68;
            case 0x281C6Cu: goto label_281c6c;
            case 0x281C70u: goto label_281c70;
            case 0x281C74u: goto label_281c74;
            case 0x281C78u: goto label_281c78;
            case 0x281C7Cu: goto label_281c7c;
            case 0x281C80u: goto label_281c80;
            case 0x281C84u: goto label_281c84;
            case 0x281C88u: goto label_281c88;
            case 0x281C8Cu: goto label_281c8c;
            case 0x281C90u: goto label_281c90;
            case 0x281C94u: goto label_281c94;
            case 0x281C98u: goto label_281c98;
            case 0x281C9Cu: goto label_281c9c;
            case 0x281CA0u: goto label_281ca0;
            case 0x281CA4u: goto label_281ca4;
            case 0x281CA8u: goto label_281ca8;
            case 0x281CACu: goto label_281cac;
            case 0x281CB0u: goto label_281cb0;
            case 0x281CB4u: goto label_281cb4;
            case 0x281CB8u: goto label_281cb8;
            case 0x281CBCu: goto label_281cbc;
            case 0x281CC0u: goto label_281cc0;
            case 0x281CC4u: goto label_281cc4;
            case 0x281CC8u: goto label_281cc8;
            case 0x281CCCu: goto label_281ccc;
            case 0x281CD0u: goto label_281cd0;
            case 0x281CD4u: goto label_281cd4;
            case 0x281CD8u: goto label_281cd8;
            case 0x281CDCu: goto label_281cdc;
            case 0x281CE0u: goto label_281ce0;
            case 0x281CE4u: goto label_281ce4;
            case 0x281CE8u: goto label_281ce8;
            case 0x281CECu: goto label_281cec;
            case 0x281CF0u: goto label_281cf0;
            case 0x281CF4u: goto label_281cf4;
            case 0x281CF8u: goto label_281cf8;
            case 0x281CFCu: goto label_281cfc;
            case 0x281D00u: goto label_281d00;
            case 0x281D04u: goto label_281d04;
            case 0x281D08u: goto label_281d08;
            case 0x281D0Cu: goto label_281d0c;
            case 0x281D10u: goto label_281d10;
            case 0x281D14u: goto label_281d14;
            case 0x281D18u: goto label_281d18;
            case 0x281D1Cu: goto label_281d1c;
            case 0x281D20u: goto label_281d20;
            case 0x281D24u: goto label_281d24;
            case 0x281D28u: goto label_281d28;
            case 0x281D2Cu: goto label_281d2c;
            case 0x281D30u: goto label_281d30;
            case 0x281D34u: goto label_281d34;
            case 0x281D38u: goto label_281d38;
            case 0x281D3Cu: goto label_281d3c;
            case 0x281D40u: goto label_281d40;
            case 0x281D44u: goto label_281d44;
            case 0x281D48u: goto label_281d48;
            case 0x281D4Cu: goto label_281d4c;
            case 0x281D50u: goto label_281d50;
            case 0x281D54u: goto label_281d54;
            case 0x281D58u: goto label_281d58;
            case 0x281D5Cu: goto label_281d5c;
            case 0x281D60u: goto label_281d60;
            case 0x281D64u: goto label_281d64;
            case 0x281D68u: goto label_281d68;
            case 0x281D6Cu: goto label_281d6c;
            case 0x281D70u: goto label_281d70;
            case 0x281D74u: goto label_281d74;
            case 0x281D78u: goto label_281d78;
            case 0x281D7Cu: goto label_281d7c;
            case 0x281D80u: goto label_281d80;
            case 0x281D84u: goto label_281d84;
            case 0x281D88u: goto label_281d88;
            case 0x281D8Cu: goto label_281d8c;
            case 0x281D90u: goto label_281d90;
            case 0x281D94u: goto label_281d94;
            case 0x281D98u: goto label_281d98;
            case 0x281D9Cu: goto label_281d9c;
            case 0x281DA0u: goto label_281da0;
            case 0x281DA4u: goto label_281da4;
            case 0x281DA8u: goto label_281da8;
            case 0x281DACu: goto label_281dac;
            case 0x281DB0u: goto label_281db0;
            case 0x281DB4u: goto label_281db4;
            case 0x281DB8u: goto label_281db8;
            case 0x281DBCu: goto label_281dbc;
            case 0x281DC0u: goto label_281dc0;
            case 0x281DC4u: goto label_281dc4;
            case 0x281DC8u: goto label_281dc8;
            case 0x281DCCu: goto label_281dcc;
            case 0x281DD0u: goto label_281dd0;
            case 0x281DD4u: goto label_281dd4;
            case 0x281DD8u: goto label_281dd8;
            case 0x281DDCu: goto label_281ddc;
            case 0x281DE0u: goto label_281de0;
            case 0x281DE4u: goto label_281de4;
            case 0x281DE8u: goto label_281de8;
            case 0x281DECu: goto label_281dec;
            case 0x281DF0u: goto label_281df0;
            case 0x281DF4u: goto label_281df4;
            case 0x281DF8u: goto label_281df8;
            case 0x281DFCu: goto label_281dfc;
            case 0x281E00u: goto label_281e00;
            case 0x281E04u: goto label_281e04;
            case 0x281E08u: goto label_281e08;
            case 0x281E0Cu: goto label_281e0c;
            case 0x281E10u: goto label_281e10;
            case 0x281E14u: goto label_281e14;
            default: break;
        }
        return;
    }
label_fallthrough_0x281e10:
    ctx->pc = 0x281E18u;
}
