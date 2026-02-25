#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CharaSel
// Address: 0x15c6f0 - 0x15c8b4
void CharaSel_0x15c6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CharaSel_0x15c6f0");
#endif

    ctx->pc = 0x15c6f0u;

    // 0x15c6f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15c6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15c6f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15c6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15c6f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15c6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15c6fc: 0x14800034  bnez        $a0, . + 4 + (0x34 << 2)
    ctx->pc = 0x15C6FCu;
    {
        const bool branch_taken_0x15c6fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C6FCu;
            // 0x15c700: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c6fc) {
            ctx->pc = 0x15C7D0u;
            goto label_15c7d0;
        }
    }
    ctx->pc = 0x15C704u;
    // 0x15c704: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c708: 0x8c2223f8  lw          $v0, 0x23F8($at)
    ctx->pc = 0x15c708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9208)));
    // 0x15c70c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x15C70Cu;
    {
        const bool branch_taken_0x15c70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C70Cu;
            // 0x15c710: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c70c) {
            ctx->pc = 0x15C740u;
            goto label_15c740;
        }
    }
    ctx->pc = 0x15C714u;
    // 0x15c714: 0x8c223590  lw          $v0, 0x3590($at)
    ctx->pc = 0x15c714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13712)));
    // 0x15c718: 0x18400061  blez        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x15C718u;
    {
        const bool branch_taken_0x15c718 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x15C71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C718u;
            // 0x15c71c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c718) {
            ctx->pc = 0x15C8A0u;
            goto label_15c8a0;
        }
    }
    ctx->pc = 0x15C720u;
    // 0x15c720: 0xc05d110  jal         func_174440
    ctx->pc = 0x15C720u;
    SET_GPR_U32(ctx, 31, 0x15C728u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C728u; }
        if (ctx->pc != 0x15C728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C728u; }
        if (ctx->pc != 0x15C728u) { return; }
    }
    ctx->pc = 0x15C728u;
    // 0x15c728: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c72c: 0x8c223590  lw          $v0, 0x3590($at)
    ctx->pc = 0x15c72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13712)));
    // 0x15c730: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15c730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15c734: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c738: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x15C738u;
    {
        const bool branch_taken_0x15c738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C738u;
            // 0x15c73c: 0xac223590  sw          $v0, 0x3590($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c738) {
            ctx->pc = 0x15C8A0u;
            goto label_15c8a0;
        }
    }
    ctx->pc = 0x15C740u;
label_15c740:
    // 0x15c740: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c744: 0x8c2223f0  lw          $v0, 0x23F0($at)
    ctx->pc = 0x15c744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9200)));
    // 0x15c748: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15C748u;
    {
        const bool branch_taken_0x15c748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C748u;
            // 0x15c74c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c748) {
            ctx->pc = 0x15C780u;
            goto label_15c780;
        }
    }
    ctx->pc = 0x15C750u;
    // 0x15c750: 0x8c223590  lw          $v0, 0x3590($at)
    ctx->pc = 0x15c750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13712)));
    // 0x15c754: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x15c754u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x15c758: 0x10200051  beqz        $at, . + 4 + (0x51 << 2)
    ctx->pc = 0x15C758u;
    {
        const bool branch_taken_0x15c758 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C758u;
            // 0x15c75c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c758) {
            ctx->pc = 0x15C8A0u;
            goto label_15c8a0;
        }
    }
    ctx->pc = 0x15C760u;
    // 0x15c760: 0xc05d110  jal         func_174440
    ctx->pc = 0x15C760u;
    SET_GPR_U32(ctx, 31, 0x15C768u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C768u; }
        if (ctx->pc != 0x15C768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C768u; }
        if (ctx->pc != 0x15C768u) { return; }
    }
    ctx->pc = 0x15C768u;
    // 0x15c768: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c76c: 0x8c223590  lw          $v0, 0x3590($at)
    ctx->pc = 0x15c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13712)));
    // 0x15c770: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15c770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15c774: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c778: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x15C778u;
    {
        const bool branch_taken_0x15c778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C778u;
            // 0x15c77c: 0xac223590  sw          $v0, 0x3590($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c778) {
            ctx->pc = 0x15C8A0u;
            goto label_15c8a0;
        }
    }
    ctx->pc = 0x15C780u;
