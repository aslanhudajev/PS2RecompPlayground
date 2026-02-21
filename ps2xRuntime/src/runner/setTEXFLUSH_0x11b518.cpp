#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setTEXFLUSH
// Address: 0x11b518 - 0x11b538
void setTEXFLUSH_0x11b518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11b518u;

    // 0x11b518: 0x27bdfff0
    ctx->pc = 0x11b518u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b51c: 0x2405003f
    ctx->pc = 0x11b51cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 63));
    // 0x11b520: 0xffbf0000
    ctx->pc = 0x11b520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b524: 0xc046d3a
    ctx->pc = 0x11B524u;
    SET_GPR_U32(ctx, 31, 0x11B52Cu);
    ctx->pc = 0x11B528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11B4E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        setGIFad_0x11b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B52Cu; }
    }
    if (ctx->pc != 0x11B52Cu) { return; }
    ctx->pc = 0x11B52Cu;
    // 0x11b52c: 0xdfbf0000
    ctx->pc = 0x11b52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b530: 0x3e00008
    ctx->pc = 0x11B530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B534u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B538u;
}
