#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _lshift
// Address: 0x130610 - 0x130788
void _lshift_0x130610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_lshift_0x130610");
#endif

    ctx->pc = 0x130610u;

    // 0x130610: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x130610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x130614: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x130614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x130618: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x130618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x13061c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x13061cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130620: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x130620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x130624: 0x6a143  sra         $s4, $a2, 5
    ctx->pc = 0x130624u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 6), 5));
    // 0x130628: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13062c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13062cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130630: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x130630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x130634: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x130634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x130638: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x130638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x13063c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x13063cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x130640: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x130640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x130644: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x130644u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x130648: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x130648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x13064c: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x13064cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x130650: 0xf0102a  slt         $v0, $a3, $s0
    ctx->pc = 0x130650u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x130654: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x130654u;
    {
        const bool branch_taken_0x130654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130654u;
            // 0x130658: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130654) {
            ctx->pc = 0x13068Cu;
            goto label_13068c;
        }
    }
    ctx->pc = 0x13065Cu;
    // 0x13065c: 0x30d3001f  andi        $s3, $a2, 0x1F
    ctx->pc = 0x13065cu;
    SET_GPR_VEC(ctx, 19, PS2_PAND(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)31u)));
    // 0x130660: 0x26320014  addiu       $s2, $s1, 0x14
    ctx->pc = 0x130660u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x130664: 0x0  nop
    ctx->pc = 0x130664u;
    // NOP
label_130668:
    // 0x130668: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x130668u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x13066c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x13066cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x130670: 0xf0102a  slt         $v0, $a3, $s0
    ctx->pc = 0x130670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x130674: 0x0  nop
    ctx->pc = 0x130674u;
    // NOP
    // 0x130678: 0x0  nop
    ctx->pc = 0x130678u;
    // NOP
    // 0x13067c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13067Cu;
    {
        const bool branch_taken_0x13067c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13067c) {
            ctx->pc = 0x130668u;
            goto label_130668;
        }
    }
    ctx->pc = 0x130684u;
    // 0x130684: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x130684u;
    {
        const bool branch_taken_0x130684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130684) {
            ctx->pc = 0x130694u;
            goto label_130694;
        }
    }
    ctx->pc = 0x13068Cu;
label_13068c:
    // 0x13068c: 0x30d3001f  andi        $s3, $a2, 0x1F
    ctx->pc = 0x13068cu;
    SET_GPR_VEC(ctx, 19, PS2_PAND(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)31u)));
    // 0x130690: 0x26320014  addiu       $s2, $s1, 0x14
    ctx->pc = 0x130690u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_130694:
    // 0x130694: 0xc04bf8a  jal         func_12FE28
    ctx->pc = 0x130694u;
    SET_GPR_U32(ctx, 31, 0x13069Cu);
    ctx->pc = 0x130698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130694u;
            // 0x130698: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FE28u;
    if (runtime->hasFunction(0x12FE28u)) {
        auto targetFn = runtime->lookupFunction(0x12FE28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13069Cu; }
        if (ctx->pc != 0x13069Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x12fe28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13069Cu; }
        if (ctx->pc != 0x13069Cu) { return; }
    }
    ctx->pc = 0x13069Cu;
    // 0x13069c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x13069cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1306a0: 0x1a80000a  blez        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x1306A0u;
    {
        const bool branch_taken_0x1306a0 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1306A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1306A0u;
            // 0x1306a4: 0x26a60014  addiu       $a2, $s5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1306a0) {
            ctx->pc = 0x1306CCu;
            goto label_1306cc;
        }
    }
    ctx->pc = 0x1306A8u;
    // 0x1306a8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1306a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1306ac: 0x0  nop
    ctx->pc = 0x1306acu;
    // NOP
label_1306b0:
    // 0x1306b0: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1306b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1306b4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1306b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1306b8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1306b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1306bc: 0x0  nop
    ctx->pc = 0x1306bcu;
    // NOP
    // 0x1306c0: 0x0  nop
    ctx->pc = 0x1306c0u;
    // NOP
    // 0x1306c4: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1306C4u;
    {
        const bool branch_taken_0x1306c4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1306c4) {
            ctx->pc = 0x1306B0u;
            goto label_1306b0;
        }
    }
    ctx->pc = 0x1306CCu;
