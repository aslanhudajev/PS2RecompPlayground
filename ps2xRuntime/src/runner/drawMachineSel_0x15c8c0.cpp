#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: drawMachineSel
// Address: 0x15c8c0 - 0x15ca1c
void drawMachineSel_0x15c8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("drawMachineSel_0x15c8c0");
#endif

    ctx->pc = 0x15c8c0u;

    // 0x15c8c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15c8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15c8c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x15c8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15c8c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15c8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15c8cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15c8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15c8d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15c8d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c8d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15c8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15c8d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x15c8d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c8dc: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x15C8DCu;
    {
        const bool branch_taken_0x15c8dc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C8DCu;
            // 0x15c8e0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c8dc) {
            ctx->pc = 0x15C8F8u;
            goto label_15c8f8;
        }
    }
    ctx->pc = 0x15C8E4u;
    // 0x15c8e4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c8e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c8e8: 0x8c313588  lw          $s1, 0x3588($at)
    ctx->pc = 0x15c8e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13704)));
    // 0x15c8ec: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c8ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c8f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15C8F0u;
    {
        const bool branch_taken_0x15c8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C8F0u;
            // 0x15c8f4: 0x8c303578  lw          $s0, 0x3578($at) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c8f0) {
            ctx->pc = 0x15C908u;
            goto label_15c908;
        }
    }
    ctx->pc = 0x15C8F8u;
label_15c8f8:
    // 0x15c8f8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15c8f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15c8fc: 0x8c319ce0  lw          $s1, -0x6320($at)
    ctx->pc = 0x15c8fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941920)));
    // 0x15c900: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c904: 0x8c303580  lw          $s0, 0x3580($at)
    ctx->pc = 0x15c904u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13696)));
label_15c908:
    // 0x15c908: 0xc0574d0  jal         func_15D340
    ctx->pc = 0x15C908u;
    SET_GPR_U32(ctx, 31, 0x15C910u);
    ctx->pc = 0x15C90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C908u;
            // 0x15c90c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D340u;
    if (runtime->hasFunction(0x15D340u)) {
        auto targetFn = runtime->lookupFunction(0x15D340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C910u; }
        if (ctx->pc != 0x15C910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawPlayerNo_0x15d340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C910u; }
        if (ctx->pc != 0x15C910u) { return; }
    }
    ctx->pc = 0x15C910u;
    // 0x15c910: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15c910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c914: 0xc057450  jal         func_15D140
    ctx->pc = 0x15C914u;
    SET_GPR_U32(ctx, 31, 0x15C91Cu);
    ctx->pc = 0x15C918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C914u;
            // 0x15c918: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D140u;
    if (runtime->hasFunction(0x15D140u)) {
        auto targetFn = runtime->lookupFunction(0x15D140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C91Cu; }
        if (ctx->pc != 0x15C91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawMachineType_0x15d140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C91Cu; }
        if (ctx->pc != 0x15C91Cu) { return; }
    }
    ctx->pc = 0x15C91Cu;
    // 0x15c91c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15c91cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c920: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15c920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c924: 0xc05747c  jal         func_15D1F0
    ctx->pc = 0x15C924u;
    SET_GPR_U32(ctx, 31, 0x15C92Cu);
    ctx->pc = 0x15C928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C924u;
            // 0x15c928: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D1F0u;
    if (runtime->hasFunction(0x15D1F0u)) {
        auto targetFn = runtime->lookupFunction(0x15D1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C92Cu; }
        if (ctx->pc != 0x15C92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawMachineName_0x15d1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C92Cu; }
        if (ctx->pc != 0x15C92Cu) { return; }
    }
    ctx->pc = 0x15C92Cu;
    // 0x15c92c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C92Cu;
    {
        const bool branch_taken_0x15c92c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C92Cu;
            // 0x15c930: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c92c) {
            ctx->pc = 0x15C940u;
            goto label_15c940;
        }
    }
    ctx->pc = 0x15C934u;
    // 0x15c934: 0xc057520  jal         func_15D480
    ctx->pc = 0x15C934u;
    SET_GPR_U32(ctx, 31, 0x15C93Cu);
    ctx->pc = 0x15C938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C934u;
            // 0x15c938: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D480u;
    if (runtime->hasFunction(0x15D480u)) {
        auto targetFn = runtime->lookupFunction(0x15D480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C93Cu; }
        if (ctx->pc != 0x15C93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawColorWaku_0x15d480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C93Cu; }
        if (ctx->pc != 0x15C93Cu) { return; }
    }
    ctx->pc = 0x15C93Cu;
    // 0x15c93c: 0x0  nop
    ctx->pc = 0x15c93cu;
    // NOP
