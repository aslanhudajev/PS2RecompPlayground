#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBNewFont
// Address: 0x2c4a08 - 0x2c4d68
void MBNewFont_0x2c4a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c4a08u;

    // 0x2c4a08: 0x27bdff40
    ctx->pc = 0x2c4a08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2c4a0c: 0xffbf00a0
    ctx->pc = 0x2c4a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2c4a10: 0xffbe0090
    ctx->pc = 0x2c4a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2c4a14: 0xffb70080
    ctx->pc = 0x2c4a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2c4a18: 0xffb60070
    ctx->pc = 0x2c4a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2c4a1c: 0xffb50060
    ctx->pc = 0x2c4a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2c4a20: 0xffb40050
    ctx->pc = 0x2c4a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2c4a24: 0xffb30040
    ctx->pc = 0x2c4a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2c4a28: 0xffb20030
    ctx->pc = 0x2c4a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2c4a2c: 0xffb10020
    ctx->pc = 0x2c4a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2c4a30: 0xffb00010
    ctx->pc = 0x2c4a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2c4a34: 0xe7b500b8
    ctx->pc = 0x2c4a34u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2c4a38: 0xe7b400b0
    ctx->pc = 0x2c4a38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2c4a3c: 0x80a82d
    ctx->pc = 0x2c4a3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4a40: 0xafa50004
    ctx->pc = 0x2c4a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x2c4a44: 0xc0b82d
    ctx->pc = 0x2c4a44u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4a48: 0xe0b02d
    ctx->pc = 0x2c4a48u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4a4c: 0xafa00000
    ctx->pc = 0x2c4a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2c4a50: 0x3c013e00
    ctx->pc = 0x2c4a50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15872 << 16));
    // 0x2c4a54: 0x4481a000
    ctx->pc = 0x2c4a54u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x2c4a58: 0x4600a546
    ctx->pc = 0x2c4a58u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x2c4a5c: 0x8ea40000
    ctx->pc = 0x2c4a5cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2c4a60: 0x3a0282d
    ctx->pc = 0x2c4a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4a64: 0xc0b1ba8
    ctx->pc = 0x2C4A64u;
    SET_GPR_U32(ctx, 31, 0x2C4A6Cu);
    ctx->pc = 0x2C4A68u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C6EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Err_0x2c6ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4A6Cu; }
    }
    if (ctx->pc != 0x2C4A6Cu) { return; }
    ctx->pc = 0x2C4A6Cu;
    // 0x2c4a6c: 0x202d
    ctx->pc = 0x2c4a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4a70: 0x40282d
    ctx->pc = 0x2c4a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4a74: 0x302d
    ctx->pc = 0x2c4a74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4a78: 0x382d
    ctx->pc = 0x2c4a78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4a7c: 0x2408ffff
    ctx->pc = 0x2c4a7cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c4a80: 0xc0b0b54
    ctx->pc = 0x2C4A80u;
    SET_GPR_U32(ctx, 31, 0x2C4A88u);
    ctx->pc = 0x2C4A84u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4A88u; }
    }
    if (ctx->pc != 0x2C4A88u) { return; }
    ctx->pc = 0x2C4A88u;
    // 0x2c4a88: 0x40f02d
    ctx->pc = 0x2c4a88u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4a8c: 0x17c00006
    ctx->pc = 0x2C4A8Cu;
    {
        const bool branch_taken_0x2c4a8c = (GPR_U32(ctx, 30) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C4A90u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2c4a8c) {
            ctx->pc = 0x2C4AA8u;
            goto label_2c4aa8;
        }
    }
    ctx->pc = 0x2C4A94u;
    // 0x2c4a94: 0x3c04003b
    ctx->pc = 0x2c4a94u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2c4a98: 0x24846ec0
    ctx->pc = 0x2c4a98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 28352));
    // 0x2c4a9c: 0xc0b49a6
    ctx->pc = 0x2C4A9Cu;
    SET_GPR_U32(ctx, 31, 0x2C4AA4u);
    ctx->pc = 0x2C4AA0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4AA4u; }
    }
    if (ctx->pc != 0x2C4AA4u) { return; }
    ctx->pc = 0x2C4AA4u;
    // 0x2c4aa4: 0x8fa30000
    ctx->pc = 0x2c4aa4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c4aa8:
    // 0x2c4aa8: 0x1060000f
    ctx->pc = 0x2C4AA8u;
    {
        const bool branch_taken_0x2c4aa8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C4AACu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c4aa8) {
            ctx->pc = 0x2C4AE8u;
            goto label_2c4ae8;
        }
    }
    ctx->pc = 0x2C4AB0u;
    // 0x2c4ab0: 0x94620020
    ctx->pc = 0x2c4ab0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2c4ab4: 0x44820000
    ctx->pc = 0x2c4ab4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2c4ab8: 0x46800020
    ctx->pc = 0x2c4ab8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c4abc: 0x3c013f80
    ctx->pc = 0x2c4abcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2c4ac0: 0x44810800
    ctx->pc = 0x2c4ac0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2c4ac4: 0x0
    ctx->pc = 0x2c4ac4u;
    // NOP
    // 0x2c4ac8: 0x0
    ctx->pc = 0x2c4ac8u;
    // NOP
    // 0x2c4acc: 0x46000d43
    ctx->pc = 0x2c4accu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[21] = ctx->f[1] / ctx->f[0];
    // 0x2c4ad0: 0x94620022
    ctx->pc = 0x2c4ad0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 34)));
    // 0x2c4ad4: 0x44820000
    ctx->pc = 0x2c4ad4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2c4ad8: 0x46800020
    ctx->pc = 0x2c4ad8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c4adc: 0x0
    ctx->pc = 0x2c4adcu;
    // NOP
    // 0x2c4ae0: 0x0
    ctx->pc = 0x2c4ae0u;
    // NOP
    // 0x2c4ae4: 0x46000d03
    ctx->pc = 0x2c4ae4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_2c4ae8:
    // 0x2c4ae8: 0x8eb10008
    ctx->pc = 0x2c4ae8u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2c4aec: 0x1ae0000c
    ctx->pc = 0x2C4AECu;
    {
        const bool branch_taken_0x2c4aec = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x2C4AF0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c4aec) {
            ctx->pc = 0x2C4B20u;
            goto label_2c4b20;
        }
    }
    ctx->pc = 0x2C4AF4u;
