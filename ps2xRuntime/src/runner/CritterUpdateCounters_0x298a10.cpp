#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterUpdateCounters
// Address: 0x298a10 - 0x298b48
void CritterUpdateCounters_0x298a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x298a10u;

    // 0x298a10: 0x80282d
    ctx->pc = 0x298a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298a14: 0x8ca30004
    ctx->pc = 0x298a14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x298a18: 0x84a20124
    ctx->pc = 0x298a18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 292)));
    // 0x298a1c: 0x8c640124
    ctx->pc = 0x298a1cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x298a20: 0x24030090
    ctx->pc = 0x298a20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 144));
    // 0x298a24: 0x431018
    ctx->pc = 0x298a24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x298a28: 0x441021
    ctx->pc = 0x298a28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x298a2c: 0xc4a10520
    ctx->pc = 0x298a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298a30: 0x44800000
    ctx->pc = 0x298a30u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x298a34: 0x46010034
    ctx->pc = 0x298a34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298a38: 0x0
    ctx->pc = 0x298a38u;
    // NOP
    // 0x298a3c: 0x4500000a
    ctx->pc = 0x298A3Cu;
    {
        const bool branch_taken_0x298a3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x298A40u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x298a3c) {
            ctx->pc = 0x298A68u;
            goto label_298a68;
        }
    }
    ctx->pc = 0x298A44u;
    // 0x298a44: 0x3c020031
    ctx->pc = 0x298a44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x298a48: 0xc440ffa4
    ctx->pc = 0x298a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298a4c: 0x46010001
    ctx->pc = 0x298a4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x298a50: 0x3c014040
    ctx->pc = 0x298a50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x298a54: 0x44810800
    ctx->pc = 0x298a54u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x298a58: 0x46000834
    ctx->pc = 0x298a58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298a5c: 0x0
    ctx->pc = 0x298a5cu;
    // NOP
    // 0x298a60: 0x45030008
    ctx->pc = 0x298A60u;
    {
        const bool branch_taken_0x298a60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x298a60) {
            ctx->pc = 0x298A64u;
            WRITE32(ADD32(GPR_U32(ctx, 5), 1272), GPR_U32(ctx, 0));
            ctx->pc = 0x298A84u;
            goto label_298a84;
        }
    }
    ctx->pc = 0x298A68u;
label_298a68:
    // 0x298a68: 0x24020022
    ctx->pc = 0x298a68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 34));
    // 0x298a6c: 0x10620004
    ctx->pc = 0x298A6Cu;
    {
        const bool branch_taken_0x298a6c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x298A70u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967232));
        if (branch_taken_0x298a6c) {
            ctx->pc = 0x298A80u;
            goto label_298a80;
        }
    }
    ctx->pc = 0x298A74u;
    // 0x298a74: 0x2c42003f
    ctx->pc = 0x298a74u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 63));
    // 0x298a78: 0x10400005
    ctx->pc = 0x298A78u;
    {
        const bool branch_taken_0x298a78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x298A7Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x298a78) {
            ctx->pc = 0x298A90u;
            goto label_298a90;
        }
    }
    ctx->pc = 0x298A80u;
label_298a80:
    // 0x298a80: 0xaca004f8
    ctx->pc = 0x298a80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1272), GPR_U32(ctx, 0));
label_298a84:
    // 0x298a84: 0xaca004fc
    ctx->pc = 0x298a84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1276), GPR_U32(ctx, 0));
    // 0x298a88: 0xaca00520
    ctx->pc = 0x298a88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1312), GPR_U32(ctx, 0));
    // 0x298a8c: 0x302d
    ctx->pc = 0x298a8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_298a90:
    // 0x298a90: 0x24aa0204
    ctx->pc = 0x298a90u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 5), 516));
    // 0x298a94: 0x44801800
    ctx->pc = 0x298a94u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 0);
    // 0x298a98: 0x3c070031
    ctx->pc = 0x298a98u;
    SET_GPR_U32(ctx, 7, ((uint32_t)49 << 16));
    // 0x298a9c: 0x3c014170
    ctx->pc = 0x298a9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16752 << 16));
    // 0x298aa0: 0x44812000
    ctx->pc = 0x298aa0u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 1);
    // 0x298aa4: 0x24a90200
    ctx->pc = 0x298aa4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 5), 512));
    // 0x298aa8: 0x24a8020c
    ctx->pc = 0x298aa8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 5), 524));
    // 0x298aac: 0x24a40208
    ctx->pc = 0x298aacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 520));
    // 0x298ab0: 0x61100
    ctx->pc = 0x298ab0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 4));
    // 0x298ab4: 0x0
    ctx->pc = 0x298ab4u;
    // NOP
