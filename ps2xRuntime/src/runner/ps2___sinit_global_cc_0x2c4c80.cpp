#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Ghidra decomp: DAT_004fdac4=0; CreditMgrBuf=0; MainModeMgrBuf=__vt__16MainModeMgrClass; PauseMgrBuf=__vt__13PauseMgrClass
void ps2___sinit_global_cc_0x2c4c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    PS2_INIT_LOG_ENTRY("ps2___sinit_global_cc");

    WRITE32(0x4fdac4u, 0u);
    WRITE32(0x4fdac0u, 0u);
    WRITE32(0x4fe500u, 0x2c5140u);  // MainModeMgrBuf = __vt__16MainModeMgrClass
    WRITE32(0x4fe510u, 0x2c5120u);  // PauseMgrBuf = __vt__13PauseMgrClass
    ctx->pc = getRegU32(ctx, 31);
}
