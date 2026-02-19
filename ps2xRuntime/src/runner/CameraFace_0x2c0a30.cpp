#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CameraFace
// Address: 0x2c0a30 - 0x2c0c14
void CameraFace_0x2c0a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c0a30u;

    // 0x2c0a30: 0x27bdffc0
    ctx->pc = 0x2c0a30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c0a34: 0xffbf0030
    ctx->pc = 0x2c0a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c0a38: 0xffb10020
    ctx->pc = 0x2c0a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2c0a3c: 0xffb00010
    ctx->pc = 0x2c0a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2c0a40: 0x3c020036
    ctx->pc = 0x2c0a40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c0a44: 0x8c51dee0
    ctx->pc = 0x2c0a44u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2c0a48: 0x3c02003d
    ctx->pc = 0x2c0a48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c0a4c: 0x8c43a0f0
    ctx->pc = 0x2c0a4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294942960)));
    // 0x2c0a50: 0x32980
    ctx->pc = 0x2c0a50u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 6));
    // 0x2c0a54: 0x3c02003d
    ctx->pc = 0x2c0a54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c0a58: 0x2442a100
    ctx->pc = 0x2c0a58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294942976));
    // 0x2c0a5c: 0xa28021
    ctx->pc = 0x2c0a5cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c0a60: 0x3c02003d
    ctx->pc = 0x2c0a60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c0a64: 0x2442b100
    ctx->pc = 0x2c0a64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947072));
    // 0x2c0a68: 0x31880
    ctx->pc = 0x2c0a68u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c0a6c: 0x621821
    ctx->pc = 0x2c0a6cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c0a70: 0x3c020f00
    ctx->pc = 0x2c0a70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)3840 << 16));
    // 0x2c0a74: 0x822024
    ctx->pc = 0x2c0a74u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c0a78: 0x3c020400
    ctx->pc = 0x2c0a78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1024 << 16));
    // 0x2c0a7c: 0x10820034
    ctx->pc = 0x2C0A7Cu;
    {
        const bool branch_taken_0x2c0a7c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2C0A80u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x2c0a7c) {
            ctx->pc = 0x2C0B50u;
            goto label_2c0b50;
        }
    }
    ctx->pc = 0x2C0A84u;
    // 0x2c0a84: 0x44102a
    ctx->pc = 0x2c0a84u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x2c0a88: 0x1440000f
    ctx->pc = 0x2C0A88u;
    {
        const bool branch_taken_0x2c0a88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C0A8Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)1536 << 16));
        if (branch_taken_0x2c0a88) {
            ctx->pc = 0x2C0AC8u;
            goto label_2c0ac8;
        }
    }
    ctx->pc = 0x2C0A90u;
    // 0x2c0a90: 0x3c020200
    ctx->pc = 0x2c0a90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)512 << 16));
    // 0x2c0a94: 0x10820024
    ctx->pc = 0x2C0A94u;
    {
        const bool branch_taken_0x2c0a94 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2C0A98u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
        if (branch_taken_0x2c0a94) {
            ctx->pc = 0x2C0B28u;
            goto label_2c0b28;
        }
    }
    ctx->pc = 0x2C0A9Cu;
    // 0x2c0a9c: 0x14400006
    ctx->pc = 0x2C0A9Cu;
    {
        const bool branch_taken_0x2c0a9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C0AA0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)768 << 16));
        if (branch_taken_0x2c0a9c) {
            ctx->pc = 0x2C0AB8u;
            goto label_2c0ab8;
        }
    }
    ctx->pc = 0x2C0AA4u;
    // 0x2c0aa4: 0x3c020100
    ctx->pc = 0x2c0aa4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)256 << 16));
    // 0x2c0aa8: 0x10820016
    ctx->pc = 0x2C0AA8u;
    {
        const bool branch_taken_0x2c0aa8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2C0AACu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2c0aa8) {
            ctx->pc = 0x2C0B04u;
            goto label_2c0b04;
        }
    }
    ctx->pc = 0x2C0AB0u;
    // 0x2c0ab0: 0x10000055
    ctx->pc = 0x2C0AB0u;
    {
        const bool branch_taken_0x2c0ab0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0AB4u;
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2c0ab0) {
            ctx->pc = 0x2C0C08u;
            goto label_2c0c08;
        }
    }
    ctx->pc = 0x2C0AB8u;
label_2c0ab8:
    // 0x2c0ab8: 0x1082001f
    ctx->pc = 0x2C0AB8u;
    {
        const bool branch_taken_0x2c0ab8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2C0ABCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2c0ab8) {
            ctx->pc = 0x2C0B38u;
            goto label_2c0b38;
        }
    }
    ctx->pc = 0x2C0AC0u;
    // 0x2c0ac0: 0x10000051
    ctx->pc = 0x2C0AC0u;
    {
        const bool branch_taken_0x2c0ac0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0AC4u;
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2c0ac0) {
            ctx->pc = 0x2C0C08u;
            goto label_2c0c08;
        }
    }
    ctx->pc = 0x2C0AC8u;
