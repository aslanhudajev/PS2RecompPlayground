#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: parse_sub
// Address: 0x10c390 - 0x10c540
void parse_sub_0x10c390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("parse_sub_0x10c390");
#endif

    ctx->pc = 0x10c390u;

label_10c390:
    // 0x10c390: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10c390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10c394: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10c394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10c398: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10c398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10c39c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10c39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10c3a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10c3a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c3a4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10c3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10c3a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c3ac: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x10c3acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x10c3b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10c3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10c3b4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10c3b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10c3b8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x10c3b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x10c3bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10c3bcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x10c3c0: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x10C3C0u;
    {
        const bool branch_taken_0x10c3c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C3C0u;
            // 0x10c3c4: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c3c0) {
            ctx->pc = 0x10C520u;
            goto label_10c520;
        }
    }
    ctx->pc = 0x10C3C8u;
    // 0x10c3c8: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x10c3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x10c3cc: 0xc0430ac  jal         func_10C2B0
    ctx->pc = 0x10C3CCu;
    SET_GPR_U32(ctx, 31, 0x10C3D4u);
    ctx->pc = 0x10C3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C3CCu;
            // 0x10c3d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C2B0u;
    if (runtime->hasFunction(0x10C2B0u)) {
        auto targetFn = runtime->lookupFunction(0x10C2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C3D4u; }
        if (ctx->pc != 0x10C3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set_api_0x10c2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C3D4u; }
        if (ctx->pc != 0x10C3D4u) { return; }
    }
    ctx->pc = 0x10C3D4u;
    // 0x10c3d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10c3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c3d8: 0xc043098  jal         func_10C260
    ctx->pc = 0x10C3D8u;
    SET_GPR_U32(ctx, 31, 0x10C3E0u);
    ctx->pc = 0x10C3DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C3D8u;
            // 0x10c3dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C260u;
    if (runtime->hasFunction(0x10C260u)) {
        auto targetFn = runtime->lookupFunction(0x10C260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C3E0u; }
        if (ctx->pc != 0x10C3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set_status_0x10c260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C3E0u; }
        if (ctx->pc != 0x10C3E0u) { return; }
    }
    ctx->pc = 0x10C3E0u;
    // 0x10c3e0: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x10c3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x10c3e4: 0x82230010  lb          $v1, 0x10($s1)
    ctx->pc = 0x10c3e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x10c3e8: 0x24a2fffe  addiu       $v0, $a1, -0x2
    ctx->pc = 0x10c3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x10c3ec: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x10c3ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x10c3f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C3F0u;
    {
        const bool branch_taken_0x10c3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C3F0u;
            // 0x10c3f4: 0x92240010  lbu         $a0, 0x10($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c3f0) {
            ctx->pc = 0x10C400u;
            goto label_10c400;
        }
    }
    ctx->pc = 0x10C3F8u;
    // 0x10c3f8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C3F8u;
    {
        const bool branch_taken_0x10c3f8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x10C3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C3F8u;
            // 0x10c3fc: 0x26300020  addiu       $s0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c3f8) {
            ctx->pc = 0x10C40Cu;
            goto label_10c40c;
        }
    }
    ctx->pc = 0x10C400u;
label_10c400:
    // 0x10c400: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x10c400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x10c404: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x10C404u;
    {
        const bool branch_taken_0x10c404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C404u;
            // 0x10c408: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c404) {
            ctx->pc = 0x10C4ACu;
            goto label_10c4ac;
        }
    }
    ctx->pc = 0x10C40Cu;
