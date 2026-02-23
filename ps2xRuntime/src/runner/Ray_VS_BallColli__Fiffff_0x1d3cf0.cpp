#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: Ray_VS_BallColli__Fiffff
// Address: 0x1d3cf0 - 0x1d3d84
void Ray_VS_BallColli__Fiffff_0x1d3cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Ray_VS_BallColli__Fiffff");


    ctx->pc = 0x1d3cf0u;

    // 0x1d3cf0: 0x41040
    ctx->pc = 0x1d3cf0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d3cf4: 0x441021
    ctx->pc = 0x1d3cf4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d3cf8: 0x21080
    ctx->pc = 0x1d3cf8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d3cfc: 0x441021
    ctx->pc = 0x1d3cfcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d3d00: 0x218c0
    ctx->pc = 0x1d3d00u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d3d04: 0x27bdffe0
    ctx->pc = 0x1d3d04u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d3d08: 0x3c020050
    ctx->pc = 0x1d3d08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1d3d0c: 0x7fbf0010
    ctx->pc = 0x1d3d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1d3d10: 0x24420200
    ctx->pc = 0x1d3d10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d3d14: 0xe7b40000
    ctx->pc = 0x1d3d14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d3d18: 0x431021
    ctx->pc = 0x1d3d18u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d3d1c: 0xc4450044
    ctx->pc = 0x1d3d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1d3d20: 0xc4440038
    ctx->pc = 0x1d3d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1d3d24: 0x46006047
    ctx->pc = 0x1d3d24u;
    ctx->f[1] = FPU_NEG_S(ctx->f[12]);
    // 0x1d3d28: 0xc440003c
    ctx->pc = 0x1d3d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3d2c: 0xc4430040
    ctx->pc = 0x1d3d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d3d30: 0x46007d06
    ctx->pc = 0x1d3d30u;
    ctx->f[20] = FPU_MOV_S(ctx->f[15]);
    // 0x1d3d34: 0x4605081a
    ctx->pc = 0x1d3d34u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1d3d38: 0x46040842
    ctx->pc = 0x1d3d38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1d3d3c: 0x46011842
    ctx->pc = 0x1d3d3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1d3d40: 0x46006802
    ctx->pc = 0x1d3d40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x1d3d44: 0x4603709d
    ctx->pc = 0x1d3d44u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[3]));
    // 0x1d3d48: 0x46000819
    ctx->pc = 0x1d3d48u;
    ctx->f[31] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d3d4c: 0x46047002
    ctx->pc = 0x1d3d4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[4]);
    // 0x1d3d50: 0x4600281c
    ctx->pc = 0x1d3d50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[0]));
    // 0x1d3d54: 0x4602101a
    ctx->pc = 0x1d3d54u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1d3d58: 0xc06c2a8
    ctx->pc = 0x1D3D58u;
    SET_GPR_U32(ctx, 31, 0x1D3D60u);
    ctx->pc = 0x1D3D5Cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    ctx->pc = 0x1B0AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0AA0_0x1b0aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3D60u; }
        else if (ctx->pc != 0x1D3D60u) { ctx->pc = 0x1D3D60u; }
    }
    if (ctx->pc != 0x1D3D60u) { return; }
    ctx->pc = 0x1D3D60u;
    // 0x1d3d60: 0x46140036
    ctx->pc = 0x1d3d60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d3d64: 0x0
    ctx->pc = 0x1d3d64u;
    // NOP
    // 0x1d3d68: 0x45010002
    ctx->pc = 0x1D3D68u;
    {
        const bool branch_taken_0x1d3d68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D3D6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1d3d68) {
            ctx->pc = 0x1D3D74u;
            goto label_1d3d74;
        }
    }
    ctx->pc = 0x1D3D70u;
    // 0x1d3d70: 0x70001628
    ctx->pc = 0x1d3d70u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1d3d74:
    // 0x1d3d74: 0x7bbf0010
    ctx->pc = 0x1d3d74u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3d78: 0xc7b40000
    ctx->pc = 0x1d3d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d3d7c: 0x3e00008
    ctx->pc = 0x1D3D7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3D80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3D74u: goto label_1d3d74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D3D84u;
}
