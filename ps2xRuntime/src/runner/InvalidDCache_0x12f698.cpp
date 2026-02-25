#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InvalidDCache
// Address: 0x12f698 - 0x12f714
void InvalidDCache_0x12f698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InvalidDCache_0x12f698");
#endif

    ctx->pc = 0x12f698u;

    // 0x12f698: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12f698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12f69c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12f69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12f6a0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x12f6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x12f6a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12f6a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f6a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12f6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12f6ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12f6acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f6b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12f6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12f6b4: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x12f6b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x12f6b8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x12f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x12f6bc: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x12f6bcu;
    SET_GPR_VEC(ctx, 16, PS2_PAND(GPR_VEC(ctx, 16), GPR_VEC(ctx, 2)));
    // 0x12f6c0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F6C0u;
    {
        const bool branch_taken_0x12f6c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f6c0) {
            ctx->pc = 0x12F6D0u;
            goto label_12f6d0;
        }
    }
    ctx->pc = 0x12F6C8u;
    // 0x12f6c8: 0xc04de68  jal         func_1379A0
    ctx->pc = 0x12F6C8u;
    SET_GPR_U32(ctx, 31, 0x12F6D0u);
    ctx->pc = 0x1379A0u;
    if (runtime->hasFunction(0x1379A0u)) {
        auto targetFn = runtime->lookupFunction(0x1379A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F6D0u; }
        if (ctx->pc != 0x12F6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x1379a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F6D0u; }
        if (ctx->pc != 0x12F6D0u) { return; }
    }
    ctx->pc = 0x12F6D0u;
label_12f6d0:
    // 0x12f6d0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x12f6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x12f6d4: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x12f6d4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65472u)));
    // 0x12f6d8: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x12f6d8u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 17), GPR_VEC(ctx, 4)));
    // 0x12f6dc: 0xc04bd7c  jal         func_12F5F0
    ctx->pc = 0x12F6DCu;
    SET_GPR_U32(ctx, 31, 0x12F6E4u);
    ctx->pc = 0x12F6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F6DCu;
            // 0x12f6e0: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 18), GPR_VEC(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F5F0u;
    if (runtime->hasFunction(0x12F5F0u)) {
        auto targetFn = runtime->lookupFunction(0x12F5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F6E4u; }
        if (ctx->pc != 0x12F6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceIDC_0x12f5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F6E4u; }
        if (ctx->pc != 0x12F6E4u) { return; }
    }
    ctx->pc = 0x12F6E4u;
    // 0x12f6e4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12F6E4u;
    {
        const bool branch_taken_0x12f6e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F6E4u;
            // 0x12f6e8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f6e4) {
            ctx->pc = 0x12F700u;
            goto label_12f700;
        }
    }
    ctx->pc = 0x12F6ECu;
    // 0x12f6ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12f6ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f6f0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x12f6f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f6f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12f6f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f6f8: 0x804de7a  j           func_1379E8
    ctx->pc = 0x12F6F8u;
    ctx->pc = 0x12F6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F6F8u;
            // 0x12f6fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1379E8u;
    if (runtime->hasFunction(0x1379E8u)) {
        auto targetFn = runtime->lookupFunction(0x1379E8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        EIntr_0x1379e8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x12F700u;
label_12f700:
    // 0x12f700: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12f700u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f704: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x12f704u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f708: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12f708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f70c: 0x3e00008  jr          $ra
    ctx->pc = 0x12F70Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F70Cu;
            // 0x12f710: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12F6D0u: goto label_12f6d0;
            case 0x12F700u: goto label_12f700;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12F714u;
}
