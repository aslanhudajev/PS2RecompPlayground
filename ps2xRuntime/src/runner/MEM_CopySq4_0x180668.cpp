#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MEM_CopySq4
// Address: 0x180668 - 0x180684
void MEM_CopySq4_0x180668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MEM_CopySq4");


    ctx->pc = 0x180668u;

    // 0x180668: 0x27bdfff0
    ctx->pc = 0x180668u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18066c: 0xffbf0000
    ctx->pc = 0x18066cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180670: 0xc06017a
    ctx->pc = 0x180670u;
    SET_GPR_U32(ctx, 31, 0x180678u);
    ctx->pc = 0x1805E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MEM_Copy4_0x1805e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180678u; }
        else if (ctx->pc != 0x180678u) { ctx->pc = 0x180678u; }
    }
    if (ctx->pc != 0x180678u) { return; }
    ctx->pc = 0x180678u;
    // 0x180678: 0xdfbf0000
    ctx->pc = 0x180678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18067c: 0x3e00008
    ctx->pc = 0x18067Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180680u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180684u;
}
