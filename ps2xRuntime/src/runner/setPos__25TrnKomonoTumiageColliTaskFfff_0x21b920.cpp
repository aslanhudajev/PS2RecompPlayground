#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setPos__25TrnKomonoTumiageColliTaskFfff
// Address: 0x21b920 - 0x21b930
void setPos__25TrnKomonoTumiageColliTaskFfff_0x21b920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setPos__25TrnKomonoTumiageColliTaskFfff");


    ctx->pc = 0x21b920u;

    // 0x21b920: 0xe48c002c
    ctx->pc = 0x21b920u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x21b924: 0xe48d0030
    ctx->pc = 0x21b924u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x21b928: 0x3e00008
    ctx->pc = 0x21B928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B92Cu;
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21B930u;
}
