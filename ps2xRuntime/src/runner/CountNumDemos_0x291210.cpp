#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CountNumDemos
// Address: 0x291210 - 0x291224
void CountNumDemos_0x291210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x291210u;

    // 0x291210: 0x3c020035
    ctx->pc = 0x291210u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x291214: 0xac40f838
    ctx->pc = 0x291214u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965304), GPR_U32(ctx, 0));
    // 0x291218: 0x3c020035
    ctx->pc = 0x291218u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x29121c: 0x3e00008
    ctx->pc = 0x29121Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291220u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294965308), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x291224u;
}
