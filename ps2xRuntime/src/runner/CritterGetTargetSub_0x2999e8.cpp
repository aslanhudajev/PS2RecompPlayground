#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterGetTargetSub
// Address: 0x2999e8 - 0x299d84
void CritterGetTargetSub_0x2999e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2999e8u;

    // 0x2999e8: 0x27bdff30
    ctx->pc = 0x2999e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2999ec: 0xffbf0080
    ctx->pc = 0x2999ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2999f0: 0xffb60070
    ctx->pc = 0x2999f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2999f4: 0xffb50060
    ctx->pc = 0x2999f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2999f8: 0xffb40050
    ctx->pc = 0x2999f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2999fc: 0xffb30040
    ctx->pc = 0x2999fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x299a00: 0xffb20030
    ctx->pc = 0x299a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x299a04: 0xffb10020
    ctx->pc = 0x299a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x299a08: 0xffb00010
    ctx->pc = 0x299a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x299a0c: 0xe7ba00c0
    ctx->pc = 0x299a0cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x299a10: 0xe7b900b8
    ctx->pc = 0x299a10u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x299a14: 0xe7b800b0
    ctx->pc = 0x299a14u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x299a18: 0xe7b700a8
    ctx->pc = 0x299a18u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x299a1c: 0xe7b600a0
    ctx->pc = 0x299a1cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x299a20: 0xe7b50098
    ctx->pc = 0x299a20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x299a24: 0xe7b40090
    ctx->pc = 0x299a24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x299a28: 0x80982d
    ctx->pc = 0x299a28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299a2c: 0xa0902d
    ctx->pc = 0x299a2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299a30: 0xc0a82d
    ctx->pc = 0x299a30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299a34: 0x46006606
    ctx->pc = 0x299a34u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
    // 0x299a38: 0x46006d46
    ctx->pc = 0x299a38u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x299a3c: 0xe0a02d
    ctx->pc = 0x299a3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299a40: 0x8e760004
    ctx->pc = 0x299a40u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x299a44: 0x3c0162d8
    ctx->pc = 0x299a44u;
    SET_GPR_U32(ctx, 1, ((uint32_t)25304 << 16));
    // 0x299a48: 0x3421d727
    ctx->pc = 0x299a48u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55079));
    // 0x299a4c: 0x4481b800
    ctx->pc = 0x299a4cu;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 1);
    // 0x299a50: 0x44800000
    ctx->pc = 0x299a50u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x299a54: 0x46150034
    ctx->pc = 0x299a54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299a58: 0x0
    ctx->pc = 0x299a58u;
    // NOP
    // 0x299a5c: 0x45000009
    ctx->pc = 0x299A5Cu;
    {
        const bool branch_taken_0x299a5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x299A60u;
        ctx->f[26] = FPU_MOV_S(ctx->f[23]);
        if (branch_taken_0x299a5c) {
            ctx->pc = 0x299A84u;
            goto label_299a84;
        }
    }
    ctx->pc = 0x299A64u;
    // 0x299a64: 0x3c013f80
    ctx->pc = 0x299a64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x299a68: 0x44810000
    ctx->pc = 0x299a68u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x299a6c: 0x46180581
    ctx->pc = 0x299a6cu;
    ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
    // 0x299a70: 0x0
    ctx->pc = 0x299a70u;
    // NOP
    // 0x299a74: 0x0
    ctx->pc = 0x299a74u;
    // NOP
    // 0x299a78: 0x4615b583
    ctx->pc = 0x299a78u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[22] = ctx->f[22] / ctx->f[21];
    // 0x299a7c: 0x10000003
    ctx->pc = 0x299A7Cu;
    {
        const bool branch_taken_0x299a7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x299A80u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x299a7c) {
            ctx->pc = 0x299A8Cu;
            goto label_299a8c;
        }
    }
    ctx->pc = 0x299A84u;
