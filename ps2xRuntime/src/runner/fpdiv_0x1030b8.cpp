#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: fpdiv
// Address: 0x1030b8 - 0x103218
void fpdiv_0x1030b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("fpdiv_0x1030b8");
#endif

    ctx->pc = 0x1030b8u;

    // 0x1030b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1030b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1030bc: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1030bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1030c0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1030c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1030c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1030c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1030c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1030c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1030cc: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x1030ccu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1030d0: 0xc040ace  jal         func_102B38
    ctx->pc = 0x1030D0u;
    SET_GPR_U32(ctx, 31, 0x1030D8u);
    ctx->pc = 0x1030D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1030D0u;
            // 0x1030d4: 0xe7ad0024  swc1        $f13, 0x24($sp) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x102B38u;
    if (runtime->hasFunction(0x102B38u)) {
        auto targetFn = runtime->lookupFunction(0x102B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1030D8u; }
        if (ctx->pc != 0x1030D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x102b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1030D8u; }
        if (ctx->pc != 0x1030D8u) { return; }
    }
    ctx->pc = 0x1030D8u;
    // 0x1030d8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1030d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1030dc: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x1030dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1030e0: 0xc040ace  jal         func_102B38
    ctx->pc = 0x1030E0u;
    SET_GPR_U32(ctx, 31, 0x1030E8u);
    ctx->pc = 0x1030E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1030E0u;
            // 0x1030e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102B38u;
    if (runtime->hasFunction(0x102B38u)) {
        auto targetFn = runtime->lookupFunction(0x102B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1030E8u; }
        if (ctx->pc != 0x1030E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x102b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1030E8u; }
        if (ctx->pc != 0x1030E8u) { return; }
    }
    ctx->pc = 0x1030E8u;
    // 0x1030e8: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x1030e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1030ec: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x1030ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1030f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1030F0u;
    {
        const bool branch_taken_0x1030f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1030F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1030F0u;
            // 0x1030f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1030f0) {
            ctx->pc = 0x103100u;
            goto label_103100;
        }
    }
    ctx->pc = 0x1030F8u;
    // 0x1030f8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1030F8u;
    {
        const bool branch_taken_0x1030f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1030FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1030F8u;
            // 0x1030fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1030f8) {
            ctx->pc = 0x103200u;
            goto label_103200;
        }
    }
    ctx->pc = 0x103100u;
label_103100:
    // 0x103100: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x103100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103104: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x103104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x103108: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x103108u;
    {
        const bool branch_taken_0x103108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10310Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103108u;
            // 0x10310c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103108) {
            ctx->pc = 0x103200u;
            goto label_103200;
        }
    }
    ctx->pc = 0x103110u;
    // 0x103110: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x103110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x103114: 0x38e40004  xori        $a0, $a3, 0x4
    ctx->pc = 0x103114u;
    SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)4u)));
    // 0x103118: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x103118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x10311c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x10311cu;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x103120: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x103120u;
    {
        const bool branch_taken_0x103120 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x103124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103120u;
            // 0x103124: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103120) {
            ctx->pc = 0x103134u;
            goto label_103134;
        }
    }
    ctx->pc = 0x103128u;
    // 0x103128: 0x38e20002  xori        $v0, $a3, 0x2
    ctx->pc = 0x103128u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)2u)));
    // 0x10312c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10312Cu;
    {
        const bool branch_taken_0x10312c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10312Cu;
            // 0x103130: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)4u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10312c) {
            ctx->pc = 0x103148u;
            goto label_103148;
        }
    }
    ctx->pc = 0x103134u;
label_103134:
    // 0x103134: 0x14e60032  bne         $a3, $a2, . + 4 + (0x32 << 2)
    ctx->pc = 0x103134u;
    {
        const bool branch_taken_0x103134 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x103138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103134u;
            // 0x103138: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103134) {
            ctx->pc = 0x103200u;
            goto label_103200;
        }
    }
    ctx->pc = 0x10313Cu;
    // 0x10313c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x10313cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x103140: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x103140u;
    {
        const bool branch_taken_0x103140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103140u;
            // 0x103144: 0x24443718  addiu       $a0, $v0, 0x3718 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 14104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103140) {
            ctx->pc = 0x103200u;
            goto label_103200;
        }
    }
    ctx->pc = 0x103148u;
label_103148:
    // 0x103148: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x103148u;
    {
        const bool branch_taken_0x103148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10314Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103148u;
            // 0x10314c: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)2u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103148) {
            ctx->pc = 0x103160u;
            goto label_103160;
        }
    }
    ctx->pc = 0x103150u;
    // 0x103150: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x103150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x103154: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x103154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103158: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x103158u;
    {
        const bool branch_taken_0x103158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10315Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103158u;
            // 0x10315c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103158) {
            ctx->pc = 0x103200u;
            goto label_103200;
        }
    }
    ctx->pc = 0x103160u;
label_103160:
    // 0x103160: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x103160u;
    {
        const bool branch_taken_0x103160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103160u;
            // 0x103164: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103160) {
            ctx->pc = 0x103178u;
            goto label_103178;
        }
    }
    ctx->pc = 0x103168u;
    // 0x103168: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x103168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10316c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10316cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103170: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x103170u;
    {
        const bool branch_taken_0x103170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103170u;
            // 0x103174: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103170) {
            ctx->pc = 0x103200u;
            goto label_103200;
        }
    }
    ctx->pc = 0x103178u;
