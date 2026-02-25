#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: PlayerSelectMain
// Address: 0x15bef0 - 0x15c5ac
void PlayerSelectMain_0x15bef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("PlayerSelectMain_0x15bef0");
#endif

    ctx->pc = 0x15bef0u;

    // 0x15bef0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15bef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x15bef4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x15bef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x15bef8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15bef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15befc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15befcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15bf00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15bf00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15bf04: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x15bf04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15bf08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15bf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15bf0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15bf0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15bf10: 0xc05766c  jal         func_15D9B0
    ctx->pc = 0x15BF10u;
    SET_GPR_U32(ctx, 31, 0x15BF18u);
    ctx->pc = 0x15BF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BF10u;
            // 0x15bf14: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D9B0u;
    if (runtime->hasFunction(0x15D9B0u)) {
        auto targetFn = runtime->lookupFunction(0x15D9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BF18u; }
        if (ctx->pc != 0x15BF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayerSelectInit_0x15d9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BF18u; }
        if (ctx->pc != 0x15BF18u) { return; }
    }
    ctx->pc = 0x15BF18u;
    // 0x15bf18: 0xc063760  jal         func_18DD80
    ctx->pc = 0x15BF18u;
    SET_GPR_U32(ctx, 31, 0x15BF20u);
    ctx->pc = 0x18DD80u;
    if (runtime->hasFunction(0x18DD80u)) {
        auto targetFn = runtime->lookupFunction(0x18DD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BF20u; }
        if (ctx->pc != 0x15BF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        JikiInit_0x18dd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BF20u; }
        if (ctx->pc != 0x15BF20u) { return; }
    }
    ctx->pc = 0x15BF20u;
    // 0x15bf20: 0xc057350  jal         func_15CD40
    ctx->pc = 0x15BF20u;
    SET_GPR_U32(ctx, 31, 0x15BF28u);
    ctx->pc = 0x15CD40u;
    if (runtime->hasFunction(0x15CD40u)) {
        auto targetFn = runtime->lookupFunction(0x15CD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BF28u; }
        if (ctx->pc != 0x15BF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CharaselParamInit_0x15cd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BF28u; }
        if (ctx->pc != 0x15BF28u) { return; }
    }
    ctx->pc = 0x15BF28u;
    // 0x15bf28: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15bf28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15bf2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15bf2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bf30: 0xac2035b0  sw          $zero, 0x35B0($at)
    ctx->pc = 0x15bf30u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13744), GPR_U32(ctx, 0));
    // 0x15bf34: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15bf34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bf38: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15bf38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15bf3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15bf3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bf40: 0xac2035a8  sw          $zero, 0x35A8($at)
    ctx->pc = 0x15bf40u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13736), GPR_U32(ctx, 0));
    // 0x15bf44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15bf44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bf48: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x15BF48u;
    SET_GPR_U32(ctx, 31, 0x15BF50u);
    ctx->pc = 0x15BF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BF48u;
            // 0x15bf4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BF50u; }
        if (ctx->pc != 0x15BF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BF50u; }
        if (ctx->pc != 0x15BF50u) { return; }
    }
    ctx->pc = 0x15BF50u;
    // 0x15bf50: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15BF50u;
    {
        const bool branch_taken_0x15bf50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BF50u;
            // 0x15bf54: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bf50) {
            ctx->pc = 0x15BF80u;
            goto label_15bf80;
        }
    }
    ctx->pc = 0x15BF58u;
    // 0x15bf58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15bf58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bf5c: 0x8c263578  lw          $a2, 0x3578($at)
    ctx->pc = 0x15bf5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13688)));
    // 0x15bf60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15bf60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bf64: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15bf64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15bf68: 0x8c273588  lw          $a3, 0x3588($at)
    ctx->pc = 0x15bf68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13704)));
    // 0x15bf6c: 0xc0635a0  jal         func_18D680
    ctx->pc = 0x15BF6Cu;
    SET_GPR_U32(ctx, 31, 0x15BF74u);
    ctx->pc = 0x15BF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BF6Cu;
            // 0x15bf70: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D680u;
    if (runtime->hasFunction(0x18D680u)) {
        auto targetFn = runtime->lookupFunction(0x18D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BF74u; }
        if (ctx->pc != 0x15BF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePlayer_0x18d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BF74u; }
        if (ctx->pc != 0x15BF74u) { return; }
    }
    ctx->pc = 0x15BF74u;
    // 0x15bf74: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x15bf74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bf78: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15bf78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15bf7c: 0xac3335b0  sw          $s3, 0x35B0($at)
    ctx->pc = 0x15bf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13744), GPR_U32(ctx, 19));
label_15bf80:
    // 0x15bf80: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x15BF80u;
    SET_GPR_U32(ctx, 31, 0x15BF88u);
    ctx->pc = 0x15BF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BF80u;
            // 0x15bf84: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BF88u; }
        if (ctx->pc != 0x15BF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BF88u; }
        if (ctx->pc != 0x15BF88u) { return; }
    }
    ctx->pc = 0x15BF88u;
    // 0x15bf88: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15BF88u;
    {
        const bool branch_taken_0x15bf88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BF88u;
            // 0x15bf8c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bf88) {
            ctx->pc = 0x15BFB8u;
            goto label_15bfb8;
        }
    }
    ctx->pc = 0x15BF90u;
    // 0x15bf90: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15bf90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15bf94: 0x8c263580  lw          $a2, 0x3580($at)
    ctx->pc = 0x15bf94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13696)));
    // 0x15bf98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15bf98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bf9c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15bf9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15bfa0: 0x8c279ce0  lw          $a3, -0x6320($at)
    ctx->pc = 0x15bfa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941920)));
    // 0x15bfa4: 0xc0635a0  jal         func_18D680
    ctx->pc = 0x15BFA4u;
    SET_GPR_U32(ctx, 31, 0x15BFACu);
    ctx->pc = 0x15BFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BFA4u;
            // 0x15bfa8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D680u;
    if (runtime->hasFunction(0x18D680u)) {
        auto targetFn = runtime->lookupFunction(0x18D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BFACu; }
        if (ctx->pc != 0x15BFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePlayer_0x18d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BFACu; }
        if (ctx->pc != 0x15BFACu) { return; }
    }
    ctx->pc = 0x15BFACu;
    // 0x15bfac: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x15bfacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15bfb0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15bfb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15bfb4: 0xac3235a8  sw          $s2, 0x35A8($at)
    ctx->pc = 0x15bfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13736), GPR_U32(ctx, 18));
label_15bfb8:
    // 0x15bfb8: 0xc0607ac  jal         func_181EB0
    ctx->pc = 0x15BFB8u;
    SET_GPR_U32(ctx, 31, 0x15BFC0u);
    ctx->pc = 0x181EB0u;
    if (runtime->hasFunction(0x181EB0u)) {
        auto targetFn = runtime->lookupFunction(0x181EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BFC0u; }
        if (ctx->pc != 0x15BFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderInit_0x181eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BFC0u; }
        if (ctx->pc != 0x15BFC0u) { return; }
    }
    ctx->pc = 0x15BFC0u;
    // 0x15bfc0: 0xc060718  jal         func_181C60
    ctx->pc = 0x15BFC0u;
    SET_GPR_U32(ctx, 31, 0x15BFC8u);
    ctx->pc = 0x15BFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BFC0u;
            // 0x15bfc4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BFC8u; }
        if (ctx->pc != 0x15BFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BFC8u; }
        if (ctx->pc != 0x15BFC8u) { return; }
    }
    ctx->pc = 0x15BFC8u;
    // 0x15bfc8: 0xc05d004  jal         func_174010
    ctx->pc = 0x15BFC8u;
    SET_GPR_U32(ctx, 31, 0x15BFD0u);
    ctx->pc = 0x15BFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BFC8u;
            // 0x15bfcc: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174010u;
    if (runtime->hasFunction(0x174010u)) {
        auto targetFn = runtime->lookupFunction(0x174010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BFD0u; }
        if (ctx->pc != 0x15BFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_bgm_0x174010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BFD0u; }
        if (ctx->pc != 0x15BFD0u) { return; }
    }
    ctx->pc = 0x15BFD0u;
