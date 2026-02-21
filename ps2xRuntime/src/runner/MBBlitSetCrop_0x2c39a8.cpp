#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBBlitSetCrop
// Address: 0x2c39a8 - 0x2c3b54
void MBBlitSetCrop_0x2c39a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c39a8u;

    // 0x2c39a8: 0x27bdffc0
    ctx->pc = 0x2c39a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c39ac: 0xffbf0010
    ctx->pc = 0x2c39acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c39b0: 0xffb00000
    ctx->pc = 0x2c39b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c39b4: 0xe7b70038
    ctx->pc = 0x2c39b4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c39b8: 0xe7b60030
    ctx->pc = 0x2c39b8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c39bc: 0xe7b50028
    ctx->pc = 0x2c39bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c39c0: 0xe7b40020
    ctx->pc = 0x2c39c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c39c4: 0x80802d
    ctx->pc = 0x2c39c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c39c8: 0x46006506
    ctx->pc = 0x2c39c8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2c39cc: 0x46006d46
    ctx->pc = 0x2c39ccu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2c39d0: 0x46007586
    ctx->pc = 0x2c39d0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x2c39d4: 0x46007dc6
    ctx->pc = 0x2c39d4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[15]);
    // 0x2c39d8: 0xc0b3da0
    ctx->pc = 0x2C39D8u;
    SET_GPR_U32(ctx, 31, 0x2C39E0u);
    ctx->pc = 0x2C39DCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x2CF680u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRomTexPtr_0x2cf680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C39E0u; }
    }
    if (ctx->pc != 0x2C39E0u) { return; }
    ctx->pc = 0x2C39E0u;
    // 0x2c39e0: 0x40182d
    ctx->pc = 0x2c39e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c39e4: 0x8e020000
    ctx->pc = 0x2c39e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c39e8: 0x30420020
    ctx->pc = 0x2c39e8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x2c39ec: 0x50400009
    ctx->pc = 0x2C39ECu;
    {
        const bool branch_taken_0x2c39ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c39ec) {
            ctx->pc = 0x2C39F0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x2C3A14u;
            goto label_2c3a14;
        }
    }
    ctx->pc = 0x2C39F4u;
    // 0x2c39f4: 0x4600a024
    ctx->pc = 0x2c39f4u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[20]);
    // 0x2c39f8: 0x44020000
    ctx->pc = 0x2c39f8u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x2c39fc: 0x21400
    ctx->pc = 0x2c39fcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x2c3a00: 0x21403
    ctx->pc = 0x2c3a00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2c3a04: 0x4600ad06
    ctx->pc = 0x2c3a04u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
    // 0x2c3a08: 0x4482a800
    ctx->pc = 0x2c3a08u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 2);
    // 0x2c3a0c: 0x4680ad60
    ctx->pc = 0x2c3a0cu;
    ctx->f[21] = FPU_CVT_S_W(*(int32_t*)&ctx->f[21]);
    // 0x2c3a10: 0x8e020000
    ctx->pc = 0x2c3a10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c3a14:
    // 0x2c3a14: 0x30420080
    ctx->pc = 0x2c3a14u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 128));
    // 0x2c3a18: 0x50400009
    ctx->pc = 0x2C3A18u;
    {
        const bool branch_taken_0x2c3a18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c3a18) {
            ctx->pc = 0x2C3A1Cu;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
            ctx->pc = 0x2C3A40u;
            goto label_2c3a40;
        }
    }
    ctx->pc = 0x2C3A20u;
    // 0x2c3a20: 0x4600b024
    ctx->pc = 0x2c3a20u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[22]);
    // 0x2c3a24: 0x44020000
    ctx->pc = 0x2c3a24u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x2c3a28: 0x21400
    ctx->pc = 0x2c3a28u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x2c3a2c: 0x21403
    ctx->pc = 0x2c3a2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2c3a30: 0x4600bd86
    ctx->pc = 0x2c3a30u;
    ctx->f[22] = FPU_MOV_S(ctx->f[23]);
    // 0x2c3a34: 0x4482b800
    ctx->pc = 0x2c3a34u;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 2);
    // 0x2c3a38: 0x4680bde0
    ctx->pc = 0x2c3a38u;
    ctx->f[23] = FPU_CVT_S_W(*(int32_t*)&ctx->f[23]);
    // 0x2c3a3c: 0x94620016
    ctx->pc = 0x2c3a3cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