label_299a84:
    // 0x299a84: 0x4480b000
    ctx->pc = 0x299a84u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 0);
    // 0x299a88: 0xc66104f4
    ctx->pc = 0x299a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_299a8c:
    // 0x299a8c: 0x44800000
    ctx->pc = 0x299a8cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x299a90: 0x46000836
    ctx->pc = 0x299a90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299a94: 0x0
    ctx->pc = 0x299a94u;
    // NOP
    // 0x299a98: 0x450300a9
    ctx->pc = 0x299A98u;
    {
        const bool branch_taken_0x299a98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x299a98) {
            ctx->pc = 0x299A9Cu;
            ctx->f[0] = FPU_MOV_S(ctx->f[23]);
            ctx->pc = 0x299D40u;
            goto label_299d40;
        }
    }
    ctx->pc = 0x299AA0u;
    // 0x299aa0: 0x8e620008
    ctx->pc = 0x299aa0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x299aa4: 0x2c420002
    ctx->pc = 0x299aa4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x299aa8: 0x544000a5
    ctx->pc = 0x299AA8u;
    {
        const bool branch_taken_0x299aa8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x299aa8) {
            ctx->pc = 0x299AACu;
            ctx->f[0] = FPU_MOV_S(ctx->f[23]);
            ctx->pc = 0x299D40u;
            goto label_299d40;
        }
    }
    ctx->pc = 0x299AB0u;
    // 0x299ab0: 0x8ec2005c
    ctx->pc = 0x299ab0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 92)));
    // 0x299ab4: 0x30420002
    ctx->pc = 0x299ab4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x299ab8: 0x5040006c
    ctx->pc = 0x299AB8u;
    {
        const bool branch_taken_0x299ab8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x299ab8) {
            ctx->pc = 0x299ABCu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x299C6Cu;
            goto label_299c6c;
        }
    }
    ctx->pc = 0x299AC0u;
    // 0x299ac0: 0x86c20118
    ctx->pc = 0x299ac0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 280)));
    // 0x299ac4: 0x18400061
    ctx->pc = 0x299AC4u;
    {
        const bool branch_taken_0x299ac4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x299AC8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x299ac4) {
            ctx->pc = 0x299C4Cu;
            goto label_299c4c;
        }
    }
    ctx->pc = 0x299ACCu;
    // 0x299acc: 0x4480c800
    ctx->pc = 0x299accu;
    *(uint32_t*)&ctx->f[25] = GPR_U32(ctx, 0);
    // 0x299ad0: 0x24020060
    ctx->pc = 0x299ad0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 96));
    // 0x299ad4: 0x0
    ctx->pc = 0x299ad4u;
    // NOP