label_2c0ac8:
    // 0x2c0ac8: 0x10820041
    ctx->pc = 0x2C0AC8u;
    {
        const bool branch_taken_0x2c0ac8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2C0ACCu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
        if (branch_taken_0x2c0ac8) {
            ctx->pc = 0x2C0BD0u;
            goto label_2c0bd0;
        }
    }
    ctx->pc = 0x2C0AD0u;
    // 0x2c0ad0: 0x14400006
    ctx->pc = 0x2C0AD0u;
    {
        const bool branch_taken_0x2c0ad0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C0AD4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)1792 << 16));
        if (branch_taken_0x2c0ad0) {
            ctx->pc = 0x2C0AECu;
            goto label_2c0aec;
        }
    }
    ctx->pc = 0x2C0AD8u;
    // 0x2c0ad8: 0x3c020500
    ctx->pc = 0x2c0ad8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1280 << 16));
    // 0x2c0adc: 0x10820035
    ctx->pc = 0x2C0ADCu;
    {
        const bool branch_taken_0x2c0adc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2C0AE0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2c0adc) {
            ctx->pc = 0x2C0BB4u;
            goto label_2c0bb4;
        }
    }
    ctx->pc = 0x2C0AE4u;
    // 0x2c0ae4: 0x10000048
    ctx->pc = 0x2C0AE4u;
    {
        const bool branch_taken_0x2c0ae4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0AE8u;
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2c0ae4) {
            ctx->pc = 0x2C0C08u;
            goto label_2c0c08;
        }
    }
    ctx->pc = 0x2C0AECu;
label_2c0aec:
    // 0x2c0aec: 0x1082003f
    ctx->pc = 0x2C0AECu;
    {
        const bool branch_taken_0x2c0aec = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2C0AF0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)2048 << 16));
        if (branch_taken_0x2c0aec) {
            ctx->pc = 0x2C0BECu;
            goto label_2c0bec;
        }
    }
    ctx->pc = 0x2C0AF4u;
    // 0x2c0af4: 0x10820008
    ctx->pc = 0x2C0AF4u;
    {
        const bool branch_taken_0x2c0af4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2C0AF8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2c0af4) {
            ctx->pc = 0x2C0B18u;
            goto label_2c0b18;
        }
    }
    ctx->pc = 0x2C0AFCu;
    // 0x2c0afc: 0x10000042
    ctx->pc = 0x2C0AFCu;
    {
        const bool branch_taken_0x2c0afc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0B00u;
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2c0afc) {
            ctx->pc = 0x2C0C08u;
            goto label_2c0c08;
        }
    }
    ctx->pc = 0x2C0B04u;
label_2c0b04:
    // 0x2c0b04: 0x44806000
    ctx->pc = 0x2c0b04u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x2c0b08: 0xc0b20a6
    ctx->pc = 0x2C0B08u;
    SET_GPR_U32(ctx, 31, 0x2C0B10u);
    ctx->pc = 0x2C0B0Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C8298u;
    {
        const uint32_t __entryPc = ctx->pc;
        FaceCamMat_0x2c8298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0B10u; }
    }
    if (ctx->pc != 0x2C0B10u) { return; }
    ctx->pc = 0x2C0B10u;
    // 0x2c0b10: 0x1000003c
    ctx->pc = 0x2C0B10u;
    {
        const bool branch_taken_0x2c0b10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0B14u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2c0b10) {
            ctx->pc = 0x2C0C04u;
            goto label_2c0c04;
        }
    }
    ctx->pc = 0x2C0B18u;
label_2c0b18:
    // 0x2c0b18: 0xc0b20f8
    ctx->pc = 0x2C0B18u;
    SET_GPR_U32(ctx, 31, 0x2C0B20u);
    ctx->pc = 0x2C0B1Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C83E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        TopFaceMat_0x2c83e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0B20u; }
    }
    if (ctx->pc != 0x2C0B20u) { return; }
    ctx->pc = 0x2C0B20u;
    // 0x2c0b20: 0x10000038
    ctx->pc = 0x2C0B20u;
    {
        const bool branch_taken_0x2c0b20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0B24u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2c0b20) {
            ctx->pc = 0x2C0C04u;
            goto label_2c0c04;
        }
    }
    ctx->pc = 0x2C0B28u;
