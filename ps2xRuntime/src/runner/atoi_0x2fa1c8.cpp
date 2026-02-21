#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_memory.h"

// atoi(const char *str): convert ASCII string to integer.
// $a0 = pointer to null-terminated string.
// Returns: integer in $v0.
void atoi_0x2fa1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    uint32_t addr = getRegU32(ctx, 4);
    const uint8_t* ptr = getMemPtr(rdram, addr);

    int result = 0;
    if (ptr) {
        while (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == '\r')
            ++ptr;
        int sign = 1;
        if (*ptr == '-') { sign = -1; ++ptr; }
        else if (*ptr == '+') { ++ptr; }
        while (*ptr >= '0' && *ptr <= '9') {
            result = result * 10 + (*ptr - '0');
            ++ptr;
        }
        result *= sign;
    }

    SET_GPR_U32(ctx, 2, static_cast<uint32_t>(result));
    ctx->pc = getRegU32(ctx, 31);
}
