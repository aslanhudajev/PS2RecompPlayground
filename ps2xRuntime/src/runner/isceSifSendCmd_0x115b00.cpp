#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: isceSifSendCmd
// Address: 0x115b00 - 0x115b3c
void isceSifSendCmd_0x115b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x115b00u;

    // 0x115b00: 0xc0102d
    ctx->pc = 0x115b00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b04: 0xe0182d
    ctx->pc = 0x115b04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b08: 0x100582d
    ctx->pc = 0x115b08u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b0c: 0x27bdfff0
    ctx->pc = 0x115b0cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x115b10: 0x120502d
    ctx->pc = 0x115b10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b14: 0xa0302d
    ctx->pc = 0x115b14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b18: 0xffbf0000
    ctx->pc = 0x115b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x115b1c: 0x40382d
    ctx->pc = 0x115b1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b20: 0x60402d
    ctx->pc = 0x115b20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b24: 0x160482d
    ctx->pc = 0x115b24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b28: 0xc045662
    ctx->pc = 0x115B28u;
    SET_GPR_U32(ctx, 31, 0x115B30u);
    ctx->pc = 0x115B2Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x115988u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sceSifSendCmd_0x115988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115B30u; }
    }
    if (ctx->pc != 0x115B30u) { return; }
    ctx->pc = 0x115B30u;
    // 0x115b30: 0xdfbf0000
    ctx->pc = 0x115b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115b34: 0x3e00008
    ctx->pc = 0x115B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115B38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x115B3Cu;
}
