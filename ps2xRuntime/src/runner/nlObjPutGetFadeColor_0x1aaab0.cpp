#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPutGetFadeColor
// Address: 0x1aaab0 - 0x1aab14
void nlObjPutGetFadeColor_0x1aaab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPutGetFadeColor");


    ctx->pc = 0x1aaab0u;

    // 0x1aaab0: 0x3c010030
    ctx->pc = 0x1aaab0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aaab4: 0xc4203970
    ctx->pc = 0x1aaab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aaab8: 0xe4800000
    ctx->pc = 0x1aaab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1aaabc: 0x3c010030
    ctx->pc = 0x1aaabcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aaac0: 0xc4203974
    ctx->pc = 0x1aaac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aaac4: 0xe4a00000
    ctx->pc = 0x1aaac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1aaac8: 0x3c010030
    ctx->pc = 0x1aaac8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aaacc: 0xc4203978
    ctx->pc = 0x1aaaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aaad0: 0xe4c00000
    ctx->pc = 0x1aaad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1aaad4: 0x3c010030
    ctx->pc = 0x1aaad4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aaad8: 0xc420397c
    ctx->pc = 0x1aaad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aaadc: 0xe4e00000
    ctx->pc = 0x1aaadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x1aaae0: 0x3c010030
    ctx->pc = 0x1aaae0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aaae4: 0xc4203980
    ctx->pc = 0x1aaae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aaae8: 0xe5000000
    ctx->pc = 0x1aaae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x1aaaec: 0x3c010030
    ctx->pc = 0x1aaaecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aaaf0: 0xc4203984
    ctx->pc = 0x1aaaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aaaf4: 0xe5200000
    ctx->pc = 0x1aaaf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x1aaaf8: 0x3c010030
    ctx->pc = 0x1aaaf8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aaafc: 0xc4203988
    ctx->pc = 0x1aaafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aab00: 0xe5400000
    ctx->pc = 0x1aab00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x1aab04: 0x3c010030
    ctx->pc = 0x1aab04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aab08: 0xc420398c
    ctx->pc = 0x1aab08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aab0c: 0x3e00008
    ctx->pc = 0x1AAB0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAB10u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AAB14u;
}
