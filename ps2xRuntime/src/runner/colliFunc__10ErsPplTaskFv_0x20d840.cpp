#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: colliFunc__10ErsPplTaskFv
// Address: 0x20d840 - 0x20d88c
void colliFunc__10ErsPplTaskFv_0x20d840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("colliFunc__10ErsPplTaskFv");


    ctx->pc = 0x20d840u;

    // 0x20d840: 0x8c831d7c
    ctx->pc = 0x20d840u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7548)));
    // 0x20d844: 0x8c850030
    ctx->pc = 0x20d844u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x20d848: 0x8c630030
    ctx->pc = 0x20d848u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x20d84c: 0xc4600000
    ctx->pc = 0x20d84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d850: 0xe4a00000
    ctx->pc = 0x20d850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x20d854: 0xc4600004
    ctx->pc = 0x20d854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d858: 0xe4a00004
    ctx->pc = 0x20d858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x20d85c: 0xc4600008
    ctx->pc = 0x20d85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d860: 0xe4a00008
    ctx->pc = 0x20d860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x20d864: 0x8c831d7c
    ctx->pc = 0x20d864u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7548)));
    // 0x20d868: 0x8c650030
    ctx->pc = 0x20d868u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x20d86c: 0x8c840030
    ctx->pc = 0x20d86cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x20d870: 0x8ca30024
    ctx->pc = 0x20d870u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x20d874: 0xac830024
    ctx->pc = 0x20d874u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x20d878: 0x8ca30028
    ctx->pc = 0x20d878u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x20d87c: 0xac830028
    ctx->pc = 0x20d87cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x20d880: 0x8ca3002c
    ctx->pc = 0x20d880u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x20d884: 0x3e00008
    ctx->pc = 0x20D884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D888u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20D88Cu;
}
