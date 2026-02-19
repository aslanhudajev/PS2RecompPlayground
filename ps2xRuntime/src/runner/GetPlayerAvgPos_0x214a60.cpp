#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetPlayerAvgPos
// Address: 0x214a60 - 0x214d50
void GetPlayerAvgPos_0x214a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x214a60u;

    // 0x214a60: 0x27bdffe0
    ctx->pc = 0x214a60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x214a64: 0x80502d
    ctx->pc = 0x214a64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214a68: 0x44801000
    ctx->pc = 0x214a68u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x214a6c: 0xe5420000
    ctx->pc = 0x214a6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x214a70: 0xe5420004
    ctx->pc = 0x214a70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x214a74: 0xe5420008
    ctx->pc = 0x214a74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x214a78: 0x3c01e0ad
    ctx->pc = 0x214a78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)57517 << 16));
    // 0x214a7c: 0x342178ec
    ctx->pc = 0x214a7cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 30956));
    // 0x214a80: 0x44810000
    ctx->pc = 0x214a80u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x214a84: 0xe7a00010
    ctx->pc = 0x214a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x214a88: 0xe7a00014
    ctx->pc = 0x214a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x214a8c: 0xe7a00018
    ctx->pc = 0x214a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x214a90: 0x3c0160ad
    ctx->pc = 0x214a90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)24749 << 16));
    // 0x214a94: 0x342178ec
    ctx->pc = 0x214a94u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 30956));
    // 0x214a98: 0x44810000
    ctx->pc = 0x214a98u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x214a9c: 0xe7a00000
    ctx->pc = 0x214a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x214aa0: 0xe7a00004
    ctx->pc = 0x214aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x214aa4: 0xe7a00008
    ctx->pc = 0x214aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x214aa8: 0x582d
    ctx->pc = 0x214aa8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214aac: 0x240d2b00
    ctx->pc = 0x214aacu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x214ab0: 0x3c020032
    ctx->pc = 0x214ab0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x214ab4: 0x244e1bc0
    ctx->pc = 0x214ab4u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x214ab8: 0x240c0001
    ctx->pc = 0x214ab8u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 1));
    // 0x214abc: 0x3c013f80
    ctx->pc = 0x214abcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x214ac0: 0x44811800
    ctx->pc = 0x214ac0u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x214ac4: 0x16d1018
    ctx->pc = 0x214ac4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_214ac8:
    // 0x214ac8: 0x4e2021
    ctx->pc = 0x214ac8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x214acc: 0x8c8200fc
    ctx->pc = 0x214accu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x214ad0: 0x544c0036
    ctx->pc = 0x214AD0u;
    {
        const bool branch_taken_0x214ad0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 12));
        if (branch_taken_0x214ad0) {
            ctx->pc = 0x214AD4u;
            SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 1));
            ctx->pc = 0x214BACu;
            goto label_214bac;
        }
    }
    ctx->pc = 0x214AD8u;
    // 0x214ad8: 0x9483093c
    ctx->pc = 0x214ad8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2364)));
    // 0x214adc: 0x30630020
    ctx->pc = 0x214adcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 32));
    // 0x214ae0: 0x24880060
    ctx->pc = 0x214ae0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 4), 96));
    // 0x214ae4: 0x248200f0
    ctx->pc = 0x214ae4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 240));
    // 0x214ae8: 0x14e0000e
    ctx->pc = 0x214AE8u;
    {
        const bool branch_taken_0x214ae8 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x214AECu;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 8, GPR_U32(ctx, 2));
        if (branch_taken_0x214ae8) {
            ctx->pc = 0x214B24u;
            goto label_214b24;
        }
    }
    ctx->pc = 0x214AF0u;
    // 0x214af0: 0xc5000000
    ctx->pc = 0x214af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214af4: 0xc5410000
    ctx->pc = 0x214af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214af8: 0x46010000
    ctx->pc = 0x214af8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x214afc: 0xe5400000
    ctx->pc = 0x214afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x214b00: 0xc5000004
    ctx->pc = 0x214b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214b04: 0xc5410004
    ctx->pc = 0x214b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214b08: 0x46010000
    ctx->pc = 0x214b08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x214b0c: 0xe5400004
    ctx->pc = 0x214b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x214b10: 0xc5000008
    ctx->pc = 0x214b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214b14: 0xc5410008
    ctx->pc = 0x214b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214b18: 0x46010000
    ctx->pc = 0x214b18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x214b1c: 0x10000021
    ctx->pc = 0x214B1Cu;
    {
        const bool branch_taken_0x214b1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x214B20u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
        if (branch_taken_0x214b1c) {
            ctx->pc = 0x214BA4u;
            goto label_214ba4;
        }
    }
    ctx->pc = 0x214B24u;
