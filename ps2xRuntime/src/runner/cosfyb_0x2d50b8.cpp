#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: cosfyb
// Address: 0x2d50b8 - 0x2d5218
void cosfyb_0x2d50b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d50b8u;

    // 0x2d50b8: 0x3c02003a
    ctx->pc = 0x2d50b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d50bc: 0x3c013fc9
    ctx->pc = 0x2d50bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x2d50c0: 0x34210fdb
    ctx->pc = 0x2d50c0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2d50c4: 0x44810000
    ctx->pc = 0x2d50c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d50c8: 0x46006300
    ctx->pc = 0x2d50c8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2d50cc: 0xe44c2640
    ctx->pc = 0x2d50ccu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 9792), bits); }
    // 0x2d50d0: 0x3c014049
    ctx->pc = 0x2d50d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x2d50d4: 0x34210fdb
    ctx->pc = 0x2d50d4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2d50d8: 0x44810000
    ctx->pc = 0x2d50d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d50dc: 0x460c0034
    ctx->pc = 0x2d50dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d50e0: 0x0
    ctx->pc = 0x2d50e0u;
    // NOP
    // 0x2d50e4: 0x4500000f
    ctx->pc = 0x2D50E4u;
    {
        const bool branch_taken_0x2d50e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D50E8u;
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x2d50e4) {
            ctx->pc = 0x2D5124u;
            goto label_2d5124;
        }
    }
    ctx->pc = 0x2D50ECu;
    // 0x2d50ec: 0x3c0140c9
    ctx->pc = 0x2d50ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2d50f0: 0x34210fdb
    ctx->pc = 0x2d50f0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2d50f4: 0x44811800
    ctx->pc = 0x2d50f4u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x2d50f8: 0x46006046
    ctx->pc = 0x2d50f8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[12]);
    // 0x2d50fc: 0x0
    ctx->pc = 0x2d50fcu;
    // NOP
label_2d5100:
    // 0x2d5100: 0x46030801
    ctx->pc = 0x2d5100u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2d5104: 0x46000046
    ctx->pc = 0x2d5104u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2d5108: 0x46001034
    ctx->pc = 0x2d5108u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d510c: 0x0
    ctx->pc = 0x2d510cu;
    // NOP
    // 0x2d5110: 0x0
    ctx->pc = 0x2d5110u;
    // NOP
    // 0x2d5114: 0x4501fffa
    ctx->pc = 0x2D5114u;
    {
        const bool branch_taken_0x2d5114 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d5114) {
            ctx->pc = 0x2D5100u;
            goto label_2d5100;
        }
    }
    ctx->pc = 0x2D511Cu;
    // 0x2d511c: 0xe4412640
    ctx->pc = 0x2d511cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 9792), bits); }
    // 0x2d5120: 0x3c02003a
    ctx->pc = 0x2d5120u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_2d5124:
    // 0x2d5124: 0x3c01c049
    ctx->pc = 0x2d5124u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x2d5128: 0x34210fdb
    ctx->pc = 0x2d5128u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2d512c: 0x44810800
    ctx->pc = 0x2d512cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2d5130: 0xc4402640
    ctx->pc = 0x2d5130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5134: 0x46010036
    ctx->pc = 0x2d5134u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d5138: 0x0
    ctx->pc = 0x2d5138u;
    // NOP
    // 0x2d513c: 0x45020010
    ctx->pc = 0x2D513Cu;
    {
        const bool branch_taken_0x2d513c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d513c) {
            ctx->pc = 0x2D5140u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x2D5180u;
            goto label_2d5180;
        }
    }
    ctx->pc = 0x2D5144u;
    // 0x2d5144: 0x3c0140c9
    ctx->pc = 0x2d5144u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2d5148: 0x34210fdb
    ctx->pc = 0x2d5148u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2d514c: 0x44811800
    ctx->pc = 0x2d514cu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x2d5150: 0x46000886
    ctx->pc = 0x2d5150u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x2d5154: 0x46000046
    ctx->pc = 0x2d5154u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2d5158:
    // 0x2d5158: 0x46030800
    ctx->pc = 0x2d5158u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2d515c: 0x46000046
    ctx->pc = 0x2d515cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2d5160: 0x46020036
    ctx->pc = 0x2d5160u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d5164: 0x0
    ctx->pc = 0x2d5164u;
    // NOP
    // 0x2d5168: 0x0
    ctx->pc = 0x2d5168u;
    // NOP
    // 0x2d516c: 0x4501fffa
    ctx->pc = 0x2D516Cu;
    {
        const bool branch_taken_0x2d516c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d516c) {
            ctx->pc = 0x2D5158u;
            goto label_2d5158;
        }
    }
    ctx->pc = 0x2D5174u;
    // 0x2d5174: 0xe4412640
    ctx->pc = 0x2d5174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 9792), bits); }
    // 0x2d5178: 0x3c02003a
    ctx->pc = 0x2d5178u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d517c: 0xc4412640
    ctx->pc = 0x2d517cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d5180:
    // 0x2d5180: 0x3c013fc9
    ctx->pc = 0x2d5180u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x2d5184: 0x34210fdb
    ctx->pc = 0x2d5184u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2d5188: 0x44810000
    ctx->pc = 0x2d5188u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d518c: 0x46010034
    ctx->pc = 0x2d518cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d5190: 0x0
    ctx->pc = 0x2d5190u;
    // NOP
    // 0x2d5194: 0x45020006
    ctx->pc = 0x2D5194u;
    {
        const bool branch_taken_0x2d5194 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d5194) {
            ctx->pc = 0x2D5198u;
            SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
            ctx->pc = 0x2D51B0u;
            goto label_2d51b0;
        }
    }
    ctx->pc = 0x2D519Cu;
    // 0x2d519c: 0x3c014049
    ctx->pc = 0x2d519cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x2d51a0: 0x34210fdb
    ctx->pc = 0x2d51a0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2d51a4: 0x44810000
    ctx->pc = 0x2d51a4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d51a8: 0x1000000d
    ctx->pc = 0x2D51A8u;
    {
        const bool branch_taken_0x2d51a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D51ACu;
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x2d51a8) {
            ctx->pc = 0x2D51E0u;
            goto label_2d51e0;
        }
    }
    ctx->pc = 0x2D51B0u;