label_10c40c:
    // 0x10c40c: 0x1860001b  blez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x10C40Cu;
    {
        const bool branch_taken_0x10c40c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x10C410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C40Cu;
            // 0x10c410: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c40c) {
            ctx->pc = 0x10C47Cu;
            goto label_10c47c;
        }
    }
    ctx->pc = 0x10C414u;
    // 0x10c414: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x10c414u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_10c418:
    // 0x10c418: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10c418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10c41c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10c41cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10c420: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x10c420u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x10c424: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10c424u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x10c428: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x10C428u;
    {
        const bool branch_taken_0x10c428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C428u;
            // 0x10c42c: 0x41600  sll         $v0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c428) {
            ctx->pc = 0x10C464u;
            goto label_10c464;
        }
    }
    ctx->pc = 0x10C430u;
    // 0x10c430: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x10c430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10c434: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10c434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c438: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10c438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c43c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x10c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x10c440: 0xc043098  jal         func_10C260
    ctx->pc = 0x10C440u;
    SET_GPR_U32(ctx, 31, 0x10C448u);
    ctx->pc = 0x10C444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C440u;
            // 0x10c444: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C260u;
    if (runtime->hasFunction(0x10C260u)) {
        auto targetFn = runtime->lookupFunction(0x10C260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C448u; }
        if (ctx->pc != 0x10C448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set_status_0x10c260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C448u; }
        if (ctx->pc != 0x10C448u) { return; }
    }
    ctx->pc = 0x10C448u;
    // 0x10c448: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x10c448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10c44c: 0xc0430e4  jal         func_10C390
    ctx->pc = 0x10C44Cu;
    SET_GPR_U32(ctx, 31, 0x10C454u);
    ctx->pc = 0x10C450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C44Cu;
            // 0x10c450: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C390u;
    goto label_10c390;
    ctx->pc = 0x10C454u;
label_10c454:
    // 0x10c454: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x10C454u;
    {
        const bool branch_taken_0x10c454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C454u;
            // 0x10c458: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c454) {
            ctx->pc = 0x10C524u;
            goto label_10c524;
        }
    }
    ctx->pc = 0x10C45Cu;
    // 0x10c45c: 0x92240010  lbu         $a0, 0x10($s1)
    ctx->pc = 0x10c45cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x10c460: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x10c460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_10c464:
    // 0x10c464: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10c464u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x10c468: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x10c468u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x10c46c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x10c46cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10c470: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x10C470u;
    {
        const bool branch_taken_0x10c470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c470) {
            ctx->pc = 0x10C474u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10C470u;
            // 0x10c474: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10C418u;
            goto label_10c418;
        }
    }
    ctx->pc = 0x10C478u;
    // 0x10c478: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x10c478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_10c47c:
    // 0x10c47c: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x10c47cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x10c480: 0x82230011  lb          $v1, 0x11($s1)
    ctx->pc = 0x10c480u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x10c484: 0x23603  sra         $a2, $v0, 24
    ctx->pc = 0x10c484u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 24));
    // 0x10c488: 0x24c20002  addiu       $v0, $a2, 0x2
    ctx->pc = 0x10c488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x10c48c: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x10c48cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x10c490: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x10c490u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x10c494: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C494u;
    {
        const bool branch_taken_0x10c494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C494u;
            // 0x10c498: 0x92240011  lbu         $a0, 0x11($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c494) {
            ctx->pc = 0x10C4A4u;
            goto label_10c4a4;
        }
    }
    ctx->pc = 0x10C49Cu;
    // 0x10c49c: 0x4610007  bgez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10C49Cu;
    {
        const bool branch_taken_0x10c49c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x10C4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C49Cu;
            // 0x10c4a0: 0x61100  sll         $v0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c49c) {
            ctx->pc = 0x10C4BCu;
            goto label_10c4bc;
        }
    }
    ctx->pc = 0x10C4A4u;
