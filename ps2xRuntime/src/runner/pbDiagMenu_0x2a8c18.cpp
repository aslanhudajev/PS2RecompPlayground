#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbDiagMenu
// Address: 0x2a8c18 - 0x2a8c20
void pbDiagMenu_0x2a8c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a8c18u;

    // 0x2a8c18: 0x80aa304
    ctx->pc = 0x2A8C18u;
    ctx->pc = 0x2A8C10u;
    pbDiagMenuDraw_0x2a8c10(rdram, ctx, runtime); return;
    ctx->pc = 0x2A8C20u;
}
