#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterDoKnockback
// Address: 0x298b48 - 0x298cd8
void CritterDoKnockback_0x298b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x298b48u;

    // 0x298b48: 0x27bdffe0
    ctx->pc = 0x298b48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x298b4c: 0xffbf0010
    ctx->pc = 0x298b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x298b50: 0xffb00000
    ctx->pc = 0x298b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x298b54: 0x80802d
    ctx->pc = 0x298b54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298b58: 0x44801000
    ctx->pc = 0x298b58u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x298b5c: 0x8e020004
    ctx->pc = 0x298b5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x298b60: 0x8c420120
    ctx->pc = 0x298b60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x298b64: 0x84440020
    ctx->pc = 0x298b64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x298b68: 0x24020004
    ctx->pc = 0x298b68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x298b6c: 0x10820057
    ctx->pc = 0x298B6Cu;
    {
        const bool branch_taken_0x298b6c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x298B70u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x298b6c) {
            ctx->pc = 0x298CCCu;
            goto label_298ccc;
        }
    }
    ctx->pc = 0x298B74u;
    // 0x298b74: 0xc60004f4
    ctx->pc = 0x298b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298b78: 0x46020036
    ctx->pc = 0x298b78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298b7c: 0x0
    ctx->pc = 0x298b7cu;
    // NOP
    // 0x298b80: 0x45000005
    ctx->pc = 0x298B80u;
    {
        const bool branch_taken_0x298b80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x298B84u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x298b80) {
            ctx->pc = 0x298B98u;
            goto label_298b98;
        }
    }
    ctx->pc = 0x298B88u;
    // 0x298b88: 0x3c0141a0
    ctx->pc = 0x298b88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16800 << 16));
    // 0x298b8c: 0x44811000
    ctx->pc = 0x298b8cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x298b90: 0x10000019
    ctx->pc = 0x298B90u;
    {
        const bool branch_taken_0x298b90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x298b90) {
            ctx->pc = 0x298BF8u;
            goto label_298bf8;
        }
    }
    ctx->pc = 0x298B98u;
label_298b98:
    // 0x298b98: 0x8e0204fc
    ctx->pc = 0x298b98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1276)));
    // 0x298b9c: 0x3c030001
    ctx->pc = 0x298b9cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x298ba0: 0x34630140
    ctx->pc = 0x298ba0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 320));
    // 0x298ba4: 0x431024
    ctx->pc = 0x298ba4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x298ba8: 0x10400005
    ctx->pc = 0x298BA8u;
    {
        const bool branch_taken_0x298ba8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x298BACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x298ba8) {
            ctx->pc = 0x298BC0u;
            goto label_298bc0;
        }
    }
    ctx->pc = 0x298BB0u;
    // 0x298bb0: 0x3c014120
    ctx->pc = 0x298bb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x298bb4: 0x44811000
    ctx->pc = 0x298bb4u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x298bb8: 0x1000000f
    ctx->pc = 0x298BB8u;
    {
        const bool branch_taken_0x298bb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x298bb8) {
            ctx->pc = 0x298BF8u;
            goto label_298bf8;
        }
    }
    ctx->pc = 0x298BC0u;
label_298bc0:
    // 0x298bc0: 0x8e0204fc
    ctx->pc = 0x298bc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1276)));
    // 0x298bc4: 0x30420020
    ctx->pc = 0x298bc4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x298bc8: 0x10400005
    ctx->pc = 0x298BC8u;
    {
        const bool branch_taken_0x298bc8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x298BCCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x298bc8) {
            ctx->pc = 0x298BE0u;
            goto label_298be0;
        }
    }
    ctx->pc = 0x298BD0u;
    // 0x298bd0: 0x3c0140f0
    ctx->pc = 0x298bd0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16624 << 16));
    // 0x298bd4: 0x44811000
    ctx->pc = 0x298bd4u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x298bd8: 0x10000007
    ctx->pc = 0x298BD8u;
    {
        const bool branch_taken_0x298bd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x298bd8) {
            ctx->pc = 0x298BF8u;
            goto label_298bf8;
        }
    }
    ctx->pc = 0x298BE0u;
label_298be0:
    // 0x298be0: 0x8e0204fc
    ctx->pc = 0x298be0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1276)));
    // 0x298be4: 0x30420010
    ctx->pc = 0x298be4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x298be8: 0x10400003
    ctx->pc = 0x298BE8u;
    {
        const bool branch_taken_0x298be8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x298BECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x298be8) {
            ctx->pc = 0x298BF8u;
            goto label_298bf8;
        }
    }
    ctx->pc = 0x298BF0u;
    // 0x298bf0: 0x3c0140a0
    ctx->pc = 0x298bf0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x298bf4: 0x44811000
    ctx->pc = 0x298bf4u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
