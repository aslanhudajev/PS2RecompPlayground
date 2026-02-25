#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsFreeEs
// Address: 0x181a00 - 0x181a50
void wrsFreeEs_0x181a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsFreeEs_0x181a00");
#endif

    ctx->pc = 0x181a00u;

    // 0x181a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x181a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x181a04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x181a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181a08: 0xc060694  jal         func_181A50
    ctx->pc = 0x181A08u;
    SET_GPR_U32(ctx, 31, 0x181A10u);
    ctx->pc = 0x181A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181A08u;
            // 0x181a0c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181A10u; }
        if (ctx->pc != 0x181A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181A10u; }
        if (ctx->pc != 0x181A10u) { return; }
    }
    ctx->pc = 0x181A10u;
    // 0x181a10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x181a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x181a14: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x181A14u;
    {
        const bool branch_taken_0x181a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x181A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181A14u;
            // 0x181a18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181a14) {
            ctx->pc = 0x181A40u;
            goto label_181a40;
        }
    }
    ctx->pc = 0x181A1Cu;
    // 0x181a1c: 0x8e040170  lw          $a0, 0x170($s0)
    ctx->pc = 0x181a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
    // 0x181a20: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x181A20u;
    {
        const bool branch_taken_0x181a20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x181A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181A20u;
            // 0x181a24: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181a20) {
            ctx->pc = 0x181A30u;
            goto label_181a30;
        }
    }
    ctx->pc = 0x181A28u;
    // 0x181a28: 0xc0431b0  jal         func_10C6C0
    ctx->pc = 0x181A28u;
    SET_GPR_U32(ctx, 31, 0x181A30u);
    ctx->pc = 0x10C6C0u;
    if (runtime->hasFunction(0x10C6C0u)) {
        auto targetFn = runtime->lookupFunction(0x10C6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181A30u; }
        if (ctx->pc != 0x181A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiCallPlug_0x10c6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181A30u; }
        if (ctx->pc != 0x181A30u) { return; }
    }
    ctx->pc = 0x181A30u;
label_181a30:
    // 0x181a30: 0xc050700  jal         func_141C00
    ctx->pc = 0x181A30u;
    SET_GPR_U32(ctx, 31, 0x181A38u);
    ctx->pc = 0x181A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181A30u;
            // 0x181a34: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141C00u;
    if (runtime->hasFunction(0x141C00u)) {
        auto targetFn = runtime->lookupFunction(0x141C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181A38u; }
        if (ctx->pc != 0x181A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFree_0x141c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181A38u; }
        if (ctx->pc != 0x181A38u) { return; }
    }
    ctx->pc = 0x181A38u;
    // 0x181a38: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x181a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x181a3c: 0x0  nop
    ctx->pc = 0x181a3cu;
    // NOP
label_181a40:
    // 0x181a40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x181a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181a44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181a48: 0x3e00008  jr          $ra
    ctx->pc = 0x181A48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181A48u;
            // 0x181a4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x181A30u: goto label_181a30;
            case 0x181A40u: goto label_181a40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x181A50u;
}