label_2c4af4:
    // 0x2c4af4: 0x8e220000
    ctx->pc = 0x2c4af4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c4af8: 0x5040000a
    ctx->pc = 0x2C4AF8u;
    {
        const bool branch_taken_0x2c4af8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c4af8) {
            ctx->pc = 0x2C4AFCu;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
            ctx->pc = 0x2C4B24u;
            goto label_2c4b24;
        }
    }
    ctx->pc = 0x2C4B00u;
    // 0x2c4b00: 0x8e230000
    ctx->pc = 0x2c4b00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c4b04: 0x283102a
    ctx->pc = 0x2c4b04u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 3)));
    // 0x2c4b08: 0x54400001
    ctx->pc = 0x2C4B08u;
    {
        const bool branch_taken_0x2c4b08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c4b08) {
            ctx->pc = 0x2C4B0Cu;
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2C4B10u;
            goto label_2c4b10;
        }
    }
    ctx->pc = 0x2C4B10u;
label_2c4b10:
    // 0x2c4b10: 0x26520001
    ctx->pc = 0x2c4b10u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x2c4b14: 0x257102a
    ctx->pc = 0x2c4b14u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 23)));
    // 0x2c4b18: 0x1440fff6
    ctx->pc = 0x2C4B18u;
    {
        const bool branch_taken_0x2c4b18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C4B1Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 16));
        if (branch_taken_0x2c4b18) {
            ctx->pc = 0x2C4AF4u;
            goto label_2c4af4;
        }
    }
    ctx->pc = 0x2C4B20u;
