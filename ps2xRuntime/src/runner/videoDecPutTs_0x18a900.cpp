#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: videoDecPutTs
// Address: 0x18a900 - 0x18a93c
void videoDecPutTs_0x18a900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("videoDecPutTs_0x18a900");
#endif

    ctx->pc = 0x18a900u;

    // 0x18a900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18a900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18a904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18a908: 0xffa50010  sd          $a1, 0x10($sp)
    ctx->pc = 0x18a908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 5));
    // 0x18a90c: 0xffa60018  sd          $a2, 0x18($sp)
    ctx->pc = 0x18a90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 6));
    // 0x18a910: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x18a910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18a914: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x18a914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x18a918: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x18a918u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x18a91c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x18a91cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x18a920: 0xafa80024  sw          $t0, 0x24($sp)
    ctx->pc = 0x18a920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 8));
    // 0x18a924: 0x2484fe48  addiu       $a0, $a0, -0x1B8
    ctx->pc = 0x18a924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966856));
    // 0x18a928: 0xc062510  jal         func_189440
    ctx->pc = 0x18A928u;
    SET_GPR_U32(ctx, 31, 0x18A930u);
    ctx->pc = 0x18A92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A928u;
            // 0x18a92c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189440u;
    if (runtime->hasFunction(0x189440u)) {
        auto targetFn = runtime->lookupFunction(0x189440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A930u; }
        if (ctx->pc != 0x18A930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        viBufPutTs_0x189440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A930u; }
        if (ctx->pc != 0x18A930u) { return; }
    }
    ctx->pc = 0x18A930u;
    // 0x18a930: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a934: 0x3e00008  jr          $ra
    ctx->pc = 0x18A934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A934u;
            // 0x18a938: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A93Cu;
}
