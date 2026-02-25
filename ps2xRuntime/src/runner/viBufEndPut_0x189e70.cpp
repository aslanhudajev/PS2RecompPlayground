#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: viBufEndPut
// Address: 0x189e70 - 0x189ecc
void viBufEndPut_0x189e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("viBufEndPut_0x189e70");
#endif

    ctx->pc = 0x189e70u;

    // 0x189e70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x189e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x189e74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x189e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x189e78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x189e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x189e7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x189e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x189e80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x189e80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189e84: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x189e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x189e88: 0xc04bb28  jal         func_12ECA0
    ctx->pc = 0x189E88u;
    SET_GPR_U32(ctx, 31, 0x189E90u);
    ctx->pc = 0x189E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189E88u;
            // 0x189e8c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12ECA0u;
    if (runtime->hasFunction(0x12ECA0u)) {
        auto targetFn = runtime->lookupFunction(0x12ECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189E90u; }
        if (ctx->pc != 0x189E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x12eca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189E90u; }
        if (ctx->pc != 0x189E90u) { return; }
    }
    ctx->pc = 0x189E90u;
    // 0x189e90: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x189e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x189e94: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x189e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x189e98: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x189e98u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x189e9c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x189e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x189ea0: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x189ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x189ea4: 0xde220048  ld          $v0, 0x48($s1)
    ctx->pc = 0x189ea4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x189ea8: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x189ea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x189eac: 0xfe220048  sd          $v0, 0x48($s1)
    ctx->pc = 0x189eacu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 2));
    // 0x189eb0: 0xc04bb20  jal         func_12EC80
    ctx->pc = 0x189EB0u;
    SET_GPR_U32(ctx, 31, 0x189EB8u);
    ctx->pc = 0x189EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189EB0u;
            // 0x189eb4: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC80u;
    if (runtime->hasFunction(0x12EC80u)) {
        auto targetFn = runtime->lookupFunction(0x12EC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189EB8u; }
        if (ctx->pc != 0x189EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x12ec80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189EB8u; }
        if (ctx->pc != 0x189EB8u) { return; }
    }
    ctx->pc = 0x189EB8u;
    // 0x189eb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x189eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189ebc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x189ebcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189ec0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x189ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x189EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189EC4u;
            // 0x189ec8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x189ECCu;
}
