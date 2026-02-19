#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: find_next_milestone
// Address: 0x237ae8 - 0x237db8
void find_next_milestone_0x237ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x237ae8u;

    // 0x237ae8: 0x27bdff40
    ctx->pc = 0x237ae8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x237aec: 0xffbf0070
    ctx->pc = 0x237aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x237af0: 0xffb40060
    ctx->pc = 0x237af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x237af4: 0xffb30050
    ctx->pc = 0x237af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x237af8: 0xffb20040
    ctx->pc = 0x237af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x237afc: 0xffb10030
    ctx->pc = 0x237afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x237b00: 0xffb00020
    ctx->pc = 0x237b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x237b04: 0xe7ba00b0
    ctx->pc = 0x237b04u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x237b08: 0xe7b900a8
    ctx->pc = 0x237b08u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x237b0c: 0xe7b800a0
    ctx->pc = 0x237b0cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x237b10: 0xe7b70098
    ctx->pc = 0x237b10u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x237b14: 0xe7b60090
    ctx->pc = 0x237b14u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x237b18: 0xe7b50088
    ctx->pc = 0x237b18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x237b1c: 0xe7b40080
    ctx->pc = 0x237b1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x237b20: 0x80902d
    ctx->pc = 0x237b20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237b24: 0x46006686
    ctx->pc = 0x237b24u;
    ctx->f[26] = FPU_MOV_S(ctx->f[12]);
    // 0x237b28: 0x2413ffff
    ctx->pc = 0x237b28u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x237b2c: 0x2414ffff
    ctx->pc = 0x237b2cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x237b30: 0x3c0147c3
    ctx->pc = 0x237b30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18371 << 16));
    // 0x237b34: 0x34215000
    ctx->pc = 0x237b34u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 20480));
    // 0x237b38: 0x4481a800
    ctx->pc = 0x237b38u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x237b3c: 0x4600ae06
    ctx->pc = 0x237b3cu;
    ctx->f[24] = FPU_MOV_S(ctx->f[21]);
    // 0x237b40: 0x4600adc6
    ctx->pc = 0x237b40u;
    ctx->f[23] = FPU_MOV_S(ctx->f[21]);
    // 0x237b44: 0x6410003
    ctx->pc = 0x237B44u;
    {
        const bool branch_taken_0x237b44 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x237B48u;
        ctx->f[25] = FPU_MOV_S(ctx->f[23]);
        if (branch_taken_0x237b44) {
            ctx->pc = 0x237B54u;
            goto label_237b54;
        }
    }
    ctx->pc = 0x237B4Cu;
    // 0x237b4c: 0x1000008b
    ctx->pc = 0x237B4Cu;
    {
        const bool branch_taken_0x237b4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x237B50u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x237b4c) {
            ctx->pc = 0x237D7Cu;
            goto label_237d7c;
        }
    }
    ctx->pc = 0x237B54u;
label_237b54:
    // 0x237b54: 0x3c030034
    ctx->pc = 0x237b54u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x237b58: 0x24638b80
    ctx->pc = 0x237b58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937472));
    // 0x237b5c: 0x24020070
    ctx->pc = 0x237b5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 112));
    // 0x237b60: 0x2421018
    ctx->pc = 0x237b60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x237b64: 0x431021
    ctx->pc = 0x237b64u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x237b68: 0xc4400030
    ctx->pc = 0x237b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237b6c: 0xe7a00010
    ctx->pc = 0x237b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x237b70: 0xc4400034
    ctx->pc = 0x237b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237b74: 0xe7a00014
    ctx->pc = 0x237b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x237b78: 0xc4400038
    ctx->pc = 0x237b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237b7c: 0xe7a00018
    ctx->pc = 0x237b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x237b80: 0xc44c0020
    ctx->pc = 0x237b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x237b84: 0xc0ba04a
    ctx->pc = 0x237B84u;
    SET_GPR_U32(ctx, 31, 0x237B8Cu);
    ctx->pc = 0x237B88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237B8Cu; }
    }
    if (ctx->pc != 0x237B8Cu) { return; }
    ctx->pc = 0x237B8Cu;
    // 0x237b8c: 0x3c014049
    ctx->pc = 0x237b8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x237b90: 0x34210fdb
    ctx->pc = 0x237b90u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x237b94: 0x44810800
    ctx->pc = 0x237b94u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x237b98: 0x46010500
    ctx->pc = 0x237b98u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x237b9c: 0x46140834
    ctx->pc = 0x237b9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x237ba0: 0x45000006
    ctx->pc = 0x237BA0u;
    {
        const bool branch_taken_0x237ba0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x237ba0) {
            ctx->pc = 0x237BBCu;
            goto label_237bbc;
        }
    }
    ctx->pc = 0x237BA8u;
    // 0x237ba8: 0x3c0140c9
    ctx->pc = 0x237ba8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x237bac: 0x34210fdb
    ctx->pc = 0x237bacu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x237bb0: 0x44810000
    ctx->pc = 0x237bb0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x237bb4: 0x1000000c
    ctx->pc = 0x237BB4u;
    {
        const bool branch_taken_0x237bb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x237BB8u;
        ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x237bb4) {
            ctx->pc = 0x237BE8u;
            goto label_237be8;
        }
    }
    ctx->pc = 0x237BBCu;