label_15bfd0:
    // 0x15bfd0: 0xc050af4  jal         func_142BD0
    ctx->pc = 0x15BFD0u;
    SET_GPR_U32(ctx, 31, 0x15BFD8u);
    ctx->pc = 0x142BD0u;
    if (runtime->hasFunction(0x142BD0u)) {
        auto targetFn = runtime->lookupFunction(0x142BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BFD8u; }
        if (ctx->pc != 0x15BFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsLeaveTask_0x142bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BFD8u; }
        if (ctx->pc != 0x15BFD8u) { return; }
    }
    ctx->pc = 0x15BFD8u;
    // 0x15bfd8: 0xc06069c  jal         func_181A70
    ctx->pc = 0x15BFD8u;
    SET_GPR_U32(ctx, 31, 0x15BFE0u);
    ctx->pc = 0x181A70u;
    if (runtime->hasFunction(0x181A70u)) {
        auto targetFn = runtime->lookupFunction(0x181A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BFE0u; }
        if (ctx->pc != 0x15BFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderRenderFunction_0x181a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BFE0u; }
        if (ctx->pc != 0x15BFE0u) { return; }
    }
    ctx->pc = 0x15BFE0u;
    // 0x15bfe0: 0xc0606bc  jal         func_181AF0
    ctx->pc = 0x15BFE0u;
    SET_GPR_U32(ctx, 31, 0x15BFE8u);
    ctx->pc = 0x181AF0u;
    if (runtime->hasFunction(0x181AF0u)) {
        auto targetFn = runtime->lookupFunction(0x181AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BFE8u; }
        if (ctx->pc != 0x15BFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderMoveFunction_0x181af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BFE8u; }
        if (ctx->pc != 0x15BFE8u) { return; }
    }
    ctx->pc = 0x15BFE8u;
    // 0x15bfe8: 0xc057620  jal         func_15D880
    ctx->pc = 0x15BFE8u;
    SET_GPR_U32(ctx, 31, 0x15BFF0u);
    ctx->pc = 0x15D880u;
    if (runtime->hasFunction(0x15D880u)) {
        auto targetFn = runtime->lookupFunction(0x15D880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BFF0u; }
        if (ctx->pc != 0x15BFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AnimateRGB_0x15d880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BFF0u; }
        if (ctx->pc != 0x15BFF0u) { return; }
    }
    ctx->pc = 0x15BFF0u;
    // 0x15bff0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15bff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15bff4: 0x8c2235b0  lw          $v0, 0x35B0($at)
    ctx->pc = 0x15bff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13744)));
    // 0x15bff8: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x15bff8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x15bffc: 0x1020009a  beqz        $at, . + 4 + (0x9A << 2)
    ctx->pc = 0x15BFFCu;
    {
        const bool branch_taken_0x15bffc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BFFCu;
            // 0x15c000: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bffc) {
            ctx->pc = 0x15C268u;
            goto label_15c268;
        }
    }
    ctx->pc = 0x15C004u;
    // 0x15c004: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15c004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15c008: 0x24630fe0  addiu       $v1, $v1, 0xFE0
    ctx->pc = 0x15c008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4064));
    // 0x15c00c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15c010: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15c010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15c014: 0x400008  jr          $v0
    ctx->pc = 0x15C014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15C020u: goto label_15c020;
            case 0x15C080u: goto label_15c080;
            case 0x15C0B8u: goto label_15c0b8;
            case 0x15C100u: goto label_15c100;
            case 0x15C168u: goto label_15c168;
            case 0x15C1A0u: goto label_15c1a0;
            case 0x15C200u: goto label_15c200;
            case 0x15C238u: goto label_15c238;
            case 0x15C268u: goto label_15c268;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15C01Cu;
    // 0x15c01c: 0x0  nop
    ctx->pc = 0x15c01cu;
    // NOP
label_15c020:
    // 0x15c020: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c024: 0x8c2223b0  lw          $v0, 0x23B0($at)
    ctx->pc = 0x15c024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9136)));
    // 0x15c028: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x15C028u;
    {
        const bool branch_taken_0x15c028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C028u;
            // 0x15c02c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c028) {
            ctx->pc = 0x15C070u;
            goto label_15c070;
        }
    }
    ctx->pc = 0x15C030u;
    // 0x15c030: 0xc05d110  jal         func_174440
    ctx->pc = 0x15C030u;
    SET_GPR_U32(ctx, 31, 0x15C038u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C038u; }
        if (ctx->pc != 0x15C038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C038u; }
        if (ctx->pc != 0x15C038u) { return; }
    }
    ctx->pc = 0x15C038u;
    // 0x15c038: 0xc056f8c  jal         func_15BE30
    ctx->pc = 0x15C038u;
    SET_GPR_U32(ctx, 31, 0x15C040u);
    ctx->pc = 0x15C03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C038u;
            // 0x15c03c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE30u;
    if (runtime->hasFunction(0x15BE30u)) {
        auto targetFn = runtime->lookupFunction(0x15BE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C040u; }
        if (ctx->pc != 0x15C040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setGamePlayerAvtive_0x15be30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C040u; }
        if (ctx->pc != 0x15C040u) { return; }
    }
    ctx->pc = 0x15C040u;
    // 0x15c040: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c044: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15c044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c048: 0x8c263578  lw          $a2, 0x3578($at)
    ctx->pc = 0x15c048u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13688)));
    // 0x15c04c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c050: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c054: 0x8c273588  lw          $a3, 0x3588($at)
    ctx->pc = 0x15c054u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13704)));
    // 0x15c058: 0xc0635a0  jal         func_18D680
    ctx->pc = 0x15C058u;
    SET_GPR_U32(ctx, 31, 0x15C060u);
    ctx->pc = 0x15C05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C058u;
            // 0x15c05c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D680u;
    if (runtime->hasFunction(0x18D680u)) {
        auto targetFn = runtime->lookupFunction(0x18D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C060u; }
        if (ctx->pc != 0x15C060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePlayer_0x18d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C060u; }
        if (ctx->pc != 0x15C060u) { return; }
    }
    ctx->pc = 0x15C060u;
    // 0x15c060: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x15c060u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c064: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c068: 0xac3335b0  sw          $s3, 0x35B0($at)
    ctx->pc = 0x15c068u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13744), GPR_U32(ctx, 19));
    // 0x15c06c: 0x0  nop
    ctx->pc = 0x15c06cu;
    // NOP
label_15c070:
    // 0x15c070: 0xc057430  jal         func_15D0C0
    ctx->pc = 0x15C070u;
    SET_GPR_U32(ctx, 31, 0x15C078u);
    ctx->pc = 0x15C074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C070u;
            // 0x15c074: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D0C0u;
    if (runtime->hasFunction(0x15D0C0u)) {
        auto targetFn = runtime->lookupFunction(0x15D0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C078u; }
        if (ctx->pc != 0x15C078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawPressStart_0x15d0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C078u; }
        if (ctx->pc != 0x15C078u) { return; }
    }
    ctx->pc = 0x15C078u;
    // 0x15c078: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x15C078u;
    {
        const bool branch_taken_0x15c078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c078) {
            ctx->pc = 0x15C268u;
            goto label_15c268;
        }
    }
    ctx->pc = 0x15C080u;
label_15c080:
    // 0x15c080: 0xc057298  jal         func_15CA60
    ctx->pc = 0x15C080u;
    SET_GPR_U32(ctx, 31, 0x15C088u);
    ctx->pc = 0x15C084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C080u;
            // 0x15c084: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CA60u;
    if (runtime->hasFunction(0x15CA60u)) {
        auto targetFn = runtime->lookupFunction(0x15CA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C088u; }
        if (ctx->pc != 0x15C088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MachineSel_0x15ca60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C088u; }
        if (ctx->pc != 0x15C088u) { return; }
    }
    ctx->pc = 0x15C088u;
    // 0x15c088: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x15c088u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c08c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15c08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c090: 0xc057230  jal         func_15C8C0
    ctx->pc = 0x15C090u;
    SET_GPR_U32(ctx, 31, 0x15C098u);
    ctx->pc = 0x15C094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C090u;
            // 0x15c094: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C8C0u;
    if (runtime->hasFunction(0x15C8C0u)) {
        auto targetFn = runtime->lookupFunction(0x15C8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C098u; }
        if (ctx->pc != 0x15C098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawMachineSel_0x15c8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C098u; }
        if (ctx->pc != 0x15C098u) { return; }
    }
    ctx->pc = 0x15C098u;
    // 0x15c098: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15c098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c09c: 0x16a20072  bne         $s5, $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x15C09Cu;
    {
        const bool branch_taken_0x15c09c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x15C0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C09Cu;
            // 0x15c0a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c09c) {
            ctx->pc = 0x15C268u;
            goto label_15c268;
        }
    }
    ctx->pc = 0x15C0A4u;
    // 0x15c0a4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c0a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c0a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15c0a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c0ac: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x15C0ACu;
    {
        const bool branch_taken_0x15c0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C0ACu;
            // 0x15c0b0: 0xac2235b0  sw          $v0, 0x35B0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13744), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c0ac) {
            ctx->pc = 0x15C268u;
            goto label_15c268;
        }
    }
    ctx->pc = 0x15C0B4u;
    // 0x15c0b4: 0x0  nop
    ctx->pc = 0x15c0b4u;
    // NOP
