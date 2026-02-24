#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: gfxMemInit
// Address: 0x108e78 - 0x108e84
void gfxMemInit_0x108e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("gfxMemInit_0x108e78");
#endif

    ctx->pc = 0x108e78u;

    // 0x108e78: 0xaf848178  sw          $a0, -0x7E88($gp)
    ctx->pc = 0x108e78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934904), GPR_U32(ctx, 4));
    // 0x108e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x108E7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108E7Cu;
            // 0x108e80: 0xaf85817c  sw          $a1, -0x7E84($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934908), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x108E84u;
}
