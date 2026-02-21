#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: initialisePads
// Address: 0x1025d0 - 0x1025fc
void initialisePads_0x1025d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1025d0u;

    // 0x1025d0: 0x27bdfff0
    ctx->pc = 0x1025d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1025d4: 0xffbf0000
    ctx->pc = 0x1025d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1025d8: 0xc045792
    ctx->pc = 0x1025D8u;
    SET_GPR_U32(ctx, 31, 0x1025E0u);
    ctx->pc = 0x1025DCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x115E48u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadInit_0x115e48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1025E0u; }
    }
    if (ctx->pc != 0x1025E0u) { return; }
    ctx->pc = 0x1025E0u;
    // 0x1025e0: 0x3c060014
    ctx->pc = 0x1025e0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)20 << 16));
    // 0x1025e4: 0xdfbf0000
    ctx->pc = 0x1025e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1025e8: 0x202d
    ctx->pc = 0x1025e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1025ec: 0x24c6e000
    ctx->pc = 0x1025ecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294959104));
    // 0x1025f0: 0x282d
    ctx->pc = 0x1025f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1025f4: 0x804582a
    ctx->pc = 0x1025F4u;
    ctx->pc = 0x1025F8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1160A8u;
    scePadPortOpen_0x1160a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1025FCu;
}
