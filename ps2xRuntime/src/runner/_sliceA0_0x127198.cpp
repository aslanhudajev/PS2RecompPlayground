#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _sliceA0
// Address: 0x127198 - 0x1272c4
void _sliceA0_0x127198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_sliceA0_0x127198");
#endif

    ctx->pc = 0x127198u;

    // 0x127198: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x127198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x12719c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12719cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1271a0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1271a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1271a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1271a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1271a8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1271a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1271ac: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1271acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1271b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1271b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1271b4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1271b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1271b8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1271b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1271bc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1271bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1271c0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1271c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1271c4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1271c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1271c8: 0xc04a0fa  jal         func_1283E8
    ctx->pc = 0x1271C8u;
    SET_GPR_U32(ctx, 31, 0x1271D0u);
    ctx->pc = 0x1271CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1271C8u;
            // 0x1271cc: 0xae00011c  sw          $zero, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283E8u;
    if (runtime->hasFunction(0x1283E8u)) {
        auto targetFn = runtime->lookupFunction(0x1283E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1271D0u; }
        if (ctx->pc != 0x1271D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextStartCode_0x1283e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1271D0u; }
        if (ctx->pc != 0x1271D0u) { return; }
    }
    ctx->pc = 0x1271D0u;
    // 0x1271d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1271d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1271d4: 0xc04a028  jal         func_1280A0
    ctx->pc = 0x1271D4u;
    SET_GPR_U32(ctx, 31, 0x1271DCu);
    ctx->pc = 0x1271D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1271D4u;
            // 0x1271d8: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1280A0u;
    if (runtime->hasFunction(0x1280A0u)) {
        auto targetFn = runtime->lookupFunction(0x1280A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1271DCu; }
        if (ctx->pc != 0x1271DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _peepBit_0x1280a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1271DCu; }
        if (ctx->pc != 0x1271DCu) { return; }
    }
    ctx->pc = 0x1271DCu;
    // 0x1271dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1271dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1271e0: 0x2642feff  addiu       $v0, $s2, -0x101
    ctx->pc = 0x1271e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967039));
    // 0x1271e4: 0x2c4200af  sltiu       $v0, $v0, 0xAF
    ctx->pc = 0x1271e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)175) ? 1 : 0);
    // 0x1271e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1271E8u;
    {
        const bool branch_taken_0x1271e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1271ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1271E8u;
            // 0x1271ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1271e8) {
            ctx->pc = 0x127208u;
            goto label_127208;
        }
    }
    ctx->pc = 0x1271F0u;
    // 0x1271f0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1271f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1271f4: 0x24a5f220  addiu       $a1, $a1, -0xDE0
    ctx->pc = 0x1271f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963744));
    // 0x1271f8: 0xc04b010  jal         func_12C040
    ctx->pc = 0x1271F8u;
    SET_GPR_U32(ctx, 31, 0x127200u);
    ctx->pc = 0x1271FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1271F8u;
            // 0x1271fc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C040u;
    if (runtime->hasFunction(0x12C040u)) {
        auto targetFn = runtime->lookupFunction(0x12C040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127200u; }
        if (ctx->pc != 0x127200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x12c040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127200u; }
        if (ctx->pc != 0x127200u) { return; }
    }
    ctx->pc = 0x127200u;
    // 0x127200: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x127200u;
    {
        const bool branch_taken_0x127200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127200u;
            // 0x127204: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127200) {
            ctx->pc = 0x1272A0u;
            goto label_1272a0;
        }
    }
    ctx->pc = 0x127208u;
