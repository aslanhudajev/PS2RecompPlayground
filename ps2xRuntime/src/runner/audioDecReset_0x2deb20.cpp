#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: audioDecReset
// Address: 0x2deb20 - 0x2deb64
void audioDecReset_0x2deb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2deb20u;

    // 0x2deb20: 0x27bdffe0
    ctx->pc = 0x2deb20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2deb24: 0xffbf0010
    ctx->pc = 0x2deb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2deb28: 0xffb00000
    ctx->pc = 0x2deb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2deb2c: 0xc0b7aac
    ctx->pc = 0x2DEB2Cu;
    SET_GPR_U32(ctx, 31, 0x2DEB34u);
    ctx->pc = 0x2DEB30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DEAB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        audioDecPause_0x2deab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEB34u; }
    }
    if (ctx->pc != 0x2DEB34u) { return; }
    ctx->pc = 0x2DEB34u;
    // 0x2deb34: 0xae000000
    ctx->pc = 0x2deb34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2deb38: 0xae00002c
    ctx->pc = 0x2deb38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x2deb3c: 0xae000034
    ctx->pc = 0x2deb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x2deb40: 0xae000038
    ctx->pc = 0x2deb40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x2deb44: 0xae000040
    ctx->pc = 0x2deb44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x2deb48: 0xae000054
    ctx->pc = 0x2deb48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x2deb4c: 0xae00004c
    ctx->pc = 0x2deb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x2deb50: 0xae000050
    ctx->pc = 0x2deb50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x2deb54: 0xdfbf0010
    ctx->pc = 0x2deb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2deb58: 0xdfb00000
    ctx->pc = 0x2deb58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2deb5c: 0x3e00008
    ctx->pc = 0x2DEB5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DEB60u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DEB64u;
}