label_2c4b20:
    // 0x2c4b20: 0x26940001
    ctx->pc = 0x2c4b20u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_2c4b24:
    // 0x2c4b24: 0xc0b4f52
    ctx->pc = 0x2C4B24u;
    SET_GPR_U32(ctx, 31, 0x2C4B2Cu);
    ctx->pc = 0x2C4B28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2D3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem_0x2d3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4B2Cu; }
    }
    if (ctx->pc != 0x2C4B2Cu) { return; }
    ctx->pc = 0x2C4B2Cu;
    // 0x2c4b2c: 0x40982d
    ctx->pc = 0x2c4b2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4b30: 0x260202d
    ctx->pc = 0x2c4b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4b34: 0x282d
    ctx->pc = 0x2c4b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4b38: 0xc0becc6
    ctx->pc = 0x2C4B38u;
    SET_GPR_U32(ctx, 31, 0x2C4B40u);
    ctx->pc = 0x2C4B3Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2FB318u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x2fb318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4B40u; }
    }
    if (ctx->pc != 0x2C4B40u) { return; }
    ctx->pc = 0x2C4B40u;
    // 0x2c4b40: 0x24100024
    ctx->pc = 0x2c4b40u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 36));
    // 0x2c4b44: 0x2908018
    ctx->pc = 0x2c4b44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2c4b48: 0xc0b4f52
    ctx->pc = 0x2C4B48u;
    SET_GPR_U32(ctx, 31, 0x2C4B50u);
    ctx->pc = 0x2C4B4Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem_0x2d3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4B50u; }
    }
    if (ctx->pc != 0x2C4B50u) { return; }
    ctx->pc = 0x2C4B50u;
    // 0x2c4b50: 0xae620004
    ctx->pc = 0x2c4b50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x2c4b54: 0xae740008
    ctx->pc = 0x2c4b54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 20));
    // 0x2c4b58: 0x40202d
    ctx->pc = 0x2c4b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4b5c: 0x282d
    ctx->pc = 0x2c4b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4b60: 0xc0becc6
    ctx->pc = 0x2C4B60u;
    SET_GPR_U32(ctx, 31, 0x2C4B68u);
    ctx->pc = 0x2C4B64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FB318u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x2fb318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4B68u; }
    }
    if (ctx->pc != 0x2C4B68u) { return; }
    ctx->pc = 0x2C4B68u;
    // 0x2c4b68: 0x8ea20004
    ctx->pc = 0x2c4b68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2c4b6c: 0x30420100
    ctx->pc = 0x2c4b6cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x2c4b70: 0x50400005
    ctx->pc = 0x2C4B70u;
    {
        const bool branch_taken_0x2c4b70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c4b70) {
            ctx->pc = 0x2C4B74u;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->pc = 0x2C4B88u;
            goto label_2c4b88;
        }
    }
    ctx->pc = 0x2C4B78u;
    // 0x2c4b78: 0x8e62000c
    ctx->pc = 0x2c4b78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2c4b7c: 0x34420001
    ctx->pc = 0x2c4b7cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x2c4b80: 0xae62000c
    ctx->pc = 0x2c4b80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x2c4b84: 0x92a20004
    ctx->pc = 0x2c4b84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4)));
label_2c4b88:
    // 0x2c4b88: 0xae620000
    ctx->pc = 0x2c4b88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2c4b8c: 0x8eb10008
    ctx->pc = 0x2c4b8cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2c4b90: 0x1ae00046
    ctx->pc = 0x2C4B90u;
    {
        const bool branch_taken_0x2c4b90 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x2C4B94u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c4b90) {
            ctx->pc = 0x2C4CACu;
            goto label_2c4cac;
        }
    }
    ctx->pc = 0x2C4B98u;
    // 0x2c4b98: 0x8e220000
    ctx->pc = 0x2c4b98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c4b9c: 0x10400043
    ctx->pc = 0x2C4B9Cu;
    {
        const bool branch_taken_0x2c4b9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c4b9c) {
            ctx->pc = 0x2C4CACu;
            goto label_2c4cac;
        }
    }
    ctx->pc = 0x2C4BA4u;
    // 0x2c4ba4: 0x24140024
    ctx->pc = 0x2c4ba4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 36));
    // 0x2c4ba8: 0x8e300000
    ctx->pc = 0x2c4ba8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c4bac: 0x0
    ctx->pc = 0x2c4bacu;
    // NOP
