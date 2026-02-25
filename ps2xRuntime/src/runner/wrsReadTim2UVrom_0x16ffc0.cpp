#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsReadTim2UVrom
// Address: 0x16ffc0 - 0x170030
void wrsReadTim2UVrom_0x16ffc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsReadTim2UVrom_0x16ffc0");
#endif

    ctx->pc = 0x16ffc0u;

    // 0x16ffc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16ffc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16ffc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16ffc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16ffc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16ffc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16ffcc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16ffccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ffd0: 0xc0504cc  jal         func_141330
    ctx->pc = 0x16FFD0u;
    SET_GPR_U32(ctx, 31, 0x16FFD8u);
    ctx->pc = 0x16FFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FFD0u;
            // 0x16ffd4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141330u;
    if (runtime->hasFunction(0x141330u)) {
        auto targetFn = runtime->lookupFunction(0x141330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FFD8u; }
        if (ctx->pc != 0x16FFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRomLoad_0x141330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FFD8u; }
        if (ctx->pc != 0x16FFD8u) { return; }
    }
    ctx->pc = 0x16FFD8u;
    // 0x16ffd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16ffd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ffdc: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x16ffdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x16ffe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ffe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ffe4: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x16ffe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x16ffe8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x16ffe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x16ffec: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x16ffecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x16fff0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x16fff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x16fff4: 0x2442d500  addiu       $v0, $v0, -0x2B00
    ctx->pc = 0x16fff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956288));
    // 0x16fff8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16fff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16fffc: 0xc05bfbc  jal         func_16FEF0
    ctx->pc = 0x16FFFCu;
    SET_GPR_U32(ctx, 31, 0x170004u);
    ctx->pc = 0x170000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FFFCu;
            // 0x170000: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FEF0u;
    if (runtime->hasFunction(0x16FEF0u)) {
        auto targetFn = runtime->lookupFunction(0x16FEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170004u; }
        if (ctx->pc != 0x170004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setUVInfo_0x16fef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170004u; }
        if (ctx->pc != 0x170004u) { return; }
    }
    ctx->pc = 0x170004u;
    // 0x170004: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x170004u;
    {
        const bool branch_taken_0x170004 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x170008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170004u;
            // 0x170008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170004) {
            ctx->pc = 0x170018u;
            goto label_170018;
        }
    }
    ctx->pc = 0x17000Cu;
    // 0x17000c: 0xc050700  jal         func_141C00
    ctx->pc = 0x17000Cu;
    SET_GPR_U32(ctx, 31, 0x170014u);
    ctx->pc = 0x141C00u;
    if (runtime->hasFunction(0x141C00u)) {
        auto targetFn = runtime->lookupFunction(0x141C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170014u; }
        if (ctx->pc != 0x170014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFree_0x141c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170014u; }
        if (ctx->pc != 0x170014u) { return; }
    }
    ctx->pc = 0x170014u;
    // 0x170014: 0x0  nop
    ctx->pc = 0x170014u;
    // NOP
label_170018:
    // 0x170018: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x170018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17001c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17001cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170020: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170024: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x170024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170028: 0x3e00008  jr          $ra
    ctx->pc = 0x170028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17002Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170028u;
            // 0x17002c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170018u: goto label_170018;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170030u;
}
