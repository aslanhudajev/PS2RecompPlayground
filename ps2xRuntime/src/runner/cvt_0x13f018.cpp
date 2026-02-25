#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: cvt
// Address: 0x13f018 - 0x13f1c8
void cvt_0x13f018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("cvt_0x13f018");
#endif

    ctx->pc = 0x13f018u;

    // 0x13f018: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x13f018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x13f01c: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x13f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x13f020: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x13f020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x13f024: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x13f024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x13f028: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x13f028u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f02c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x13f02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x13f030: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x13f030u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f034: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x13f034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x13f038: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x13f038u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f03c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x13f03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x13f040: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x13f040u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f044: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x13f044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x13f048: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x13f048u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f04c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x13f04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x13f050: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13f050u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f054: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13f054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13f058: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x13f058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f05c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x13f05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x13f060: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x13f060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f064: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13F064u;
    {
        const bool branch_taken_0x13f064 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x13F068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F064u;
            // 0x13f068: 0xffb30040  sd          $s3, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f064) {
            ctx->pc = 0x13F074u;
            goto label_13f074;
        }
    }
    ctx->pc = 0x13F06Cu;
    // 0x13f06c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13F06Cu;
    {
        const bool branch_taken_0x13f06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F06Cu;
            // 0x13f070: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f06c) {
            ctx->pc = 0x13F090u;
            goto label_13f090;
        }
    }
    ctx->pc = 0x13F074u;
label_13f074:
    // 0x13f074: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x13f074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x13f078: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13F078u;
    {
        const bool branch_taken_0x13f078 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x13F07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F078u;
            // 0x13f07c: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f078) {
            ctx->pc = 0x13F088u;
            goto label_13f088;
        }
    }
    ctx->pc = 0x13F080u;
    // 0x13f080: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13F080u;
    {
        const bool branch_taken_0x13f080 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x13F084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F080u;
            // 0x13f084: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f080) {
            ctx->pc = 0x13F090u;
            goto label_13f090;
        }
    }
    ctx->pc = 0x13F088u;
label_13f088:
    // 0x13f088: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x13f088u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x13f08c: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x13f08cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13f090:
    // 0x13f090: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x13f090u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f094: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x13f094u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x13f098: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13F098u;
    {
        const bool branch_taken_0x13f098 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x13f098) {
            ctx->pc = 0x13F09Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13F098u;
            // 0x13f09c: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13F0B8u;
            goto label_13f0b8;
        }
    }
    ctx->pc = 0x13F0A0u;
    // 0x13f0a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13f0a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f0a4: 0xc040866  jal         func_102198
    ctx->pc = 0x13F0A4u;
    SET_GPR_U32(ctx, 31, 0x13F0ACu);
    ctx->pc = 0x13F0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F0A4u;
            // 0x13f0a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F0ACu; }
        if (ctx->pc != 0x13F0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F0ACu; }
        if (ctx->pc != 0x13F0ACu) { return; }
    }
    ctx->pc = 0x13F0ACu;
    // 0x13f0ac: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x13f0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x13f0b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13f0b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f0b4: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x13f0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_13f0b8:
    // 0x13f0b8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x13f0b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f0bc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13f0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f0c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13f0c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f0c4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x13f0c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f0c8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x13f0c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f0cc: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x13f0ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f0d0: 0xc04e15a  jal         func_138568
    ctx->pc = 0x13F0D0u;
    SET_GPR_U32(ctx, 31, 0x13F0D8u);
    ctx->pc = 0x13F0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F0D0u;
            // 0x13f0d4: 0x37aa0004  ori         $t2, $sp, 0x4 (Delay Slot)
        SET_GPR_VEC(ctx, 10, PS2_POR(GPR_VEC(ctx, 29), _mm_cvtsi32_si128((int)4u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138568u;
    if (runtime->hasFunction(0x138568u)) {
        auto targetFn = runtime->lookupFunction(0x138568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F0D8u; }
        if (ctx->pc != 0x13F0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dtoa_r_0x138568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F0D8u; }
        if (ctx->pc != 0x13F0D8u) { return; }
    }
    ctx->pc = 0x13F0D8u;
    // 0x13f0d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x13f0d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f0dc: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x13f0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x13f0e0: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13F0E0u;
    {
        const bool branch_taken_0x13f0e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x13F0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F0E0u;
            // 0x13f0e4: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f0e0) {
            ctx->pc = 0x13F0F0u;
            goto label_13f0f0;
        }
    }
    ctx->pc = 0x13F0E8u;
    // 0x13f0e8: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F0E8u;
    {
        const bool branch_taken_0x13f0e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x13F0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F0E8u;
            // 0x13f0ec: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f0e8) {
            ctx->pc = 0x13F0FCu;
            goto label_13f0fc;
        }
    }
    ctx->pc = 0x13F0F0u;
label_13f0f0:
    // 0x13f0f0: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x13f0f0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 23), _mm_cvtsi32_si128((int)1u)));
    // 0x13f0f4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x13F0F4u;
    {
        const bool branch_taken_0x13f0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F0F4u;
            // 0x13f0f8: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f0f4) {
            ctx->pc = 0x13F188u;
            goto label_13f188;
        }
    }
    ctx->pc = 0x13F0FCu;