label_237bbc:
    // 0x237bbc: 0x3c01c049
    ctx->pc = 0x237bbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x237bc0: 0x34210fdb
    ctx->pc = 0x237bc0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x237bc4: 0x44810000
    ctx->pc = 0x237bc4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x237bc8: 0x4600a036
    ctx->pc = 0x237bc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x237bcc: 0x0
    ctx->pc = 0x237bccu;
    // NOP
    // 0x237bd0: 0x45020005
    ctx->pc = 0x237BD0u;
    {
        const bool branch_taken_0x237bd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x237bd0) {
            ctx->pc = 0x237BD4u;
            ctx->f[0] = FPU_MOV_S(ctx->f[20]);
            ctx->pc = 0x237BE8u;
            goto label_237be8;
        }
    }
    ctx->pc = 0x237BD8u;
    // 0x237bd8: 0x3c0140c9
    ctx->pc = 0x237bd8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x237bdc: 0x34210fdb
    ctx->pc = 0x237bdcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x237be0: 0x44810000
    ctx->pc = 0x237be0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x237be4: 0x4600a000
    ctx->pc = 0x237be4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_237be8:
    // 0x237be8: 0x46000506
    ctx->pc = 0x237be8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x237bec: 0x3c020034
    ctx->pc = 0x237becu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x237bf0: 0x24518b80
    ctx->pc = 0x237bf0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294937472));
    // 0x237bf4: 0x3c020034
    ctx->pc = 0x237bf4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x237bf8: 0x8c42c380
    ctx->pc = 0x237bf8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294951808)));
    // 0x237bfc: 0x1840004f
    ctx->pc = 0x237BFCu;
    {
        const bool branch_taken_0x237bfc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x237C00u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x237bfc) {
            ctx->pc = 0x237D3Cu;
            goto label_237d3c;
        }
    }
    ctx->pc = 0x237C04u;
    // 0x237c04: 0x3c0140c9
    ctx->pc = 0x237c04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x237c08: 0x34210fdb
    ctx->pc = 0x237c08u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x237c0c: 0x4481b000
    ctx->pc = 0x237c0cu;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 1);
label_237c10:
    // 0x237c10: 0x12120044
    ctx->pc = 0x237C10u;
    {
        const bool branch_taken_0x237c10 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 18));
        ctx->pc = 0x237C14u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 48));
        if (branch_taken_0x237c10) {
            ctx->pc = 0x237D24u;
            goto label_237d24;
        }
    }
    ctx->pc = 0x237C18u;
    // 0x237c18: 0xc09a2aa
    ctx->pc = 0x237C18u;
    SET_GPR_U32(ctx, 31, 0x237C20u);
    ctx->pc = 0x237C1Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x268AA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_yaw_0x268aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237C20u; }
    }
    if (ctx->pc != 0x237C20u) { return; }
    ctx->pc = 0x237C20u;
    // 0x237c20: 0x46140041
    ctx->pc = 0x237c20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x237c24: 0x3c014049
    ctx->pc = 0x237c24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x237c28: 0x34210fdb
    ctx->pc = 0x237c28u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x237c2c: 0x44810000
    ctx->pc = 0x237c2cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x237c30: 0x46010034
    ctx->pc = 0x237c30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x237c34: 0x45000003
    ctx->pc = 0x237C34u;
    {
        const bool branch_taken_0x237c34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x237c34) {
            ctx->pc = 0x237C44u;
            goto label_237c44;
        }
    }
    ctx->pc = 0x237C3Cu;
    // 0x237c3c: 0x10000009
    ctx->pc = 0x237C3Cu;
    {
        const bool branch_taken_0x237c3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x237C40u;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[22]);
        if (branch_taken_0x237c3c) {
            ctx->pc = 0x237C64u;
            goto label_237c64;
        }
    }
    ctx->pc = 0x237C44u;
label_237c44:
    // 0x237c44: 0x3c01c049
    ctx->pc = 0x237c44u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x237c48: 0x34210fdb
    ctx->pc = 0x237c48u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x237c4c: 0x44810000
    ctx->pc = 0x237c4cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x237c50: 0x46000836
    ctx->pc = 0x237c50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x237c54: 0x0
    ctx->pc = 0x237c54u;
    // NOP
    // 0x237c58: 0x45000002
    ctx->pc = 0x237C58u;
    {
        const bool branch_taken_0x237c58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x237C5Cu;
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        if (branch_taken_0x237c58) {
            ctx->pc = 0x237C64u;
            goto label_237c64;
        }
    }
    ctx->pc = 0x237C60u;
    // 0x237c60: 0x46160800
    ctx->pc = 0x237c60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
