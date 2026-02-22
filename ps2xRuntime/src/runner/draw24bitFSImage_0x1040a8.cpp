#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: draw24bitFSImage
// Address: 0x1040a8 - 0x104318
void draw24bitFSImage_0x1040a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1040a8u;

    // 0x1040a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1040a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1040ac: 0x24052b00  addiu       $a1, $zero, 0x2B00
    ctx->pc = 0x1040acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11008));
    // 0x1040b0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1040b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1040b4: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1040b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x1040b8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1040b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1040bc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1040bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1040c0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1040c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1040c4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1040c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1040c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1040c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1040cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1040ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1040d0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1040d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1040d4: 0xc040d1c  jal         func_103470
    ctx->pc = 0x1040D4u;
    SET_GPR_U32(ctx, 31, 0x1040DCu);
    ctx->pc = 0x1040D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1040D4u;
            // 0x1040d8: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103470u;
    if (runtime->hasFunction(0x103470u)) {
        auto targetFn = runtime->lookupFunction(0x103470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1040DCu; }
        if (ctx->pc != 0x1040DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        load24bitImage_0x103470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1040DCu; }
        if (ctx->pc != 0x1040DCu) { return; }
    }
    ctx->pc = 0x1040DCu;
    // 0x1040dc: 0x8f8882b8  lw          $t0, -0x7D48($gp)
    ctx->pc = 0x1040dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x1040e0: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x1040e0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1040e4: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1040e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1040e8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1040e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1040ec: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1040ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1040f0: 0x34c60007  ori         $a2, $a2, 0x7
    ctx->pc = 0x1040f0u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)7u)));
    // 0x1040f4: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x1040f4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x1040f8: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1040f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1040fc: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1040fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x104100: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x104100u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x104104: 0xfd020028  sd          $v0, 0x28($t0)
    ctx->pc = 0x104104u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 40), GPR_U64(ctx, 2));
    // 0x104108: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x104108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x10410c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10410cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x104110: 0xfd060010  sd          $a2, 0x10($t0)
    ctx->pc = 0x104110u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 6));
    // 0x104114: 0xfd070018  sd          $a3, 0x18($t0)
    ctx->pc = 0x104114u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 7));
    // 0x104118: 0xc040a92  jal         func_102A48
    ctx->pc = 0x104118u;
    SET_GPR_U32(ctx, 31, 0x104120u);
    ctx->pc = 0x10411Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x104118u;
            // 0x10411c: 0xfd000020  sd          $zero, 0x20($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102A48u;
    if (runtime->hasFunction(0x102A48u)) {
        auto targetFn = runtime->lookupFunction(0x102A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104120u; }
        if (ctx->pc != 0x104120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        power_0x102a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104120u; }
        if (ctx->pc != 0x104120u) { return; }
    }
    ctx->pc = 0x104120u;
    // 0x104120: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x104120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104124: 0x24040280  addiu       $a0, $zero, 0x280
    ctx->pc = 0x104124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x104128: 0xc040a92  jal         func_102A48
    ctx->pc = 0x104128u;
    SET_GPR_U32(ctx, 31, 0x104130u);
    ctx->pc = 0x10412Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x104128u;
            // 0x10412c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102A48u;
    if (runtime->hasFunction(0x102A48u)) {
        auto targetFn = runtime->lookupFunction(0x102A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104130u; }
        if (ctx->pc != 0x104130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        power_0x102a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104130u; }
        if (ctx->pc != 0x104130u) { return; }
    }
    ctx->pc = 0x104130u;
    // 0x104130: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x104130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x104134: 0x1087b8  dsll        $s0, $s0, 30
    ctx->pc = 0x104134u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 30);
    // 0x104138: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x104138u;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 16), GPR_VEC(ctx, 2)));
    // 0x10413c: 0x8f9882b8  lw          $t8, -0x7D48($gp)
    ctx->pc = 0x10413cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x104140: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x104140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x104144: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x104144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x104148: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x104148u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)2u)));
    // 0x10414c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x10414cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x104150: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x104150u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)32768u)));
    // 0x104154: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x104154u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x104158: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x104158u;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 16), GPR_VEC(ctx, 2)));
    // 0x10415c: 0x24166bf8  addiu       $s6, $zero, 0x6BF8
    ctx->pc = 0x10415cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 27640));
    // 0x104160: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x104160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x104164: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x104164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x104168: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x104168u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)16u)));
    // 0x10416c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x10416cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x104170: 0x34422b00  ori         $v0, $v0, 0x2B00
    ctx->pc = 0x104170u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)11008u)));
    // 0x104174: 0x24040154  addiu       $a0, $zero, 0x154
    ctx->pc = 0x104174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
    // 0x104178: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x104178u;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 16), GPR_VEC(ctx, 2)));
    // 0x10417c: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x10417cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x104180: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x104180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x104184: 0x24070042  addiu       $a3, $zero, 0x42
    ctx->pc = 0x104184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x104188: 0x3c0a7f7f  lui         $t2, 0x7F7F
    ctx->pc = 0x104188u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32639 << 16));
    // 0x10418c: 0x354a7f7f  ori         $t2, $t2, 0x7F7F
    ctx->pc = 0x10418cu;
    SET_GPR_VEC(ctx, 10, PS2_POR(GPR_VEC(ctx, 10), _mm_cvtsi32_si128((int)32639u)));
    // 0x104190: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x104190u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104194: 0x3c0c0002  lui         $t4, 0x2
    ctx->pc = 0x104194u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)2 << 16));
    // 0x104198: 0x240e0047  addiu       $t6, $zero, 0x47
    ctx->pc = 0x104198u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x10419c: 0x2411007f  addiu       $s1, $zero, 0x7F
    ctx->pc = 0x10419cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1041a0: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x1041a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1041a4: 0x3631807f  ori         $s1, $s1, 0x807F
    ctx->pc = 0x1041a4u;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)32895u)));
    // 0x1041a8: 0x2412003b  addiu       $s2, $zero, 0x3B
    ctx->pc = 0x1041a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1041ac: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x1041acu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x1041b0: 0x13983c  dsll32      $s3, $s3, 0
    ctx->pc = 0x1041b0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1041b4: 0x36738001  ori         $s3, $s3, 0x8001
    ctx->pc = 0x1041b4u;
    SET_GPR_VEC(ctx, 19, PS2_POR(GPR_VEC(ctx, 19), _mm_cvtsi32_si128((int)32769u)));
    // 0x1041b8: 0x3c154343  lui         $s5, 0x4343
    ctx->pc = 0x1041b8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)17219 << 16));
    // 0x1041bc: 0x36b54343  ori         $s5, $s5, 0x4343
    ctx->pc = 0x1041bcu;
    SET_GPR_VEC(ctx, 21, PS2_POR(GPR_VEC(ctx, 21), _mm_cvtsi32_si128((int)17219u)));
    // 0x1041c0: 0xff100030  sd          $s0, 0x30($t8)
    ctx->pc = 0x1041c0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 48), GPR_U64(ctx, 16));
    // 0x1041c4: 0x3c080010  lui         $t0, 0x10
    ctx->pc = 0x1041c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16 << 16));
    // 0x1041c8: 0xff020038  sd          $v0, 0x38($t8)
    ctx->pc = 0x1041c8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 56), GPR_U64(ctx, 2));
    // 0x1041cc: 0x270600b0  addiu       $a2, $t8, 0xB0
    ctx->pc = 0x1041ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 24), 176));
    // 0x1041d0: 0xff040040  sd          $a0, 0x40($t8)
    ctx->pc = 0x1041d0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 64), GPR_U64(ctx, 4));
    // 0x1041d4: 0x240d6ff8  addiu       $t5, $zero, 0x6FF8
    ctx->pc = 0x1041d4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 28664));
    // 0x1041d8: 0xff050050  sd          $a1, 0x50($t8)
    ctx->pc = 0x1041d8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 80), GPR_U64(ctx, 5));
    // 0x1041dc: 0x241027f8  addiu       $s0, $zero, 0x27F8
    ctx->pc = 0x1041dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10232));
    // 0x1041e0: 0xff070058  sd          $a3, 0x58($t8)
    ctx->pc = 0x1041e0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 88), GPR_U64(ctx, 7));
    // 0x1041e4: 0x34149408  ori         $s4, $zero, 0x9408
    ctx->pc = 0x1041e4u;
    SET_GPR_VEC(ctx, 20, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)37896u)));
    // 0x1041e8: 0xff0a0060  sd          $t2, 0x60($t8)
    ctx->pc = 0x1041e8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 96), GPR_U64(ctx, 10));
    // 0x1041ec: 0x270200d0  addiu       $v0, $t8, 0xD0
    ctx->pc = 0x1041ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), 208));
    // 0x1041f0: 0xff0b0068  sd          $t3, 0x68($t8)
    ctx->pc = 0x1041f0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 104), GPR_U64(ctx, 11));
    // 0x1041f4: 0x240f1ff8  addiu       $t7, $zero, 0x1FF8
    ctx->pc = 0x1041f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8184));
    // 0x1041f8: 0xff110080  sd          $s1, 0x80($t8)
    ctx->pc = 0x1041f8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 128), GPR_U64(ctx, 17));
    // 0x1041fc: 0x270500f0  addiu       $a1, $t8, 0xF0
    ctx->pc = 0x1041fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), 240));
    // 0x104200: 0xff120088  sd          $s2, 0x88($t8)
    ctx->pc = 0x104200u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 136), GPR_U64(ctx, 18));
    // 0x104204: 0x340a9008  ori         $t2, $zero, 0x9008
    ctx->pc = 0x104204u;
    SET_GPR_VEC(ctx, 10, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)36872u)));
    // 0x104208: 0xff130090  sd          $s3, 0x90($t8)
    ctx->pc = 0x104208u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 144), GPR_U64(ctx, 19));
    // 0x10420c: 0x27070110  addiu       $a3, $t8, 0x110
    ctx->pc = 0x10420cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 24), 272));
    // 0x104210: 0xff150098  sd          $s5, 0x98($t8)
    ctx->pc = 0x104210u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 152), GPR_U64(ctx, 21));
    // 0x104214: 0x3c0b7000  lui         $t3, 0x7000
    ctx->pc = 0x104214u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)28672 << 16));
    // 0x104218: 0xaf1600b0  sw          $s6, 0xB0($t8)
    ctx->pc = 0x104218u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 176), GPR_U32(ctx, 22));
    // 0x10421c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10421cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104220: 0xff0c0070  sd          $t4, 0x70($t8)
    ctx->pc = 0x104220u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 112), GPR_U64(ctx, 12));
    // 0x104224: 0xff0e0078  sd          $t6, 0x78($t8)
    ctx->pc = 0x104224u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 120), GPR_U64(ctx, 14));
    // 0x104228: 0xff000048  sd          $zero, 0x48($t8)
    ctx->pc = 0x104228u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 72), GPR_U64(ctx, 0));
    // 0x10422c: 0xaf0900a0  sw          $t1, 0xA0($t8)
    ctx->pc = 0x10422cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 160), GPR_U32(ctx, 9));
    // 0x104230: 0xaf0900a4  sw          $t1, 0xA4($t8)
    ctx->pc = 0x104230u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 164), GPR_U32(ctx, 9));
    // 0x104234: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x104234u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x104238: 0xaccd0004  sw          $t5, 0x4($a2)
    ctx->pc = 0x104238u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 13));
    // 0x10423c: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x10423cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x104240: 0xaf1000c0  sw          $s0, 0xC0($t8)
    ctx->pc = 0x104240u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 192), GPR_U32(ctx, 16));
    // 0x104244: 0xaf1400d0  sw          $s4, 0xD0($t8)
    ctx->pc = 0x104244u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 208), GPR_U32(ctx, 20));
    // 0x104248: 0xaf0900c4  sw          $t1, 0xC4($t8)
    ctx->pc = 0x104248u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 196), GPR_U32(ctx, 9));
    // 0x10424c: 0xac4d0004  sw          $t5, 0x4($v0)
    ctx->pc = 0x10424cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 13));
    // 0x104250: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x104250u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x104254: 0xac480008  sw          $t0, 0x8($v0)
    ctx->pc = 0x104254u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
    // 0x104258: 0xaf1600f0  sw          $s6, 0xF0($t8)
    ctx->pc = 0x104258u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 240), GPR_U32(ctx, 22));
    // 0x10425c: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x10425cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x104260: 0xaf0900e0  sw          $t1, 0xE0($t8)
    ctx->pc = 0x104260u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 224), GPR_U32(ctx, 9));
    // 0x104264: 0xaf0f00e4  sw          $t7, 0xE4($t8)
    ctx->pc = 0x104264u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 228), GPR_U32(ctx, 15));
    // 0x104268: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x104268u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x10426c: 0xacaa0004  sw          $t2, 0x4($a1)
    ctx->pc = 0x10426cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 10));
    // 0x104270: 0xaca80008  sw          $t0, 0x8($a1)
    ctx->pc = 0x104270u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
    // 0x104274: 0xaf100100  sw          $s0, 0x100($t8)
    ctx->pc = 0x104274u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 256), GPR_U32(ctx, 16));
    // 0x104278: 0xaf140110  sw          $s4, 0x110($t8)
    ctx->pc = 0x104278u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 272), GPR_U32(ctx, 20));
    // 0x10427c: 0xaf0f0104  sw          $t7, 0x104($t8)
    ctx->pc = 0x10427cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 260), GPR_U32(ctx, 15));
    // 0x104280: 0xacea0004  sw          $t2, 0x4($a3)
    ctx->pc = 0x104280u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 10));
    // 0x104284: 0xace80008  sw          $t0, 0x8($a3)
    ctx->pc = 0x104284u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 8));
    // 0x104288: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x104288u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x10428c: 0x7f020120  sq          $v0, 0x120($t8)
    ctx->pc = 0x10428cu;
    WRITE128(ADD32(GPR_U32(ctx, 24), 288), GPR_VEC(ctx, 2));
    // 0x104290: 0x8f020000  lw          $v0, 0x0($t8)
    ctx->pc = 0x104290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x104294: 0xaf0b0120  sw          $t3, 0x120($t8)
    ctx->pc = 0x104294u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 288), GPR_U32(ctx, 11));
    // 0x104298: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x104298u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)17u)));
    // 0x10429c: 0xc043948  jal         func_10E520
    ctx->pc = 0x10429Cu;
    SET_GPR_U32(ctx, 31, 0x1042A4u);
    ctx->pc = 0x1042A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10429Cu;
            // 0x1042a0: 0xaf020000  sw          $v0, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E520u;
    if (runtime->hasFunction(0x10E520u)) {
        auto targetFn = runtime->lookupFunction(0x10E520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1042A4u; }
        if (ctx->pc != 0x1042A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1042A4u; }
        if (ctx->pc != 0x1042A4u) { return; }
    }
    ctx->pc = 0x1042A4u;
    // 0x1042a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1042a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1042a8: 0xc043322  jal         func_10CC88
    ctx->pc = 0x1042A8u;
    SET_GPR_U32(ctx, 31, 0x1042B0u);
    ctx->pc = 0x1042ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1042A8u;
            // 0x1042ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC88u;
    if (runtime->hasFunction(0x10CC88u)) {
        auto targetFn = runtime->lookupFunction(0x10CC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1042B0u; }
        if (ctx->pc != 0x1042B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1042B0u; }
        if (ctx->pc != 0x1042B0u) { return; }
    }
    ctx->pc = 0x1042B0u;
    // 0x1042b0: 0x8f848490  lw          $a0, -0x7B70($gp)
    ctx->pc = 0x1042b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x1042b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1042b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1042b8: 0xc04372a  jal         func_10DCA8
    ctx->pc = 0x1042B8u;
    SET_GPR_U32(ctx, 31, 0x1042C0u);
    ctx->pc = 0x1042BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1042B8u;
            // 0x1042bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DCA8u;
    if (runtime->hasFunction(0x10DCA8u)) {
        auto targetFn = runtime->lookupFunction(0x10DCA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1042C0u; }
        if (ctx->pc != 0x1042C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSync_0x10dca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1042C0u; }
        if (ctx->pc != 0x1042C0u) { return; }
    }
    ctx->pc = 0x1042C0u;
    // 0x1042c0: 0x8f8382b8  lw          $v1, -0x7D48($gp)
    ctx->pc = 0x1042c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x1042c4: 0x3c050fff  lui         $a1, 0xFFF
    ctx->pc = 0x1042c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4095 << 16));
    // 0x1042c8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1042c8u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65535u)));
    // 0x1042cc: 0x8f848490  lw          $a0, -0x7B70($gp)
    ctx->pc = 0x1042ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x1042d0: 0xc0435d6  jal         func_10D758
    ctx->pc = 0x1042D0u;
    SET_GPR_U32(ctx, 31, 0x1042D8u);
    ctx->pc = 0x1042D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1042D0u;
            // 0x1042d4: 0x652824  and         $a1, $v1, $a1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D758u;
    if (runtime->hasFunction(0x10D758u)) {
        auto targetFn = runtime->lookupFunction(0x10D758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1042D8u; }
        if (ctx->pc != 0x1042D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x10d758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1042D8u; }
        if (ctx->pc != 0x1042D8u) { return; }
    }
    ctx->pc = 0x1042D8u;
    // 0x1042d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1042d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1042dc: 0xc043322  jal         func_10CC88
    ctx->pc = 0x1042DCu;
    SET_GPR_U32(ctx, 31, 0x1042E4u);
    ctx->pc = 0x1042E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1042DCu;
            // 0x1042e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC88u;
    if (runtime->hasFunction(0x10CC88u)) {
        auto targetFn = runtime->lookupFunction(0x10CC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1042E4u; }
        if (ctx->pc != 0x1042E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1042E4u; }
        if (ctx->pc != 0x1042E4u) { return; }
    }
    ctx->pc = 0x1042E4u;
    // 0x1042e4: 0x8f848490  lw          $a0, -0x7B70($gp)
    ctx->pc = 0x1042e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x1042e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1042e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1042ec: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1042ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1042f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1042f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1042f4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1042f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1042f8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1042f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1042fc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1042fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x104300: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x104300u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104304: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x104304u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104308: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x104308u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10430c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10430cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104310: 0x804372a  j           func_10DCA8
    ctx->pc = 0x104310u;
    ctx->pc = 0x104314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x104310u;
            // 0x104314: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DCA8u;
    if (runtime->hasFunction(0x10DCA8u)) {
        auto targetFn = runtime->lookupFunction(0x10DCA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceDmaSync_0x10dca8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x104318u;
}