label_1306cc:
    // 0x1306cc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1306ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1306d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1306d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1306d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1306d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1306d8: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x1306D8u;
    {
        const bool branch_taken_0x1306d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1306DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1306D8u;
            // 0x1306dc: 0x823821  addu        $a3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1306d8) {
            ctx->pc = 0x130728u;
            goto label_130728;
        }
    }
    ctx->pc = 0x1306E0u;
    // 0x1306e0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1306e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1306e4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1306e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1306e8: 0x532823  subu        $a1, $v0, $s3
    ctx->pc = 0x1306e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1306ec: 0x26080001  addiu       $t0, $s0, 0x1
    ctx->pc = 0x1306ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1306f0:
    // 0x1306f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1306f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1306f4: 0x2621004  sllv        $v0, $v0, $s3
    ctx->pc = 0x1306f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
    // 0x1306f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1306f8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1306fc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1306fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x130700: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x130700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x130704: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x130704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x130708: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x130708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x13070c: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x13070cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x130710: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x130710u;
    {
        const bool branch_taken_0x130710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130710u;
            // 0x130714: 0xa31806  srlv        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130710) {
            ctx->pc = 0x1306F0u;
            goto label_1306f0;
        }
    }
    ctx->pc = 0x130718u;
    // 0x130718: 0x103800b  movn        $s0, $t0, $v1
    ctx->pc = 0x130718u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 8));
    // 0x13071c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x13071cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x130720: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x130720u;
    {
        const bool branch_taken_0x130720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130720u;
            // 0x130724: 0x2605ffff  addiu       $a1, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130720) {
            ctx->pc = 0x13074Cu;
            goto label_13074c;
        }
    }
    ctx->pc = 0x130728u;
label_130728:
    // 0x130728: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x130728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x13072c: 0x0  nop
    ctx->pc = 0x13072cu;
    // NOP
label_130730:
    // 0x130730: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x130730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x130734: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x130734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x130738: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x130738u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x13073c: 0x87182b  sltu        $v1, $a0, $a3
    ctx->pc = 0x13073cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x130740: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x130740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x130744: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x130744u;
    {
        const bool branch_taken_0x130744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x130744) {
            ctx->pc = 0x130730u;
            goto label_130730;
        }
    }
    ctx->pc = 0x13074Cu;
label_13074c:
    // 0x13074c: 0xaea50010  sw          $a1, 0x10($s5)
    ctx->pc = 0x13074cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 5));
    // 0x130750: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x130750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130754: 0xc04bfb4  jal         func_12FED0
    ctx->pc = 0x130754u;
    SET_GPR_U32(ctx, 31, 0x13075Cu);
    ctx->pc = 0x130758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130754u;
            // 0x130758: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FED0u;
    if (runtime->hasFunction(0x12FED0u)) {
        auto targetFn = runtime->lookupFunction(0x12FED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13075Cu; }
        if (ctx->pc != 0x13075Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x12fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13075Cu; }
        if (ctx->pc != 0x13075Cu) { return; }
    }
    ctx->pc = 0x13075Cu;
    // 0x13075c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x13075cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130760: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x130760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x130764: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x130764u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130768: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x130768u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13076c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x13076cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x130770: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x130770u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x130774: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x130774u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130778: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x130778u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13077c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13077cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130780: 0x3e00008  jr          $ra
    ctx->pc = 0x130780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130780u;
            // 0x130784: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130668u: goto label_130668;
            case 0x13068Cu: goto label_13068c;
            case 0x130694u: goto label_130694;
            case 0x1306B0u: goto label_1306b0;
            case 0x1306CCu: goto label_1306cc;
            case 0x1306F0u: goto label_1306f0;
            case 0x130728u: goto label_130728;
            case 0x130730u: goto label_130730;
            case 0x13074Cu: goto label_13074c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130788u;
}