label_299ad8:
    // 0x299ad8: 0x2221018
    ctx->pc = 0x299ad8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x299adc: 0x24420540
    ctx->pc = 0x299adcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1344));
    // 0x299ae0: 0x2628021
    ctx->pc = 0x299ae0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x299ae4: 0x8e020004
    ctx->pc = 0x299ae4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x299ae8: 0x50400054
    ctx->pc = 0x299AE8u;
    {
        const bool branch_taken_0x299ae8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x299ae8) {
            ctx->pc = 0x299AECu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x299C3Cu;
            goto label_299c3c;
        }
    }
    ctx->pc = 0x299AF0u;
    // 0x299af0: 0xc601005c
    ctx->pc = 0x299af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299af4: 0xc6000058
    ctx->pc = 0x299af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299af8: 0x46010036
    ctx->pc = 0x299af8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299afc: 0x0
    ctx->pc = 0x299afcu;
    // NOP
    // 0x299b00: 0x4503004e
    ctx->pc = 0x299B00u;
    {
        const bool branch_taken_0x299b00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x299b00) {
            ctx->pc = 0x299B04u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x299C3Cu;
            goto label_299c3c;
        }
    }
    ctx->pc = 0x299B08u;
    // 0x299b08: 0xc6000040
    ctx->pc = 0x299b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299b0c: 0xc6410000
    ctx->pc = 0x299b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299b10: 0x46010001
    ctx->pc = 0x299b10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x299b14: 0xe7a00000
    ctx->pc = 0x299b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x299b18: 0xc6000044
    ctx->pc = 0x299b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299b1c: 0xc6410004
    ctx->pc = 0x299b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299b20: 0x46010001
    ctx->pc = 0x299b20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x299b24: 0xe7a00004
    ctx->pc = 0x299b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x299b28: 0xc6000048
    ctx->pc = 0x299b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299b2c: 0xc6410008
    ctx->pc = 0x299b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299b30: 0x46010001
    ctx->pc = 0x299b30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x299b34: 0xe7a00008
    ctx->pc = 0x299b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x299b38: 0xc0b58a4
    ctx->pc = 0x299B38u;
    SET_GPR_U32(ctx, 31, 0x299B40u);
    ctx->pc = 0x299B3Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299B40u; }
    }
    if (ctx->pc != 0x299B40u) { return; }
    ctx->pc = 0x299B40u;
    // 0x299b40: 0x4615c834
    ctx->pc = 0x299b40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299b44: 0x0
    ctx->pc = 0x299b44u;
    // NOP
    // 0x299b48: 0x45000005
    ctx->pc = 0x299B48u;
    {
        const bool branch_taken_0x299b48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x299B4Cu;
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x299b48) {
            ctx->pc = 0x299B60u;
            goto label_299b60;
        }
    }
    ctx->pc = 0x299B50u;
    // 0x299b50: 0x4614a834
    ctx->pc = 0x299b50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299b54: 0x0
    ctx->pc = 0x299b54u;
    // NOP
    // 0x299b58: 0x45030038
    ctx->pc = 0x299B58u;
    {
        const bool branch_taken_0x299b58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x299b58) {
            ctx->pc = 0x299B5Cu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x299C3Cu;
            goto label_299c3c;
        }
    }
    ctx->pc = 0x299B60u;
label_299b60:
    // 0x299b60: 0x8e020000
    ctx->pc = 0x299b60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x299b64: 0xc4400018
    ctx->pc = 0x299b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299b68: 0x4600c834
    ctx->pc = 0x299b68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299b6c: 0x0
    ctx->pc = 0x299b6cu;
    // NOP
    // 0x299b70: 0x45020007
    ctx->pc = 0x299B70u;
    {
        const bool branch_taken_0x299b70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x299b70) {
            ctx->pc = 0x299B74u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x299B90u;
            goto label_299b90;
        }
    }
    ctx->pc = 0x299B78u;
    // 0x299b78: 0x46140034
    ctx->pc = 0x299b78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299b7c: 0x0
    ctx->pc = 0x299b7cu;
    // NOP
    // 0x299b80: 0x4503002e
    ctx->pc = 0x299B80u;
    {
        const bool branch_taken_0x299b80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x299b80) {
            ctx->pc = 0x299B84u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x299C3Cu;
            goto label_299c3c;
        }
    }
    ctx->pc = 0x299B88u;
    // 0x299b88: 0x8e020000
    ctx->pc = 0x299b88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x299b8c: 0xc440002c
    ctx->pc = 0x299b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299b90:
    // 0x299b90: 0x4600a501
    ctx->pc = 0x299b90u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x299b94: 0xc7ac0000
    ctx->pc = 0x299b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x299b98: 0xc0b5c34
    ctx->pc = 0x299B98u;
    SET_GPR_U32(ctx, 31, 0x299BA0u);
    ctx->pc = 0x299B9Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299BA0u; }
    }
    if (ctx->pc != 0x299BA0u) { return; }
    ctx->pc = 0x299BA0u;
    // 0x299ba0: 0x46000106
    ctx->pc = 0x299ba0u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x299ba4: 0xc7a20000
    ctx->pc = 0x299ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x299ba8: 0xc6a00000
    ctx->pc = 0x299ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299bac: 0x46001082
    ctx->pc = 0x299bacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x299bb0: 0xc7a00008
    ctx->pc = 0x299bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299bb4: 0xc6a10008
    ctx->pc = 0x299bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299bb8: 0x46010002
    ctx->pc = 0x299bb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x299bbc: 0x4616c834
    ctx->pc = 0x299bbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299bc0: 0x0
    ctx->pc = 0x299bc0u;
    // NOP
    // 0x299bc4: 0x45000005
    ctx->pc = 0x299BC4u;
    {
        const bool branch_taken_0x299bc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x299BC8u;
        ctx->f[3] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x299bc4) {
            ctx->pc = 0x299BDCu;
            goto label_299bdc;
        }
    }
    ctx->pc = 0x299BCCu;
    // 0x299bcc: 0x4616a002
    ctx->pc = 0x299bccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x299bd0: 0x4600c000
    ctx->pc = 0x299bd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
    // 0x299bd4: 0x10000002
    ctx->pc = 0x299BD4u;
    {
        const bool branch_taken_0x299bd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x299BD8u;
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
        if (branch_taken_0x299bd4) {
            ctx->pc = 0x299BE0u;
            goto label_299be0;
        }
    }
    ctx->pc = 0x299BDCu;
