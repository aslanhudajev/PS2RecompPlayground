#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: videoDecMain
// Address: 0x11a308 - 0x11a378
void videoDecMain_0x11a308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11a308u;

    // 0x11a308: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11a308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11a30c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11a30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11a310: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11a310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a314: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a318: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11a318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11a31c: 0xc04705e  jal         func_11C178
    ctx->pc = 0x11A31Cu;
    SET_GPR_U32(ctx, 31, 0x11A324u);
    ctx->pc = 0x11A320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A31Cu;
            // 0x11a320: 0x26240048  addiu       $a0, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C178u;
    if (runtime->hasFunction(0x11C178u)) {
        auto targetFn = runtime->lookupFunction(0x11C178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A324u; }
        if (ctx->pc != 0x11A324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        viBufReset_0x11c178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A324u; }
        if (ctx->pc != 0x11A324u) { return; }
    }
    ctx->pc = 0x11A324u;
    // 0x11a324: 0x3c100075  lui         $s0, 0x75
    ctx->pc = 0x11a324u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)117 << 16));
    // 0x11a328: 0x2610e518  addiu       $s0, $s0, -0x1AE8
    ctx->pc = 0x11a328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960408));
    // 0x11a32c: 0xc046a48  jal         func_11A920
    ctx->pc = 0x11A32Cu;
    SET_GPR_U32(ctx, 31, 0x11A334u);
    ctx->pc = 0x11A330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A32Cu;
            // 0x11a330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A920u;
    if (runtime->hasFunction(0x11A920u)) {
        auto targetFn = runtime->lookupFunction(0x11A920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A334u; }
        if (ctx->pc != 0x11A334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        voBufReset_0x11a920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A334u; }
        if (ctx->pc != 0x11A334u) { return; }
    }
    ctx->pc = 0x11A334u;
    // 0x11a334: 0xc0468de  jal         func_11A378
    ctx->pc = 0x11A334u;
    SET_GPR_U32(ctx, 31, 0x11A33Cu);
    ctx->pc = 0x11A338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A334u;
            // 0x11a338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A378u;
    if (runtime->hasFunction(0x11A378u)) {
        auto targetFn = runtime->lookupFunction(0x11A378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A33Cu; }
        if (ctx->pc != 0x11A33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        decBs0_0x11a378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A33Cu; }
        if (ctx->pc != 0x11A33Cu) { return; }
    }
    ctx->pc = 0x11A33Cu;
    // 0x11a33c: 0x0  nop
    ctx->pc = 0x11a33cu;
    // NOP
label_11a340:
    // 0x11a340: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x11a340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11a344: 0x0  nop
    ctx->pc = 0x11a344u;
    // NOP
    // 0x11a348: 0x0  nop
    ctx->pc = 0x11a348u;
    // NOP
    // 0x11a34c: 0x0  nop
    ctx->pc = 0x11a34cu;
    // NOP
    // 0x11a350: 0x0  nop
    ctx->pc = 0x11a350u;
    // NOP
    // 0x11a354: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11A354u;
    {
        const bool branch_taken_0x11a354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a354) {
            ctx->pc = 0x11A340u;
            goto label_11a340;
        }
    }
    ctx->pc = 0x11A35Cu;
    // 0x11a35c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a360: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11a360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a364: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11a364u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a368: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x11a368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11a36c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a36cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a370: 0x8046852  j           func_11A148
    ctx->pc = 0x11A370u;
    ctx->pc = 0x11A374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A370u;
            // 0x11a374: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A148u;
    if (runtime->hasFunction(0x11A148u)) {
        auto targetFn = runtime->lookupFunction(0x11A148u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        videoDecSetState_0x11a148(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x11A378u;
}
