#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"
#include "ps2_init_log.h"

// __muldi3: 64-bit multiplication. MIPS O32/N32 ABI:
// $a0,$a1 = first operand (low, high), $a2,$a3 = second operand
// Returns $v0,$v1 = result (low, high)
void ps2___muldi3_0x14a2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ps2___muldi3");

    const uint64_t a = (uint64_t)GPR_U32(ctx, 4) | ((uint64_t)GPR_U32(ctx, 5) << 32);
    const uint64_t b = (uint64_t)GPR_U32(ctx, 6) | ((uint64_t)GPR_U32(ctx, 7) << 32);
    const uint64_t r = a * b;

    SET_GPR_U32(ctx, 2, (uint32_t)(r & 0xFFFFFFFFu));
    SET_GPR_U32(ctx, 3, (uint32_t)(r >> 32));
    ctx->pc = GPR_U32(ctx, 31);
}