label_298ab8:
    // 0x298ab8: 0x1421821
    ctx->pc = 0x298ab8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x298abc: 0xc4610000
    ctx->pc = 0x298abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298ac0: 0x46011834
    ctx->pc = 0x298ac0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298ac4: 0x0
    ctx->pc = 0x298ac4u;
    // NOP
    // 0x298ac8: 0x4502000b
    ctx->pc = 0x298AC8u;
    {
        const bool branch_taken_0x298ac8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x298ac8) {
            ctx->pc = 0x298ACCu;
            SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
            ctx->pc = 0x298AF8u;
            goto label_298af8;
        }
    }
    ctx->pc = 0x298AD0u;
    // 0x298ad0: 0xc4e0ffa4
    ctx->pc = 0x298ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298ad4: 0x46010001
    ctx->pc = 0x298ad4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x298ad8: 0x46002034
    ctx->pc = 0x298ad8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298adc: 0x0
    ctx->pc = 0x298adcu;
    // NOP
    // 0x298ae0: 0x45000003
    ctx->pc = 0x298AE0u;
    {
        const bool branch_taken_0x298ae0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x298AE4u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        if (branch_taken_0x298ae0) {
            ctx->pc = 0x298AF0u;
            goto label_298af0;
        }
    }
    ctx->pc = 0x298AE8u;
    // 0x298ae8: 0xe4430000
    ctx->pc = 0x298ae8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x298aec: 0xe4630000
    ctx->pc = 0x298aecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_298af0:
    // 0x298af0: 0x61100
    ctx->pc = 0x298af0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 4));
    // 0x298af4: 0x1021821
    ctx->pc = 0x298af4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_298af8:
    // 0x298af8: 0xc4610000
    ctx->pc = 0x298af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298afc: 0x44801000
    ctx->pc = 0x298afcu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x298b00: 0x46011034
    ctx->pc = 0x298b00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298b04: 0x0
    ctx->pc = 0x298b04u;
    // NOP
    // 0x298b08: 0x4502000a
    ctx->pc = 0x298B08u;
    {
        const bool branch_taken_0x298b08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x298b08) {
            ctx->pc = 0x298B0Cu;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x298B34u;
            goto label_298b34;
        }
    }
    ctx->pc = 0x298B10u;
    // 0x298b10: 0xc4e0ffa4
    ctx->pc = 0x298b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298b14: 0x46010001
    ctx->pc = 0x298b14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x298b18: 0x46002034
    ctx->pc = 0x298b18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298b1c: 0x0
    ctx->pc = 0x298b1cu;
    // NOP
    // 0x298b20: 0x45000003
    ctx->pc = 0x298B20u;
    {
        const bool branch_taken_0x298b20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x298B24u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        if (branch_taken_0x298b20) {
            ctx->pc = 0x298B30u;
            goto label_298b30;
        }
    }
    ctx->pc = 0x298B28u;
    // 0x298b28: 0xe4420000
    ctx->pc = 0x298b28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x298b2c: 0xe4620000
    ctx->pc = 0x298b2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_298b30:
    // 0x298b30: 0x24c60001
    ctx->pc = 0x298b30u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_298b34:
    // 0x298b34: 0x28c20004
    ctx->pc = 0x298b34u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 4));
    // 0x298b38: 0x1440ffdf
    ctx->pc = 0x298B38u;
    {
        const bool branch_taken_0x298b38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x298B3Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 4));
        if (branch_taken_0x298b38) {
            ctx->pc = 0x298AB8u;
            goto label_298ab8;
        }
    }
    ctx->pc = 0x298B40u;
    // 0x298b40: 0x3e00008
    ctx->pc = 0x298B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x298A68u: goto label_298a68;
            case 0x298A80u: goto label_298a80;
            case 0x298A84u: goto label_298a84;
            case 0x298A90u: goto label_298a90;
            case 0x298AB8u: goto label_298ab8;
            case 0x298AF0u: goto label_298af0;
            case 0x298AF8u: goto label_298af8;
            case 0x298B30u: goto label_298b30;
            case 0x298B34u: goto label_298b34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x298B48u;
}
