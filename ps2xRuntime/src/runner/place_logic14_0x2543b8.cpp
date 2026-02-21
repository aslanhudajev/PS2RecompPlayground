#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: place_logic14
// Address: 0x2543b8 - 0x254498
void place_logic14_0x2543b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2543b8u;

    // 0x2543b8: 0x240203b0
    ctx->pc = 0x2543b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 944));
    // 0x2543bc: 0xa22818
    ctx->pc = 0x2543bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2543c0: 0x3c020033
    ctx->pc = 0x2543c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x2543c4: 0x2442dfd0
    ctx->pc = 0x2543c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x2543c8: 0xa22821
    ctx->pc = 0x2543c8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2543cc: 0x90820004
    ctx->pc = 0x2543ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2543d0: 0x30420001
    ctx->pc = 0x2543d0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2543d4: 0x10400008
    ctx->pc = 0x2543D4u;
    {
        const bool branch_taken_0x2543d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2543D8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2543d4) {
            ctx->pc = 0x2543F8u;
            goto label_2543f8;
        }
    }
    ctx->pc = 0x2543DCu;
    // 0x2543dc: 0xc4a00260
    ctx->pc = 0x2543dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2543e0: 0x3c013f49
    ctx->pc = 0x2543e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16201 << 16));
    // 0x2543e4: 0x34210fdb
    ctx->pc = 0x2543e4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2543e8: 0x44810800
    ctx->pc = 0x2543e8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2543ec: 0x46010001
    ctx->pc = 0x2543ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2543f0: 0x10000008
    ctx->pc = 0x2543F0u;
    {
        const bool branch_taken_0x2543f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2543F4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 608), bits); }
        if (branch_taken_0x2543f0) {
            ctx->pc = 0x254414u;
            goto label_254414;
        }
    }
    ctx->pc = 0x2543F8u;
label_2543f8:
    // 0x2543f8: 0xc4a00260
    ctx->pc = 0x2543f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2543fc: 0x3c013f49
    ctx->pc = 0x2543fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16201 << 16));
    // 0x254400: 0x34210fdb
    ctx->pc = 0x254400u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x254404: 0x44810800
    ctx->pc = 0x254404u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x254408: 0x46010000
    ctx->pc = 0x254408u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25440c: 0xe4a00260
    ctx->pc = 0x25440cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 608), bits); }
    // 0x254410: 0x24020001
    ctx->pc = 0x254410u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_254414:
    // 0x254414: 0xaca20330
    ctx->pc = 0x254414u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 816), GPR_U32(ctx, 2));
    // 0x254418: 0xc4a10260
    ctx->pc = 0x254418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25441c: 0x3c014049
    ctx->pc = 0x25441cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x254420: 0x34210fdb
    ctx->pc = 0x254420u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x254424: 0x44810000
    ctx->pc = 0x254424u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x254428: 0x46010034
    ctx->pc = 0x254428u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25442c: 0x45000006
    ctx->pc = 0x25442Cu;
    {
        const bool branch_taken_0x25442c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25442c) {
            ctx->pc = 0x254448u;
            goto label_254448;
        }
    }
    ctx->pc = 0x254434u;
    // 0x254434: 0x3c0140c9
    ctx->pc = 0x254434u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x254438: 0x34210fdb
    ctx->pc = 0x254438u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x25443c: 0x44810000
    ctx->pc = 0x25443cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x254440: 0x1000000c
    ctx->pc = 0x254440u;
    {
        const bool branch_taken_0x254440 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x254444u;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x254440) {
            ctx->pc = 0x254474u;
            goto label_254474;
        }
    }
    ctx->pc = 0x254448u;
label_254448:
    // 0x254448: 0x3c01c049
    ctx->pc = 0x254448u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x25444c: 0x34210fdb
    ctx->pc = 0x25444cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x254450: 0x44810000
    ctx->pc = 0x254450u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x254454: 0x46000836
    ctx->pc = 0x254454u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x254458: 0x0
    ctx->pc = 0x254458u;
    // NOP
    // 0x25445c: 0x45020005
    ctx->pc = 0x25445Cu;
    {
        const bool branch_taken_0x25445c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25445c) {
            ctx->pc = 0x254460u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x254474u;
            goto label_254474;
        }
    }
    ctx->pc = 0x254464u;
    // 0x254464: 0x3c0140c9
    ctx->pc = 0x254464u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x254468: 0x34210fdb
    ctx->pc = 0x254468u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x25446c: 0x44810000
    ctx->pc = 0x25446cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x254470: 0x46000800
    ctx->pc = 0x254470u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_254474:
    // 0x254474: 0xe4a00260
    ctx->pc = 0x254474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 608), bits); }
    // 0x254478: 0xe4a00264
    ctx->pc = 0x254478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 612), bits); }
    // 0x25447c: 0x90820002
    ctx->pc = 0x25447cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x254480: 0x24420001
    ctx->pc = 0x254480u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x254484: 0xa0820002
    ctx->pc = 0x254484u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x254488: 0x90820004
    ctx->pc = 0x254488u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25448c: 0x24420001
    ctx->pc = 0x25448cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x254490: 0x3e00008
    ctx->pc = 0x254490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254494u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2543F8u: goto label_2543f8;
            case 0x254414u: goto label_254414;
            case 0x254448u: goto label_254448;
            case 0x254474u: goto label_254474;
            default: break;
        }
        return;
    }
    ctx->pc = 0x254498u;
}
