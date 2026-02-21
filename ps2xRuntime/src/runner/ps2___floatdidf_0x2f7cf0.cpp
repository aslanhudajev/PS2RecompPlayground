#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include <cstring>

// __floatdidf(int64 a): convert signed 64-bit integer to double.
// MIPS O32: a in $a0:$a1 (lo:hi)
// Returns: double with low 32 in $v0, high 32 in $v1.
void ps2___floatdidf_0x2f7cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    int64_t a = static_cast<int64_t>(
        (static_cast<uint64_t>(getRegU32(ctx, 5)) << 32) | getRegU32(ctx, 4));
    double result = static_cast<double>(a);
    uint64_t bits;
    std::memcpy(&bits, &result, 8);
    SET_GPR_U32(ctx, 2, static_cast<uint32_t>(bits & 0xFFFFFFFFu));
    SET_GPR_U32(ctx, 3, static_cast<uint32_t>(bits >> 32));
    ctx->pc = getRegU32(ctx, 31);
}
