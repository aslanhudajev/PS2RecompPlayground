#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ReplaceItemAtree
// Address: 0x25a610 - 0x25a648
void ReplaceItemAtree_0x25a610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25a610u;

    // 0x25a610: 0x27bdffe0
    ctx->pc = 0x25a610u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25a614: 0xffbf0010
    ctx->pc = 0x25a614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25a618: 0xffb00000
    ctx->pc = 0x25a618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25a61c: 0x80802d
    ctx->pc = 0x25a61cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a620: 0xa0202d
    ctx->pc = 0x25a620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a624: 0xc0282d
    ctx->pc = 0x25a624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a628: 0xc0847fc
    ctx->pc = 0x25A628u;
    SET_GPR_U32(ctx, 31, 0x25A630u);
    ctx->pc = 0x25A62Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A630u; }
    }
    if (ctx->pc != 0x25A630u) { return; }
    ctx->pc = 0x25A630u;
    // 0x25a630: 0x200202d
    ctx->pc = 0x25a630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a634: 0x40282d
    ctx->pc = 0x25a634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a638: 0xdfbf0010
    ctx->pc = 0x25a638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a63c: 0xdfb00000
    ctx->pc = 0x25a63cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a640: 0x809696c
    ctx->pc = 0x25A640u;
    ctx->pc = 0x25A644u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x25A5B0u;
    ReplaceItemAtreeHeader_0x25a5b0(rdram, ctx, runtime); return;
    ctx->pc = 0x25A648u;
}
