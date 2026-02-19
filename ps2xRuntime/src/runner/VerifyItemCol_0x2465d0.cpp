#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: VerifyItemCol
// Address: 0x2465d0 - 0x246640
void VerifyItemCol_0x2465d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2465d0u;

    // 0x2465d0: 0x27bdfff0
    ctx->pc = 0x2465d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2465d4: 0x8c820000
    ctx->pc = 0x2465d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2465d8: 0x8c430000
    ctx->pc = 0x2465d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2465dc: 0x24020007
    ctx->pc = 0x2465dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x2465e0: 0x10620014
    ctx->pc = 0x2465E0u;
    {
        const bool branch_taken_0x2465e0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2465E4u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2465e0) {
            ctx->pc = 0x246634u;
            goto label_246634;
        }
    }
    ctx->pc = 0x2465E8u;
    // 0x2465e8: 0xc4810060
    ctx->pc = 0x2465e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2465ec: 0xc4a00000
    ctx->pc = 0x2465ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2465f0: 0x46000841
    ctx->pc = 0x2465f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2465f4: 0xe7a10000
    ctx->pc = 0x2465f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2465f8: 0xafa00004
    ctx->pc = 0x2465f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2465fc: 0xc4820068
    ctx->pc = 0x2465fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x246600: 0xc4a00008
    ctx->pc = 0x246600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246604: 0x46001081
    ctx->pc = 0x246604u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x246608: 0xe7a20008
    ctx->pc = 0x246608u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x24660c: 0xc4c00000
    ctx->pc = 0x24660cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246610: 0x46000842
    ctx->pc = 0x246610u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x246614: 0xc4c00008
    ctx->pc = 0x246614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246618: 0x46001082
    ctx->pc = 0x246618u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x24661c: 0x46020840
    ctx->pc = 0x24661cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x246620: 0xc7a00004
    ctx->pc = 0x246620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246624: 0x46000834
    ctx->pc = 0x246624u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x246628: 0x0
    ctx->pc = 0x246628u;
    // NOP
    // 0x24662c: 0x45030001
    ctx->pc = 0x24662Cu;
    {
        const bool branch_taken_0x24662c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24662c) {
            ctx->pc = 0x246630u;
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x246634u;
            goto label_246634;
        }
    }
    ctx->pc = 0x246634u;
label_246634:
    // 0x246634: 0xe0102d
    ctx->pc = 0x246634u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246638: 0x3e00008
    ctx->pc = 0x246638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24663Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x246634u: goto label_246634;
            default: break;
        }
        return;
    }
    ctx->pc = 0x246640u;
}
