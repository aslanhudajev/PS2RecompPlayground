#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: setClutInfo
// Address: 0x170090 - 0x1702c4
void setClutInfo_0x170090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("setClutInfo_0x170090");
#endif

    ctx->pc = 0x170090u;

    // 0x170090: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x170090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x170094: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x170094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x170098: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x170098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17009c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17009cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1700a0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1700a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1700a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1700a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1700a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1700a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1700ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1700acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1700b0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1700b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1700b4: 0xc05bf80  jal         func_16FE00
    ctx->pc = 0x1700B4u;
    SET_GPR_U32(ctx, 31, 0x1700BCu);
    ctx->pc = 0x1700B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1700B4u;
            // 0x1700b8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FE00u;
    if (runtime->hasFunction(0x16FE00u)) {
        auto targetFn = runtime->lookupFunction(0x16FE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1700BCu; }
        if (ctx->pc != 0x1700BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Tim2CheckFileHeaer_0x16fe00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1700BCu; }
        if (ctx->pc != 0x1700BCu) { return; }
    }
    ctx->pc = 0x1700BCu;
    // 0x1700bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1700BCu;
    {
        const bool branch_taken_0x1700bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1700C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1700BCu;
            // 0x1700c0: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1700bc) {
            ctx->pc = 0x1700D8u;
            goto label_1700d8;
        }
    }
    ctx->pc = 0x1700C4u;
    // 0x1700c4: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1700C4u;
    SET_GPR_U32(ctx, 31, 0x1700CCu);
    ctx->pc = 0x1700C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1700C4u;
            // 0x1700c8: 0x24841290  addiu       $a0, $a0, 0x1290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1700CCu; }
        if (ctx->pc != 0x1700CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1700CCu; }
        if (ctx->pc != 0x1700CCu) { return; }
    }
    ctx->pc = 0x1700CCu;
    // 0x1700cc: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x1700CCu;
    {
        const bool branch_taken_0x1700cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1700D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1700CCu;
            // 0x1700d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1700cc) {
            ctx->pc = 0x1702A8u;
            goto label_1702a8;
        }
    }
    ctx->pc = 0x1700D4u;
    // 0x1700d4: 0x0  nop
    ctx->pc = 0x1700d4u;
    // NOP
label_1700d8:
    // 0x1700d8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1700d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1700dc: 0xc05bf44  jal         func_16FD10
    ctx->pc = 0x1700DCu;
    SET_GPR_U32(ctx, 31, 0x1700E4u);
    ctx->pc = 0x1700E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1700DCu;
            // 0x1700e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FD10u;
    if (runtime->hasFunction(0x16FD10u)) {
        auto targetFn = runtime->lookupFunction(0x16FD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1700E4u; }
        if (ctx->pc != 0x1700E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Tim2GetPictureHeader_0x16fd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1700E4u; }
        if (ctx->pc != 0x1700E4u) { return; }
    }
    ctx->pc = 0x1700E4u;
    // 0x1700e4: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x1700e4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1700e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1700e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1700ec: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x1700ecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1700f0: 0xdc440010  ld          $a0, 0x10($v0)
    ctx->pc = 0x1700f0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1700f4: 0xdc430018  ld          $v1, 0x18($v0)
    ctx->pc = 0x1700f4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1700f8: 0xfe660040  sd          $a2, 0x40($s3)
    ctx->pc = 0x1700f8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 64), GPR_U64(ctx, 6));
    // 0x1700fc: 0xfe650048  sd          $a1, 0x48($s3)
    ctx->pc = 0x1700fcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 72), GPR_U64(ctx, 5));
    // 0x170100: 0xfe640050  sd          $a0, 0x50($s3)
    ctx->pc = 0x170100u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 80), GPR_U64(ctx, 4));
    // 0x170104: 0xfe630058  sd          $v1, 0x58($s3)
    ctx->pc = 0x170104u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 88), GPR_U64(ctx, 3));
    // 0x170108: 0xdc430020  ld          $v1, 0x20($v0)
    ctx->pc = 0x170108u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x17010c: 0xdc420028  ld          $v0, 0x28($v0)
    ctx->pc = 0x17010cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x170110: 0xfe630060  sd          $v1, 0x60($s3)
    ctx->pc = 0x170110u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 96), GPR_U64(ctx, 3));
    // 0x170114: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x170114u;
    {
        const bool branch_taken_0x170114 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x170118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170114u;
            // 0x170118: 0xfe620068  sd          $v0, 0x68($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 104), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170114) {
            ctx->pc = 0x170130u;
            goto label_170130;
        }
    }
    ctx->pc = 0x17011Cu;
    // 0x17011c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x17011cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x170120: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x170120u;
    SET_GPR_U32(ctx, 31, 0x170128u);
    ctx->pc = 0x170124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170120u;
            // 0x170124: 0x248412c0  addiu       $a0, $a0, 0x12C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170128u; }
        if (ctx->pc != 0x170128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170128u; }
        if (ctx->pc != 0x170128u) { return; }
    }
    ctx->pc = 0x170128u;
    // 0x170128: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x170128u;
    {
        const bool branch_taken_0x170128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17012Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170128u;
            // 0x17012c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170128) {
            ctx->pc = 0x1702A8u;
            goto label_1702a8;
        }
    }
    ctx->pc = 0x170130u;
