#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnableIntc
// Address: 0x12f7a8 - 0x12f810
void EnableIntc_0x12f7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnableIntc_0x12f7a8");
#endif

    ctx->pc = 0x12f7a8u;

    // 0x12f7a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12f7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12f7ac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x12f7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x12f7b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12f7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12f7b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12f7b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f7b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12f7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12f7bc: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x12f7bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x12f7c0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x12f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x12f7c4: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x12f7c4u;
    SET_GPR_VEC(ctx, 16, PS2_PAND(GPR_VEC(ctx, 16), GPR_VEC(ctx, 2)));
    // 0x12f7c8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F7C8u;
    {
        const bool branch_taken_0x12f7c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f7c8) {
            ctx->pc = 0x12F7D8u;
            goto label_12f7d8;
        }
    }
    ctx->pc = 0x12F7D0u;
    // 0x12f7d0: 0xc04de68  jal         func_1379A0
    ctx->pc = 0x12F7D0u;
    SET_GPR_U32(ctx, 31, 0x12F7D8u);
    ctx->pc = 0x1379A0u;
    if (runtime->hasFunction(0x1379A0u)) {
        auto targetFn = runtime->lookupFunction(0x1379A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F7D8u; }
        if (ctx->pc != 0x12F7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x1379a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F7D8u; }
        if (ctx->pc != 0x12F7D8u) { return; }
    }
    ctx->pc = 0x12F7D8u;
label_12f7d8:
    // 0x12f7d8: 0xc04ba68  jal         func_12E9A0
    ctx->pc = 0x12F7D8u;
    SET_GPR_U32(ctx, 31, 0x12F7E0u);
    ctx->pc = 0x12F7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F7D8u;
            // 0x12f7dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E9A0u;
    if (runtime->hasFunction(0x12E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x12E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F7E0u; }
        if (ctx->pc != 0x12F7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__EnableIntc_0x12e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F7E0u; }
        if (ctx->pc != 0x12F7E0u) { return; }
    }
    ctx->pc = 0x12F7E0u;
    // 0x12f7e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12f7e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f7e4: 0xf  sync
    ctx->pc = 0x12f7e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x12f7e8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F7E8u;
    {
        const bool branch_taken_0x12f7e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F7E8u;
            // 0x12f7ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f7e8) {
            ctx->pc = 0x12F7FCu;
            goto label_12f7fc;
        }
    }
    ctx->pc = 0x12F7F0u;
    // 0x12f7f0: 0xc04de7a  jal         func_1379E8
    ctx->pc = 0x12F7F0u;
    SET_GPR_U32(ctx, 31, 0x12F7F8u);
    ctx->pc = 0x1379E8u;
    if (runtime->hasFunction(0x1379E8u)) {
        auto targetFn = runtime->lookupFunction(0x1379E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F7F8u; }
        if (ctx->pc != 0x12F7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x1379e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F7F8u; }
        if (ctx->pc != 0x12F7F8u) { return; }
    }
    ctx->pc = 0x12F7F8u;
    // 0x12f7f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12f7f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12f7fc:
    // 0x12f7fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12f7fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f800: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x12f800u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f804: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12f804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f808: 0x3e00008  jr          $ra
    ctx->pc = 0x12F808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F808u;
            // 0x12f80c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12F7D8u: goto label_12f7d8;
            case 0x12F7FCu: goto label_12f7fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12F810u;
}
