#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: setTexInfo
// Address: 0x1702d0 - 0x1706f4
void setTexInfo_0x1702d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("setTexInfo_0x1702d0");
#endif

    ctx->pc = 0x1702d0u;

    // 0x1702d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1702d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1702d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1702d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1702d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1702d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1702dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1702dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1702e0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1702e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1702e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1702e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1702e8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1702e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1702ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1702ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1702f0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1702f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1702f4: 0xc05bf80  jal         func_16FE00
    ctx->pc = 0x1702F4u;
    SET_GPR_U32(ctx, 31, 0x1702FCu);
    ctx->pc = 0x1702F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1702F4u;
            // 0x1702f8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FE00u;
    if (runtime->hasFunction(0x16FE00u)) {
        auto targetFn = runtime->lookupFunction(0x16FE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1702FCu; }
        if (ctx->pc != 0x1702FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Tim2CheckFileHeaer_0x16fe00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1702FCu; }
        if (ctx->pc != 0x1702FCu) { return; }
    }
    ctx->pc = 0x1702FCu;
    // 0x1702fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1702FCu;
    {
        const bool branch_taken_0x1702fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1702FCu;
            // 0x170300: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1702fc) {
            ctx->pc = 0x170318u;
            goto label_170318;
        }
    }
    ctx->pc = 0x170304u;
    // 0x170304: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x170304u;
    SET_GPR_U32(ctx, 31, 0x17030Cu);
    ctx->pc = 0x170308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170304u;
            // 0x170308: 0x24841290  addiu       $a0, $a0, 0x1290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17030Cu; }
        if (ctx->pc != 0x17030Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17030Cu; }
        if (ctx->pc != 0x17030Cu) { return; }
    }
    ctx->pc = 0x17030Cu;
    // 0x17030c: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x17030Cu;
    {
        const bool branch_taken_0x17030c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17030Cu;
            // 0x170310: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17030c) {
            ctx->pc = 0x1706D8u;
            goto label_1706d8;
        }
    }
    ctx->pc = 0x170314u;
    // 0x170314: 0x0  nop
    ctx->pc = 0x170314u;
    // NOP
label_170318:
    // 0x170318: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x170318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17031c: 0xc05bf44  jal         func_16FD10
    ctx->pc = 0x17031Cu;
    SET_GPR_U32(ctx, 31, 0x170324u);
    ctx->pc = 0x170320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17031Cu;
            // 0x170320: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FD10u;
    if (runtime->hasFunction(0x16FD10u)) {
        auto targetFn = runtime->lookupFunction(0x16FD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170324u; }
        if (ctx->pc != 0x170324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Tim2GetPictureHeader_0x16fd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170324u; }
        if (ctx->pc != 0x170324u) { return; }
    }
    ctx->pc = 0x170324u;
    // 0x170324: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x170324u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170328: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x170328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17032c: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x17032cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x170330: 0xdc440010  ld          $a0, 0x10($v0)
    ctx->pc = 0x170330u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x170334: 0xdc430018  ld          $v1, 0x18($v0)
    ctx->pc = 0x170334u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x170338: 0xfe660040  sd          $a2, 0x40($s3)
    ctx->pc = 0x170338u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 64), GPR_U64(ctx, 6));
    // 0x17033c: 0xfe650048  sd          $a1, 0x48($s3)
    ctx->pc = 0x17033cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 72), GPR_U64(ctx, 5));
    // 0x170340: 0xfe640050  sd          $a0, 0x50($s3)
    ctx->pc = 0x170340u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 80), GPR_U64(ctx, 4));
    // 0x170344: 0xfe630058  sd          $v1, 0x58($s3)
    ctx->pc = 0x170344u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 88), GPR_U64(ctx, 3));
    // 0x170348: 0xdc430020  ld          $v1, 0x20($v0)
    ctx->pc = 0x170348u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x17034c: 0xdc420028  ld          $v0, 0x28($v0)
    ctx->pc = 0x17034cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x170350: 0xfe630060  sd          $v1, 0x60($s3)
    ctx->pc = 0x170350u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 96), GPR_U64(ctx, 3));
    // 0x170354: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x170354u;
    {
        const bool branch_taken_0x170354 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x170358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170354u;
            // 0x170358: 0xfe620068  sd          $v0, 0x68($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 104), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170354) {
            ctx->pc = 0x170370u;
            goto label_170370;
        }
    }
    ctx->pc = 0x17035Cu;
    // 0x17035c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x17035cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x170360: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x170360u;
    SET_GPR_U32(ctx, 31, 0x170368u);
    ctx->pc = 0x170364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170360u;
            // 0x170364: 0x248412c0  addiu       $a0, $a0, 0x12C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170368u; }
        if (ctx->pc != 0x170368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170368u; }
        if (ctx->pc != 0x170368u) { return; }
    }
    ctx->pc = 0x170368u;
    // 0x170368: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x170368u;
    {
        const bool branch_taken_0x170368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17036Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170368u;
            // 0x17036c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170368) {
            ctx->pc = 0x1706D8u;
            goto label_1706d8;
        }
    }
    ctx->pc = 0x170370u;
