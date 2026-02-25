#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Ghidra decomp: pad state from sceDbcReceiveData or scePad2GetSide2
// Use padBackend for real pad state
void scePad2GetState_0x12cd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("scePad2GetState_0x12cd80");
#endif
    (void)rdram;
    uint8_t state = 0u;
    if (runtime) {
        const int port = static_cast<int>(getRegU32(ctx, 4));
        const int slot = 0;
        uint8_t buf[32];
        if (runtime->padBackend().readState(port, slot, buf, sizeof(buf)))
            state = buf[0];
    }
    setReturnU32(ctx, state);
    ctx->pc = getRegU32(ctx, 31);
}
