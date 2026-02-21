#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// memalign(alignment, nbytes) -> aligned EE pointer or 0 on failure
void memalign_0x12a430(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    const uint32_t alignment = getRegU32(ctx, 4);  // a0
    const uint32_t nbytes    = getRegU32(ctx, 5);   // a1
    uint32_t align = (alignment >= 16u) ? alignment : 16u;
    if ((align & (align - 1u)) != 0u)
        align = 16u;
    const uint32_t addr = runtime->guestMalloc(nbytes, align);
    setReturnU32(ctx, addr);
    ctx->pc = getRegU32(ctx, 31);
}
