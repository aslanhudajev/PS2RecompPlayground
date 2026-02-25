#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _lo0bits
// Address: 0x13bad0 - 0x13bb90
void _lo0bits_0x13bad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_lo0bits_0x13bad0");
#endif

    ctx->pc = 0x13bad0u;

    // 0x13bad0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13bad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13bad4: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x13bad4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)7u)));
    // 0x13bad8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13BAD8u;
    {
        const bool branch_taken_0x13bad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BAD8u;
            // 0x13badc: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bad8) {
            ctx->pc = 0x13BB14u;
            goto label_13bb14;
        }
    }
    ctx->pc = 0x13BAE0u;
    // 0x13bae0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BAE0u;
    {
        const bool branch_taken_0x13bae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BAE0u;
            // 0x13bae4: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bae0) {
            ctx->pc = 0x13BAF0u;
            goto label_13baf0;
        }
    }
    ctx->pc = 0x13BAE8u;
    // 0x13bae8: 0x3e00008  jr          $ra
    ctx->pc = 0x13BAE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BAE8u;
            // 0x13baec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13BAF0u: goto label_13baf0;
            case 0x13BB08u: goto label_13bb08;
            case 0x13BB14u: goto label_13bb14;
            case 0x13BB28u: goto label_13bb28;
            case 0x13BB40u: goto label_13bb40;
            case 0x13BB54u: goto label_13bb54;
            case 0x13BB68u: goto label_13bb68;
            case 0x13BB84u: goto label_13bb84;
            case 0x13BB88u: goto label_13bb88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13BAF0u;
label_13baf0:
    // 0x13baf0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x13BAF0u;
    {
        const bool branch_taken_0x13baf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13baf0) {
            ctx->pc = 0x13BAF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BAF0u;
            // 0x13baf4: 0x31882  srl         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BB08u;
            goto label_13bb08;
        }
    }
    ctx->pc = 0x13BAF8u;
    // 0x13baf8: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x13baf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x13bafc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13bafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bb00: 0x3e00008  jr          $ra
    ctx->pc = 0x13BB00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BB00u;
            // 0x13bb04: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13BAF0u: goto label_13baf0;
            case 0x13BB08u: goto label_13bb08;
            case 0x13BB14u: goto label_13bb14;
            case 0x13BB28u: goto label_13bb28;
            case 0x13BB40u: goto label_13bb40;
            case 0x13BB54u: goto label_13bb54;
            case 0x13BB68u: goto label_13bb68;
            case 0x13BB84u: goto label_13bb84;
            case 0x13BB88u: goto label_13bb88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13BB08u;
label_13bb08:
    // 0x13bb08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13bb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13bb0c: 0x3e00008  jr          $ra
    ctx->pc = 0x13BB0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BB0Cu;
            // 0x13bb10: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13BAF0u: goto label_13baf0;
            case 0x13BB08u: goto label_13bb08;
            case 0x13BB14u: goto label_13bb14;
            case 0x13BB28u: goto label_13bb28;
            case 0x13BB40u: goto label_13bb40;
            case 0x13BB54u: goto label_13bb54;
            case 0x13BB68u: goto label_13bb68;
            case 0x13BB84u: goto label_13bb84;
            case 0x13BB88u: goto label_13bb88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13BB14u;
label_13bb14:
    // 0x13bb14: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x13bb14u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x13bb18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BB18u;
    {
        const bool branch_taken_0x13bb18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BB18u;
            // 0x13bb1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bb18) {
            ctx->pc = 0x13BB28u;
            goto label_13bb28;
        }
    }
    ctx->pc = 0x13BB20u;
    // 0x13bb20: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x13bb20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13bb24: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x13bb24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
label_13bb28:
    // 0x13bb28: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x13bb28u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)255u)));
    // 0x13bb2c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13BB2Cu;
    {
        const bool branch_taken_0x13bb2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BB2Cu;
            // 0x13bb30: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)15u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bb2c) {
            ctx->pc = 0x13BB40u;
            goto label_13bb40;
        }
    }
    ctx->pc = 0x13BB34u;
    // 0x13bb34: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x13bb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x13bb38: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x13bb38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x13bb3c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x13bb3cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)15u)));
label_13bb40:
    // 0x13bb40: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13BB40u;
    {
        const bool branch_taken_0x13bb40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BB40u;
            // 0x13bb44: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)3u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bb40) {
            ctx->pc = 0x13BB54u;
            goto label_13bb54;
        }
    }
    ctx->pc = 0x13BB48u;
    // 0x13bb48: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x13bb48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x13bb4c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x13bb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x13bb50: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x13bb50u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)3u)));
label_13bb54:
    // 0x13bb54: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13BB54u;
    {
        const bool branch_taken_0x13bb54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BB54u;
            // 0x13bb58: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bb54) {
            ctx->pc = 0x13BB68u;
            goto label_13bb68;
        }
    }
    ctx->pc = 0x13BB5Cu;
    // 0x13bb5c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x13bb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x13bb60: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x13bb60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x13bb64: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x13bb64u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
label_13bb68:
    // 0x13bb68: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x13BB68u;
    {
        const bool branch_taken_0x13bb68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bb68) {
            ctx->pc = 0x13BB6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BB68u;
            // 0x13bb6c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BB88u;
            goto label_13bb88;
        }
    }
    ctx->pc = 0x13BB70u;
    // 0x13bb70: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x13bb70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x13bb74: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BB74u;
    {
        const bool branch_taken_0x13bb74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BB74u;
            // 0x13bb78: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bb74) {
            ctx->pc = 0x13BB84u;
            goto label_13bb84;
        }
    }
    ctx->pc = 0x13BB7Cu;
    // 0x13bb7c: 0x3e00008  jr          $ra
    ctx->pc = 0x13BB7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BB7Cu;
            // 0x13bb80: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13BAF0u: goto label_13baf0;
            case 0x13BB08u: goto label_13bb08;
            case 0x13BB14u: goto label_13bb14;
            case 0x13BB28u: goto label_13bb28;
            case 0x13BB40u: goto label_13bb40;
            case 0x13BB54u: goto label_13bb54;
            case 0x13BB68u: goto label_13bb68;
            case 0x13BB84u: goto label_13bb84;
            case 0x13BB88u: goto label_13bb88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13BB84u;
label_13bb84:
    // 0x13bb84: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x13bb84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_13bb88:
    // 0x13bb88: 0x3e00008  jr          $ra
    ctx->pc = 0x13BB88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BB88u;
            // 0x13bb8c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13BAF0u: goto label_13baf0;
            case 0x13BB08u: goto label_13bb08;
            case 0x13BB14u: goto label_13bb14;
            case 0x13BB28u: goto label_13bb28;
            case 0x13BB40u: goto label_13bb40;
            case 0x13BB54u: goto label_13bb54;
            case 0x13BB68u: goto label_13bb68;
            case 0x13BB84u: goto label_13bb84;
            case 0x13BB88u: goto label_13bb88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13BB90u;
}
