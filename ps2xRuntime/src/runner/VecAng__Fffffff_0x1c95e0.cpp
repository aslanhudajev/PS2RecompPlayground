#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: VecAng__Fffffff
// Address: 0x1c95e0 - 0x1c964c
void VecAng__Fffffff_0x1c95e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("VecAng__Fffffff");


    ctx->pc = 0x1c95e0u;

    // 0x1c95e0: 0x460f6082
    ctx->pc = 0x1c95e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[15]);
    // 0x1c95e4: 0x27bdffe0
    ctx->pc = 0x1c95e4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c95e8: 0x7fbf0010
    ctx->pc = 0x1c95e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c95ec: 0xe7b40000
    ctx->pc = 0x1c95ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c95f0: 0x46106802
    ctx->pc = 0x1c95f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[16]);
    // 0x1c95f4: 0x46001018
    ctx->pc = 0x1c95f4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1c95f8: 0x460d6882
    ctx->pc = 0x1c95f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1c95fc: 0x460c60c2
    ctx->pc = 0x1c95fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1c9600: 0x4611751c
    ctx->pc = 0x1c9600u;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[17]));
    // 0x1c9604: 0x46021818
    ctx->pc = 0x1c9604u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1c9608: 0x460f7842
    ctx->pc = 0x1c9608u;
    ctx->f[1] = FPU_MUL_S(ctx->f[15], ctx->f[15]);
    // 0x1c960c: 0x46108002
    ctx->pc = 0x1c960cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[16], ctx->f[16]);
    // 0x1c9610: 0x460e709c
    ctx->pc = 0x1c9610u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[14]));
    // 0x1c9614: 0x46000818
    ctx->pc = 0x1c9614u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c9618: 0x4611881c
    ctx->pc = 0x1c9618u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[17], ctx->f[17]));
    // 0x1c961c: 0x4600101a
    ctx->pc = 0x1c961cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1c9620: 0xc06c2a8
    ctx->pc = 0x1C9620u;
    SET_GPR_U32(ctx, 31, 0x1C9628u);
    ctx->pc = 0x1C9624u;
    ctx->f[12] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[20]));
    ctx->pc = 0x1B0AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0AA0_0x1b0aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9628u; }
        else if (ctx->pc != 0x1C9628u) { ctx->pc = 0x1C9628u; }
    }
    if (ctx->pc != 0x1C9628u) { return; }
    ctx->pc = 0x1C9628u;
    // 0x1c9628: 0x46000306
    ctx->pc = 0x1c9628u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1c962c: 0xc069e68
    ctx->pc = 0x1C962Cu;
    SET_GPR_U32(ctx, 31, 0x1C9634u);
    ctx->pc = 0x1C9630u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1A79A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan2_0x1a79a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9634u; }
        else if (ctx->pc != 0x1C9634u) { ctx->pc = 0x1C9634u; }
    }
    if (ctx->pc != 0x1C9634u) { return; }
    ctx->pc = 0x1C9634u;
    // 0x1c9634: 0x7bbf0010
    ctx->pc = 0x1c9634u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9638: 0xc7b40000
    ctx->pc = 0x1c9638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c963c: 0x2143c
    ctx->pc = 0x1c963cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1c9640: 0x2143f
    ctx->pc = 0x1c9640u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1c9644: 0x3e00008
    ctx->pc = 0x1C9644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9648u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C964Cu;
}
