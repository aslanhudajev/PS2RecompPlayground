#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: RgbAnim
// Address: 0x1eb1d0 - 0x1eb248
void RgbAnim_0x1eb1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("RgbAnim_0x1eb1d0");
#endif

    ctx->pc = 0x1eb1d0u;

    // 0x1eb1d0: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eb1d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eb1d4: 0x3c070044  lui         $a3, 0x44
    ctx->pc = 0x1eb1d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)68 << 16));
    // 0x1eb1d8: 0x8c262e38  lw          $a2, 0x2E38($at)
    ctx->pc = 0x1eb1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11832)));
    // 0x1eb1dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1eb1dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb1e0: 0x24e73310  addiu       $a3, $a3, 0x3310
    ctx->pc = 0x1eb1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13072));
    // 0x1eb1e4: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1eb1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1eb1e8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1eb1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eb1ec: 0x0  nop
    ctx->pc = 0x1eb1ecu;
    // NOP
label_1eb1f0:
    // 0x1eb1f0: 0x15060003  bne         $t0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EB1F0u;
    {
        const bool branch_taken_0x1eb1f0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        if (branch_taken_0x1eb1f0) {
            ctx->pc = 0x1EB200u;
            goto label_1eb200;
        }
    }
    ctx->pc = 0x1EB1F8u;
    // 0x1eb1f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1EB1F8u;
    {
        const bool branch_taken_0x1eb1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB1F8u;
            // 0x1eb1fc: 0xa0e50003  sb          $a1, 0x3($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb1f8) {
            ctx->pc = 0x1EB220u;
            goto label_1eb220;
        }
    }
    ctx->pc = 0x1EB200u;
label_1eb200:
    // 0x1eb200: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x1eb200u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x1eb204: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EB204u;
    {
        const bool branch_taken_0x1eb204 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1eb204) {
            ctx->pc = 0x1EB220u;
            goto label_1eb220;
        }
    }
    ctx->pc = 0x1EB20Cu;
    // 0x1eb20c: 0x11040004  beq         $t0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EB20Cu;
    {
        const bool branch_taken_0x1eb20c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        if (branch_taken_0x1eb20c) {
            ctx->pc = 0x1EB220u;
            goto label_1eb220;
        }
    }
    ctx->pc = 0x1EB214u;
    // 0x1eb214: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1eb214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x1eb218: 0xa0e30003  sb          $v1, 0x3($a3)
    ctx->pc = 0x1eb218u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eb21c: 0x0  nop
    ctx->pc = 0x1eb21cu;
    // NOP
label_1eb220:
    // 0x1eb220: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1eb220u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1eb224: 0x29030010  slti        $v1, $t0, 0x10
    ctx->pc = 0x1eb224u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1eb228: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x1EB228u;
    {
        const bool branch_taken_0x1eb228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB228u;
            // 0x1eb22c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb228) {
            ctx->pc = 0x1EB1F0u;
            goto label_1eb1f0;
        }
    }
    ctx->pc = 0x1EB230u;
    // 0x1eb230: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eb230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eb234: 0x8c232e38  lw          $v1, 0x2E38($at)
    ctx->pc = 0x1eb234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11832)));
    // 0x1eb238: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1eb238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1eb23c: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eb23cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eb240: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB240u;
            // 0x1eb244: 0xac232e38  sw          $v1, 0x2E38($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11832), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EB1F0u: goto label_1eb1f0;
            case 0x1EB200u: goto label_1eb200;
            case 0x1EB220u: goto label_1eb220;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EB248u;
}
