#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: TexChangePlayer
// Address: 0x18d820 - 0x18d888
void TexChangePlayer_0x18d820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("TexChangePlayer_0x18d820");
#endif

    ctx->pc = 0x18d820u;

    // 0x18d820: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x18d820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x18d824: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18d824u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18d828: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18d828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18d82c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18d82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18d830: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18d830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18d834: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x18d834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x18d838: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x18d838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x18d83c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18d83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18d840: 0x2442a4e0  addiu       $v0, $v0, -0x5B20
    ctx->pc = 0x18d840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943968));
    // 0x18d844: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18d844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18d848: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18d848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d84c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d850: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x18D850u;
    SET_GPR_U32(ctx, 31, 0x18D858u);
    ctx->pc = 0x18D854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D850u;
            // 0x18d854: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D858u; }
        if (ctx->pc != 0x18D858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D858u; }
        if (ctx->pc != 0x18D858u) { return; }
    }
    ctx->pc = 0x18D858u;
    // 0x18d858: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x18d858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x18d85c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x18d85cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x18d860: 0x2463a4d0  addiu       $v1, $v1, -0x5B30
    ctx->pc = 0x18d860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943952));
    // 0x18d864: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18d864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d868: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18d868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18d86c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x18d86cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18d870: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x18D870u;
    SET_GPR_U32(ctx, 31, 0x18D878u);
    ctx->pc = 0x18D874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D870u;
            // 0x18d874: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D878u; }
        if (ctx->pc != 0x18D878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D878u; }
        if (ctx->pc != 0x18D878u) { return; }
    }
    ctx->pc = 0x18D878u;
    // 0x18d878: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18d878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d87c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18d87cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d880: 0x3e00008  jr          $ra
    ctx->pc = 0x18D880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D880u;
            // 0x18d884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18D888u;
}
