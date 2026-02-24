#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// initialized.10 at 0x75<<16 - 0x1b14 (from __main: lui v1,0x75; lw v0,-0x1b14(v1))
static constexpr uint32_t kInitializedAddr = 0x750000u - 0x1b14u; // 0x74e4ec

void ps2___main_0x126d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    const uint32_t initialized = READ32(kInitializedAddr);
    if (initialized == 0u) {
        WRITE32(kInitializedAddr, 1u);
        ps2___do_global_ctors_0x126cc0(rdram, ctx, runtime);
    }
    ctx->pc = getRegU32(ctx, 31);
}