label_15c940:
    // 0x15c940: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15c940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c944: 0x12250004  beq         $s1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C944u;
    {
        const bool branch_taken_0x15c944 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        ctx->pc = 0x15C948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C944u;
            // 0x15c948: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c944) {
            ctx->pc = 0x15C958u;
            goto label_15c958;
        }
    }
    ctx->pc = 0x15C94Cu;
    // 0x15c94c: 0xc057520  jal         func_15D480
    ctx->pc = 0x15C94Cu;
    SET_GPR_U32(ctx, 31, 0x15C954u);
    ctx->pc = 0x15D480u;
    if (runtime->hasFunction(0x15D480u)) {
        auto targetFn = runtime->lookupFunction(0x15D480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C954u; }
        if (ctx->pc != 0x15C954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawColorWaku_0x15d480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C954u; }
        if (ctx->pc != 0x15C954u) { return; }
    }
    ctx->pc = 0x15C954u;
    // 0x15c954: 0x0  nop
    ctx->pc = 0x15c954u;
    // NOP
label_15c958:
    // 0x15c958: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15c958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15c95c: 0x12250004  beq         $s1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C95Cu;
    {
        const bool branch_taken_0x15c95c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        ctx->pc = 0x15C960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C95Cu;
            // 0x15c960: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c95c) {
            ctx->pc = 0x15C970u;
            goto label_15c970;
        }
    }
    ctx->pc = 0x15C964u;
    // 0x15c964: 0xc057520  jal         func_15D480
    ctx->pc = 0x15C964u;
    SET_GPR_U32(ctx, 31, 0x15C96Cu);
    ctx->pc = 0x15D480u;
    if (runtime->hasFunction(0x15D480u)) {
        auto targetFn = runtime->lookupFunction(0x15D480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C96Cu; }
        if (ctx->pc != 0x15C96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawColorWaku_0x15d480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C96Cu; }
        if (ctx->pc != 0x15C96Cu) { return; }
    }
    ctx->pc = 0x15C96Cu;
    // 0x15c96c: 0x0  nop
    ctx->pc = 0x15c96cu;
    // NOP
label_15c970:
    // 0x15c970: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x15c970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15c974: 0x12250004  beq         $s1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C974u;
    {
        const bool branch_taken_0x15c974 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        ctx->pc = 0x15C978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C974u;
            // 0x15c978: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c974) {
            ctx->pc = 0x15C988u;
            goto label_15c988;
        }
    }
    ctx->pc = 0x15C97Cu;
    // 0x15c97c: 0xc057520  jal         func_15D480
    ctx->pc = 0x15C97Cu;
    SET_GPR_U32(ctx, 31, 0x15C984u);
    ctx->pc = 0x15D480u;
    if (runtime->hasFunction(0x15D480u)) {
        auto targetFn = runtime->lookupFunction(0x15D480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C984u; }
        if (ctx->pc != 0x15C984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawColorWaku_0x15d480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C984u; }
        if (ctx->pc != 0x15C984u) { return; }
    }
    ctx->pc = 0x15C984u;
    // 0x15c984: 0x0  nop
    ctx->pc = 0x15c984u;
    // NOP
label_15c988:
    // 0x15c988: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x15c988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15c98c: 0x12250004  beq         $s1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C98Cu;
    {
        const bool branch_taken_0x15c98c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        ctx->pc = 0x15C990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C98Cu;
            // 0x15c990: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c98c) {
            ctx->pc = 0x15C9A0u;
            goto label_15c9a0;
        }
    }
    ctx->pc = 0x15C994u;
    // 0x15c994: 0xc057520  jal         func_15D480
    ctx->pc = 0x15C994u;
    SET_GPR_U32(ctx, 31, 0x15C99Cu);
    ctx->pc = 0x15D480u;
    if (runtime->hasFunction(0x15D480u)) {
        auto targetFn = runtime->lookupFunction(0x15D480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C99Cu; }
        if (ctx->pc != 0x15C99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawColorWaku_0x15d480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C99Cu; }
        if (ctx->pc != 0x15C99Cu) { return; }
    }
    ctx->pc = 0x15C99Cu;
    // 0x15c99c: 0x0  nop
    ctx->pc = 0x15c99cu;
    // NOP
label_15c9a0:
    // 0x15c9a0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x15c9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15c9a4: 0x12250004  beq         $s1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C9A4u;
    {
        const bool branch_taken_0x15c9a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        ctx->pc = 0x15C9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C9A4u;
            // 0x15c9a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c9a4) {
            ctx->pc = 0x15C9B8u;
            goto label_15c9b8;
        }
    }
    ctx->pc = 0x15C9ACu;
    // 0x15c9ac: 0xc057520  jal         func_15D480
    ctx->pc = 0x15C9ACu;
    SET_GPR_U32(ctx, 31, 0x15C9B4u);
    ctx->pc = 0x15D480u;
    if (runtime->hasFunction(0x15D480u)) {
        auto targetFn = runtime->lookupFunction(0x15D480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C9B4u; }
        if (ctx->pc != 0x15C9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawColorWaku_0x15d480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C9B4u; }
        if (ctx->pc != 0x15C9B4u) { return; }
    }
    ctx->pc = 0x15C9B4u;
    // 0x15c9b4: 0x0  nop
    ctx->pc = 0x15c9b4u;
    // NOP
