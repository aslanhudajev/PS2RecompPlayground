#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: load32bitImage
// Address: 0x103230 - 0x103470
void load32bitImage_0x103230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("load32bitImage_0x103230");
#endif

    ctx->pc = 0x103230u;

    // 0x103230: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x103230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x103234: 0x8f8882b8  lw          $t0, -0x7D48($gp)
    ctx->pc = 0x103234u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x103238: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10323c: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x10323cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x103240: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x103240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x103244: 0xc78018  mult        $s0, $a2, $a3
    ctx->pc = 0x103244u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x103248: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x103248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10324c: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x10324cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x103250: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x103250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x103254: 0x146182a  slt         $v1, $t2, $a2
    ctx->pc = 0x103254u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x103258: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x103258u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x10325c: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x10325cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x103260: 0x24c2003f  addiu       $v0, $a2, 0x3F
    ctx->pc = 0x103260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x103264: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x103264u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103268: 0xc3100b  movn        $v0, $a2, $v1
    ctx->pc = 0x103268u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x10326c: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x10326cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103270: 0x150502a  slt         $t2, $t2, $s0
    ctx->pc = 0x103270u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x103274: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x103274u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x103278: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x103278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x10327c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x10327cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x103280: 0x20a180b  movn        $v1, $s0, $t2
    ctx->pc = 0x103280u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x103284: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x103284u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x103288: 0x12483c  dsll32      $t1, $s2, 0
    ctx->pc = 0x103288u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) << (32 + 0));
    // 0x10328c: 0xc73825  or          $a3, $a2, $a3
    ctx->pc = 0x10328cu;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x103290: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x103290u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 2)));
    // 0x103294: 0x240a003f  addiu       $t2, $zero, 0x3F
    ctx->pc = 0x103294u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x103298: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x103298u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)6u)));
    // 0x10329c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10329cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1032a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1032a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1032a4: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x1032a4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)5u)));
    // 0x1032a8: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1032a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1032ac: 0x240b0050  addiu       $t3, $zero, 0x50
    ctx->pc = 0x1032acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1032b0: 0x240c0051  addiu       $t4, $zero, 0x51
    ctx->pc = 0x1032b0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x1032b4: 0x240d0052  addiu       $t5, $zero, 0x52
    ctx->pc = 0x1032b4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x1032b8: 0x240e0053  addiu       $t6, $zero, 0x53
    ctx->pc = 0x1032b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1032bc: 0xfd0a0028  sd          $t2, 0x28($t0)
    ctx->pc = 0x1032bcu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 40), GPR_U64(ctx, 10));
    // 0x1032c0: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x1032c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x1032c4: 0x80c82d  daddu       $t9, $a0, $zero
    ctx->pc = 0x1032c4u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1032c8: 0xfd020010  sd          $v0, 0x10($t0)
    ctx->pc = 0x1032c8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 2));
    // 0x1032cc: 0x37883  sra         $t7, $v1, 2
    ctx->pc = 0x1032ccu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1032d0: 0xfd060018  sd          $a2, 0x18($t0)
    ctx->pc = 0x1032d0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 6));
    // 0x1032d4: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x1032d4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1032d8: 0x240a0007  addiu       $t2, $zero, 0x7
    ctx->pc = 0x1032d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1032dc: 0xfd090030  sd          $t1, 0x30($t0)
    ctx->pc = 0x1032dcu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 48), GPR_U64(ctx, 9));
    // 0x1032e0: 0xfd0b0038  sd          $t3, 0x38($t0)
    ctx->pc = 0x1032e0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 56), GPR_U64(ctx, 11));
    // 0x1032e4: 0xfd0c0048  sd          $t4, 0x48($t0)
    ctx->pc = 0x1032e4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 72), GPR_U64(ctx, 12));
    // 0x1032e8: 0xfd070050  sd          $a3, 0x50($t0)
    ctx->pc = 0x1032e8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 80), GPR_U64(ctx, 7));
    // 0x1032ec: 0xfd0d0058  sd          $t5, 0x58($t0)
    ctx->pc = 0x1032ecu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 88), GPR_U64(ctx, 13));
    // 0x1032f0: 0xfd0e0068  sd          $t6, 0x68($t0)
    ctx->pc = 0x1032f0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 104), GPR_U64(ctx, 14));
    // 0x1032f4: 0xfd000020  sd          $zero, 0x20($t0)
    ctx->pc = 0x1032f4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 0));
    // 0x1032f8: 0xfd000040  sd          $zero, 0x40($t0)
    ctx->pc = 0x1032f8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 64), GPR_U64(ctx, 0));
    // 0x1032fc: 0x19e00035  blez        $t7, . + 4 + (0x35 << 2)
    ctx->pc = 0x1032FCu;
    {
        const bool branch_taken_0x1032fc = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x103300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1032FCu;
            // 0x103300: 0xfd000060  sd          $zero, 0x60($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 96), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1032fc) {
            ctx->pc = 0x1033D4u;
            goto label_1033d4;
        }
    }
    ctx->pc = 0x103304u;
    // 0x103304: 0x261103ff  addiu       $s1, $s0, 0x3FF
    ctx->pc = 0x103304u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1023));
