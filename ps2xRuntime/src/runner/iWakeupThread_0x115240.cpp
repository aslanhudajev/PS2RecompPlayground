#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iWakeupThread
// Address: 0x115240 - 0x1152d4
void iWakeupThread_0x115240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x115240u;

    // 0x115240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x115240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x115244: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x115244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x115248: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x115248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11524c: 0x2403ffd1  addiu       $v1, $zero, -0x2F
    ctx->pc = 0x11524cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967249));
    // 0x115250: 0xc  syscall     0
    ctx->pc = 0x115250u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x115254: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x115254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115258: 0x12040005  beq         $s0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x115258u;
    {
        const bool branch_taken_0x115258 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x11525Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115258u;
            // 0x11525c: 0x2e020100  sltiu       $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115258) {
            ctx->pc = 0x115270u;
            goto label_115270;
        }
    }
    ctx->pc = 0x115260u;
    // 0x115260: 0xc043878  jal         func_10E1E0
    ctx->pc = 0x115260u;
    SET_GPR_U32(ctx, 31, 0x115268u);
    ctx->pc = 0x10E1E0u;
    if (runtime->hasFunction(0x10E1E0u)) {
        auto targetFn = runtime->lookupFunction(0x10E1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115268u; }
        if (ctx->pc != 0x115268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _iWakeupThread_0x10e1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115268u; }
        if (ctx->pc != 0x115268u) { return; }
    }
    ctx->pc = 0x115268u;
    // 0x115268: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x115268u;
    {
        const bool branch_taken_0x115268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11526Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115268u;
            // 0x11526c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115268) {
            ctx->pc = 0x1152C8u;
            goto label_1152c8;
        }
    }
    ctx->pc = 0x115270u;
label_115270:
    // 0x115270: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115270u;
    {
        const bool branch_taken_0x115270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115270u;
            // 0x115274: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115270) {
            ctx->pc = 0x115284u;
            goto label_115284;
        }
    }
    ctx->pc = 0x115278u;
    // 0x115278: 0x8c43fbd8  lw          $v1, -0x428($v0)
    ctx->pc = 0x115278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966232)));
    // 0x11527c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11527Cu;
    {
        const bool branch_taken_0x11527c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x115280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11527Cu;
            // 0x115280: 0x3c030018  lui         $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11527c) {
            ctx->pc = 0x11528Cu;
            goto label_11528c;
        }
    }
    ctx->pc = 0x115284u;
label_115284:
    // 0x115284: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x115284u;
    {
        const bool branch_taken_0x115284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115284u;
            // 0x115288: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115284) {
            ctx->pc = 0x1152C4u;
            goto label_1152c4;
        }
    }
    ctx->pc = 0x11528Cu;
label_11528c:
    // 0x11528c: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x11528cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x115290: 0x2463a2f8  addiu       $v1, $v1, -0x5D08
    ctx->pc = 0x115290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943480));
    // 0x115294: 0x8ca4a2f0  lw          $a0, -0x5D10($a1)
    ctx->pc = 0x115294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294943472)));
    // 0x115298: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x115298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x11529c: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x11529cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)511u)));
    // 0x1152a0: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x1152a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1152a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1152a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1152a8: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1152a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1152ac: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1152acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1152b0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1152b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1152b4: 0xa0a00008  sb          $zero, 0x8($a1)
    ctx->pc = 0x1152b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1152b8: 0xc0438b4  jal         func_10E2D0
    ctx->pc = 0x1152B8u;
    SET_GPR_U32(ctx, 31, 0x1152C0u);
    ctx->pc = 0x1152BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1152B8u;
            // 0x1152bc: 0xa0700009  sb          $s0, 0x9($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E2D0u;
    if (runtime->hasFunction(0x10E2D0u)) {
        auto targetFn = runtime->lookupFunction(0x10E2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1152C0u; }
        if (ctx->pc != 0x1152C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iSignalSema_0x10e2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1152C0u; }
        if (ctx->pc != 0x1152C0u) { return; }
    }
    ctx->pc = 0x1152C0u;
    // 0x1152c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1152c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1152c4:
    // 0x1152c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1152c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1152c8:
    // 0x1152c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1152c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1152cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1152CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1152D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1152CCu;
            // 0x1152d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x115270u: goto label_115270;
            case 0x115284u: goto label_115284;
            case 0x11528Cu: goto label_11528c;
            case 0x1152C4u: goto label_1152c4;
            case 0x1152C8u: goto label_1152c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1152D4u;
}
