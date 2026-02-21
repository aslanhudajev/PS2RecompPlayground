#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DmgFxCircleAdd
// Address: 0x27fd18 - 0x27fd48
void DmgFxCircleAdd_0x27fd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27fd18u;

    // 0x27fd18: 0x27bdfff0
    ctx->pc = 0x27fd18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27fd1c: 0xffbf0000
    ctx->pc = 0x27fd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27fd20: 0x46006006
    ctx->pc = 0x27fd20u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x27fd24: 0x46006846
    ctx->pc = 0x27fd24u;
    ctx->f[1] = FPU_MOV_S(ctx->f[13]);
    // 0x27fd28: 0x460073c6
    ctx->pc = 0x27fd28u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x27fd2c: 0x46000346
    ctx->pc = 0x27fd2cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x27fd30: 0x46000b86
    ctx->pc = 0x27fd30u;
    ctx->f[14] = FPU_MOV_S(ctx->f[1]);
    // 0x27fd34: 0xc09fefa
    ctx->pc = 0x27FD34u;
    SET_GPR_U32(ctx, 31, 0x27FD3Cu);
    ctx->pc = 0x27FD38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27FBE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DmgFxNodeAdd_0x27fbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FD3Cu; }
    }
    if (ctx->pc != 0x27FD3Cu) { return; }
    ctx->pc = 0x27FD3Cu;
    // 0x27fd3c: 0xdfbf0000
    ctx->pc = 0x27fd3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27fd40: 0x3e00008
    ctx->pc = 0x27FD40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27FD44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27FD48u;
}
