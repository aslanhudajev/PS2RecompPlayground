#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// __negdf2(double a): negate a double.
// Input: double in $a0 (full 64-bit register on R5900)
// Returns: -a with low 32 in $v0, high 32 in $v1.
void ps2___negdf2_0x2f9528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    uint64_t bits = GPR_U64(ctx, 4);
    bits ^= (1ull << 63); // flip sign bit
    SET_GPR_U32(ctx, 2, static_cast<uint32_t>(bits & 0xFFFFFFFFu));
    SET_GPR_U32(ctx, 3, static_cast<uint32_t>(bits >> 32));
    ctx->pc = getRegU32(ctx, 31);
}
