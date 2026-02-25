#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: std
// Address: 0x139850 - 0x1398a8
void std_0x139850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("std_0x139850");
#endif

    ctx->pc = 0x139850u;

    // 0x139850: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x139850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x139854: 0x3c030014  lui         $v1, 0x14
    ctx->pc = 0x139854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20 << 16));
    // 0x139858: 0x3c080014  lui         $t0, 0x14
    ctx->pc = 0x139858u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20 << 16));
    // 0x13985c: 0x3c090014  lui         $t1, 0x14
    ctx->pc = 0x13985cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)20 << 16));
    // 0x139860: 0x2442cb68  addiu       $v0, $v0, -0x3498
    ctx->pc = 0x139860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953832));
    // 0x139864: 0x2463cbd0  addiu       $v1, $v1, -0x3430
    ctx->pc = 0x139864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953936));
    // 0x139868: 0x2508cc50  addiu       $t0, $t0, -0x33B0
    ctx->pc = 0x139868u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954064));
    // 0x13986c: 0x2529ccb8  addiu       $t1, $t1, -0x3348
    ctx->pc = 0x13986cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294954168));
    // 0x139870: 0xac870054  sw          $a3, 0x54($a0)
    ctx->pc = 0x139870u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 7));
    // 0x139874: 0xa485000c  sh          $a1, 0xC($a0)
    ctx->pc = 0x139874u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x139878: 0xa486000e  sh          $a2, 0xE($a0)
    ctx->pc = 0x139878u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x13987c: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x13987cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x139880: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x139880u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x139884: 0xac880028  sw          $t0, 0x28($a0)
    ctx->pc = 0x139884u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 8));
    // 0x139888: 0xac89002c  sw          $t1, 0x2C($a0)
    ctx->pc = 0x139888u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 9));
    // 0x13988c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x13988cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x139890: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x139890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x139894: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x139894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x139898: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x139898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x13989c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x13989cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1398a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1398A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1398A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1398A0u;
            // 0x1398a4: 0xac84001c  sw          $a0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1398A8u;
}