label_2c0b28:
    // 0x2c0b28: 0xc0b2062
    ctx->pc = 0x2C0B28u;
    SET_GPR_U32(ctx, 31, 0x2C0B30u);
    ctx->pc = 0x2C0B2Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C8188u;
    {
        const uint32_t __entryPc = ctx->pc;
        QuickYawMat_0x2c8188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0B30u; }
    }
    if (ctx->pc != 0x2C0B30u) { return; }
    ctx->pc = 0x2C0B30u;
    // 0x2c0b30: 0x10000034
    ctx->pc = 0x2C0B30u;
    {
        const bool branch_taken_0x2c0b30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0B34u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2c0b30) {
            ctx->pc = 0x2C0C04u;
            goto label_2c0c04;
        }
    }
    ctx->pc = 0x2C0B38u;
label_2c0b38:
    // 0x2c0b38: 0x3c01bf80
    ctx->pc = 0x2c0b38u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x2c0b3c: 0x44816000
    ctx->pc = 0x2c0b3cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2c0b40: 0xc0b20a6
    ctx->pc = 0x2C0B40u;
    SET_GPR_U32(ctx, 31, 0x2C0B48u);
    ctx->pc = 0x2C0B44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C8298u;
    {
        const uint32_t __entryPc = ctx->pc;
        FaceCamMat_0x2c8298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0B48u; }
    }
    if (ctx->pc != 0x2C0B48u) { return; }
    ctx->pc = 0x2C0B48u;
    // 0x2c0b48: 0x1000002e
    ctx->pc = 0x2C0B48u;
    {
        const bool branch_taken_0x2c0b48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0B4Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2c0b48) {
            ctx->pc = 0x2C0C04u;
            goto label_2c0c04;
        }
    }
    ctx->pc = 0x2C0B50u;
label_2c0b50:
    // 0x2c0b50: 0x30620002
    ctx->pc = 0x2c0b50u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
    // 0x2c0b54: 0x1040000f
    ctx->pc = 0x2C0B54u;
    {
        const bool branch_taken_0x2c0b54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0B58u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c0b54) {
            ctx->pc = 0x2C0B94u;
            goto label_2c0b94;
        }
    }
    ctx->pc = 0x2C0B5Cu;
    // 0x2c0b5c: 0xc0b5700
    ctx->pc = 0x2C0B5Cu;
    SET_GPR_U32(ctx, 31, 0x2C0B64u);
    ctx->pc = 0x2C0B60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        ExtractScaleMat4_0x2d5c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0B64u; }
    }
    if (ctx->pc != 0x2C0B64u) { return; }
    ctx->pc = 0x2C0B64u;
    // 0x2c0b64: 0x8e250004
    ctx->pc = 0x2c0b64u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c0b68: 0x3c040037
    ctx->pc = 0x2c0b68u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
    // 0x2c0b6c: 0x248428f0
    ctx->pc = 0x2c0b6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10480));
    // 0x2c0b70: 0x24a50250
    ctx->pc = 0x2c0b70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 592));
    // 0x2c0b74: 0xc0b5746
    ctx->pc = 0x2C0B74u;
    SET_GPR_U32(ctx, 31, 0x2C0B7Cu);
    ctx->pc = 0x2C0B78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5D18u;
    {
        const uint32_t __entryPc = ctx->pc;
        MulMat3_0x2d5d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0B7Cu; }
    }
    if (ctx->pc != 0x2C0B7Cu) { return; }
    ctx->pc = 0x2C0B7Cu;
    // 0x2c0b7c: 0x200202d
    ctx->pc = 0x2c0b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0b80: 0x200282d
    ctx->pc = 0x2c0b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0b84: 0xc0b552c
    ctx->pc = 0x2C0B84u;
    SET_GPR_U32(ctx, 31, 0x2C0B8Cu);
    ctx->pc = 0x2C0B88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScaleMat3Vec3_0x2d54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0B8Cu; }
    }
    if (ctx->pc != 0x2C0B8Cu) { return; }
    ctx->pc = 0x2C0B8Cu;
    // 0x2c0b8c: 0x1000001d
    ctx->pc = 0x2C0B8Cu;
    {
        const bool branch_taken_0x2c0b8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0B90u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2c0b8c) {
            ctx->pc = 0x2C0C04u;
            goto label_2c0c04;
        }
    }
    ctx->pc = 0x2C0B94u;
label_2c0b94:
    // 0x2c0b94: 0x8e250004
    ctx->pc = 0x2c0b94u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c0b98: 0x3c040037
    ctx->pc = 0x2c0b98u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
    // 0x2c0b9c: 0x248428f0
    ctx->pc = 0x2c0b9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10480));
    // 0x2c0ba0: 0x24a50250
    ctx->pc = 0x2c0ba0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 592));
    // 0x2c0ba4: 0xc0b5746
    ctx->pc = 0x2C0BA4u;
    SET_GPR_U32(ctx, 31, 0x2C0BACu);
    ctx->pc = 0x2C0BA8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5D18u;
    {
        const uint32_t __entryPc = ctx->pc;
        MulMat3_0x2d5d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0BACu; }
    }
    if (ctx->pc != 0x2C0BACu) { return; }
    ctx->pc = 0x2C0BACu;
    // 0x2c0bac: 0x10000015
    ctx->pc = 0x2C0BACu;
    {
        const bool branch_taken_0x2c0bac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0BB0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2c0bac) {
            ctx->pc = 0x2C0C04u;
            goto label_2c0c04;
        }
    }
    ctx->pc = 0x2C0BB4u;
