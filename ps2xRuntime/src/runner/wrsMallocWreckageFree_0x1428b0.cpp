#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsMallocWreckageFree
// Address: 0x1428b0 - 0x14292c
void wrsMallocWreckageFree_0x1428b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsMallocWreckageFree_0x1428b0");
#endif

    ctx->pc = 0x1428b0u;

    // 0x1428b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1428b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1428b4: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1428b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1428b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1428b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1428bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1428bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1428c0: 0x8c257920  lw          $a1, 0x7920($at)
    ctx->pc = 0x1428c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31008)));
    // 0x1428c4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1428c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1428c8:
    // 0x1428c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1428c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1428cc: 0x1444000c  bne         $v0, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1428CCu;
    {
        const bool branch_taken_0x1428cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1428D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1428CCu;
            // 0x1428d0: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1428cc) {
            ctx->pc = 0x142900u;
            goto label_142900;
        }
    }
    ctx->pc = 0x1428D4u;
    // 0x1428d4: 0x61940  sll         $v1, $a2, 5
    ctx->pc = 0x1428d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x1428d8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1428d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1428dc: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1428dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1428e0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1428e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1428e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1428e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1428e8: 0x8c227928  lw          $v0, 0x7928($at)
    ctx->pc = 0x1428e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31016)));
    // 0x1428ec: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1428ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1428f0: 0xc04ed90  jal         func_13B640
    ctx->pc = 0x1428F0u;
    SET_GPR_U32(ctx, 31, 0x1428F8u);
    ctx->pc = 0x1428F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1428F0u;
            // 0x1428f4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B640u;
    if (runtime->hasFunction(0x13B640u)) {
        auto targetFn = runtime->lookupFunction(0x13B640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1428F8u; }
        if (ctx->pc != 0x1428F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x13b640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1428F8u; }
        if (ctx->pc != 0x1428F8u) { return; }
    }
    ctx->pc = 0x1428F8u;
    // 0x1428f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1428F8u;
    {
        const bool branch_taken_0x1428f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1428f8) {
            ctx->pc = 0x142920u;
            goto label_142920;
        }
    }
    ctx->pc = 0x142900u;
label_142900:
    // 0x142900: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x142900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x142904: 0x28c21000  slti        $v0, $a2, 0x1000
    ctx->pc = 0x142904u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x142908: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x142908u;
    {
        const bool branch_taken_0x142908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14290Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142908u;
            // 0x14290c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142908) {
            ctx->pc = 0x1428C8u;
            goto label_1428c8;
        }
    }
    ctx->pc = 0x142910u;
    // 0x142910: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x142910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x142914: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x142914u;
    SET_GPR_U32(ctx, 31, 0x14291Cu);
    ctx->pc = 0x142918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142914u;
            // 0x142918: 0x24840a80  addiu       $a0, $a0, 0xA80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14291Cu; }
        if (ctx->pc != 0x14291Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14291Cu; }
        if (ctx->pc != 0x14291Cu) { return; }
    }
    ctx->pc = 0x14291Cu;
    // 0x14291c: 0x0  nop
    ctx->pc = 0x14291cu;
    // NOP
label_142920:
    // 0x142920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x142920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142924: 0x3e00008  jr          $ra
    ctx->pc = 0x142924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142924u;
            // 0x142928: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1428C8u: goto label_1428c8;
            case 0x142900u: goto label_142900;
            case 0x142920u: goto label_142920;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14292Cu;
}
