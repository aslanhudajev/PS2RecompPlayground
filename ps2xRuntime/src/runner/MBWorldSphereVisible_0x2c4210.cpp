#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBWorldSphereVisible
// Address: 0x2c4210 - 0x2c4230
void MBWorldSphereVisible_0x2c4210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c4210u;

    // 0x2c4210: 0x27bdfff0
    ctx->pc = 0x2c4210u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c4214: 0xffbf0000
    ctx->pc = 0x2c4214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c4218: 0xc0b1040
    ctx->pc = 0x2C4218u;
    SET_GPR_U32(ctx, 31, 0x2C4220u);
    ctx->pc = 0x2C4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWorldSphereClip_0x2c4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4220u; }
    }
    if (ctx->pc != 0x2C4220u) { return; }
    ctx->pc = 0x2C4220u;
    // 0x2c4220: 0x2c420001
    ctx->pc = 0x2c4220u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x2c4224: 0xdfbf0000
    ctx->pc = 0x2c4224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4228: 0x3e00008
    ctx->pc = 0x2C4228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C422Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C4230u;
}