label_2c0bb4:
    // 0x2c0bb4: 0x3c013e86
    ctx->pc = 0x2c0bb4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16006 << 16));
    // 0x2c0bb8: 0x34210a92
    ctx->pc = 0x2c0bb8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 2706));
    // 0x2c0bbc: 0x44816000
    ctx->pc = 0x2c0bbcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2c0bc0: 0xc0b20a6
    ctx->pc = 0x2C0BC0u;
    SET_GPR_U32(ctx, 31, 0x2C0BC8u);
    ctx->pc = 0x2C0BC4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C8298u;
    {
        const uint32_t __entryPc = ctx->pc;
        FaceCamMat_0x2c8298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0BC8u; }
    }
    if (ctx->pc != 0x2C0BC8u) { return; }
    ctx->pc = 0x2C0BC8u;
    // 0x2c0bc8: 0x1000000e
    ctx->pc = 0x2C0BC8u;
    {
        const bool branch_taken_0x2c0bc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0BCCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2c0bc8) {
            ctx->pc = 0x2C0C04u;
            goto label_2c0c04;
        }
    }
    ctx->pc = 0x2C0BD0u;
label_2c0bd0:
    // 0x2c0bd0: 0x3c013f06
    ctx->pc = 0x2c0bd0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16134 << 16));
    // 0x2c0bd4: 0x34210a92
    ctx->pc = 0x2c0bd4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 2706));
    // 0x2c0bd8: 0x44816000
    ctx->pc = 0x2c0bd8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2c0bdc: 0xc0b20a6
    ctx->pc = 0x2C0BDCu;
    SET_GPR_U32(ctx, 31, 0x2C0BE4u);
    ctx->pc = 0x2C0BE0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C8298u;
    {
        const uint32_t __entryPc = ctx->pc;
        FaceCamMat_0x2c8298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0BE4u; }
    }
    if (ctx->pc != 0x2C0BE4u) { return; }
    ctx->pc = 0x2C0BE4u;
    // 0x2c0be4: 0x10000007
    ctx->pc = 0x2C0BE4u;
    {
        const bool branch_taken_0x2c0be4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0BE8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2c0be4) {
            ctx->pc = 0x2C0C04u;
            goto label_2c0c04;
        }
    }
    ctx->pc = 0x2C0BECu;
label_2c0bec:
    // 0x2c0bec: 0x3c013f49
    ctx->pc = 0x2c0becu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16201 << 16));
    // 0x2c0bf0: 0x34210fdb
    ctx->pc = 0x2c0bf0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2c0bf4: 0x44816000
    ctx->pc = 0x2c0bf4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2c0bf8: 0xc0b20a6
    ctx->pc = 0x2C0BF8u;
    SET_GPR_U32(ctx, 31, 0x2C0C00u);
    ctx->pc = 0x2C0BFCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C8298u;
    {
        const uint32_t __entryPc = ctx->pc;
        FaceCamMat_0x2c8298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0C00u; }
    }
    if (ctx->pc != 0x2C0C00u) { return; }
    ctx->pc = 0x2C0C00u;
    // 0x2c0c00: 0xdfbf0030
    ctx->pc = 0x2c0c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c0c04:
    // 0x2c0c04: 0xdfb10020
    ctx->pc = 0x2c0c04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c0c08:
    // 0x2c0c08: 0xdfb00010
    ctx->pc = 0x2c0c08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0c0c: 0x3e00008
    ctx->pc = 0x2C0C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0C10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C0AB8u: goto label_2c0ab8;
            case 0x2C0AC8u: goto label_2c0ac8;
            case 0x2C0AECu: goto label_2c0aec;
            case 0x2C0B04u: goto label_2c0b04;
            case 0x2C0B18u: goto label_2c0b18;
            case 0x2C0B28u: goto label_2c0b28;
            case 0x2C0B38u: goto label_2c0b38;
            case 0x2C0B50u: goto label_2c0b50;
            case 0x2C0B94u: goto label_2c0b94;
            case 0x2C0BB4u: goto label_2c0bb4;
            case 0x2C0BD0u: goto label_2c0bd0;
            case 0x2C0BECu: goto label_2c0bec;
            case 0x2C0C04u: goto label_2c0c04;
            case 0x2C0C08u: goto label_2c0c08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C0C14u;
}
