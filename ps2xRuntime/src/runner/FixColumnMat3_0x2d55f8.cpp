#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FixColumnMat3
// Address: 0x2d55f8 - 0x2d5628
void FixColumnMat3_0x2d55f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d55f8u;

    // 0x2d55f8: 0x27bdffe0
    ctx->pc = 0x2d55f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d55fc: 0xffbf0010
    ctx->pc = 0x2d55fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d5600: 0xffb00000
    ctx->pc = 0x2d5600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d5604: 0xc0b54ca
    ctx->pc = 0x2D5604u;
    SET_GPR_U32(ctx, 31, 0x2D560Cu);
    ctx->pc = 0x2D5608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5328u;
    {
        const uint32_t __entryPc = ctx->pc;
        TransposeMat3_0x2d5328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D560Cu; }
    }
    if (ctx->pc != 0x2D560Cu) { return; }
    ctx->pc = 0x2D560Cu;
    // 0x2d560c: 0xc0b5560
    ctx->pc = 0x2D560Cu;
    SET_GPR_U32(ctx, 31, 0x2D5614u);
    ctx->pc = 0x2D5610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5580u;
    {
        const uint32_t __entryPc = ctx->pc;
        FixRowMat3_0x2d5580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5614u; }
    }
    if (ctx->pc != 0x2D5614u) { return; }
    ctx->pc = 0x2D5614u;
    // 0x2d5614: 0x200202d
    ctx->pc = 0x2d5614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5618: 0xdfbf0010
    ctx->pc = 0x2d5618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d561c: 0xdfb00000
    ctx->pc = 0x2d561cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5620: 0x80b54ca
    ctx->pc = 0x2D5620u;
    ctx->pc = 0x2D5624u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2D5328u;
    TransposeMat3_0x2d5328(rdram, ctx, runtime); return;
    ctx->pc = 0x2D5628u;
}
