#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: adler32
// Address: 0x1eee10 - 0x1eefa4
void adler32_0x1eee10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("adler32_0x1eee10");
#endif

    ctx->pc = 0x1eee10u;

    // 0x1eee10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1eee10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1eee14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1eee14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1eee18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1eee18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1eee1c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1eee1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1eee20: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1eee20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1eee24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1eee24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1eee28: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1eee28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eee2c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1eee2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eee30: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1eee30u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x1eee34: 0x828024  and         $s0, $a0, $v0
    ctx->pc = 0x1eee34u;
    SET_GPR_VEC(ctx, 16, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1eee38: 0x48c3a  dsrl        $s1, $a0, 16
    ctx->pc = 0x1eee38u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) >> 16);
    // 0x1eee3c: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x1eee3cu;
    SET_GPR_VEC(ctx, 17, PS2_PAND(GPR_VEC(ctx, 17), GPR_VEC(ctx, 2)));
    // 0x1eee40: 0x12400051  beqz        $s2, . + 4 + (0x51 << 2)
    ctx->pc = 0x1EEE40u;
    {
        const bool branch_taken_0x1eee40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEE40u;
            // 0x1eee44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eee40) {
            ctx->pc = 0x1EEF88u;
            goto label_1eef88;
        }
    }
    ctx->pc = 0x1EEE48u;
    // 0x1eee48: 0x1260004e  beqz        $s3, . + 4 + (0x4E << 2)
    ctx->pc = 0x1EEE48u;
    {
        const bool branch_taken_0x1eee48 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEE48u;
            // 0x1eee4c: 0x111438  dsll        $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << 16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eee48) {
            ctx->pc = 0x1EEF84u;
            goto label_1eef84;
        }
    }
    ctx->pc = 0x1EEE50u;
label_1eee50:
    // 0x1eee50: 0x2e6215b1  sltiu       $v0, $s3, 0x15B1
    ctx->pc = 0x1eee50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5553) ? 1 : 0);
    // 0x1eee54: 0x240315b0  addiu       $v1, $zero, 0x15B0
    ctx->pc = 0x1eee54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5552));
    // 0x1eee58: 0x262180b  movn        $v1, $s3, $v0
    ctx->pc = 0x1eee58u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 19));
    // 0x1eee5c: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x1eee5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1eee60: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1EEE60u;
    {
        const bool branch_taken_0x1eee60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEE60u;
            // 0x1eee64: 0x2639823  subu        $s3, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eee60) {
            ctx->pc = 0x1EEF38u;
            goto label_1eef38;
        }
    }
    ctx->pc = 0x1EEE68u;
label_1eee68:
    // 0x1eee68: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x1eee68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1eee6c: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x1eee6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1eee70: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x1eee70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x1eee74: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x1eee74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x1eee78: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x1eee78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1eee7c: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x1eee7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x1eee80: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x1eee80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1eee84: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x1eee84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1eee88: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x1eee88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x1eee8c: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x1eee8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x1eee90: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x1eee90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1eee94: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x1eee94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x1eee98: 0x92420004  lbu         $v0, 0x4($s2)
    ctx->pc = 0x1eee98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1eee9c: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x1eee9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1eeea0: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x1eeea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x1eeea4: 0x92420005  lbu         $v0, 0x5($s2)
    ctx->pc = 0x1eeea4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x1eeea8: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x1eeea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1eeeac: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x1eeeacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x1eeeb0: 0x92420006  lbu         $v0, 0x6($s2)
    ctx->pc = 0x1eeeb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x1eeeb4: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x1eeeb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1eeeb8: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x1eeeb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x1eeebc: 0x92420007  lbu         $v0, 0x7($s2)
    ctx->pc = 0x1eeebcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
    // 0x1eeec0: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x1eeec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1eeec4: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x1eeec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x1eeec8: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x1eeec8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1eeecc: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x1eeeccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1eeed0: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x1eeed0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x1eeed4: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x1eeed4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x1eeed8: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x1eeed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1eeedc: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x1eeedcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x1eeee0: 0x9242000a  lbu         $v0, 0xA($s2)
    ctx->pc = 0x1eeee0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x1eeee4: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x1eeee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1eeee8: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x1eeee8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x1eeeec: 0x9242000b  lbu         $v0, 0xB($s2)
    ctx->pc = 0x1eeeecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
    // 0x1eeef0: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x1eeef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1eeef4: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x1eeef4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x1eeef8: 0x9242000c  lbu         $v0, 0xC($s2)
    ctx->pc = 0x1eeef8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1eeefc: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x1eeefcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1eef00: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x1eef00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x1eef04: 0x9242000d  lbu         $v0, 0xD($s2)
    ctx->pc = 0x1eef04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 13)));
    // 0x1eef08: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x1eef08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1eef0c: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x1eef0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x1eef10: 0x9242000e  lbu         $v0, 0xE($s2)
    ctx->pc = 0x1eef10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x1eef14: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x1eef14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1eef18: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x1eef18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x1eef1c: 0x9242000f  lbu         $v0, 0xF($s2)
    ctx->pc = 0x1eef1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 15)));
    // 0x1eef20: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x1eef20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1eef24: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x1eef24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x1eef28: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1eef28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x1eef2c: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x1eef2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1eef30: 0x1040ffcd  beqz        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1EEF30u;
    {
        const bool branch_taken_0x1eef30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEF30u;
            // 0x1eef34: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef30) {
            ctx->pc = 0x1EEE68u;
            goto label_1eee68;
        }
    }
    ctx->pc = 0x1EEF38u;
