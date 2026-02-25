#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: drawChangeColor
// Address: 0x15d600 - 0x15d64c
void drawChangeColor_0x15d600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("drawChangeColor_0x15d600");
#endif

    ctx->pc = 0x15d600u;

    // 0x15d600: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15d600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15d604: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d608: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15d608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15d60c: 0x24424690  addiu       $v0, $v0, 0x4690
    ctx->pc = 0x15d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18064));
    // 0x15d610: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x15d610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x15d614: 0x2404003d  addiu       $a0, $zero, 0x3D
    ctx->pc = 0x15d614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x15d618: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x15d618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x15d61c: 0x24429c90  addiu       $v0, $v0, -0x6370
    ctx->pc = 0x15d61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941840));
    // 0x15d620: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x15d620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x15d624: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d628: 0x24424670  addiu       $v0, $v0, 0x4670
    ctx->pc = 0x15d628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18032));
    // 0x15d62c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15D62Cu;
    SET_GPR_U32(ctx, 31, 0x15D634u);
    ctx->pc = 0x15D630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D62Cu;
            // 0x15d630: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D634u; }
        if (ctx->pc != 0x15D634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D634u; }
        if (ctx->pc != 0x15D634u) { return; }
    }
    ctx->pc = 0x15D634u;
    // 0x15d634: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x15d634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x15d638: 0xc057608  jal         func_15D820
    ctx->pc = 0x15D638u;
    SET_GPR_U32(ctx, 31, 0x15D640u);
    ctx->pc = 0x15D63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D638u;
            // 0x15d63c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D820u;
    if (runtime->hasFunction(0x15D820u)) {
        auto targetFn = runtime->lookupFunction(0x15D820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D640u; }
        if (ctx->pc != 0x15D640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawOnePrim_0x15d820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D640u; }
        if (ctx->pc != 0x15D640u) { return; }
    }
    ctx->pc = 0x15D640u;
    // 0x15d640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15d640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d644: 0x3e00008  jr          $ra
    ctx->pc = 0x15D644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D644u;
            // 0x15d648: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15D64Cu;
}
