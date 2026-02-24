#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SyncDCache
// Address: 0x1310f0 - 0x13116c
void SyncDCache_0x1310f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SyncDCache_0x1310f0");
#endif

    ctx->pc = 0x1310f0u;

    // 0x1310f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1310f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1310f4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1310f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1310f8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1310f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1310fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1310fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131100: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x131100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x131104: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x131104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131108: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x131108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13110c: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x13110cu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x131110: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x131110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x131114: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x131114u;
    SET_GPR_VEC(ctx, 16, PS2_PAND(GPR_VEC(ctx, 16), GPR_VEC(ctx, 2)));
    // 0x131118: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x131118u;
    {
        const bool branch_taken_0x131118 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x131118) {
            ctx->pc = 0x131128u;
            goto label_131128;
        }
    }
    ctx->pc = 0x131120u;
    // 0x131120: 0xc0453ee  jal         func_114FB8
    ctx->pc = 0x131120u;
    SET_GPR_U32(ctx, 31, 0x131128u);
    ctx->pc = 0x114FB8u;
    if (runtime->hasFunction(0x114FB8u)) {
        auto targetFn = runtime->lookupFunction(0x114FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131128u; }
        if (ctx->pc != 0x131128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x114fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131128u; }
        if (ctx->pc != 0x131128u) { return; }
    }
    ctx->pc = 0x131128u;
label_131128:
    // 0x131128: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x131128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x13112c: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x13112cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65472u)));
    // 0x131130: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x131130u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 17), GPR_VEC(ctx, 4)));
    // 0x131134: 0xc04c412  jal         func_131048
    ctx->pc = 0x131134u;
    SET_GPR_U32(ctx, 31, 0x13113Cu);
    ctx->pc = 0x131138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131134u;
            // 0x131138: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 18), GPR_VEC(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131048u;
    if (runtime->hasFunction(0x131048u)) {
        auto targetFn = runtime->lookupFunction(0x131048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13113Cu; }
        if (ctx->pc != 0x13113Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceSDC_0x131048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13113Cu; }
        if (ctx->pc != 0x13113Cu) { return; }
    }
    ctx->pc = 0x13113Cu;
    // 0x13113c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13113Cu;
    {
        const bool branch_taken_0x13113c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x131140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13113Cu;
            // 0x131140: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13113c) {
            ctx->pc = 0x131158u;
            goto label_131158;
        }
    }
    ctx->pc = 0x131144u;
    // 0x131144: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x131144u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131148: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x131148u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13114c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13114cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131150: 0x8045400  j           func_115000
    ctx->pc = 0x131150u;
    ctx->pc = 0x131154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131150u;
            // 0x131154: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115000u;
    if (runtime->hasFunction(0x115000u)) {
        auto targetFn = runtime->lookupFunction(0x115000u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        EIntr_0x115000(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x131158u;
label_131158:
    // 0x131158: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x131158u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13115c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x13115cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131160: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x131160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131164: 0x3e00008  jr          $ra
    ctx->pc = 0x131164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131164u;
            // 0x131168: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131128u: goto label_131128;
            case 0x131158u: goto label_131158;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13116Cu;
}