label_10c4a4:
    // 0x10c4a4: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x10c4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x10c4a8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x10c4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10c4ac:
    // 0x10c4ac: 0xc04308c  jal         func_10C230
    ctx->pc = 0x10C4ACu;
    SET_GPR_U32(ctx, 31, 0x10C4B4u);
    ctx->pc = 0x10C4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C4ACu;
            // 0x10c4b0: 0xac51f82c  sw          $s1, -0x7D4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294965292), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C230u;
    if (runtime->hasFunction(0x10C230u)) {
        auto targetFn = runtime->lookupFunction(0x10C230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C4B4u; }
        if (ctx->pc != 0x10C4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hig_sys_err_0x10c230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C4B4u; }
        if (ctx->pc != 0x10C4B4u) { return; }
    }
    ctx->pc = 0x10C4B4u;
    // 0x10c4b4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x10C4B4u;
    {
        const bool branch_taken_0x10c4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C4B4u;
            // 0x10c4b8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c4b4) {
            ctx->pc = 0x10C528u;
            goto label_10c528;
        }
    }
    ctx->pc = 0x10C4BCu;
label_10c4bc:
    // 0x10c4bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10c4bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c4c0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x10c4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x10c4c4: 0x18600016  blez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x10C4C4u;
    {
        const bool branch_taken_0x10c4c4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x10C4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C4C4u;
            // 0x10c4c8: 0x2228021  addu        $s0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c4c4) {
            ctx->pc = 0x10C520u;
            goto label_10c520;
        }
    }
    ctx->pc = 0x10C4CCu;
    // 0x10c4cc: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x10c4ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_10c4d0:
    // 0x10c4d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10c4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10c4d4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10c4d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10c4d8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x10c4d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x10c4dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10c4dcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x10c4e0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10C4E0u;
    {
        const bool branch_taken_0x10c4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C4E0u;
            // 0x10c4e4: 0x41600  sll         $v0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c4e0) {
            ctx->pc = 0x10C50Cu;
            goto label_10c50c;
        }
    }
    ctx->pc = 0x10C4E8u;
    // 0x10c4e8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x10c4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10c4ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10c4ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c4f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10c4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c4f4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x10c4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x10c4f8: 0xc043098  jal         func_10C260
    ctx->pc = 0x10C4F8u;
    SET_GPR_U32(ctx, 31, 0x10C500u);
    ctx->pc = 0x10C4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C4F8u;
            // 0x10c4fc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C260u;
    if (runtime->hasFunction(0x10C260u)) {
        auto targetFn = runtime->lookupFunction(0x10C260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C500u; }
        if (ctx->pc != 0x10C500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set_status_0x10c260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C500u; }
        if (ctx->pc != 0x10C500u) { return; }
    }
    ctx->pc = 0x10C500u;
    // 0x10c500: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x10c500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x10c504: 0x92240011  lbu         $a0, 0x11($s1)
    ctx->pc = 0x10c504u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x10c508: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x10c508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_10c50c:
    // 0x10c50c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10c50cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x10c510: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x10c510u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x10c514: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x10c514u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10c518: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x10C518u;
    {
        const bool branch_taken_0x10c518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c518) {
            ctx->pc = 0x10C51Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10C518u;
            // 0x10c51c: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10C4D0u;
            goto label_10c4d0;
        }
    }
    ctx->pc = 0x10C520u;
label_10c520:
    // 0x10c520: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10c520u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10c524:
    // 0x10c524: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10c524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_10c528:
    // 0x10c528: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10c528u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10c52c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10c52cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c530: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10c530u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c534: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c538: 0x3e00008  jr          $ra
    ctx->pc = 0x10C538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C538u;
            // 0x10c53c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10C390u: goto label_10c390;
            case 0x10C400u: goto label_10c400;
            case 0x10C40Cu: goto label_10c40c;
            case 0x10C418u: goto label_10c418;
            case 0x10C454u: goto label_10c454;
            case 0x10C464u: goto label_10c464;
            case 0x10C47Cu: goto label_10c47c;
            case 0x10C4A4u: goto label_10c4a4;
            case 0x10C4ACu: goto label_10c4ac;
            case 0x10C4BCu: goto label_10c4bc;
            case 0x10C4D0u: goto label_10c4d0;
            case 0x10C50Cu: goto label_10c50c;
            case 0x10C520u: goto label_10c520;
            case 0x10C524u: goto label_10c524;
            case 0x10C528u: goto label_10c528;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10C540u;
}
