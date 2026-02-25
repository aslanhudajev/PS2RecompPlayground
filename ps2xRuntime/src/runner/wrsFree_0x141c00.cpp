#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsFree
// Address: 0x141c00 - 0x141e18
void wrsFree_0x141c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsFree_0x141c00");
#endif

    ctx->pc = 0x141c00u;

    // 0x141c00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x141c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x141c04: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141c08: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x141c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x141c0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x141c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x141c10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x141c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x141c14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x141c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x141c18: 0x8c227938  lw          $v0, 0x7938($at)
    ctx->pc = 0x141c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31032)));
    // 0x141c1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x141C1Cu;
    {
        const bool branch_taken_0x141c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141C1Cu;
            // 0x141c20: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141c1c) {
            ctx->pc = 0x141C30u;
            goto label_141c30;
        }
    }
    ctx->pc = 0x141C24u;
    // 0x141c24: 0xc050870  jal         func_1421C0
    ctx->pc = 0x141C24u;
    SET_GPR_U32(ctx, 31, 0x141C2Cu);
    ctx->pc = 0x1421C0u;
    if (runtime->hasFunction(0x1421C0u)) {
        auto targetFn = runtime->lookupFunction(0x1421C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141C2Cu; }
        if (ctx->pc != 0x141C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MallocLinkCheck_0x1421c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141C2Cu; }
        if (ctx->pc != 0x141C2Cu) { return; }
    }
    ctx->pc = 0x141C2Cu;
    // 0x141c2c: 0x0  nop
    ctx->pc = 0x141c2cu;
    // NOP
label_141c30:
    // 0x141c30: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141c34: 0x8c227a08  lw          $v0, 0x7A08($at)
    ctx->pc = 0x141c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31240)));
    // 0x141c38: 0x8e50fffc  lw          $s0, -0x4($s2)
    ctx->pc = 0x141c38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
    // 0x141c3c: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x141C3Cu;
    {
        const bool branch_taken_0x141c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x141C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141C3Cu;
            // 0x141c40: 0x2651ffe0  addiu       $s1, $s2, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141c3c) {
            ctx->pc = 0x141CE0u;
            goto label_141ce0;
        }
    }
    ctx->pc = 0x141C44u;
    // 0x141c44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x141c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141c48: 0xc050958  jal         func_142560
    ctx->pc = 0x141C48u;
    SET_GPR_U32(ctx, 31, 0x141C50u);
    ctx->pc = 0x141C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141C48u;
            // 0x141c4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142560u;
    if (runtime->hasFunction(0x142560u)) {
        auto targetFn = runtime->lookupFunction(0x142560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141C50u; }
        if (ctx->pc != 0x141C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignetureCheck_0x142560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141C50u; }
        if (ctx->pc != 0x141C50u) { return; }
    }
    ctx->pc = 0x141C50u;
    // 0x141c50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x141c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141c54: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x141C54u;
    {
        const bool branch_taken_0x141c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x141C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141C54u;
            // 0x141c58: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141c54) {
            ctx->pc = 0x141C68u;
            goto label_141c68;
        }
    }
    ctx->pc = 0x141C5Cu;
    // 0x141c5c: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x141C5Cu;
    {
        const bool branch_taken_0x141c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x141c5c) {
            ctx->pc = 0x141CC0u;
            goto label_141cc0;
        }
    }
    ctx->pc = 0x141C64u;
    // 0x141c64: 0x0  nop
    ctx->pc = 0x141c64u;
    // NOP
