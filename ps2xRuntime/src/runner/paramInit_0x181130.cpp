#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: paramInit
// Address: 0x181130 - 0x181160
void paramInit_0x181130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("paramInit_0x181130");
#endif

    ctx->pc = 0x181130u;

    // 0x181130: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x181130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x181134: 0x3c03c35c  lui         $v1, 0xC35C
    ctx->pc = 0x181134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50012 << 16));
    // 0x181138: 0xac202b20  sw          $zero, 0x2B20($at)
    ctx->pc = 0x181138u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11040), GPR_U32(ctx, 0));
    // 0x18113c: 0x3c04c1a0  lui         $a0, 0xC1A0
    ctx->pc = 0x18113cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49568 << 16));
    // 0x181140: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x181140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x181144: 0xac232b18  sw          $v1, 0x2B18($at)
    ctx->pc = 0x181144u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11032), GPR_U32(ctx, 3));
    // 0x181148: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x181148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x18114c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x18114cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x181150: 0xac2427d8  sw          $a0, 0x27D8($at)
    ctx->pc = 0x181150u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10200), GPR_U32(ctx, 4));
    // 0x181154: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x181154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x181158: 0x3e00008  jr          $ra
    ctx->pc = 0x181158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18115Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181158u;
            // 0x18115c: 0xa0233c90  sb          $v1, 0x3C90($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 15504), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181160u;
}
