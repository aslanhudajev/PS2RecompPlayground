#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: heal_player
// Address: 0x2325f8 - 0x232690
void heal_player_0x2325f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2325f8u;

    // 0x2325f8: 0x8c822ac0
    ctx->pc = 0x2325f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 10944)));
    // 0x2325fc: 0x2442ffff
    ctx->pc = 0x2325fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x232600: 0x44820800
    ctx->pc = 0x232600u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x232604: 0x46800860
    ctx->pc = 0x232604u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x232608: 0x3c0142c8
    ctx->pc = 0x232608u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17096 << 16));
    // 0x23260c: 0x44810000
    ctx->pc = 0x23260cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x232610: 0x46000842
    ctx->pc = 0x232610u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x232614: 0x3c0143fa
    ctx->pc = 0x232614u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17402 << 16));
    // 0x232618: 0x44810000
    ctx->pc = 0x232618u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23261c: 0x46000840
    ctx->pc = 0x23261cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x232620: 0x3c01461c
    ctx->pc = 0x232620u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17948 << 16));
    // 0x232624: 0x34213c00
    ctx->pc = 0x232624u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 15360));
    // 0x232628: 0x44810000
    ctx->pc = 0x232628u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23262c: 0x46010034
    ctx->pc = 0x23262cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232630: 0x0
    ctx->pc = 0x232630u;
    // NOP
    // 0x232634: 0x45030001
    ctx->pc = 0x232634u;
    {
        const bool branch_taken_0x232634 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x232634) {
            ctx->pc = 0x232638u;
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x23263Cu;
            goto label_23263c;
        }
    }
    ctx->pc = 0x23263Cu;
label_23263c:
    // 0x23263c: 0x44800000
    ctx->pc = 0x23263cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x232640: 0x460c0034
    ctx->pc = 0x232640u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232644: 0x0
    ctx->pc = 0x232644u;
    // NOP
    // 0x232648: 0x45000007
    ctx->pc = 0x232648u;
    {
        const bool branch_taken_0x232648 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23264Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x232648) {
            ctx->pc = 0x232668u;
            goto label_232668;
        }
    }
    ctx->pc = 0x232650u;
    // 0x232650: 0x46000836
    ctx->pc = 0x232650u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232654: 0x0
    ctx->pc = 0x232654u;
    // NOP
    // 0x232658: 0x45020004
    ctx->pc = 0x232658u;
    {
        const bool branch_taken_0x232658 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x232658) {
            ctx->pc = 0x23265Cu;
            ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
            ctx->pc = 0x23266Cu;
            goto label_23266c;
        }
    }
    ctx->pc = 0x232660u;
    // 0x232660: 0x3e00008
    ctx->pc = 0x232660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232664u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23263Cu: goto label_23263c;
            case 0x232668u: goto label_232668;
            case 0x23266Cu: goto label_23266c;
            case 0x232688u: goto label_232688;
            default: break;
        }
        return;
    }
    ctx->pc = 0x232668u;
label_232668:
    // 0x232668: 0x46006000
    ctx->pc = 0x232668u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_23266c:
    // 0x23266c: 0x46000834
    ctx->pc = 0x23266cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232670: 0x0
    ctx->pc = 0x232670u;
    // NOP
    // 0x232674: 0x45000004
    ctx->pc = 0x232674u;
    {
        const bool branch_taken_0x232674 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x232678u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6672), bits); }
        if (branch_taken_0x232674) {
            ctx->pc = 0x232688u;
            goto label_232688;
        }
    }
    ctx->pc = 0x23267Cu;
    // 0x23267c: 0xe4811a10
    ctx->pc = 0x23267cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6672), bits); }
    // 0x232680: 0x3e00008
    ctx->pc = 0x232680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232684u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23263Cu: goto label_23263c;
            case 0x232668u: goto label_232668;
            case 0x23266Cu: goto label_23266c;
            case 0x232688u: goto label_232688;
            default: break;
        }
        return;
    }
    ctx->pc = 0x232688u;
label_232688:
    // 0x232688: 0x3e00008
    ctx->pc = 0x232688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23268Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23263Cu: goto label_23263c;
            case 0x232668u: goto label_232668;
            case 0x23266Cu: goto label_23266c;
            case 0x232688u: goto label_232688;
            default: break;
        }
        return;
    }
    ctx->pc = 0x232690u;
}
