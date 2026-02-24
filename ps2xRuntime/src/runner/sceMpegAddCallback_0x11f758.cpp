#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// puVar2 = (param_1 + 0x40) + 0xc + param_2*8; *(base + param_2*8 + 0x10) = param_4;
// uVar1 = *puVar2; *puVar2 = param_3; return uVar1;
void sceMpegAddCallback_0x11f758(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    const uint32_t param_1 = getRegU32(ctx, 4);
    const uint32_t param_2 = getRegU32(ctx, 5);
    const uint32_t param_3 = getRegU32(ctx, 6);
    const uint32_t param_4 = getRegU32(ctx, 7);

    const uint32_t base = READ32(param_1 + 0x40u);
    const uint32_t slotOff = param_2 * 8u;
    const uint32_t prevAddr = base + 0xcu + slotOff;
    const uint32_t oldVal = READ32(prevAddr);

    WRITE32(base + slotOff + 0x10u, param_4);
    WRITE32(prevAddr, param_3);

    setReturnU32(ctx, oldVal);
    ctx->pc = getRegU32(ctx, 31);
}
