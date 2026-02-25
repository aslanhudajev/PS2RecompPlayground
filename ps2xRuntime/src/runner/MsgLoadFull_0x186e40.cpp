#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MsgLoadFull
// Address: 0x186e40 - 0x186ea0
void MsgLoadFull_0x186e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MsgLoadFull_0x186e40");
#endif

    ctx->pc = 0x186e40u;

    // 0x186e40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x186e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x186e44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x186e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x186e48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x186e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x186e4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x186e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x186e50: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x186e50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186e54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x186e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x186e58: 0x3c110022  lui         $s1, 0x22
    ctx->pc = 0x186e58u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
    // 0x186e5c: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x186e5cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x186e60: 0x2631a410  addiu       $s1, $s1, -0x5BF0
    ctx->pc = 0x186e60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294943760));
    // 0x186e64: 0x2610b640  addiu       $s0, $s0, -0x49C0
    ctx->pc = 0x186e64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948416));
label_186e68:
    // 0x186e68: 0xc0504cc  jal         func_141330
    ctx->pc = 0x186E68u;
    SET_GPR_U32(ctx, 31, 0x186E70u);
    ctx->pc = 0x186E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186E68u;
            // 0x186e6c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141330u;
    if (runtime->hasFunction(0x141330u)) {
        auto targetFn = runtime->lookupFunction(0x141330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186E70u; }
        if (ctx->pc != 0x186E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRomLoad_0x141330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186E70u; }
        if (ctx->pc != 0x186E70u) { return; }
    }
    ctx->pc = 0x186E70u;
    // 0x186e70: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x186e70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x186e74: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x186e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x186e78: 0x2a43001d  slti        $v1, $s2, 0x1D
    ctx->pc = 0x186e78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x186e7c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x186e7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x186e80: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x186E80u;
    {
        const bool branch_taken_0x186e80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x186E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186E80u;
            // 0x186e84: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186e80) {
            ctx->pc = 0x186E68u;
            goto label_186e68;
        }
    }
    ctx->pc = 0x186E88u;
    // 0x186e88: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x186e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x186e8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x186e8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186e90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x186e90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186e94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186e94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186e98: 0x3e00008  jr          $ra
    ctx->pc = 0x186E98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186E98u;
            // 0x186e9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186E68u: goto label_186e68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x186EA0u;
}
