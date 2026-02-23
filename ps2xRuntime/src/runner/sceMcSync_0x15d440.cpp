#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_init_log.h"

// Ghidra decomp: sceMcSync(param1, param2, param3) - syncs with IOP memory card. Stub returns 0 (success).
void sceMcSync_0x15d440(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    PS2_INIT_LOG_ENTRY("sceMcSync");

    const uint32_t param2 = GPR_U32(ctx, 5);
    const uint32_t param3 = GPR_U32(ctx, 6);

    setReturnS32(ctx, 0);  // success

    if (param2 != 0u) {
        WRITE32(param2, 0u);  // *param2 = mcRunCmdNo (0 = no pending cmd)
    }
    if (param3 != 0u) {
        WRITE32(param3, 0u);  // *param3 = retval
    }

    ctx->pc = getRegU32(ctx, 31);
}
