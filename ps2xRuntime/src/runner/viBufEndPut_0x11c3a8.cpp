#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: viBufEndPut
// Address: 0x11c3a8 - 0x11c3f8
void viBufEndPut_0x11c3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11c3a8u;

    // 0x11c3a8: 0x27bdffd0
    ctx->pc = 0x11c3a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11c3ac: 0xffb10010
    ctx->pc = 0x11c3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11c3b0: 0xffb00000
    ctx->pc = 0x11c3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11c3b4: 0xa0882d
    ctx->pc = 0x11c3b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3b8: 0xffbf0020
    ctx->pc = 0x11c3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11c3bc: 0x80802d
    ctx->pc = 0x11c3bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3c0: 0xc0438b8
    ctx->pc = 0x11C3C0u;
    SET_GPR_U32(ctx, 31, 0x11C3C8u);
    ctx->pc = 0x11C3C4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x10E2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x10e2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C3C8u; }
    }
    if (ctx->pc != 0x11C3C8u) { return; }
    ctx->pc = 0x11C3C8u;
    // 0x11c3c8: 0x8e030014
    ctx->pc = 0x11c3c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x11c3cc: 0xde020048
    ctx->pc = 0x11c3ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x11c3d0: 0x711821
    ctx->pc = 0x11c3d0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x11c3d4: 0x8e040040
    ctx->pc = 0x11c3d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x11c3d8: 0x222102d
    ctx->pc = 0x11c3d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x11c3dc: 0xae030014
    ctx->pc = 0x11c3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x11c3e0: 0xfe020048
    ctx->pc = 0x11c3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 2));
    // 0x11c3e4: 0xdfbf0020
    ctx->pc = 0x11c3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c3e8: 0xdfb10010
    ctx->pc = 0x11c3e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c3ec: 0xdfb00000
    ctx->pc = 0x11c3ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c3f0: 0x80438b0
    ctx->pc = 0x11C3F0u;
    ctx->pc = 0x11C3F4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x10E2C0u;
    SignalSema_0x10e2c0(rdram, ctx, runtime); return;
    ctx->pc = 0x11C3F8u;
}
