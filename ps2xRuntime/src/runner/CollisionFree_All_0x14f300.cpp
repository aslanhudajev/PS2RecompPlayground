#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CollisionFree_All
// Address: 0x14f300 - 0x14f380
void CollisionFree_All_0x14f300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CollisionFree_All_0x14f300");
#endif

    ctx->pc = 0x14f300u;

    // 0x14f300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14f300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14f304: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x14f304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x14f308: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14f308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14f30c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14f30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14f310: 0x8c249d30  lw          $a0, -0x62D0($at)
    ctx->pc = 0x14f310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942000)));
    // 0x14f314: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x14F314u;
    {
        const bool branch_taken_0x14f314 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f314) {
            ctx->pc = 0x14F340u;
            goto label_14f340;
        }
    }
    ctx->pc = 0x14F31Cu;
    // 0x14f31c: 0x0  nop
    ctx->pc = 0x14f31cu;
    // NOP
label_14f320:
    // 0x14f320: 0xc053d1c  jal         func_14F470
    ctx->pc = 0x14F320u;
    SET_GPR_U32(ctx, 31, 0x14F328u);
    ctx->pc = 0x14F324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F320u;
            // 0x14f324: 0x8c900020  lw          $s0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F470u;
    if (runtime->hasFunction(0x14F470u)) {
        auto targetFn = runtime->lookupFunction(0x14F470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F328u; }
        if (ctx->pc != 0x14F328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionFree_Dist_0x14f470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F328u; }
        if (ctx->pc != 0x14F328u) { return; }
    }
    ctx->pc = 0x14F328u;
    // 0x14f328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14f328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f32c: 0x0  nop
    ctx->pc = 0x14f32cu;
    // NOP
    // 0x14f330: 0x0  nop
    ctx->pc = 0x14f330u;
    // NOP
    // 0x14f334: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14F334u;
    {
        const bool branch_taken_0x14f334 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f334) {
            ctx->pc = 0x14F320u;
            goto label_14f320;
        }
    }
    ctx->pc = 0x14F33Cu;
    // 0x14f33c: 0x0  nop
    ctx->pc = 0x14f33cu;
    // NOP
label_14f340:
    // 0x14f340: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x14f340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x14f344: 0x8c249d38  lw          $a0, -0x62C8($at)
    ctx->pc = 0x14f344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942008)));
    // 0x14f348: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14F348u;
    {
        const bool branch_taken_0x14f348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f348) {
            ctx->pc = 0x14F370u;
            goto label_14f370;
        }
    }
    ctx->pc = 0x14F350u;
label_14f350:
    // 0x14f350: 0xc053d08  jal         func_14F420
    ctx->pc = 0x14F350u;
    SET_GPR_U32(ctx, 31, 0x14F358u);
    ctx->pc = 0x14F354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F350u;
            // 0x14f354: 0x8c900020  lw          $s0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F420u;
    if (runtime->hasFunction(0x14F420u)) {
        auto targetFn = runtime->lookupFunction(0x14F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F358u; }
        if (ctx->pc != 0x14F358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionFree_Src_0x14f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F358u; }
        if (ctx->pc != 0x14F358u) { return; }
    }
    ctx->pc = 0x14F358u;
    // 0x14f358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14f358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f35c: 0x0  nop
    ctx->pc = 0x14f35cu;
    // NOP
    // 0x14f360: 0x0  nop
    ctx->pc = 0x14f360u;
    // NOP
    // 0x14f364: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14F364u;
    {
        const bool branch_taken_0x14f364 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f364) {
            ctx->pc = 0x14F350u;
            goto label_14f350;
        }
    }
    ctx->pc = 0x14F36Cu;
    // 0x14f36c: 0x0  nop
    ctx->pc = 0x14f36cu;
    // NOP
label_14f370:
    // 0x14f370: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14f370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f374: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14f374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f378: 0x3e00008  jr          $ra
    ctx->pc = 0x14F378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F378u;
            // 0x14f37c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14F320u: goto label_14f320;
            case 0x14F340u: goto label_14f340;
            case 0x14F350u: goto label_14f350;
            case 0x14F370u: goto label_14f370;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14F380u;
}