label_1eef38:
    // 0x1eef38: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EEF38u;
    {
        const bool branch_taken_0x1eef38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEF38u;
            // 0x1eef3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef38) {
            ctx->pc = 0x1EEF60u;
            goto label_1eef60;
        }
    }
    ctx->pc = 0x1EEF40u;
label_1eef40:
    // 0x1eef40: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x1eef40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1eef44: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x1eef44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1eef48: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1eef48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1eef4c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1eef4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1eef50: 0x0  nop
    ctx->pc = 0x1eef50u;
    // NOP
    // 0x1eef54: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1EEF54u;
    {
        const bool branch_taken_0x1eef54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEF54u;
            // 0x1eef58: 0x230882d  daddu       $s1, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef54) {
            ctx->pc = 0x1EEF40u;
            goto label_1eef40;
        }
    }
    ctx->pc = 0x1EEF5Cu;
    // 0x1eef5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eef5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eef60:
    // 0x1eef60: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x1EEF60u;
    SET_GPR_U32(ctx, 31, 0x1EEF68u);
    ctx->pc = 0x1EEF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEF60u;
            // 0x1eef64: 0x3405fff1  ori         $a1, $zero, 0xFFF1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65521u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (runtime->hasFunction(0x1017F0u)) {
        auto targetFn = runtime->lookupFunction(0x1017F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEF68u; }
        if (ctx->pc != 0x1EEF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___umoddi3_0x1017f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEF68u; }
        if (ctx->pc != 0x1EEF68u) { return; }
    }
    ctx->pc = 0x1EEF68u;
    // 0x1eef68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1eef68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eef6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1eef6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eef70: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x1EEF70u;
    SET_GPR_U32(ctx, 31, 0x1EEF78u);
    ctx->pc = 0x1EEF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEF70u;
            // 0x1eef74: 0x3405fff1  ori         $a1, $zero, 0xFFF1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65521u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (runtime->hasFunction(0x1017F0u)) {
        auto targetFn = runtime->lookupFunction(0x1017F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEF78u; }
        if (ctx->pc != 0x1EEF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___umoddi3_0x1017f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEF78u; }
        if (ctx->pc != 0x1EEF78u) { return; }
    }
    ctx->pc = 0x1EEF78u;
    // 0x1eef78: 0x1660ffb5  bnez        $s3, . + 4 + (-0x4B << 2)
    ctx->pc = 0x1EEF78u;
    {
        const bool branch_taken_0x1eef78 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEF78u;
            // 0x1eef7c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef78) {
            ctx->pc = 0x1EEE50u;
            goto label_1eee50;
        }
    }
    ctx->pc = 0x1EEF80u;
    // 0x1eef80: 0x111438  dsll        $v0, $s1, 16
    ctx->pc = 0x1eef80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << 16);
label_1eef84:
    // 0x1eef84: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x1eef84u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 16)));
label_1eef88:
    // 0x1eef88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eef88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eef8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1eef8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1eef90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1eef90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eef94: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1eef94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1eef98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1eef98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eef9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EEF9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEF9Cu;
            // 0x1eefa0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EEE50u: goto label_1eee50;
            case 0x1EEE68u: goto label_1eee68;
            case 0x1EEF38u: goto label_1eef38;
            case 0x1EEF40u: goto label_1eef40;
            case 0x1EEF60u: goto label_1eef60;
            case 0x1EEF84u: goto label_1eef84;
            case 0x1EEF88u: goto label_1eef88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EEFA4u;
}