label_2c4bb0:
    // 0x2c4bb0: 0x2148018
    ctx->pc = 0x2c4bb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2c4bb4: 0x8e620004
    ctx->pc = 0x2c4bb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2c4bb8: 0x2028021
    ctx->pc = 0x2c4bb8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c4bbc: 0x6bc20007
    ctx->pc = 0x2c4bbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x2c4bc0: 0x6fc20000
    ctx->pc = 0x2c4bc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x2c4bc4: 0x6bc3000f
    ctx->pc = 0x2c4bc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x2c4bc8: 0x6fc30008
    ctx->pc = 0x2c4bc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x2c4bcc: 0x6bc40017
    ctx->pc = 0x2c4bccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x2c4bd0: 0x6fc40010
    ctx->pc = 0x2c4bd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x2c4bd4: 0x6bc5001f
    ctx->pc = 0x2c4bd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x2c4bd8: 0x6fc50018
    ctx->pc = 0x2c4bd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x2c4bdc: 0xb2020007
    ctx->pc = 0x2c4bdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c4be0: 0xb6020000
    ctx->pc = 0x2c4be0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c4be4: 0xb203000f
    ctx->pc = 0x2c4be4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c4be8: 0xb6030008
    ctx->pc = 0x2c4be8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c4bec: 0xb2040017
    ctx->pc = 0x2c4becu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c4bf0: 0xb6040010
    ctx->pc = 0x2c4bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c4bf4: 0xb205001f
    ctx->pc = 0x2c4bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c4bf8: 0xb6050018
    ctx->pc = 0x2c4bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c4bfc: 0x8fc20020
    ctx->pc = 0x2c4bfcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x2c4c00: 0xae020020
    ctx->pc = 0x2c4c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2c4c04: 0x256001a
    ctx->pc = 0x2c4c04u;
    { int32_t divisor = GPR_S32(ctx, 22);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2c4c08: 0x3012
    ctx->pc = 0x2c4c08u;
    SET_GPR_U32(ctx, 6, ctx->lo);
    // 0x2c4c0c: 0x52c00001
    ctx->pc = 0x2C4C0Cu;
    {
        const bool branch_taken_0x2c4c0c = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c4c0c) {
            ctx->pc = 0x2C4C10u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2C4C14u;
            goto label_2c4c14;
        }
    }
    ctx->pc = 0x2C4C14u;