label_103178:
    // 0x103178: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x103178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10317c: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x10317cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x103180: 0x8fa8001c  lw          $t0, 0x1C($sp)
    ctx->pc = 0x103180u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x103184: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x103184u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x103188: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x103188u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x10318c: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x10318Cu;
    {
        const bool branch_taken_0x10318c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x103190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10318Cu;
            // 0x103190: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10318c) {
            ctx->pc = 0x1031A4u;
            goto label_1031a4;
        }
    }
    ctx->pc = 0x103194u;
    // 0x103194: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x103194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x103198: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x103198u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x10319c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x10319cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1031a0: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x1031a0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_1031a4:
    // 0x1031a4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1031a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1031a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1031A8u;
    {
        const bool branch_taken_0x1031a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1031ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1031A8u;
            // 0x1031ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1031a8) {
            ctx->pc = 0x1031B4u;
            goto label_1031b4;
        }
    }
    ctx->pc = 0x1031B0u;
label_1031b0:
    // 0x1031b0: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x1031b0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_1031b4:
    // 0x1031b4: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1031B4u;
    {
        const bool branch_taken_0x1031b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1031b4) {
            ctx->pc = 0x1031B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1031B4u;
            // 0x1031b8: 0x21042  srl         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1031C8u;
            goto label_1031c8;
        }
    }
    ctx->pc = 0x1031BCu;
    // 0x1031bc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1031bcu;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x1031c0: 0x882023  subu        $a0, $a0, $t0
    ctx->pc = 0x1031c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1031c4: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x1031c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1031c8:
    // 0x1031c8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1031C8u;
    {
        const bool branch_taken_0x1031c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1031CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1031C8u;
            // 0x1031cc: 0x42040  sll         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1031c8) {
            ctx->pc = 0x1031B0u;
            goto label_1031b0;
        }
    }
    ctx->pc = 0x1031D0u;
    // 0x1031d0: 0x30e3007f  andi        $v1, $a3, 0x7F
    ctx->pc = 0x1031d0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)127u)));
    // 0x1031d4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1031d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1031d8: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1031D8u;
    {
        const bool branch_taken_0x1031d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1031d8) {
            ctx->pc = 0x1031DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1031D8u;
            // 0x1031dc: 0xaca7000c  sw          $a3, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1031FCu;
            goto label_1031fc;
        }
    }
    ctx->pc = 0x1031E0u;
    // 0x1031e0: 0x30e20080  andi        $v0, $a3, 0x80
    ctx->pc = 0x1031e0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)128u)));
    // 0x1031e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1031E4u;
    {
        const bool branch_taken_0x1031e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1031E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1031E4u;
            // 0x1031e8: 0x24e20040  addiu       $v0, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1031e4) {
            ctx->pc = 0x1031F4u;
            goto label_1031f4;
        }
    }
    ctx->pc = 0x1031ECu;
    // 0x1031ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1031ECu;
    {
        const bool branch_taken_0x1031ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1031F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1031ECu;
            // 0x1031f0: 0x24e70040  addiu       $a3, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1031ec) {
            ctx->pc = 0x1031F8u;
            goto label_1031f8;
        }
    }
    ctx->pc = 0x1031F4u;
label_1031f4:
    // 0x1031f4: 0x44380b  movn        $a3, $v0, $a0
    ctx->pc = 0x1031f4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_1031f8:
    // 0x1031f8: 0xaca7000c  sw          $a3, 0xC($a1)
    ctx->pc = 0x1031f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
label_1031fc:
    // 0x1031fc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1031fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_103200:
    // 0x103200: 0xc040a8a  jal         func_102A28
    ctx->pc = 0x103200u;
    SET_GPR_U32(ctx, 31, 0x103208u);
    ctx->pc = 0x102A28u;
    if (runtime->hasFunction(0x102A28u)) {
        auto targetFn = runtime->lookupFunction(0x102A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103208u; }
        if (ctx->pc != 0x103208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_f_0x102a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103208u; }
        if (ctx->pc != 0x103208u) { return; }
    }
    ctx->pc = 0x103208u;
    // 0x103208: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x103208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10320c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x10320cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x103210: 0x3e00008  jr          $ra
    ctx->pc = 0x103210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103210u;
            // 0x103214: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x103100u: goto label_103100;
            case 0x103134u: goto label_103134;
            case 0x103148u: goto label_103148;
            case 0x103160u: goto label_103160;
            case 0x103178u: goto label_103178;
            case 0x1031A4u: goto label_1031a4;
            case 0x1031B0u: goto label_1031b0;
            case 0x1031B4u: goto label_1031b4;
            case 0x1031C8u: goto label_1031c8;
            case 0x1031F4u: goto label_1031f4;
            case 0x1031F8u: goto label_1031f8;
            case 0x1031FCu: goto label_1031fc;
            case 0x103200u: goto label_103200;
            default: break;
        }
        return;
    }
    ctx->pc = 0x103218u;
}