label_170130:
    // 0x170130: 0x1620002b  bnez        $s1, . + 4 + (0x2B << 2)
    ctx->pc = 0x170130u;
    {
        const bool branch_taken_0x170130 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x170134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170130u;
            // 0x170134: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170130) {
            ctx->pc = 0x1701E0u;
            goto label_1701e0;
        }
    }
    ctx->pc = 0x170138u;
    // 0x170138: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x170138u;
    SET_GPR_U32(ctx, 31, 0x170140u);
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170140u; }
        if (ctx->pc != 0x170140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170140u; }
        if (ctx->pc != 0x170140u) { return; }
    }
    ctx->pc = 0x170140u;
    // 0x170140: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x170140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170144: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x170144u;
    {
        const bool branch_taken_0x170144 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x170144) {
            ctx->pc = 0x170158u;
            goto label_170158;
        }
    }
    ctx->pc = 0x17014Cu;
    // 0x17014c: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x17014Cu;
    {
        const bool branch_taken_0x17014c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17014Cu;
            // 0x170150: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17014c) {
            ctx->pc = 0x1702A8u;
            goto label_1702a8;
        }
    }
    ctx->pc = 0x170154u;
    // 0x170154: 0x0  nop
    ctx->pc = 0x170154u;
    // NOP
label_170158:
    // 0x170158: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x170158u;
    SET_GPR_U32(ctx, 31, 0x170160u);
    ctx->pc = 0x17015Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170158u;
            // 0x17015c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170160u; }
        if (ctx->pc != 0x170160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170160u; }
        if (ctx->pc != 0x170160u) { return; }
    }
    ctx->pc = 0x170160u;
    // 0x170160: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x170160u;
    {
        const bool branch_taken_0x170160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170160) {
            ctx->pc = 0x170170u;
            goto label_170170;
        }
    }
    ctx->pc = 0x170168u;
    // 0x170168: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x170168u;
    {
        const bool branch_taken_0x170168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17016Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170168u;
            // 0x17016c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170168) {
            ctx->pc = 0x1702A8u;
            goto label_1702a8;
        }
    }
    ctx->pc = 0x170170u;
