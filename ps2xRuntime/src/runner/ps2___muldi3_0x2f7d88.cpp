#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// __muldi3(int64 a, int64 b): multiply two 64-bit integers.
// MIPS O32: a in $a0:$a1 (lo:hi), b in $a2:$a3 (lo:hi)
// Returns: low 32 in $v0, high 32 in $v1.
void ps2___muldi3_0x2f7d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    uint64_t a = (static_cast<uint64_t>(getRegU32(ctx, 5)) << 32) | getRegU32(ctx, 4);
    uint64_t b = (static_cast<uint64_t>(getRegU32(ctx, 7)) << 32) | getRegU32(ctx, 6);
    uint64_t result = a * b;
    SET_GPR_U32(ctx, 2, static_cast<uint32_t>(result & 0xFFFFFFFFu));
    SET_GPR_U32(ctx, 3, static_cast<uint32_t>(result >> 32));
    ctx->pc = getRegU32(ctx, 31);
}
