#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: DisableIntc
// Address: 0x12f740 - 0x12f7a8
void DisableIntc_0x12f740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("DisableIntc_0x12f740");
#endif

    ctx->pc = 0x12f740u;

    // 0x12f740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12f740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12f744: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x12f744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x12f748: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12f748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12f74c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12f74cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f750: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12f750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12f754: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x12f754u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x12f758: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x12f758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x12f75c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x12f75cu;
    SET_GPR_VEC(ctx, 16, PS2_PAND(GPR_VEC(ctx, 16), GPR_VEC(ctx, 2)));
    // 0x12f760: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F760u;
    {
        const bool branch_taken_0x12f760 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f760) {
            ctx->pc = 0x12F770u;
            goto label_12f770;
        }
    }
    ctx->pc = 0x12F768u;
    // 0x12f768: 0xc04de68  jal         func_1379A0
    ctx->pc = 0x12F768u;
    SET_GPR_U32(ctx, 31, 0x12F770u);
    ctx->pc = 0x1379A0u;
    if (runtime->hasFunction(0x1379A0u)) {
        auto targetFn = runtime->lookupFunction(0x1379A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F770u; }
        if (ctx->pc != 0x12F770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x1379a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F770u; }
        if (ctx->pc != 0x12F770u) { return; }
    }
    ctx->pc = 0x12F770u;
label_12f770:
    // 0x12f770: 0xc04ba6c  jal         func_12E9B0
    ctx->pc = 0x12F770u;
    SET_GPR_U32(ctx, 31, 0x12F778u);
    ctx->pc = 0x12F774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F770u;
            // 0x12f774: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E9B0u;
    if (runtime->hasFunction(0x12E9B0u)) {
        auto targetFn = runtime->lookupFunction(0x12E9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F778u; }
        if (ctx->pc != 0x12F778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__DisableIntc_0x12e9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F778u; }
        if (ctx->pc != 0x12F778u) { return; }
    }
    ctx->pc = 0x12F778u;
    // 0x12f778: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12f778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f77c: 0xf  sync
    ctx->pc = 0x12f77cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x12f780: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F780u;
    {
        const bool branch_taken_0x12f780 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F780u;
            // 0x12f784: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f780) {
            ctx->pc = 0x12F794u;
            goto label_12f794;
        }
    }
    ctx->pc = 0x12F788u;
    // 0x12f788: 0xc04de7a  jal         func_1379E8
    ctx->pc = 0x12F788u;
    SET_GPR_U32(ctx, 31, 0x12F790u);
    ctx->pc = 0x1379E8u;
    if (runtime->hasFunction(0x1379E8u)) {
        auto targetFn = runtime->lookupFunction(0x1379E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F790u; }
        if (ctx->pc != 0x12F790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x1379e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F790u; }
        if (ctx->pc != 0x12F790u) { return; }
    }
    ctx->pc = 0x12F790u;
    // 0x12f790: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12f790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12f794:
    // 0x12f794: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12f794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f798: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x12f798u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f79c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12f79cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x12F7A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F7A0u;
            // 0x12f7a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12F770u: goto label_12f770;
            case 0x12F794u: goto label_12f794;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12F7A8u;
}
