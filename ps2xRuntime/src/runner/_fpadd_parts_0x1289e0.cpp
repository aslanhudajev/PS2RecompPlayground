#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _fpadd_parts
// Address: 0x1289e0 - 0x128c20
void _fpadd_parts_0x1289e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_fpadd_parts_0x1289e0");
#endif

    ctx->pc = 0x1289e0u;

    // 0x1289e0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1289e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1289e4: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x1289e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1289e8: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x1289e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1289ec: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1289ECu;
    {
        const bool branch_taken_0x1289ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1289ec) {
            ctx->pc = 0x1289F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1289ECu;
            // 0x1289f0: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1289FCu;
            goto label_1289fc;
        }
    }
    ctx->pc = 0x1289F4u;
label_1289f4:
    // 0x1289f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1289F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1289F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1289F4u;
            // 0x1289f8: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1289F4u: goto label_1289f4;
            case 0x1289FCu: goto label_1289fc;
            case 0x128A08u: goto label_128a08;
            case 0x128A10u: goto label_128a10;
            case 0x128A38u: goto label_128a38;
            case 0x128A7Cu: goto label_128a7c;
            case 0x128AC0u: goto label_128ac0;
            case 0x128AE4u: goto label_128ae4;
            case 0x128AECu: goto label_128aec;
            case 0x128AF8u: goto label_128af8;
            case 0x128B1Cu: goto label_128b1c;
            case 0x128B34u: goto label_128b34;
            case 0x128B40u: goto label_128b40;
            case 0x128B54u: goto label_128b54;
            case 0x128B6Cu: goto label_128b6c;
            case 0x128B7Cu: goto label_128b7c;
            case 0x128BA8u: goto label_128ba8;
            case 0x128BD4u: goto label_128bd4;
            case 0x128BE4u: goto label_128be4;
            case 0x128C18u: goto label_128c18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1289FCu;
label_1289fc:
    // 0x1289fc: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x1289fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x128a00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x128A00u;
    {
        const bool branch_taken_0x128a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128A00u;
            // 0x128a04: 0x38820004  xori        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)4u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a00) {
            ctx->pc = 0x128A10u;
            goto label_128a10;
        }
    }
    ctx->pc = 0x128A08u;
label_128a08:
    // 0x128a08: 0x3e00008  jr          $ra
    ctx->pc = 0x128A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128A08u;
            // 0x128a0c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1289F4u: goto label_1289f4;
            case 0x1289FCu: goto label_1289fc;
            case 0x128A08u: goto label_128a08;
            case 0x128A10u: goto label_128a10;
            case 0x128A38u: goto label_128a38;
            case 0x128A7Cu: goto label_128a7c;
            case 0x128AC0u: goto label_128ac0;
            case 0x128AE4u: goto label_128ae4;
            case 0x128AECu: goto label_128aec;
            case 0x128AF8u: goto label_128af8;
            case 0x128B1Cu: goto label_128b1c;
            case 0x128B34u: goto label_128b34;
            case 0x128B40u: goto label_128b40;
            case 0x128B54u: goto label_128b54;
            case 0x128B6Cu: goto label_128b6c;
            case 0x128B7Cu: goto label_128b7c;
            case 0x128BA8u: goto label_128ba8;
            case 0x128BD4u: goto label_128bd4;
            case 0x128BE4u: goto label_128be4;
            case 0x128C18u: goto label_128c18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x128A10u;
label_128a10:
    // 0x128a10: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x128A10u;
    {
        const bool branch_taken_0x128a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128A10u;
            // 0x128a14: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a10) {
            ctx->pc = 0x128A38u;
            goto label_128a38;
        }
    }
    ctx->pc = 0x128A18u;
    // 0x128a18: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x128A18u;
    {
        const bool branch_taken_0x128a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128a18) {
            ctx->pc = 0x1289F4u;
            goto label_1289f4;
        }
    }
    ctx->pc = 0x128A20u;
    // 0x128a20: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x128a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x128a24: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x128a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x128a28: 0x1043fff2  beq         $v0, $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x128A28u;
    {
        const bool branch_taken_0x128a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x128A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128A28u;
            // 0x128a2c: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a28) {
            ctx->pc = 0x1289F4u;
            goto label_1289f4;
        }
    }
    ctx->pc = 0x128A30u;
    // 0x128a30: 0x3e00008  jr          $ra
    ctx->pc = 0x128A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128A30u;
            // 0x128a34: 0x2442e4f0  addiu       $v0, $v0, -0x1B10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1289F4u: goto label_1289f4;
            case 0x1289FCu: goto label_1289fc;
            case 0x128A08u: goto label_128a08;
            case 0x128A10u: goto label_128a10;
            case 0x128A38u: goto label_128a38;
            case 0x128A7Cu: goto label_128a7c;
            case 0x128AC0u: goto label_128ac0;
            case 0x128AE4u: goto label_128ae4;
            case 0x128AECu: goto label_128aec;
            case 0x128AF8u: goto label_128af8;
            case 0x128B1Cu: goto label_128b1c;
            case 0x128B34u: goto label_128b34;
            case 0x128B40u: goto label_128b40;
            case 0x128B54u: goto label_128b54;
            case 0x128B6Cu: goto label_128b6c;
            case 0x128B7Cu: goto label_128b7c;
            case 0x128BA8u: goto label_128ba8;
            case 0x128BD4u: goto label_128bd4;
            case 0x128BE4u: goto label_128be4;
            case 0x128C18u: goto label_128c18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x128A38u;
