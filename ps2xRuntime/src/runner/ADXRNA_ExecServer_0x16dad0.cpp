#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXRNA_ExecServer
// Address: 0x16dad0 - 0x16dad8
void ADXRNA_ExecServer_0x16dad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXRNA_ExecServer");


    ctx->pc = 0x16dad0u;

    // 0x16dad0: 0x805eede
    ctx->pc = 0x16DAD0u;
    ctx->pc = 0x17BB78u;
    PS2RNA_ExecServer_0x17bb78(rdram, ctx, runtime); return;
    ctx->pc = 0x16DAD8u;
}
