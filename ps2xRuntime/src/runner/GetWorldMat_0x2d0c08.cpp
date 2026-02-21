#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetWorldMat
// Address: 0x2d0c08 - 0x2d0cf8
void GetWorldMat_0x2d0c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d0c08u;

    // 0x2d0c08: 0x27bdffc0
    ctx->pc = 0x2d0c08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d0c0c: 0xffbf0030
    ctx->pc = 0x2d0c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d0c10: 0xffb20020
    ctx->pc = 0x2d0c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d0c14: 0xffb10010
    ctx->pc = 0x2d0c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d0c18: 0xffb00000
    ctx->pc = 0x2d0c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d0c1c: 0x80902d
    ctx->pc = 0x2d0c1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0c20: 0xa0882d
    ctx->pc = 0x2d0c20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0c24: 0xc0b5494
    ctx->pc = 0x2D0C24u;
    SET_GPR_U32(ctx, 31, 0x2D0C2Cu);
    ctx->pc = 0x2D0C28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0C2Cu; }
    }
    if (ctx->pc != 0x2D0C2Cu) { return; }
    ctx->pc = 0x2D0C2Cu;
    // 0x2d0c2c: 0x5200000e
    ctx->pc = 0x2D0C2Cu;
    {
        const bool branch_taken_0x2d0c2c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d0c2c) {
            ctx->pc = 0x2D0C30u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 96)));
            ctx->pc = 0x2D0C68u;
            goto label_2d0c68;
        }
    }
    ctx->pc = 0x2D0C34u;
    // 0x2d0c34: 0xc6200030
    ctx->pc = 0x2d0c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0c38: 0xc6010000
    ctx->pc = 0x2d0c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0c3c: 0x46010000
    ctx->pc = 0x2d0c3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d0c40: 0xe6200030
    ctx->pc = 0x2d0c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2d0c44: 0xc6200034
    ctx->pc = 0x2d0c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0c48: 0xc6010004
    ctx->pc = 0x2d0c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0c4c: 0x46010000
    ctx->pc = 0x2d0c4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d0c50: 0xe6200034
    ctx->pc = 0x2d0c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2d0c54: 0xc6200038
    ctx->pc = 0x2d0c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0c58: 0xc6010008
    ctx->pc = 0x2d0c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0c5c: 0x46010000
    ctx->pc = 0x2d0c5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d0c60: 0xe6200038
    ctx->pc = 0x2d0c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x2d0c64: 0x8e420060
    ctx->pc = 0x2d0c64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_2d0c68:
    // 0x2d0c68: 0x21883
    ctx->pc = 0x2d0c68u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2d0c6c: 0x8e500074
    ctx->pc = 0x2d0c6cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x2d0c70: 0x1200001a
    ctx->pc = 0x2D0C70u;
    {
        const bool branch_taken_0x2d0c70 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D0C74u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2d0c70) {
            ctx->pc = 0x2D0CDCu;
            goto label_2d0cdc;
        }
    }
    ctx->pc = 0x2D0C78u;
    // 0x2d0c78: 0x8e020060
    ctx->pc = 0x2d0c78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2d0c7c: 0x0
    ctx->pc = 0x2d0c7cu;
    // NOP
label_2d0c80:
    // 0x2d0c80: 0x30420004
    ctx->pc = 0x2d0c80u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x2d0c84: 0x54400007
    ctx->pc = 0x2D0C84u;
    {
        const bool branch_taken_0x2d0c84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d0c84) {
            ctx->pc = 0x2D0C88u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x2D0CA4u;
            goto label_2d0ca4;
        }
    }
    ctx->pc = 0x2D0C8Cu;
    // 0x2d0c8c: 0x200202d
    ctx->pc = 0x2d0c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0c90: 0x220282d
    ctx->pc = 0x2d0c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0c94: 0xc0b56b8
    ctx->pc = 0x2D0C94u;
    SET_GPR_U32(ctx, 31, 0x2D0C9Cu);
    ctx->pc = 0x2D0C98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5AE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MulMat4_0x2d5ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0C9Cu; }
    }
    if (ctx->pc != 0x2D0C9Cu) { return; }
    ctx->pc = 0x2D0C9Cu;
    // 0x2d0c9c: 0x1000000c
    ctx->pc = 0x2D0C9Cu;
    {
        const bool branch_taken_0x2d0c9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D0CA0u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d0c9c) {
            ctx->pc = 0x2D0CD0u;
            goto label_2d0cd0;
        }
    }
    ctx->pc = 0x2D0CA4u;
label_2d0ca4:
    // 0x2d0ca4: 0xc6210030
    ctx->pc = 0x2d0ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0ca8: 0x46010000
    ctx->pc = 0x2d0ca8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d0cac: 0xe6200030
    ctx->pc = 0x2d0cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2d0cb0: 0xc6000034
    ctx->pc = 0x2d0cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0cb4: 0xc6210034
    ctx->pc = 0x2d0cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0cb8: 0x46010000
    ctx->pc = 0x2d0cb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d0cbc: 0xe6200034
    ctx->pc = 0x2d0cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2d0cc0: 0xc6000038
    ctx->pc = 0x2d0cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0cc4: 0xc6210038
    ctx->pc = 0x2d0cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0cc8: 0x46010000
    ctx->pc = 0x2d0cc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d0ccc: 0xe6200038
    ctx->pc = 0x2d0cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
label_2d0cd0:
    // 0x2d0cd0: 0x8e100074
    ctx->pc = 0x2d0cd0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2d0cd4: 0x5600ffea
    ctx->pc = 0x2D0CD4u;
    {
        const bool branch_taken_0x2d0cd4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d0cd4) {
            ctx->pc = 0x2D0CD8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->pc = 0x2D0C80u;
            goto label_2d0c80;
        }
    }
    ctx->pc = 0x2D0CDCu;
label_2d0cdc:
    // 0x2d0cdc: 0x60102d
    ctx->pc = 0x2d0cdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0ce0: 0xdfbf0030
    ctx->pc = 0x2d0ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0ce4: 0xdfb20020
    ctx->pc = 0x2d0ce4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0ce8: 0xdfb10010
    ctx->pc = 0x2d0ce8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0cec: 0xdfb00000
    ctx->pc = 0x2d0cecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0cf0: 0x3e00008
    ctx->pc = 0x2D0CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0CF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D0C68u: goto label_2d0c68;
            case 0x2D0C80u: goto label_2d0c80;
            case 0x2D0CA4u: goto label_2d0ca4;
            case 0x2D0CD0u: goto label_2d0cd0;
            case 0x2D0CDCu: goto label_2d0cdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D0CF8u;
}