label_15c0b8:
    // 0x15c0b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15c0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c0bc: 0xc062b88  jal         func_18AE20
    ctx->pc = 0x15C0BCu;
    SET_GPR_U32(ctx, 31, 0x15C0C4u);
    ctx->pc = 0x15C0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C0BCu;
            // 0x15c0c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AE20u;
    if (runtime->hasFunction(0x18AE20u)) {
        auto targetFn = runtime->lookupFunction(0x18AE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C0C4u; }
        if (ctx->pc != 0x15C0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setPlayerState_0x18ae20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C0C4u; }
        if (ctx->pc != 0x15C0C4u) { return; }
    }
    ctx->pc = 0x15C0C4u;
    // 0x15c0c4: 0xc057288  jal         func_15CA20
    ctx->pc = 0x15C0C4u;
    SET_GPR_U32(ctx, 31, 0x15C0CCu);
    ctx->pc = 0x15C0C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C0C4u;
            // 0x15c0c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CA20u;
    if (runtime->hasFunction(0x15CA20u)) {
        auto targetFn = runtime->lookupFunction(0x15CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C0CCu; }
        if (ctx->pc != 0x15C0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawMachine_0x15ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C0CCu; }
        if (ctx->pc != 0x15C0CCu) { return; }
    }
    ctx->pc = 0x15C0CCu;
    // 0x15c0cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15c0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c0d0: 0xc057230  jal         func_15C8C0
    ctx->pc = 0x15C0D0u;
    SET_GPR_U32(ctx, 31, 0x15C0D8u);
    ctx->pc = 0x15C0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C0D0u;
            // 0x15c0d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C8C0u;
    if (runtime->hasFunction(0x15C8C0u)) {
        auto targetFn = runtime->lookupFunction(0x15C8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C0D8u; }
        if (ctx->pc != 0x15C0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawMachineSel_0x15c8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C0D8u; }
        if (ctx->pc != 0x15C0D8u) { return; }
    }
    ctx->pc = 0x15C0D8u;
    // 0x15c0d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x15c0d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c0dc: 0x2841003d  slti        $at, $v0, 0x3D
    ctx->pc = 0x15c0dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x15c0e0: 0x14200061  bnez        $at, . + 4 + (0x61 << 2)
    ctx->pc = 0x15C0E0u;
    {
        const bool branch_taken_0x15c0e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C0E0u;
            // 0x15c0e4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c0e0) {
            ctx->pc = 0x15C268u;
            goto label_15c268;
        }
    }
    ctx->pc = 0x15C0E8u;
    // 0x15c0e8: 0xc057420  jal         func_15D080
    ctx->pc = 0x15C0E8u;
    SET_GPR_U32(ctx, 31, 0x15C0F0u);
    ctx->pc = 0x15C0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C0E8u;
            // 0x15c0ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D080u;
    if (runtime->hasFunction(0x15D080u)) {
        auto targetFn = runtime->lookupFunction(0x15D080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C0F0u; }
        if (ctx->pc != 0x15C0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetCharRGB_0x15d080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C0F0u; }
        if (ctx->pc != 0x15C0F0u) { return; }
    }
    ctx->pc = 0x15C0F0u;
    // 0x15c0f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15c0f4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c0f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c0f8: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x15C0F8u;
    {
        const bool branch_taken_0x15c0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C0F8u;
            // 0x15c0fc: 0xac2235b0  sw          $v0, 0x35B0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13744), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c0f8) {
            ctx->pc = 0x15C268u;
            goto label_15c268;
        }
    }
    ctx->pc = 0x15C100u;
label_15c100:
    // 0x15c100: 0xc0571bc  jal         func_15C6F0
    ctx->pc = 0x15C100u;
    SET_GPR_U32(ctx, 31, 0x15C108u);
    ctx->pc = 0x15C104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C100u;
            // 0x15c104: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C6F0u;
    if (runtime->hasFunction(0x15C6F0u)) {
        auto targetFn = runtime->lookupFunction(0x15C6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C108u; }
        if (ctx->pc != 0x15C108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CharaSel_0x15c6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C108u; }
        if (ctx->pc != 0x15C108u) { return; }
    }
    ctx->pc = 0x15C108u;
    // 0x15c108: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x15c108u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c10c: 0xc057288  jal         func_15CA20
    ctx->pc = 0x15C10Cu;
    SET_GPR_U32(ctx, 31, 0x15C114u);
    ctx->pc = 0x15C110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C10Cu;
            // 0x15c110: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CA20u;
    if (runtime->hasFunction(0x15CA20u)) {
        auto targetFn = runtime->lookupFunction(0x15CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C114u; }
        if (ctx->pc != 0x15C114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawMachine_0x15ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C114u; }
        if (ctx->pc != 0x15C114u) { return; }
    }
    ctx->pc = 0x15C114u;
    // 0x15c114: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15c114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c118: 0xc05716c  jal         func_15C5B0
    ctx->pc = 0x15C118u;
    SET_GPR_U32(ctx, 31, 0x15C120u);
    ctx->pc = 0x15C11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C118u;
            // 0x15c11c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C5B0u;
    if (runtime->hasFunction(0x15C5B0u)) {
        auto targetFn = runtime->lookupFunction(0x15C5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C120u; }
        if (ctx->pc != 0x15C120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawCharaSel_0x15c5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C120u; }
        if (ctx->pc != 0x15C120u) { return; }
    }
    ctx->pc = 0x15C120u;
    // 0x15c120: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15c120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c124: 0x16a50006  bne         $s5, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15C124u;
    {
        const bool branch_taken_0x15c124 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 5));
        ctx->pc = 0x15C128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C124u;
            // 0x15c128: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c124) {
            ctx->pc = 0x15C140u;
            goto label_15c140;
        }
    }
    ctx->pc = 0x15C12Cu;
    // 0x15c12c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c130: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15c130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c134: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x15C134u;
    {
        const bool branch_taken_0x15c134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C134u;
            // 0x15c138: 0xac2235b0  sw          $v0, 0x35B0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13744), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c134) {
            ctx->pc = 0x15C268u;
            goto label_15c268;
        }
    }
    ctx->pc = 0x15C13Cu;
    // 0x15c13c: 0x0  nop
    ctx->pc = 0x15c13cu;
    // NOP
label_15c140:
    // 0x15c140: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15c140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15c144: 0x16a20048  bne         $s5, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x15C144u;
    {
        const bool branch_taken_0x15c144 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x15C148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C144u;
            // 0x15c148: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c144) {
            ctx->pc = 0x15C268u;
            goto label_15c268;
        }
    }
    ctx->pc = 0x15C14Cu;
    // 0x15c14c: 0xc062b88  jal         func_18AE20
    ctx->pc = 0x15C14Cu;
    SET_GPR_U32(ctx, 31, 0x15C154u);
    ctx->pc = 0x18AE20u;
    if (runtime->hasFunction(0x18AE20u)) {
        auto targetFn = runtime->lookupFunction(0x18AE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C154u; }
        if (ctx->pc != 0x15C154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setPlayerState_0x18ae20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C154u; }
        if (ctx->pc != 0x15C154u) { return; }
    }
    ctx->pc = 0x15C154u;
    // 0x15c154: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15c154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c158: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c15c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x15C15Cu;
    {
        const bool branch_taken_0x15c15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C15Cu;
            // 0x15c160: 0xac2235b0  sw          $v0, 0x35B0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13744), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c15c) {
            ctx->pc = 0x15C268u;
            goto label_15c268;
        }
    }
    ctx->pc = 0x15C164u;
    // 0x15c164: 0x0  nop
    ctx->pc = 0x15c164u;
    // NOP
label_15c168:
    // 0x15c168: 0xc057288  jal         func_15CA20
    ctx->pc = 0x15C168u;
    SET_GPR_U32(ctx, 31, 0x15C170u);
    ctx->pc = 0x15C16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C168u;
            // 0x15c16c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CA20u;
    if (runtime->hasFunction(0x15CA20u)) {
        auto targetFn = runtime->lookupFunction(0x15CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C170u; }
        if (ctx->pc != 0x15C170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawMachine_0x15ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C170u; }
        if (ctx->pc != 0x15C170u) { return; }
    }
    ctx->pc = 0x15C170u;
    // 0x15c170: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15c170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c174: 0xc05716c  jal         func_15C5B0
    ctx->pc = 0x15C174u;
    SET_GPR_U32(ctx, 31, 0x15C17Cu);
    ctx->pc = 0x15C178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C174u;
            // 0x15c178: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C5B0u;
    if (runtime->hasFunction(0x15C5B0u)) {
        auto targetFn = runtime->lookupFunction(0x15C5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C17Cu; }
        if (ctx->pc != 0x15C17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawCharaSel_0x15c5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C17Cu; }
        if (ctx->pc != 0x15C17Cu) { return; }
    }
    ctx->pc = 0x15C17Cu;
    // 0x15c17c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x15c17cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c180: 0x2841003d  slti        $at, $v0, 0x3D
    ctx->pc = 0x15c180u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x15c184: 0x14200038  bnez        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x15C184u;
    {
        const bool branch_taken_0x15c184 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C184u;
            // 0x15c188: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c184) {
            ctx->pc = 0x15C268u;
            goto label_15c268;
        }
    }
    ctx->pc = 0x15C18Cu;
    // 0x15c18c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x15c18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15c190: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c194: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x15C194u;
    {
        const bool branch_taken_0x15c194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C194u;
            // 0x15c198: 0xac2235b0  sw          $v0, 0x35B0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13744), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c194) {
            ctx->pc = 0x15C268u;
            goto label_15c268;
        }
    }
    ctx->pc = 0x15C19Cu;
    // 0x15c19c: 0x0  nop
    ctx->pc = 0x15c19cu;
    // NOP