label_2c4c14:
    // 0x2c4c14: 0x200202d
    ctx->pc = 0x2c4c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4c18: 0xc0b0ed6
    ctx->pc = 0x2C4C18u;
    SET_GPR_U32(ctx, 31, 0x2C4C20u);
    ctx->pc = 0x2C4C1Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C3B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetTex_0x2c3b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4C20u; }
    }
    if (ctx->pc != 0x2C4C20u) { return; }
    ctx->pc = 0x2C4C20u;
    // 0x2c4c20: 0x200202d
    ctx->pc = 0x2c4c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4c24: 0x8e250004
    ctx->pc = 0x2c4c24u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c4c28: 0xc0b0cf6
    ctx->pc = 0x2C4C28u;
    SET_GPR_U32(ctx, 31, 0x2C4C30u);
    ctx->pc = 0x2C4C2Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4C30u; }
    }
    if (ctx->pc != 0x2C4C30u) { return; }
    ctx->pc = 0x2C4C30u;
    // 0x2c4c30: 0x96220004
    ctx->pc = 0x2c4c30u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c4c34: 0xa6020020
    ctx->pc = 0x2c4c34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c4c38: 0x96620000
    ctx->pc = 0x2c4c38u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c4c3c: 0xa6020022
    ctx->pc = 0x2c4c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c4c40: 0xc62c0008
    ctx->pc = 0x2c4c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c4c44: 0x46806320
    ctx->pc = 0x2c4c44u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x2c4c48: 0x8e220008
    ctx->pc = 0x2c4c48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c4c4c: 0x8e230004
    ctx->pc = 0x2c4c4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c4c50: 0x431021
    ctx->pc = 0x2c4c50u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c4c54: 0x44826800
    ctx->pc = 0x2c4c54u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x2c4c58: 0x46806b60
    ctx->pc = 0x2c4c58u;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[13]);
    // 0x2c4c5c: 0xc62e000c
    ctx->pc = 0x2c4c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2c4c60: 0x468073a0
    ctx->pc = 0x2c4c60u;
    ctx->f[14] = FPU_CVT_S_W(*(int32_t*)&ctx->f[14]);
    // 0x2c4c64: 0x8e22000c
    ctx->pc = 0x2c4c64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2c4c68: 0x8e630000
    ctx->pc = 0x2c4c68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c4c6c: 0x431021
    ctx->pc = 0x2c4c6cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c4c70: 0x44827800
    ctx->pc = 0x2c4c70u;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 2);
    // 0x2c4c74: 0x46807be0
    ctx->pc = 0x2c4c74u;
    ctx->f[15] = FPU_CVT_S_W(*(int32_t*)&ctx->f[15]);
    // 0x2c4c78: 0x200202d
    ctx->pc = 0x2c4c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4c7c: 0x46156302
    ctx->pc = 0x2c4c7cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x2c4c80: 0x46156b42
    ctx->pc = 0x2c4c80u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[21]);
    // 0x2c4c84: 0x46147382
    ctx->pc = 0x2c4c84u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[20]);
    // 0x2c4c88: 0xc0b0e6a
    ctx->pc = 0x2C4C88u;
    SET_GPR_U32(ctx, 31, 0x2C4C90u);
    ctx->pc = 0x2C4C8Cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[20]);
    ctx->pc = 0x2C39A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetCrop_0x2c39a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4C90u; }
    }
    if (ctx->pc != 0x2C4C90u) { return; }
    ctx->pc = 0x2C4C90u;
    // 0x2c4c90: 0x26520001
    ctx->pc = 0x2c4c90u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x2c4c94: 0x257102a
    ctx->pc = 0x2c4c94u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 23)));
    // 0x2c4c98: 0x10400004
    ctx->pc = 0x2C4C98u;
    {
        const bool branch_taken_0x2c4c98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C4C9Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 16));
        if (branch_taken_0x2c4c98) {
            ctx->pc = 0x2C4CACu;
            goto label_2c4cac;
        }
    }
    ctx->pc = 0x2C4CA0u;
    // 0x2c4ca0: 0x8e220000
    ctx->pc = 0x2c4ca0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c4ca4: 0x5440ffc2
    ctx->pc = 0x2C4CA4u;
    {
        const bool branch_taken_0x2c4ca4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c4ca4) {
            ctx->pc = 0x2C4CA8u;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x2C4BB0u;
            goto label_2c4bb0;
        }
    }
    ctx->pc = 0x2C4CACu;
label_2c4cac:
    // 0x2c4cac: 0xc0b0b38
    ctx->pc = 0x2C4CACu;
    SET_GPR_U32(ctx, 31, 0x2C4CB4u);
    ctx->pc = 0x2C4CB0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4CB4u; }
    }
    if (ctx->pc != 0x2C4CB4u) { return; }
    ctx->pc = 0x2C4CB4u;
    // 0x2c4cb4: 0x3c03003d
    ctx->pc = 0x2c4cb4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
    // 0x2c4cb8: 0x8c62b8a0
    ctx->pc = 0x2c4cb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294949024)));
    // 0x2c4cbc: 0x4410005
    ctx->pc = 0x2C4CBCu;
    {
        const bool branch_taken_0x2c4cbc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2C4CC0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
        if (branch_taken_0x2c4cbc) {
            ctx->pc = 0x2C4CD4u;
            goto label_2c4cd4;
        }
    }
    ctx->pc = 0x2C4CC4u;
    // 0x2c4cc4: 0x3c02003d
    ctx->pc = 0x2c4cc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c4cc8: 0x8c42b89c
    ctx->pc = 0x2c4cc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294949020)));
    // 0x2c4ccc: 0xac62b8a0
    ctx->pc = 0x2c4cccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949024), GPR_U32(ctx, 2));
    // 0x2c4cd0: 0x3c02003d
    ctx->pc = 0x2c4cd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
