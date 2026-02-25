#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: set_api
// Address: 0x10c2b0 - 0x10c390
void set_api_0x10c2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("set_api_0x10c2b0");
#endif

    ctx->pc = 0x10c2b0u;

    // 0x10c2b0: 0x3c0c0022  lui         $t4, 0x22
    ctx->pc = 0x10c2b0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)34 << 16));
    // 0x10c2b4: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x10c2b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c2b8: 0x8d82716c  lw          $v0, 0x716C($t4)
    ctx->pc = 0x10c2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 29036)));
    // 0x10c2bc: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x10C2BCu;
    {
        const bool branch_taken_0x10c2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C2BCu;
            // 0x10c2c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c2bc) {
            ctx->pc = 0x10C388u;
            goto label_10c388;
        }
    }
    ctx->pc = 0x10C2C4u;
    // 0x10c2c4: 0xdd470000  ld          $a3, 0x0($t2)
    ctx->pc = 0x10c2c4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x10c2c8: 0x3c0b0022  lui         $t3, 0x22
    ctx->pc = 0x10c2c8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)34 << 16));
    // 0x10c2cc: 0x8d647168  lw          $a0, 0x7168($t3)
    ctx->pc = 0x10c2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 29032)));
label_10c2d0:
    // 0x10c2d0: 0x64100  sll         $t0, $a2, 4
    ctx->pc = 0x10c2d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x10c2d4: 0x71a3a  dsrl        $v1, $a3, 8
    ctx->pc = 0x10c2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) >> 8);
    // 0x10c2d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10c2d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c2dc: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x10c2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x10c2e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x10c2e0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)255u)));
    // 0x10c2e4: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x10c2e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x10c2e8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x10c2e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x10c2ec: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x10c2ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x10c2f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10c2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10c2f4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10c2f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10c2f8: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x10C2F8u;
    {
        const bool branch_taken_0x10c2f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10C2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C2F8u;
            // 0x10c2fc: 0xdc850000  ld          $a1, 0x0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c2f8) {
            ctx->pc = 0x10C358u;
            goto label_10c358;
        }
    }
    ctx->pc = 0x10C300u;
    // 0x10c300: 0x71c3a  dsrl        $v1, $a3, 16
    ctx->pc = 0x10c300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) >> 16);
    // 0x10c304: 0x5143a  dsrl        $v0, $a1, 16
    ctx->pc = 0x10c304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 16);
    // 0x10c308: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x10c308u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)255u)));
    // 0x10c30c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x10c30cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x10c310: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x10c310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x10c314: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x10c314u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x10c318: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10c318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10c31c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10c31cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10c320: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x10C320u;
    {
        const bool branch_taken_0x10c320 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10C324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C320u;
            // 0x10c324: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c320) {
            ctx->pc = 0x10C35Cu;
            goto label_10c35c;
        }
    }
    ctx->pc = 0x10C328u;
    // 0x10c328: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x10c328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x10c32c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x10c32cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65535u)));
    // 0x10c330: 0x5103e  dsrl32      $v0, $a1, 0
    ctx->pc = 0x10c330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x10c334: 0x7183e  dsrl32      $v1, $a3, 0
    ctx->pc = 0x10c334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x10c338: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x10c338u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x10c33c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x10c33cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x10c340: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10c340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10c344: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10c344u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10c348: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x10c348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x10c34c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x10c34cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x10c350: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x10c350u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x10c354: 0x2c690001  sltiu       $t1, $v1, 0x1
    ctx->pc = 0x10c354u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_10c358:
    // 0x10c358: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10c358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10c35c:
    // 0x10c35c: 0x15220006  bne         $t1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10C35Cu;
    {
        const bool branch_taken_0x10c35c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x10C360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C35Cu;
            // 0x10c360: 0x8d82716c  lw          $v0, 0x716C($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 29036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c35c) {
            ctx->pc = 0x10C378u;
            goto label_10c378;
        }
    }
    ctx->pc = 0x10C364u;
    // 0x10c364: 0x8d627168  lw          $v0, 0x7168($t3)
    ctx->pc = 0x10c364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 29032)));
    // 0x10c368: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x10c368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x10c36c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x10c36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x10c370: 0x3e00008  jr          $ra
    ctx->pc = 0x10C370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C370u;
            // 0x10c374: 0xad430008  sw          $v1, 0x8($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10C2D0u: goto label_10c2d0;
            case 0x10C358u: goto label_10c358;
            case 0x10C35Cu: goto label_10c35c;
            case 0x10C378u: goto label_10c378;
            case 0x10C388u: goto label_10c388;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10C378u;
label_10c378:
    // 0x10c378: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x10c378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x10c37c: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x10c37cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10c380: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x10C380u;
    {
        const bool branch_taken_0x10c380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C380u;
            // 0x10c384: 0x8d647168  lw          $a0, 0x7168($t3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 29032)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c380) {
            ctx->pc = 0x10C2D0u;
            goto label_10c2d0;
        }
    }
    ctx->pc = 0x10C388u;
label_10c388:
    // 0x10c388: 0x3e00008  jr          $ra
    ctx->pc = 0x10C388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10C2D0u: goto label_10c2d0;
            case 0x10C358u: goto label_10c358;
            case 0x10C35Cu: goto label_10c35c;
            case 0x10C378u: goto label_10c378;
            case 0x10C388u: goto label_10c388;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10C390u;
}
