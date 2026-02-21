#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: gfxMemInit
// Address: 0x108e78 - 0x108e84
void gfxMemInit_0x108e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x108e78u;

    // 0x108e78: 0xaf848178
    ctx->pc = 0x108e78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934904), GPR_U32(ctx, 4));
    // 0x108e7c: 0x3e00008
    ctx->pc = 0x108E7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108E80u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934908), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x108E84u;
}
