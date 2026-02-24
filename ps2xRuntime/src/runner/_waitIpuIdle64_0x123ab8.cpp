#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _waitIpuIdle64
// Address: 0x123ab8 - 0x123b68
void _waitIpuIdle64_0x123ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_waitIpuIdle64_0x123ab8");
#endif

    ctx->pc = 0x123ab8u;

    // 0x123ab8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x123ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x123abc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x123abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x123ac0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x123ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x123ac4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x123ac4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8192u)));
    // 0x123ac8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x123ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x123acc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x123accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123ad0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x123ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x123ad4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x123ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123ad8: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x123ad8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x123adc: 0x481001c  bgez        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x123ADCu;
    {
        const bool branch_taken_0x123adc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x123AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123ADCu;
            // 0x123ae0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123adc) {
            ctx->pc = 0x123B50u;
            goto label_123b50;
        }
    }
    ctx->pc = 0x123AE4u;
    // 0x123ae4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x123ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x123ae8: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x123ae8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8208u)));
    // 0x123aec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x123aecu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x123af0: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x123af0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)16384u)));
    // 0x123af4: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x123AF4u;
    {
        const bool branch_taken_0x123af4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x123AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123AF4u;
            // 0x123af8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123af4) {
            ctx->pc = 0x123B54u;
            goto label_123b54;
        }
    }
    ctx->pc = 0x123AFCu;
    // 0x123afc: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x123afcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x123b00: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x123b00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x123b04: 0x3c120017  lui         $s2, 0x17
    ctx->pc = 0x123b04u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)23 << 16));
    // 0x123b08: 0x36312000  ori         $s1, $s1, 0x2000
    ctx->pc = 0x123b08u;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)8192u)));
    // 0x123b0c: 0x36102010  ori         $s0, $s0, 0x2010
    ctx->pc = 0x123b0cu;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)8208u)));
    // 0x123b10: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x123b10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123b14: 0x0  nop
    ctx->pc = 0x123b14u;
    // NOP
label_123b18:
    // 0x123b18: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x123b18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x123b1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x123B1Cu;
    {
        const bool branch_taken_0x123b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123B1Cu;
            // 0x123b20: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b1c) {
            ctx->pc = 0x123B30u;
            goto label_123b30;
        }
    }
    ctx->pc = 0x123B24u;
    // 0x123b24: 0xc047df4  jal         func_11F7D0
    ctx->pc = 0x123B24u;
    SET_GPR_U32(ctx, 31, 0x123B2Cu);
    ctx->pc = 0x123B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123B24u;
            // 0x123b28: 0x8e4417bc  lw          $a0, 0x17BC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6076)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F7D0u;
    if (runtime->hasFunction(0x11F7D0u)) {
        auto targetFn = runtime->lookupFunction(0x11F7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123B2Cu; }
        if (ctx->pc != 0x123B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x11f7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123B2Cu; }
        if (ctx->pc != 0x123B2Cu) { return; }
    }
    ctx->pc = 0x123B2Cu;
    // 0x123b2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x123b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123b30:
    // 0x123b30: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x123b30u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x123b34: 0x4810006  bgez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x123B34u;
    {
        const bool branch_taken_0x123b34 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x123B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123B34u;
            // 0x123b38: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b34) {
            ctx->pc = 0x123B50u;
            goto label_123b50;
        }
    }
    ctx->pc = 0x123B3Cu;
    // 0x123b3c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x123b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x123b40: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x123b40u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)16384u)));
    // 0x123b44: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x123B44u;
    {
        const bool branch_taken_0x123b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123B44u;
            // 0x123b48: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b44) {
            ctx->pc = 0x123B18u;
            goto label_123b18;
        }
    }
    ctx->pc = 0x123B4Cu;
    // 0x123b4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x123b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_123b50:
    // 0x123b50: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x123b50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_123b54:
    // 0x123b54: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x123b54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123b58: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x123b58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123b5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123b5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123b60: 0x3e00008  jr          $ra
    ctx->pc = 0x123B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123B60u;
            // 0x123b64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x123B18u: goto label_123b18;
            case 0x123B30u: goto label_123b30;
            case 0x123B50u: goto label_123b50;
            case 0x123B54u: goto label_123b54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x123B68u;
}
