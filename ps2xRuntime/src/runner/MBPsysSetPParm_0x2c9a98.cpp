#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBPsysSetPParm
// Address: 0x2c9a98 - 0x2c9bd0
void MBPsysSetPParm_0x2c9a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c9a98u;

    // 0x2c9a98: 0x8c860070
    ctx->pc = 0x2c9a98u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2c9a9c: 0x90c20037
    ctx->pc = 0x2c9a9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 55)));
    // 0x2c9aa0: 0x2c420002
    ctx->pc = 0x2c9aa0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x2c9aa4: 0x14400003
    ctx->pc = 0x2C9AA4u;
    {
        const bool branch_taken_0x2c9aa4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C9AA8u;
        ctx->f[3] = FPU_MOV_S(ctx->f[15]);
        if (branch_taken_0x2c9aa4) {
            ctx->pc = 0x2C9AB4u;
            goto label_2c9ab4;
        }
    }
    ctx->pc = 0x2C9AACu;
    // 0x2c9aac: 0x80b2558
    ctx->pc = 0x2C9AACu;
    ctx->pc = 0x2C9AB0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C9560u;
    psysAttribErr_0x2c9560(rdram, ctx, runtime); return;
    ctx->pc = 0x2C9AB4u;
label_2c9ab4:
    // 0x2c9ab4: 0x2ca20005
    ctx->pc = 0x2c9ab4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 5));
    // 0x2c9ab8: 0x54400004
    ctx->pc = 0x2C9AB8u;
    {
        const bool branch_taken_0x2c9ab8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c9ab8) {
            ctx->pc = 0x2C9ABCu;
            SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
            ctx->pc = 0x2C9ACCu;
            goto label_2c9acc;
        }
    }
    ctx->pc = 0x2C9AC0u;
    // 0x2c9ac0: 0x3c04003b
    ctx->pc = 0x2c9ac0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2c9ac4: 0x80b492e
    ctx->pc = 0x2C9AC4u;
    ctx->pc = 0x2C9AC8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29800));
    ctx->pc = 0x2D24B8u;
    Errorf_0x2d24b8(rdram, ctx, runtime); return;
    ctx->pc = 0x2C9ACCu;
label_2c9acc:
    // 0x2c9acc: 0x2442aad8
    ctx->pc = 0x2c9accu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294945496));
    // 0x2c9ad0: 0x52100
    ctx->pc = 0x2c9ad0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 4));
    // 0x2c9ad4: 0x821821
    ctx->pc = 0x2c9ad4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c9ad8: 0xc46f0000
    ctx->pc = 0x2c9ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2c9adc: 0x441821
    ctx->pc = 0x2c9adcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c9ae0: 0xc4610004
    ctx->pc = 0x2c9ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9ae4: 0x60102d
    ctx->pc = 0x2c9ae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9ae8: 0xc4420008
    ctx->pc = 0x2c9ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c9aec: 0x24c200e0
    ctx->pc = 0x2c9aecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 224));
    // 0x2c9af0: 0x460f6002
    ctx->pc = 0x2c9af0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[15]);
    // 0x2c9af4: 0x46010034
    ctx->pc = 0x2c9af4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9af8: 0x0
    ctx->pc = 0x2c9af8u;
    // NOP
    // 0x2c9afc: 0x45000003
    ctx->pc = 0x2C9AFCu;
    {
        const bool branch_taken_0x2c9afc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C9B00u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        if (branch_taken_0x2c9afc) {
            ctx->pc = 0x2C9B0Cu;
            goto label_2c9b0c;
        }
    }
    ctx->pc = 0x2C9B04u;
    // 0x2c9b04: 0x10000006
    ctx->pc = 0x2C9B04u;
    {
        const bool branch_taken_0x2c9b04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C9B08u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        if (branch_taken_0x2c9b04) {
            ctx->pc = 0x2C9B20u;
            goto label_2c9b20;
        }
    }
    ctx->pc = 0x2C9B0Cu;
