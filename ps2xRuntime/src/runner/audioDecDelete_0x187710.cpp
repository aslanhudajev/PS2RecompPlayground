#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: audioDecDelete
// Address: 0x187710 - 0x18774c
void audioDecDelete_0x187710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("audioDecDelete_0x187710");
#endif

    ctx->pc = 0x187710u;

    // 0x187710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x187710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x187714: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x187714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x187718: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x187718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18771c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18771cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187720: 0xc04d76a  jal         func_135DA8
    ctx->pc = 0x187720u;
    SET_GPR_U32(ctx, 31, 0x187728u);
    ctx->pc = 0x187724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187720u;
            // 0x187724: 0x8c840044  lw          $a0, 0x44($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135DA8u;
    if (runtime->hasFunction(0x135DA8u)) {
        auto targetFn = runtime->lookupFunction(0x135DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187728u; }
        if (ctx->pc != 0x187728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifFreeIopHeap_0x135da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187728u; }
        if (ctx->pc != 0x187728u) { return; }
    }
    ctx->pc = 0x187728u;
    // 0x187728: 0xc04d76a  jal         func_135DA8
    ctx->pc = 0x187728u;
    SET_GPR_U32(ctx, 31, 0x187730u);
    ctx->pc = 0x18772Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187728u;
            // 0x18772c: 0x8e040058  lw          $a0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135DA8u;
    if (runtime->hasFunction(0x135DA8u)) {
        auto targetFn = runtime->lookupFunction(0x135DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187730u; }
        if (ctx->pc != 0x187730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifFreeIopHeap_0x135da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187730u; }
        if (ctx->pc != 0x187730u) { return; }
    }
    ctx->pc = 0x187730u;
    // 0x187730: 0xc061bbc  jal         func_186EF0
    ctx->pc = 0x187730u;
    SET_GPR_U32(ctx, 31, 0x187738u);
    ctx->pc = 0x187734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187730u;
            // 0x187734: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186EF0u;
    if (runtime->hasFunction(0x186EF0u)) {
        auto targetFn = runtime->lookupFunction(0x186EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187738u; }
        if (ctx->pc != 0x187738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        changeMasterVolume_0x186ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187738u; }
        if (ctx->pc != 0x187738u) { return; }
    }
    ctx->pc = 0x187738u;
    // 0x187738: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x187738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18773c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18773cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187740: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x187740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187744: 0x3e00008  jr          $ra
    ctx->pc = 0x187744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187744u;
            // 0x187748: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18774Cu;
}
