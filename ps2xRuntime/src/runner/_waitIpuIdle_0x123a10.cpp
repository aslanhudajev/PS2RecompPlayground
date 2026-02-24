#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _waitIpuIdle
// Address: 0x123a10 - 0x123ab4
void _waitIpuIdle_0x123a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_waitIpuIdle_0x123a10");
#endif

    ctx->pc = 0x123a10u;

    // 0x123a10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x123a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x123a14: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x123a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x123a18: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x123a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x123a1c: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x123a1cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8208u)));
    // 0x123a20: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x123a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x123a24: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x123a24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x123a28: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x123a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x123a2c: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x123a2cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)16384u)));
    // 0x123a30: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x123a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x123a34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x123a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123a38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x123a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123a3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x123a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x123a40: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x123a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x123a44: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x123a44u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x123a48: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x123A48u;
    {
        const bool branch_taken_0x123a48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x123A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123A48u;
            // 0x123a4c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123a48) {
            ctx->pc = 0x123A9Cu;
            goto label_123a9c;
        }
    }
    ctx->pc = 0x123A50u;
    // 0x123a50: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x123a50u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x123a54: 0x3c108000  lui         $s0, 0x8000
    ctx->pc = 0x123a54u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32768 << 16));
    // 0x123a58: 0x3c130017  lui         $s3, 0x17
    ctx->pc = 0x123a58u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)23 << 16));
    // 0x123a5c: 0x36312010  ori         $s1, $s1, 0x2010
    ctx->pc = 0x123a5cu;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)8208u)));
    // 0x123a60: 0x36104000  ori         $s0, $s0, 0x4000
    ctx->pc = 0x123a60u;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)16384u)));
    // 0x123a64: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x123a64u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    // 0x123a68: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x123a68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123a6c: 0x0  nop
    ctx->pc = 0x123a6cu;
    // NOP
label_123a70:
    // 0x123a70: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x123a70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x123a74: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x123A74u;
    {
        const bool branch_taken_0x123a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123A74u;
            // 0x123a78: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123a74) {
            ctx->pc = 0x123A88u;
            goto label_123a88;
        }
    }
    ctx->pc = 0x123A7Cu;
    // 0x123a7c: 0xc047df4  jal         func_11F7D0
    ctx->pc = 0x123A7Cu;
    SET_GPR_U32(ctx, 31, 0x123A84u);
    ctx->pc = 0x123A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123A7Cu;
            // 0x123a80: 0x8e6417bc  lw          $a0, 0x17BC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6076)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F7D0u;
    if (runtime->hasFunction(0x11F7D0u)) {
        auto targetFn = runtime->lookupFunction(0x11F7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123A84u; }
        if (ctx->pc != 0x123A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x11f7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123A84u; }
        if (ctx->pc != 0x123A84u) { return; }
    }
    ctx->pc = 0x123A84u;
    // 0x123a84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x123a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123a88:
    // 0x123a88: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x123a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x123a8c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x123a8cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 16)));
    // 0x123a90: 0x1052fff7  beq         $v0, $s2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x123A90u;
    {
        const bool branch_taken_0x123a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x123A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123A90u;
            // 0x123a94: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123a90) {
            ctx->pc = 0x123A70u;
            goto label_123a70;
        }
    }
    ctx->pc = 0x123A98u;
    // 0x123a98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x123a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_123a9c:
    // 0x123a9c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x123a9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x123aa0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x123aa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123aa4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x123aa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123aa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123aa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123aac: 0x3e00008  jr          $ra
    ctx->pc = 0x123AACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123AACu;
            // 0x123ab0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x123A70u: goto label_123a70;
            case 0x123A88u: goto label_123a88;
            case 0x123A9Cu: goto label_123a9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x123AB4u;
}
