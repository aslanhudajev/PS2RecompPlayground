#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: fadeOut
// Address: 0x108e38 - 0x108e78
void fadeOut_0x108e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("fadeOut_0x108e38");
#endif

    ctx->pc = 0x108e38u;

    // 0x108e38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x108e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x108e3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108e40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x108e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x108e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x108e48: 0xc041fd8  jal         func_107F60
    ctx->pc = 0x108E48u;
    SET_GPR_U32(ctx, 31, 0x108E50u);
    ctx->pc = 0x108E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108E48u;
            // 0x108e4c: 0x8f84814c  lw          $a0, -0x7EB4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107F60u;
    if (runtime->hasFunction(0x107F60u)) {
        auto targetFn = runtime->lookupFunction(0x107F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108E50u; }
        if (ctx->pc != 0x108E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        screenFade_0x107f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108E50u; }
        if (ctx->pc != 0x108E50u) { return; }
    }
    ctx->pc = 0x108E50u;
    // 0x108e50: 0x8f82814c  lw          $v0, -0x7EB4($gp)
    ctx->pc = 0x108e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934860)));
    // 0x108e54: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x108E54u;
    {
        const bool branch_taken_0x108e54 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x108E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108E54u;
            // 0x108e58: 0x501023  subu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108e54) {
            ctx->pc = 0x108E64u;
            goto label_108e64;
        }
    }
    ctx->pc = 0x108E5Cu;
    // 0x108e5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x108E5Cu;
    {
        const bool branch_taken_0x108e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108E5Cu;
            // 0x108e60: 0xaf82814c  sw          $v0, -0x7EB4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934860), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108e5c) {
            ctx->pc = 0x108E68u;
            goto label_108e68;
        }
    }
    ctx->pc = 0x108E64u;
label_108e64:
    // 0x108e64: 0xaf8080a4  sw          $zero, -0x7F5C($gp)
    ctx->pc = 0x108e64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934692), GPR_U32(ctx, 0));
label_108e68:
    // 0x108e68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x108e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108e6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108e6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108e70: 0x3e00008  jr          $ra
    ctx->pc = 0x108E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108E70u;
            // 0x108e74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x108E64u: goto label_108e64;
            case 0x108E68u: goto label_108e68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x108E78u;
}
