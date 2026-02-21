#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: get_turn_dir
// Address: 0x23bf50 - 0x23bfb0
void get_turn_dir_0x23bf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23bf50u;

    // 0x23bf50: 0xc4850000
    ctx->pc = 0x23bf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x23bf54: 0xc4a40000
    ctx->pc = 0x23bf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x23bf58: 0x46042841
    ctx->pc = 0x23bf58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x23bf5c: 0x46000845
    ctx->pc = 0x23bf5cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x23bf60: 0xc4830008
    ctx->pc = 0x23bf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23bf64: 0xc4a20008
    ctx->pc = 0x23bf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23bf68: 0x46021801
    ctx->pc = 0x23bf68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x23bf6c: 0x46000005
    ctx->pc = 0x23bf6cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x23bf70: 0x46010036
    ctx->pc = 0x23bf70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23bf74: 0x45000007
    ctx->pc = 0x23BF74u;
    {
        const bool branch_taken_0x23bf74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23bf74) {
            ctx->pc = 0x23BF94u;
            goto label_23bf94;
        }
    }
    ctx->pc = 0x23BF7Cu;
    // 0x23bf7c: 0x46021834
    ctx->pc = 0x23bf7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23bf80: 0x0
    ctx->pc = 0x23bf80u;
    // NOP
    // 0x23bf84: 0x45010008
    ctx->pc = 0x23BF84u;
    {
        const bool branch_taken_0x23bf84 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x23BF88u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x23bf84) {
            ctx->pc = 0x23BFA8u;
            goto label_23bfa8;
        }
    }
    ctx->pc = 0x23BF8Cu;
    // 0x23bf8c: 0x3e00008
    ctx->pc = 0x23BF8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BF90u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23BF94u: goto label_23bf94;
            case 0x23BFA8u: goto label_23bfa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23BF94u;
label_23bf94:
    // 0x23bf94: 0x46042834
    ctx->pc = 0x23bf94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23bf98: 0x0
    ctx->pc = 0x23bf98u;
    // NOP
    // 0x23bf9c: 0x45000002
    ctx->pc = 0x23BF9Cu;
    {
        const bool branch_taken_0x23bf9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23BFA0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x23bf9c) {
            ctx->pc = 0x23BFA8u;
            goto label_23bfa8;
        }
    }
    ctx->pc = 0x23BFA4u;
    // 0x23bfa4: 0x2402ffff
    ctx->pc = 0x23bfa4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_23bfa8:
    // 0x23bfa8: 0x3e00008
    ctx->pc = 0x23BFA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23BF94u: goto label_23bf94;
            case 0x23BFA8u: goto label_23bfa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23BFB0u;
}
