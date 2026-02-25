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
// Address: 0x101f00 - 0x102140
void _fpadd_parts_0x101f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_fpadd_parts_0x101f00");
#endif

    ctx->pc = 0x101f00u;

    // 0x101f00: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x101f00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101f04: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x101f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x101f08: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x101f08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x101f0c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x101F0Cu;
    {
        const bool branch_taken_0x101f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x101f0c) {
            ctx->pc = 0x101F10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x101F0Cu;
            // 0x101f10: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x101F1Cu;
            goto label_101f1c;
        }
    }
    ctx->pc = 0x101F14u;
label_101f14:
    // 0x101f14: 0x3e00008  jr          $ra
    ctx->pc = 0x101F14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101F14u;
            // 0x101f18: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101F14u: goto label_101f14;
            case 0x101F1Cu: goto label_101f1c;
            case 0x101F28u: goto label_101f28;
            case 0x101F30u: goto label_101f30;
            case 0x101F58u: goto label_101f58;
            case 0x101F9Cu: goto label_101f9c;
            case 0x101FE0u: goto label_101fe0;
            case 0x102004u: goto label_102004;
            case 0x10200Cu: goto label_10200c;
            case 0x102018u: goto label_102018;
            case 0x10203Cu: goto label_10203c;
            case 0x102054u: goto label_102054;
            case 0x102060u: goto label_102060;
            case 0x102074u: goto label_102074;
            case 0x10208Cu: goto label_10208c;
            case 0x10209Cu: goto label_10209c;
            case 0x1020C8u: goto label_1020c8;
            case 0x1020F4u: goto label_1020f4;
            case 0x102104u: goto label_102104;
            case 0x102138u: goto label_102138;
            default: break;
        }
        return;
    }
    ctx->pc = 0x101F1Cu;
label_101f1c:
    // 0x101f1c: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x101f1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x101f20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x101F20u;
    {
        const bool branch_taken_0x101f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101F20u;
            // 0x101f24: 0x38820004  xori        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)4u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f20) {
            ctx->pc = 0x101F30u;
            goto label_101f30;
        }
    }
    ctx->pc = 0x101F28u;
label_101f28:
    // 0x101f28: 0x3e00008  jr          $ra
    ctx->pc = 0x101F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101F28u;
            // 0x101f2c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101F14u: goto label_101f14;
            case 0x101F1Cu: goto label_101f1c;
            case 0x101F28u: goto label_101f28;
            case 0x101F30u: goto label_101f30;
            case 0x101F58u: goto label_101f58;
            case 0x101F9Cu: goto label_101f9c;
            case 0x101FE0u: goto label_101fe0;
            case 0x102004u: goto label_102004;
            case 0x10200Cu: goto label_10200c;
            case 0x102018u: goto label_102018;
            case 0x10203Cu: goto label_10203c;
            case 0x102054u: goto label_102054;
            case 0x102060u: goto label_102060;
            case 0x102074u: goto label_102074;
            case 0x10208Cu: goto label_10208c;
            case 0x10209Cu: goto label_10209c;
            case 0x1020C8u: goto label_1020c8;
            case 0x1020F4u: goto label_1020f4;
            case 0x102104u: goto label_102104;
            case 0x102138u: goto label_102138;
            default: break;
        }
        return;
    }
    ctx->pc = 0x101F30u;
label_101f30:
    // 0x101f30: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x101F30u;
    {
        const bool branch_taken_0x101f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101F30u;
            // 0x101f34: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f30) {
            ctx->pc = 0x101F58u;
            goto label_101f58;
        }
    }
    ctx->pc = 0x101F38u;
    // 0x101f38: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x101F38u;
    {
        const bool branch_taken_0x101f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101f38) {
            ctx->pc = 0x101F14u;
            goto label_101f14;
        }
    }
    ctx->pc = 0x101F40u;
    // 0x101f40: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x101f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x101f44: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x101f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x101f48: 0x1043fff2  beq         $v0, $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x101F48u;
    {
        const bool branch_taken_0x101f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x101F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101F48u;
            // 0x101f4c: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f48) {
            ctx->pc = 0x101F14u;
            goto label_101f14;
        }
    }
    ctx->pc = 0x101F50u;
    // 0x101f50: 0x3e00008  jr          $ra
    ctx->pc = 0x101F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101F50u;
            // 0x101f54: 0x24423700  addiu       $v0, $v0, 0x3700 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14080));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101F14u: goto label_101f14;
            case 0x101F1Cu: goto label_101f1c;
            case 0x101F28u: goto label_101f28;
            case 0x101F30u: goto label_101f30;
            case 0x101F58u: goto label_101f58;
            case 0x101F9Cu: goto label_101f9c;
            case 0x101FE0u: goto label_101fe0;
            case 0x102004u: goto label_102004;
            case 0x10200Cu: goto label_10200c;
            case 0x102018u: goto label_102018;
            case 0x10203Cu: goto label_10203c;
            case 0x102054u: goto label_102054;
            case 0x102060u: goto label_102060;
            case 0x102074u: goto label_102074;
            case 0x10208Cu: goto label_10208c;
            case 0x10209Cu: goto label_10209c;
            case 0x1020C8u: goto label_1020c8;
            case 0x1020F4u: goto label_1020f4;
            case 0x102104u: goto label_102104;
            case 0x102138u: goto label_102138;
            default: break;
        }
        return;
    }
    ctx->pc = 0x101F58u;