label_298bf8:
    // 0x298bf8: 0x14820004
    ctx->pc = 0x298BF8u;
    {
        const bool branch_taken_0x298bf8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x298bf8) {
            ctx->pc = 0x298C0Cu;
            goto label_298c0c;
        }
    }
    ctx->pc = 0x298C00u;
    // 0x298c00: 0x3c0140a0
    ctx->pc = 0x298c00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x298c04: 0x44810000
    ctx->pc = 0x298c04u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x298c08: 0x46001081
    ctx->pc = 0x298c08u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_298c0c:
    // 0x298c0c: 0x44800000
    ctx->pc = 0x298c0cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x298c10: 0x46020034
    ctx->pc = 0x298c10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298c14: 0x0
    ctx->pc = 0x298c14u;
    // NOP
    // 0x298c18: 0x4500002c
    ctx->pc = 0x298C18u;
    {
        const bool branch_taken_0x298c18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x298C1Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x298c18) {
            ctx->pc = 0x298CCCu;
            goto label_298ccc;
        }
    }
    ctx->pc = 0x298C20u;
    // 0x298c20: 0xc6030500
    ctx->pc = 0x298c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x298c24: 0x460310c2
    ctx->pc = 0x298c24u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x298c28: 0xc6000510
    ctx->pc = 0x298c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298c2c: 0x460018c0
    ctx->pc = 0x298c2cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x298c30: 0xe6030510
    ctx->pc = 0x298c30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1296), bits); }
    // 0x298c34: 0xc6010504
    ctx->pc = 0x298c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298c38: 0x46011042
    ctx->pc = 0x298c38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x298c3c: 0xc6000514
    ctx->pc = 0x298c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298c40: 0x46000840
    ctx->pc = 0x298c40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x298c44: 0xe6010514
    ctx->pc = 0x298c44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1300), bits); }
    // 0x298c48: 0xc6000508
    ctx->pc = 0x298c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298c4c: 0x46001002
    ctx->pc = 0x298c4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x298c50: 0xc6020518
    ctx->pc = 0x298c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x298c54: 0x46020000
    ctx->pc = 0x298c54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x298c58: 0xe6000518
    ctx->pc = 0x298c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1304), bits); }
    // 0x298c5c: 0x46031882
    ctx->pc = 0x298c5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x298c60: 0x46010842
    ctx->pc = 0x298c60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x298c64: 0x46011080
    ctx->pc = 0x298c64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x298c68: 0x46000002
    ctx->pc = 0x298c68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x298c6c: 0x46001080
    ctx->pc = 0x298c6cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x298c70: 0x3c0144c8
    ctx->pc = 0x298c70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17608 << 16));
    // 0x298c74: 0x44810000
    ctx->pc = 0x298c74u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x298c78: 0x46020034
    ctx->pc = 0x298c78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298c7c: 0x0
    ctx->pc = 0x298c7cu;
    // NOP
    // 0x298c80: 0x4502000f
    ctx->pc = 0x298C80u;
    {
        const bool branch_taken_0x298c80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x298c80) {
            ctx->pc = 0x298C84u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 1280), GPR_U32(ctx, 0));
            ctx->pc = 0x298CC0u;
            goto label_298cc0;
        }
    }
    ctx->pc = 0x298C88u;
    // 0x298c88: 0xc0b58a4
    ctx->pc = 0x298C88u;
    SET_GPR_U32(ctx, 31, 0x298C90u);
    ctx->pc = 0x298C8Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1296));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298C90u; }
    }
    if (ctx->pc != 0x298C90u) { return; }
    ctx->pc = 0x298C90u;
    // 0x298c90: 0xc6000510
    ctx->pc = 0x298c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298c94: 0x3c014220
    ctx->pc = 0x298c94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16928 << 16));
    // 0x298c98: 0x44810800
    ctx->pc = 0x298c98u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x298c9c: 0x46010002
    ctx->pc = 0x298c9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x298ca0: 0xe6000510
    ctx->pc = 0x298ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1296), bits); }
    // 0x298ca4: 0xc6000514
    ctx->pc = 0x298ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298ca8: 0x46010002
    ctx->pc = 0x298ca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x298cac: 0xe6000514
    ctx->pc = 0x298cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1300), bits); }
    // 0x298cb0: 0xc6000518
    ctx->pc = 0x298cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298cb4: 0x46010002
    ctx->pc = 0x298cb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x298cb8: 0xe6000518
    ctx->pc = 0x298cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1304), bits); }
    // 0x298cbc: 0xae000500
    ctx->pc = 0x298cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1280), GPR_U32(ctx, 0));
label_298cc0:
    // 0x298cc0: 0xae000504
    ctx->pc = 0x298cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1284), GPR_U32(ctx, 0));
    // 0x298cc4: 0xae000508
    ctx->pc = 0x298cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1288), GPR_U32(ctx, 0));
    // 0x298cc8: 0xdfbf0010
    ctx->pc = 0x298cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_298ccc:
    // 0x298ccc: 0xdfb00000
    ctx->pc = 0x298cccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298cd0: 0x3e00008
    ctx->pc = 0x298CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298CD4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x298B98u: goto label_298b98;
            case 0x298BC0u: goto label_298bc0;
            case 0x298BE0u: goto label_298be0;
            case 0x298BF8u: goto label_298bf8;
            case 0x298C0Cu: goto label_298c0c;
            case 0x298CC0u: goto label_298cc0;
            case 0x298CCCu: goto label_298ccc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x298CD8u;
}