label_214b24:
    // 0x214b24: 0x482d
    ctx->pc = 0x214b24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214b28: 0x27a40010
    ctx->pc = 0x214b28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x214b2c: 0x0
    ctx->pc = 0x214b2cu;
    // NOP
label_214b30:
    // 0x214b30: 0x91080
    ctx->pc = 0x214b30u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 2));
    // 0x214b34: 0x3a21821
    ctx->pc = 0x214b34u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x214b38: 0x481021
    ctx->pc = 0x214b38u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x214b3c: 0xc4610000
    ctx->pc = 0x214b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214b40: 0xc4400000
    ctx->pc = 0x214b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214b44: 0x46000834
    ctx->pc = 0x214b44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214b48: 0x0
    ctx->pc = 0x214b48u;
    // NOP
    // 0x214b4c: 0x45010004
    ctx->pc = 0x214B4Cu;
    {
        const bool branch_taken_0x214b4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x214B50u;
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        if (branch_taken_0x214b4c) {
            ctx->pc = 0x214B60u;
            goto label_214b60;
        }
    }
    ctx->pc = 0x214B54u;
    // 0x214b54: 0x91080
    ctx->pc = 0x214b54u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 2));
    // 0x214b58: 0x481021
    ctx->pc = 0x214b58u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x214b5c: 0xc4400000
    ctx->pc = 0x214b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_214b60:
    // 0x214b60: 0xe4600000
    ctx->pc = 0x214b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x214b64: 0x91080
    ctx->pc = 0x214b64u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 2));
    // 0x214b68: 0x821821
    ctx->pc = 0x214b68u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x214b6c: 0x481021
    ctx->pc = 0x214b6cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x214b70: 0xc4610000
    ctx->pc = 0x214b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214b74: 0xc4400000
    ctx->pc = 0x214b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214b78: 0x46010034
    ctx->pc = 0x214b78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214b7c: 0x0
    ctx->pc = 0x214b7cu;
    // NOP
    // 0x214b80: 0x45010004
    ctx->pc = 0x214B80u;
    {
        const bool branch_taken_0x214b80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x214B84u;
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        if (branch_taken_0x214b80) {
            ctx->pc = 0x214B94u;
            goto label_214b94;
        }
    }
    ctx->pc = 0x214B88u;
    // 0x214b88: 0x91080
    ctx->pc = 0x214b88u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 2));
    // 0x214b8c: 0x481021
    ctx->pc = 0x214b8cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x214b90: 0xc4400000
    ctx->pc = 0x214b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_214b94:
    // 0x214b94: 0x25290001
    ctx->pc = 0x214b94u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x214b98: 0x29220003
    ctx->pc = 0x214b98u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 3));
    // 0x214b9c: 0x1440ffe4
    ctx->pc = 0x214B9Cu;
    {
        const bool branch_taken_0x214b9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x214BA0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        if (branch_taken_0x214b9c) {
            ctx->pc = 0x214B30u;
            goto label_214b30;
        }
    }
    ctx->pc = 0x214BA4u;
label_214ba4:
    // 0x214ba4: 0x46031080
    ctx->pc = 0x214ba4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x214ba8: 0x256b0001
    ctx->pc = 0x214ba8u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 1));
label_214bac:
    // 0x214bac: 0x29620004
    ctx->pc = 0x214bacu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 11), 4));
    // 0x214bb0: 0x1440ffc5
    ctx->pc = 0x214BB0u;
    {
        const bool branch_taken_0x214bb0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x214BB4u;
        { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x214bb0) {
            ctx->pc = 0x214AC8u;
            goto label_214ac8;
        }
    }
    ctx->pc = 0x214BB8u;
    // 0x214bb8: 0x44800000
    ctx->pc = 0x214bb8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x214bbc: 0x46001032
    ctx->pc = 0x214bbcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214bc0: 0x0
    ctx->pc = 0x214bc0u;
    // NOP
    // 0x214bc4: 0x45000009
    ctx->pc = 0x214BC4u;
    {
        const bool branch_taken_0x214bc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x214BC8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x214bc4) {
            ctx->pc = 0x214BECu;
            goto label_214bec;
        }
    }
    ctx->pc = 0x214BCCu;
    // 0x214bcc: 0x2443c7c8
    ctx->pc = 0x214bccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294952904));
    // 0x214bd0: 0xc440c7c8
    ctx->pc = 0x214bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214bd4: 0xe5400000
    ctx->pc = 0x214bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x214bd8: 0xc4600004
    ctx->pc = 0x214bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214bdc: 0xe5400004
    ctx->pc = 0x214bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x214be0: 0xc4600008
    ctx->pc = 0x214be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214be4: 0x10000022
    ctx->pc = 0x214BE4u;
    {
        const bool branch_taken_0x214be4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x214BE8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
        if (branch_taken_0x214be4) {
            ctx->pc = 0x214C70u;
            goto label_214c70;
        }
    }
    ctx->pc = 0x214BECu;
