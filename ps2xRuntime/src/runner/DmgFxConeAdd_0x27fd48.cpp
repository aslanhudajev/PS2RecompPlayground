#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DmgFxConeAdd
// Address: 0x27fd48 - 0x27fd64
void DmgFxConeAdd_0x27fd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27fd48u;

    // 0x27fd48: 0x27bdfff0
    ctx->pc = 0x27fd48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27fd4c: 0xffbf0000
    ctx->pc = 0x27fd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27fd50: 0xc09fefa
    ctx->pc = 0x27FD50u;
    SET_GPR_U32(ctx, 31, 0x27FD58u);
    ctx->pc = 0x27FD54u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x27FBE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DmgFxNodeAdd_0x27fbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FD58u; }
    }
    if (ctx->pc != 0x27FD58u) { return; }
    ctx->pc = 0x27FD58u;
    // 0x27fd58: 0xdfbf0000
    ctx->pc = 0x27fd58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27fd5c: 0x3e00008
    ctx->pc = 0x27FD5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27FD60u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27FD64u;
}
