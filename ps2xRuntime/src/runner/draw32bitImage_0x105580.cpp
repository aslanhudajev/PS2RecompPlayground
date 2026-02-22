#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: draw32bitImage
// Address: 0x105580 - 0x105810
void draw32bitImage_0x105580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x105580u;

    // 0x105580: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x105580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x105584: 0x8f8282b4  lw          $v0, -0x7D4C($gp)
    ctx->pc = 0x105584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x105588: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x105588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x10558c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x10558cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x105590: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x105590u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105594: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x105594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x105598: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x105598u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10559c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10559cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1055a0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1055a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1055a4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1055a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1055a8: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x1055a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1055ac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1055acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1055b0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1055b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1055b4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1055b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1055b8: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x1055b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1055bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1055bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1055c0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1055c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1055c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1055c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1055c8: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1055C8u;
    {
        const bool branch_taken_0x1055c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1055CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1055C8u;
            // 0x1055cc: 0x8fb10090  lw          $s1, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1055c8) {
            ctx->pc = 0x1055E0u;
            goto label_1055e0;
        }
    }
    ctx->pc = 0x1055D0u;
    // 0x1055d0: 0x24052b00  addiu       $a1, $zero, 0x2B00
    ctx->pc = 0x1055d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11008));
    // 0x1055d4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1055d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1055d8: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1055D8u;
    SET_GPR_U32(ctx, 31, 0x1055E0u);
    ctx->pc = 0x1055DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1055D8u;
            // 0x1055dc: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103230u;
    if (runtime->hasFunction(0x103230u)) {
        auto targetFn = runtime->lookupFunction(0x103230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1055E0u; }
        if (ctx->pc != 0x1055E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        load32bitImage_0x103230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1055E0u; }
        if (ctx->pc != 0x1055E0u) { return; }
    }
    ctx->pc = 0x1055E0u;
