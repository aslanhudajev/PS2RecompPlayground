#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbInitDORegs
// Address: 0x2bfd10 - 0x2bfd18
void pbInitDORegs_0x2bfd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bfd10u;

    // 0x2bfd10: 0x80aff06
    ctx->pc = 0x2BFD10u;
    ctx->pc = 0x2BFC18u;
    pbResetDORegs_0x2bfc18(rdram, ctx, runtime); return;
    ctx->pc = 0x2BFD18u;
}
