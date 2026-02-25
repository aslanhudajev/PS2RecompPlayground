#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ExplosionUnInit
// Address: 0x14ef40 - 0x14ef90
void ExplosionUnInit_0x14ef40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ExplosionUnInit_0x14ef40");
#endif

    ctx->pc = 0x14ef40u;

    // 0x14ef40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14ef40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14ef44: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14ef44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14ef48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14ef48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14ef4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14ef4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14ef50: 0x8c249d20  lw          $a0, -0x62E0($at)
    ctx->pc = 0x14ef50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941984)));
    // 0x14ef54: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x14EF54u;
    {
        const bool branch_taken_0x14ef54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ef54) {
            ctx->pc = 0x14EF80u;
            goto label_14ef80;
        }
    }
    ctx->pc = 0x14EF5Cu;
    // 0x14ef5c: 0x0  nop
    ctx->pc = 0x14ef5cu;
    // NOP
label_14ef60:
    // 0x14ef60: 0xc053be4  jal         func_14EF90
    ctx->pc = 0x14EF60u;
    SET_GPR_U32(ctx, 31, 0x14EF68u);
    ctx->pc = 0x14EF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EF60u;
            // 0x14ef64: 0x8c900028  lw          $s0, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14EF90u;
    if (runtime->hasFunction(0x14EF90u)) {
        auto targetFn = runtime->lookupFunction(0x14EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EF68u; }
        if (ctx->pc != 0x14EF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExplosionFree_0x14ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EF68u; }
        if (ctx->pc != 0x14EF68u) { return; }
    }
    ctx->pc = 0x14EF68u;
    // 0x14ef68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ef68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ef6c: 0x0  nop
    ctx->pc = 0x14ef6cu;
    // NOP
    // 0x14ef70: 0x0  nop
    ctx->pc = 0x14ef70u;
    // NOP
    // 0x14ef74: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14EF74u;
    {
        const bool branch_taken_0x14ef74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ef74) {
            ctx->pc = 0x14EF60u;
            goto label_14ef60;
        }
    }
    ctx->pc = 0x14EF7Cu;
    // 0x14ef7c: 0x0  nop
    ctx->pc = 0x14ef7cu;
    // NOP
label_14ef80:
    // 0x14ef80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14ef80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ef84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14ef84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ef88: 0x3e00008  jr          $ra
    ctx->pc = 0x14EF88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EF88u;
            // 0x14ef8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14EF60u: goto label_14ef60;
            case 0x14EF80u: goto label_14ef80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14EF90u;
}
