#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_wave_timer
// Address: 0x224a48 - 0x224d2c
void init_wave_timer_0x224a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x224a48u;

    // 0x224a48: 0x27bdffc0
    ctx->pc = 0x224a48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x224a4c: 0xffbf0030
    ctx->pc = 0x224a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x224a50: 0xffb20020
    ctx->pc = 0x224a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x224a54: 0xffb10010
    ctx->pc = 0x224a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x224a58: 0xffb00000
    ctx->pc = 0x224a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x224a5c: 0x3c020034
    ctx->pc = 0x224a5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x224a60: 0x8c42e7c8
    ctx->pc = 0x224a60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x224a64: 0x8c420000
    ctx->pc = 0x224a64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x224a68: 0x30420004
    ctx->pc = 0x224a68u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x224a6c: 0x10400019
    ctx->pc = 0x224A6Cu;
    {
        const bool branch_taken_0x224a6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x224A70u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x224a6c) {
            ctx->pc = 0x224AD4u;
            goto label_224ad4;
        }
    }
    ctx->pc = 0x224A74u;
    // 0x224a74: 0xdc420e28
    ctx->pc = 0x224a74u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x224a78: 0x30420010
    ctx->pc = 0x224a78u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x224a7c: 0x10400006
    ctx->pc = 0x224A7Cu;
    {
        const bool branch_taken_0x224a7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x224A80u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x224a7c) {
            ctx->pc = 0x224A98u;
            goto label_224a98;
        }
    }
    ctx->pc = 0x224A84u;
    // 0x224a84: 0x3c0142c9
    ctx->pc = 0x224a84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17097 << 16));
    // 0x224a88: 0x3421fae1
    ctx->pc = 0x224a88u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 64225));
    // 0x224a8c: 0x44810000
    ctx->pc = 0x224a8cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x224a90: 0x1000000c
    ctx->pc = 0x224A90u;
    {
        const bool branch_taken_0x224a90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x224A94u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1988), bits); }
        if (branch_taken_0x224a90) {
            ctx->pc = 0x224AC4u;
            goto label_224ac4;
        }
    }
    ctx->pc = 0x224A98u;
label_224a98:
    // 0x224a98: 0x3c030032
    ctx->pc = 0x224a98u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x224a9c: 0x3c020034
    ctx->pc = 0x224a9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x224aa0: 0x8c42e7c8
    ctx->pc = 0x224aa0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x224aa4: 0x8442000c
    ctx->pc = 0x224aa4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x224aa8: 0x44820000
    ctx->pc = 0x224aa8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x224aac: 0x46800020
    ctx->pc = 0x224aacu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x224ab0: 0x3c013f7d
    ctx->pc = 0x224ab0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16253 << 16));
    // 0x224ab4: 0x342170a4
    ctx->pc = 0x224ab4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 28836));
    // 0x224ab8: 0x44810800
    ctx->pc = 0x224ab8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x224abc: 0x46010000
    ctx->pc = 0x224abcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x224ac0: 0xe46007c4
    ctx->pc = 0x224ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1988), bits); }
label_224ac4:
    // 0x224ac4: 0x3c020032
    ctx->pc = 0x224ac4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x224ac8: 0x3c030032
    ctx->pc = 0x224ac8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x224acc: 0xc46007c4
    ctx->pc = 0x224accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224ad0: 0xe44007c0
    ctx->pc = 0x224ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1984), bits); }
