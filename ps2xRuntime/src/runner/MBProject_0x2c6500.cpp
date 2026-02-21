#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBProject
// Address: 0x2c6500 - 0x2c65b0
void MBProject_0x2c6500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c6500u;

    // 0x2c6500: 0x27bdffd0
    ctx->pc = 0x2c6500u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c6504: 0xffbf0020
    ctx->pc = 0x2c6504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c6508: 0xffb00010
    ctx->pc = 0x2c6508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2c650c: 0x80102d
    ctx->pc = 0x2c650cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6510: 0xc0802d
    ctx->pc = 0x2c6510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6514: 0xa0202d
    ctx->pc = 0x2c6514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6518: 0x3a0282d
    ctx->pc = 0x2c6518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c651c: 0xc0b5836
    ctx->pc = 0x2C651Cu;
    SET_GPR_U32(ctx, 31, 0x2C6524u);
    ctx->pc = 0x2C6520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D60D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MulVecMat4_0x2d60d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6524u; }
    }
    if (ctx->pc != 0x2C6524u) { return; }
    ctx->pc = 0x2C6524u;
    // 0x2c6524: 0x3c013f80
    ctx->pc = 0x2c6524u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2c6528: 0x44811000
    ctx->pc = 0x2c6528u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x2c652c: 0xc7a00008
    ctx->pc = 0x2c652cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6530: 0x46020034
    ctx->pc = 0x2c6530u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6534: 0x0
    ctx->pc = 0x2c6534u;
    // NOP
    // 0x2c6538: 0x45030005
    ctx->pc = 0x2C6538u;
    {
        const bool branch_taken_0x2c6538 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c6538) {
            ctx->pc = 0x2C653Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x2C6550u;
            goto label_2c6550;
        }
    }
    ctx->pc = 0x2C6540u;
    // 0x2c6540: 0x0
    ctx->pc = 0x2c6540u;
    // NOP
    // 0x2c6544: 0x0
    ctx->pc = 0x2c6544u;
    // NOP
    // 0x2c6548: 0x46001083
    ctx->pc = 0x2c6548u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
    // 0x2c654c: 0xc7a00000
    ctx->pc = 0x2c654cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c6550:
    // 0x2c6550: 0x46001002
    ctx->pc = 0x2c6550u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c6554: 0x3c03003a
    ctx->pc = 0x2c6554u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2c6558: 0x8c621bd0
    ctx->pc = 0x2c6558u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 7120)));
    // 0x2c655c: 0xc4410000
    ctx->pc = 0x2c655cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6560: 0x46010002
    ctx->pc = 0x2c6560u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c6564: 0xc4410008
    ctx->pc = 0x2c6564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6568: 0x46010000
    ctx->pc = 0x2c6568u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c656c: 0x46000064
    ctx->pc = 0x2c656cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c6570: 0x44020800
    ctx->pc = 0x2c6570u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x2c6574: 0xa6020000
    ctx->pc = 0x2c6574u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c6578: 0xc7a00004
    ctx->pc = 0x2c6578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c657c: 0x46001002
    ctx->pc = 0x2c657cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c6580: 0x8c621bd0
    ctx->pc = 0x2c6580u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 7120)));
    // 0x2c6584: 0xc4410004
    ctx->pc = 0x2c6584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6588: 0x46010002
    ctx->pc = 0x2c6588u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c658c: 0xc441000c
    ctx->pc = 0x2c658cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6590: 0x46010000
    ctx->pc = 0x2c6590u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c6594: 0x46000064
    ctx->pc = 0x2c6594u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c6598: 0x44020800
    ctx->pc = 0x2c6598u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x2c659c: 0xa6020002
    ctx->pc = 0x2c659cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c65a0: 0xdfbf0020
    ctx->pc = 0x2c65a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c65a4: 0xdfb00010
    ctx->pc = 0x2c65a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c65a8: 0x3e00008
    ctx->pc = 0x2C65A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C65ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C6550u: goto label_2c6550;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C65B0u;
}