label_170370:
    // 0x170370: 0x1620002d  bnez        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x170370u;
    {
        const bool branch_taken_0x170370 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x170374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170370u;
            // 0x170374: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170370) {
            ctx->pc = 0x170428u;
            goto label_170428;
        }
    }
    ctx->pc = 0x170378u;
    // 0x170378: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x170378u;
    SET_GPR_U32(ctx, 31, 0x170380u);
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170380u; }
        if (ctx->pc != 0x170380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170380u; }
        if (ctx->pc != 0x170380u) { return; }
    }
    ctx->pc = 0x170380u;
    // 0x170380: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x170380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170384: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x170384u;
    {
        const bool branch_taken_0x170384 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x170384) {
            ctx->pc = 0x170398u;
            goto label_170398;
        }
    }
    ctx->pc = 0x17038Cu;
    // 0x17038c: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x17038Cu;
    {
        const bool branch_taken_0x17038c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17038Cu;
            // 0x170390: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17038c) {
            ctx->pc = 0x1706D8u;
            goto label_1706d8;
        }
    }
    ctx->pc = 0x170394u;
    // 0x170394: 0x0  nop
    ctx->pc = 0x170394u;
    // NOP
label_170398:
    // 0x170398: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x170398u;
    SET_GPR_U32(ctx, 31, 0x1703A0u);
    ctx->pc = 0x17039Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170398u;
            // 0x17039c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1703A0u; }
        if (ctx->pc != 0x1703A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1703A0u; }
        if (ctx->pc != 0x1703A0u) { return; }
    }
    ctx->pc = 0x1703A0u;
    // 0x1703a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1703A0u;
    {
        const bool branch_taken_0x1703a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1703a0) {
            ctx->pc = 0x1703B0u;
            goto label_1703b0;
        }
    }
    ctx->pc = 0x1703A8u;
    // 0x1703a8: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x1703A8u;
    {
        const bool branch_taken_0x1703a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1703ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1703A8u;
            // 0x1703ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1703a8) {
            ctx->pc = 0x1706D8u;
            goto label_1706d8;
        }
    }
    ctx->pc = 0x1703B0u;