label_15c1a0:
    // 0x15c1a0: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x15C1A0u;
    {
        const bool branch_taken_0x15c1a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C1A0u;
            // 0x15c1a4: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c1a0) {
            ctx->pc = 0x15C1C8u;
            goto label_15c1c8;
        }
    }
    ctx->pc = 0x15C1A8u;
    // 0x15c1a8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x15c1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15c1ac: 0x8c2335a8  lw          $v1, 0x35A8($at)
    ctx->pc = 0x15c1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13736)));
    // 0x15c1b0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15C1B0u;
    {
        const bool branch_taken_0x15c1b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15C1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C1B0u;
            // 0x15c1b4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c1b0) {
            ctx->pc = 0x15C1E0u;
            goto label_15c1e0;
        }
    }
    ctx->pc = 0x15C1B8u;
    // 0x15c1b8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c1b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c1bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15C1BCu;
    {
        const bool branch_taken_0x15c1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C1BCu;
            // 0x15c1c0: 0xac2235b0  sw          $v0, 0x35B0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13744), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c1bc) {
            ctx->pc = 0x15C1E0u;
            goto label_15c1e0;
        }
    }
    ctx->pc = 0x15C1C4u;
    // 0x15c1c4: 0x0  nop
    ctx->pc = 0x15c1c4u;
    // NOP
label_15c1c8:
    // 0x15c1c8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x15c1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x15c1cc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c1d0: 0xac2235b0  sw          $v0, 0x35B0($at)
    ctx->pc = 0x15c1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13744), GPR_U32(ctx, 2));
    // 0x15c1d4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x15c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15c1d8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c1dc: 0xac2235a8  sw          $v0, 0x35A8($at)
    ctx->pc = 0x15c1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13736), GPR_U32(ctx, 2));
label_15c1e0:
    // 0x15c1e0: 0xc057288  jal         func_15CA20
    ctx->pc = 0x15C1E0u;
    SET_GPR_U32(ctx, 31, 0x15C1E8u);
    ctx->pc = 0x15C1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C1E0u;
            // 0x15c1e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CA20u;
    if (runtime->hasFunction(0x15CA20u)) {
        auto targetFn = runtime->lookupFunction(0x15CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C1E8u; }
        if (ctx->pc != 0x15C1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawMachine_0x15ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C1E8u; }
        if (ctx->pc != 0x15C1E8u) { return; }
    }
    ctx->pc = 0x15C1E8u;
    // 0x15c1e8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c1e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c1ec: 0x8c253590  lw          $a1, 0x3590($at)
    ctx->pc = 0x15c1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13712)));
    // 0x15c1f0: 0xc0573ac  jal         func_15CEB0
    ctx->pc = 0x15C1F0u;
    SET_GPR_U32(ctx, 31, 0x15C1F8u);
    ctx->pc = 0x15C1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C1F0u;
            // 0x15c1f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CEB0u;
    if (runtime->hasFunction(0x15CEB0u)) {
        auto targetFn = runtime->lookupFunction(0x15CEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C1F8u; }
        if (ctx->pc != 0x15C1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawChar_0x15ceb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C1F8u; }
        if (ctx->pc != 0x15C1F8u) { return; }
    }
    ctx->pc = 0x15C1F8u;
    // 0x15c1f8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x15C1F8u;
    {
        const bool branch_taken_0x15c1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c1f8) {
            ctx->pc = 0x15C268u;
            goto label_15c268;
        }
    }
    ctx->pc = 0x15C200u;
label_15c200:
    // 0x15c200: 0xc060718  jal         func_181C60
    ctx->pc = 0x15C200u;
    SET_GPR_U32(ctx, 31, 0x15C208u);
    ctx->pc = 0x15C204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C200u;
            // 0x15c204: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C208u; }
        if (ctx->pc != 0x15C208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C208u; }
        if (ctx->pc != 0x15C208u) { return; }
    }
    ctx->pc = 0x15C208u;
    // 0x15c208: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x15c208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x15c20c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c20cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c210: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15c210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c214: 0xc057288  jal         func_15CA20
    ctx->pc = 0x15C214u;
    SET_GPR_U32(ctx, 31, 0x15C21Cu);
    ctx->pc = 0x15C218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C214u;
            // 0x15c218: 0xac2235b0  sw          $v0, 0x35B0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13744), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CA20u;
    if (runtime->hasFunction(0x15CA20u)) {
        auto targetFn = runtime->lookupFunction(0x15CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C21Cu; }
        if (ctx->pc != 0x15C21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawMachine_0x15ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C21Cu; }
        if (ctx->pc != 0x15C21Cu) { return; }
    }
    ctx->pc = 0x15C21Cu;
    // 0x15c21c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c21cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c220: 0x8c253590  lw          $a1, 0x3590($at)
    ctx->pc = 0x15c220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13712)));
    // 0x15c224: 0xc0573ac  jal         func_15CEB0
    ctx->pc = 0x15C224u;
    SET_GPR_U32(ctx, 31, 0x15C22Cu);
    ctx->pc = 0x15C228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C224u;
            // 0x15c228: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CEB0u;
    if (runtime->hasFunction(0x15CEB0u)) {
        auto targetFn = runtime->lookupFunction(0x15CEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C22Cu; }
        if (ctx->pc != 0x15C22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawChar_0x15ceb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C22Cu; }
        if (ctx->pc != 0x15C22Cu) { return; }
    }
    ctx->pc = 0x15C22Cu;
    // 0x15c22c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15C22Cu;
    {
        const bool branch_taken_0x15c22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c22c) {
            ctx->pc = 0x15C268u;
            goto label_15c268;
        }
    }
    ctx->pc = 0x15C234u;
    // 0x15c234: 0x0  nop
    ctx->pc = 0x15c234u;
    // NOP
label_15c238:
    // 0x15c238: 0xc0607cc  jal         func_181F30
    ctx->pc = 0x15C238u;
    SET_GPR_U32(ctx, 31, 0x15C240u);
    ctx->pc = 0x181F30u;
    if (runtime->hasFunction(0x181F30u)) {
        auto targetFn = runtime->lookupFunction(0x181F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C240u; }
        if (ctx->pc != 0x15C240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFadeing_0x181f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C240u; }
        if (ctx->pc != 0x15C240u) { return; }
    }
    ctx->pc = 0x15C240u;
    // 0x15c240: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15C240u;
    {
        const bool branch_taken_0x15c240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c240) {
            ctx->pc = 0x15C250u;
            goto label_15c250;
        }
    }
    ctx->pc = 0x15C248u;
    // 0x15c248: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x15c248u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c24c: 0x0  nop
    ctx->pc = 0x15c24cu;
    // NOP
label_15c250:
    // 0x15c250: 0xc057288  jal         func_15CA20
    ctx->pc = 0x15C250u;
    SET_GPR_U32(ctx, 31, 0x15C258u);
    ctx->pc = 0x15C254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C250u;
            // 0x15c254: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CA20u;
    if (runtime->hasFunction(0x15CA20u)) {
        auto targetFn = runtime->lookupFunction(0x15CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C258u; }
        if (ctx->pc != 0x15C258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawMachine_0x15ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C258u; }
        if (ctx->pc != 0x15C258u) { return; }
    }
    ctx->pc = 0x15C258u;
    // 0x15c258: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c25c: 0x8c253590  lw          $a1, 0x3590($at)
    ctx->pc = 0x15c25cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13712)));
    // 0x15c260: 0xc0573ac  jal         func_15CEB0
    ctx->pc = 0x15C260u;
    SET_GPR_U32(ctx, 31, 0x15C268u);
    ctx->pc = 0x15C264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C260u;
            // 0x15c264: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CEB0u;
    if (runtime->hasFunction(0x15CEB0u)) {
        auto targetFn = runtime->lookupFunction(0x15CEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C268u; }
        if (ctx->pc != 0x15C268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawChar_0x15ceb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C268u; }
        if (ctx->pc != 0x15C268u) { return; }
    }
    ctx->pc = 0x15C268u;