label_214bec:
    // 0x214bec: 0x3c013f80
    ctx->pc = 0x214becu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x214bf0: 0x44810000
    ctx->pc = 0x214bf0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x214bf4: 0x0
    ctx->pc = 0x214bf4u;
    // NOP
    // 0x214bf8: 0x0
    ctx->pc = 0x214bf8u;
    // NOP
    // 0x214bfc: 0x46020083
    ctx->pc = 0x214bfcu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[2];
    // 0x214c00: 0x14e0000b
    ctx->pc = 0x214C00u;
    {
        const bool branch_taken_0x214c00 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x214C04u;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x214c00) {
            ctx->pc = 0x214C30u;
            goto label_214c30;
        }
    }
    ctx->pc = 0x214C08u;
    // 0x214c08: 0xc5400000
    ctx->pc = 0x214c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214c0c: 0x46001002
    ctx->pc = 0x214c0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x214c10: 0xe5400000
    ctx->pc = 0x214c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x214c14: 0xc5400004
    ctx->pc = 0x214c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214c18: 0x46001002
    ctx->pc = 0x214c18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x214c1c: 0xe5400004
    ctx->pc = 0x214c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x214c20: 0xc5400008
    ctx->pc = 0x214c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214c24: 0x46001002
    ctx->pc = 0x214c24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x214c28: 0x10000011
    ctx->pc = 0x214C28u;
    {
        const bool branch_taken_0x214c28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x214C2Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
        if (branch_taken_0x214c28) {
            ctx->pc = 0x214C70u;
            goto label_214c70;
        }
    }
    ctx->pc = 0x214C30u;
label_214c30:
    // 0x214c30: 0x27a80010
    ctx->pc = 0x214c30u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 16));
    // 0x214c34: 0x3c013f00
    ctx->pc = 0x214c34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x214c38: 0x44811800
    ctx->pc = 0x214c38u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x214c3c: 0x0
    ctx->pc = 0x214c3cu;
    // NOP
label_214c40:
    // 0x214c40: 0x91080
    ctx->pc = 0x214c40u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 2));
    // 0x214c44: 0x4a2021
    ctx->pc = 0x214c44u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x214c48: 0x3a21821
    ctx->pc = 0x214c48u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x214c4c: 0x1021021
    ctx->pc = 0x214c4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x214c50: 0xc4600000
    ctx->pc = 0x214c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214c54: 0xc4410000
    ctx->pc = 0x214c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214c58: 0x46010000
    ctx->pc = 0x214c58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x214c5c: 0x46030002
    ctx->pc = 0x214c5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x214c60: 0x25290001
    ctx->pc = 0x214c60u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x214c64: 0x29220003
    ctx->pc = 0x214c64u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 3));
    // 0x214c68: 0x1440fff5
    ctx->pc = 0x214C68u;
    {
        const bool branch_taken_0x214c68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x214C6Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        if (branch_taken_0x214c68) {
            ctx->pc = 0x214C40u;
            goto label_214c40;
        }
    }
    ctx->pc = 0x214C70u;
label_214c70:
    // 0x214c70: 0x10a00006
    ctx->pc = 0x214C70u;
    {
        const bool branch_taken_0x214c70 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x214C74u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x214c70) {
            ctx->pc = 0x214C8Cu;
            goto label_214c8c;
        }
    }
    ctx->pc = 0x214C78u;
    // 0x214c78: 0xe4a00000
    ctx->pc = 0x214c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x214c7c: 0xc7a00004
    ctx->pc = 0x214c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214c80: 0xe4a00004
    ctx->pc = 0x214c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x214c84: 0xc7a00008
    ctx->pc = 0x214c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214c88: 0xe4a00008
    ctx->pc = 0x214c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_214c8c:
    // 0x214c8c: 0x10c00006
    ctx->pc = 0x214C8Cu;
    {
        const bool branch_taken_0x214c8c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x214C90u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x214c8c) {
            ctx->pc = 0x214CA8u;
            goto label_214ca8;
        }
    }
    ctx->pc = 0x214C94u;
    // 0x214c94: 0xe4c00000
    ctx->pc = 0x214c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x214c98: 0xc7a00014
    ctx->pc = 0x214c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214c9c: 0xe4c00004
    ctx->pc = 0x214c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x214ca0: 0xc7a00018
    ctx->pc = 0x214ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214ca4: 0xe4c00008
    ctx->pc = 0x214ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_214ca8:
    // 0x214ca8: 0x24020002
    ctx->pc = 0x214ca8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x214cac: 0x14e20026
    ctx->pc = 0x214CACu;
    {
        const bool branch_taken_0x214cac = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        ctx->pc = 0x214CB0u;
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        if (branch_taken_0x214cac) {
            ctx->pc = 0x214D48u;
            goto label_214d48;
        }
    }
    ctx->pc = 0x214CB4u;
    // 0x214cb4: 0x3c020034
    ctx->pc = 0x214cb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x214cb8: 0x8c42e7c8
    ctx->pc = 0x214cb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x214cbc: 0x10400022
    ctx->pc = 0x214CBCu;
    {
        const bool branch_taken_0x214cbc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x214cbc) {
            ctx->pc = 0x214D48u;
            goto label_214d48;
        }
    }
    ctx->pc = 0x214CC4u;
    // 0x214cc4: 0x8c420060
    ctx->pc = 0x214cc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x214cc8: 0x1040001f
    ctx->pc = 0x214CC8u;
    {
        const bool branch_taken_0x214cc8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x214CCCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x214cc8) {
            ctx->pc = 0x214D48u;
            goto label_214d48;
        }
    }
    ctx->pc = 0x214CD0u;
    // 0x214cd0: 0x482d
    ctx->pc = 0x214cd0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214cd4: 0x8c46e7c8
    ctx->pc = 0x214cd4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