label_13f0fc:
    // 0x13f0fc: 0x1622000e  bne         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13F0FCu;
    {
        const bool branch_taken_0x13f0fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x13F100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F0FCu;
            // 0x13f100: 0x2748021  addu        $s0, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f0fc) {
            ctx->pc = 0x13F138u;
            goto label_13f138;
        }
    }
    ctx->pc = 0x13F104u;
    // 0x13f104: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x13f104u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13f108: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x13f108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x13f10c: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13F10Cu;
    {
        const bool branch_taken_0x13f10c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13f10c) {
            ctx->pc = 0x13F110u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13F10Cu;
            // 0x13f110: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13F134u;
            goto label_13f134;
        }
    }
    ctx->pc = 0x13F114u;
    // 0x13f114: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13f114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f118: 0xc0409ca  jal         func_102728
    ctx->pc = 0x13F118u;
    SET_GPR_U32(ctx, 31, 0x13F120u);
    ctx->pc = 0x13F11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F118u;
            // 0x13f11c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102728u;
    if (runtime->hasFunction(0x102728u)) {
        auto targetFn = runtime->lookupFunction(0x102728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F120u; }
        if (ctx->pc != 0x13F120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x102728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F120u; }
        if (ctx->pc != 0x13F120u) { return; }
    }
    ctx->pc = 0x13F120u;
    // 0x13f120: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13F120u;
    {
        const bool branch_taken_0x13f120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F120u;
            // 0x13f124: 0x141023  negu        $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f120) {
            ctx->pc = 0x13F130u;
            goto label_13f130;
        }
    }
    ctx->pc = 0x13F128u;
    // 0x13f128: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13f128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13f12c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x13f12cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_13f130:
    // 0x13f130: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x13f130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_13f134:
    // 0x13f134: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x13f134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_13f138:
    // 0x13f138: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13f138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f13c: 0xc0409ca  jal         func_102728
    ctx->pc = 0x13F13Cu;
    SET_GPR_U32(ctx, 31, 0x13F144u);
    ctx->pc = 0x13F140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F13Cu;
            // 0x13f140: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102728u;
    if (runtime->hasFunction(0x102728u)) {
        auto targetFn = runtime->lookupFunction(0x102728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F144u; }
        if (ctx->pc != 0x13F144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x102728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F144u; }
        if (ctx->pc != 0x13F144u) { return; }
    }
    ctx->pc = 0x13F144u;
    // 0x13f144: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13F144u;
    {
        const bool branch_taken_0x13f144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f144) {
            ctx->pc = 0x13F148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13F144u;
            // 0x13f148: 0xafb00004  sw          $s0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13F14Cu;
            goto label_13f14c;
        }
    }
    ctx->pc = 0x13F14Cu;
label_13f14c:
    // 0x13f14c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x13f14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x13f150: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x13f150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x13f154: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x13F154u;
    {
        const bool branch_taken_0x13f154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F154u;
            // 0x13f158: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f154) {
            ctx->pc = 0x13F18Cu;
            goto label_13f18c;
        }
    }
    ctx->pc = 0x13F15Cu;
    // 0x13f15c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x13f15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_13f160:
    // 0x13f160: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x13f160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x13f164: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x13f164u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x13f168: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13f168u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f16c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x13f16cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x13f170: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x13f170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f174: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x13f174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x13f178: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x13F178u;
    {
        const bool branch_taken_0x13f178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f178) {
            ctx->pc = 0x13F160u;
            goto label_13f160;
        }
    }
    ctx->pc = 0x13F180u;
    // 0x13f180: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13F180u;
    {
        const bool branch_taken_0x13f180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F180u;
            // 0x13f184: 0x731823  subu        $v1, $v1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f180) {
            ctx->pc = 0x13F190u;
            goto label_13f190;
        }
    }
    ctx->pc = 0x13F188u;
label_13f188:
    // 0x13f188: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x13f188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_13f18c:
    // 0x13f18c: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x13f18cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_13f190:
    // 0x13f190: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x13f190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f194: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x13f194u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x13f198: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x13f198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13f19c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x13f19cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13f1a0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x13f1a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13f1a4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x13f1a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13f1a8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x13f1a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13f1ac: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x13f1acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13f1b0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x13f1b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13f1b4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x13f1b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13f1b8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x13f1b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13f1bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13f1bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f1c0: 0x3e00008  jr          $ra
    ctx->pc = 0x13F1C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F1C0u;
            // 0x13f1c4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F074u: goto label_13f074;
            case 0x13F088u: goto label_13f088;
            case 0x13F090u: goto label_13f090;
            case 0x13F0B8u: goto label_13f0b8;
            case 0x13F0F0u: goto label_13f0f0;
            case 0x13F0FCu: goto label_13f0fc;
            case 0x13F130u: goto label_13f130;
            case 0x13F134u: goto label_13f134;
            case 0x13F138u: goto label_13f138;
            case 0x13F14Cu: goto label_13f14c;
            case 0x13F160u: goto label_13f160;
            case 0x13F188u: goto label_13f188;
            case 0x13F18Cu: goto label_13f18c;
            case 0x13F190u: goto label_13f190;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F1C8u;
}
