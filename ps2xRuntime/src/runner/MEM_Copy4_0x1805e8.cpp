#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MEM_Copy4
// Address: 0x1805e8 - 0x180604
void MEM_Copy4_0x1805e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MEM_Copy4");


    ctx->pc = 0x1805e8u;

    // 0x1805e8: 0x27bdfff0
    ctx->pc = 0x1805e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1805ec: 0xffbf0000
    ctx->pc = 0x1805ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1805f0: 0xc050c90
    ctx->pc = 0x1805F0u;
    SET_GPR_U32(ctx, 31, 0x1805F8u);
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1805F8u; }
        else if (ctx->pc != 0x1805F8u) { ctx->pc = 0x1805F8u; }
    }
    if (ctx->pc != 0x1805F8u) { return; }
    ctx->pc = 0x1805F8u;
    // 0x1805f8: 0xdfbf0000
    ctx->pc = 0x1805f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1805fc: 0x3e00008
    ctx->pc = 0x1805FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180600u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180604u;
}