label_299bdc:
    // 0x299bdc: 0x4600c086
    ctx->pc = 0x299bdcu;
    ctx->f[2] = FPU_MOV_S(ctx->f[24]);
label_299be0:
    // 0x299be0: 0x46021836
    ctx->pc = 0x299be0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299be4: 0x0
    ctx->pc = 0x299be4u;
    // NOP
    // 0x299be8: 0x45030014
    ctx->pc = 0x299BE8u;
    {
        const bool branch_taken_0x299be8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x299be8) {
            ctx->pc = 0x299BECu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x299C3Cu;
            goto label_299c3c;
        }
    }
    ctx->pc = 0x299BF0u;
    // 0x299bf0: 0x46021801
    ctx->pc = 0x299bf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x299bf4: 0x8e020000
    ctx->pc = 0x299bf4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x299bf8: 0xc441001c
    ctx->pc = 0x299bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299bfc: 0x46010002
    ctx->pc = 0x299bfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x299c00: 0x0
    ctx->pc = 0x299c00u;
    // NOP
    // 0x299c04: 0x0
    ctx->pc = 0x299c04u;
    // NOP
    // 0x299c08: 0x4600a083
    ctx->pc = 0x299c08u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[2] = ctx->f[20] / ctx->f[0];
    // 0x299c0c: 0x461a1034
    ctx->pc = 0x299c0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299c10: 0x0
    ctx->pc = 0x299c10u;
    // NOP
    // 0x299c14: 0x45000008
    ctx->pc = 0x299C14u;
    {
        const bool branch_taken_0x299c14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x299C18u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x299c14) {
            ctx->pc = 0x299C38u;
            goto label_299c38;
        }
    }
    ctx->pc = 0x299C1Cu;
    // 0x299c1c: 0xe6800000
    ctx->pc = 0x299c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x299c20: 0xc7a00004
    ctx->pc = 0x299c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299c24: 0xe6800004
    ctx->pc = 0x299c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x299c28: 0xc7a00008
    ctx->pc = 0x299c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299c2c: 0xe6800008
    ctx->pc = 0x299c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x299c30: 0x46001686
    ctx->pc = 0x299c30u;
    ctx->f[26] = FPU_MOV_S(ctx->f[2]);
    // 0x299c34: 0x4600a5c6
    ctx->pc = 0x299c34u;
    ctx->f[23] = FPU_MOV_S(ctx->f[20]);
label_299c38:
    // 0x299c38: 0x26310001
    ctx->pc = 0x299c38u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_299c3c:
    // 0x299c3c: 0x86c20118
    ctx->pc = 0x299c3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 280)));
    // 0x299c40: 0x222102a
    ctx->pc = 0x299c40u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x299c44: 0x1440ffa4
    ctx->pc = 0x299C44u;
    {
        const bool branch_taken_0x299c44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x299C48u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 96));
        if (branch_taken_0x299c44) {
            ctx->pc = 0x299AD8u;
            goto label_299ad8;
        }
    }
    ctx->pc = 0x299C4Cu;
