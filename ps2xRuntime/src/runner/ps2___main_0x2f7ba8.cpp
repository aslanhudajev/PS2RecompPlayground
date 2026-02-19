#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// __main (libgcc2.c): run global ctors once (initialized.10 guard), then return.
void ps2___main_0x2f7ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime)
{
    // initialized.10 at 0x3e0000 + 0x3df4 (from lui v1,0x3e; lw offset(v1))
    constexpr uint32_t kInitialized = 0x3e3df4u;
    if (READ32(kInitialized) != 0u)
    {
        ctx->pc = GPR_U32(ctx, 31);
        return;
    }
    WRITE32(kInitialized, 1u);
    ps2___do_global_ctors_0x2f7af8(rdram, ctx, runtime);
    ctx->pc = GPR_U32(ctx, 31);
}
