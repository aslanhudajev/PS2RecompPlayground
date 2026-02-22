#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: std
// Address: 0x12a120 - 0x12a178
void std_0x12a120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12a120u;

    // 0x12a120: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x12a120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x12a124: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x12a124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x12a128: 0x3c080013  lui         $t0, 0x13
    ctx->pc = 0x12a128u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)19 << 16));
    // 0x12a12c: 0x3c090013  lui         $t1, 0x13
    ctx->pc = 0x12a12cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)19 << 16));
    // 0x12a130: 0x2442b558  addiu       $v0, $v0, -0x4AA8
    ctx->pc = 0x12a130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948184));
    // 0x12a134: 0x2463b5c0  addiu       $v1, $v1, -0x4A40
    ctx->pc = 0x12a134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948288));
    // 0x12a138: 0x2508b640  addiu       $t0, $t0, -0x49C0
    ctx->pc = 0x12a138u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294948416));
    // 0x12a13c: 0x2529b6a8  addiu       $t1, $t1, -0x4958
    ctx->pc = 0x12a13cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294948520));
    // 0x12a140: 0xac870054  sw          $a3, 0x54($a0)
    ctx->pc = 0x12a140u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 7));
    // 0x12a144: 0xa485000c  sh          $a1, 0xC($a0)
    ctx->pc = 0x12a144u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x12a148: 0xa486000e  sh          $a2, 0xE($a0)
    ctx->pc = 0x12a148u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x12a14c: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x12a14cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x12a150: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x12a150u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x12a154: 0xac880028  sw          $t0, 0x28($a0)
    ctx->pc = 0x12a154u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 8));
    // 0x12a158: 0xac89002c  sw          $t1, 0x2C($a0)
    ctx->pc = 0x12a158u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 9));
    // 0x12a15c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x12a15cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x12a160: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x12a160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x12a164: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x12a164u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x12a168: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x12a168u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x12a16c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x12a16cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x12a170: 0x3e00008  jr          $ra
    ctx->pc = 0x12A170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A170u;
            // 0x12a174: 0xac84001c  sw          $a0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12A178u;
}