label_2c9b0c:
    // 0x2c9b0c: 0x46001034
    ctx->pc = 0x2c9b0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9b10: 0x0
    ctx->pc = 0x2c9b10u;
    // NOP
    // 0x2c9b14: 0x45020002
    ctx->pc = 0x2C9B14u;
    {
        const bool branch_taken_0x2c9b14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c9b14) {
            ctx->pc = 0x2C9B18u;
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
            ctx->pc = 0x2C9B20u;
            goto label_2c9b20;
        }
    }
    ctx->pc = 0x2C9B1Cu;
    // 0x2c9b1c: 0xe4420000
    ctx->pc = 0x2c9b1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2c9b20:
    // 0x2c9b20: 0x51100
    ctx->pc = 0x2c9b20u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
    // 0x2c9b24: 0x24c300e4
    ctx->pc = 0x2c9b24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 228));
    // 0x2c9b28: 0x460f6802
    ctx->pc = 0x2c9b28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[15]);
    // 0x2c9b2c: 0x46010034
    ctx->pc = 0x2c9b2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9b30: 0x0
    ctx->pc = 0x2c9b30u;
    // NOP
    // 0x2c9b34: 0x45000003
    ctx->pc = 0x2C9B34u;
    {
        const bool branch_taken_0x2c9b34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C9B38u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x2c9b34) {
            ctx->pc = 0x2C9B44u;
            goto label_2c9b44;
        }
    }
    ctx->pc = 0x2C9B3Cu;
    // 0x2c9b3c: 0x10000007
    ctx->pc = 0x2C9B3Cu;
    {
        const bool branch_taken_0x2c9b3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C9B40u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        if (branch_taken_0x2c9b3c) {
            ctx->pc = 0x2C9B5Cu;
            goto label_2c9b5c;
        }
    }
    ctx->pc = 0x2C9B44u;
label_2c9b44:
    // 0x2c9b44: 0x46001034
    ctx->pc = 0x2c9b44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9b48: 0x0
    ctx->pc = 0x2c9b48u;
    // NOP
    // 0x2c9b4c: 0x45020002
    ctx->pc = 0x2C9B4Cu;
    {
        const bool branch_taken_0x2c9b4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c9b4c) {
            ctx->pc = 0x2C9B50u;
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
            ctx->pc = 0x2C9B58u;
            goto label_2c9b58;
        }
    }
    ctx->pc = 0x2C9B54u;
    // 0x2c9b54: 0xe4620000
    ctx->pc = 0x2c9b54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2c9b58:
    // 0x2c9b58: 0x51100
    ctx->pc = 0x2c9b58u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
label_2c9b5c:
    // 0x2c9b5c: 0x24c300e8
    ctx->pc = 0x2c9b5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 232));
    // 0x2c9b60: 0x460f7002
    ctx->pc = 0x2c9b60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[15]);
    // 0x2c9b64: 0x46010034
    ctx->pc = 0x2c9b64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9b68: 0x0
    ctx->pc = 0x2c9b68u;
    // NOP
    // 0x2c9b6c: 0x45000003
    ctx->pc = 0x2C9B6Cu;
    {
        const bool branch_taken_0x2c9b6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C9B70u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x2c9b6c) {
            ctx->pc = 0x2C9B7Cu;
            goto label_2c9b7c;
        }
    }
    ctx->pc = 0x2C9B74u;
    // 0x2c9b74: 0x10000006
    ctx->pc = 0x2C9B74u;
    {
        const bool branch_taken_0x2c9b74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C9B78u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        if (branch_taken_0x2c9b74) {
            ctx->pc = 0x2C9B90u;
            goto label_2c9b90;
        }
    }
    ctx->pc = 0x2C9B7Cu;
