#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DisableIntc
// Address: 0x10ea48 - 0x10eab0
void DisableIntc_0x10ea48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10ea48u;

    // 0x10ea48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10ea48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10ea4c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10ea4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10ea50: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10ea50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10ea54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10ea54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ea58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ea58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ea5c: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x10ea5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x10ea60: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10ea60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10ea64: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x10ea64u;
    SET_GPR_VEC(ctx, 16, PS2_PAND(GPR_VEC(ctx, 16), GPR_VEC(ctx, 2)));
    // 0x10ea68: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10EA68u;
    {
        const bool branch_taken_0x10ea68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ea68) {
            ctx->pc = 0x10EA78u;
            goto label_10ea78;
        }
    }
    ctx->pc = 0x10EA70u;
    // 0x10ea70: 0xc0453ee  jal         func_114FB8
    ctx->pc = 0x10EA70u;
    SET_GPR_U32(ctx, 31, 0x10EA78u);
    ctx->pc = 0x114FB8u;
    if (runtime->hasFunction(0x114FB8u)) {
        auto targetFn = runtime->lookupFunction(0x114FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EA78u; }
        if (ctx->pc != 0x10EA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x114fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EA78u; }
        if (ctx->pc != 0x10EA78u) { return; }
    }
    ctx->pc = 0x10EA78u;
label_10ea78:
    // 0x10ea78: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x10EA78u;
    SET_GPR_U32(ctx, 31, 0x10EA80u);
    ctx->pc = 0x10EA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EA78u;
            // 0x10ea7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (runtime->hasFunction(0x10DFF0u)) {
        auto targetFn = runtime->lookupFunction(0x10DFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EA80u; }
        if (ctx->pc != 0x10EA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__DisableIntc_0x10dff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EA80u; }
        if (ctx->pc != 0x10EA80u) { return; }
    }
    ctx->pc = 0x10EA80u;
    // 0x10ea80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10ea80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ea84: 0xf  sync
    ctx->pc = 0x10ea84u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10ea88: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10EA88u;
    {
        const bool branch_taken_0x10ea88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EA88u;
            // 0x10ea8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea88) {
            ctx->pc = 0x10EA9Cu;
            goto label_10ea9c;
        }
    }
    ctx->pc = 0x10EA90u;
    // 0x10ea90: 0xc045400  jal         func_115000
    ctx->pc = 0x10EA90u;
    SET_GPR_U32(ctx, 31, 0x10EA98u);
    ctx->pc = 0x115000u;
    if (runtime->hasFunction(0x115000u)) {
        auto targetFn = runtime->lookupFunction(0x115000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EA98u; }
        if (ctx->pc != 0x10EA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x115000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EA98u; }
        if (ctx->pc != 0x10EA98u) { return; }
    }
    ctx->pc = 0x10EA98u;
    // 0x10ea98: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10ea98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10ea9c:
    // 0x10ea9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10ea9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10eaa0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10eaa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10eaa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10eaa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10eaa8: 0x3e00008  jr          $ra
    ctx->pc = 0x10EAA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EAA8u;
            // 0x10eaac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10EA78u: goto label_10ea78;
            case 0x10EA9Cu: goto label_10ea9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10EAB0u;
}
