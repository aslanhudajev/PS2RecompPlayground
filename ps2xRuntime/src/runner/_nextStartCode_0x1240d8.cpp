#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _nextStartCode
// Address: 0x1240d8 - 0x124140
void _nextStartCode_0x1240d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_nextStartCode_0x1240d8");
#endif

    ctx->pc = 0x1240d8u;

    // 0x1240d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1240d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1240dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1240dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1240e0: 0xc048e84  jal         func_123A10
    ctx->pc = 0x1240E0u;
    SET_GPR_U32(ctx, 31, 0x1240E8u);
    ctx->pc = 0x1240E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1240E0u;
            // 0x1240e4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123A10u;
    if (runtime->hasFunction(0x123A10u)) {
        auto targetFn = runtime->lookupFunction(0x123A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1240E8u; }
        if (ctx->pc != 0x1240E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x123a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1240E8u; }
        if (ctx->pc != 0x1240E8u) { return; }
    }
    ctx->pc = 0x1240E8u;
    // 0x1240e8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1240e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1240ec: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x1240ecu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8224u)));
    // 0x1240f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1240f0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x1240f4: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x1240f4u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)7u)));
    // 0x1240f8: 0x31823  negu        $v1, $v1
    ctx->pc = 0x1240f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1240fc: 0x30640007  andi        $a0, $v1, 0x7
    ctx->pc = 0x1240fcu;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)7u)));
    // 0x124100: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x124100u;
    {
        const bool branch_taken_0x124100 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x124104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124100u;
            // 0x124104: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124100) {
            ctx->pc = 0x124120u;
            goto label_124120;
        }
    }
    ctx->pc = 0x124108u;
    // 0x124108: 0xc048f96  jal         func_123E58
    ctx->pc = 0x124108u;
    SET_GPR_U32(ctx, 31, 0x124110u);
    ctx->pc = 0x123E58u;
    if (runtime->hasFunction(0x123E58u)) {
        auto targetFn = runtime->lookupFunction(0x123E58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124110u; }
        if (ctx->pc != 0x124110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x123e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124110u; }
        if (ctx->pc != 0x124110u) { return; }
    }
    ctx->pc = 0x124110u;
    // 0x124110: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x124110u;
    {
        const bool branch_taken_0x124110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124110) {
            ctx->pc = 0x124120u;
            goto label_124120;
        }
    }
    ctx->pc = 0x124118u;
label_124118:
    // 0x124118: 0xc048f96  jal         func_123E58
    ctx->pc = 0x124118u;
    SET_GPR_U32(ctx, 31, 0x124120u);
    ctx->pc = 0x123E58u;
    if (runtime->hasFunction(0x123E58u)) {
        auto targetFn = runtime->lookupFunction(0x123E58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124120u; }
        if (ctx->pc != 0x124120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x123e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124120u; }
        if (ctx->pc != 0x124120u) { return; }
    }
    ctx->pc = 0x124120u;
label_124120:
    // 0x124120: 0xc048f48  jal         func_123D20
    ctx->pc = 0x124120u;
    SET_GPR_U32(ctx, 31, 0x124128u);
    ctx->pc = 0x124124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124120u;
            // 0x124124: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123D20u;
    if (runtime->hasFunction(0x123D20u)) {
        auto targetFn = runtime->lookupFunction(0x123D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124128u; }
        if (ctx->pc != 0x124128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _peepBit_0x123d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124128u; }
        if (ctx->pc != 0x124128u) { return; }
    }
    ctx->pc = 0x124128u;
    // 0x124128: 0x1450fffb  bne         $v0, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x124128u;
    {
        const bool branch_taken_0x124128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x12412Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124128u;
            // 0x12412c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124128) {
            ctx->pc = 0x124118u;
            goto label_124118;
        }
    }
    ctx->pc = 0x124130u;
    // 0x124130: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x124130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124134: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x124134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124138: 0x3e00008  jr          $ra
    ctx->pc = 0x124138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12413Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124138u;
            // 0x12413c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124118u: goto label_124118;
            case 0x124120u: goto label_124120;
            default: break;
        }
        return;
    }
    ctx->pc = 0x124140u;
}
