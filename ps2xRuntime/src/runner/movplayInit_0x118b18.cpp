#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: movplayInit
// Address: 0x118b18 - 0x118b24
void movplayInit_0x118b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("movplayInit_0x118b18");
#endif

    ctx->pc = 0x118b18u;

    // 0x118b18: 0xaf848420  sw          $a0, -0x7BE0($gp)
    ctx->pc = 0x118b18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935584), GPR_U32(ctx, 4));
    // 0x118b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x118B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118B1Cu;
            // 0x118b20: 0xaf858424  sw          $a1, -0x7BDC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935588), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x118B24u;
}
