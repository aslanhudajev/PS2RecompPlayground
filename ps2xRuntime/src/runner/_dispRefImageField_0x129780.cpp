#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _dispRefImageField
// Address: 0x129780 - 0x129938
void _dispRefImageField_0x129780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_dispRefImageField_0x129780");
#endif

    ctx->pc = 0x129780u;

    // 0x129780: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x129780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x129784: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x129784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x129788: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x129788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x12978c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x12978cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x129790: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x129790u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129794: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x129794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x129798: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x129798u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12979c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x12979cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1297a0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1297a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1297a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1297a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1297a8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1297a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1297ac: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1297acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1297b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1297b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1297b4: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x1297b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1297b8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1297B8u;
    {
        const bool branch_taken_0x1297b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1297BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1297B8u;
            // 0x1297bc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1297b8) {
            ctx->pc = 0x1297D0u;
            goto label_1297d0;
        }
    }
    ctx->pc = 0x1297C0u;
    // 0x1297c0: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x1297c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1297c4: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x1297c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1297c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1297C8u;
    {
        const bool branch_taken_0x1297c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1297CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1297C8u;
            // 0x1297cc: 0x24160040  addiu       $s6, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1297c8) {
            ctx->pc = 0x1297D8u;
            goto label_1297d8;
        }
    }
    ctx->pc = 0x1297D0u;
label_1297d0:
    // 0x1297d0: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x1297d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1297d4: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x1297d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1297d8:
    // 0x1297d8: 0x8e270858  lw          $a3, 0x858($s1)
    ctx->pc = 0x1297d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x1297dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1297dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1297e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1297e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1297e4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1297e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1297e8: 0x24e80020  addiu       $t0, $a3, 0x20
    ctx->pc = 0x1297e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1297ec: 0x24e60010  addiu       $a2, $a3, 0x10
    ctx->pc = 0x1297ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1297f0: 0xc04a538  jal         func_1294E0
    ctx->pc = 0x1297F0u;
    SET_GPR_U32(ctx, 31, 0x1297F8u);
    ctx->pc = 0x1297F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1297F0u;
            // 0x1297f4: 0x24e70018  addiu       $a3, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1294E0u;
    if (runtime->hasFunction(0x1294E0u)) {
        auto targetFn = runtime->lookupFunction(0x1294E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1297F8u; }
        if (ctx->pc != 0x1297F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getPtsDtsFlags_0x1294e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1297F8u; }
        if (ctx->pc != 0x1297F8u) { return; }
    }
    ctx->pc = 0x1297F8u;
    // 0x1297f8: 0x8e270858  lw          $a3, 0x858($s1)
    ctx->pc = 0x1297f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x1297fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1297fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129800: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x129800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129804: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x129804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x129808: 0x24e80038  addiu       $t0, $a3, 0x38
    ctx->pc = 0x129808u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 56));
    // 0x12980c: 0x24e60028  addiu       $a2, $a3, 0x28
    ctx->pc = 0x12980cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
    // 0x129810: 0xfe300088  sd          $s0, 0x88($s1)
    ctx->pc = 0x129810u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 136), GPR_U64(ctx, 16));
    // 0x129814: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x129814u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    // 0x129818: 0xc04a538  jal         func_1294E0
    ctx->pc = 0x129818u;
    SET_GPR_U32(ctx, 31, 0x129820u);
    ctx->pc = 0x12981Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129818u;
            // 0x12981c: 0x24e70030  addiu       $a3, $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1294E0u;
    if (runtime->hasFunction(0x1294E0u)) {
        auto targetFn = runtime->lookupFunction(0x1294E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129820u; }
        if (ctx->pc != 0x129820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getPtsDtsFlags_0x1294e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129820u; }
        if (ctx->pc != 0x129820u) { return; }
    }
    ctx->pc = 0x129820u;
    // 0x129820: 0x8e270858  lw          $a3, 0x858($s1)
    ctx->pc = 0x129820u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x129824: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x129824u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129828: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x129828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12982c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12982cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129830: 0x8ce30028  lw          $v1, 0x28($a3)
    ctx->pc = 0x129830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x129834: 0xfe300088  sd          $s0, 0x88($s1)
    ctx->pc = 0x129834u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 136), GPR_U64(ctx, 16));
    // 0x129838: 0xae230080  sw          $v1, 0x80($s1)
    ctx->pc = 0x129838u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
    // 0x12983c: 0xdce20020  ld          $v0, 0x20($a3)
    ctx->pc = 0x12983cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x129840: 0x8e66005c  lw          $a2, 0x5C($s3)
    ctx->pc = 0x129840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x129844: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x129844u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x129848: 0xdce30038  ld          $v1, 0x38($a3)
    ctx->pc = 0x129848u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x12984c: 0xae2600cc  sw          $a2, 0xCC($s1)
    ctx->pc = 0x12984cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 6));
    // 0x129850: 0xfce20020  sd          $v0, 0x20($a3)
    ctx->pc = 0x129850u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 32), GPR_U64(ctx, 2));
    // 0x129854: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x129854u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x129858: 0x8e660060  lw          $a2, 0x60($s3)
    ctx->pc = 0x129858u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x12985c: 0xfce30038  sd          $v1, 0x38($a3)
    ctx->pc = 0x12985cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 56), GPR_U64(ctx, 3));
    // 0x129860: 0xae2600d0  sw          $a2, 0xD0($s1)
    ctx->pc = 0x129860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 6));
    // 0x129864: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x129864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x129868: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x129868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
    // 0x12986c: 0x8e830048  lw          $v1, 0x48($s4)
    ctx->pc = 0x12986cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x129870: 0xae2300b8  sw          $v1, 0xB8($s1)
    ctx->pc = 0x129870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 3));
    // 0x129874: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x129874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x129878: 0xae2200c0  sw          $v0, 0xC0($s1)
    ctx->pc = 0x129878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
    // 0x12987c: 0x8e830054  lw          $v1, 0x54($s4)
    ctx->pc = 0x12987cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x129880: 0xc04a462  jal         func_129188
    ctx->pc = 0x129880u;
    SET_GPR_U32(ctx, 31, 0x129888u);
    ctx->pc = 0x129884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129880u;
            // 0x129884: 0xae2300c4  sw          $v1, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129188u;
    if (runtime->hasFunction(0x129188u)) {
        auto targetFn = runtime->lookupFunction(0x129188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129888u; }
        if (ctx->pc != 0x129888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _isOutSizeOK_0x129188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129888u; }
        if (ctx->pc != 0x129888u) { return; }
    }
    ctx->pc = 0x129888u;
    // 0x129888: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x129888u;
    {
        const bool branch_taken_0x129888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12988Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129888u;
            // 0x12988c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129888) {
            ctx->pc = 0x129910u;
            goto label_129910;
        }
    }
    ctx->pc = 0x129890u;
    // 0x129890: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x129890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x129894: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x129894u;
    {
        const bool branch_taken_0x129894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x129898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129894u;
            // 0x129898: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129894) {
            ctx->pc = 0x129914u;
            goto label_129914;
        }
    }
    ctx->pc = 0x12989Cu;
    // 0x12989c: 0x8ea20028  lw          $v0, 0x28($s5)
    ctx->pc = 0x12989cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x1298a0: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1298A0u;
    {
        const bool branch_taken_0x1298a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1298A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1298A0u;
            // 0x1298a4: 0xdfb60060  ld          $s6, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1298a0) {
            ctx->pc = 0x129918u;
            goto label_129918;
        }
    }
    ctx->pc = 0x1298A8u;
    // 0x1298a8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1298a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1298ac: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1298acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1298b0: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1298b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x1298b4: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x1298b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x1298b8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1298B8u;
    {
        const bool branch_taken_0x1298b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1298BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1298B8u;
            // 0x1298bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1298b8) {
            ctx->pc = 0x1298D0u;
            goto label_1298d0;
        }
    }
    ctx->pc = 0x1298C0u;
    // 0x1298c0: 0xc04a80e  jal         func_12A038
    ctx->pc = 0x1298C0u;
    SET_GPR_U32(ctx, 31, 0x1298C8u);
    ctx->pc = 0x1298C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1298C0u;
            // 0x1298c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A038u;
    if (runtime->hasFunction(0x12A038u)) {
        auto targetFn = runtime->lookupFunction(0x12A038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1298C8u; }
        if (ctx->pc != 0x1298C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _csc_storeRefImage_0x12a038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1298C8u; }
        if (ctx->pc != 0x1298C8u) { return; }
    }
    ctx->pc = 0x1298C8u;
    // 0x1298c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1298C8u;
    {
        const bool branch_taken_0x1298c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1298CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1298C8u;
            // 0x1298cc: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1298c8) {
            ctx->pc = 0x1298DCu;
            goto label_1298dc;
        }
    }
    ctx->pc = 0x1298D0u;
