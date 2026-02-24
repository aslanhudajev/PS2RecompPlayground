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
// Address: 0x11a158 - 0x11a194
void videoDecPutTs_0x11a158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("videoDecPutTs_0x11a158");
#endif

    ctx->pc = 0x11a158u;

    // 0x11a158: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11a158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11a15c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11a15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11a160: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x11a160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x11a164: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x11a164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x11a168: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x11a168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x11a16c: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x11a16cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x11a170: 0xffa60008  sd          $a2, 0x8($sp)
    ctx->pc = 0x11a170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 6));
    // 0x11a174: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x11a174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x11a178: 0x2484e610  addiu       $a0, $a0, -0x19F0
    ctx->pc = 0x11a178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960656));
    // 0x11a17c: 0xafa80014  sw          $t0, 0x14($sp)
    ctx->pc = 0x11a17cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
    // 0x11a180: 0xc04732c  jal         func_11CCB0
    ctx->pc = 0x11A180u;
    SET_GPR_U32(ctx, 31, 0x11A188u);
    ctx->pc = 0x11A184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A180u;
            // 0x11a184: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11CCB0u;
    if (runtime->hasFunction(0x11CCB0u)) {
        auto targetFn = runtime->lookupFunction(0x11CCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A188u; }
        if (ctx->pc != 0x11A188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        viBufPutTs_0x11ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A188u; }
        if (ctx->pc != 0x11A188u) { return; }
    }
    ctx->pc = 0x11A188u;
    // 0x11a188: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11a188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a18c: 0x3e00008  jr          $ra
    ctx->pc = 0x11A18Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A18Cu;
            // 0x11a190: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A194u;
}