label_101f58:
    // 0x101f58: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x101F58u;
    {
        const bool branch_taken_0x101f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101F58u;
            // 0x101f5c: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f58) {
            ctx->pc = 0x101F28u;
            goto label_101f28;
        }
    }
    ctx->pc = 0x101F60u;
    // 0x101f60: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x101F60u;
    {
        const bool branch_taken_0x101f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101F60u;
            // 0x101f64: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)2u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f60) {
            ctx->pc = 0x101F9Cu;
            goto label_101f9c;
        }
    }
    ctx->pc = 0x101F68u;
    // 0x101f68: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x101F68u;
    {
        const bool branch_taken_0x101f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101F68u;
            // 0x101f6c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f68) {
            ctx->pc = 0x101F14u;
            goto label_101f14;
        }
    }
    ctx->pc = 0x101F70u;
    // 0x101f70: 0xdd040000  ld          $a0, 0x0($t0)
    ctx->pc = 0x101f70u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x101f74: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x101f74u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x101f78: 0xdd030008  ld          $v1, 0x8($t0)
    ctx->pc = 0x101f78u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x101f7c: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x101f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x101f80: 0xdd040010  ld          $a0, 0x10($t0)
    ctx->pc = 0x101f80u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x101f84: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x101f84u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x101f88: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x101f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x101f8c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x101f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x101f90: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x101f90u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x101f94: 0x3e00008  jr          $ra
    ctx->pc = 0x101F94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101F94u;
            // 0x101f98: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101F14u: goto label_101f14;
            case 0x101F1Cu: goto label_101f1c;
            case 0x101F28u: goto label_101f28;
            case 0x101F30u: goto label_101f30;
            case 0x101F58u: goto label_101f58;
            case 0x101F9Cu: goto label_101f9c;
            case 0x101FE0u: goto label_101fe0;
            case 0x102004u: goto label_102004;
            case 0x10200Cu: goto label_10200c;
            case 0x102018u: goto label_102018;
            case 0x10203Cu: goto label_10203c;
            case 0x102054u: goto label_102054;
            case 0x102060u: goto label_102060;
            case 0x102074u: goto label_102074;
            case 0x10208Cu: goto label_10208c;
            case 0x10209Cu: goto label_10209c;
            case 0x1020C8u: goto label_1020c8;
            case 0x1020F4u: goto label_1020f4;
            case 0x102104u: goto label_102104;
            case 0x102138u: goto label_102138;
            default: break;
        }
        return;
    }
    ctx->pc = 0x101F9Cu;
label_101f9c:
    // 0x101f9c: 0x1040ffe2  beqz        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x101F9Cu;
    {
        const bool branch_taken_0x101f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101F9Cu;
            // 0x101fa0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f9c) {
            ctx->pc = 0x101F28u;
            goto label_101f28;
        }
    }
    ctx->pc = 0x101FA4u;
    // 0x101fa4: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x101fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x101fa8: 0x8ca90008  lw          $t1, 0x8($a1)
    ctx->pc = 0x101fa8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x101fac: 0xdd0b0010  ld          $t3, 0x10($t0)
    ctx->pc = 0x101facu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x101fb0: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x101fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x101fb4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x101fb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x101fb8: 0x32023  negu        $a0, $v1
    ctx->pc = 0x101fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x101fbc: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x101fbcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x101fc0: 0x28630040  slti        $v1, $v1, 0x40
    ctx->pc = 0x101fc0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x101fc4: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x101FC4u;
    {
        const bool branch_taken_0x101fc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x101FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101FC4u;
            // 0x101fc8: 0xdcaa0010  ld          $t2, 0x10($a1) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101fc4) {
            ctx->pc = 0x10203Cu;
            goto label_10203c;
        }
    }
    ctx->pc = 0x101FCCu;
    // 0x101fcc: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x101fccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x101fd0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x101FD0u;
    {
        const bool branch_taken_0x101fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101FD0u;
            // 0x101fd4: 0x8d080004  lw          $t0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101fd0) {
            ctx->pc = 0x102004u;
            goto label_102004;
        }
    }
    ctx->pc = 0x101FD8u;
    // 0x101fd8: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x101fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x101fdc: 0x0  nop
    ctx->pc = 0x101fdcu;
    // NOP
