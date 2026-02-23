#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlPrtclSetSprUV
// Address: 0x1c5c80 - 0x1c5cb4
void nlPrtclSetSprUV_0x1c5c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlPrtclSetSprUV");


    ctx->pc = 0x1c5c80u;

    // 0x1c5c80: 0xc4800000
    ctx->pc = 0x1c5c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5c84: 0x3c010026
    ctx->pc = 0x1c5c84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
    // 0x1c5c88: 0xe420fbd0
    ctx->pc = 0x1c5c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294966224), bits); }
    // 0x1c5c8c: 0xc4800004
    ctx->pc = 0x1c5c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5c90: 0x3c010026
    ctx->pc = 0x1c5c90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
    // 0x1c5c94: 0xe420fbd4
    ctx->pc = 0x1c5c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294966228), bits); }
    // 0x1c5c98: 0xc4800008
    ctx->pc = 0x1c5c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5c9c: 0x3c010026
    ctx->pc = 0x1c5c9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
    // 0x1c5ca0: 0xe420fbe0
    ctx->pc = 0x1c5ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294966240), bits); }
    // 0x1c5ca4: 0xc480000c
    ctx->pc = 0x1c5ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5ca8: 0x3c010026
    ctx->pc = 0x1c5ca8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
    // 0x1c5cac: 0x3e00008
    ctx->pc = 0x1C5CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5CB0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294966244), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5CB4u;
}