label_15c268:
    // 0x15c268: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c26c: 0x8c2235a8  lw          $v0, 0x35A8($at)
    ctx->pc = 0x15c26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13736)));
    // 0x15c270: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x15c270u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x15c274: 0x1020009a  beqz        $at, . + 4 + (0x9A << 2)
    ctx->pc = 0x15C274u;
    {
        const bool branch_taken_0x15c274 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C274u;
            // 0x15c278: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c274) {
            ctx->pc = 0x15C4E0u;
            goto label_15c4e0;
        }
    }
    ctx->pc = 0x15C27Cu;
    // 0x15c27c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15c280: 0x24630fb0  addiu       $v1, $v1, 0xFB0
    ctx->pc = 0x15c280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4016));
    // 0x15c284: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15c284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15c288: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15c288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15c28c: 0x400008  jr          $v0
    ctx->pc = 0x15C28Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15C298u: goto label_15c298;
            case 0x15C2F8u: goto label_15c2f8;
            case 0x15C330u: goto label_15c330;
            case 0x15C378u: goto label_15c378;
            case 0x15C3E0u: goto label_15c3e0;
            case 0x15C418u: goto label_15c418;
            case 0x15C478u: goto label_15c478;
            case 0x15C4B0u: goto label_15c4b0;
            case 0x15C4E0u: goto label_15c4e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15C294u;
    // 0x15c294: 0x0  nop
    ctx->pc = 0x15c294u;
    // NOP
label_15c298:
    // 0x15c298: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c29c: 0x8c222340  lw          $v0, 0x2340($at)
    ctx->pc = 0x15c29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9024)));
    // 0x15c2a0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x15C2A0u;
    {
        const bool branch_taken_0x15c2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C2A0u;
            // 0x15c2a4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c2a0) {
            ctx->pc = 0x15C2E8u;
            goto label_15c2e8;
        }
    }
    ctx->pc = 0x15C2A8u;
    // 0x15c2a8: 0xc05d110  jal         func_174440
    ctx->pc = 0x15C2A8u;
    SET_GPR_U32(ctx, 31, 0x15C2B0u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C2B0u; }
        if (ctx->pc != 0x15C2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C2B0u; }
        if (ctx->pc != 0x15C2B0u) { return; }
    }
    ctx->pc = 0x15C2B0u;
    // 0x15c2b0: 0xc056f8c  jal         func_15BE30
    ctx->pc = 0x15C2B0u;
    SET_GPR_U32(ctx, 31, 0x15C2B8u);
    ctx->pc = 0x15C2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C2B0u;
            // 0x15c2b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE30u;
    if (runtime->hasFunction(0x15BE30u)) {
        auto targetFn = runtime->lookupFunction(0x15BE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C2B8u; }
        if (ctx->pc != 0x15C2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setGamePlayerAvtive_0x15be30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C2B8u; }
        if (ctx->pc != 0x15C2B8u) { return; }
    }
    ctx->pc = 0x15C2B8u;
    // 0x15c2b8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c2b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c2bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15c2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c2c0: 0x8c263580  lw          $a2, 0x3580($at)
    ctx->pc = 0x15c2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13696)));
    // 0x15c2c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c2c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c2c8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15c2c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15c2cc: 0x8c279ce0  lw          $a3, -0x6320($at)
    ctx->pc = 0x15c2ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941920)));
    // 0x15c2d0: 0xc0635a0  jal         func_18D680
    ctx->pc = 0x15C2D0u;
    SET_GPR_U32(ctx, 31, 0x15C2D8u);
    ctx->pc = 0x15C2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C2D0u;
            // 0x15c2d4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D680u;
    if (runtime->hasFunction(0x18D680u)) {
        auto targetFn = runtime->lookupFunction(0x18D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C2D8u; }
        if (ctx->pc != 0x15C2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePlayer_0x18d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C2D8u; }
        if (ctx->pc != 0x15C2D8u) { return; }
    }
    ctx->pc = 0x15C2D8u;
    // 0x15c2d8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x15c2d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c2dc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c2e0: 0xac3235a8  sw          $s2, 0x35A8($at)
    ctx->pc = 0x15c2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13736), GPR_U32(ctx, 18));
    // 0x15c2e4: 0x0  nop
    ctx->pc = 0x15c2e4u;
    // NOP
label_15c2e8:
    // 0x15c2e8: 0xc057430  jal         func_15D0C0
    ctx->pc = 0x15C2E8u;
    SET_GPR_U32(ctx, 31, 0x15C2F0u);
    ctx->pc = 0x15C2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C2E8u;
            // 0x15c2ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D0C0u;
    if (runtime->hasFunction(0x15D0C0u)) {
        auto targetFn = runtime->lookupFunction(0x15D0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C2F0u; }
        if (ctx->pc != 0x15C2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawPressStart_0x15d0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C2F0u; }
        if (ctx->pc != 0x15C2F0u) { return; }
    }
    ctx->pc = 0x15C2F0u;
    // 0x15c2f0: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x15C2F0u;
    {
        const bool branch_taken_0x15c2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c2f0) {
            ctx->pc = 0x15C4E0u;
            goto label_15c4e0;
        }
    }
    ctx->pc = 0x15C2F8u;
label_15c2f8:
    // 0x15c2f8: 0xc057298  jal         func_15CA60
    ctx->pc = 0x15C2F8u;
    SET_GPR_U32(ctx, 31, 0x15C300u);
    ctx->pc = 0x15C2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C2F8u;
            // 0x15c2fc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CA60u;
    if (runtime->hasFunction(0x15CA60u)) {
        auto targetFn = runtime->lookupFunction(0x15CA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C300u; }
        if (ctx->pc != 0x15C300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MachineSel_0x15ca60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C300u; }
        if (ctx->pc != 0x15C300u) { return; }
    }
    ctx->pc = 0x15C300u;
    // 0x15c300: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x15c300u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c304: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15c304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c308: 0xc057230  jal         func_15C8C0
    ctx->pc = 0x15C308u;
    SET_GPR_U32(ctx, 31, 0x15C310u);
    ctx->pc = 0x15C30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C308u;
            // 0x15c30c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C8C0u;
    if (runtime->hasFunction(0x15C8C0u)) {
        auto targetFn = runtime->lookupFunction(0x15C8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C310u; }
        if (ctx->pc != 0x15C310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawMachineSel_0x15c8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C310u; }
        if (ctx->pc != 0x15C310u) { return; }
    }
    ctx->pc = 0x15C310u;
    // 0x15c310: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15c310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c314: 0x16a20072  bne         $s5, $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x15C314u;
    {
        const bool branch_taken_0x15c314 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x15C318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C314u;
            // 0x15c318: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c314) {
            ctx->pc = 0x15C4E0u;
            goto label_15c4e0;
        }
    }
    ctx->pc = 0x15C31Cu;
    // 0x15c31c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c31cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c320: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15c320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c324: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x15C324u;
    {
        const bool branch_taken_0x15c324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C324u;
            // 0x15c328: 0xac2235a8  sw          $v0, 0x35A8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13736), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c324) {
            ctx->pc = 0x15C4E0u;
            goto label_15c4e0;
        }
    }
    ctx->pc = 0x15C32Cu;
    // 0x15c32c: 0x0  nop
    ctx->pc = 0x15c32cu;
    // NOP
label_15c330:
    // 0x15c330: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15c330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c334: 0xc062b88  jal         func_18AE20
    ctx->pc = 0x15C334u;
    SET_GPR_U32(ctx, 31, 0x15C33Cu);
    ctx->pc = 0x15C338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C334u;
            // 0x15c338: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AE20u;
    if (runtime->hasFunction(0x18AE20u)) {
        auto targetFn = runtime->lookupFunction(0x18AE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C33Cu; }
        if (ctx->pc != 0x15C33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setPlayerState_0x18ae20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C33Cu; }
        if (ctx->pc != 0x15C33Cu) { return; }
    }
    ctx->pc = 0x15C33Cu;
    // 0x15c33c: 0xc057288  jal         func_15CA20
    ctx->pc = 0x15C33Cu;
    SET_GPR_U32(ctx, 31, 0x15C344u);
    ctx->pc = 0x15C340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C33Cu;
            // 0x15c340: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CA20u;
    if (runtime->hasFunction(0x15CA20u)) {
        auto targetFn = runtime->lookupFunction(0x15CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C344u; }
        if (ctx->pc != 0x15C344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawMachine_0x15ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C344u; }
        if (ctx->pc != 0x15C344u) { return; }
    }
    ctx->pc = 0x15C344u;
    // 0x15c344: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15c344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c348: 0xc057230  jal         func_15C8C0
    ctx->pc = 0x15C348u;
    SET_GPR_U32(ctx, 31, 0x15C350u);
    ctx->pc = 0x15C34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C348u;
            // 0x15c34c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C8C0u;
    if (runtime->hasFunction(0x15C8C0u)) {
        auto targetFn = runtime->lookupFunction(0x15C8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C350u; }
        if (ctx->pc != 0x15C350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawMachineSel_0x15c8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C350u; }
        if (ctx->pc != 0x15C350u) { return; }
    }
    ctx->pc = 0x15C350u;
    // 0x15c350: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15c350u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c354: 0x2841003d  slti        $at, $v0, 0x3D
    ctx->pc = 0x15c354u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x15c358: 0x14200061  bnez        $at, . + 4 + (0x61 << 2)
    ctx->pc = 0x15C358u;
    {
        const bool branch_taken_0x15c358 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C358u;
            // 0x15c35c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c358) {
            ctx->pc = 0x15C4E0u;
            goto label_15c4e0;
        }
    }
    ctx->pc = 0x15C360u;
    // 0x15c360: 0xc057420  jal         func_15D080
    ctx->pc = 0x15C360u;
    SET_GPR_U32(ctx, 31, 0x15C368u);
    ctx->pc = 0x15C364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C360u;
            // 0x15c364: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D080u;
    if (runtime->hasFunction(0x15D080u)) {
        auto targetFn = runtime->lookupFunction(0x15D080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C368u; }
        if (ctx->pc != 0x15C368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetCharRGB_0x15d080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C368u; }
        if (ctx->pc != 0x15C368u) { return; }
    }
    ctx->pc = 0x15C368u;
    // 0x15c368: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15c368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15c36c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c36cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c370: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x15C370u;
    {
        const bool branch_taken_0x15c370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C370u;
            // 0x15c374: 0xac2235a8  sw          $v0, 0x35A8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13736), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c370) {
            ctx->pc = 0x15C4E0u;
            goto label_15c4e0;
        }
    }
    ctx->pc = 0x15C378u;
