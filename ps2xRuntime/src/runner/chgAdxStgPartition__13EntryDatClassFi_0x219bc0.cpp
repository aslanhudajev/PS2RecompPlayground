#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: chgAdxStgPartition__13EntryDatClassFi
// Address: 0x219bc0 - 0x219bc8
void chgAdxStgPartition__13EntryDatClassFi_0x219bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("chgAdxStgPartition__13EntryDatClassFi");


    ctx->pc = 0x219bc0u;

    // 0x219bc0: 0x3e00008
    ctx->pc = 0x219BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x219BC8u;
}