label_237c64:
    // 0x237c64: 0x46000045
    ctx->pc = 0x237c64u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x237c68: 0x461a0836
    ctx->pc = 0x237c68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x237c6c: 0x0
    ctx->pc = 0x237c6cu;
    // NOP
    // 0x237c70: 0x4500002c
    ctx->pc = 0x237C70u;
    {
        const bool branch_taken_0x237c70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x237C74u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x237c70) {
            ctx->pc = 0x237D24u;
            goto label_237d24;
        }
    }
    ctx->pc = 0x237C78u;
    // 0x237c78: 0xc6230030
    ctx->pc = 0x237c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x237c7c: 0x460018c1
    ctx->pc = 0x237c7cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x237c80: 0xe7a30000
    ctx->pc = 0x237c80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x237c84: 0xc6220034
    ctx->pc = 0x237c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x237c88: 0xc7a00014
    ctx->pc = 0x237c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237c8c: 0x46001081
    ctx->pc = 0x237c8cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x237c90: 0xe7a20004
    ctx->pc = 0x237c90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x237c94: 0xc6200038
    ctx->pc = 0x237c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237c98: 0xc7a10018
    ctx->pc = 0x237c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x237c9c: 0x46010001
    ctx->pc = 0x237c9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x237ca0: 0xe7a00008
    ctx->pc = 0x237ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x237ca4: 0x460318c2
    ctx->pc = 0x237ca4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x237ca8: 0x46021082
    ctx->pc = 0x237ca8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x237cac: 0x460218c0
    ctx->pc = 0x237cacu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x237cb0: 0x46000002
    ctx->pc = 0x237cb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x237cb4: 0x46001b00
    ctx->pc = 0x237cb4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x237cb8: 0x0
    ctx->pc = 0x237cb8u;
    // NOP
    // 0x237cbc: 0x0
    ctx->pc = 0x237cbcu;
    // NOP
    // 0x237cc0: 0x460c0004
    ctx->pc = 0x237cc0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x237cc4: 0x46000032
    ctx->pc = 0x237cc4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x237cc8: 0x45010003
    ctx->pc = 0x237CC8u;
    {
        const bool branch_taken_0x237cc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x237cc8) {
            ctx->pc = 0x237CD8u;
            goto label_237cd8;
        }
    }
    ctx->pc = 0x237CD0u;
    // 0x237cd0: 0xc0ba284
    ctx->pc = 0x237CD0u;
    SET_GPR_U32(ctx, 31, 0x237CD8u);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237CD8u; }
    }
    if (ctx->pc != 0x237CD8u) { return; }
    ctx->pc = 0x237CD8u;
label_237cd8:
    // 0x237cd8: 0x46180034
    ctx->pc = 0x237cd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x237cdc: 0x45000009
    ctx->pc = 0x237CDCu;
    {
        const bool branch_taken_0x237cdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x237cdc) {
            ctx->pc = 0x237D04u;
            goto label_237d04;
        }
    }
    ctx->pc = 0x237CE4u;
    // 0x237ce4: 0x260a02d
    ctx->pc = 0x237ce4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237ce8: 0x4600c546
    ctx->pc = 0x237ce8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[24]);
    // 0x237cec: 0x4600be46
    ctx->pc = 0x237cecu;
    ctx->f[25] = FPU_MOV_S(ctx->f[23]);
    // 0x237cf0: 0x200982d
    ctx->pc = 0x237cf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237cf4: 0x46000606
    ctx->pc = 0x237cf4u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x237cf8: 0xc7a00004
    ctx->pc = 0x237cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237cfc: 0x10000009
    ctx->pc = 0x237CFCu;
    {
        const bool branch_taken_0x237cfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x237D00u;
        ctx->f[23] = FPU_ABS_S(ctx->f[0]);
        if (branch_taken_0x237cfc) {
            ctx->pc = 0x237D24u;
            goto label_237d24;
        }
    }
    ctx->pc = 0x237D04u;
label_237d04:
    // 0x237d04: 0x46150034
    ctx->pc = 0x237d04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x237d08: 0x0
    ctx->pc = 0x237d08u;
    // NOP
    // 0x237d0c: 0x45020006
    ctx->pc = 0x237D0Cu;
    {
        const bool branch_taken_0x237d0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x237d0c) {
            ctx->pc = 0x237D10u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x237D28u;
            goto label_237d28;
        }
    }
    ctx->pc = 0x237D14u;
    // 0x237d14: 0x200a02d
    ctx->pc = 0x237d14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237d18: 0x46000546
    ctx->pc = 0x237d18u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x237d1c: 0xc7a00004
    ctx->pc = 0x237d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237d20: 0x46000645
    ctx->pc = 0x237d20u;
    ctx->f[25] = FPU_ABS_S(ctx->f[0]);