label_299c4c:
    // 0x299c4c: 0x3c0162d8
    ctx->pc = 0x299c4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)25304 << 16));
    // 0x299c50: 0x3421d727
    ctx->pc = 0x299c50u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55079));
    // 0x299c54: 0x44810000
    ctx->pc = 0x299c54u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x299c58: 0x4600b834
    ctx->pc = 0x299c58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299c5c: 0x0
    ctx->pc = 0x299c5cu;
    // NOP
    // 0x299c60: 0x45010037
    ctx->pc = 0x299C60u;
    {
        const bool branch_taken_0x299c60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x299C64u;
        ctx->f[0] = FPU_MOV_S(ctx->f[23]);
        if (branch_taken_0x299c60) {
            ctx->pc = 0x299D40u;
            goto label_299d40;
        }
    }
    ctx->pc = 0x299C68u;
    // 0x299c68: 0xc6600060
    ctx->pc = 0x299c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299c6c:
    // 0x299c6c: 0xc6410000
    ctx->pc = 0x299c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299c70: 0x46010001
    ctx->pc = 0x299c70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x299c74: 0xe7a00000
    ctx->pc = 0x299c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x299c78: 0xc6600064
    ctx->pc = 0x299c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299c7c: 0xc6410004
    ctx->pc = 0x299c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299c80: 0x46010001
    ctx->pc = 0x299c80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x299c84: 0xe7a00004
    ctx->pc = 0x299c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x299c88: 0xc6600068
    ctx->pc = 0x299c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299c8c: 0xc6410008
    ctx->pc = 0x299c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299c90: 0x46010001
    ctx->pc = 0x299c90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x299c94: 0xe7a00008
    ctx->pc = 0x299c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x299c98: 0xc0b58a4
    ctx->pc = 0x299C98u;
    SET_GPR_U32(ctx, 31, 0x299CA0u);
    ctx->pc = 0x299C9Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299CA0u; }
    }
    if (ctx->pc != 0x299CA0u) { return; }
    ctx->pc = 0x299CA0u;
    // 0x299ca0: 0x46000506
    ctx->pc = 0x299ca0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x299ca4: 0x44800000
    ctx->pc = 0x299ca4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x299ca8: 0x46150034
    ctx->pc = 0x299ca8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299cac: 0x0
    ctx->pc = 0x299cacu;
    // NOP
    // 0x299cb0: 0x45020005
    ctx->pc = 0x299CB0u;
    {
        const bool branch_taken_0x299cb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x299cb0) {
            ctx->pc = 0x299CB4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->pc = 0x299CC8u;
            goto label_299cc8;
        }
    }
    ctx->pc = 0x299CB8u;
    // 0x299cb8: 0x4614a834
    ctx->pc = 0x299cb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299cbc: 0x45010015
    ctx->pc = 0x299CBCu;
    {
        const bool branch_taken_0x299cbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x299cbc) {
            ctx->pc = 0x299D14u;
            goto label_299d14;
        }
    }
    ctx->pc = 0x299CC4u;
    // 0x299cc4: 0x8e620004
    ctx->pc = 0x299cc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_299cc8:
    // 0x299cc8: 0xc440007c
    ctx->pc = 0x299cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299ccc: 0x4600a501
    ctx->pc = 0x299cccu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x299cd0: 0xc7ac0000
    ctx->pc = 0x299cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x299cd4: 0xc0b5c34
    ctx->pc = 0x299CD4u;
    SET_GPR_U32(ctx, 31, 0x299CDCu);
    ctx->pc = 0x299CD8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299CDCu; }
    }
    if (ctx->pc != 0x299CDCu) { return; }
    ctx->pc = 0x299CDCu;
    // 0x299cdc: 0xc7a20000
    ctx->pc = 0x299cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x299ce0: 0xc6a10000
    ctx->pc = 0x299ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299ce4: 0x460110c2
    ctx->pc = 0x299ce4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x299ce8: 0xc7a10008
    ctx->pc = 0x299ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299cec: 0xc6a20008
    ctx->pc = 0x299cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x299cf0: 0x46020842
    ctx->pc = 0x299cf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x299cf4: 0x460118c0
    ctx->pc = 0x299cf4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x299cf8: 0x4616a042
    ctx->pc = 0x299cf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x299cfc: 0x4601c080
    ctx->pc = 0x299cfcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[24], ctx->f[1]);
    // 0x299d00: 0x46001082
    ctx->pc = 0x299d00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x299d04: 0x46021836
    ctx->pc = 0x299d04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299d08: 0x0
    ctx->pc = 0x299d08u;
    // NOP
    // 0x299d0c: 0x45000006
    ctx->pc = 0x299D0Cu;
    {
        const bool branch_taken_0x299d0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x299D10u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x299d0c) {
            ctx->pc = 0x299D28u;
            goto label_299d28;
        }
    }
    ctx->pc = 0x299D14u;