label_1703b0:
    // 0x1703b0: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x1703b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1703b4: 0x96660008  lhu         $a2, 0x8($s3)
    ctx->pc = 0x1703b4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1703b8: 0x3c04fff8  lui         $a0, 0xFFF8
    ctx->pc = 0x1703b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65528 << 16));
    // 0x1703bc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1703bcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x1703c0: 0x3484001f  ori         $a0, $a0, 0x1F
    ctx->pc = 0x1703c0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)31u)));
    // 0x1703c4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1703c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1703c8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1703c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1703cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1703ccu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x1703d0: 0x2405c000  addiu       $a1, $zero, -0x4000
    ctx->pc = 0x1703d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x1703d4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1703d4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1703d8: 0x73982  srl         $a3, $a3, 6
    ctx->pc = 0x1703d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 6));
    // 0x1703dc: 0xc52024  and         $a0, $a2, $a1
    ctx->pc = 0x1703dcu;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    // 0x1703e0: 0x30e53fff  andi        $a1, $a3, 0x3FFF
    ctx->pc = 0x1703e0u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)16383u)));
    // 0x1703e4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1703e4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1703e8: 0xa6640008  sh          $a0, 0x8($s3)
    ctx->pc = 0x1703e8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x1703ec: 0x30853fff  andi        $a1, $a0, 0x3FFF
    ctx->pc = 0x1703ecu;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)16383u)));
    // 0x1703f0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1703f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1703f4: 0xde620008  ld          $v0, 0x8($s3)
    ctx->pc = 0x1703f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1703f8: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x1703f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x1703fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1703fcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x170400: 0x30833fff  andi        $v1, $a0, 0x3FFF
    ctx->pc = 0x170400u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)16383u)));
    // 0x170404: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x170404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x170408: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x170408u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x17040c: 0xfe620008  sd          $v0, 0x8($s3)
    ctx->pc = 0x17040cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 2));
    // 0x170410: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x170410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
    // 0x170414: 0x214be  dsrl32      $v0, $v0, 18
    ctx->pc = 0x170414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 18));
    // 0x170418: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x170418u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17041c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x17041Cu;
    {
        const bool branch_taken_0x17041c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17041Cu;
            // 0x170420: 0x6303f  dsra32      $a2, $a2, 0 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17041c) {
            ctx->pc = 0x1704E8u;
            goto label_1704e8;
        }
    }
    ctx->pc = 0x170424u;
    // 0x170424: 0x0  nop
    ctx->pc = 0x170424u;
    // NOP
label_170428:
    // 0x170428: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17042c: 0x1622002c  bne         $s1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x17042Cu;
    {
        const bool branch_taken_0x17042c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x170430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17042Cu;
            // 0x170430: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17042c) {
            ctx->pc = 0x1704E0u;
            goto label_1704e0;
        }
    }
    ctx->pc = 0x170434u;
    // 0x170434: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x170434u;
    SET_GPR_U32(ctx, 31, 0x17043Cu);
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17043Cu; }
        if (ctx->pc != 0x17043Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17043Cu; }
        if (ctx->pc != 0x17043Cu) { return; }
    }
    ctx->pc = 0x17043Cu;
    // 0x17043c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17043cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170440: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x170440u;
    {
        const bool branch_taken_0x170440 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x170440) {
            ctx->pc = 0x170450u;
            goto label_170450;
        }
    }
    ctx->pc = 0x170448u;
    // 0x170448: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x170448u;
    {
        const bool branch_taken_0x170448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17044Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170448u;
            // 0x17044c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170448) {
            ctx->pc = 0x1706D8u;
            goto label_1706d8;
        }
    }
    ctx->pc = 0x170450u;
label_170450:
    // 0x170450: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x170450u;
    SET_GPR_U32(ctx, 31, 0x170458u);
    ctx->pc = 0x170454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170450u;
            // 0x170454: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170458u; }
        if (ctx->pc != 0x170458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170458u; }
        if (ctx->pc != 0x170458u) { return; }
    }
    ctx->pc = 0x170458u;
    // 0x170458: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x170458u;
    {
        const bool branch_taken_0x170458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170458) {
            ctx->pc = 0x170468u;
            goto label_170468;
        }
    }
    ctx->pc = 0x170460u;
    // 0x170460: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x170460u;
    {
        const bool branch_taken_0x170460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170460u;
            // 0x170464: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170460) {
            ctx->pc = 0x1706D8u;
            goto label_1706d8;
        }
    }
    ctx->pc = 0x170468u;