label_101fe0:
    // 0x101fe0: 0xa107a  dsrl        $v0, $t2, 1
    ctx->pc = 0x101fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) >> 1);
    // 0x101fe4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x101fe4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x101fe8: 0x31430001  andi        $v1, $t2, 0x1
    ctx->pc = 0x101fe8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 10), _mm_cvtsi32_si128((int)1u)));
    // 0x101fec: 0x127202a  slt         $a0, $t1, $a3
    ctx->pc = 0x101fecu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x101ff0: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x101ff0u;
    SET_GPR_VEC(ctx, 10, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x101ff4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x101FF4u;
    {
        const bool branch_taken_0x101ff4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x101ff4) {
            ctx->pc = 0x101FE0u;
            goto label_101fe0;
        }
    }
    ctx->pc = 0x101FFCu;
    // 0x101ffc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x101FFCu;
    {
        const bool branch_taken_0x101ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101FFCu;
            // 0x102000: 0xe9102a  slt         $v0, $a3, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ffc) {
            ctx->pc = 0x10200Cu;
            goto label_10200c;
        }
    }
    ctx->pc = 0x102004u;
label_102004:
    // 0x102004: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x102004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x102008: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x102008u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_10200c:
    // 0x10200c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x10200Cu;
    {
        const bool branch_taken_0x10200c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10200c) {
            ctx->pc = 0x102060u;
            goto label_102060;
        }
    }
    ctx->pc = 0x102014u;
    // 0x102014: 0x1273823  subu        $a3, $t1, $a3
    ctx->pc = 0x102014u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_102018:
    // 0x102018: 0xb187a  dsrl        $v1, $t3, 1
    ctx->pc = 0x102018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) >> 1);
    // 0x10201c: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x10201cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 11), _mm_cvtsi32_si128((int)1u)));
    // 0x102020: 0x435825  or          $t3, $v0, $v1
    ctx->pc = 0x102020u;
    SET_GPR_VEC(ctx, 11, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x102024: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x102024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x102028: 0x0  nop
    ctx->pc = 0x102028u;
    // NOP
    // 0x10202c: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10202Cu;
    {
        const bool branch_taken_0x10202c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x10202c) {
            ctx->pc = 0x102018u;
            goto label_102018;
        }
    }
    ctx->pc = 0x102034u;
    // 0x102034: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x102034u;
    {
        const bool branch_taken_0x102034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102034u;
            // 0x102038: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102034) {
            ctx->pc = 0x102060u;
            goto label_102060;
        }
    }
    ctx->pc = 0x10203Cu;
label_10203c:
    // 0x10203c: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x10203cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x102040: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x102040u;
    {
        const bool branch_taken_0x102040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102040u;
            // 0x102044: 0x8d080004  lw          $t0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102040) {
            ctx->pc = 0x102054u;
            goto label_102054;
        }
    }
    ctx->pc = 0x102048u;
    // 0x102048: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x102048u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10204c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10204Cu;
    {
        const bool branch_taken_0x10204c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10204Cu;
            // 0x102050: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10204c) {
            ctx->pc = 0x102060u;
            goto label_102060;
        }
    }
    ctx->pc = 0x102054u;
label_102054:
    // 0x102054: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x102054u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102058: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x102058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x10205c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x10205cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102060:
    // 0x102060: 0x11050024  beq         $t0, $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x102060u;
    {
        const bool branch_taken_0x102060 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        ctx->pc = 0x102064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102060u;
            // 0x102064: 0x16a102d  daddu       $v0, $t3, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102060) {
            ctx->pc = 0x1020F4u;
            goto label_1020f4;
        }
    }
    ctx->pc = 0x102068u;
    // 0x102068: 0x15000002  bnez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x102068u;
    {
        const bool branch_taken_0x102068 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x10206Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102068u;
            // 0x10206c: 0x14b102f  dsubu       $v0, $t2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102068) {
            ctx->pc = 0x102074u;
            goto label_102074;
        }
    }
    ctx->pc = 0x102070u;
    // 0x102070: 0x16a102f  dsubu       $v0, $t3, $t2
    ctx->pc = 0x102070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) - GPR_U64(ctx, 10));
