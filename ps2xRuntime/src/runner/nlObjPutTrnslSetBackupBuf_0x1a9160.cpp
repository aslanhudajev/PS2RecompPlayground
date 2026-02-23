#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPutTrnslSetBackupBuf
// Address: 0x1a9160 - 0x1a916c
void nlObjPutTrnslSetBackupBuf_0x1a9160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPutTrnslSetBackupBuf");


    ctx->pc = 0x1a9160u;

    // 0x1a9160: 0xaf848a34
    ctx->pc = 0x1a9160u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937140), GPR_U32(ctx, 4));
    // 0x1a9164: 0x3e00008
    ctx->pc = 0x1A9164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9168u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937144), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A916Cu;
}
