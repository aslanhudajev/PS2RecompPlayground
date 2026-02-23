#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Ghidra decomp: void __sinit_camera_cc(void) { return; }
void ps2___sinit_camera_cc_0x2c3270(uint8_t* rdram, R5900Context* ctx, PS2Runtime*) {
    PS2_INIT_LOG_ENTRY("ps2___sinit_camera_cc");

    ctx->pc = getRegU32(ctx, 31);
}