label_2c3a40:
    // 0x2c3a40: 0x44826800
    ctx->pc = 0x2c3a40u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x2c3a44: 0x46806b60
    ctx->pc = 0x2c3a44u;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[13]);
    // 0x2c3a48: 0x94620018
    ctx->pc = 0x2c3a48u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2c3a4c: 0x44827800
    ctx->pc = 0x2c3a4cu;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 2);
    // 0x2c3a50: 0x46807be0
    ctx->pc = 0x2c3a50u;
    ctx->f[15] = FPU_CVT_S_W(*(int32_t*)&ctx->f[15]);
    // 0x2c3a54: 0x44800000
    ctx->pc = 0x2c3a54u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2c3a58: 0x46140036
    ctx->pc = 0x2c3a58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3a5c: 0x4500000c
    ctx->pc = 0x2C3A5Cu;
    {
        const bool branch_taken_0x2c3a5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3a5c) {
            ctx->pc = 0x2C3A90u;
            goto label_2c3a90;
        }
    }
    ctx->pc = 0x2C3A64u;
    // 0x2c3a64: 0x460da002
    ctx->pc = 0x2c3a64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[13]);
    // 0x2c3a68: 0x3c014180
    ctx->pc = 0x2c3a68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16768 << 16));
    // 0x2c3a6c: 0x44810800
    ctx->pc = 0x2c3a6cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2c3a70: 0x46010002
    ctx->pc = 0x2c3a70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c3a74: 0x3c013f00
    ctx->pc = 0x2c3a74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2c3a78: 0x44810800
    ctx->pc = 0x2c3a78u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2c3a7c: 0x46010000
    ctx->pc = 0x2c3a7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c3a80: 0x46000064
    ctx->pc = 0x2c3a80u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c3a84: 0x44020800
    ctx->pc = 0x2c3a84u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x2c3a88: 0xa6020014
    ctx->pc = 0x2c3a88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c3a8c: 0x44800000
    ctx->pc = 0x2c3a8cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2c3a90:
    // 0x2c3a90: 0x46150036
    ctx->pc = 0x2c3a90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3a94: 0x4500000b
    ctx->pc = 0x2C3A94u;
    {
        const bool branch_taken_0x2c3a94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3a94) {
            ctx->pc = 0x2C3AC4u;
            goto label_2c3ac4;
        }
    }
    ctx->pc = 0x2C3A9Cu;
    // 0x2c3a9c: 0x460da802
    ctx->pc = 0x2c3a9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[13]);
    // 0x2c3aa0: 0x3c014180
    ctx->pc = 0x2c3aa0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16768 << 16));
    // 0x2c3aa4: 0x44810800
    ctx->pc = 0x2c3aa4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2c3aa8: 0x46010002
    ctx->pc = 0x2c3aa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c3aac: 0x3c013f00
    ctx->pc = 0x2c3aacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2c3ab0: 0x44810800
    ctx->pc = 0x2c3ab0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2c3ab4: 0x46010000
    ctx->pc = 0x2c3ab4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c3ab8: 0x46000064
    ctx->pc = 0x2c3ab8u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c3abc: 0x44020800
    ctx->pc = 0x2c3abcu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x2c3ac0: 0xa6020016
    ctx->pc = 0x2c3ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
label_2c3ac4:
    // 0x2c3ac4: 0x44800000
    ctx->pc = 0x2c3ac4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2c3ac8: 0x46160036
    ctx->pc = 0x2c3ac8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3acc: 0x4500000c
    ctx->pc = 0x2C3ACCu;
    {
        const bool branch_taken_0x2c3acc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3acc) {
            ctx->pc = 0x2C3B00u;
            goto label_2c3b00;
        }
    }
    ctx->pc = 0x2C3AD4u;
    // 0x2c3ad4: 0x460fb002
    ctx->pc = 0x2c3ad4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[15]);
    // 0x2c3ad8: 0x3c014180
    ctx->pc = 0x2c3ad8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16768 << 16));
    // 0x2c3adc: 0x44810800
    ctx->pc = 0x2c3adcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2c3ae0: 0x46010002
    ctx->pc = 0x2c3ae0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c3ae4: 0x3c013f00
    ctx->pc = 0x2c3ae4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2c3ae8: 0x44810800
    ctx->pc = 0x2c3ae8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2c3aec: 0x46010000
    ctx->pc = 0x2c3aecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c3af0: 0x46000064
    ctx->pc = 0x2c3af0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c3af4: 0x44020800
    ctx->pc = 0x2c3af4u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x2c3af8: 0xa6020018
    ctx->pc = 0x2c3af8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c3afc: 0x44800000
    ctx->pc = 0x2c3afcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2c3b00:
    // 0x2c3b00: 0x46170036
    ctx->pc = 0x2c3b00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3b04: 0x0
    ctx->pc = 0x2c3b04u;
    // NOP
    // 0x2c3b08: 0x4500000b
    ctx->pc = 0x2C3B08u;
    {
        const bool branch_taken_0x2c3b08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C3B0Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2c3b08) {
            ctx->pc = 0x2C3B38u;
            goto label_2c3b38;
        }
    }
    ctx->pc = 0x2C3B10u;
    // 0x2c3b10: 0x460fb802
    ctx->pc = 0x2c3b10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[15]);
    // 0x2c3b14: 0x3c014180
    ctx->pc = 0x2c3b14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16768 << 16));
    // 0x2c3b18: 0x44810800
    ctx->pc = 0x2c3b18u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2c3b1c: 0x46010002
    ctx->pc = 0x2c3b1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c3b20: 0x3c013f00
    ctx->pc = 0x2c3b20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2c3b24: 0x44810800
    ctx->pc = 0x2c3b24u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2c3b28: 0x46010000
    ctx->pc = 0x2c3b28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c3b2c: 0x46000064
    ctx->pc = 0x2c3b2cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c3b30: 0x44020800
    ctx->pc = 0x2c3b30u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x2c3b34: 0xa602001a
    ctx->pc = 0x2c3b34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 2));
label_2c3b38:
    // 0x2c3b38: 0xdfb00000
    ctx->pc = 0x2c3b38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3b3c: 0xc7b70038
    ctx->pc = 0x2c3b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2c3b40: 0xc7b60030
    ctx->pc = 0x2c3b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2c3b44: 0xc7b50028
    ctx->pc = 0x2c3b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c3b48: 0xc7b40020
    ctx->pc = 0x2c3b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c3b4c: 0x3e00008
    ctx->pc = 0x2C3B4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3B50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C3A14u: goto label_2c3a14;
            case 0x2C3A40u: goto label_2c3a40;
            case 0x2C3A90u: goto label_2c3a90;
            case 0x2C3AC4u: goto label_2c3ac4;
            case 0x2C3B00u: goto label_2c3b00;
            case 0x2C3B38u: goto label_2c3b38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C3B54u;
}