label_15c9b8:
    // 0x15c9b8: 0x1a000003  blez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15C9B8u;
    {
        const bool branch_taken_0x15c9b8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x15C9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C9B8u;
            // 0x15c9bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c9b8) {
            ctx->pc = 0x15C9C8u;
            goto label_15c9c8;
        }
    }
    ctx->pc = 0x15C9C0u;
    // 0x15c9c0: 0xc05754c  jal         func_15D530
    ctx->pc = 0x15C9C0u;
    SET_GPR_U32(ctx, 31, 0x15C9C8u);
    ctx->pc = 0x15C9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C9C0u;
            // 0x15c9c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D530u;
    if (runtime->hasFunction(0x15D530u)) {
        auto targetFn = runtime->lookupFunction(0x15D530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C9C8u; }
        if (ctx->pc != 0x15C9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawYajirushi_0x15d530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C9C8u; }
        if (ctx->pc != 0x15C9C8u) { return; }
    }
    ctx->pc = 0x15C9C8u;
label_15c9c8:
    // 0x15c9c8: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x15c9c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15c9cc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C9CCu;
    {
        const bool branch_taken_0x15c9cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C9CCu;
            // 0x15c9d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c9cc) {
            ctx->pc = 0x15C9E0u;
            goto label_15c9e0;
        }
    }
    ctx->pc = 0x15C9D4u;
    // 0x15c9d4: 0xc05754c  jal         func_15D530
    ctx->pc = 0x15C9D4u;
    SET_GPR_U32(ctx, 31, 0x15C9DCu);
    ctx->pc = 0x15C9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C9D4u;
            // 0x15c9d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D530u;
    if (runtime->hasFunction(0x15D530u)) {
        auto targetFn = runtime->lookupFunction(0x15D530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C9DCu; }
        if (ctx->pc != 0x15C9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawYajirushi_0x15d530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C9DCu; }
        if (ctx->pc != 0x15C9DCu) { return; }
    }
    ctx->pc = 0x15C9DCu;
    // 0x15c9dc: 0x0  nop
    ctx->pc = 0x15c9dcu;
    // NOP
label_15c9e0:
    // 0x15c9e0: 0xc0575b4  jal         func_15D6D0
    ctx->pc = 0x15C9E0u;
    SET_GPR_U32(ctx, 31, 0x15C9E8u);
    ctx->pc = 0x15C9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C9E0u;
            // 0x15c9e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D6D0u;
    if (runtime->hasFunction(0x15D6D0u)) {
        auto targetFn = runtime->lookupFunction(0x15D6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C9E8u; }
        if (ctx->pc != 0x15C9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawWakuShita_0x15d6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C9E8u; }
        if (ctx->pc != 0x15C9E8u) { return; }
    }
    ctx->pc = 0x15C9E8u;
    // 0x15c9e8: 0xc0575d4  jal         func_15D750
    ctx->pc = 0x15C9E8u;
    SET_GPR_U32(ctx, 31, 0x15C9F0u);
    ctx->pc = 0x15C9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C9E8u;
            // 0x15c9ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D750u;
    if (runtime->hasFunction(0x15D750u)) {
        auto targetFn = runtime->lookupFunction(0x15D750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C9F0u; }
        if (ctx->pc != 0x15C9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawWaku_0x15d750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C9F0u; }
        if (ctx->pc != 0x15C9F0u) { return; }
    }
    ctx->pc = 0x15C9F0u;
    // 0x15c9f0: 0xc057288  jal         func_15CA20
    ctx->pc = 0x15C9F0u;
    SET_GPR_U32(ctx, 31, 0x15C9F8u);
    ctx->pc = 0x15C9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C9F0u;
            // 0x15c9f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CA20u;
    if (runtime->hasFunction(0x15CA20u)) {
        auto targetFn = runtime->lookupFunction(0x15CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C9F8u; }
        if (ctx->pc != 0x15C9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawMachine_0x15ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C9F8u; }
        if (ctx->pc != 0x15C9F8u) { return; }
    }
    ctx->pc = 0x15C9F8u;
    // 0x15c9f8: 0xc057580  jal         func_15D600
    ctx->pc = 0x15C9F8u;
    SET_GPR_U32(ctx, 31, 0x15CA00u);
    ctx->pc = 0x15D600u;
    if (runtime->hasFunction(0x15D600u)) {
        auto targetFn = runtime->lookupFunction(0x15D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CA00u; }
        if (ctx->pc != 0x15CA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawChangeColor_0x15d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CA00u; }
        if (ctx->pc != 0x15CA00u) { return; }
    }
    ctx->pc = 0x15CA00u;
    // 0x15ca00: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15ca00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15ca04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15ca04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15ca08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15ca08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ca0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15ca0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ca10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15ca10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ca14: 0x3e00008  jr          $ra
    ctx->pc = 0x15CA14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CA14u;
            // 0x15ca18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15C8F8u: goto label_15c8f8;
            case 0x15C908u: goto label_15c908;
            case 0x15C940u: goto label_15c940;
            case 0x15C958u: goto label_15c958;
            case 0x15C970u: goto label_15c970;
            case 0x15C988u: goto label_15c988;
            case 0x15C9A0u: goto label_15c9a0;
            case 0x15C9B8u: goto label_15c9b8;
            case 0x15C9C8u: goto label_15c9c8;
            case 0x15C9E0u: goto label_15c9e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15CA1Cu;
}
