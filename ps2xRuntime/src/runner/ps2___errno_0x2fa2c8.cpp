#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_memory.h"

// __errno(): returns a pointer to the thread-local errno variable.
// We allocate a static 4-byte slot near the top of PS2 RDRAM.
void ps2___errno_0x2fa2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    constexpr uint32_t ERRNO_ADDR = 0x01FFFFC0u;

    static bool s_initialized = false;
    if (!s_initialized) {
        uint32_t zero = 0;
        uint8_t *ptr = getMemPtr(rdram, ERRNO_ADDR);
        if (ptr) std::memcpy(ptr, &zero, 4);
        s_initialized = true;
    }

    SET_GPR_U32(ctx, 2, ERRNO_ADDR);
    ctx->pc = getRegU32(ctx, 31);
}
