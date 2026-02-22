#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: audioDecCreate
// Address: 0x119660 - 0x119750
void audioDecCreate_0x119660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x119660u;

    // 0x119660: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x119660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x119664: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x119664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x119668: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11966c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11966cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119670: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x119670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x119674: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x119674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119678: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x119678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11967c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11967cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119680: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x119680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x119684: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x119684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x119688: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x119688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x11968c: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x11968cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    // 0x119690: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x119690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
    // 0x119694: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x119694u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x119698: 0xae300048  sw          $s0, 0x48($s1)
    ctx->pc = 0x119698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 16));
    // 0x11969c: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x11969cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x1196a0: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x1196a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x1196a4: 0xae250030  sw          $a1, 0x30($s1)
    ctx->pc = 0x1196a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 5));
    // 0x1196a8: 0xc045066  jal         func_114198
    ctx->pc = 0x1196A8u;
    SET_GPR_U32(ctx, 31, 0x1196B0u);
    ctx->pc = 0x1196ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1196A8u;
            // 0x1196ac: 0xae26003c  sw          $a2, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114198u;
    if (runtime->hasFunction(0x114198u)) {
        auto targetFn = runtime->lookupFunction(0x114198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1196B0u; }
        if (ctx->pc != 0x1196B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifAllocIopHeap_0x114198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1196B0u; }
        if (ctx->pc != 0x1196B0u) { return; }
    }
    ctx->pc = 0x1196B0u;
    // 0x1196b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1196b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1196b4: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1196B4u;
    {
        const bool branch_taken_0x1196b4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1196B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1196B4u;
            // 0x1196b8: 0xae250044  sw          $a1, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1196b4) {
            ctx->pc = 0x1196E0u;
            goto label_1196e0;
        }
    }
    ctx->pc = 0x1196BCu;
    // 0x1196bc: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x1196bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x1196c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1196c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1196c4: 0x24524490  addiu       $s2, $v0, 0x4490
    ctx->pc = 0x1196c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 17552));
    // 0x1196c8: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x1196C8u;
    SET_GPR_U32(ctx, 31, 0x1196D0u);
    ctx->pc = 0x1196CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1196C8u;
            // 0x1196cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1196D0u; }
        if (ctx->pc != 0x1196D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1196D0u; }
        if (ctx->pc != 0x1196D0u) { return; }
    }
    ctx->pc = 0x1196D0u;
    // 0x1196d0: 0xc045066  jal         func_114198
    ctx->pc = 0x1196D0u;
    SET_GPR_U32(ctx, 31, 0x1196D8u);
    ctx->pc = 0x1196D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1196D0u;
            // 0x1196d4: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114198u;
    if (runtime->hasFunction(0x114198u)) {
        auto targetFn = runtime->lookupFunction(0x114198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1196D8u; }
        if (ctx->pc != 0x1196D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifAllocIopHeap_0x114198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1196D8u; }
        if (ctx->pc != 0x1196D8u) { return; }
    }
    ctx->pc = 0x1196D8u;
    // 0x1196d8: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1196D8u;
    {
        const bool branch_taken_0x1196d8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1196DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1196D8u;
            // 0x1196dc: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1196d8) {
            ctx->pc = 0x1196F4u;
            goto label_1196f4;
        }
    }
    ctx->pc = 0x1196E0u;
label_1196e0:
    // 0x1196e0: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x1196e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x1196e4: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x1196E4u;
    SET_GPR_U32(ctx, 31, 0x1196ECu);
    ctx->pc = 0x1196E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1196E4u;
            // 0x1196e8: 0x24844470  addiu       $a0, $a0, 0x4470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1196ECu; }
        if (ctx->pc != 0x1196ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1196ECu; }
        if (ctx->pc != 0x1196ECu) { return; }
    }
    ctx->pc = 0x1196ECu;
    // 0x1196ec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1196ECu;
    {
        const bool branch_taken_0x1196ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1196F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1196ECu;
            // 0x1196f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1196ec) {
            ctx->pc = 0x119738u;
            goto label_119738;
        }
    }
    ctx->pc = 0x1196F4u;
label_1196f4:
    // 0x1196f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1196f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1196f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1196f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1196fc: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x1196FCu;
    SET_GPR_U32(ctx, 31, 0x119704u);
    ctx->pc = 0x119700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1196FCu;
            // 0x119700: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119704u; }
        if (ctx->pc != 0x119704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119704u; }
        if (ctx->pc != 0x119704u) { return; }
    }
    ctx->pc = 0x119704u;
    // 0x119704: 0x3c100075  lui         $s0, 0x75
    ctx->pc = 0x119704u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)117 << 16));
    // 0x119708: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x119708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11970c: 0x2610d040  addiu       $s0, $s0, -0x2FC0
    ctx->pc = 0x11970cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955072));
    // 0x119710: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x119710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x119714: 0xc04aca0  jal         func_12B280
    ctx->pc = 0x119714u;
    SET_GPR_U32(ctx, 31, 0x11971Cu);
    ctx->pc = 0x119718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119714u;
            // 0x119718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B280u;
    if (runtime->hasFunction(0x12B280u)) {
        auto targetFn = runtime->lookupFunction(0x12B280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11971Cu; }
        if (ctx->pc != 0x11971Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x12b280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11971Cu; }
        if (ctx->pc != 0x11971Cu) { return; }
    }
    ctx->pc = 0x11971Cu;
    // 0x11971c: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x11971cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x119720: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x119720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119724: 0xc0467a2  jal         func_119E88
    ctx->pc = 0x119724u;
    SET_GPR_U32(ctx, 31, 0x11972Cu);
    ctx->pc = 0x119728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119724u;
            // 0x119728: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119E88u;
    if (runtime->hasFunction(0x119E88u)) {
        auto targetFn = runtime->lookupFunction(0x119E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11972Cu; }
        if (ctx->pc != 0x11972Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP_0x119e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11972Cu; }
        if (ctx->pc != 0x11972Cu) { return; }
    }
    ctx->pc = 0x11972Cu;
    // 0x11972c: 0xc0467c0  jal         func_119F00
    ctx->pc = 0x11972Cu;
    SET_GPR_U32(ctx, 31, 0x119734u);
    ctx->pc = 0x119730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11972Cu;
            // 0x119730: 0x24043fff  addiu       $a0, $zero, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119F00u;
    if (runtime->hasFunction(0x119F00u)) {
        auto targetFn = runtime->lookupFunction(0x119F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119734u; }
        if (ctx->pc != 0x119734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        changeMasterVolume_0x119f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119734u; }
        if (ctx->pc != 0x119734u) { return; }
    }
    ctx->pc = 0x119734u;
    // 0x119734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x119734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_119738:
    // 0x119738: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x119738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11973c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11973cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119740: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x119740u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119744: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119748: 0x3e00008  jr          $ra
    ctx->pc = 0x119748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11974Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119748u;
            // 0x11974c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1196E0u: goto label_1196e0;
            case 0x1196F4u: goto label_1196f4;
            case 0x119738u: goto label_119738;
            default: break;
        }
        return;
    }
    ctx->pc = 0x119750u;
}