label_1055e0:
    // 0x1055e0: 0x8f8282b8  lw          $v0, -0x7D48($gp)
    ctx->pc = 0x1055e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x1055e4: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x1055e4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1055e8: 0xaf9082b4  sw          $s0, -0x7D4C($gp)
    ctx->pc = 0x1055e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935220), GPR_U32(ctx, 16));
    // 0x1055ec: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x1055ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x1055f0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1055f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1055f4: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1055f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1055f8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1055f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1055fc: 0x34c60006  ori         $a2, $a2, 0x6
    ctx->pc = 0x1055fcu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)6u)));
    // 0x105600: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x105600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x105604: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x105604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x105608: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x105608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10560c: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x10560cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x105610: 0xfc430028  sd          $v1, 0x28($v0)
    ctx->pc = 0x105610u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 3));
    // 0x105614: 0xfc460010  sd          $a2, 0x10($v0)
    ctx->pc = 0x105614u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 6));
    // 0x105618: 0xfc450018  sd          $a1, 0x18($v0)
    ctx->pc = 0x105618u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 5));
    // 0x10561c: 0xc040a9e  jal         func_102A78
    ctx->pc = 0x10561Cu;
    SET_GPR_U32(ctx, 31, 0x105624u);
    ctx->pc = 0x105620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10561Cu;
            // 0x105620: 0xfc400020  sd          $zero, 0x20($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102A78u;
    if (runtime->hasFunction(0x102A78u)) {
        auto targetFn = runtime->lookupFunction(0x102A78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105624u; }
        if (ctx->pc != 0x105624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        power2_0x102a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105624u; }
        if (ctx->pc != 0x105624u) { return; }
    }
    ctx->pc = 0x105624u;
    // 0x105624: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x105624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105628: 0xc040a9e  jal         func_102A78
    ctx->pc = 0x105628u;
    SET_GPR_U32(ctx, 31, 0x105630u);
    ctx->pc = 0x10562Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105628u;
            // 0x10562c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102A78u;
    if (runtime->hasFunction(0x102A78u)) {
        auto targetFn = runtime->lookupFunction(0x102A78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105630u; }
        if (ctx->pc != 0x105630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        power2_0x102a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105630u; }
        if (ctx->pc != 0x105630u) { return; }
    }
    ctx->pc = 0x105630u;
    // 0x105630: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x105630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x105634: 0x2664003f  addiu       $a0, $s3, 0x3F
    ctx->pc = 0x105634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 63));
    // 0x105638: 0x73182a  slt         $v1, $v1, $s3
    ctx->pc = 0x105638u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x10563c: 0x263200b  movn        $a0, $s3, $v1
    ctx->pc = 0x10563cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 19));
    // 0x105640: 0x42183  sra         $a0, $a0, 6
    ctx->pc = 0x105640u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 6));
    // 0x105644: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x105644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x105648: 0x1087b8  dsll        $s0, $s0, 30
    ctx->pc = 0x105648u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 30);
    // 0x10564c: 0x423b8  dsll        $a0, $a0, 14
    ctx->pc = 0x10564cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 14);
    // 0x105650: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x105650u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32768u)));
    // 0x105654: 0x31bbc  dsll32      $v1, $v1, 14
    ctx->pc = 0x105654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 14));
    // 0x105658: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x105658u;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 16), GPR_VEC(ctx, 2)));
    // 0x10565c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x10565cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x105660: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x105660u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 16)));
    // 0x105664: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x105664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x105668: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x105668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10566c: 0x34422b00  ori         $v0, $v0, 0x2B00
    ctx->pc = 0x10566cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)11008u)));
    // 0x105670: 0x8f9882b8  lw          $t8, -0x7D48($gp)
    ctx->pc = 0x105670u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x105674: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x105674u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x105678: 0x125043  sra         $t2, $s2, 1
    ctx->pc = 0x105678u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 18), 1));
    // 0x10567c: 0x144843  sra         $t1, $s4, 1
    ctx->pc = 0x10567cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 20), 1));
    // 0x105680: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x105680u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x105684: 0x2caa023  subu        $s4, $s6, $t2
    ctx->pc = 0x105684u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 10)));
    // 0x105688: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x105688u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x10568c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x10568cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x105690: 0x24070154  addiu       $a3, $zero, 0x154
    ctx->pc = 0x105690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
    // 0x105694: 0x240b0044  addiu       $t3, $zero, 0x44
    ctx->pc = 0x105694u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x105698: 0x240c0042  addiu       $t4, $zero, 0x42
    ctx->pc = 0x105698u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x10569c: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x10569cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1056a0: 0x3c0e0002  lui         $t6, 0x2
    ctx->pc = 0x1056a0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)2 << 16));
    // 0x1056a4: 0x24100047  addiu       $s0, $zero, 0x47
    ctx->pc = 0x1056a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1056a8: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x1056a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x1056ac: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x1056acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1056b0: 0x36318001  ori         $s1, $s1, 0x8001
    ctx->pc = 0x1056b0u;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)32769u)));
    // 0x1056b4: 0x3c124343  lui         $s2, 0x4343
    ctx->pc = 0x1056b4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)17219 << 16));
    // 0x1056b8: 0x36524343  ori         $s2, $s2, 0x4343
    ctx->pc = 0x1056b8u;
    SET_GPR_VEC(ctx, 18, PS2_POR(GPR_VEC(ctx, 18), _mm_cvtsi32_si128((int)17219u)));
    // 0x1056bc: 0xff040030  sd          $a0, 0x30($t8)
    ctx->pc = 0x1056bcu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 48), GPR_U64(ctx, 4));
    // 0x1056c0: 0x3c080010  lui         $t0, 0x10
    ctx->pc = 0x1056c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16 << 16));
    // 0x1056c4: 0xff020038  sd          $v0, 0x38($t8)
    ctx->pc = 0x1056c4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 56), GPR_U64(ctx, 2));
    // 0x1056c8: 0x2e97823  subu        $t7, $s7, $t1
    ctx->pc = 0x1056c8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 9)));
    // 0x1056cc: 0xff070040  sd          $a3, 0x40($t8)
    ctx->pc = 0x1056ccu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 64), GPR_U64(ctx, 7));
    // 0x1056d0: 0x270600a0  addiu       $a2, $t8, 0xA0
    ctx->pc = 0x1056d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 24), 160));
    // 0x1056d4: 0xff0b0050  sd          $t3, 0x50($t8)
    ctx->pc = 0x1056d4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 80), GPR_U64(ctx, 11));
    // 0x1056d8: 0x2ca5021  addu        $t2, $s6, $t2
    ctx->pc = 0x1056d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 10)));
    // 0x1056dc: 0xff0c0058  sd          $t4, 0x58($t8)
    ctx->pc = 0x1056dcu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 88), GPR_U64(ctx, 12));
    // 0x1056e0: 0x139900  sll         $s3, $s3, 4
    ctx->pc = 0x1056e0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1056e4: 0xff050060  sd          $a1, 0x60($t8)
    ctx->pc = 0x1056e4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 96), GPR_U64(ctx, 5));
    // 0x1056e8: 0x270200c0  addiu       $v0, $t8, 0xC0
    ctx->pc = 0x1056e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), 192));
    // 0x1056ec: 0xff100078  sd          $s0, 0x78($t8)
    ctx->pc = 0x1056ecu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 120), GPR_U64(ctx, 16));
    // 0x1056f0: 0x155900  sll         $t3, $s5, 4
    ctx->pc = 0x1056f0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x1056f4: 0xff110080  sd          $s1, 0x80($t8)
    ctx->pc = 0x1056f4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 128), GPR_U64(ctx, 17));
    // 0x1056f8: 0x2e94821  addu        $t1, $s7, $t1
    ctx->pc = 0x1056f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 9)));
    // 0x1056fc: 0xff120088  sd          $s2, 0x88($t8)
    ctx->pc = 0x1056fcu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 136), GPR_U64(ctx, 18));
    // 0x105700: 0x270500e0  addiu       $a1, $t8, 0xE0
    ctx->pc = 0x105700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), 224));
    // 0x105704: 0xaf1400a0  sw          $s4, 0xA0($t8)
    ctx->pc = 0x105704u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 160), GPR_U32(ctx, 20));
    // 0x105708: 0x27070100  addiu       $a3, $t8, 0x100
    ctx->pc = 0x105708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 24), 256));
    // 0x10570c: 0xff0d0068  sd          $t5, 0x68($t8)
    ctx->pc = 0x10570cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 104), GPR_U64(ctx, 13));
    // 0x105710: 0x3c0c7000  lui         $t4, 0x7000
    ctx->pc = 0x105710u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)28672 << 16));
    // 0x105714: 0xff0e0070  sd          $t6, 0x70($t8)
    ctx->pc = 0x105714u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 112), GPR_U64(ctx, 14));
    // 0x105718: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x105718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10571c: 0xff000048  sd          $zero, 0x48($t8)
    ctx->pc = 0x10571cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 72), GPR_U64(ctx, 0));
    // 0x105720: 0xaf000090  sw          $zero, 0x90($t8)
    ctx->pc = 0x105720u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 144), GPR_U32(ctx, 0));
    // 0x105724: 0xaf000094  sw          $zero, 0x94($t8)
    ctx->pc = 0x105724u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 148), GPR_U32(ctx, 0));
    // 0x105728: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x105728u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x10572c: 0xaccf0004  sw          $t7, 0x4($a2)
    ctx->pc = 0x10572cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 15));
    // 0x105730: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x105730u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x105734: 0xaf1300b0  sw          $s3, 0xB0($t8)
    ctx->pc = 0x105734u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 176), GPR_U32(ctx, 19));
    // 0x105738: 0xaf0000b4  sw          $zero, 0xB4($t8)
    ctx->pc = 0x105738u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 180), GPR_U32(ctx, 0));
    // 0x10573c: 0xaf0a00c0  sw          $t2, 0xC0($t8)
    ctx->pc = 0x10573cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 192), GPR_U32(ctx, 10));
    // 0x105740: 0xac4f0004  sw          $t7, 0x4($v0)
    ctx->pc = 0x105740u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 15));
    // 0x105744: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x105744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x105748: 0xac480008  sw          $t0, 0x8($v0)
    ctx->pc = 0x105748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
    // 0x10574c: 0xaf1400e0  sw          $s4, 0xE0($t8)
    ctx->pc = 0x10574cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 224), GPR_U32(ctx, 20));
    // 0x105750: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x105750u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x105754: 0xaf0000d0  sw          $zero, 0xD0($t8)
    ctx->pc = 0x105754u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 208), GPR_U32(ctx, 0));
    // 0x105758: 0xaf0b00d4  sw          $t3, 0xD4($t8)
    ctx->pc = 0x105758u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 212), GPR_U32(ctx, 11));
    // 0x10575c: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x10575cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x105760: 0xaca90004  sw          $t1, 0x4($a1)
    ctx->pc = 0x105760u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 9));
    // 0x105764: 0xaca80008  sw          $t0, 0x8($a1)
    ctx->pc = 0x105764u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
    // 0x105768: 0xaf1300f0  sw          $s3, 0xF0($t8)
    ctx->pc = 0x105768u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 240), GPR_U32(ctx, 19));
    // 0x10576c: 0xaf0b00f4  sw          $t3, 0xF4($t8)
    ctx->pc = 0x10576cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 244), GPR_U32(ctx, 11));
    // 0x105770: 0xaf0a0100  sw          $t2, 0x100($t8)
    ctx->pc = 0x105770u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 256), GPR_U32(ctx, 10));
    // 0x105774: 0xace90004  sw          $t1, 0x4($a3)
    ctx->pc = 0x105774u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 9));
    // 0x105778: 0xace80008  sw          $t0, 0x8($a3)
    ctx->pc = 0x105778u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 8));
    // 0x10577c: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x10577cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x105780: 0x7f020110  sq          $v0, 0x110($t8)
    ctx->pc = 0x105780u;
    WRITE128(ADD32(GPR_U32(ctx, 24), 272), GPR_VEC(ctx, 2));
    // 0x105784: 0x8f020000  lw          $v0, 0x0($t8)
    ctx->pc = 0x105784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x105788: 0xaf0c0110  sw          $t4, 0x110($t8)
    ctx->pc = 0x105788u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 272), GPR_U32(ctx, 12));
    // 0x10578c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x10578cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)16u)));
    // 0x105790: 0xc043948  jal         func_10E520
    ctx->pc = 0x105790u;
    SET_GPR_U32(ctx, 31, 0x105798u);
    ctx->pc = 0x105794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105790u;
            // 0x105794: 0xaf020000  sw          $v0, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E520u;
    if (runtime->hasFunction(0x10E520u)) {
        auto targetFn = runtime->lookupFunction(0x10E520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105798u; }
        if (ctx->pc != 0x105798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105798u; }
        if (ctx->pc != 0x105798u) { return; }
    }
    ctx->pc = 0x105798u;
    // 0x105798: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x105798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10579c: 0xc043322  jal         func_10CC88
    ctx->pc = 0x10579Cu;
    SET_GPR_U32(ctx, 31, 0x1057A4u);
    ctx->pc = 0x1057A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10579Cu;
            // 0x1057a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC88u;
    if (runtime->hasFunction(0x10CC88u)) {
        auto targetFn = runtime->lookupFunction(0x10CC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1057A4u; }
        if (ctx->pc != 0x1057A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1057A4u; }
        if (ctx->pc != 0x1057A4u) { return; }
    }
    ctx->pc = 0x1057A4u;
    // 0x1057a4: 0x8f848490  lw          $a0, -0x7B70($gp)
    ctx->pc = 0x1057a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x1057a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1057a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1057ac: 0xc04372a  jal         func_10DCA8
    ctx->pc = 0x1057ACu;
    SET_GPR_U32(ctx, 31, 0x1057B4u);
    ctx->pc = 0x1057B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1057ACu;
            // 0x1057b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DCA8u;
    if (runtime->hasFunction(0x10DCA8u)) {
        auto targetFn = runtime->lookupFunction(0x10DCA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1057B4u; }
        if (ctx->pc != 0x1057B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSync_0x10dca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1057B4u; }
        if (ctx->pc != 0x1057B4u) { return; }
    }
    ctx->pc = 0x1057B4u;
    // 0x1057b4: 0x8f8382b8  lw          $v1, -0x7D48($gp)
    ctx->pc = 0x1057b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x1057b8: 0x3c050fff  lui         $a1, 0xFFF
    ctx->pc = 0x1057b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4095 << 16));
    // 0x1057bc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1057bcu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65535u)));
    // 0x1057c0: 0x8f848490  lw          $a0, -0x7B70($gp)
    ctx->pc = 0x1057c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x1057c4: 0xc0435d6  jal         func_10D758
    ctx->pc = 0x1057C4u;
    SET_GPR_U32(ctx, 31, 0x1057CCu);
    ctx->pc = 0x1057C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1057C4u;
            // 0x1057c8: 0x652824  and         $a1, $v1, $a1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D758u;
    if (runtime->hasFunction(0x10D758u)) {
        auto targetFn = runtime->lookupFunction(0x10D758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1057CCu; }
        if (ctx->pc != 0x1057CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x10d758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1057CCu; }
        if (ctx->pc != 0x1057CCu) { return; }
    }
    ctx->pc = 0x1057CCu;
    // 0x1057cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1057ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1057d0: 0xc043322  jal         func_10CC88
    ctx->pc = 0x1057D0u;
    SET_GPR_U32(ctx, 31, 0x1057D8u);
    ctx->pc = 0x1057D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1057D0u;
            // 0x1057d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC88u;
    if (runtime->hasFunction(0x10CC88u)) {
        auto targetFn = runtime->lookupFunction(0x10CC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1057D8u; }
        if (ctx->pc != 0x1057D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1057D8u; }
        if (ctx->pc != 0x1057D8u) { return; }
    }
    ctx->pc = 0x1057D8u;
    // 0x1057d8: 0x8f848490  lw          $a0, -0x7B70($gp)
    ctx->pc = 0x1057d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x1057dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1057dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1057e0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1057e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1057e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1057e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1057e8: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x1057e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1057ec: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1057ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1057f0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1057f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1057f4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1057f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1057f8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1057f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1057fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1057fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105800: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x105800u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105804: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x105804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105808: 0x804372a  j           func_10DCA8
    ctx->pc = 0x105808u;
    ctx->pc = 0x10580Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105808u;
            // 0x10580c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DCA8u;
    if (runtime->hasFunction(0x10DCA8u)) {
        auto targetFn = runtime->lookupFunction(0x10DCA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceDmaSync_0x10dca8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x105810u;
}
