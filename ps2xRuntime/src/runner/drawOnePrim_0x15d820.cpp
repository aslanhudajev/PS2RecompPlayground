#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: drawOnePrim
// Address: 0x15d820 - 0x15d860
void drawOnePrim_0x15d820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("drawOnePrim_0x15d820");
#endif

    ctx->pc = 0x15d820u;

    // 0x15d820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15d820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15d824: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15d824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d828: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15d828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15d82c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x15d82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15d830: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15d830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15d834: 0xc05761c  jal         func_15D870
    ctx->pc = 0x15D834u;
    SET_GPR_U32(ctx, 31, 0x15D83Cu);
    ctx->pc = 0x15D838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D834u;
            // 0x15d838: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D870u;
    if (runtime->hasFunction(0x15D870u)) {
        auto targetFn = runtime->lookupFunction(0x15D870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D83Cu; }
        if (ctx->pc != 0x15D83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x15d870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D83Cu; }
        if (ctx->pc != 0x15D83Cu) { return; }
    }
    ctx->pc = 0x15D83Cu;
    // 0x15d83c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15d83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d840: 0xc057618  jal         func_15D860
    ctx->pc = 0x15D840u;
    SET_GPR_U32(ctx, 31, 0x15D848u);
    ctx->pc = 0x15D844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D840u;
            // 0x15d844: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D860u;
    if (runtime->hasFunction(0x15D860u)) {
        auto targetFn = runtime->lookupFunction(0x15D860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D848u; }
        if (ctx->pc != 0x15D848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x15d860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D848u; }
        if (ctx->pc != 0x15D848u) { return; }
    }
    ctx->pc = 0x15D848u;
    // 0x15d848: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x15D848u;
    SET_GPR_U32(ctx, 31, 0x15D850u);
    ctx->pc = 0x15D84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D848u;
            // 0x15d84c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D850u; }
        if (ctx->pc != 0x15D850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D850u; }
        if (ctx->pc != 0x15D850u) { return; }
    }
    ctx->pc = 0x15D850u;
    // 0x15d850: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15d850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d854: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d858: 0x3e00008  jr          $ra
    ctx->pc = 0x15D858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D858u;
            // 0x15d85c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15D860u;
}