label_128a38:
    // 0x128a38: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x128A38u;
    {
        const bool branch_taken_0x128a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128A38u;
            // 0x128a3c: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a38) {
            ctx->pc = 0x128A08u;
            goto label_128a08;
        }
    }
    ctx->pc = 0x128A40u;
    // 0x128a40: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x128A40u;
    {
        const bool branch_taken_0x128a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128A40u;
            // 0x128a44: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)2u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a40) {
            ctx->pc = 0x128A7Cu;
            goto label_128a7c;
        }
    }
    ctx->pc = 0x128A48u;
    // 0x128a48: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x128A48u;
    {
        const bool branch_taken_0x128a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128A48u;
            // 0x128a4c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a48) {
            ctx->pc = 0x1289F4u;
            goto label_1289f4;
        }
    }
    ctx->pc = 0x128A50u;
    // 0x128a50: 0xdd040000  ld          $a0, 0x0($t0)
    ctx->pc = 0x128a50u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x128a54: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x128a54u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x128a58: 0xdd030008  ld          $v1, 0x8($t0)
    ctx->pc = 0x128a58u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x128a5c: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x128a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x128a60: 0xdd040010  ld          $a0, 0x10($t0)
    ctx->pc = 0x128a60u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x128a64: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x128a64u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x128a68: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x128a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x128a6c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x128a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x128a70: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x128a70u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x128a74: 0x3e00008  jr          $ra
    ctx->pc = 0x128A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128A74u;
            // 0x128a78: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1289F4u: goto label_1289f4;
            case 0x1289FCu: goto label_1289fc;
            case 0x128A08u: goto label_128a08;
            case 0x128A10u: goto label_128a10;
            case 0x128A38u: goto label_128a38;
            case 0x128A7Cu: goto label_128a7c;
            case 0x128AC0u: goto label_128ac0;
            case 0x128AE4u: goto label_128ae4;
            case 0x128AECu: goto label_128aec;
            case 0x128AF8u: goto label_128af8;
            case 0x128B1Cu: goto label_128b1c;
            case 0x128B34u: goto label_128b34;
            case 0x128B40u: goto label_128b40;
            case 0x128B54u: goto label_128b54;
            case 0x128B6Cu: goto label_128b6c;
            case 0x128B7Cu: goto label_128b7c;
            case 0x128BA8u: goto label_128ba8;
            case 0x128BD4u: goto label_128bd4;
            case 0x128BE4u: goto label_128be4;
            case 0x128C18u: goto label_128c18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x128A7Cu;
label_128a7c:
    // 0x128a7c: 0x1040ffe2  beqz        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x128A7Cu;
    {
        const bool branch_taken_0x128a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128A7Cu;
            // 0x128a80: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a7c) {
            ctx->pc = 0x128A08u;
            goto label_128a08;
        }
    }
    ctx->pc = 0x128A84u;
    // 0x128a84: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x128a84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x128a88: 0x8ca90008  lw          $t1, 0x8($a1)
    ctx->pc = 0x128a88u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x128a8c: 0xdd0b0010  ld          $t3, 0x10($t0)
    ctx->pc = 0x128a8cu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x128a90: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x128a90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x128a94: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x128a94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x128a98: 0x32023  negu        $a0, $v1
    ctx->pc = 0x128a98u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x128a9c: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x128a9cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x128aa0: 0x28630040  slti        $v1, $v1, 0x40
    ctx->pc = 0x128aa0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x128aa4: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x128AA4u;
    {
        const bool branch_taken_0x128aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x128AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128AA4u;
            // 0x128aa8: 0xdcaa0010  ld          $t2, 0x10($a1) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128aa4) {
            ctx->pc = 0x128B1Cu;
            goto label_128b1c;
        }
    }
    ctx->pc = 0x128AACu;
    // 0x128aac: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x128aacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x128ab0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x128AB0u;
    {
        const bool branch_taken_0x128ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128AB0u;
            // 0x128ab4: 0x8d080004  lw          $t0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ab0) {
            ctx->pc = 0x128AE4u;
            goto label_128ae4;
        }
    }
    ctx->pc = 0x128AB8u;
    // 0x128ab8: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x128ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x128abc: 0x0  nop
    ctx->pc = 0x128abcu;
    // NOP
