#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: StaffRoll
// Address: 0x19ace0 - 0x19ad30
void StaffRoll_0x19ace0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("StaffRoll_0x19ace0");
#endif

    ctx->pc = 0x19ace0u;

    // 0x19ace0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19ace0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19ace4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19ace4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19ace8: 0xc066c14  jal         func_19B050
    ctx->pc = 0x19ACE8u;
    SET_GPR_U32(ctx, 31, 0x19ACF0u);
    ctx->pc = 0x19ACECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19ACE8u;
            // 0x19acec: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B050u;
    if (runtime->hasFunction(0x19B050u)) {
        auto targetFn = runtime->lookupFunction(0x19B050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ACF0u; }
        if (ctx->pc != 0x19ACF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StaffRollInit_0x19b050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ACF0u; }
        if (ctx->pc != 0x19ACF0u) { return; }
    }
    ctx->pc = 0x19ACF0u;
label_19acf0:
    // 0x19acf0: 0xc050af4  jal         func_142BD0
    ctx->pc = 0x19ACF0u;
    SET_GPR_U32(ctx, 31, 0x19ACF8u);
    ctx->pc = 0x142BD0u;
    if (runtime->hasFunction(0x142BD0u)) {
        auto targetFn = runtime->lookupFunction(0x142BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ACF8u; }
        if (ctx->pc != 0x19ACF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsLeaveTask_0x142bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ACF8u; }
        if (ctx->pc != 0x19ACF8u) { return; }
    }
    ctx->pc = 0x19ACF8u;
    // 0x19acf8: 0xc066bac  jal         func_19AEB0
    ctx->pc = 0x19ACF8u;
    SET_GPR_U32(ctx, 31, 0x19AD00u);
    ctx->pc = 0x19AEB0u;
    if (runtime->hasFunction(0x19AEB0u)) {
        auto targetFn = runtime->lookupFunction(0x19AEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AD00u; }
        if (ctx->pc != 0x19AD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StaffRollMove_0x19aeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AD00u; }
        if (ctx->pc != 0x19AD00u) { return; }
    }
    ctx->pc = 0x19AD00u;
    // 0x19ad00: 0xc066b4c  jal         func_19AD30
    ctx->pc = 0x19AD00u;
    SET_GPR_U32(ctx, 31, 0x19AD08u);
    ctx->pc = 0x19AD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AD00u;
            // 0x19ad04: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19AD30u;
    if (runtime->hasFunction(0x19AD30u)) {
        auto targetFn = runtime->lookupFunction(0x19AD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AD08u; }
        if (ctx->pc != 0x19AD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StaffRollRender_0x19ad30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AD08u; }
        if (ctx->pc != 0x19AD08u) { return; }
    }
    ctx->pc = 0x19AD08u;
    // 0x19ad08: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19AD08u;
    {
        const bool branch_taken_0x19ad08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ad08) {
            ctx->pc = 0x19ACF0u;
            goto label_19acf0;
        }
    }
    ctx->pc = 0x19AD10u;
    // 0x19ad10: 0xc05cff0  jal         func_173FC0
    ctx->pc = 0x19AD10u;
    SET_GPR_U32(ctx, 31, 0x19AD18u);
    ctx->pc = 0x173FC0u;
    if (runtime->hasFunction(0x173FC0u)) {
        auto targetFn = runtime->lookupFunction(0x173FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AD18u; }
        if (ctx->pc != 0x19AD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stop_bgm_0x173fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AD18u; }
        if (ctx->pc != 0x19AD18u) { return; }
    }
    ctx->pc = 0x19AD18u;
    // 0x19ad18: 0xc050af4  jal         func_142BD0
    ctx->pc = 0x19AD18u;
    SET_GPR_U32(ctx, 31, 0x19AD20u);
    ctx->pc = 0x142BD0u;
    if (runtime->hasFunction(0x142BD0u)) {
        auto targetFn = runtime->lookupFunction(0x142BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AD20u; }
        if (ctx->pc != 0x19AD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsLeaveTask_0x142bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AD20u; }
        if (ctx->pc != 0x19AD20u) { return; }
    }
    ctx->pc = 0x19AD20u;
    // 0x19ad20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19ad20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ad24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19ad24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ad28: 0x3e00008  jr          $ra
    ctx->pc = 0x19AD28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AD28u;
            // 0x19ad2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19ACF0u: goto label_19acf0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19AD30u;
}