label_237d24:
    // 0x237d24: 0x26100001
    ctx->pc = 0x237d24u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_237d28:
    // 0x237d28: 0x3c020034
    ctx->pc = 0x237d28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x237d2c: 0x8c42c380
    ctx->pc = 0x237d2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294951808)));
    // 0x237d30: 0x202102a
    ctx->pc = 0x237d30u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x237d34: 0x1440ffb6
    ctx->pc = 0x237D34u;
    {
        const bool branch_taken_0x237d34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x237D38u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 112));
        if (branch_taken_0x237d34) {
            ctx->pc = 0x237C10u;
            goto label_237c10;
        }
    }
    ctx->pc = 0x237D3Cu;
label_237d3c:
    // 0x237d3c: 0x4617c834
    ctx->pc = 0x237d3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x237d40: 0x0
    ctx->pc = 0x237d40u;
    // NOP
    // 0x237d44: 0x45030001
    ctx->pc = 0x237D44u;
    {
        const bool branch_taken_0x237d44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x237d44) {
            ctx->pc = 0x237D48u;
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x237D4Cu;
            goto label_237d4c;
        }
    }
    ctx->pc = 0x237D4Cu;
label_237d4c:
    // 0x237d4c: 0x661000b
    ctx->pc = 0x237D4Cu;
    {
        const bool branch_taken_0x237d4c = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x237D50u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x237d4c) {
            ctx->pc = 0x237D7Cu;
            goto label_237d7c;
        }
    }
    ctx->pc = 0x237D54u;
    // 0x237d54: 0x3c020031
    ctx->pc = 0x237d54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x237d58: 0xdc420e28
    ctx->pc = 0x237d58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x237d5c: 0x30420010
    ctx->pc = 0x237d5cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x237d60: 0x10400004
    ctx->pc = 0x237D60u;
    {
        const bool branch_taken_0x237d60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x237D64u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x237d60) {
            ctx->pc = 0x237D74u;
            goto label_237d74;
        }
    }
    ctx->pc = 0x237D68u;
    // 0x237d68: 0x24847cd0
    ctx->pc = 0x237d68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 31952));
    // 0x237d6c: 0xc0b492e
    ctx->pc = 0x237D6Cu;
    SET_GPR_U32(ctx, 31, 0x237D74u);
    ctx->pc = 0x237D70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237D74u; }
    }
    if (ctx->pc != 0x237D74u) { return; }
    ctx->pc = 0x237D74u;
label_237d74:
    // 0x237d74: 0x240982d
    ctx->pc = 0x237d74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237d78: 0x260102d
    ctx->pc = 0x237d78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_237d7c:
    // 0x237d7c: 0xdfbf0070
    ctx->pc = 0x237d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x237d80: 0xdfb40060
    ctx->pc = 0x237d80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x237d84: 0xdfb30050
    ctx->pc = 0x237d84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x237d88: 0xdfb20040
    ctx->pc = 0x237d88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x237d8c: 0xdfb10030
    ctx->pc = 0x237d8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x237d90: 0xdfb00020
    ctx->pc = 0x237d90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237d94: 0xc7ba00b0
    ctx->pc = 0x237d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x237d98: 0xc7b900a8
    ctx->pc = 0x237d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x237d9c: 0xc7b800a0
    ctx->pc = 0x237d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x237da0: 0xc7b70098
    ctx->pc = 0x237da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x237da4: 0xc7b60090
    ctx->pc = 0x237da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x237da8: 0xc7b50088
    ctx->pc = 0x237da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x237dac: 0xc7b40080
    ctx->pc = 0x237dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x237db0: 0x3e00008
    ctx->pc = 0x237DB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237DB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x237B54u: goto label_237b54;
            case 0x237BBCu: goto label_237bbc;
            case 0x237BE8u: goto label_237be8;
            case 0x237C10u: goto label_237c10;
            case 0x237C44u: goto label_237c44;
            case 0x237C64u: goto label_237c64;
            case 0x237CD8u: goto label_237cd8;
            case 0x237D04u: goto label_237d04;
            case 0x237D24u: goto label_237d24;
            case 0x237D28u: goto label_237d28;
            case 0x237D3Cu: goto label_237d3c;
            case 0x237D4Cu: goto label_237d4c;
            case 0x237D74u: goto label_237d74;
            case 0x237D7Cu: goto label_237d7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x237DB8u;
}