label_127208:
    // 0x127208: 0xc04a06a  jal         func_1281A8
    ctx->pc = 0x127208u;
    SET_GPR_U32(ctx, 31, 0x127210u);
    ctx->pc = 0x12720Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127208u;
            // 0x12720c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1281A8u;
    if (runtime->hasFunction(0x1281A8u)) {
        auto targetFn = runtime->lookupFunction(0x1281A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127210u; }
        if (ctx->pc != 0x127210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x1281a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127210u; }
        if (ctx->pc != 0x127210u) { return; }
    }
    ctx->pc = 0x127210u;
    // 0x127210: 0xc04a11a  jal         func_128468
    ctx->pc = 0x127210u;
    SET_GPR_U32(ctx, 31, 0x127218u);
    ctx->pc = 0x127214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127210u;
            // 0x127214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128468u;
    if (runtime->hasFunction(0x128468u)) {
        auto targetFn = runtime->lookupFunction(0x128468u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127218u; }
        if (ctx->pc != 0x127218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sliceB_0x128468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127218u; }
        if (ctx->pc != 0x127218u) { return; }
    }
    ctx->pc = 0x127218u;
    // 0x127218: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x127218u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12721c: 0xc049bda  jal         func_126F68
    ctx->pc = 0x12721Cu;
    SET_GPR_U32(ctx, 31, 0x127224u);
    ctx->pc = 0x127220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12721Cu;
            // 0x127220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126F68u;
    if (runtime->hasFunction(0x126F68u)) {
        auto targetFn = runtime->lookupFunction(0x126F68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127224u; }
        if (ctx->pc != 0x127224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _mbAddressIncrement_0x126f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127224u; }
        if (ctx->pc != 0x127224u) { return; }
    }
    ctx->pc = 0x127224u;
    // 0x127224: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x127224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127228: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x127228u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x12722c: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x12722cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x127230: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x127230u;
    {
        const bool branch_taken_0x127230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127230u;
            // 0x127234: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127230) {
            ctx->pc = 0x12724Cu;
            goto label_12724c;
        }
    }
    ctx->pc = 0x127238u;
    // 0x127238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x127238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12723c: 0xc04b01e  jal         func_12C078
    ctx->pc = 0x12723Cu;
    SET_GPR_U32(ctx, 31, 0x127244u);
    ctx->pc = 0x127240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12723Cu;
            // 0x127240: 0x24a5f248  addiu       $a1, $a1, -0xDB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C078u;
    if (runtime->hasFunction(0x12C078u)) {
        auto targetFn = runtime->lookupFunction(0x12C078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127244u; }
        if (ctx->pc != 0x127244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x12c078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127244u; }
        if (ctx->pc != 0x127244u) { return; }
    }
    ctx->pc = 0x127244u;
    // 0x127244: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x127244u;
    {
        const bool branch_taken_0x127244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127244u;
            // 0x127248: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127244) {
            ctx->pc = 0x1272A0u;
            goto label_1272a0;
        }
    }
    ctx->pc = 0x12724Cu;
label_12724c:
    // 0x12724c: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x12724cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 18), _mm_cvtsi32_si128((int)255u)));
    // 0x127250: 0x1319c0  sll         $v1, $s3, 7
    ctx->pc = 0x127250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 7));
    // 0x127254: 0x8e04012c  lw          $a0, 0x12C($s0)
    ctx->pc = 0x127254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x127258: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x127258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12725c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12725cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x127260: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x127260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127264: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x127264u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x127268: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x127268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x12726c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12726cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x127270: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x127270u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127274: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x127274u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x127278: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x127278u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x12727c: 0xae0501b0  sw          $a1, 0x1B0($s0)
    ctx->pc = 0x12727cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 5));
    // 0x127280: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x127280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x127284: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x127284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x127288: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x127288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x12728c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x12728cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x127290: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x127290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x127294: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x127294u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x127298: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x127298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x12729c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x12729cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1272a0:
    // 0x1272a0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1272a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1272a4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1272a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1272a8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1272a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1272ac: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1272acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1272b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1272b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1272b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1272b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1272b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1272b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1272bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1272BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1272C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1272BCu;
            // 0x1272c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x127208u: goto label_127208;
            case 0x12724Cu: goto label_12724c;
            case 0x1272A0u: goto label_1272a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1272C4u;
}