label_2c9b7c:
    // 0x2c9b7c: 0x46001034
    ctx->pc = 0x2c9b7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9b80: 0x0
    ctx->pc = 0x2c9b80u;
    // NOP
    // 0x2c9b84: 0x45020002
    ctx->pc = 0x2C9B84u;
    {
        const bool branch_taken_0x2c9b84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c9b84) {
            ctx->pc = 0x2C9B88u;
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
            ctx->pc = 0x2C9B90u;
            goto label_2c9b90;
        }
    }
    ctx->pc = 0x2C9B8Cu;
    // 0x2c9b8c: 0xe4620000
    ctx->pc = 0x2c9b8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2c9b90:
    // 0x2c9b90: 0x51100
    ctx->pc = 0x2c9b90u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
    // 0x2c9b94: 0x24c300ec
    ctx->pc = 0x2c9b94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 236));
    // 0x2c9b98: 0x460f1802
    ctx->pc = 0x2c9b98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[15]);
    // 0x2c9b9c: 0x46010034
    ctx->pc = 0x2c9b9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9ba0: 0x0
    ctx->pc = 0x2c9ba0u;
    // NOP
    // 0x2c9ba4: 0x45000003
    ctx->pc = 0x2C9BA4u;
    {
        const bool branch_taken_0x2c9ba4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C9BA8u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x2c9ba4) {
            ctx->pc = 0x2C9BB4u;
            goto label_2c9bb4;
        }
    }
    ctx->pc = 0x2C9BACu;
    // 0x2c9bac: 0x3e00008
    ctx->pc = 0x2C9BACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9BB0u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C9AB4u: goto label_2c9ab4;
            case 0x2C9ACCu: goto label_2c9acc;
            case 0x2C9B0Cu: goto label_2c9b0c;
            case 0x2C9B20u: goto label_2c9b20;
            case 0x2C9B44u: goto label_2c9b44;
            case 0x2C9B58u: goto label_2c9b58;
            case 0x2C9B5Cu: goto label_2c9b5c;
            case 0x2C9B7Cu: goto label_2c9b7c;
            case 0x2C9B90u: goto label_2c9b90;
            case 0x2C9BB4u: goto label_2c9bb4;
            case 0x2C9BC8u: goto label_2c9bc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C9BB4u;
label_2c9bb4:
    // 0x2c9bb4: 0x46001034
    ctx->pc = 0x2c9bb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9bb8: 0x45000003
    ctx->pc = 0x2C9BB8u;
    {
        const bool branch_taken_0x2c9bb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c9bb8) {
            ctx->pc = 0x2C9BC8u;
            goto label_2c9bc8;
        }
    }
    ctx->pc = 0x2C9BC0u;
    // 0x2c9bc0: 0x3e00008
    ctx->pc = 0x2C9BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9BC4u;
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C9AB4u: goto label_2c9ab4;
            case 0x2C9ACCu: goto label_2c9acc;
            case 0x2C9B0Cu: goto label_2c9b0c;
            case 0x2C9B20u: goto label_2c9b20;
            case 0x2C9B44u: goto label_2c9b44;
            case 0x2C9B58u: goto label_2c9b58;
            case 0x2C9B5Cu: goto label_2c9b5c;
            case 0x2C9B7Cu: goto label_2c9b7c;
            case 0x2C9B90u: goto label_2c9b90;
            case 0x2C9BB4u: goto label_2c9bb4;
            case 0x2C9BC8u: goto label_2c9bc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C9BC8u;
label_2c9bc8:
    // 0x2c9bc8: 0x3e00008
    ctx->pc = 0x2C9BC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9BCCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C9AB4u: goto label_2c9ab4;
            case 0x2C9ACCu: goto label_2c9acc;
            case 0x2C9B0Cu: goto label_2c9b0c;
            case 0x2C9B20u: goto label_2c9b20;
            case 0x2C9B44u: goto label_2c9b44;
            case 0x2C9B58u: goto label_2c9b58;
            case 0x2C9B5Cu: goto label_2c9b5c;
            case 0x2C9B7Cu: goto label_2c9b7c;
            case 0x2C9B90u: goto label_2c9b90;
            case 0x2C9BB4u: goto label_2c9bb4;
            case 0x2C9BC8u: goto label_2c9bc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C9BD0u;
}
