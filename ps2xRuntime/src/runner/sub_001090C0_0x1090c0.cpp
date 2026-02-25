#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: sub_001090C0
// Address: 0x1090c0 - 0x109140
void sub_001090C0_0x1090c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sub_001090C0_0x1090c0");
#endif

    ctx->pc = 0x1090c0u;

    // 0x1090c0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1090c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1090c4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1090c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1090c8: 0x94c30004  lhu         $v1, 0x4($a2)
    ctx->pc = 0x1090c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1090cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1090ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1090d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1090d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1090d4: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x1090d4u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)7u)));
    // 0x1090d8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1090D8u;
    {
        const bool branch_taken_0x1090d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1090DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1090D8u;
            // 0x1090dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1090d8) {
            ctx->pc = 0x1090ECu;
            goto label_1090ec;
        }
    }
    ctx->pc = 0x1090E0u;
    // 0x1090e0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1090e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1090e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1090E4u;
    {
        const bool branch_taken_0x1090e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1090E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1090E4u;
            // 0x1090e8: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1090e4) {
            ctx->pc = 0x109100u;
            goto label_109100;
        }
    }
    ctx->pc = 0x1090ECu;
label_1090ec:
    // 0x1090ec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1090ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1090f0: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1090F0u;
    {
        const bool branch_taken_0x1090f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1090f0) {
            ctx->pc = 0x1090F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1090F0u;
            // 0x1090f4: 0x84c20010  lh          $v0, 0x10($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x109104u;
            goto label_109104;
        }
    }
    ctx->pc = 0x1090F8u;
    // 0x1090f8: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1090f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1090fc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1090fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_109100:
    // 0x109100: 0x84c20010  lh          $v0, 0x10($a2)
    ctx->pc = 0x109100u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 16)));
label_109104:
    // 0x109104: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x109104u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32768u)));
    // 0x109108: 0x5287c  dsll32      $a1, $a1, 1
    ctx->pc = 0x109108u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 1));
    // 0x10910c: 0x84c3000e  lh          $v1, 0xE($a2)
    ctx->pc = 0x10910cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x109110: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x109110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x109114: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x109114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x109118: 0x1042025  or          $a0, $t0, $a0
    ctx->pc = 0x109118u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 8), GPR_VEC(ctx, 4)));
    // 0x10911c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x10911cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x109120: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x109120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x109124: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x109124u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x109128: 0xfce40020  sd          $a0, 0x20($a3)
    ctx->pc = 0x109128u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 32), GPR_U64(ctx, 4));
    // 0x10912c: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x10912cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x109130: 0xfce00030  sd          $zero, 0x30($a3)
    ctx->pc = 0x109130u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 48), GPR_U64(ctx, 0));
    // 0x109134: 0x3e00008  jr          $ra
    ctx->pc = 0x109134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109134u;
            // 0x109138: 0xfce00010  sd          $zero, 0x10($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1090ECu: goto label_1090ec;
            case 0x109100u: goto label_109100;
            case 0x109104u: goto label_109104;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10913Cu;
    // 0x10913c: 0x0  nop
    ctx->pc = 0x10913cu;
    // NOP
}