label_128ac0:
    // 0x128ac0: 0xa107a  dsrl        $v0, $t2, 1
    ctx->pc = 0x128ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) >> 1);
    // 0x128ac4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x128ac4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x128ac8: 0x31430001  andi        $v1, $t2, 0x1
    ctx->pc = 0x128ac8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 10), _mm_cvtsi32_si128((int)1u)));
    // 0x128acc: 0x127202a  slt         $a0, $t1, $a3
    ctx->pc = 0x128accu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x128ad0: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x128ad0u;
    SET_GPR_VEC(ctx, 10, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x128ad4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x128AD4u;
    {
        const bool branch_taken_0x128ad4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x128ad4) {
            ctx->pc = 0x128AC0u;
            goto label_128ac0;
        }
    }
    ctx->pc = 0x128ADCu;
    // 0x128adc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x128ADCu;
    {
        const bool branch_taken_0x128adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128ADCu;
            // 0x128ae0: 0xe9102a  slt         $v0, $a3, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128adc) {
            ctx->pc = 0x128AECu;
            goto label_128aec;
        }
    }
    ctx->pc = 0x128AE4u;
label_128ae4:
    // 0x128ae4: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x128ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x128ae8: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x128ae8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_128aec:
    // 0x128aec: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x128AECu;
    {
        const bool branch_taken_0x128aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128aec) {
            ctx->pc = 0x128B40u;
            goto label_128b40;
        }
    }
    ctx->pc = 0x128AF4u;
    // 0x128af4: 0x1273823  subu        $a3, $t1, $a3
    ctx->pc = 0x128af4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_128af8:
    // 0x128af8: 0xb187a  dsrl        $v1, $t3, 1
    ctx->pc = 0x128af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) >> 1);
    // 0x128afc: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x128afcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 11), _mm_cvtsi32_si128((int)1u)));
    // 0x128b00: 0x435825  or          $t3, $v0, $v1
    ctx->pc = 0x128b00u;
    SET_GPR_VEC(ctx, 11, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x128b04: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x128b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x128b08: 0x0  nop
    ctx->pc = 0x128b08u;
    // NOP
    // 0x128b0c: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x128B0Cu;
    {
        const bool branch_taken_0x128b0c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x128b0c) {
            ctx->pc = 0x128AF8u;
            goto label_128af8;
        }
    }
    ctx->pc = 0x128B14u;
    // 0x128b14: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x128B14u;
    {
        const bool branch_taken_0x128b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128B14u;
            // 0x128b18: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b14) {
            ctx->pc = 0x128B40u;
            goto label_128b40;
        }
    }
    ctx->pc = 0x128B1Cu;
label_128b1c:
    // 0x128b1c: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x128b1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x128b20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x128B20u;
    {
        const bool branch_taken_0x128b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128B20u;
            // 0x128b24: 0x8d080004  lw          $t0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b20) {
            ctx->pc = 0x128B34u;
            goto label_128b34;
        }
    }
    ctx->pc = 0x128B28u;
    // 0x128b28: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x128b28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x128B2Cu;
    {
        const bool branch_taken_0x128b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128B2Cu;
            // 0x128b30: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b2c) {
            ctx->pc = 0x128B40u;
            goto label_128b40;
        }
    }
    ctx->pc = 0x128B34u;
label_128b34:
    // 0x128b34: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x128b34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b38: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x128b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x128b3c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x128b3cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_128b40:
    // 0x128b40: 0x11050024  beq         $t0, $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x128B40u;
    {
        const bool branch_taken_0x128b40 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        ctx->pc = 0x128B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128B40u;
            // 0x128b44: 0x16a102d  daddu       $v0, $t3, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b40) {
            ctx->pc = 0x128BD4u;
            goto label_128bd4;
        }
    }
    ctx->pc = 0x128B48u;
    // 0x128b48: 0x15000002  bnez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x128B48u;
    {
        const bool branch_taken_0x128b48 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x128B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128B48u;
            // 0x128b4c: 0x14b102f  dsubu       $v0, $t2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b48) {
            ctx->pc = 0x128B54u;
            goto label_128b54;
        }
    }
    ctx->pc = 0x128B50u;
    // 0x128b50: 0x16a102f  dsubu       $v0, $t3, $t2
    ctx->pc = 0x128b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) - GPR_U64(ctx, 10));