label_15c378:
    // 0x15c378: 0xc0571bc  jal         func_15C6F0
    ctx->pc = 0x15C378u;
    SET_GPR_U32(ctx, 31, 0x15C380u);
    ctx->pc = 0x15C37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C378u;
            // 0x15c37c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C6F0u;
    if (runtime->hasFunction(0x15C6F0u)) {
        auto targetFn = runtime->lookupFunction(0x15C6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C380u; }
        if (ctx->pc != 0x15C380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CharaSel_0x15c6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C380u; }
        if (ctx->pc != 0x15C380u) { return; }
    }
    ctx->pc = 0x15C380u;
    // 0x15c380: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x15c380u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c384: 0xc057288  jal         func_15CA20
    ctx->pc = 0x15C384u;
    SET_GPR_U32(ctx, 31, 0x15C38Cu);
    ctx->pc = 0x15C388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C384u;
            // 0x15c388: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CA20u;
    if (runtime->hasFunction(0x15CA20u)) {
        auto targetFn = runtime->lookupFunction(0x15CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C38Cu; }
        if (ctx->pc != 0x15C38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawMachine_0x15ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C38Cu; }
        if (ctx->pc != 0x15C38Cu) { return; }
    }
    ctx->pc = 0x15C38Cu;
    // 0x15c38c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15c38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c390: 0xc05716c  jal         func_15C5B0
    ctx->pc = 0x15C390u;
    SET_GPR_U32(ctx, 31, 0x15C398u);
    ctx->pc = 0x15C394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C390u;
            // 0x15c394: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C5B0u;
    if (runtime->hasFunction(0x15C5B0u)) {
        auto targetFn = runtime->lookupFunction(0x15C5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C398u; }
        if (ctx->pc != 0x15C398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawCharaSel_0x15c5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C398u; }
        if (ctx->pc != 0x15C398u) { return; }
    }
    ctx->pc = 0x15C398u;
    // 0x15c398: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15c398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c39c: 0x16a40006  bne         $s5, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15C39Cu;
    {
        const bool branch_taken_0x15c39c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 4));
        ctx->pc = 0x15C3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C39Cu;
            // 0x15c3a0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c39c) {
            ctx->pc = 0x15C3B8u;
            goto label_15c3b8;
        }
    }
    ctx->pc = 0x15C3A4u;
    // 0x15c3a4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c3a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c3a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15c3a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c3ac: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x15C3ACu;
    {
        const bool branch_taken_0x15c3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C3ACu;
            // 0x15c3b0: 0xac2235a8  sw          $v0, 0x35A8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13736), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c3ac) {
            ctx->pc = 0x15C4E0u;
            goto label_15c4e0;
        }
    }
    ctx->pc = 0x15C3B4u;
    // 0x15c3b4: 0x0  nop
    ctx->pc = 0x15c3b4u;
    // NOP
label_15c3b8:
    // 0x15c3b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15c3bc: 0x16a20048  bne         $s5, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x15C3BCu;
    {
        const bool branch_taken_0x15c3bc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x15C3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C3BCu;
            // 0x15c3c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c3bc) {
            ctx->pc = 0x15C4E0u;
            goto label_15c4e0;
        }
    }
    ctx->pc = 0x15C3C4u;
    // 0x15c3c4: 0xc062b88  jal         func_18AE20
    ctx->pc = 0x15C3C4u;
    SET_GPR_U32(ctx, 31, 0x15C3CCu);
    ctx->pc = 0x18AE20u;
    if (runtime->hasFunction(0x18AE20u)) {
        auto targetFn = runtime->lookupFunction(0x18AE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C3CCu; }
        if (ctx->pc != 0x15C3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setPlayerState_0x18ae20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C3CCu; }
        if (ctx->pc != 0x15C3CCu) { return; }
    }
    ctx->pc = 0x15C3CCu;
    // 0x15c3cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15c3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c3d0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c3d4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x15C3D4u;
    {
        const bool branch_taken_0x15c3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C3D4u;
            // 0x15c3d8: 0xac2235a8  sw          $v0, 0x35A8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13736), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c3d4) {
            ctx->pc = 0x15C4E0u;
            goto label_15c4e0;
        }
    }
    ctx->pc = 0x15C3DCu;
    // 0x15c3dc: 0x0  nop
    ctx->pc = 0x15c3dcu;
    // NOP
label_15c3e0:
    // 0x15c3e0: 0xc057288  jal         func_15CA20
    ctx->pc = 0x15C3E0u;
    SET_GPR_U32(ctx, 31, 0x15C3E8u);
    ctx->pc = 0x15C3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C3E0u;
            // 0x15c3e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CA20u;
    if (runtime->hasFunction(0x15CA20u)) {
        auto targetFn = runtime->lookupFunction(0x15CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C3E8u; }
        if (ctx->pc != 0x15C3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawMachine_0x15ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C3E8u; }
        if (ctx->pc != 0x15C3E8u) { return; }
    }
    ctx->pc = 0x15C3E8u;
    // 0x15c3e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15c3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c3ec: 0xc05716c  jal         func_15C5B0
    ctx->pc = 0x15C3ECu;
    SET_GPR_U32(ctx, 31, 0x15C3F4u);
    ctx->pc = 0x15C3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C3ECu;
            // 0x15c3f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C5B0u;
    if (runtime->hasFunction(0x15C5B0u)) {
        auto targetFn = runtime->lookupFunction(0x15C5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C3F4u; }
        if (ctx->pc != 0x15C3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawCharaSel_0x15c5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C3F4u; }
        if (ctx->pc != 0x15C3F4u) { return; }
    }
    ctx->pc = 0x15C3F4u;
    // 0x15c3f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15c3f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c3f8: 0x2841003d  slti        $at, $v0, 0x3D
    ctx->pc = 0x15c3f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x15c3fc: 0x14200038  bnez        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x15C3FCu;
    {
        const bool branch_taken_0x15c3fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C3FCu;
            // 0x15c400: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c3fc) {
            ctx->pc = 0x15C4E0u;
            goto label_15c4e0;
        }
    }
    ctx->pc = 0x15C404u;
    // 0x15c404: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x15c404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15c408: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c40c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x15C40Cu;
    {
        const bool branch_taken_0x15c40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C40Cu;
            // 0x15c410: 0xac2235a8  sw          $v0, 0x35A8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13736), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c40c) {
            ctx->pc = 0x15C4E0u;
            goto label_15c4e0;
        }
    }
    ctx->pc = 0x15C414u;
    // 0x15c414: 0x0  nop
    ctx->pc = 0x15c414u;
    // NOP
label_15c418:
    // 0x15c418: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x15C418u;
    {
        const bool branch_taken_0x15c418 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C418u;
            // 0x15c41c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c418) {
            ctx->pc = 0x15C440u;
            goto label_15c440;
        }
    }
    ctx->pc = 0x15C420u;
    // 0x15c420: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x15c420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15c424: 0x8c2335b0  lw          $v1, 0x35B0($at)
    ctx->pc = 0x15c424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13744)));
    // 0x15c428: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15C428u;
    {
        const bool branch_taken_0x15c428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15C42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C428u;
            // 0x15c42c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c428) {
            ctx->pc = 0x15C458u;
            goto label_15c458;
        }
    }
    ctx->pc = 0x15C430u;
    // 0x15c430: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c434: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15C434u;
    {
        const bool branch_taken_0x15c434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C434u;
            // 0x15c438: 0xac2235a8  sw          $v0, 0x35A8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13736), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c434) {
            ctx->pc = 0x15C458u;
            goto label_15c458;
        }
    }
    ctx->pc = 0x15C43Cu;
    // 0x15c43c: 0x0  nop
    ctx->pc = 0x15c43cu;
    // NOP