label_170468:
    // 0x170468: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x170468u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17046c: 0x96660008  lhu         $a2, 0x8($s3)
    ctx->pc = 0x17046cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x170470: 0x3c04fff8  lui         $a0, 0xFFF8
    ctx->pc = 0x170470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65528 << 16));
    // 0x170474: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x170474u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x170478: 0x3484001f  ori         $a0, $a0, 0x1F
    ctx->pc = 0x170478u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)31u)));
    // 0x17047c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x17047cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x170480: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x170480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x170484: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x170484u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x170488: 0x2405c000  addiu       $a1, $zero, -0x4000
    ctx->pc = 0x170488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x17048c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x17048cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x170490: 0x73982  srl         $a3, $a3, 6
    ctx->pc = 0x170490u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 6));
    // 0x170494: 0xc52024  and         $a0, $a2, $a1
    ctx->pc = 0x170494u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    // 0x170498: 0x30e53fff  andi        $a1, $a3, 0x3FFF
    ctx->pc = 0x170498u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)16383u)));
    // 0x17049c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x17049cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1704a0: 0xa6640008  sh          $a0, 0x8($s3)
    ctx->pc = 0x1704a0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x1704a4: 0x30853fff  andi        $a1, $a0, 0x3FFF
    ctx->pc = 0x1704a4u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)16383u)));
    // 0x1704a8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1704a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1704ac: 0xde620008  ld          $v0, 0x8($s3)
    ctx->pc = 0x1704acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1704b0: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x1704b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x1704b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1704b4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1704b8: 0x30833fff  andi        $v1, $a0, 0x3FFF
    ctx->pc = 0x1704b8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)16383u)));
    // 0x1704bc: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1704bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1704c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1704c0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1704c4: 0xfe620008  sd          $v0, 0x8($s3)
    ctx->pc = 0x1704c4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 2));
    // 0x1704c8: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x1704c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
    // 0x1704cc: 0x214be  dsrl32      $v0, $v0, 18
    ctx->pc = 0x1704ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 18));
    // 0x1704d0: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x1704d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1704d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1704D4u;
    {
        const bool branch_taken_0x1704d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1704D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1704D4u;
            // 0x1704d8: 0x6303f  dsra32      $a2, $a2, 0 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1704d4) {
            ctx->pc = 0x1704E8u;
            goto label_1704e8;
        }
    }
    ctx->pc = 0x1704DCu;
    // 0x1704dc: 0x0  nop
    ctx->pc = 0x1704dcu;
    // NOP
label_1704e0:
    // 0x1704e0: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x1704E0u;
    {
        const bool branch_taken_0x1704e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1704E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1704E0u;
            // 0x1704e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1704e0) {
            ctx->pc = 0x1706D8u;
            goto label_1706d8;
        }
    }
    ctx->pc = 0x1704E8u;
