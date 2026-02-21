#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: UnparentMatrix
// Address: 0x2d0b70 - 0x2d0c08
void UnparentMatrix_0x2d0b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d0b70u;

label_2d0b70:
    // 0x2d0b70: 0x27bdff90
    ctx->pc = 0x2d0b70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d0b74: 0xffbf0060
    ctx->pc = 0x2d0b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2d0b78: 0xffb10050
    ctx->pc = 0x2d0b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2d0b7c: 0xffb00040
    ctx->pc = 0x2d0b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2d0b80: 0xa0802d
    ctx->pc = 0x2d0b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0b84: 0x1200001b
    ctx->pc = 0x2D0B84u;
    {
        const bool branch_taken_0x2d0b84 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D0B88u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d0b84) {
            ctx->pc = 0x2D0BF4u;
            goto label_2d0bf4;
        }
    }
    ctx->pc = 0x2D0B8Cu;
    // 0x2d0b8c: 0xc0b42dc
    ctx->pc = 0x2D0B8Cu;
    SET_GPR_U32(ctx, 31, 0x2D0B94u);
    ctx->pc = 0x2D0B90u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 116)));
    ctx->pc = 0x2D0B70u;
    goto label_2d0b70;
    ctx->pc = 0x2D0B94u;
label_2d0b94:
    // 0x2d0b94: 0x8e020060
    ctx->pc = 0x2d0b94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2d0b98: 0x30420004
    ctx->pc = 0x2d0b98u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x2d0b9c: 0x5440000a
    ctx->pc = 0x2D0B9Cu;
    {
        const bool branch_taken_0x2d0b9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d0b9c) {
            ctx->pc = 0x2D0BA0u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x2D0BC8u;
            goto label_2d0bc8;
        }
    }
    ctx->pc = 0x2D0BA4u;
    // 0x2d0ba4: 0x200202d
    ctx->pc = 0x2d0ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0ba8: 0xc0b54f0
    ctx->pc = 0x2D0BA8u;
    SET_GPR_U32(ctx, 31, 0x2D0BB0u);
    ctx->pc = 0x2D0BACu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D53C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        InvertMat4_0x2d53c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0BB0u; }
    }
    if (ctx->pc != 0x2D0BB0u) { return; }
    ctx->pc = 0x2D0BB0u;
    // 0x2d0bb0: 0x3a0202d
    ctx->pc = 0x2d0bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0bb4: 0x220282d
    ctx->pc = 0x2d0bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0bb8: 0xc0b56b8
    ctx->pc = 0x2D0BB8u;
    SET_GPR_U32(ctx, 31, 0x2D0BC0u);
    ctx->pc = 0x2D0BBCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5AE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MulMat4_0x2d5ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0BC0u; }
    }
    if (ctx->pc != 0x2D0BC0u) { return; }
    ctx->pc = 0x2D0BC0u;
    // 0x2d0bc0: 0x1000000d
    ctx->pc = 0x2D0BC0u;
    {
        const bool branch_taken_0x2d0bc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D0BC4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x2d0bc0) {
            ctx->pc = 0x2D0BF8u;
            goto label_2d0bf8;
        }
    }
    ctx->pc = 0x2D0BC8u;
label_2d0bc8:
    // 0x2d0bc8: 0xc6010030
    ctx->pc = 0x2d0bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0bcc: 0x46010001
    ctx->pc = 0x2d0bccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d0bd0: 0xe6200030
    ctx->pc = 0x2d0bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2d0bd4: 0xc6200034
    ctx->pc = 0x2d0bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0bd8: 0xc6010034
    ctx->pc = 0x2d0bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0bdc: 0x46010001
    ctx->pc = 0x2d0bdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d0be0: 0xe6200034
    ctx->pc = 0x2d0be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2d0be4: 0xc6200038
    ctx->pc = 0x2d0be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0be8: 0xc6010038
    ctx->pc = 0x2d0be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0bec: 0x46010001
    ctx->pc = 0x2d0becu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d0bf0: 0xe6200038
    ctx->pc = 0x2d0bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
label_2d0bf4:
    // 0x2d0bf4: 0xdfbf0060
    ctx->pc = 0x2d0bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2d0bf8:
    // 0x2d0bf8: 0xdfb10050
    ctx->pc = 0x2d0bf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d0bfc: 0xdfb00040
    ctx->pc = 0x2d0bfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d0c00: 0x3e00008
    ctx->pc = 0x2D0C00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0C04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D0B70u: goto label_2d0b70;
            case 0x2D0B94u: goto label_2d0b94;
            case 0x2D0BC8u: goto label_2d0bc8;
            case 0x2D0BF4u: goto label_2d0bf4;
            case 0x2D0BF8u: goto label_2d0bf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D0C08u;
}
