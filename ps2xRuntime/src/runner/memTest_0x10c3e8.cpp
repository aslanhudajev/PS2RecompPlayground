#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// memTest(param_1): malloc(0x80), printf("[movie.c] Memory Check[%i]: 0x%x\n", param_1, ptr), free(ptr)
void memTest_0x10c3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    const uint32_t id = getRegU32(ctx, 4);
    const uint32_t ptr = runtime->guestMalloc(0x80, 16u);
    // Log to host (avoid pulling in full printf from guest)
    std::cout << "[movie.c] Memory Check[" << id << "]: 0x" << std::hex << ptr << std::dec << "\n" << std::flush;
    if (ptr != 0u)
        runtime->guestFree(ptr);
    ctx->pc = getRegU32(ctx, 31);
}
