#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: DisableDmac
// Address: 0x12f810 - 0x12f878
void DisableDmac_0x12f810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("DisableDmac_0x12f810");
#endif

    ctx->pc = 0x12f810u;

    // 0x12f810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12f810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12f814: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x12f814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x12f818: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12f818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12f81c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12f81cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f820: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12f820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12f824: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x12f824u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x12f828: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x12f828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x12f82c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x12f82cu;
    SET_GPR_VEC(ctx, 16, PS2_PAND(GPR_VEC(ctx, 16), GPR_VEC(ctx, 2)));
    // 0x12f830: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F830u;
    {
        const bool branch_taken_0x12f830 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f830) {
            ctx->pc = 0x12F840u;
            goto label_12f840;
        }
    }
    ctx->pc = 0x12F838u;
    // 0x12f838: 0xc04de68  jal         func_1379A0
    ctx->pc = 0x12F838u;
    SET_GPR_U32(ctx, 31, 0x12F840u);
    ctx->pc = 0x1379A0u;
    if (runtime->hasFunction(0x1379A0u)) {
        auto targetFn = runtime->lookupFunction(0x1379A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F840u; }
        if (ctx->pc != 0x12F840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x1379a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F840u; }
        if (ctx->pc != 0x12F840u) { return; }
    }
    ctx->pc = 0x12F840u;
label_12f840:
    // 0x12f840: 0xc04ba74  jal         func_12E9D0
    ctx->pc = 0x12F840u;
    SET_GPR_U32(ctx, 31, 0x12F848u);
    ctx->pc = 0x12F844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F840u;
            // 0x12f844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E9D0u;
    if (runtime->hasFunction(0x12E9D0u)) {
        auto targetFn = runtime->lookupFunction(0x12E9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F848u; }
        if (ctx->pc != 0x12F848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__DisableDmac_0x12e9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F848u; }
        if (ctx->pc != 0x12F848u) { return; }
    }
    ctx->pc = 0x12F848u;
    // 0x12f848: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12f848u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f84c: 0xf  sync
    ctx->pc = 0x12f84cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x12f850: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F850u;
    {
        const bool branch_taken_0x12f850 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F850u;
            // 0x12f854: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f850) {
            ctx->pc = 0x12F864u;
            goto label_12f864;
        }
    }
    ctx->pc = 0x12F858u;
    // 0x12f858: 0xc04de7a  jal         func_1379E8
    ctx->pc = 0x12F858u;
    SET_GPR_U32(ctx, 31, 0x12F860u);
    ctx->pc = 0x1379E8u;
    if (runtime->hasFunction(0x1379E8u)) {
        auto targetFn = runtime->lookupFunction(0x1379E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F860u; }
        if (ctx->pc != 0x12F860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x1379e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F860u; }
        if (ctx->pc != 0x12F860u) { return; }
    }
    ctx->pc = 0x12F860u;
    // 0x12f860: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12f860u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12f864:
    // 0x12f864: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12f864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f868: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x12f868u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f86c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12f86cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f870: 0x3e00008  jr          $ra
    ctx->pc = 0x12F870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F870u;
            // 0x12f874: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12F840u: goto label_12f840;
            case 0x12F864u: goto label_12f864;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12F878u;
}
