#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LastCtrl__10ErsPplTaskFv
// Address: 0x20d6e0 - 0x20d704
void LastCtrl__10ErsPplTaskFv_0x20d6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LastCtrl__10ErsPplTaskFv");


    ctx->pc = 0x20d6e0u;

    // 0x20d6e0: 0xc4811d78
    ctx->pc = 0x20d6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d6e4: 0xc480003c
    ctx->pc = 0x20d6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d6e8: 0x46010000
    ctx->pc = 0x20d6e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20d6ec: 0xe480003c
    ctx->pc = 0x20d6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x20d6f0: 0xc4811d78
    ctx->pc = 0x20d6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d6f4: 0xc4800040
    ctx->pc = 0x20d6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d6f8: 0x46010000
    ctx->pc = 0x20d6f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20d6fc: 0x3e00008
    ctx->pc = 0x20D6FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D700u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20D704u;
}