label_103308:
    // 0x103308: 0x8f8282b8  lw          $v0, -0x7D48($gp)
    ctx->pc = 0x103308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x10330c: 0xa1900  sll         $v1, $t2, 4
    ctx->pc = 0x10330cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x103310: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x103310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x103314: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x103314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x103318: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x103318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10331c: 0xaf282a  slt         $a1, $a1, $t7
    ctx->pc = 0x10331cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x103320: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x103320u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x103324: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x103324u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
    // 0x103328: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x103328u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x10332c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x10332cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x103330: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x103330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x103334: 0x45c00a  movz        $t8, $v0, $a1
    ctx->pc = 0x103334u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 2));
    // 0x103338: 0x29e22001  slti        $v0, $t7, 0x2001
    ctx->pc = 0x103338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8193) ? 1 : 0);
    // 0x10333c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10333Cu;
    {
        const bool branch_taken_0x10333c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10333Cu;
            // 0x103340: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10333c) {
            ctx->pc = 0x103350u;
            goto label_103350;
        }
    }
    ctx->pc = 0x103344u;
    // 0x103344: 0x24072000  addiu       $a3, $zero, 0x2000
    ctx->pc = 0x103344u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x103348: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x103348u;
    {
        const bool branch_taken_0x103348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10334Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103348u;
            // 0x10334c: 0x25efe000  addiu       $t7, $t7, -0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294959104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103348) {
            ctx->pc = 0x103358u;
            goto label_103358;
        }
    }
    ctx->pc = 0x103350u;
label_103350:
    // 0x103350: 0x1e0382d  daddu       $a3, $t7, $zero
    ctx->pc = 0x103350u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103354: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x103354u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_103358:
    // 0x103358: 0x300102d  daddu       $v0, $t8, $zero
    ctx->pc = 0x103358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10335c: 0x8f8582b8  lw          $a1, -0x7D48($gp)
    ctx->pc = 0x10335cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x103360: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x103360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x103364: 0xa2100  sll         $a0, $t2, 4
    ctx->pc = 0x103364u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x103368: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x103368u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x10336c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x10336cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32768u)));
    // 0x103370: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x103370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x103374: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x103374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x103378: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x103378u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x10337c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x10337cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x103380: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x103380u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x103384: 0xa3100  sll         $a2, $t2, 4
    ctx->pc = 0x103384u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x103388: 0xfc800008  sd          $zero, 0x8($a0)
    ctx->pc = 0x103388u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 0));
    // 0x10338c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x10338cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x103390: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x103390u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x103394: 0x17000003  bnez        $t8, . + 4 + (0x3 << 2)
    ctx->pc = 0x103394u;
    {
        const bool branch_taken_0x103394 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x103398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103394u;
            // 0x103398: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103394) {
            ctx->pc = 0x1033A4u;
            goto label_1033a4;
        }
    }
    ctx->pc = 0x10339Cu;
    // 0x10339c: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x10339cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1033a0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1033a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1033a4:
    // 0x1033a4: 0x8f8282b8  lw          $v0, -0x7D48($gp)
    ctx->pc = 0x1033a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x1033a8: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x1033a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1033ac: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1033acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1033b0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1033b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1033b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1033b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1033b8: 0xac590004  sw          $t9, 0x4($v0)
    ctx->pc = 0x1033b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 25));
    // 0x1033bc: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x1033bcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x1033c0: 0x324c821  addu        $t9, $t9, $a0
    ctx->pc = 0x1033c0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 4)));
    // 0x1033c4: 0x1de0ffd0  bgtz        $t7, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1033C4u;
    {
        const bool branch_taken_0x1033c4 = (GPR_S32(ctx, 15) > 0);
        ctx->pc = 0x1033C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1033C4u;
            // 0x1033c8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1033c4) {
            ctx->pc = 0x103308u;
            goto label_103308;
        }
    }
    ctx->pc = 0x1033CCu;
    // 0x1033cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1033CCu;
    {
        const bool branch_taken_0x1033cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1033D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1033CCu;
            // 0x1033d0: 0x8f8382b8  lw          $v1, -0x7D48($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1033cc) {
            ctx->pc = 0x1033DCu;
            goto label_1033dc;
        }
    }
    ctx->pc = 0x1033D4u;
label_1033d4:
    // 0x1033d4: 0x261103ff  addiu       $s1, $s0, 0x3FF
    ctx->pc = 0x1033d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1023));
    // 0x1033d8: 0x8f8382b8  lw          $v1, -0x7D48($gp)
    ctx->pc = 0x1033d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
