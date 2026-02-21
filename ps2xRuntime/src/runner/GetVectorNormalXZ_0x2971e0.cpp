#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetVectorNormalXZ
// Address: 0x2971e0 - 0x29726c
void GetVectorNormalXZ_0x2971e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2971e0u;

    // 0x2971e0: 0x27bdffc0
    ctx->pc = 0x2971e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2971e4: 0xffbf0020
    ctx->pc = 0x2971e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2971e8: 0xffb10010
    ctx->pc = 0x2971e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2971ec: 0xffb00000
    ctx->pc = 0x2971ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2971f0: 0xe7b50038
    ctx->pc = 0x2971f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2971f4: 0xe7b40030
    ctx->pc = 0x2971f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2971f8: 0xa0802d
    ctx->pc = 0x2971f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2971fc: 0xc0882d
    ctx->pc = 0x2971fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297200: 0xc4940000
    ctx->pc = 0x297200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x297204: 0xc4950008
    ctx->pc = 0x297204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x297208: 0x4600a306
    ctx->pc = 0x297208u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x29720c: 0xc0b5c34
    ctx->pc = 0x29720Cu;
    SET_GPR_U32(ctx, 31, 0x297214u);
    ctx->pc = 0x297210u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297214u; }
    }
    if (ctx->pc != 0x297214u) { return; }
    ctx->pc = 0x297214u;
    // 0x297214: 0x46000046
    ctx->pc = 0x297214u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x297218: 0x44800000
    ctx->pc = 0x297218u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x29721c: 0x46010034
    ctx->pc = 0x29721cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x297220: 0x0
    ctx->pc = 0x297220u;
    // NOP
    // 0x297224: 0x45020009
    ctx->pc = 0x297224u;
    {
        const bool branch_taken_0x297224 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x297224) {
            ctx->pc = 0x297228u;
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
            ctx->pc = 0x29724Cu;
            goto label_29724c;
        }
    }
    ctx->pc = 0x29722Cu;
    // 0x29722c: 0x3c013f80
    ctx->pc = 0x29722cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x297230: 0x44810000
    ctx->pc = 0x297230u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x297234: 0x0
    ctx->pc = 0x297234u;
    // NOP
    // 0x297238: 0x0
    ctx->pc = 0x297238u;
    // NOP
    // 0x29723c: 0x46010003
    ctx->pc = 0x29723cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x297240: 0x4600a502
    ctx->pc = 0x297240u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x297244: 0x4600ad42
    ctx->pc = 0x297244u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x297248: 0xe6140000
    ctx->pc = 0x297248u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_29724c:
    // 0x29724c: 0xe6350000
    ctx->pc = 0x29724cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x297250: 0xdfbf0020
    ctx->pc = 0x297250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297254: 0xdfb10010
    ctx->pc = 0x297254u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297258: 0xdfb00000
    ctx->pc = 0x297258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29725c: 0xc7b50038
    ctx->pc = 0x29725cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x297260: 0xc7b40030
    ctx->pc = 0x297260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x297264: 0x3e00008
    ctx->pc = 0x297264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297268u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29724Cu: goto label_29724c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29726Cu;
}
