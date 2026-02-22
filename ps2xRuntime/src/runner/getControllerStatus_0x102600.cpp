#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: getControllerStatus
// Address: 0x102600 - 0x102678
void getControllerStatus_0x102600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x102600u;

    // 0x102600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x102600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x102604: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x102604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102608: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x102608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10260c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10260cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102610: 0x3c100014  lui         $s0, 0x14
    ctx->pc = 0x102610u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)20 << 16));
    // 0x102614: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x102614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x102618: 0xc0458fe  jal         func_1163F8
    ctx->pc = 0x102618u;
    SET_GPR_U32(ctx, 31, 0x102620u);
    ctx->pc = 0x10261Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102618u;
            // 0x10261c: 0x2606e100  addiu       $a2, $s0, -0x1F00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1163F8u;
    if (runtime->hasFunction(0x1163F8u)) {
        auto targetFn = runtime->lookupFunction(0x1163F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102620u; }
        if (ctx->pc != 0x102620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadRead_0x1163f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102620u; }
        if (ctx->pc != 0x102620u) { return; }
    }
    ctx->pc = 0x102620u;
    // 0x102620: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x102620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102624: 0xc04591e  jal         func_116478
    ctx->pc = 0x102624u;
    SET_GPR_U32(ctx, 31, 0x10262Cu);
    ctx->pc = 0x102628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102624u;
            // 0x102628: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116478u;
    if (runtime->hasFunction(0x116478u)) {
        auto targetFn = runtime->lookupFunction(0x116478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10262Cu; }
        if (ctx->pc != 0x10262Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadGetState_0x116478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10262Cu; }
        if (ctx->pc != 0x10262Cu) { return; }
    }
    ctx->pc = 0x10262Cu;
    // 0x10262c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10262cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102630: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x102630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x102634: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x102634u;
    {
        const bool branch_taken_0x102634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x102638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102634u;
            // 0x102638: 0xaf838114  sw          $v1, -0x7EEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934804), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102634) {
            ctx->pc = 0x102650u;
            goto label_102650;
        }
    }
    ctx->pc = 0x10263Cu;
    // 0x10263c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10263cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x102640: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x102640u;
    {
        const bool branch_taken_0x102640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x102644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102640u;
            // 0x102644: 0x2602e100  addiu       $v0, $s0, -0x1F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102640) {
            ctx->pc = 0x102654u;
            goto label_102654;
        }
    }
    ctx->pc = 0x102648u;
    // 0x102648: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x102648u;
    {
        const bool branch_taken_0x102648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10264Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102648u;
            // 0x10264c: 0xa7808112  sh          $zero, -0x7EEE($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294934802), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102648) {
            ctx->pc = 0x102668u;
            goto label_102668;
        }
    }
    ctx->pc = 0x102650u;
label_102650:
    // 0x102650: 0x2602e100  addiu       $v0, $s0, -0x1F00
    ctx->pc = 0x102650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959360));
label_102654:
    // 0x102654: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x102654u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x102658: 0x90440003  lbu         $a0, 0x3($v0)
    ctx->pc = 0x102658u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x10265c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x10265cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x102660: 0x641827  nor         $v1, $v1, $a0
    ctx->pc = 0x102660u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x102664: 0xa7838112  sh          $v1, -0x7EEE($gp)
    ctx->pc = 0x102664u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294934802), (uint16_t)GPR_U32(ctx, 3));
label_102668:
    // 0x102668: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x102668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10266c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10266cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102670: 0x3e00008  jr          $ra
    ctx->pc = 0x102670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102670u;
            // 0x102674: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102650u: goto label_102650;
            case 0x102654u: goto label_102654;
            case 0x102668u: goto label_102668;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102678u;
}