label_1298d0:
    // 0x1298d0: 0xc04a48a  jal         func_129228
    ctx->pc = 0x1298D0u;
    SET_GPR_U32(ctx, 31, 0x1298D8u);
    ctx->pc = 0x1298D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1298D0u;
            // 0x1298d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129228u;
    if (runtime->hasFunction(0x129228u)) {
        auto targetFn = runtime->lookupFunction(0x129228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1298D8u; }
        if (ctx->pc != 0x1298D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _cpr8_0x129228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1298D8u; }
        if (ctx->pc != 0x1298D8u) { return; }
    }
    ctx->pc = 0x1298D8u;
    // 0x1298d8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1298d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1298dc:
    // 0x1298dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1298dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1298e0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1298e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1298e4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1298e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1298e8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1298e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1298ec: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1298ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x1298f0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1298f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1298f4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1298f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1298f8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1298f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1298fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1298fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129900: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x129900u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129904: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x129904u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129908: 0x804a52e  j           func_1294B8
    ctx->pc = 0x129908u;
    ctx->pc = 0x12990Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129908u;
            // 0x12990c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1294B8u;
    if (runtime->hasFunction(0x1294B8u)) {
        auto targetFn = runtime->lookupFunction(0x1294B8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _markOutput_0x1294b8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x129910u;
label_129910:
    // 0x129910: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x129910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_129914:
    // 0x129914: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x129914u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_129918:
    // 0x129918: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x129918u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12991c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x12991cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x129920: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x129920u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x129924: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x129924u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129928: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x129928u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12992c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12992cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129930: 0x3e00008  jr          $ra
    ctx->pc = 0x129930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129930u;
            // 0x129934: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1297D0u: goto label_1297d0;
            case 0x1297D8u: goto label_1297d8;
            case 0x1298D0u: goto label_1298d0;
            case 0x1298DCu: goto label_1298dc;
            case 0x129910u: goto label_129910;
            case 0x129914u: goto label_129914;
            case 0x129918u: goto label_129918;
            default: break;
        }
        return;
    }
    ctx->pc = 0x129938u;
}