label_224ad4:
    // 0x224ad4: 0x3c020032
    ctx->pc = 0x224ad4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x224ad8: 0xac4007c8
    ctx->pc = 0x224ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1992), GPR_U32(ctx, 0));
    // 0x224adc: 0x202d
    ctx->pc = 0x224adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ae0: 0x282d
    ctx->pc = 0x224ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ae4: 0x24060001
    ctx->pc = 0x224ae4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x224ae8: 0x24070001
    ctx->pc = 0x224ae8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x224aec: 0x2408ffff
    ctx->pc = 0x224aecu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x224af0: 0xc0b0b54
    ctx->pc = 0x224AF0u;
    SET_GPR_U32(ctx, 31, 0x224AF8u);
    ctx->pc = 0x224AF4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224AF8u; }
    }
    if (ctx->pc != 0x224AF8u) { return; }
    ctx->pc = 0x224AF8u;
    // 0x224af8: 0x3c110032
    ctx->pc = 0x224af8u;
    SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
    // 0x224afc: 0x26300898
    ctx->pc = 0x224afcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 2200));
    // 0x224b00: 0xae220898
    ctx->pc = 0x224b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2200), GPR_U32(ctx, 2));
    // 0x224b04: 0x202d
    ctx->pc = 0x224b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b08: 0x282d
    ctx->pc = 0x224b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b0c: 0x24060001
    ctx->pc = 0x224b0cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x224b10: 0x24070018
    ctx->pc = 0x224b10u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 24));
    // 0x224b14: 0x2408ffff
    ctx->pc = 0x224b14u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x224b18: 0xc0b0b54
    ctx->pc = 0x224B18u;
    SET_GPR_U32(ctx, 31, 0x224B20u);
    ctx->pc = 0x224B1Cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B20u; }
    }
    if (ctx->pc != 0x224B20u) { return; }
    ctx->pc = 0x224B20u;
    // 0x224b20: 0xae020004
    ctx->pc = 0x224b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x224b24: 0x202d
    ctx->pc = 0x224b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b28: 0x282d
    ctx->pc = 0x224b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b2c: 0x24060001
    ctx->pc = 0x224b2cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x224b30: 0x2407006a
    ctx->pc = 0x224b30u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 106));
    // 0x224b34: 0x2408ffff
    ctx->pc = 0x224b34u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x224b38: 0xc0b0b54
    ctx->pc = 0x224B38u;
    SET_GPR_U32(ctx, 31, 0x224B40u);
    ctx->pc = 0x224B3Cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B40u; }
    }
    if (ctx->pc != 0x224B40u) { return; }
    ctx->pc = 0x224B40u;
    // 0x224b40: 0xae020008
    ctx->pc = 0x224b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x224b44: 0x202d
    ctx->pc = 0x224b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b48: 0x282d
    ctx->pc = 0x224b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b4c: 0x2406003f
    ctx->pc = 0x224b4cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 63));
    // 0x224b50: 0x2407003a
    ctx->pc = 0x224b50u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 58));
    // 0x224b54: 0x2408ffff
    ctx->pc = 0x224b54u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x224b58: 0xc0b0b54
    ctx->pc = 0x224B58u;
    SET_GPR_U32(ctx, 31, 0x224B60u);
    ctx->pc = 0x224B5Cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B60u; }
    }
    if (ctx->pc != 0x224B60u) { return; }
    ctx->pc = 0x224B60u;
    // 0x224b60: 0xae02000c
    ctx->pc = 0x224b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x224b64: 0x3c014779
    ctx->pc = 0x224b64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18297 << 16));
    // 0x224b68: 0x3421a900
    ctx->pc = 0x224b68u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 43264));
    // 0x224b6c: 0x44816000
    ctx->pc = 0x224b6cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x224b70: 0xc0b0dd6
    ctx->pc = 0x224B70u;
    SET_GPR_U32(ctx, 31, 0x224B78u);
    ctx->pc = 0x224B74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 2200)));
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B78u; }
    }
    if (ctx->pc != 0x224B78u) { return; }
    ctx->pc = 0x224B78u;
    // 0x224b78: 0x3c014779
    ctx->pc = 0x224b78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18297 << 16));
    // 0x224b7c: 0x3421a700
    ctx->pc = 0x224b7cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 42752));
    // 0x224b80: 0x44816000
    ctx->pc = 0x224b80u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x224b84: 0xc0b0dd6
    ctx->pc = 0x224B84u;
    SET_GPR_U32(ctx, 31, 0x224B8Cu);
    ctx->pc = 0x224B88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B8Cu; }
    }
    if (ctx->pc != 0x224B8Cu) { return; }
    ctx->pc = 0x224B8Cu;
    // 0x224b8c: 0x3c014779
    ctx->pc = 0x224b8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)18297 << 16));
    // 0x224b90: 0x3421a700
    ctx->pc = 0x224b90u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 42752));
    // 0x224b94: 0x44816000
    ctx->pc = 0x224b94u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x224b98: 0xc0b0dd6
    ctx->pc = 0x224B98u;
    SET_GPR_U32(ctx, 31, 0x224BA0u);
    ctx->pc = 0x224B9Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224BA0u; }
    }
    if (ctx->pc != 0x224BA0u) { return; }
    ctx->pc = 0x224BA0u;
    // 0x224ba0: 0x3c014779
    ctx->pc = 0x224ba0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18297 << 16));
    // 0x224ba4: 0x3421a800
    ctx->pc = 0x224ba4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 43008));
    // 0x224ba8: 0x44816000
    ctx->pc = 0x224ba8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x224bac: 0xc0b0dd6
    ctx->pc = 0x224BACu;
    SET_GPR_U32(ctx, 31, 0x224BB4u);
    ctx->pc = 0x224BB0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224BB4u; }
    }
    if (ctx->pc != 0x224BB4u) { return; }
    ctx->pc = 0x224BB4u;
    // 0x224bb4: 0x3c020031
    ctx->pc = 0x224bb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x224bb8: 0xdc420e28
    ctx->pc = 0x224bb8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x224bbc: 0x30420010
    ctx->pc = 0x224bbcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x224bc0: 0x14400006
    ctx->pc = 0x224BC0u;
    {
        const bool branch_taken_0x224bc0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x224BC4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x224bc0) {
            ctx->pc = 0x224BDCu;
            goto label_224bdc;
        }
    }
    ctx->pc = 0x224BC8u;
    // 0x224bc8: 0x3c020034
    ctx->pc = 0x224bc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x224bcc: 0x8c42e7c8
    ctx->pc = 0x224bccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x224bd0: 0x8c420000
    ctx->pc = 0x224bd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x224bd4: 0x30420004
    ctx->pc = 0x224bd4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x224bd8: 0x2c510001
    ctx->pc = 0x224bd8u;
    SET_GPR_U32(ctx, 17, SLTU32(GPR_U32(ctx, 2), 1));
