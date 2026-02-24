#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: viBufCount
// Address: 0x11caa0 - 0x11caec
void viBufCount_0x11caa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("viBufCount_0x11caa0");
#endif

    ctx->pc = 0x11caa0u;

    // 0x11caa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11caa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11caa4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11caa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11caa8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11caa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11caac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11caacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11cab0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11cab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cab4: 0xc0438b8  jal         func_10E2E0
    ctx->pc = 0x11CAB4u;
    SET_GPR_U32(ctx, 31, 0x11CABCu);
    ctx->pc = 0x11CAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CAB4u;
            // 0x11cab8: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E2E0u;
    if (runtime->hasFunction(0x10E2E0u)) {
        auto targetFn = runtime->lookupFunction(0x10E2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CABCu; }
        if (ctx->pc != 0x11CABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x10e2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CABCu; }
        if (ctx->pc != 0x11CABCu) { return; }
    }
    ctx->pc = 0x11CABCu;
    // 0x11cabc: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x11cabcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11cac0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x11cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x11cac4: 0x118ac0  sll         $s1, $s1, 11
    ctx->pc = 0x11cac4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
    // 0x11cac8: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x11cac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x11cacc: 0xc0438b0  jal         func_10E2C0
    ctx->pc = 0x11CACCu;
    SET_GPR_U32(ctx, 31, 0x11CAD4u);
    ctx->pc = 0x11CAD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CACCu;
            // 0x11cad0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E2C0u;
    if (runtime->hasFunction(0x10E2C0u)) {
        auto targetFn = runtime->lookupFunction(0x10E2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CAD4u; }
        if (ctx->pc != 0x11CAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x10e2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CAD4u; }
        if (ctx->pc != 0x11CAD4u) { return; }
    }
    ctx->pc = 0x11CAD4u;
    // 0x11cad4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x11cad4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cad8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11cad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11cadc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11cadcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11cae0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11cae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11cae4: 0x3e00008  jr          $ra
    ctx->pc = 0x11CAE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CAE4u;
            // 0x11cae8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11CAECu;
}
