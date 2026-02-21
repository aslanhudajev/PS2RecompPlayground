#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_memory.h"
#include <cstring>

// padHasStick(int param_1) - reads aiPadType[param_1], returns 1 if has analog stick
// aiPadType @ 0x3BBDA0, stick types: 2, 3, or 5
void padHasStick_0x203728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    constexpr uint32_t AI_PAD_TYPE = 0x3BBDA0u;
    const int32_t idx = static_cast<int32_t>(GPR_U32(ctx, 4));
    const uint32_t addr = AI_PAD_TYPE + static_cast<uint32_t>(idx) * 4u;
    const uint32_t phys = addr & PS2_RAM_MASK;
    int32_t padType = 0;
    if (phys + 4u <= PS2_RAM_SIZE)
        std::memcpy(&padType, rdram + phys, 4);

    uint32_t result = 0;
    if (padType > 1 && (padType < 4 || padType == 5))
        result = 1;

    SET_GPR_U32(ctx, 2, result);
    ctx->pc = GPR_U32(ctx, 31);
}