label_224bdc:
    // 0x224bdc: 0x802d
    ctx->pc = 0x224bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224be0: 0x3c020032
    ctx->pc = 0x224be0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x224be4: 0x24520898
    ctx->pc = 0x224be4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 2200));
    // 0x224be8: 0x101080
    ctx->pc = 0x224be8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x224bec: 0x0
    ctx->pc = 0x224becu;
    // NOP
label_224bf0:
    // 0x224bf0: 0x521021
    ctx->pc = 0x224bf0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x224bf4: 0x8c440000
    ctx->pc = 0x224bf4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x224bf8: 0xc0b0ce8
    ctx->pc = 0x224BF8u;
    SET_GPR_U32(ctx, 31, 0x224C00u);
    ctx->pc = 0x224BFCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224C00u; }
    }
    if (ctx->pc != 0x224C00u) { return; }
    ctx->pc = 0x224C00u;
    // 0x224c00: 0x26100001
    ctx->pc = 0x224c00u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x224c04: 0x2a020004
    ctx->pc = 0x224c04u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x224c08: 0x1440fff9
    ctx->pc = 0x224C08u;
    {
        const bool branch_taken_0x224c08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x224C0Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x224c08) {
            ctx->pc = 0x224BF0u;
            goto label_224bf0;
        }
    }
    ctx->pc = 0x224C10u;
    // 0x224c10: 0x3c110032
    ctx->pc = 0x224c10u;
    SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
    // 0x224c14: 0x26300898
    ctx->pc = 0x224c14u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 2200));
    // 0x224c18: 0x8e04000c
    ctx->pc = 0x224c18u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x224c1c: 0xc0b0ce8
    ctx->pc = 0x224C1Cu;
    SET_GPR_U32(ctx, 31, 0x224C24u);
    ctx->pc = 0x224C20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224C24u; }
    }
    if (ctx->pc != 0x224C24u) { return; }
    ctx->pc = 0x224C24u;
    // 0x224c24: 0x3c04003a
    ctx->pc = 0x224c24u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x224c28: 0x24846a80
    ctx->pc = 0x224c28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27264));
    // 0x224c2c: 0x282d
    ctx->pc = 0x224c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c30: 0xc0b1ba8
    ctx->pc = 0x224C30u;
    SET_GPR_U32(ctx, 31, 0x224C38u);
    ctx->pc = 0x224C34u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C6EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Err_0x2c6ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224C38u; }
    }
    if (ctx->pc != 0x224C38u) { return; }
    ctx->pc = 0x224C38u;
    // 0x224c38: 0x8e240898
    ctx->pc = 0x224c38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 2200)));
    // 0x224c3c: 0x40282d
    ctx->pc = 0x224c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c40: 0xc0b0ed6
    ctx->pc = 0x224C40u;
    SET_GPR_U32(ctx, 31, 0x224C48u);
    ctx->pc = 0x224C44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetTex_0x2c3b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224C48u; }
    }
    if (ctx->pc != 0x224C48u) { return; }
    ctx->pc = 0x224C48u;
    // 0x224c48: 0x3c11003a
    ctx->pc = 0x224c48u;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x224c4c: 0x26246a88
    ctx->pc = 0x224c4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 27272));
    // 0x224c50: 0x282d
    ctx->pc = 0x224c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c54: 0xc0b1ba8
    ctx->pc = 0x224C54u;
    SET_GPR_U32(ctx, 31, 0x224C5Cu);
    ctx->pc = 0x224C58u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C6EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Err_0x2c6ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224C5Cu; }
    }
    if (ctx->pc != 0x224C5Cu) { return; }
    ctx->pc = 0x224C5Cu;
    // 0x224c5c: 0x8e040004
    ctx->pc = 0x224c5cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x224c60: 0x40282d
    ctx->pc = 0x224c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c64: 0xc0b0ed6
    ctx->pc = 0x224C64u;
    SET_GPR_U32(ctx, 31, 0x224C6Cu);
    ctx->pc = 0x224C68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetTex_0x2c3b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224C6Cu; }
    }
    if (ctx->pc != 0x224C6Cu) { return; }
    ctx->pc = 0x224C6Cu;
    // 0x224c6c: 0x26246a88
    ctx->pc = 0x224c6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 27272));
    // 0x224c70: 0x282d
    ctx->pc = 0x224c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c74: 0xc0b1ba8
    ctx->pc = 0x224C74u;
    SET_GPR_U32(ctx, 31, 0x224C7Cu);
    ctx->pc = 0x224C78u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C6EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Err_0x2c6ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224C7Cu; }
    }
    if (ctx->pc != 0x224C7Cu) { return; }
    ctx->pc = 0x224C7Cu;
    // 0x224c7c: 0x8e040008
    ctx->pc = 0x224c7cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x224c80: 0x40282d
    ctx->pc = 0x224c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c84: 0xc0b0ed6
    ctx->pc = 0x224C84u;
    SET_GPR_U32(ctx, 31, 0x224C8Cu);
    ctx->pc = 0x224C88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetTex_0x2c3b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224C8Cu; }
    }
    if (ctx->pc != 0x224C8Cu) { return; }
    ctx->pc = 0x224C8Cu;
    // 0x224c8c: 0x3c04003a
    ctx->pc = 0x224c8cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x224c90: 0x24846a98
    ctx->pc = 0x224c90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27288));
    // 0x224c94: 0x282d
    ctx->pc = 0x224c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c98: 0xc0b1ba8
    ctx->pc = 0x224C98u;
    SET_GPR_U32(ctx, 31, 0x224CA0u);
    ctx->pc = 0x224C9Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C6EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Err_0x2c6ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224CA0u; }
    }
    if (ctx->pc != 0x224CA0u) { return; }
    ctx->pc = 0x224CA0u;
    // 0x224ca0: 0x8e04000c
    ctx->pc = 0x224ca0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x224ca4: 0x40282d
    ctx->pc = 0x224ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ca8: 0xc0b0ed6
    ctx->pc = 0x224CA8u;
    SET_GPR_U32(ctx, 31, 0x224CB0u);
    ctx->pc = 0x224CACu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetTex_0x2c3b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224CB0u; }
    }
    if (ctx->pc != 0x224CB0u) { return; }
    ctx->pc = 0x224CB0u;
    // 0x224cb0: 0x8e040004
    ctx->pc = 0x224cb0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x224cb4: 0x3c01bf80
    ctx->pc = 0x224cb4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x224cb8: 0x44816000
    ctx->pc = 0x224cb8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x224cbc: 0x3c013e38
    ctx->pc = 0x224cbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15928 << 16));
    // 0x224cc0: 0x44817000
    ctx->pc = 0x224cc0u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
    // 0x224cc4: 0x3c013f00
    ctx->pc = 0x224cc4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x224cc8: 0x44817800
    ctx->pc = 0x224cc8u;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 1);
    // 0x224ccc: 0xc0b0e6a
    ctx->pc = 0x224CCCu;
    SET_GPR_U32(ctx, 31, 0x224CD4u);
    ctx->pc = 0x224CD0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2C39A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetCrop_0x2c39a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224CD4u; }
    }
    if (ctx->pc != 0x224CD4u) { return; }
    ctx->pc = 0x224CD4u;
    // 0x224cd4: 0x8e040004
    ctx->pc = 0x224cd4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x224cd8: 0x282d
    ctx->pc = 0x224cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224cdc: 0xc0b0cf6
    ctx->pc = 0x224CDCu;
    SET_GPR_U32(ctx, 31, 0x224CE4u);
    ctx->pc = 0x224CE0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 41));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224CE4u; }
    }
    if (ctx->pc != 0x224CE4u) { return; }
    ctx->pc = 0x224CE4u;
    // 0x224ce4: 0x8e040008
    ctx->pc = 0x224ce4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x224ce8: 0x3c01bf80
    ctx->pc = 0x224ce8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x224cec: 0x44816000
    ctx->pc = 0x224cecu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x224cf0: 0x3c013f52
    ctx->pc = 0x224cf0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16210 << 16));
    // 0x224cf4: 0x44817000
    ctx->pc = 0x224cf4u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
    // 0x224cf8: 0x3c013f80
    ctx->pc = 0x224cf8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x224cfc: 0x44817800
    ctx->pc = 0x224cfcu;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 1);
    // 0x224d00: 0xc0b0e6a
    ctx->pc = 0x224D00u;
    SET_GPR_U32(ctx, 31, 0x224D08u);
    ctx->pc = 0x224D04u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2C39A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetCrop_0x2c39a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224D08u; }
    }
    if (ctx->pc != 0x224D08u) { return; }
    ctx->pc = 0x224D08u;
    // 0x224d08: 0x8e040008
    ctx->pc = 0x224d08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x224d0c: 0x282d
    ctx->pc = 0x224d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224d10: 0x24060017
    ctx->pc = 0x224d10u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 23));
    // 0x224d14: 0xdfbf0030
    ctx->pc = 0x224d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x224d18: 0xdfb20020
    ctx->pc = 0x224d18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x224d1c: 0xdfb10010
    ctx->pc = 0x224d1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224d20: 0xdfb00000
    ctx->pc = 0x224d20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224d24: 0x80b0cf6
    ctx->pc = 0x224D24u;
    ctx->pc = 0x224D28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2C33D8u;
    MBBlitSetSize_0x2c33d8(rdram, ctx, runtime); return;
    ctx->pc = 0x224D2Cu;
}