label_141c68:
    // 0x141c68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x141c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141c6c: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141c70: 0xc050870  jal         func_1421C0
    ctx->pc = 0x141C70u;
    SET_GPR_U32(ctx, 31, 0x141C78u);
    ctx->pc = 0x141C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141C70u;
            // 0x141c74: 0xac227a08  sw          $v0, 0x7A08($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 31240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1421C0u;
    if (runtime->hasFunction(0x1421C0u)) {
        auto targetFn = runtime->lookupFunction(0x1421C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141C78u; }
        if (ctx->pc != 0x141C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MallocLinkCheck_0x1421c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141C78u; }
        if (ctx->pc != 0x141C78u) { return; }
    }
    ctx->pc = 0x141C78u;
    // 0x141c78: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x141c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x141c7c: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141c80: 0x248407d0  addiu       $a0, $a0, 0x7D0
    ctx->pc = 0x141c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2000));
    // 0x141c84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x141c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141c88: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x141C88u;
    SET_GPR_U32(ctx, 31, 0x141C90u);
    ctx->pc = 0x141C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141C88u;
            // 0x141c8c: 0xac207a08  sw          $zero, 0x7A08($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 31240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141C90u; }
        if (ctx->pc != 0x141C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141C90u; }
        if (ctx->pc != 0x141C90u) { return; }
    }
    ctx->pc = 0x141C90u;
    // 0x141c90: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x141c90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x141c94: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x141C94u;
    SET_GPR_U32(ctx, 31, 0x141C9Cu);
    ctx->pc = 0x141C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141C94u;
            // 0x141c98: 0x24840800  addiu       $a0, $a0, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141C9Cu; }
        if (ctx->pc != 0x141C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141C9Cu; }
        if (ctx->pc != 0x141C9Cu) { return; }
    }
    ctx->pc = 0x141C9Cu;
    // 0x141c9c: 0xc0509b0  jal         func_1426C0
    ctx->pc = 0x141C9Cu;
    SET_GPR_U32(ctx, 31, 0x141CA4u);
    ctx->pc = 0x141CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141C9Cu;
            // 0x141ca0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1426C0u;
    if (runtime->hasFunction(0x1426C0u)) {
        auto targetFn = runtime->lookupFunction(0x1426C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141CA4u; }
        if (ctx->pc != 0x141CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MallocTopHeaderSearch_0x1426c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141CA4u; }
        if (ctx->pc != 0x141CA4u) { return; }
    }
    ctx->pc = 0x141CA4u;
    // 0x141ca4: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x141ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x141ca8: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x141CA8u;
    SET_GPR_U32(ctx, 31, 0x141CB0u);
    ctx->pc = 0x141CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141CA8u;
            // 0x141cac: 0x24840820  addiu       $a0, $a0, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141CB0u; }
        if (ctx->pc != 0x141CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141CB0u; }
        if (ctx->pc != 0x141CB0u) { return; }
    }
    ctx->pc = 0x141CB0u;
    // 0x141cb0: 0xc050994  jal         func_142650
    ctx->pc = 0x141CB0u;
    SET_GPR_U32(ctx, 31, 0x141CB8u);
    ctx->pc = 0x141CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141CB0u;
            // 0x141cb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142650u;
    if (runtime->hasFunction(0x142650u)) {
        auto targetFn = runtime->lookupFunction(0x142650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141CB8u; }
        if (ctx->pc != 0x141CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MallocBottomHeaderSearch_0x142650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141CB8u; }
        if (ctx->pc != 0x141CB8u) { return; }
    }
    ctx->pc = 0x141CB8u;
    // 0x141cb8: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x141CB8u;
    {
        const bool branch_taken_0x141cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141cb8) {
            ctx->pc = 0x141E00u;
            goto label_141e00;
        }
    }
    ctx->pc = 0x141CC0u;
label_141cc0:
    // 0x141cc0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x141cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x141cc4: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x141CC4u;
    {
        const bool branch_taken_0x141cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x141CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141CC4u;
            // 0x141cc8: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141cc4) {
            ctx->pc = 0x141CE0u;
            goto label_141ce0;
        }
    }
    ctx->pc = 0x141CCCu;
    // 0x141ccc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x141cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141cd0: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x141CD0u;
    SET_GPR_U32(ctx, 31, 0x141CD8u);
    ctx->pc = 0x141CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141CD0u;
            // 0x141cd4: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141CD8u; }
        if (ctx->pc != 0x141CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141CD8u; }
        if (ctx->pc != 0x141CD8u) { return; }
    }
    ctx->pc = 0x141CD8u;
    // 0x141cd8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x141CD8u;
    {
        const bool branch_taken_0x141cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141cd8) {
            ctx->pc = 0x141E00u;
            goto label_141e00;
        }
    }
    ctx->pc = 0x141CE0u;