label_15c440:
    // 0x15c440: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x15c440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x15c444: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c448: 0xac2235a8  sw          $v0, 0x35A8($at)
    ctx->pc = 0x15c448u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13736), GPR_U32(ctx, 2));
    // 0x15c44c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x15c44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15c450: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c454: 0xac2235b0  sw          $v0, 0x35B0($at)
    ctx->pc = 0x15c454u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13744), GPR_U32(ctx, 2));
label_15c458:
    // 0x15c458: 0xc057288  jal         func_15CA20
    ctx->pc = 0x15C458u;
    SET_GPR_U32(ctx, 31, 0x15C460u);
    ctx->pc = 0x15C45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C458u;
            // 0x15c45c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CA20u;
    if (runtime->hasFunction(0x15CA20u)) {
        auto targetFn = runtime->lookupFunction(0x15CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C460u; }
        if (ctx->pc != 0x15C460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawMachine_0x15ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C460u; }
        if (ctx->pc != 0x15C460u) { return; }
    }
    ctx->pc = 0x15C460u;
    // 0x15c460: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15c460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15c464: 0x8c259ce8  lw          $a1, -0x6318($at)
    ctx->pc = 0x15c464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941928)));
    // 0x15c468: 0xc0573ac  jal         func_15CEB0
    ctx->pc = 0x15C468u;
    SET_GPR_U32(ctx, 31, 0x15C470u);
    ctx->pc = 0x15C46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C468u;
            // 0x15c46c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CEB0u;
    if (runtime->hasFunction(0x15CEB0u)) {
        auto targetFn = runtime->lookupFunction(0x15CEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C470u; }
        if (ctx->pc != 0x15C470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawChar_0x15ceb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C470u; }
        if (ctx->pc != 0x15C470u) { return; }
    }
    ctx->pc = 0x15C470u;
    // 0x15c470: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x15C470u;
    {
        const bool branch_taken_0x15c470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c470) {
            ctx->pc = 0x15C4E0u;
            goto label_15c4e0;
        }
    }
    ctx->pc = 0x15C478u;
label_15c478:
    // 0x15c478: 0xc060718  jal         func_181C60
    ctx->pc = 0x15C478u;
    SET_GPR_U32(ctx, 31, 0x15C480u);
    ctx->pc = 0x15C47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C478u;
            // 0x15c47c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C480u; }
        if (ctx->pc != 0x15C480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C480u; }
        if (ctx->pc != 0x15C480u) { return; }
    }
    ctx->pc = 0x15C480u;
    // 0x15c480: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x15c480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x15c484: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c488: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15c488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c48c: 0xc057288  jal         func_15CA20
    ctx->pc = 0x15C48Cu;
    SET_GPR_U32(ctx, 31, 0x15C494u);
    ctx->pc = 0x15C490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C48Cu;
            // 0x15c490: 0xac2235a8  sw          $v0, 0x35A8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13736), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CA20u;
    if (runtime->hasFunction(0x15CA20u)) {
        auto targetFn = runtime->lookupFunction(0x15CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C494u; }
        if (ctx->pc != 0x15C494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawMachine_0x15ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C494u; }
        if (ctx->pc != 0x15C494u) { return; }
    }
    ctx->pc = 0x15C494u;
    // 0x15c494: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15c494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15c498: 0x8c259ce8  lw          $a1, -0x6318($at)
    ctx->pc = 0x15c498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941928)));
    // 0x15c49c: 0xc0573ac  jal         func_15CEB0
    ctx->pc = 0x15C49Cu;
    SET_GPR_U32(ctx, 31, 0x15C4A4u);
    ctx->pc = 0x15C4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C49Cu;
            // 0x15c4a0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CEB0u;
    if (runtime->hasFunction(0x15CEB0u)) {
        auto targetFn = runtime->lookupFunction(0x15CEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C4A4u; }
        if (ctx->pc != 0x15C4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawChar_0x15ceb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C4A4u; }
        if (ctx->pc != 0x15C4A4u) { return; }
    }
    ctx->pc = 0x15C4A4u;
    // 0x15c4a4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15C4A4u;
    {
        const bool branch_taken_0x15c4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c4a4) {
            ctx->pc = 0x15C4E0u;
            goto label_15c4e0;
        }
    }
    ctx->pc = 0x15C4ACu;
    // 0x15c4ac: 0x0  nop
    ctx->pc = 0x15c4acu;
    // NOP
label_15c4b0:
    // 0x15c4b0: 0xc0607cc  jal         func_181F30
    ctx->pc = 0x15C4B0u;
    SET_GPR_U32(ctx, 31, 0x15C4B8u);
    ctx->pc = 0x181F30u;
    if (runtime->hasFunction(0x181F30u)) {
        auto targetFn = runtime->lookupFunction(0x181F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C4B8u; }
        if (ctx->pc != 0x15C4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFadeing_0x181f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C4B8u; }
        if (ctx->pc != 0x15C4B8u) { return; }
    }
    ctx->pc = 0x15C4B8u;
    // 0x15c4b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15C4B8u;
    {
        const bool branch_taken_0x15c4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c4b8) {
            ctx->pc = 0x15C4C8u;
            goto label_15c4c8;
        }
    }
    ctx->pc = 0x15C4C0u;
    // 0x15c4c0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x15c4c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c4c4: 0x0  nop
    ctx->pc = 0x15c4c4u;
    // NOP
label_15c4c8:
    // 0x15c4c8: 0xc057288  jal         func_15CA20
    ctx->pc = 0x15C4C8u;
    SET_GPR_U32(ctx, 31, 0x15C4D0u);
    ctx->pc = 0x15C4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C4C8u;
            // 0x15c4cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CA20u;
    if (runtime->hasFunction(0x15CA20u)) {
        auto targetFn = runtime->lookupFunction(0x15CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C4D0u; }
        if (ctx->pc != 0x15C4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawMachine_0x15ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C4D0u; }
        if (ctx->pc != 0x15C4D0u) { return; }
    }
    ctx->pc = 0x15C4D0u;
    // 0x15c4d0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15c4d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15c4d4: 0x8c259ce8  lw          $a1, -0x6318($at)
    ctx->pc = 0x15c4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941928)));
    // 0x15c4d8: 0xc0573ac  jal         func_15CEB0
    ctx->pc = 0x15C4D8u;
    SET_GPR_U32(ctx, 31, 0x15C4E0u);
    ctx->pc = 0x15C4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C4D8u;
            // 0x15c4dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CEB0u;
    if (runtime->hasFunction(0x15CEB0u)) {
        auto targetFn = runtime->lookupFunction(0x15CEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C4E0u; }
        if (ctx->pc != 0x15C4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawChar_0x15ceb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C4E0u; }
        if (ctx->pc != 0x15C4E0u) { return; }
    }
    ctx->pc = 0x15C4E0u;
