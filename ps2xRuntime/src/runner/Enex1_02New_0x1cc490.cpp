#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Enex1_02New
// Address: 0x1cc490 - 0x1cc498
void Enex1_02New_0x1cc490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Enex1_02New_0x1cc490");
#endif

    ctx->pc = 0x1cc490u;

    // 0x1cc490: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CC498u;
}
