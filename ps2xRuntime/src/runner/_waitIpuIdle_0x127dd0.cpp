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
// Address: 0x127dd0 - 0x127e74
void _waitIpuIdle_0x127dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_waitIpuIdle_0x127dd0");
#endif

    ctx->pc = 0x127dd0u;

    // 0x127dd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x127dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x127dd4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x127dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x127dd8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x127dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x127ddc: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x127ddcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8208u)));
    // 0x127de0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x127de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x127de4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x127de4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x127de8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x127de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x127dec: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x127decu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)16384u)));
    // 0x127df0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x127df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x127df4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x127df4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127df8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x127df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x127dfc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x127dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127e00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x127e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x127e04: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x127e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x127e08: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x127e08u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x127e0c: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x127E0Cu;
    {
        const bool branch_taken_0x127e0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x127E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127E0Cu;
            // 0x127e10: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127e0c) {
            ctx->pc = 0x127E5Cu;
            goto label_127e5c;
        }
    }
    ctx->pc = 0x127E14u;
    // 0x127e14: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x127e14u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x127e18: 0x3c108000  lui         $s0, 0x8000
    ctx->pc = 0x127e18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32768 << 16));
    // 0x127e1c: 0x36312010  ori         $s1, $s1, 0x2010
    ctx->pc = 0x127e1cu;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)8208u)));
    // 0x127e20: 0x36104000  ori         $s0, $s0, 0x4000
    ctx->pc = 0x127e20u;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)16384u)));
    // 0x127e24: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x127e24u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x127e28: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x127e28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127e2c: 0x0  nop
    ctx->pc = 0x127e2cu;
    // NOP
label_127e30:
    // 0x127e30: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x127e30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x127e34: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x127E34u;
    {
        const bool branch_taken_0x127e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127E34u;
            // 0x127e38: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127e34) {
            ctx->pc = 0x127E48u;
            goto label_127e48;
        }
    }
    ctx->pc = 0x127E3Cu;
    // 0x127e3c: 0xc04ae14  jal         func_12B850
    ctx->pc = 0x127E3Cu;
    SET_GPR_U32(ctx, 31, 0x127E44u);
    ctx->pc = 0x127E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127E3Cu;
            // 0x127e40: 0x8e440858  lw          $a0, 0x858($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B850u;
    if (runtime->hasFunction(0x12B850u)) {
        auto targetFn = runtime->lookupFunction(0x12B850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127E44u; }
        if (ctx->pc != 0x127E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x12b850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127E44u; }
        if (ctx->pc != 0x127E44u) { return; }
    }
    ctx->pc = 0x127E44u;
    // 0x127e44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x127e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127e48:
    // 0x127e48: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x127e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x127e4c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x127e4cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 16)));
    // 0x127e50: 0x1053fff7  beq         $v0, $s3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x127E50u;
    {
        const bool branch_taken_0x127e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x127E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127E50u;
            // 0x127e54: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127e50) {
            ctx->pc = 0x127E30u;
            goto label_127e30;
        }
    }
    ctx->pc = 0x127E58u;
    // 0x127e58: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x127e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_127e5c:
    // 0x127e5c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x127e5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x127e60: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x127e60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127e64: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x127e64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127e68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x127e68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x127E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127E6Cu;
            // 0x127e70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x127E30u: goto label_127e30;
            case 0x127E48u: goto label_127e48;
            case 0x127E5Cu: goto label_127e5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x127E74u;
}