label_170170:
    // 0x170170: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x170170u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x170174: 0x96660008  lhu         $a2, 0x8($s3)
    ctx->pc = 0x170174u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x170178: 0x3c04fff8  lui         $a0, 0xFFF8
    ctx->pc = 0x170178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65528 << 16));
    // 0x17017c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x17017cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x170180: 0x3484001f  ori         $a0, $a0, 0x1F
    ctx->pc = 0x170180u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)31u)));
    // 0x170184: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x170184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x170188: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x170188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x17018c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x17018cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x170190: 0x2405c000  addiu       $a1, $zero, -0x4000
    ctx->pc = 0x170190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x170194: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x170194u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x170198: 0x73982  srl         $a3, $a3, 6
    ctx->pc = 0x170198u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 6));
    // 0x17019c: 0xc52024  and         $a0, $a2, $a1
    ctx->pc = 0x17019cu;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    // 0x1701a0: 0x30e53fff  andi        $a1, $a3, 0x3FFF
    ctx->pc = 0x1701a0u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)16383u)));
    // 0x1701a4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1701a4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1701a8: 0xa6640008  sh          $a0, 0x8($s3)
    ctx->pc = 0x1701a8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x1701ac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1701acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1701b0: 0xde620008  ld          $v0, 0x8($s3)
    ctx->pc = 0x1701b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1701b4: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x1701b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x1701b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1701b8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1701bc: 0x30833fff  andi        $v1, $a0, 0x3FFF
    ctx->pc = 0x1701bcu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)16383u)));
    // 0x1701c0: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1701c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1701c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1701c4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1701c8: 0xfe620008  sd          $v0, 0x8($s3)
    ctx->pc = 0x1701c8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 2));
    // 0x1701cc: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x1701ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
    // 0x1701d0: 0x214be  dsrl32      $v0, $v0, 18
    ctx->pc = 0x1701d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 18));
    // 0x1701d4: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1701d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1701d8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1701D8u;
    {
        const bool branch_taken_0x1701d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1701DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1701D8u;
            // 0x1701dc: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1701d8) {
            ctx->pc = 0x170298u;
            goto label_170298;
        }
    }
    ctx->pc = 0x1701E0u;
label_1701e0:
    // 0x1701e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1701e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1701e4: 0x1622002a  bne         $s1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1701E4u;
    {
        const bool branch_taken_0x1701e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1701E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1701E4u;
            // 0x1701e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1701e4) {
            ctx->pc = 0x170290u;
            goto label_170290;
        }
    }
    ctx->pc = 0x1701ECu;
    // 0x1701ec: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x1701ECu;
    SET_GPR_U32(ctx, 31, 0x1701F4u);
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1701F4u; }
        if (ctx->pc != 0x1701F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1701F4u; }
        if (ctx->pc != 0x1701F4u) { return; }
    }
    ctx->pc = 0x1701F4u;
    // 0x1701f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1701f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1701f8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1701F8u;
    {
        const bool branch_taken_0x1701f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1701f8) {
            ctx->pc = 0x170208u;
            goto label_170208;
        }
    }
    ctx->pc = 0x170200u;
    // 0x170200: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x170200u;
    {
        const bool branch_taken_0x170200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170200u;
            // 0x170204: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170200) {
            ctx->pc = 0x1702A8u;
            goto label_1702a8;
        }
    }
    ctx->pc = 0x170208u;
label_170208:
    // 0x170208: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x170208u;
    SET_GPR_U32(ctx, 31, 0x170210u);
    ctx->pc = 0x17020Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170208u;
            // 0x17020c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170210u; }
        if (ctx->pc != 0x170210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170210u; }
        if (ctx->pc != 0x170210u) { return; }
    }
    ctx->pc = 0x170210u;
    // 0x170210: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x170210u;
    {
        const bool branch_taken_0x170210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170210) {
            ctx->pc = 0x170220u;
            goto label_170220;
        }
    }
    ctx->pc = 0x170218u;
    // 0x170218: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x170218u;
    {
        const bool branch_taken_0x170218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17021Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170218u;
            // 0x17021c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170218) {
            ctx->pc = 0x1702A8u;
            goto label_1702a8;
        }
    }
    ctx->pc = 0x170220u;
