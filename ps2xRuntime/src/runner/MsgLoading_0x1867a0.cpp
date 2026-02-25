#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MsgLoading
// Address: 0x1867a0 - 0x18681c
void MsgLoading_0x1867a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MsgLoading_0x1867a0");
#endif

    ctx->pc = 0x1867a0u;

    // 0x1867a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1867a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1867a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1867a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1867a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1867a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1867ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1867acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1867b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1867b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1867b4: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1867B4u;
    SET_GPR_U32(ctx, 31, 0x1867BCu);
    ctx->pc = 0x1867B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1867B4u;
            // 0x1867b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1867BCu; }
        if (ctx->pc != 0x1867BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1867BCu; }
        if (ctx->pc != 0x1867BCu) { return; }
    }
    ctx->pc = 0x1867BCu;
    // 0x1867bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1867bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1867c0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1867c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1867c4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1867c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1867c8: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x1867c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x1867cc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1867ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1867d0: 0x2442b640  addiu       $v0, $v0, -0x49C0
    ctx->pc = 0x1867d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948416));
    // 0x1867d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1867d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1867d8: 0x8c24b638  lw          $a0, -0x49C8($at)
    ctx->pc = 0x1867d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948408)));
    // 0x1867dc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1867dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1867e0: 0x24a5b630  addiu       $a1, $a1, -0x49D0
    ctx->pc = 0x1867e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948400));
    // 0x1867e4: 0xc07bbea  jal         func_1EEFA8
    ctx->pc = 0x1867E4u;
    SET_GPR_U32(ctx, 31, 0x1867ECu);
    ctx->pc = 0x1867E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1867E4u;
            // 0x1867e8: 0x24075000  addiu       $a3, $zero, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EEFA8u;
    if (runtime->hasFunction(0x1EEFA8u)) {
        auto targetFn = runtime->lookupFunction(0x1EEFA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1867ECu; }
        if (ctx->pc != 0x1867ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        uncompress_0x1eefa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1867ECu; }
        if (ctx->pc != 0x1867ECu) { return; }
    }
    ctx->pc = 0x1867ECu;
    // 0x1867ec: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1867ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1867f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1867f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1867f4: 0x8c22b638  lw          $v0, -0x49C8($at)
    ctx->pc = 0x1867f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948408)));
    // 0x1867f8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1867f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1867fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1867fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186800: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x186800u;
    SET_GPR_U32(ctx, 31, 0x186808u);
    ctx->pc = 0x186804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186800u;
            // 0x186804: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186808u; }
        if (ctx->pc != 0x186808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186808u; }
        if (ctx->pc != 0x186808u) { return; }
    }
    ctx->pc = 0x186808u;
    // 0x186808: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x186808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18680c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18680cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186810: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186814: 0x3e00008  jr          $ra
    ctx->pc = 0x186814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186814u;
            // 0x186818: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18681Cu;
}
