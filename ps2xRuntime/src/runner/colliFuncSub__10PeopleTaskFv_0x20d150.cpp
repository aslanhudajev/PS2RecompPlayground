#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: colliFuncSub__10PeopleTaskFv
// Address: 0x20d150 - 0x20d190
void colliFuncSub__10PeopleTaskFv_0x20d150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("colliFuncSub__10PeopleTaskFv");


    ctx->pc = 0x20d150u;

    // 0x20d150: 0x8c850030
    ctx->pc = 0x20d150u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x20d154: 0x3c033f80
    ctx->pc = 0x20d154u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x20d158: 0x44830000
    ctx->pc = 0x20d158u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x20d15c: 0xc4a10000
    ctx->pc = 0x20d15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d160: 0xe4811ce8
    ctx->pc = 0x20d160u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7400), bits); }
    // 0x20d164: 0xc4a10004
    ctx->pc = 0x20d164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d168: 0xe4811cec
    ctx->pc = 0x20d168u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7404), bits); }
    // 0x20d16c: 0xc4a10008
    ctx->pc = 0x20d16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d170: 0xe4811cf0
    ctx->pc = 0x20d170u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7408), bits); }
    // 0x20d174: 0x8c830030
    ctx->pc = 0x20d174u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x20d178: 0xc4811ce4
    ctx->pc = 0x20d178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 7396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d17c: 0xc4620004
    ctx->pc = 0x20d17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20d180: 0x46011040
    ctx->pc = 0x20d180u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x20d184: 0x46010000
    ctx->pc = 0x20d184u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20d188: 0x3e00008
    ctx->pc = 0x20D188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D18Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7404), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20D190u;
}