label_299d14:
    // 0x299d14: 0x3c0162d8
    ctx->pc = 0x299d14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)25304 << 16));
    // 0x299d18: 0x3421d727
    ctx->pc = 0x299d18u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55079));
    // 0x299d1c: 0x44810000
    ctx->pc = 0x299d1cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x299d20: 0x10000008
    ctx->pc = 0x299D20u;
    {
        const bool branch_taken_0x299d20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x299D24u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x299d20) {
            ctx->pc = 0x299D44u;
            goto label_299d44;
        }
    }
    ctx->pc = 0x299D28u;
label_299d28:
    // 0x299d28: 0xe6800000
    ctx->pc = 0x299d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x299d2c: 0xc7a00004
    ctx->pc = 0x299d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299d30: 0xe6800004
    ctx->pc = 0x299d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x299d34: 0xc7a00008
    ctx->pc = 0x299d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299d38: 0xe6800008
    ctx->pc = 0x299d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x299d3c: 0x4600a006
    ctx->pc = 0x299d3cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_299d40:
    // 0x299d40: 0xdfbf0080
    ctx->pc = 0x299d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_299d44:
    // 0x299d44: 0xdfb60070
    ctx->pc = 0x299d44u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x299d48: 0xdfb50060
    ctx->pc = 0x299d48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x299d4c: 0xdfb40050
    ctx->pc = 0x299d4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x299d50: 0xdfb30040
    ctx->pc = 0x299d50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x299d54: 0xdfb20030
    ctx->pc = 0x299d54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299d58: 0xdfb10020
    ctx->pc = 0x299d58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299d5c: 0xdfb00010
    ctx->pc = 0x299d5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299d60: 0xc7ba00c0
    ctx->pc = 0x299d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x299d64: 0xc7b900b8
    ctx->pc = 0x299d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x299d68: 0xc7b800b0
    ctx->pc = 0x299d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x299d6c: 0xc7b700a8
    ctx->pc = 0x299d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x299d70: 0xc7b600a0
    ctx->pc = 0x299d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x299d74: 0xc7b50098
    ctx->pc = 0x299d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x299d78: 0xc7b40090
    ctx->pc = 0x299d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x299d7c: 0x3e00008
    ctx->pc = 0x299D7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299D80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x299A84u: goto label_299a84;
            case 0x299A8Cu: goto label_299a8c;
            case 0x299AD8u: goto label_299ad8;
            case 0x299B60u: goto label_299b60;
            case 0x299B90u: goto label_299b90;
            case 0x299BDCu: goto label_299bdc;
            case 0x299BE0u: goto label_299be0;
            case 0x299C38u: goto label_299c38;
            case 0x299C3Cu: goto label_299c3c;
            case 0x299C4Cu: goto label_299c4c;
            case 0x299C6Cu: goto label_299c6c;
            case 0x299CC8u: goto label_299cc8;
            case 0x299D14u: goto label_299d14;
            case 0x299D28u: goto label_299d28;
            case 0x299D40u: goto label_299d40;
            case 0x299D44u: goto label_299d44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x299D84u;
}