label_15c4e0:
    // 0x15c4e0: 0xc0575f4  jal         func_15D7D0
    ctx->pc = 0x15C4E0u;
    SET_GPR_U32(ctx, 31, 0x15C4E8u);
    ctx->pc = 0x15D7D0u;
    if (runtime->hasFunction(0x15D7D0u)) {
        auto targetFn = runtime->lookupFunction(0x15D7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C4E8u; }
        if (ctx->pc != 0x15C4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawBG_0x15d7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C4E8u; }
        if (ctx->pc != 0x15C4E8u) { return; }
    }
    ctx->pc = 0x15C4E8u;
    // 0x15c4e8: 0x1680feb9  bnez        $s4, . + 4 + (-0x147 << 2)
    ctx->pc = 0x15C4E8u;
    {
        const bool branch_taken_0x15c4e8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C4E8u;
            // 0x15c4ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c4e8) {
            ctx->pc = 0x15BFD0u;
            goto label_15bfd0;
        }
    }
    ctx->pc = 0x15C4F0u;
    // 0x15c4f0: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x15C4F0u;
    SET_GPR_U32(ctx, 31, 0x15C4F8u);
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C4F8u; }
        if (ctx->pc != 0x15C4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C4F8u; }
        if (ctx->pc != 0x15C4F8u) { return; }
    }
    ctx->pc = 0x15C4F8u;
    // 0x15c4f8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15C4F8u;
    {
        const bool branch_taken_0x15c4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C4F8u;
            // 0x15c4fc: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c4f8) {
            ctx->pc = 0x15C530u;
            goto label_15c530;
        }
    }
    ctx->pc = 0x15C500u;
    // 0x15c500: 0x8c253578  lw          $a1, 0x3578($at)
    ctx->pc = 0x15c500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13688)));
    // 0x15c504: 0xc056f6c  jal         func_15BDB0
    ctx->pc = 0x15C504u;
    SET_GPR_U32(ctx, 31, 0x15C50Cu);
    ctx->pc = 0x15C508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C504u;
            // 0x15c508: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BDB0u;
    if (runtime->hasFunction(0x15BDB0u)) {
        auto targetFn = runtime->lookupFunction(0x15BDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C50Cu; }
        if (ctx->pc != 0x15C50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setGamePlayerMachine_0x15bdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C50Cu; }
        if (ctx->pc != 0x15C50Cu) { return; }
    }
    ctx->pc = 0x15C50Cu;
    // 0x15c50c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c50cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c510: 0x8c253588  lw          $a1, 0x3588($at)
    ctx->pc = 0x15c510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13704)));
    // 0x15c514: 0xc056f64  jal         func_15BD90
    ctx->pc = 0x15C514u;
    SET_GPR_U32(ctx, 31, 0x15C51Cu);
    ctx->pc = 0x15C518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C514u;
            // 0x15c518: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BD90u;
    if (runtime->hasFunction(0x15BD90u)) {
        auto targetFn = runtime->lookupFunction(0x15BD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C51Cu; }
        if (ctx->pc != 0x15C51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setGamePlayerTexture_0x15bd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C51Cu; }
        if (ctx->pc != 0x15C51Cu) { return; }
    }
    ctx->pc = 0x15C51Cu;
    // 0x15c51c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c51cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c520: 0x8c253590  lw          $a1, 0x3590($at)
    ctx->pc = 0x15c520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13712)));
    // 0x15c524: 0xc056f5c  jal         func_15BD70
    ctx->pc = 0x15C524u;
    SET_GPR_U32(ctx, 31, 0x15C52Cu);
    ctx->pc = 0x15C528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C524u;
            // 0x15c528: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BD70u;
    if (runtime->hasFunction(0x15BD70u)) {
        auto targetFn = runtime->lookupFunction(0x15BD70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C52Cu; }
        if (ctx->pc != 0x15C52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setGamePlayerChar_0x15bd70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C52Cu; }
        if (ctx->pc != 0x15C52Cu) { return; }
    }
    ctx->pc = 0x15C52Cu;
    // 0x15c52c: 0x0  nop
    ctx->pc = 0x15c52cu;
    // NOP
label_15c530:
    // 0x15c530: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x15C530u;
    SET_GPR_U32(ctx, 31, 0x15C538u);
    ctx->pc = 0x15C534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C530u;
            // 0x15c534: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C538u; }
        if (ctx->pc != 0x15C538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C538u; }
        if (ctx->pc != 0x15C538u) { return; }
    }
    ctx->pc = 0x15C538u;
    // 0x15c538: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15C538u;
    {
        const bool branch_taken_0x15c538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C538u;
            // 0x15c53c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c538) {
            ctx->pc = 0x15C570u;
            goto label_15c570;
        }
    }
    ctx->pc = 0x15C540u;
    // 0x15c540: 0x8c253580  lw          $a1, 0x3580($at)
    ctx->pc = 0x15c540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13696)));
    // 0x15c544: 0xc056f6c  jal         func_15BDB0
    ctx->pc = 0x15C544u;
    SET_GPR_U32(ctx, 31, 0x15C54Cu);
    ctx->pc = 0x15C548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C544u;
            // 0x15c548: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BDB0u;
    if (runtime->hasFunction(0x15BDB0u)) {
        auto targetFn = runtime->lookupFunction(0x15BDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C54Cu; }
        if (ctx->pc != 0x15C54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setGamePlayerMachine_0x15bdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C54Cu; }
        if (ctx->pc != 0x15C54Cu) { return; }
    }
    ctx->pc = 0x15C54Cu;
    // 0x15c54c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15c54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15c550: 0x8c259ce0  lw          $a1, -0x6320($at)
    ctx->pc = 0x15c550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941920)));
    // 0x15c554: 0xc056f64  jal         func_15BD90
    ctx->pc = 0x15C554u;
    SET_GPR_U32(ctx, 31, 0x15C55Cu);
    ctx->pc = 0x15C558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C554u;
            // 0x15c558: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BD90u;
    if (runtime->hasFunction(0x15BD90u)) {
        auto targetFn = runtime->lookupFunction(0x15BD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C55Cu; }
        if (ctx->pc != 0x15C55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setGamePlayerTexture_0x15bd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C55Cu; }
        if (ctx->pc != 0x15C55Cu) { return; }
    }
    ctx->pc = 0x15C55Cu;
    // 0x15c55c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15c55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15c560: 0x8c259ce8  lw          $a1, -0x6318($at)
    ctx->pc = 0x15c560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941928)));
    // 0x15c564: 0xc056f5c  jal         func_15BD70
    ctx->pc = 0x15C564u;
    SET_GPR_U32(ctx, 31, 0x15C56Cu);
    ctx->pc = 0x15C568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C564u;
            // 0x15c568: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BD70u;
    if (runtime->hasFunction(0x15BD70u)) {
        auto targetFn = runtime->lookupFunction(0x15BD70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C56Cu; }
        if (ctx->pc != 0x15C56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setGamePlayerChar_0x15bd70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C56Cu; }
        if (ctx->pc != 0x15C56Cu) { return; }
    }
    ctx->pc = 0x15C56Cu;
    // 0x15c56c: 0x0  nop
    ctx->pc = 0x15c56cu;
    // NOP
label_15c570:
    // 0x15c570: 0xc05cff0  jal         func_173FC0
    ctx->pc = 0x15C570u;
    SET_GPR_U32(ctx, 31, 0x15C578u);
    ctx->pc = 0x173FC0u;
    if (runtime->hasFunction(0x173FC0u)) {
        auto targetFn = runtime->lookupFunction(0x173FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C578u; }
        if (ctx->pc != 0x15C578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stop_bgm_0x173fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C578u; }
        if (ctx->pc != 0x15C578u) { return; }
    }
    ctx->pc = 0x15C578u;
    // 0x15c578: 0xc050af4  jal         func_142BD0
    ctx->pc = 0x15C578u;
    SET_GPR_U32(ctx, 31, 0x15C580u);
    ctx->pc = 0x142BD0u;
    if (runtime->hasFunction(0x142BD0u)) {
        auto targetFn = runtime->lookupFunction(0x142BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C580u; }
        if (ctx->pc != 0x15C580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsLeaveTask_0x142bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C580u; }
        if (ctx->pc != 0x15C580u) { return; }
    }
    ctx->pc = 0x15C580u;
    // 0x15c580: 0xc057668  jal         func_15D9A0
    ctx->pc = 0x15C580u;
    SET_GPR_U32(ctx, 31, 0x15C588u);
    ctx->pc = 0x15D9A0u;
    if (runtime->hasFunction(0x15D9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15D9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C588u; }
        if (ctx->pc != 0x15C588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayerSelectUnInit_0x15d9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C588u; }
        if (ctx->pc != 0x15C588u) { return; }
    }
    ctx->pc = 0x15C588u;
    // 0x15c588: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x15c588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15c58c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15c58cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15c590: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15c590u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15c594: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15c594u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15c598: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15c598u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c59c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15c59cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c5a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c5a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c5a4: 0x3e00008  jr          $ra
    ctx->pc = 0x15C5A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C5A4u;
            // 0x15c5a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15BF80u: goto label_15bf80;
            case 0x15BFB8u: goto label_15bfb8;
            case 0x15BFD0u: goto label_15bfd0;
            case 0x15C020u: goto label_15c020;
            case 0x15C070u: goto label_15c070;
            case 0x15C080u: goto label_15c080;
            case 0x15C0B8u: goto label_15c0b8;
            case 0x15C100u: goto label_15c100;
            case 0x15C140u: goto label_15c140;
            case 0x15C168u: goto label_15c168;
            case 0x15C1A0u: goto label_15c1a0;
            case 0x15C1C8u: goto label_15c1c8;
            case 0x15C1E0u: goto label_15c1e0;
            case 0x15C200u: goto label_15c200;
            case 0x15C238u: goto label_15c238;
            case 0x15C250u: goto label_15c250;
            case 0x15C268u: goto label_15c268;
            case 0x15C298u: goto label_15c298;
            case 0x15C2E8u: goto label_15c2e8;
            case 0x15C2F8u: goto label_15c2f8;
            case 0x15C330u: goto label_15c330;
            case 0x15C378u: goto label_15c378;
            case 0x15C3B8u: goto label_15c3b8;
            case 0x15C3E0u: goto label_15c3e0;
            case 0x15C418u: goto label_15c418;
            case 0x15C440u: goto label_15c440;
            case 0x15C458u: goto label_15c458;
            case 0x15C478u: goto label_15c478;
            case 0x15C4B0u: goto label_15c4b0;
            case 0x15C4C8u: goto label_15c4c8;
            case 0x15C4E0u: goto label_15c4e0;
            case 0x15C530u: goto label_15c530;
            case 0x15C570u: goto label_15c570;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15C5ACu;
}