label_141ce0:
    // 0x141ce0: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x141ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x141ce4: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x141CE4u;
    {
        const bool branch_taken_0x141ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x141CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141CE4u;
            // 0x141ce8: 0x3c010024  lui         $at, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141ce4) {
            ctx->pc = 0x141D78u;
            goto label_141d78;
        }
    }
    ctx->pc = 0x141CECu;
    // 0x141cec: 0x8c2279d8  lw          $v0, 0x79D8($at)
    ctx->pc = 0x141cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31192)));
    // 0x141cf0: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x141CF0u;
    {
        const bool branch_taken_0x141cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x141cf0) {
            ctx->pc = 0x141D00u;
            goto label_141d00;
        }
    }
    ctx->pc = 0x141CF8u;
    // 0x141cf8: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141cfc: 0xac2079f8  sw          $zero, 0x79F8($at)
    ctx->pc = 0x141cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31224), GPR_U32(ctx, 0));
label_141d00:
    // 0x141d00: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x141d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x141d04: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141d08: 0xac2279e0  sw          $v0, 0x79E0($at)
    ctx->pc = 0x141d08u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31200), GPR_U32(ctx, 2));
    // 0x141d0c: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141d10: 0x8c2279e0  lw          $v0, 0x79E0($at)
    ctx->pc = 0x141d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31200)));
    // 0x141d14: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x141d14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x141d18: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141d1c: 0x8c267a10  lw          $a2, 0x7A10($at)
    ctx->pc = 0x141d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31248)));
    // 0x141d20: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141d24: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x141d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x141d28: 0x8c2579e0  lw          $a1, 0x79E0($at)
    ctx->pc = 0x141d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31200)));
    // 0x141d2c: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141d30: 0x8c247a18  lw          $a0, 0x7A18($at)
    ctx->pc = 0x141d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31256)));
    // 0x141d34: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141d38: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x141d38u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x141d3c: 0x8c237a00  lw          $v1, 0x7A00($at)
    ctx->pc = 0x141d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31232)));
    // 0x141d40: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x141d40u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x141d44: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141d48: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x141d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x141d4c: 0x8c227930  lw          $v0, 0x7930($at)
    ctx->pc = 0x141d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31024)));
    // 0x141d50: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141d54: 0xac2479f0  sw          $a0, 0x79F0($at)
    ctx->pc = 0x141d54u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31216), GPR_U32(ctx, 4));
    // 0x141d58: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141d5c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x141D5Cu;
    {
        const bool branch_taken_0x141d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141D5Cu;
            // 0x141d60: 0xac237a00  sw          $v1, 0x7A00($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 31232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141d5c) {
            ctx->pc = 0x141DC0u;
            goto label_141dc0;
        }
    }
    ctx->pc = 0x141D64u;
    // 0x141d64: 0xc050a2c  jal         func_1428B0
    ctx->pc = 0x141D64u;
    SET_GPR_U32(ctx, 31, 0x141D6Cu);
    ctx->pc = 0x141D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141D64u;
            // 0x141d68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1428B0u;
    if (runtime->hasFunction(0x1428B0u)) {
        auto targetFn = runtime->lookupFunction(0x1428B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141D6Cu; }
        if (ctx->pc != 0x141D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsMallocWreckageFree_0x1428b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141D6Cu; }
        if (ctx->pc != 0x141D6Cu) { return; }
    }
    ctx->pc = 0x141D6Cu;
    // 0x141d6c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x141D6Cu;
    {
        const bool branch_taken_0x141d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141d6c) {
            ctx->pc = 0x141DC0u;
            goto label_141dc0;
        }
    }
    ctx->pc = 0x141D74u;
    // 0x141d74: 0x0  nop
    ctx->pc = 0x141d74u;
    // NOP
