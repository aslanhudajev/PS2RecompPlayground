#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbGetVu1MemF
// Address: 0x2b3348 - 0x2b3364
void pbGetVu1MemF_0x2b3348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b3348u;

    // 0x2b3348: 0x52880
    ctx->pc = 0x2b3348u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b334c: 0xa42821
    ctx->pc = 0x2b334cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2b3350: 0x3c021100
    ctx->pc = 0x2b3350u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4352 << 16));
    // 0x2b3354: 0x3442c000
    ctx->pc = 0x2b3354u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 49152));
    // 0x2b3358: 0xa22821
    ctx->pc = 0x2b3358u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2b335c: 0x3e00008
    ctx->pc = 0x2B335Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3360u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B3364u;
}