label_2d51b0:
    // 0x2d51b0: 0xc4412640
    ctx->pc = 0x2d51b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d51b4: 0x3c01bfc9
    ctx->pc = 0x2d51b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49097 << 16));
    // 0x2d51b8: 0x34210fdb
    ctx->pc = 0x2d51b8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2d51bc: 0x44810000
    ctx->pc = 0x2d51bcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d51c0: 0x46000834
    ctx->pc = 0x2d51c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d51c4: 0x0
    ctx->pc = 0x2d51c4u;
    // NOP
    // 0x2d51c8: 0x45020007
    ctx->pc = 0x2D51C8u;
    {
        const bool branch_taken_0x2d51c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d51c8) {
            ctx->pc = 0x2D51CCu;
            SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
            ctx->pc = 0x2D51E8u;
            goto label_2d51e8;
        }
    }
    ctx->pc = 0x2D51D0u;
    // 0x2d51d0: 0x3c01c049
    ctx->pc = 0x2d51d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x2d51d4: 0x34210fdb
    ctx->pc = 0x2d51d4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2d51d8: 0x44810000
    ctx->pc = 0x2d51d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d51dc: 0x46010001
    ctx->pc = 0x2d51dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2d51e0:
    // 0x2d51e0: 0xe4402640
    ctx->pc = 0x2d51e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 9792), bits); }
    // 0x2d51e4: 0x3c02003a
    ctx->pc = 0x2d51e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_2d51e8:
    // 0x2d51e8: 0x24422640
    ctx->pc = 0x2d51e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9792));
    // 0x2d51ec: 0x3c04003a
    ctx->pc = 0x2d51ecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2d51f0: 0x24832660
    ctx->pc = 0x2d51f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 9824));
    // 0x2d51f4: 0xd8500000
    ctx->pc = 0x2d51f4u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d51f8: 0xf
    ctx->pc = 0x2d51f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2d51fc: 0x40f
    ctx->pc = 0x2d51fcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2d5200: 0x4a0002ff
    ctx->pc = 0x2d5200u;
    // NOP operation, no action needed for VU0
    // 0x2d5204: 0x4a000038
    ctx->pc = 0x2d5204u;
    {     ctx->vu0_tpc = 0x0;     runtime->executeVU0Microprogram(rdram, ctx, 0x0); }
    // 0x2d5208: 0x4a0002ff
    ctx->pc = 0x2d5208u;
    // NOP operation, no action needed for VU0
    // 0x2d520c: 0xf8700000
    ctx->pc = 0x2d520cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2d5210: 0x3e00008
    ctx->pc = 0x2D5210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5214u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 9824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D5100u: goto label_2d5100;
            case 0x2D5124u: goto label_2d5124;
            case 0x2D5158u: goto label_2d5158;
            case 0x2D5180u: goto label_2d5180;
            case 0x2D51B0u: goto label_2d51b0;
            case 0x2D51E0u: goto label_2d51e0;
            case 0x2D51E8u: goto label_2d51e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D5218u;
}
