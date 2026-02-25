#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: viBufFlush
// Address: 0x189720 - 0x189770
void viBufFlush_0x189720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("viBufFlush_0x189720");
#endif

    ctx->pc = 0x189720u;

    // 0x189720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x189720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x189724: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x189724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x189728: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x189728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18972c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18972cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189730: 0xc04bb28  jal         func_12ECA0
    ctx->pc = 0x189730u;
    SET_GPR_U32(ctx, 31, 0x189738u);
    ctx->pc = 0x189734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189730u;
            // 0x189734: 0x8c840040  lw          $a0, 0x40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12ECA0u;
    if (runtime->hasFunction(0x12ECA0u)) {
        auto targetFn = runtime->lookupFunction(0x12ECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189738u; }
        if (ctx->pc != 0x189738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x12eca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189738u; }
        if (ctx->pc != 0x189738u) { return; }
    }
    ctx->pc = 0x189738u;
    // 0x189738: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x189738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x18973c: 0x244307ff  addiu       $v1, $v0, 0x7FF
    ctx->pc = 0x18973cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x189740: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x189740u;
    {
        const bool branch_taken_0x189740 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x189744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189740u;
            // 0x189744: 0x312c3  sra         $v0, $v1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189740) {
            ctx->pc = 0x189750u;
            goto label_189750;
        }
    }
    ctx->pc = 0x189748u;
    // 0x189748: 0x246207ff  addiu       $v0, $v1, 0x7FF
    ctx->pc = 0x189748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
    // 0x18974c: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x18974cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_189750:
    // 0x189750: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x189750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x189754: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x189754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x189758: 0xc04bb20  jal         func_12EC80
    ctx->pc = 0x189758u;
    SET_GPR_U32(ctx, 31, 0x189760u);
    ctx->pc = 0x18975Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189758u;
            // 0x18975c: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC80u;
    if (runtime->hasFunction(0x12EC80u)) {
        auto targetFn = runtime->lookupFunction(0x12EC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189760u; }
        if (ctx->pc != 0x189760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x12ec80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189760u; }
        if (ctx->pc != 0x189760u) { return; }
    }
    ctx->pc = 0x189760u;
    // 0x189760: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x189760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189764: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x189764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189768: 0x3e00008  jr          $ra
    ctx->pc = 0x189768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18976Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189768u;
            // 0x18976c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189750u: goto label_189750;
            default: break;
        }
        return;
    }
    ctx->pc = 0x189770u;
}