label_102074:
    // 0x102074: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x102074u;
    {
        const bool branch_taken_0x102074 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x102078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102074u;
            // 0x102078: 0x2182f  dsubu       $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102074) {
            ctx->pc = 0x10208Cu;
            goto label_10208c;
        }
    }
    ctx->pc = 0x10207Cu;
    // 0x10207c: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x10207cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x102080: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x102080u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x102084: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x102084u;
    {
        const bool branch_taken_0x102084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102084u;
            // 0x102088: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102084) {
            ctx->pc = 0x10209Cu;
            goto label_10209c;
        }
    }
    ctx->pc = 0x10208Cu;
label_10208c:
    // 0x10208c: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x10208cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x102090: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x102090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x102094: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x102094u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x102098: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x102098u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_10209c:
    // 0x10209c: 0xdcc50010  ld          $a1, 0x10($a2)
    ctx->pc = 0x10209cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1020a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1020a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1020a4: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x1020a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x1020a8: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x1020a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x1020ac: 0x64a3ffff  daddiu      $v1, $a1, -0x1
    ctx->pc = 0x1020acu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x1020b0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1020b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1020b4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1020B4u;
    {
        const bool branch_taken_0x1020b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1020B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1020B4u;
            // 0x1020b8: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1020b4) {
            ctx->pc = 0x102104u;
            goto label_102104;
        }
    }
    ctx->pc = 0x1020BCu;
    // 0x1020bc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1020bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1020c0: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x1020c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x1020c4: 0x5293a  dsrl        $a1, $a1, 4
    ctx->pc = 0x1020c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
label_1020c8:
    // 0x1020c8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1020c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1020cc: 0x72078  dsll        $a0, $a3, 1
    ctx->pc = 0x1020ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 1);
    // 0x1020d0: 0x6483ffff  daddiu      $v1, $a0, -0x1
    ctx->pc = 0x1020d0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)4294967295);
    // 0x1020d4: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x1020d4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x1020d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1020d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1020dc: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x1020dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1020e0: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1020e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x1020e4: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1020E4u;
    {
        const bool branch_taken_0x1020e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1020E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1020E4u;
            // 0x1020e8: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1020e4) {
            ctx->pc = 0x1020C8u;
            goto label_1020c8;
        }
    }
    ctx->pc = 0x1020ECu;
    // 0x1020ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1020ECu;
    {
        const bool branch_taken_0x1020ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1020F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1020ECu;
            // 0x1020f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1020ec) {
            ctx->pc = 0x102104u;
            goto label_102104;
        }
    }
    ctx->pc = 0x1020F4u;
label_1020f4:
    // 0x1020f4: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x1020f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x1020f8: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x1020f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x1020fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1020fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102100: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x102100u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
label_102104:
    // 0x102104: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x102104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x102108: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x102108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10210c: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x10210cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x102110: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x102110u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x102114: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x102114u;
    {
        const bool branch_taken_0x102114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102114u;
            // 0x102118: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102114) {
            ctx->pc = 0x102138u;
            goto label_102138;
        }
    }
    ctx->pc = 0x10211Cu;
    // 0x10211c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x10211cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x102120: 0x5207a  dsrl        $a0, $a1, 1
    ctx->pc = 0x102120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) >> 1);
    // 0x102124: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x102124u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)1u)));
    // 0x102128: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x102128u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x10212c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10212cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x102130: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x102130u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x102134: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x102134u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_102138:
    // 0x102138: 0x3e00008  jr          $ra
    ctx->pc = 0x102138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10213Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102138u;
            // 0x10213c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101F14u: goto label_101f14;
            case 0x101F1Cu: goto label_101f1c;
            case 0x101F28u: goto label_101f28;
            case 0x101F30u: goto label_101f30;
            case 0x101F58u: goto label_101f58;
            case 0x101F9Cu: goto label_101f9c;
            case 0x101FE0u: goto label_101fe0;
            case 0x102004u: goto label_102004;
            case 0x10200Cu: goto label_10200c;
            case 0x102018u: goto label_102018;
            case 0x10203Cu: goto label_10203c;
            case 0x102054u: goto label_102054;
            case 0x102060u: goto label_102060;
            case 0x102074u: goto label_102074;
            case 0x10208Cu: goto label_10208c;
            case 0x10209Cu: goto label_10209c;
            case 0x1020C8u: goto label_1020c8;
            case 0x1020F4u: goto label_1020f4;
            case 0x102104u: goto label_102104;
            case 0x102138u: goto label_102138;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102140u;
}
