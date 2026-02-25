#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: RgbAnim2
// Address: 0x1eb150 - 0x1eb1c8
void RgbAnim2_0x1eb150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("RgbAnim2_0x1eb150");
#endif

    ctx->pc = 0x1eb150u;

    // 0x1eb150: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eb150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eb154: 0x3c070044  lui         $a3, 0x44
    ctx->pc = 0x1eb154u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)68 << 16));
    // 0x1eb158: 0x8c262e40  lw          $a2, 0x2E40($at)
    ctx->pc = 0x1eb158u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11840)));
    // 0x1eb15c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1eb15cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb160: 0x24e72ed0  addiu       $a3, $a3, 0x2ED0
    ctx->pc = 0x1eb160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11984));
    // 0x1eb164: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1eb164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1eb168: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1eb168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eb16c: 0x0  nop
    ctx->pc = 0x1eb16cu;
    // NOP
label_1eb170:
    // 0x1eb170: 0x15060003  bne         $t0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EB170u;
    {
        const bool branch_taken_0x1eb170 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        if (branch_taken_0x1eb170) {
            ctx->pc = 0x1EB180u;
            goto label_1eb180;
        }
    }
    ctx->pc = 0x1EB178u;
    // 0x1eb178: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1EB178u;
    {
        const bool branch_taken_0x1eb178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB178u;
            // 0x1eb17c: 0xa0e50003  sb          $a1, 0x3($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb178) {
            ctx->pc = 0x1EB1A0u;
            goto label_1eb1a0;
        }
    }
    ctx->pc = 0x1EB180u;
label_1eb180:
    // 0x1eb180: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x1eb180u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x1eb184: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EB184u;
    {
        const bool branch_taken_0x1eb184 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1eb184) {
            ctx->pc = 0x1EB1A0u;
            goto label_1eb1a0;
        }
    }
    ctx->pc = 0x1EB18Cu;
    // 0x1eb18c: 0x11040004  beq         $t0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EB18Cu;
    {
        const bool branch_taken_0x1eb18c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        if (branch_taken_0x1eb18c) {
            ctx->pc = 0x1EB1A0u;
            goto label_1eb1a0;
        }
    }
    ctx->pc = 0x1EB194u;
    // 0x1eb194: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1eb194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x1eb198: 0xa0e30003  sb          $v1, 0x3($a3)
    ctx->pc = 0x1eb198u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eb19c: 0x0  nop
    ctx->pc = 0x1eb19cu;
    // NOP
label_1eb1a0:
    // 0x1eb1a0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1eb1a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1eb1a4: 0x29030010  slti        $v1, $t0, 0x10
    ctx->pc = 0x1eb1a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1eb1a8: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x1EB1A8u;
    {
        const bool branch_taken_0x1eb1a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB1A8u;
            // 0x1eb1ac: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb1a8) {
            ctx->pc = 0x1EB170u;
            goto label_1eb170;
        }
    }
    ctx->pc = 0x1EB1B0u;
    // 0x1eb1b0: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eb1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eb1b4: 0x8c232e40  lw          $v1, 0x2E40($at)
    ctx->pc = 0x1eb1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11840)));
    // 0x1eb1b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1eb1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1eb1bc: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eb1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eb1c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB1C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB1C0u;
            // 0x1eb1c4: 0xac232e40  sw          $v1, 0x2E40($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11840), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EB170u: goto label_1eb170;
            case 0x1EB180u: goto label_1eb180;
            case 0x1EB1A0u: goto label_1eb1a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EB1C8u;
}
