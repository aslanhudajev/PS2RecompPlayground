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
// Address: 0x12f558 - 0x12f5d4
void SyncDCache_0x12f558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SyncDCache_0x12f558");
#endif

    ctx->pc = 0x12f558u;

    // 0x12f558: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12f558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12f55c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12f55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12f560: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x12f560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x12f564: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12f564u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f568: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12f568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12f56c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12f56cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f570: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12f570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12f574: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x12f574u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x12f578: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x12f578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x12f57c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x12f57cu;
    SET_GPR_VEC(ctx, 16, PS2_PAND(GPR_VEC(ctx, 16), GPR_VEC(ctx, 2)));
    // 0x12f580: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F580u;
    {
        const bool branch_taken_0x12f580 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f580) {
            ctx->pc = 0x12F590u;
            goto label_12f590;
        }
    }
    ctx->pc = 0x12F588u;
    // 0x12f588: 0xc04de68  jal         func_1379A0
    ctx->pc = 0x12F588u;
    SET_GPR_U32(ctx, 31, 0x12F590u);
    ctx->pc = 0x1379A0u;
    if (runtime->hasFunction(0x1379A0u)) {
        auto targetFn = runtime->lookupFunction(0x1379A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F590u; }
        if (ctx->pc != 0x12F590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x1379a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F590u; }
        if (ctx->pc != 0x12F590u) { return; }
    }
    ctx->pc = 0x12F590u;
label_12f590:
    // 0x12f590: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x12f590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x12f594: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x12f594u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65472u)));
    // 0x12f598: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x12f598u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 17), GPR_VEC(ctx, 4)));
    // 0x12f59c: 0xc04bd2c  jal         func_12F4B0
    ctx->pc = 0x12F59Cu;
    SET_GPR_U32(ctx, 31, 0x12F5A4u);
    ctx->pc = 0x12F5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F59Cu;
            // 0x12f5a0: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 18), GPR_VEC(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F4B0u;
    if (runtime->hasFunction(0x12F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x12F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F5A4u; }
        if (ctx->pc != 0x12F5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceSDC_0x12f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F5A4u; }
        if (ctx->pc != 0x12F5A4u) { return; }
    }
    ctx->pc = 0x12F5A4u;
    // 0x12f5a4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12F5A4u;
    {
        const bool branch_taken_0x12f5a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F5A4u;
            // 0x12f5a8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f5a4) {
            ctx->pc = 0x12F5C0u;
            goto label_12f5c0;
        }
    }
    ctx->pc = 0x12F5ACu;
    // 0x12f5ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12f5acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f5b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x12f5b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f5b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12f5b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f5b8: 0x804de7a  j           func_1379E8
    ctx->pc = 0x12F5B8u;
    ctx->pc = 0x12F5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F5B8u;
            // 0x12f5bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1379E8u;
    if (runtime->hasFunction(0x1379E8u)) {
        auto targetFn = runtime->lookupFunction(0x1379E8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        EIntr_0x1379e8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x12F5C0u;
label_12f5c0:
    // 0x12f5c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12f5c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f5c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x12f5c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f5c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12f5c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x12F5CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F5CCu;
            // 0x12f5d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12F590u: goto label_12f590;
            case 0x12F5C0u: goto label_12f5c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12F5D4u;
}