label_1704e8:
    // 0x1704e8: 0xc05bf30  jal         func_16FCC0
    ctx->pc = 0x1704E8u;
    SET_GPR_U32(ctx, 31, 0x1704F0u);
    ctx->pc = 0x1704ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1704E8u;
            // 0x1704ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FCC0u;
    if (runtime->hasFunction(0x16FCC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1704F0u; }
        if (ctx->pc != 0x1704F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Tim2LoadPicture_0x16fcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1704F0u; }
        if (ctx->pc != 0x1704F0u) { return; }
    }
    ctx->pc = 0x1704F0u;
    // 0x1704f0: 0xde060018  ld          $a2, 0x18($s0)
    ctx->pc = 0x1704f0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1704f4: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x1704f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
    // 0x1704f8: 0x34443fff  ori         $a0, $v0, 0x3FFF
    ctx->pc = 0x1704f8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)16383u)));
    // 0x1704fc: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x1704fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x170500: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x170500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x170504: 0xde650008  ld          $a1, 0x8($s3)
    ctx->pc = 0x170504u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x170508: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x170508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x17050c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x17050cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x170510: 0x434025  or          $t0, $v0, $v1
    ctx->pc = 0x170510u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x170514: 0x240afc0f  addiu       $t2, $zero, -0x3F1
    ctx->pc = 0x170514u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966287));
    // 0x170518: 0x2409ffc3  addiu       $t1, $zero, -0x3D
    ctx->pc = 0x170518u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967235));
    // 0x17051c: 0x2407fffb  addiu       $a3, $zero, -0x5
    ctx->pc = 0x17051cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x170520: 0x61b3c  dsll32      $v1, $a2, 12
    ctx->pc = 0x170520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 12));
    // 0x170524: 0x31ebe  dsrl32      $v1, $v1, 26
    ctx->pc = 0x170524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 26));
    // 0x170528: 0x2406ffe7  addiu       $a2, $zero, -0x19
    ctx->pc = 0x170528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x17052c: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x17052cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)63u)));
    // 0x170530: 0xa41024  and         $v0, $a1, $a0
    ctx->pc = 0x170530u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x170534: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x170534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x170538: 0x2405ff87  addiu       $a1, $zero, -0x79
    ctx->pc = 0x170538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967175));
    // 0x17053c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17053cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x170540: 0x2404ff7f  addiu       $a0, $zero, -0x81
    ctx->pc = 0x170540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x170544: 0xfe620008  sd          $v0, 0x8($s3)
    ctx->pc = 0x170544u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 2));
    // 0x170548: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x170548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x17054c: 0x960c001a  lhu         $t4, 0x1A($s0)
    ctx->pc = 0x17054cu;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x170550: 0x2402ff1f  addiu       $v0, $zero, -0xE1
    ctx->pc = 0x170550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
    // 0x170554: 0x966b000a  lhu         $t3, 0xA($s3)
    ctx->pc = 0x170554u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x170558: 0xc65bc  dsll32      $t4, $t4, 22
    ctx->pc = 0x170558u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 22));
    // 0x17055c: 0x16a5024  and         $t2, $t3, $t2
    ctx->pc = 0x17055cu;
    SET_GPR_VEC(ctx, 10, PS2_PAND(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x170560: 0xc5ebe  dsrl32      $t3, $t4, 26
    ctx->pc = 0x170560u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) >> (32 + 26));
    // 0x170564: 0x316b003f  andi        $t3, $t3, 0x3F
    ctx->pc = 0x170564u;
    SET_GPR_VEC(ctx, 11, PS2_PAND(GPR_VEC(ctx, 11), _mm_cvtsi32_si128((int)63u)));
    // 0x170568: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x170568u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x17056c: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x17056cu;
    SET_GPR_VEC(ctx, 10, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x170570: 0xa66a000a  sh          $t2, 0xA($s3)
    ctx->pc = 0x170570u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10), (uint16_t)GPR_U32(ctx, 10));
    // 0x170574: 0x920b001b  lbu         $t3, 0x1B($s0)
    ctx->pc = 0x170574u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 27)));
    // 0x170578: 0x926a000b  lbu         $t2, 0xB($s3)
    ctx->pc = 0x170578u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 11)));
    // 0x17057c: 0xb5ebc  dsll32      $t3, $t3, 26
    ctx->pc = 0x17057cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 26));
    // 0x170580: 0x1494824  and         $t1, $t2, $t1
    ctx->pc = 0x170580u;
    SET_GPR_VEC(ctx, 9, PS2_PAND(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x170584: 0xb573e  dsrl32      $t2, $t3, 28
    ctx->pc = 0x170584u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) >> (32 + 28));
    // 0x170588: 0x314a000f  andi        $t2, $t2, 0xF
    ctx->pc = 0x170588u;
    SET_GPR_VEC(ctx, 10, PS2_PAND(GPR_VEC(ctx, 10), _mm_cvtsi32_si128((int)15u)));
    // 0x17058c: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x17058cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x170590: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x170590u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x170594: 0xa269000b  sb          $t1, 0xB($s3)
    ctx->pc = 0x170594u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 11), (uint8_t)GPR_U32(ctx, 9));
    // 0x170598: 0xde0a0018  ld          $t2, 0x18($s0)
    ctx->pc = 0x170598u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x17059c: 0xde690008  ld          $t1, 0x8($s3)
    ctx->pc = 0x17059cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1705a0: 0xa57b8  dsll        $t2, $t2, 30
    ctx->pc = 0x1705a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 30);
    // 0x1705a4: 0x1284024  and         $t0, $t1, $t0
    ctx->pc = 0x1705a4u;
    SET_GPR_VEC(ctx, 8, PS2_PAND(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1705a8: 0xa4f3e  dsrl32      $t1, $t2, 28
    ctx->pc = 0x1705a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) >> (32 + 28));
    // 0x1705ac: 0x3129000f  andi        $t1, $t1, 0xF
    ctx->pc = 0x1705acu;
    SET_GPR_VEC(ctx, 9, PS2_PAND(GPR_VEC(ctx, 9), _mm_cvtsi32_si128((int)15u)));
    // 0x1705b0: 0x94fb8  dsll        $t1, $t1, 30
    ctx->pc = 0x1705b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 30);
    // 0x1705b4: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x1705b4u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x1705b8: 0xfe680008  sd          $t0, 0x8($s3)
    ctx->pc = 0x1705b8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 8));
    // 0x1705bc: 0x9209001c  lbu         $t1, 0x1C($s0)
    ctx->pc = 0x1705bcu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1705c0: 0x9268000c  lbu         $t0, 0xC($s3)
    ctx->pc = 0x1705c0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1705c4: 0x94f7c  dsll32      $t1, $t1, 29
    ctx->pc = 0x1705c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 29));
    // 0x1705c8: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x1705c8u;
    SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x1705cc: 0x947fe  dsrl32      $t0, $t1, 31
    ctx->pc = 0x1705ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) >> (32 + 31));
    // 0x1705d0: 0x31080001  andi        $t0, $t0, 0x1
    ctx->pc = 0x1705d0u;
    SET_GPR_VEC(ctx, 8, PS2_PAND(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)1u)));
    // 0x1705d4: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x1705d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1705d8: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x1705d8u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x1705dc: 0xa267000c  sb          $a3, 0xC($s3)
    ctx->pc = 0x1705dcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 12), (uint8_t)GPR_U32(ctx, 7));
    // 0x1705e0: 0x9208001c  lbu         $t0, 0x1C($s0)
    ctx->pc = 0x1705e0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1705e4: 0x9267000c  lbu         $a3, 0xC($s3)
    ctx->pc = 0x1705e4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1705e8: 0x846fc  dsll32      $t0, $t0, 27
    ctx->pc = 0x1705e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 27));
    // 0x1705ec: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x1705ecu;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 7), GPR_VEC(ctx, 6)));
    // 0x1705f0: 0x83fbe  dsrl32      $a3, $t0, 30
    ctx->pc = 0x1705f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) >> (32 + 30));
    // 0x1705f4: 0x30e70003  andi        $a3, $a3, 0x3
    ctx->pc = 0x1705f4u;
    SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)3u)));
    // 0x1705f8: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x1705f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1705fc: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1705fcu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x170600: 0xa266000c  sb          $a2, 0xC($s3)
    ctx->pc = 0x170600u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 12), (uint8_t)GPR_U32(ctx, 6));
    // 0x170604: 0x9207001e  lbu         $a3, 0x1E($s0)
    ctx->pc = 0x170604u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x170608: 0x9266000e  lbu         $a2, 0xE($s3)
    ctx->pc = 0x170608u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x17060c: 0x73e7c  dsll32      $a3, $a3, 25
    ctx->pc = 0x17060cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 25));
    // 0x170610: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x170610u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    // 0x170614: 0x7373e  dsrl32      $a2, $a3, 28
    ctx->pc = 0x170614u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) >> (32 + 28));
    // 0x170618: 0x30c6000f  andi        $a2, $a2, 0xF
    ctx->pc = 0x170618u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)15u)));
    // 0x17061c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x17061cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x170620: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x170620u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x170624: 0xa265000e  sb          $a1, 0xE($s3)
    ctx->pc = 0x170624u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 14), (uint8_t)GPR_U32(ctx, 5));
    // 0x170628: 0x9206001e  lbu         $a2, 0x1E($s0)
    ctx->pc = 0x170628u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x17062c: 0x9265000e  lbu         $a1, 0xE($s3)
    ctx->pc = 0x17062cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x170630: 0x6363c  dsll32      $a2, $a2, 24
    ctx->pc = 0x170630u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 24));
    // 0x170634: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x170634u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x170638: 0x62ffe  dsrl32      $a1, $a2, 31
    ctx->pc = 0x170638u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) >> (32 + 31));
    // 0x17063c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x17063cu;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)1u)));
    // 0x170640: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x170640u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x170644: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x170644u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x170648: 0xa264000e  sb          $a0, 0xE($s3)
    ctx->pc = 0x170648u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 14), (uint8_t)GPR_U32(ctx, 4));
    // 0x17064c: 0x9205001f  lbu         $a1, 0x1F($s0)
    ctx->pc = 0x17064cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 31)));
    // 0x170650: 0x9264000f  lbu         $a0, 0xF($s3)
    ctx->pc = 0x170650u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 15)));
    // 0x170654: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x170654u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)31u)));
    // 0x170658: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x170658u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x17065c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x17065cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x170660: 0xa263000f  sb          $v1, 0xF($s3)
    ctx->pc = 0x170660u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 15), (uint8_t)GPR_U32(ctx, 3));
    // 0x170664: 0x9204001f  lbu         $a0, 0x1F($s0)
    ctx->pc = 0x170664u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 31)));
    // 0x170668: 0x9263000f  lbu         $v1, 0xF($s3)
    ctx->pc = 0x170668u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 15)));
    // 0x17066c: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x17066cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
    // 0x170670: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x170670u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x170674: 0x41f7e  dsrl32      $v1, $a0, 29
    ctx->pc = 0x170674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) >> (32 + 29));
    // 0x170678: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x170678u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)7u)));
    // 0x17067c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x17067cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x170680: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x170680u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x170684: 0xa262000f  sb          $v0, 0xF($s3)
    ctx->pc = 0x170684u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x170688: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x170688u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x17068c: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x17068cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x170690: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x170690u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x170694: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x170694u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
    // 0x170698: 0x92020011  lbu         $v0, 0x11($s0)
    ctx->pc = 0x170698u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x17069c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17069cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1706a0: 0xa2620018  sb          $v0, 0x18($s3)
    ctx->pc = 0x1706a0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x1706a4: 0x92620018  lbu         $v0, 0x18($s3)
    ctx->pc = 0x1706a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1706a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1706A8u;
    {
        const bool branch_taken_0x1706a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1706a8) {
            ctx->pc = 0x1706C8u;
            goto label_1706c8;
        }
    }
    ctx->pc = 0x1706B0u;
    // 0x1706b0: 0xde020030  ld          $v0, 0x30($s0)
    ctx->pc = 0x1706b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1706b4: 0xfe620020  sd          $v0, 0x20($s3)
    ctx->pc = 0x1706b4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 2));
    // 0x1706b8: 0xde020038  ld          $v0, 0x38($s0)
    ctx->pc = 0x1706b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1706bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1706BCu;
    {
        const bool branch_taken_0x1706bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1706C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1706BCu;
            // 0x1706c0: 0xfe620028  sd          $v0, 0x28($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 40), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1706bc) {
            ctx->pc = 0x1706D0u;
            goto label_1706d0;
        }
    }
    ctx->pc = 0x1706C4u;
    // 0x1706c4: 0x0  nop
    ctx->pc = 0x1706c4u;
    // NOP
label_1706c8:
    // 0x1706c8: 0xfe600020  sd          $zero, 0x20($s3)
    ctx->pc = 0x1706c8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 0));
    // 0x1706cc: 0xfe600028  sd          $zero, 0x28($s3)
    ctx->pc = 0x1706ccu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 40), GPR_U64(ctx, 0));
label_1706d0:
    // 0x1706d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1706d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1706d4: 0x0  nop
    ctx->pc = 0x1706d4u;
    // NOP
label_1706d8:
    // 0x1706d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1706d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1706dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1706dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1706e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1706e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1706e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1706e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1706e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1706e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1706ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1706ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1706F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1706ECu;
            // 0x1706f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170318u: goto label_170318;
            case 0x170370u: goto label_170370;
            case 0x170398u: goto label_170398;
            case 0x1703B0u: goto label_1703b0;
            case 0x170428u: goto label_170428;
            case 0x170450u: goto label_170450;
            case 0x170468u: goto label_170468;
            case 0x1704E0u: goto label_1704e0;
            case 0x1704E8u: goto label_1704e8;
            case 0x1706C8u: goto label_1706c8;
            case 0x1706D0u: goto label_1706d0;
            case 0x1706D8u: goto label_1706d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1706F4u;
}