label_15c780:
    // 0x15c780: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c784: 0x8c222418  lw          $v0, 0x2418($at)
    ctx->pc = 0x15c784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x15c788: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15C788u;
    {
        const bool branch_taken_0x15c788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C788u;
            // 0x15c78c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c788) {
            ctx->pc = 0x15C7A0u;
            goto label_15c7a0;
        }
    }
    ctx->pc = 0x15C790u;
    // 0x15c790: 0x8c222408  lw          $v0, 0x2408($at)
    ctx->pc = 0x15c790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9224)));
    // 0x15c794: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15C794u;
    {
        const bool branch_taken_0x15c794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c794) {
            ctx->pc = 0x15C7B0u;
            goto label_15c7b0;
        }
    }
    ctx->pc = 0x15C79Cu;
    // 0x15c79c: 0x0  nop
    ctx->pc = 0x15c79cu;
    // NOP
label_15c7a0:
    // 0x15c7a0: 0xc05d110  jal         func_174440
    ctx->pc = 0x15C7A0u;
    SET_GPR_U32(ctx, 31, 0x15C7A8u);
    ctx->pc = 0x15C7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C7A0u;
            // 0x15c7a4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C7A8u; }
        if (ctx->pc != 0x15C7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C7A8u; }
        if (ctx->pc != 0x15C7A8u) { return; }
    }
    ctx->pc = 0x15C7A8u;
    // 0x15c7a8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x15C7A8u;
    {
        const bool branch_taken_0x15c7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C7A8u;
            // 0x15c7ac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c7a8) {
            ctx->pc = 0x15C8A0u;
            goto label_15c8a0;
        }
    }
    ctx->pc = 0x15C7B0u;
label_15c7b0:
    // 0x15c7b0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c7b4: 0x8c222410  lw          $v0, 0x2410($at)
    ctx->pc = 0x15c7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9232)));
    // 0x15c7b8: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x15C7B8u;
    {
        const bool branch_taken_0x15c7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C7B8u;
            // 0x15c7bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c7b8) {
            ctx->pc = 0x15C8A0u;
            goto label_15c8a0;
        }
    }
    ctx->pc = 0x15C7C0u;
    // 0x15c7c0: 0xc05d110  jal         func_174440
    ctx->pc = 0x15C7C0u;
    SET_GPR_U32(ctx, 31, 0x15C7C8u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C7C8u; }
        if (ctx->pc != 0x15C7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C7C8u; }
        if (ctx->pc != 0x15C7C8u) { return; }
    }
    ctx->pc = 0x15C7C8u;
    // 0x15c7c8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x15C7C8u;
    {
        const bool branch_taken_0x15c7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C7C8u;
            // 0x15c7cc: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c7c8) {
            ctx->pc = 0x15C8A0u;
            goto label_15c8a0;
        }
    }
    ctx->pc = 0x15C7D0u;
label_15c7d0:
    // 0x15c7d0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c7d4: 0x8c222388  lw          $v0, 0x2388($at)
    ctx->pc = 0x15c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9096)));
    // 0x15c7d8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15C7D8u;
    {
        const bool branch_taken_0x15c7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C7D8u;
            // 0x15c7dc: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c7d8) {
            ctx->pc = 0x15C810u;
            goto label_15c810;
        }
    }
    ctx->pc = 0x15C7E0u;
    // 0x15c7e0: 0x8c229ce8  lw          $v0, -0x6318($at)
    ctx->pc = 0x15c7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941928)));
    // 0x15c7e4: 0x1840002e  blez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x15C7E4u;
    {
        const bool branch_taken_0x15c7e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x15C7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C7E4u;
            // 0x15c7e8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c7e4) {
            ctx->pc = 0x15C8A0u;
            goto label_15c8a0;
        }
    }
    ctx->pc = 0x15C7ECu;
    // 0x15c7ec: 0xc05d110  jal         func_174440
    ctx->pc = 0x15C7ECu;
    SET_GPR_U32(ctx, 31, 0x15C7F4u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C7F4u; }
        if (ctx->pc != 0x15C7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C7F4u; }
        if (ctx->pc != 0x15C7F4u) { return; }
    }
    ctx->pc = 0x15C7F4u;
    // 0x15c7f4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15c7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15c7f8: 0x8c229ce8  lw          $v0, -0x6318($at)
    ctx->pc = 0x15c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941928)));
    // 0x15c7fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15c800: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15c800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15c804: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x15C804u;
    {
        const bool branch_taken_0x15c804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C804u;
            // 0x15c808: 0xac229ce8  sw          $v0, -0x6318($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941928), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c804) {
            ctx->pc = 0x15C8A0u;
            goto label_15c8a0;
        }
    }
    ctx->pc = 0x15C80Cu;
    // 0x15c80c: 0x0  nop
    ctx->pc = 0x15c80cu;
    // NOP