label_1033dc:
    // 0x1033dc: 0xa1100  sll         $v0, $t2, 4
    ctx->pc = 0x1033dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1033e0: 0x700034a9  por         $a2, $zero, $zero
    ctx->pc = 0x1033e0u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1033e4: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1033e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1033e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1033e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1033ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1033ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1033f0: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x1033f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x1033f4: 0xc043948  jal         func_10E520
    ctx->pc = 0x1033F4u;
    SET_GPR_U32(ctx, 31, 0x1033FCu);
    ctx->pc = 0x1033F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1033F4u;
            // 0x1033f8: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E520u;
    if (runtime->hasFunction(0x10E520u)) {
        auto targetFn = runtime->lookupFunction(0x10E520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1033FCu; }
        if (ctx->pc != 0x1033FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1033FCu; }
        if (ctx->pc != 0x1033FCu) { return; }
    }
    ctx->pc = 0x1033FCu;
    // 0x1033fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1033fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103400: 0xc043322  jal         func_10CC88
    ctx->pc = 0x103400u;
    SET_GPR_U32(ctx, 31, 0x103408u);
    ctx->pc = 0x103404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103400u;
            // 0x103404: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC88u;
    if (runtime->hasFunction(0x10CC88u)) {
        auto targetFn = runtime->lookupFunction(0x10CC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103408u; }
        if (ctx->pc != 0x103408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103408u; }
        if (ctx->pc != 0x103408u) { return; }
    }
    ctx->pc = 0x103408u;
    // 0x103408: 0x8f848490  lw          $a0, -0x7B70($gp)
    ctx->pc = 0x103408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x10340c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10340cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103410: 0xc04372a  jal         func_10DCA8
    ctx->pc = 0x103410u;
    SET_GPR_U32(ctx, 31, 0x103418u);
    ctx->pc = 0x103414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103410u;
            // 0x103414: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DCA8u;
    if (runtime->hasFunction(0x10DCA8u)) {
        auto targetFn = runtime->lookupFunction(0x10DCA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103418u; }
        if (ctx->pc != 0x103418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSync_0x10dca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103418u; }
        if (ctx->pc != 0x103418u) { return; }
    }
    ctx->pc = 0x103418u;
    // 0x103418: 0x8f8382b8  lw          $v1, -0x7D48($gp)
    ctx->pc = 0x103418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x10341c: 0x3c050fff  lui         $a1, 0xFFF
    ctx->pc = 0x10341cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4095 << 16));
    // 0x103420: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x103420u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65535u)));
    // 0x103424: 0x8f848490  lw          $a0, -0x7B70($gp)
    ctx->pc = 0x103424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x103428: 0xc0435d6  jal         func_10D758
    ctx->pc = 0x103428u;
    SET_GPR_U32(ctx, 31, 0x103430u);
    ctx->pc = 0x10342Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103428u;
            // 0x10342c: 0x652824  and         $a1, $v1, $a1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D758u;
    if (runtime->hasFunction(0x10D758u)) {
        auto targetFn = runtime->lookupFunction(0x10D758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103430u; }
        if (ctx->pc != 0x103430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x10d758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103430u; }
        if (ctx->pc != 0x103430u) { return; }
    }
    ctx->pc = 0x103430u;
    // 0x103430: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x103430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103434: 0xc043322  jal         func_10CC88
    ctx->pc = 0x103434u;
    SET_GPR_U32(ctx, 31, 0x10343Cu);
    ctx->pc = 0x103438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103434u;
            // 0x103438: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC88u;
    if (runtime->hasFunction(0x10CC88u)) {
        auto targetFn = runtime->lookupFunction(0x10CC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10343Cu; }
        if (ctx->pc != 0x10343Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10343Cu; }
        if (ctx->pc != 0x10343Cu) { return; }
    }
    ctx->pc = 0x10343Cu;
    // 0x10343c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10343cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x103440: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x103440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x103444: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x103444u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x103448: 0x203880b  movn        $s1, $s0, $v1
    ctx->pc = 0x103448u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 16));
    // 0x10344c: 0x111283  sra         $v0, $s1, 10
    ctx->pc = 0x10344cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 10));
    // 0x103450: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103450u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103454: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x103454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x103458: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103458u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10345c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10345cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x103460: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x103460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x103464: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x103464u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103468: 0x3e00008  jr          $ra
    ctx->pc = 0x103468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10346Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103468u;
            // 0x10346c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x103308u: goto label_103308;
            case 0x103350u: goto label_103350;
            case 0x103358u: goto label_103358;
            case 0x1033A4u: goto label_1033a4;
            case 0x1033D4u: goto label_1033d4;
            case 0x1033DCu: goto label_1033dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x103470u;
}
