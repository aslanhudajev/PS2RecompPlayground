#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putNotPushPop2__7CFcvTRSFff11tagNLpoint3if
// Address: 0x1e7d20 - 0x1e7d58
void putNotPushPop2__7CFcvTRSFff11tagNLpoint3if_0x1e7d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putNotPushPop2__7CFcvTRSFff11tagNLpoint3if");


    ctx->pc = 0x1e7d20u;

    // 0x1e7d20: 0x27bdffe0
    ctx->pc = 0x1e7d20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e7d24: 0x7fbf0000
    ctx->pc = 0x1e7d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1e7d28: 0xc4a20000
    ctx->pc = 0x1e7d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e7d2c: 0xc4a10004
    ctx->pc = 0x1e7d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7d30: 0xc4a00008
    ctx->pc = 0x1e7d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7d34: 0x27a20010
    ctx->pc = 0x1e7d34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e7d38: 0xe4420000
    ctx->pc = 0x1e7d38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1e7d3c: 0xe4410004
    ctx->pc = 0x1e7d3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1e7d40: 0xe4400008
    ctx->pc = 0x1e7d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1e7d44: 0xc07a110
    ctx->pc = 0x1E7D44u;
    SET_GPR_U32(ctx, 31, 0x1E7D4Cu);
    ctx->pc = 0x1E7D48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E8440u;
    {
        const uint32_t __entryPc = ctx->pc;
        putSub2__7CFcvTRSFff11tagNLpoint3if_0x1e8440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7D4Cu; }
        else if (ctx->pc != 0x1E7D4Cu) { ctx->pc = 0x1E7D4Cu; }
    }
    if (ctx->pc != 0x1E7D4Cu) { return; }
    ctx->pc = 0x1E7D4Cu;
    // 0x1e7d4c: 0x7bbf0000
    ctx->pc = 0x1e7d4cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7d50: 0x3e00008
    ctx->pc = 0x1E7D50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7D54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7D58u;
}