label_170220:
    // 0x170220: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x170220u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x170224: 0x96660008  lhu         $a2, 0x8($s3)
    ctx->pc = 0x170224u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x170228: 0x3c04fff8  lui         $a0, 0xFFF8
    ctx->pc = 0x170228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65528 << 16));
    // 0x17022c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x17022cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x170230: 0x3484001f  ori         $a0, $a0, 0x1F
    ctx->pc = 0x170230u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)31u)));
    // 0x170234: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x170234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x170238: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x170238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x17023c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x17023cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x170240: 0x2405c000  addiu       $a1, $zero, -0x4000
    ctx->pc = 0x170240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x170244: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x170244u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x170248: 0x73982  srl         $a3, $a3, 6
    ctx->pc = 0x170248u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 6));
    // 0x17024c: 0xc52024  and         $a0, $a2, $a1
    ctx->pc = 0x17024cu;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    // 0x170250: 0x30e53fff  andi        $a1, $a3, 0x3FFF
    ctx->pc = 0x170250u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)16383u)));
    // 0x170254: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x170254u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x170258: 0xa6640008  sh          $a0, 0x8($s3)
    ctx->pc = 0x170258u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x17025c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x17025cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x170260: 0xde620008  ld          $v0, 0x8($s3)
    ctx->pc = 0x170260u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x170264: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x170264u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x170268: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x170268u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x17026c: 0x30833fff  andi        $v1, $a0, 0x3FFF
    ctx->pc = 0x17026cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)16383u)));
    // 0x170270: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x170270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x170274: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x170274u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x170278: 0xfe620008  sd          $v0, 0x8($s3)
    ctx->pc = 0x170278u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 2));
    // 0x17027c: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x17027cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
    // 0x170280: 0x214be  dsrl32      $v0, $v0, 18
    ctx->pc = 0x170280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 18));
    // 0x170284: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x170284u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x170288: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x170288u;
    {
        const bool branch_taken_0x170288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17028Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170288u;
            // 0x17028c: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170288) {
            ctx->pc = 0x170298u;
            goto label_170298;
        }
    }
    ctx->pc = 0x170290u;
label_170290:
    // 0x170290: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x170290u;
    {
        const bool branch_taken_0x170290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170290u;
            // 0x170294: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170290) {
            ctx->pc = 0x1702A8u;
            goto label_1702a8;
        }
    }
    ctx->pc = 0x170298u;
label_170298:
    // 0x170298: 0xc05bdcc  jal         func_16F730
    ctx->pc = 0x170298u;
    SET_GPR_U32(ctx, 31, 0x1702A0u);
    ctx->pc = 0x17029Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170298u;
            // 0x17029c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F730u;
    if (runtime->hasFunction(0x16F730u)) {
        auto targetFn = runtime->lookupFunction(0x16F730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1702A0u; }
        if (ctx->pc != 0x1702A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Tim2LoadClut_0x16f730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1702A0u; }
        if (ctx->pc != 0x1702A0u) { return; }
    }
    ctx->pc = 0x1702A0u;
    // 0x1702a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1702a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1702a4: 0x0  nop
    ctx->pc = 0x1702a4u;
    // NOP
label_1702a8:
    // 0x1702a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1702a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1702ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1702acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1702b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1702b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1702b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1702b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1702b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1702b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1702bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1702BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1702C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1702BCu;
            // 0x1702c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1700D8u: goto label_1700d8;
            case 0x170130u: goto label_170130;
            case 0x170158u: goto label_170158;
            case 0x170170u: goto label_170170;
            case 0x1701E0u: goto label_1701e0;
            case 0x170208u: goto label_170208;
            case 0x170220u: goto label_170220;
            case 0x170290u: goto label_170290;
            case 0x170298u: goto label_170298;
            case 0x1702A8u: goto label_1702a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1702C4u;
}