label_214cd8:
    // 0x214cd8: 0x91080
    ctx->pc = 0x214cd8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 2));
    // 0x214cdc: 0x4a2821
    ctx->pc = 0x214cdcu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x214ce0: 0x8cc30060
    ctx->pc = 0x214ce0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x214ce4: 0x621821
    ctx->pc = 0x214ce4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x214ce8: 0xc4a00000
    ctx->pc = 0x214ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214cec: 0xc461000c
    ctx->pc = 0x214cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214cf0: 0x46010034
    ctx->pc = 0x214cf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214cf4: 0x0
    ctx->pc = 0x214cf4u;
    // NOP
    // 0x214cf8: 0x4501000e
    ctx->pc = 0x214CF8u;
    {
        const bool branch_taken_0x214cf8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x214CFCu;
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        if (branch_taken_0x214cf8) {
            ctx->pc = 0x214D34u;
            goto label_214d34;
        }
    }
    ctx->pc = 0x214D00u;
    // 0x214d00: 0x91880
    ctx->pc = 0x214d00u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 9), 2));
    // 0x214d04: 0x6a2021
    ctx->pc = 0x214d04u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x214d08: 0x8cc20060
    ctx->pc = 0x214d08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x214d0c: 0x431021
    ctx->pc = 0x214d0cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x214d10: 0xc4800000
    ctx->pc = 0x214d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214d14: 0xc4410018
    ctx->pc = 0x214d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214d18: 0x46000834
    ctx->pc = 0x214d18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214d1c: 0x0
    ctx->pc = 0x214d1cu;
    // NOP
    // 0x214d20: 0x45010004
    ctx->pc = 0x214D20u;
    {
        const bool branch_taken_0x214d20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x214D24u;
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        if (branch_taken_0x214d20) {
            ctx->pc = 0x214D34u;
            goto label_214d34;
        }
    }
    ctx->pc = 0x214D28u;
    // 0x214d28: 0x91080
    ctx->pc = 0x214d28u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 2));
    // 0x214d2c: 0x4a1021
    ctx->pc = 0x214d2cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x214d30: 0xc4400000
    ctx->pc = 0x214d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_214d34:
    // 0x214d34: 0x25290001
    ctx->pc = 0x214d34u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x214d38: 0x29220003
    ctx->pc = 0x214d38u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 3));
    // 0x214d3c: 0x1440ffe6
    ctx->pc = 0x214D3Cu;
    {
        const bool branch_taken_0x214d3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x214D40u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        if (branch_taken_0x214d3c) {
            ctx->pc = 0x214CD8u;
            goto label_214cd8;
        }
    }
    ctx->pc = 0x214D44u;
    // 0x214d44: 0x46001006
    ctx->pc = 0x214d44u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_214d48:
    // 0x214d48: 0x3e00008
    ctx->pc = 0x214D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214D4Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214AC8u: goto label_214ac8;
            case 0x214B24u: goto label_214b24;
            case 0x214B30u: goto label_214b30;
            case 0x214B60u: goto label_214b60;
            case 0x214B94u: goto label_214b94;
            case 0x214BA4u: goto label_214ba4;
            case 0x214BACu: goto label_214bac;
            case 0x214BECu: goto label_214bec;
            case 0x214C30u: goto label_214c30;
            case 0x214C40u: goto label_214c40;
            case 0x214C70u: goto label_214c70;
            case 0x214C8Cu: goto label_214c8c;
            case 0x214CA8u: goto label_214ca8;
            case 0x214CD8u: goto label_214cd8;
            case 0x214D34u: goto label_214d34;
            case 0x214D48u: goto label_214d48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x214D50u;
}
