#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage4BossRender
// Address: 0x1bf230 - 0x1bf26c
void Stage4BossRender_0x1bf230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage4BossRender_0x1bf230");
#endif

    ctx->pc = 0x1bf230u;

    // 0x1bf230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bf230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bf234: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bf234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bf238: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bf238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bf23c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bf23cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf240: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1bf240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1bf244: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x1bf244u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1bf248: 0xc06cea4  jal         func_1B3A90
    ctx->pc = 0x1BF248u;
    SET_GPR_U32(ctx, 31, 0x1BF250u);
    ctx->pc = 0x1BF24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF248u;
            // 0x1bf24c: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A90u;
    if (runtime->hasFunction(0x1B3A90u)) {
        auto targetFn = runtime->lookupFunction(0x1B3A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF250u; }
        if (ctx->pc != 0x1BF250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawBossInfomation_0x1b3a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF250u; }
        if (ctx->pc != 0x1BF250u) { return; }
    }
    ctx->pc = 0x1BF250u;
    // 0x1bf250: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1bf250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bf254: 0xc060510  jal         func_181440
    ctx->pc = 0x1BF254u;
    SET_GPR_U32(ctx, 31, 0x1BF25Cu);
    ctx->pc = 0x1BF258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF254u;
            // 0x1bf258: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181440u;
    if (runtime->hasFunction(0x181440u)) {
        auto targetFn = runtime->lookupFunction(0x181440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF25Cu; }
        if (ctx->pc != 0x1BF25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneRenderFunction2_0x181440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF25Cu; }
        if (ctx->pc != 0x1BF25Cu) { return; }
    }
    ctx->pc = 0x1BF25Cu;
    // 0x1bf25c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bf25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf260: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bf260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf264: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF264u;
            // 0x1bf268: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BF26Cu;
}