label_2c4cd4:
    // 0x2c4cd4: 0x2442b8a8
    ctx->pc = 0x2c4cd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294949032));
    // 0x2c4cd8: 0x3c05003d
    ctx->pc = 0x2c4cd8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)61 << 16));
    // 0x2c4cdc: 0x8ca3b89c
    ctx->pc = 0x2c4cdcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4294949020)));
    // 0x2c4ce0: 0x32080
    ctx->pc = 0x2c4ce0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c4ce4: 0x821021
    ctx->pc = 0x2c4ce4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c4ce8: 0x8fa60004
    ctx->pc = 0x2c4ce8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2c4cec: 0xac460000
    ctx->pc = 0x2c4cecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2c4cf0: 0x3c02003d
    ctx->pc = 0x2c4cf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c4cf4: 0x2442b810
    ctx->pc = 0x2c4cf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294948880));
    // 0x2c4cf8: 0x822021
    ctx->pc = 0x2c4cf8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c4cfc: 0xac930000
    ctx->pc = 0x2c4cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
    // 0x2c4d00: 0x24630001
    ctx->pc = 0x2c4d00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c4d04: 0xaca3b89c
    ctx->pc = 0x2c4d04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294949020), GPR_U32(ctx, 3));
    // 0x2c4d08: 0x28630023
    ctx->pc = 0x2c4d08u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 35));
    // 0x2c4d0c: 0x14600006
    ctx->pc = 0x2C4D0Cu;
    {
        const bool branch_taken_0x2c4d0c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C4D10u;
        SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
        if (branch_taken_0x2c4d0c) {
            ctx->pc = 0x2C4D28u;
            goto label_2c4d28;
        }
    }
    ctx->pc = 0x2C4D14u;
    // 0x2c4d14: 0x3c04003b
    ctx->pc = 0x2c4d14u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2c4d18: 0x24846ee0
    ctx->pc = 0x2c4d18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 28384));
    // 0x2c4d1c: 0xc0b49a6
    ctx->pc = 0x2C4D1Cu;
    SET_GPR_U32(ctx, 31, 0x2C4D24u);
    ctx->pc = 0x2C4D20u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4D24u; }
    }
    if (ctx->pc != 0x2C4D24u) { return; }
    ctx->pc = 0x2C4D24u;
    // 0x2c4d24: 0x3c02003d
    ctx->pc = 0x2c4d24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
label_2c4d28:
    // 0x2c4d28: 0x8c42b89c
    ctx->pc = 0x2c4d28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294949020)));
    // 0x2c4d2c: 0x2442ffff
    ctx->pc = 0x2c4d2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c4d30: 0xdfbf00a0
    ctx->pc = 0x2c4d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c4d34: 0xdfbe0090
    ctx->pc = 0x2c4d34u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c4d38: 0xdfb70080
    ctx->pc = 0x2c4d38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c4d3c: 0xdfb60070
    ctx->pc = 0x2c4d3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c4d40: 0xdfb50060
    ctx->pc = 0x2c4d40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c4d44: 0xdfb40050
    ctx->pc = 0x2c4d44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c4d48: 0xdfb30040
    ctx->pc = 0x2c4d48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c4d4c: 0xdfb20030
    ctx->pc = 0x2c4d4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c4d50: 0xdfb10020
    ctx->pc = 0x2c4d50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c4d54: 0xdfb00010
    ctx->pc = 0x2c4d54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4d58: 0xc7b500b8
    ctx->pc = 0x2c4d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c4d5c: 0xc7b400b0
    ctx->pc = 0x2c4d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c4d60: 0x3e00008
    ctx->pc = 0x2C4D60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4D64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C4AA8u: goto label_2c4aa8;
            case 0x2C4AE8u: goto label_2c4ae8;
            case 0x2C4AF4u: goto label_2c4af4;
            case 0x2C4B10u: goto label_2c4b10;
            case 0x2C4B20u: goto label_2c4b20;
            case 0x2C4B24u: goto label_2c4b24;
            case 0x2C4B88u: goto label_2c4b88;
            case 0x2C4BB0u: goto label_2c4bb0;
            case 0x2C4C14u: goto label_2c4c14;
            case 0x2C4CACu: goto label_2c4cac;
            case 0x2C4CD4u: goto label_2c4cd4;
            case 0x2C4D28u: goto label_2c4d28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C4D68u;
}