label_15c810:
    // 0x15c810: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c814: 0x8c222380  lw          $v0, 0x2380($at)
    ctx->pc = 0x15c814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9088)));
    // 0x15c818: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15C818u;
    {
        const bool branch_taken_0x15c818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C818u;
            // 0x15c81c: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c818) {
            ctx->pc = 0x15C850u;
            goto label_15c850;
        }
    }
    ctx->pc = 0x15C820u;
    // 0x15c820: 0x8c229ce8  lw          $v0, -0x6318($at)
    ctx->pc = 0x15c820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941928)));
    // 0x15c824: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x15c824u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x15c828: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x15C828u;
    {
        const bool branch_taken_0x15c828 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C828u;
            // 0x15c82c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c828) {
            ctx->pc = 0x15C8A0u;
            goto label_15c8a0;
        }
    }
    ctx->pc = 0x15C830u;
    // 0x15c830: 0xc05d110  jal         func_174440
    ctx->pc = 0x15C830u;
    SET_GPR_U32(ctx, 31, 0x15C838u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C838u; }
        if (ctx->pc != 0x15C838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C838u; }
        if (ctx->pc != 0x15C838u) { return; }
    }
    ctx->pc = 0x15C838u;
    // 0x15c838: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15c838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15c83c: 0x8c229ce8  lw          $v0, -0x6318($at)
    ctx->pc = 0x15c83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941928)));
    // 0x15c840: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15c840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15c844: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15c844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15c848: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x15C848u;
    {
        const bool branch_taken_0x15c848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C848u;
            // 0x15c84c: 0xac229ce8  sw          $v0, -0x6318($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941928), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c848) {
            ctx->pc = 0x15C8A0u;
            goto label_15c8a0;
        }
    }
    ctx->pc = 0x15C850u;
label_15c850:
    // 0x15c850: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c854: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x15c854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
    // 0x15c858: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15C858u;
    {
        const bool branch_taken_0x15c858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C858u;
            // 0x15c85c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c858) {
            ctx->pc = 0x15C870u;
            goto label_15c870;
        }
    }
    ctx->pc = 0x15C860u;
    // 0x15c860: 0x8c222398  lw          $v0, 0x2398($at)
    ctx->pc = 0x15c860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9112)));
    // 0x15c864: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15C864u;
    {
        const bool branch_taken_0x15c864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c864) {
            ctx->pc = 0x15C880u;
            goto label_15c880;
        }
    }
    ctx->pc = 0x15C86Cu;
    // 0x15c86c: 0x0  nop
    ctx->pc = 0x15c86cu;
    // NOP
label_15c870:
    // 0x15c870: 0xc05d110  jal         func_174440
    ctx->pc = 0x15C870u;
    SET_GPR_U32(ctx, 31, 0x15C878u);
    ctx->pc = 0x15C874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C870u;
            // 0x15c874: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C878u; }
        if (ctx->pc != 0x15C878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C878u; }
        if (ctx->pc != 0x15C878u) { return; }
    }
    ctx->pc = 0x15C878u;
    // 0x15c878: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15C878u;
    {
        const bool branch_taken_0x15c878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C878u;
            // 0x15c87c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c878) {
            ctx->pc = 0x15C8A0u;
            goto label_15c8a0;
        }
    }
    ctx->pc = 0x15C880u;
label_15c880:
    // 0x15c880: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c884: 0x8c2223a0  lw          $v0, 0x23A0($at)
    ctx->pc = 0x15c884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9120)));
    // 0x15c888: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15C888u;
    {
        const bool branch_taken_0x15c888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C888u;
            // 0x15c88c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c888) {
            ctx->pc = 0x15C8A0u;
            goto label_15c8a0;
        }
    }
    ctx->pc = 0x15C890u;
    // 0x15c890: 0xc05d110  jal         func_174440
    ctx->pc = 0x15C890u;
    SET_GPR_U32(ctx, 31, 0x15C898u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C898u; }
        if (ctx->pc != 0x15C898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C898u; }
        if (ctx->pc != 0x15C898u) { return; }
    }
    ctx->pc = 0x15C898u;
    // 0x15c898: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x15c898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15c89c: 0x0  nop
    ctx->pc = 0x15c89cu;
    // NOP
label_15c8a0:
    // 0x15c8a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15c8a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c8a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15c8a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c8a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c8a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x15C8ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C8ACu;
            // 0x15c8b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15C740u: goto label_15c740;
            case 0x15C780u: goto label_15c780;
            case 0x15C7A0u: goto label_15c7a0;
            case 0x15C7B0u: goto label_15c7b0;
            case 0x15C7D0u: goto label_15c7d0;
            case 0x15C810u: goto label_15c810;
            case 0x15C850u: goto label_15c850;
            case 0x15C870u: goto label_15c870;
            case 0x15C880u: goto label_15c880;
            case 0x15C8A0u: goto label_15c8a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15C8B4u;
}
