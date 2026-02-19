#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: QuickYawMat
// Address: 0x2c8188 - 0x2c8238
void QuickYawMat_0x2c8188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c8188u;

    // 0x2c8188: 0x27bdffd0
    ctx->pc = 0x2c8188u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c818c: 0xffbf0010
    ctx->pc = 0x2c818cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c8190: 0xffb00000
    ctx->pc = 0x2c8190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c8194: 0xe7b40020
    ctx->pc = 0x2c8194u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c8198: 0x80802d
    ctx->pc = 0x2c8198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c819c: 0xc60c0020
    ctx->pc = 0x2c819cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c81a0: 0xc0ba04a
    ctx->pc = 0x2C81A0u;
    SET_GPR_U32(ctx, 31, 0x2C81A8u);
    ctx->pc = 0x2C81A4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C81A8u; }
    }
    if (ctx->pc != 0x2C81A8u) { return; }
    ctx->pc = 0x2C81A8u;
    // 0x2c81a8: 0x46000506
    ctx->pc = 0x2c81a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2c81ac: 0x3c02003a
    ctx->pc = 0x2c81acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2c81b0: 0x8c421bd0
    ctx->pc = 0x2c81b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7120)));
    // 0x2c81b4: 0xc44c0090
    ctx->pc = 0x2c81b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c81b8: 0xc0ba04a
    ctx->pc = 0x2C81B8u;
    SET_GPR_U32(ctx, 31, 0x2C81C0u);
    ctx->pc = 0x2C81BCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C81C0u; }
    }
    if (ctx->pc != 0x2C81C0u) { return; }
    ctx->pc = 0x2C81C0u;
    // 0x2c81c0: 0x3c014049
    ctx->pc = 0x2c81c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x2c81c4: 0x34210fdb
    ctx->pc = 0x2c81c4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2c81c8: 0x44810800
    ctx->pc = 0x2c81c8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2c81cc: 0x46010000
    ctx->pc = 0x2c81ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c81d0: 0x46140301
    ctx->pc = 0x2c81d0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2c81d4: 0x460c0834
    ctx->pc = 0x2c81d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c81d8: 0x45000006
    ctx->pc = 0x2C81D8u;
    {
        const bool branch_taken_0x2c81d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c81d8) {
            ctx->pc = 0x2C81F4u;
            goto label_2c81f4;
        }
    }
    ctx->pc = 0x2C81E0u;
    // 0x2c81e0: 0x3c0140c9
    ctx->pc = 0x2c81e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2c81e4: 0x34210fdb
    ctx->pc = 0x2c81e4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2c81e8: 0x44810000
    ctx->pc = 0x2c81e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c81ec: 0x1000000c
    ctx->pc = 0x2C81ECu;
    {
        const bool branch_taken_0x2c81ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C81F0u;
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        if (branch_taken_0x2c81ec) {
            ctx->pc = 0x2C8220u;
            goto label_2c8220;
        }
    }
    ctx->pc = 0x2C81F4u;
label_2c81f4:
    // 0x2c81f4: 0x3c01c049
    ctx->pc = 0x2c81f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x2c81f8: 0x34210fdb
    ctx->pc = 0x2c81f8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2c81fc: 0x44810000
    ctx->pc = 0x2c81fcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c8200: 0x46006036
    ctx->pc = 0x2c8200u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8204: 0x0
    ctx->pc = 0x2c8204u;
    // NOP
    // 0x2c8208: 0x45000006
    ctx->pc = 0x2C8208u;
    {
        const bool branch_taken_0x2c8208 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C820Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c8208) {
            ctx->pc = 0x2C8224u;
            goto label_2c8224;
        }
    }
    ctx->pc = 0x2C8210u;
    // 0x2c8210: 0x3c0140c9
    ctx->pc = 0x2c8210u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2c8214: 0x34210fdb
    ctx->pc = 0x2c8214u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2c8218: 0x44810000
    ctx->pc = 0x2c8218u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c821c: 0x46006300
    ctx->pc = 0x2c821cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_2c8220:
    // 0x2c8220: 0x200202d
    ctx->pc = 0x2c8220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8224:
    // 0x2c8224: 0xdfbf0010
    ctx->pc = 0x2c8224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8228: 0xdfb00000
    ctx->pc = 0x2c8228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c822c: 0xc7b40020
    ctx->pc = 0x2c822cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c8230: 0x80b5632
    ctx->pc = 0x2C8230u;
    ctx->pc = 0x2C8234u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x2D58C8u;
    YawMat3_0x2d58c8(rdram, ctx, runtime); return;
    ctx->pc = 0x2C8238u;
}
