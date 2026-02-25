#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsGpKickChain
// Address: 0x170970 - 0x1709b0
void wrsGpKickChain_0x170970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsGpKickChain_0x170970");
#endif

    ctx->pc = 0x170970u;

    // 0x170970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x170970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x170974: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x170974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x170978: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x170978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17097c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17097cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170980: 0xc04bbb8  jal         func_12EEE0
    ctx->pc = 0x170980u;
    SET_GPR_U32(ctx, 31, 0x170988u);
    ctx->pc = 0x170984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170980u;
            // 0x170984: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EEE0u;
    if (runtime->hasFunction(0x12EEE0u)) {
        auto targetFn = runtime->lookupFunction(0x12EEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170988u; }
        if (ctx->pc != 0x170988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x12eee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170988u; }
        if (ctx->pc != 0x170988u) { return; }
    }
    ctx->pc = 0x170988u;
    // 0x170988: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x170988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x17098c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x17098cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x170990: 0x24423940  addiu       $v0, $v0, 0x3940
    ctx->pc = 0x170990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14656));
    // 0x170994: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x170994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x170998: 0xc041be0  jal         func_106F80
    ctx->pc = 0x170998u;
    SET_GPR_U32(ctx, 31, 0x1709A0u);
    ctx->pc = 0x17099Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170998u;
            // 0x17099c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1709A0u; }
        if (ctx->pc != 0x1709A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpKickChain_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1709A0u; }
        if (ctx->pc != 0x1709A0u) { return; }
    }
    ctx->pc = 0x1709A0u;
    // 0x1709a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1709a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1709a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1709a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1709a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1709A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1709ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1709A8u;
            // 0x1709ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1709B0u;
}