label_128b54:
    // 0x128b54: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x128B54u;
    {
        const bool branch_taken_0x128b54 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x128B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128B54u;
            // 0x128b58: 0x2182f  dsubu       $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b54) {
            ctx->pc = 0x128B6Cu;
            goto label_128b6c;
        }
    }
    ctx->pc = 0x128B5Cu;
    // 0x128b5c: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x128b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x128b60: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x128b60u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x128b64: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x128B64u;
    {
        const bool branch_taken_0x128b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128B64u;
            // 0x128b68: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b64) {
            ctx->pc = 0x128B7Cu;
            goto label_128b7c;
        }
    }
    ctx->pc = 0x128B6Cu;
label_128b6c:
    // 0x128b6c: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x128b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x128b70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x128b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128b74: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x128b74u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x128b78: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x128b78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_128b7c:
    // 0x128b7c: 0xdcc50010  ld          $a1, 0x10($a2)
    ctx->pc = 0x128b7cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x128b80: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x128b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128b84: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x128b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x128b88: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x128b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x128b8c: 0x64a3ffff  daddiu      $v1, $a1, -0x1
    ctx->pc = 0x128b8cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x128b90: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x128b90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x128b94: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x128B94u;
    {
        const bool branch_taken_0x128b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128B94u;
            // 0x128b98: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b94) {
            ctx->pc = 0x128BE4u;
            goto label_128be4;
        }
    }
    ctx->pc = 0x128B9Cu;
    // 0x128b9c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x128b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128ba0: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x128ba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x128ba4: 0x5293a  dsrl        $a1, $a1, 4
    ctx->pc = 0x128ba4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
label_128ba8:
    // 0x128ba8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x128ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x128bac: 0x72078  dsll        $a0, $a3, 1
    ctx->pc = 0x128bacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 1);
    // 0x128bb0: 0x6483ffff  daddiu      $v1, $a0, -0x1
    ctx->pc = 0x128bb0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)4294967295);
    // 0x128bb4: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x128bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x128bb8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x128bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x128bbc: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x128bbcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x128bc0: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x128bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x128bc4: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x128BC4u;
    {
        const bool branch_taken_0x128bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x128BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128BC4u;
            // 0x128bc8: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128bc4) {
            ctx->pc = 0x128BA8u;
            goto label_128ba8;
        }
    }
    ctx->pc = 0x128BCCu;
    // 0x128bcc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x128BCCu;
    {
        const bool branch_taken_0x128bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128BCCu;
            // 0x128bd0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128bcc) {
            ctx->pc = 0x128BE4u;
            goto label_128be4;
        }
    }
    ctx->pc = 0x128BD4u;
label_128bd4:
    // 0x128bd4: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x128bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x128bd8: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x128bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x128bdc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x128bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128be0: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x128be0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
label_128be4:
    // 0x128be4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x128be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128be8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x128be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128bec: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x128becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x128bf0: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x128bf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x128bf4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x128BF4u;
    {
        const bool branch_taken_0x128bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128BF4u;
            // 0x128bf8: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128bf4) {
            ctx->pc = 0x128C18u;
            goto label_128c18;
        }
    }
    ctx->pc = 0x128BFCu;
    // 0x128bfc: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x128bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x128c00: 0x5207a  dsrl        $a0, $a1, 1
    ctx->pc = 0x128c00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) >> 1);
    // 0x128c04: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x128c04u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)1u)));
    // 0x128c08: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x128c08u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x128c0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x128c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x128c10: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x128c10u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x128c14: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x128c14u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_128c18:
    // 0x128c18: 0x3e00008  jr          $ra
    ctx->pc = 0x128C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128C18u;
            // 0x128c1c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1289F4u: goto label_1289f4;
            case 0x1289FCu: goto label_1289fc;
            case 0x128A08u: goto label_128a08;
            case 0x128A10u: goto label_128a10;
            case 0x128A38u: goto label_128a38;
            case 0x128A7Cu: goto label_128a7c;
            case 0x128AC0u: goto label_128ac0;
            case 0x128AE4u: goto label_128ae4;
            case 0x128AECu: goto label_128aec;
            case 0x128AF8u: goto label_128af8;
            case 0x128B1Cu: goto label_128b1c;
            case 0x128B34u: goto label_128b34;
            case 0x128B40u: goto label_128b40;
            case 0x128B54u: goto label_128b54;
            case 0x128B6Cu: goto label_128b6c;
            case 0x128B7Cu: goto label_128b7c;
            case 0x128BA8u: goto label_128ba8;
            case 0x128BD4u: goto label_128bd4;
            case 0x128BE4u: goto label_128be4;
            case 0x128C18u: goto label_128c18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x128C20u;
}