label_141d78:
    // 0x141d78: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x141d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x141d7c: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141d80: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x141d80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x141d84: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x141d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x141d88: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x141d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x141d8c: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x141d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x141d90: 0x8c227a00  lw          $v0, 0x7A00($at)
    ctx->pc = 0x141d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31232)));
    // 0x141d94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x141d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x141d98: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141d9c: 0xc05084c  jal         func_142130
    ctx->pc = 0x141D9Cu;
    SET_GPR_U32(ctx, 31, 0x141DA4u);
    ctx->pc = 0x141DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141D9Cu;
            // 0x141da0: 0xac227a00  sw          $v0, 0x7A00($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 31232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142130u;
    if (runtime->hasFunction(0x142130u)) {
        auto targetFn = runtime->lookupFunction(0x142130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141DA4u; }
        if (ctx->pc != 0x141DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MemoryBetweenSearch_0x142130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141DA4u; }
        if (ctx->pc != 0x141DA4u) { return; }
    }
    ctx->pc = 0x141DA4u;
    // 0x141da4: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141da8: 0x8c227930  lw          $v0, 0x7930($at)
    ctx->pc = 0x141da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31024)));
    // 0x141dac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x141DACu;
    {
        const bool branch_taken_0x141dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141DACu;
            // 0x141db0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141dac) {
            ctx->pc = 0x141DC0u;
            goto label_141dc0;
        }
    }
    ctx->pc = 0x141DB4u;
    // 0x141db4: 0xc050a2c  jal         func_1428B0
    ctx->pc = 0x141DB4u;
    SET_GPR_U32(ctx, 31, 0x141DBCu);
    ctx->pc = 0x1428B0u;
    if (runtime->hasFunction(0x1428B0u)) {
        auto targetFn = runtime->lookupFunction(0x1428B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141DBCu; }
        if (ctx->pc != 0x141DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsMallocWreckageFree_0x1428b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141DBCu; }
        if (ctx->pc != 0x141DBCu) { return; }
    }
    ctx->pc = 0x141DBCu;
    // 0x141dbc: 0x0  nop
    ctx->pc = 0x141dbcu;
    // NOP
label_141dc0:
    // 0x141dc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x141dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141dc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x141dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141dc8: 0xc04ed90  jal         func_13B640
    ctx->pc = 0x141DC8u;
    SET_GPR_U32(ctx, 31, 0x141DD0u);
    ctx->pc = 0x141DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141DC8u;
            // 0x141dcc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B640u;
    if (runtime->hasFunction(0x13B640u)) {
        auto targetFn = runtime->lookupFunction(0x13B640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141DD0u; }
        if (ctx->pc != 0x141DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x13b640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141DD0u; }
        if (ctx->pc != 0x141DD0u) { return; }
    }
    ctx->pc = 0x141DD0u;
    // 0x141dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x141dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141dd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x141dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141dd8: 0xc04ed90  jal         func_13B640
    ctx->pc = 0x141DD8u;
    SET_GPR_U32(ctx, 31, 0x141DE0u);
    ctx->pc = 0x141DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141DD8u;
            // 0x141ddc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B640u;
    if (runtime->hasFunction(0x13B640u)) {
        auto targetFn = runtime->lookupFunction(0x13B640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141DE0u; }
        if (ctx->pc != 0x141DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x13b640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141DE0u; }
        if (ctx->pc != 0x141DE0u) { return; }
    }
    ctx->pc = 0x141DE0u;
    // 0x141de0: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x141de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x141de4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x141de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141de8: 0xc04ed90  jal         func_13B640
    ctx->pc = 0x141DE8u;
    SET_GPR_U32(ctx, 31, 0x141DF0u);
    ctx->pc = 0x141DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141DE8u;
            // 0x141dec: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B640u;
    if (runtime->hasFunction(0x13B640u)) {
        auto targetFn = runtime->lookupFunction(0x13B640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141DF0u; }
        if (ctx->pc != 0x141DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x13b640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141DF0u; }
        if (ctx->pc != 0x141DF0u) { return; }
    }
    ctx->pc = 0x141DF0u;
    // 0x141df0: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x141df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x141df4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x141df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141df8: 0xc04ed90  jal         func_13B640
    ctx->pc = 0x141DF8u;
    SET_GPR_U32(ctx, 31, 0x141E00u);
    ctx->pc = 0x141DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141DF8u;
            // 0x141dfc: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B640u;
    if (runtime->hasFunction(0x13B640u)) {
        auto targetFn = runtime->lookupFunction(0x13B640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141E00u; }
        if (ctx->pc != 0x141E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x13b640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141E00u; }
        if (ctx->pc != 0x141E00u) { return; }
    }
    ctx->pc = 0x141E00u;
label_141e00:
    // 0x141e00: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x141e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x141e04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x141e04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141e08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x141e08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141e0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x141e0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141e10: 0x3e00008  jr          $ra
    ctx->pc = 0x141E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141E10u;
            // 0x141e14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x141C30u: goto label_141c30;
            case 0x141C68u: goto label_141c68;
            case 0x141CC0u: goto label_141cc0;
            case 0x141CE0u: goto label_141ce0;
            case 0x141D00u: goto label_141d00;
            case 0x141D78u: goto label_141d78;
            case 0x141DC0u: goto label_141dc0;
            case 0x141E00u: goto label_141e00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x141E18u;
}
