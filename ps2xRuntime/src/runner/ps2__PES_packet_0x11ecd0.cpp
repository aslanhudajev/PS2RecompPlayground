#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _PES_packet
// Address: 0x11ecd0 - 0x11f258
void ps2__PES_packet_0x11ecd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ps2__PES_packet_0x11ecd0");
#endif

    ctx->pc = 0x11ecd0u;

    // 0x11ecd0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x11ecd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x11ecd4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x11ecd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x11ecd8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x11ecd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11ecdc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x11ecdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ece0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x11ece0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x11ece4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x11ece4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ece8: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x11ece8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x11ecec: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x11ececu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x11ecf0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x11ecf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x11ecf4: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x11ecf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x11ecf8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x11ecf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x11ecfc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11ecfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11ed00: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11ed00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11ed04: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11ed04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11ed08: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x11ed08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x11ed0c: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11ED0Cu;
    SET_GPR_U32(ctx, 31, 0x11ED14u);
    ctx->pc = 0x11ED10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11ED0Cu;
            // 0x11ed10: 0xae820028  sw          $v0, 0x28($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ED14u; }
        if (ctx->pc != 0x11ED14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ED14u; }
        if (ctx->pc != 0x11ED14u) { return; }
    }
    ctx->pc = 0x11ED14u;
    // 0x11ed14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11ed14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ed18: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11ED18u;
    SET_GPR_U32(ctx, 31, 0x11ED20u);
    ctx->pc = 0x11ED1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11ED18u;
            // 0x11ed1c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ED20u; }
        if (ctx->pc != 0x11ED20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ED20u; }
        if (ctx->pc != 0x11ED20u) { return; }
    }
    ctx->pc = 0x11ED20u;
    // 0x11ed20: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11ed20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11ed24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11ed24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ed28: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x11ed28u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x11ed2c: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11ED2Cu;
    SET_GPR_U32(ctx, 31, 0x11ED34u);
    ctx->pc = 0x11ED30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11ED2Cu;
            // 0x11ed30: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ED34u; }
        if (ctx->pc != 0x11ED34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ED34u; }
        if (ctx->pc != 0x11ED34u) { return; }
    }
    ctx->pc = 0x11ED34u;
    // 0x11ed34: 0xde840000  ld          $a0, 0x0($s4)
    ctx->pc = 0x11ed34u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x11ed38: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11ed38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11ed3c: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x11ed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x11ed40: 0x3402bc00  ori         $v0, $zero, 0xBC00
    ctx->pc = 0x11ed40u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48128u)));
    // 0x11ed44: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x11ed44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11ed48: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x11ed48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ed4c: 0xfe830010  sd          $v1, 0x10($s4)
    ctx->pc = 0x11ed4cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 3));
    // 0x11ed50: 0x10820117  beq         $a0, $v0, . + 4 + (0x117 << 2)
    ctx->pc = 0x11ED50u;
    {
        const bool branch_taken_0x11ed50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11ED54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ED50u;
            // 0x11ed54: 0xfe830018  sd          $v1, 0x18($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed50) {
            ctx->pc = 0x11F1B0u;
            goto label_11f1b0;
        }
    }
    ctx->pc = 0x11ED58u;
    // 0x11ed58: 0x3402be00  ori         $v0, $zero, 0xBE00
    ctx->pc = 0x11ed58u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48640u)));
    // 0x11ed5c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x11ed5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11ed60: 0x108200f7  beq         $a0, $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x11ED60u;
    {
        const bool branch_taken_0x11ed60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x11ed60) {
            ctx->pc = 0x11F140u;
            goto label_11f140;
        }
    }
    ctx->pc = 0x11ED68u;
    // 0x11ed68: 0x3402bf00  ori         $v0, $zero, 0xBF00
    ctx->pc = 0x11ed68u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48896u)));
    // 0x11ed6c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x11ed6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11ed70: 0x108200f3  beq         $a0, $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x11ED70u;
    {
        const bool branch_taken_0x11ed70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x11ed70) {
            ctx->pc = 0x11F140u;
            goto label_11f140;
        }
    }
    ctx->pc = 0x11ED78u;
    // 0x11ed78: 0x3402f000  ori         $v0, $zero, 0xF000
    ctx->pc = 0x11ed78u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)61440u)));
    // 0x11ed7c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x11ed7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11ed80: 0x108200ef  beq         $a0, $v0, . + 4 + (0xEF << 2)
    ctx->pc = 0x11ED80u;
    {
        const bool branch_taken_0x11ed80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x11ed80) {
            ctx->pc = 0x11F140u;
            goto label_11f140;
        }
    }
    ctx->pc = 0x11ED88u;
    // 0x11ed88: 0x3402f100  ori         $v0, $zero, 0xF100
    ctx->pc = 0x11ed88u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)61696u)));
    // 0x11ed8c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x11ed8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11ed90: 0x108200eb  beq         $a0, $v0, . + 4 + (0xEB << 2)
    ctx->pc = 0x11ED90u;
    {
        const bool branch_taken_0x11ed90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x11ed90) {
            ctx->pc = 0x11F140u;
            goto label_11f140;
        }
    }
    ctx->pc = 0x11ED98u;
    // 0x11ed98: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x11ed98u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65280u)));
    // 0x11ed9c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x11ed9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11eda0: 0x108200e7  beq         $a0, $v0, . + 4 + (0xE7 << 2)
    ctx->pc = 0x11EDA0u;
    {
        const bool branch_taken_0x11eda0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x11eda0) {
            ctx->pc = 0x11F140u;
            goto label_11f140;
        }
    }
    ctx->pc = 0x11EDA8u;
    // 0x11eda8: 0x3402f200  ori         $v0, $zero, 0xF200
    ctx->pc = 0x11eda8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)61952u)));
    // 0x11edac: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x11edacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11edb0: 0x108200e3  beq         $a0, $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x11EDB0u;
    {
        const bool branch_taken_0x11edb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x11edb0) {
            ctx->pc = 0x11F140u;
            goto label_11f140;
        }
    }
    ctx->pc = 0x11EDB8u;
    // 0x11edb8: 0x3402f800  ori         $v0, $zero, 0xF800
    ctx->pc = 0x11edb8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)63488u)));
    // 0x11edbc: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x11edbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11edc0: 0x108200df  beq         $a0, $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x11EDC0u;
    {
        const bool branch_taken_0x11edc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x11edc0) {
            ctx->pc = 0x11F140u;
            goto label_11f140;
        }
    }
    ctx->pc = 0x11EDC8u;
    // 0x11edc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11edc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11edcc: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11EDCCu;
    SET_GPR_U32(ctx, 31, 0x11EDD4u);
    ctx->pc = 0x11EDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EDCCu;
            // 0x11edd0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EDD4u; }
        if (ctx->pc != 0x11EDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EDD4u; }
        if (ctx->pc != 0x11EDD4u) { return; }
    }
    ctx->pc = 0x11EDD4u;
    // 0x11edd4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11edd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11edd8: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11EDD8u;
    SET_GPR_U32(ctx, 31, 0x11EDE0u);
    ctx->pc = 0x11EDDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EDD8u;
            // 0x11eddc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EDE0u; }
        if (ctx->pc != 0x11EDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EDE0u; }
        if (ctx->pc != 0x11EDE0u) { return; }
    }
    ctx->pc = 0x11EDE0u;
    // 0x11ede0: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x11ede0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x11ede4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11ede4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ede8: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11EDE8u;
    SET_GPR_U32(ctx, 31, 0x11EDF0u);
    ctx->pc = 0x11EDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EDE8u;
            // 0x11edec: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EDF0u; }
        if (ctx->pc != 0x11EDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EDF0u; }
        if (ctx->pc != 0x11EDF0u) { return; }
    }
    ctx->pc = 0x11EDF0u;
    // 0x11edf0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11edf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11edf4: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11EDF4u;
    SET_GPR_U32(ctx, 31, 0x11EDFCu);
    ctx->pc = 0x11EDF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EDF4u;
            // 0x11edf8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EDFCu; }
        if (ctx->pc != 0x11EDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EDFCu; }
        if (ctx->pc != 0x11EDFCu) { return; }
    }
    ctx->pc = 0x11EDFCu;
    // 0x11edfc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x11edfcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11ee00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee04: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11EE04u;
    SET_GPR_U32(ctx, 31, 0x11EE0Cu);
    ctx->pc = 0x11EE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EE04u;
            // 0x11ee08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EE0Cu; }
        if (ctx->pc != 0x11EE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EE0Cu; }
        if (ctx->pc != 0x11EE0Cu) { return; }
    }
    ctx->pc = 0x11EE0Cu;
    // 0x11ee0c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x11ee0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x11ee10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11ee10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee14: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11EE14u;
    SET_GPR_U32(ctx, 31, 0x11EE1Cu);
    ctx->pc = 0x11EE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EE14u;
            // 0x11ee18: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EE1Cu; }
        if (ctx->pc != 0x11EE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EE1Cu; }
        if (ctx->pc != 0x11EE1Cu) { return; }
    }
    ctx->pc = 0x11EE1Cu;
    // 0x11ee1c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x11ee1cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11ee20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee24: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11EE24u;
    SET_GPR_U32(ctx, 31, 0x11EE2Cu);
    ctx->pc = 0x11EE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EE24u;
            // 0x11ee28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EE2Cu; }
        if (ctx->pc != 0x11EE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EE2Cu; }
        if (ctx->pc != 0x11EE2Cu) { return; }
    }
    ctx->pc = 0x11EE2Cu;
    // 0x11ee2c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x11ee2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11ee30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee34: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11EE34u;
    SET_GPR_U32(ctx, 31, 0x11EE3Cu);
    ctx->pc = 0x11EE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EE34u;
            // 0x11ee38: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EE3Cu; }
        if (ctx->pc != 0x11EE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EE3Cu; }
        if (ctx->pc != 0x11EE3Cu) { return; }
    }
    ctx->pc = 0x11EE3Cu;
    // 0x11ee3c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x11ee3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x11ee40: 0x32e30002  andi        $v1, $s7, 0x2
    ctx->pc = 0x11ee40u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 23), _mm_cvtsi32_si128((int)2u)));
    // 0x11ee44: 0xde620018  ld          $v0, 0x18($s3)
    ctx->pc = 0x11ee44u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x11ee48: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x11ee48u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11ee4c: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x11ee4cu;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x11ee50: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x11EE50u;
    {
        const bool branch_taken_0x11ee50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EE50u;
            // 0x11ee54: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ee50) {
            ctx->pc = 0x11EEDCu;
            goto label_11eedc;
        }
    }
    ctx->pc = 0x11EE58u;
    // 0x11ee58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11ee58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee5c: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11EE5Cu;
    SET_GPR_U32(ctx, 31, 0x11EE64u);
    ctx->pc = 0x11EE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EE5Cu;
            // 0x11ee60: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EE64u; }
        if (ctx->pc != 0x11EE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EE64u; }
        if (ctx->pc != 0x11EE64u) { return; }
    }
    ctx->pc = 0x11EE64u;
    // 0x11ee64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11ee64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee68: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11EE68u;
    SET_GPR_U32(ctx, 31, 0x11EE70u);
    ctx->pc = 0x11EE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EE68u;
            // 0x11ee6c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EE70u; }
        if (ctx->pc != 0x11EE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EE70u; }
        if (ctx->pc != 0x11EE70u) { return; }
    }
    ctx->pc = 0x11EE70u;
    // 0x11ee70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11ee70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee74: 0xc0497fa  jal         func_125FE8
    ctx->pc = 0x11EE74u;
    SET_GPR_U32(ctx, 31, 0x11EE7Cu);
    ctx->pc = 0x11EE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EE74u;
            // 0x11ee78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125FE8u;
    if (runtime->hasFunction(0x125FE8u)) {
        auto targetFn = runtime->lookupFunction(0x125FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EE7Cu; }
        if (ctx->pc != 0x11EE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x125fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EE7Cu; }
        if (ctx->pc != 0x11EE7Cu) { return; }
    }
    ctx->pc = 0x11EE7Cu;
    // 0x11ee7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11ee7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee80: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11EE80u;
    SET_GPR_U32(ctx, 31, 0x11EE88u);
    ctx->pc = 0x11EE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EE80u;
            // 0x11ee84: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EE88u; }
        if (ctx->pc != 0x11EE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EE88u; }
        if (ctx->pc != 0x11EE88u) { return; }
    }
    ctx->pc = 0x11EE88u;
    // 0x11ee88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11ee88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee8c: 0xc0497fa  jal         func_125FE8
    ctx->pc = 0x11EE8Cu;
    SET_GPR_U32(ctx, 31, 0x11EE94u);
    ctx->pc = 0x11EE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EE8Cu;
            // 0x11ee90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125FE8u;
    if (runtime->hasFunction(0x125FE8u)) {
        auto targetFn = runtime->lookupFunction(0x125FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EE94u; }
        if (ctx->pc != 0x11EE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x125fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EE94u; }
        if (ctx->pc != 0x11EE94u) { return; }
    }
    ctx->pc = 0x11EE94u;
    // 0x11ee94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11ee94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee98: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11EE98u;
    SET_GPR_U32(ctx, 31, 0x11EEA0u);
    ctx->pc = 0x11EE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EE98u;
            // 0x11ee9c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EEA0u; }
        if (ctx->pc != 0x11EEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EEA0u; }
        if (ctx->pc != 0x11EEA0u) { return; }
    }
    ctx->pc = 0x11EEA0u;
    // 0x11eea0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11eea0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eea4: 0xc0497fa  jal         func_125FE8
    ctx->pc = 0x11EEA4u;
    SET_GPR_U32(ctx, 31, 0x11EEACu);
    ctx->pc = 0x11EEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EEA4u;
            // 0x11eea8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125FE8u;
    if (runtime->hasFunction(0x125FE8u)) {
        auto targetFn = runtime->lookupFunction(0x125FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EEACu; }
        if (ctx->pc != 0x11EEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x125fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EEACu; }
        if (ctx->pc != 0x11EEACu) { return; }
    }
    ctx->pc = 0x11EEACu;
    // 0x11eeac: 0x101780  sll         $v0, $s0, 30
    ctx->pc = 0x11eeacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 30));
    // 0x11eeb0: 0x118bc0  sll         $s1, $s1, 15
    ctx->pc = 0x11eeb0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 15));
    // 0x11eeb4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x11eeb4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 17)));
    // 0x11eeb8: 0x108082  srl         $s0, $s0, 2
    ctx->pc = 0x11eeb8u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x11eebc: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x11eebcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 18)));
    // 0x11eec0: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x11eec0u;
    SET_GPR_VEC(ctx, 16, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)1u)));
    // 0x11eec4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11eec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11eec8: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x11eec8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x11eecc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x11eeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11eed0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x11eed0u;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 16), GPR_VEC(ctx, 2)));
    // 0x11eed4: 0xfe900010  sd          $s0, 0x10($s4)
    ctx->pc = 0x11eed4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 16));
    // 0x11eed8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11eed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_11eedc:
    // 0x11eedc: 0x16e20022  bne         $s7, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x11EEDCu;
    {
        const bool branch_taken_0x11eedc = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x11EEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EEDCu;
            // 0x11eee0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eedc) {
            ctx->pc = 0x11EF68u;
            goto label_11ef68;
        }
    }
    ctx->pc = 0x11EEE4u;
    // 0x11eee4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11eee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eee8: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11EEE8u;
    SET_GPR_U32(ctx, 31, 0x11EEF0u);
    ctx->pc = 0x11EEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EEE8u;
            // 0x11eeec: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EEF0u; }
        if (ctx->pc != 0x11EEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EEF0u; }
        if (ctx->pc != 0x11EEF0u) { return; }
    }
    ctx->pc = 0x11EEF0u;
    // 0x11eef0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11eef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eef4: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11EEF4u;
    SET_GPR_U32(ctx, 31, 0x11EEFCu);
    ctx->pc = 0x11EEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EEF4u;
            // 0x11eef8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EEFCu; }
        if (ctx->pc != 0x11EEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EEFCu; }
        if (ctx->pc != 0x11EEFCu) { return; }
    }
    ctx->pc = 0x11EEFCu;
    // 0x11eefc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11eefcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ef00: 0xc0497fa  jal         func_125FE8
    ctx->pc = 0x11EF00u;
    SET_GPR_U32(ctx, 31, 0x11EF08u);
    ctx->pc = 0x11EF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EF00u;
            // 0x11ef04: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125FE8u;
    if (runtime->hasFunction(0x125FE8u)) {
        auto targetFn = runtime->lookupFunction(0x125FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EF08u; }
        if (ctx->pc != 0x11EF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x125fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EF08u; }
        if (ctx->pc != 0x11EF08u) { return; }
    }
    ctx->pc = 0x11EF08u;
    // 0x11ef08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11ef08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ef0c: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11EF0Cu;
    SET_GPR_U32(ctx, 31, 0x11EF14u);
    ctx->pc = 0x11EF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EF0Cu;
            // 0x11ef10: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EF14u; }
        if (ctx->pc != 0x11EF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EF14u; }
        if (ctx->pc != 0x11EF14u) { return; }
    }
    ctx->pc = 0x11EF14u;
    // 0x11ef14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11ef14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ef18: 0xc0497fa  jal         func_125FE8
    ctx->pc = 0x11EF18u;
    SET_GPR_U32(ctx, 31, 0x11EF20u);
    ctx->pc = 0x11EF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EF18u;
            // 0x11ef1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125FE8u;
    if (runtime->hasFunction(0x125FE8u)) {
        auto targetFn = runtime->lookupFunction(0x125FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EF20u; }
        if (ctx->pc != 0x11EF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x125fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EF20u; }
        if (ctx->pc != 0x11EF20u) { return; }
    }
    ctx->pc = 0x11EF20u;
    // 0x11ef20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11ef20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ef24: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11EF24u;
    SET_GPR_U32(ctx, 31, 0x11EF2Cu);
    ctx->pc = 0x11EF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EF24u;
            // 0x11ef28: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EF2Cu; }
        if (ctx->pc != 0x11EF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EF2Cu; }
        if (ctx->pc != 0x11EF2Cu) { return; }
    }
    ctx->pc = 0x11EF2Cu;
    // 0x11ef2c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11ef2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ef30: 0xc0497fa  jal         func_125FE8
    ctx->pc = 0x11EF30u;
    SET_GPR_U32(ctx, 31, 0x11EF38u);
    ctx->pc = 0x11EF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EF30u;
            // 0x11ef34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125FE8u;
    if (runtime->hasFunction(0x125FE8u)) {
        auto targetFn = runtime->lookupFunction(0x125FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EF38u; }
        if (ctx->pc != 0x11EF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x125fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EF38u; }
        if (ctx->pc != 0x11EF38u) { return; }
    }
    ctx->pc = 0x11EF38u;
    // 0x11ef38: 0x101780  sll         $v0, $s0, 30
    ctx->pc = 0x11ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 30));
    // 0x11ef3c: 0x118bc0  sll         $s1, $s1, 15
    ctx->pc = 0x11ef3cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 15));
    // 0x11ef40: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x11ef40u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 17)));
    // 0x11ef44: 0x108082  srl         $s0, $s0, 2
    ctx->pc = 0x11ef44u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x11ef48: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x11ef48u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 18)));
    // 0x11ef4c: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x11ef4cu;
    SET_GPR_VEC(ctx, 16, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)1u)));
    // 0x11ef50: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11ef50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11ef54: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x11ef54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x11ef58: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x11ef58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11ef5c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x11ef5cu;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 16), GPR_VEC(ctx, 2)));
    // 0x11ef60: 0xfe900018  sd          $s0, 0x18($s4)
    ctx->pc = 0x11ef60u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 16));
    // 0x11ef64: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11ef64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_11ef68:
    // 0x11ef68: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11ef68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ef6c: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11EF6Cu;
    {
        const bool branch_taken_0x11ef6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x11EF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EF6Cu;
            // 0x11ef70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef6c) {
            ctx->pc = 0x11EF7Cu;
            goto label_11ef7c;
        }
    }
    ctx->pc = 0x11EF74u;
    // 0x11ef74: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11EF74u;
    SET_GPR_U32(ctx, 31, 0x11EF7Cu);
    ctx->pc = 0x11EF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EF74u;
            // 0x11ef78: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EF7Cu; }
        if (ctx->pc != 0x11EF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EF7Cu; }
        if (ctx->pc != 0x11EF7Cu) { return; }
    }
    ctx->pc = 0x11EF7Cu;
label_11ef7c:
    // 0x11ef7c: 0x13c00006  beqz        $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x11EF7Cu;
    {
        const bool branch_taken_0x11ef7c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EF7Cu;
            // 0x11ef80: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef7c) {
            ctx->pc = 0x11EF98u;
            goto label_11ef98;
        }
    }
    ctx->pc = 0x11EF84u;
    // 0x11ef84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11ef84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ef88: 0x24421790  addiu       $v0, $v0, 0x1790
    ctx->pc = 0x11ef88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6032));
    // 0x11ef8c: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x11ef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x11ef90: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11EF90u;
    SET_GPR_U32(ctx, 31, 0x11EF98u);
    ctx->pc = 0x11EF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EF90u;
            // 0x11ef94: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EF98u; }
        if (ctx->pc != 0x11EF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EF98u; }
        if (ctx->pc != 0x11EF98u) { return; }
    }
    ctx->pc = 0x11EF98u;
label_11ef98:
    // 0x11ef98: 0x16b00045  bne         $s5, $s0, . + 4 + (0x45 << 2)
    ctx->pc = 0x11EF98u;
    {
        const bool branch_taken_0x11ef98 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 16));
        ctx->pc = 0x11EF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EF98u;
            // 0x11ef9c: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef98) {
            ctx->pc = 0x11F0B0u;
            goto label_11f0b0;
        }
    }
    ctx->pc = 0x11EFA0u;
    // 0x11efa0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11efa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11efa4: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11EFA4u;
    SET_GPR_U32(ctx, 31, 0x11EFACu);
    ctx->pc = 0x11EFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EFA4u;
            // 0x11efa8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EFACu; }
        if (ctx->pc != 0x11EFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EFACu; }
        if (ctx->pc != 0x11EFACu) { return; }
    }
    ctx->pc = 0x11EFACu;
    // 0x11efac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11efacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11efb0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11efb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11efb4: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11EFB4u;
    SET_GPR_U32(ctx, 31, 0x11EFBCu);
    ctx->pc = 0x11EFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EFB4u;
            // 0x11efb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EFBCu; }
        if (ctx->pc != 0x11EFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EFBCu; }
        if (ctx->pc != 0x11EFBCu) { return; }
    }
    ctx->pc = 0x11EFBCu;
    // 0x11efbc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x11efbcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11efc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11efc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11efc4: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11EFC4u;
    SET_GPR_U32(ctx, 31, 0x11EFCCu);
    ctx->pc = 0x11EFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EFC4u;
            // 0x11efc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EFCCu; }
        if (ctx->pc != 0x11EFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EFCCu; }
        if (ctx->pc != 0x11EFCCu) { return; }
    }
    ctx->pc = 0x11EFCCu;
    // 0x11efcc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11efccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11efd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11efd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11efd4: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11EFD4u;
    SET_GPR_U32(ctx, 31, 0x11EFDCu);
    ctx->pc = 0x11EFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EFD4u;
            // 0x11efd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EFDCu; }
        if (ctx->pc != 0x11EFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EFDCu; }
        if (ctx->pc != 0x11EFDCu) { return; }
    }
    ctx->pc = 0x11EFDCu;
    // 0x11efdc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x11efdcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11efe0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11efe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11efe4: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11EFE4u;
    SET_GPR_U32(ctx, 31, 0x11EFECu);
    ctx->pc = 0x11EFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EFE4u;
            // 0x11efe8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EFECu; }
        if (ctx->pc != 0x11EFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EFECu; }
        if (ctx->pc != 0x11EFECu) { return; }
    }
    ctx->pc = 0x11EFECu;
    // 0x11efec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11efecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eff0: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11EFF0u;
    SET_GPR_U32(ctx, 31, 0x11EFF8u);
    ctx->pc = 0x11EFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EFF0u;
            // 0x11eff4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EFF8u; }
        if (ctx->pc != 0x11EFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EFF8u; }
        if (ctx->pc != 0x11EFF8u) { return; }
    }
    ctx->pc = 0x11EFF8u;
    // 0x11eff8: 0x1615000a  bne         $s0, $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x11EFF8u;
    {
        const bool branch_taken_0x11eff8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        ctx->pc = 0x11EFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EFF8u;
            // 0x11effc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eff8) {
            ctx->pc = 0x11F024u;
            goto label_11f024;
        }
    }
    ctx->pc = 0x11F000u;
    // 0x11f000: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11f000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f004: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11F004u;
    SET_GPR_U32(ctx, 31, 0x11F00Cu);
    ctx->pc = 0x11F008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F004u;
            // 0x11f008: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F00Cu; }
        if (ctx->pc != 0x11F00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F00Cu; }
        if (ctx->pc != 0x11F00Cu) { return; }
    }
    ctx->pc = 0x11F00Cu;
    // 0x11f00c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11f00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f010: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11F010u;
    SET_GPR_U32(ctx, 31, 0x11F018u);
    ctx->pc = 0x11F014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F010u;
            // 0x11f014: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F018u; }
        if (ctx->pc != 0x11F018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F018u; }
        if (ctx->pc != 0x11F018u) { return; }
    }
    ctx->pc = 0x11F018u;
    // 0x11f018: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11f018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f01c: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11F01Cu;
    SET_GPR_U32(ctx, 31, 0x11F024u);
    ctx->pc = 0x11F020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F01Cu;
            // 0x11f020: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F024u; }
        if (ctx->pc != 0x11F024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F024u; }
        if (ctx->pc != 0x11F024u) { return; }
    }
    ctx->pc = 0x11F024u;
label_11f024:
    // 0x11f024: 0x17d50005  bne         $fp, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F024u;
    {
        const bool branch_taken_0x11f024 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 21));
        ctx->pc = 0x11F028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F024u;
            // 0x11f028: 0x3c040017  lui         $a0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f024) {
            ctx->pc = 0x11F03Cu;
            goto label_11f03c;
        }
    }
    ctx->pc = 0x11F02Cu;
    // 0x11f02c: 0xc048006  jal         func_120018
    ctx->pc = 0x11F02Cu;
    SET_GPR_U32(ctx, 31, 0x11F034u);
    ctx->pc = 0x11F030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F02Cu;
            // 0x11f030: 0x24844be0  addiu       $a0, $a0, 0x4BE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120018u;
    if (runtime->hasFunction(0x120018u)) {
        auto targetFn = runtime->lookupFunction(0x120018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F034u; }
        if (ctx->pc != 0x11F034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x120018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F034u; }
        if (ctx->pc != 0x11F034u) { return; }
    }
    ctx->pc = 0x11F034u;
    // 0x11f034: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x11F034u;
    {
        const bool branch_taken_0x11f034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F034u;
            // 0x11f038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f034) {
            ctx->pc = 0x11F228u;
            goto label_11f228;
        }
    }
    ctx->pc = 0x11F03Cu;
label_11f03c:
    // 0x11f03c: 0x16550003  bne         $s2, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F03Cu;
    {
        const bool branch_taken_0x11f03c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        ctx->pc = 0x11F040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F03Cu;
            // 0x11f040: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f03c) {
            ctx->pc = 0x11F04Cu;
            goto label_11f04c;
        }
    }
    ctx->pc = 0x11F044u;
    // 0x11f044: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11F044u;
    SET_GPR_U32(ctx, 31, 0x11F04Cu);
    ctx->pc = 0x11F048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F044u;
            // 0x11f048: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F04Cu; }
        if (ctx->pc != 0x11F04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F04Cu; }
        if (ctx->pc != 0x11F04Cu) { return; }
    }
    ctx->pc = 0x11F04Cu;
label_11f04c:
    // 0x11f04c: 0x16f50003  bne         $s7, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F04Cu;
    {
        const bool branch_taken_0x11f04c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 21));
        ctx->pc = 0x11F050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F04Cu;
            // 0x11f050: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f04c) {
            ctx->pc = 0x11F05Cu;
            goto label_11f05c;
        }
    }
    ctx->pc = 0x11F054u;
    // 0x11f054: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11F054u;
    SET_GPR_U32(ctx, 31, 0x11F05Cu);
    ctx->pc = 0x11F058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F054u;
            // 0x11f058: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F05Cu; }
        if (ctx->pc != 0x11F05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F05Cu; }
        if (ctx->pc != 0x11F05Cu) { return; }
    }
    ctx->pc = 0x11F05Cu;
label_11f05c:
    // 0x11f05c: 0x16350014  bne         $s1, $s5, . + 4 + (0x14 << 2)
    ctx->pc = 0x11F05Cu;
    {
        const bool branch_taken_0x11f05c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x11F060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F05Cu;
            // 0x11f060: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f05c) {
            ctx->pc = 0x11F0B0u;
            goto label_11f0b0;
        }
    }
    ctx->pc = 0x11F064u;
    // 0x11f064: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11f064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f068: 0xc0497fa  jal         func_125FE8
    ctx->pc = 0x11F068u;
    SET_GPR_U32(ctx, 31, 0x11F070u);
    ctx->pc = 0x11F06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F068u;
            // 0x11f06c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125FE8u;
    if (runtime->hasFunction(0x125FE8u)) {
        auto targetFn = runtime->lookupFunction(0x125FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F070u; }
        if (ctx->pc != 0x11F070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x125fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F070u; }
        if (ctx->pc != 0x11F070u) { return; }
    }
    ctx->pc = 0x11F070u;
    // 0x11f070: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11f070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f074: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11F074u;
    SET_GPR_U32(ctx, 31, 0x11F07Cu);
    ctx->pc = 0x11F078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F074u;
            // 0x11f078: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F07Cu; }
        if (ctx->pc != 0x11F07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F07Cu; }
        if (ctx->pc != 0x11F07Cu) { return; }
    }
    ctx->pc = 0x11F07Cu;
    // 0x11f07c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11f07cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f080: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x11F080u;
    {
        const bool branch_taken_0x11f080 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F080u;
            // 0x11f084: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f080) {
            ctx->pc = 0x11F0B0u;
            goto label_11f0b0;
        }
    }
    ctx->pc = 0x11F088u;
    // 0x11f088: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11f088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f08c: 0x0  nop
    ctx->pc = 0x11f08cu;
    // NOP
label_11f090:
    // 0x11f090: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11F090u;
    SET_GPR_U32(ctx, 31, 0x11F098u);
    ctx->pc = 0x11F094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F090u;
            // 0x11f094: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F098u; }
        if (ctx->pc != 0x11F098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F098u; }
        if (ctx->pc != 0x11F098u) { return; }
    }
    ctx->pc = 0x11F098u;
    // 0x11f098: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11f098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11f09c: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x11f09cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x11f0a0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x11F0A0u;
    {
        const bool branch_taken_0x11f0a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F0A0u;
            // 0x11f0a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f0a0) {
            ctx->pc = 0x11F090u;
            goto label_11f090;
        }
    }
    ctx->pc = 0x11F0A8u;
    // 0x11f0a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11F0A8u;
    {
        const bool branch_taken_0x11f0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F0A8u;
            // 0x11f0ac: 0xde620018  ld          $v0, 0x18($s3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f0a8) {
            ctx->pc = 0x11F0B4u;
            goto label_11f0b4;
        }
    }
    ctx->pc = 0x11F0B0u;
label_11f0b0:
    // 0x11f0b0: 0xde620018  ld          $v0, 0x18($s3)
    ctx->pc = 0x11f0b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
label_11f0b4:
    // 0x11f0b4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x11f0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11f0b8: 0x52102f  dsubu       $v0, $v0, $s2
    ctx->pc = 0x11f0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 18));
    // 0x11f0bc: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x11f0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x11f0c0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11f0c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11f0c4: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x11f0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11f0c8: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F0C8u;
    {
        const bool branch_taken_0x11f0c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f0c8) {
            ctx->pc = 0x11F0CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11F0C8u;
            // 0x11f0cc: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11F0DCu;
            goto label_11f0dc;
        }
    }
    ctx->pc = 0x11F0D0u;
    // 0x11f0d0: 0xc04980c  jal         func_126030
    ctx->pc = 0x11F0D0u;
    SET_GPR_U32(ctx, 31, 0x11F0D8u);
    ctx->pc = 0x11F0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F0D0u;
            // 0x11f0d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126030u;
    if (runtime->hasFunction(0x126030u)) {
        auto targetFn = runtime->lookupFunction(0x126030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F0D8u; }
        if (ctx->pc != 0x11F0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitJump_0x126030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F0D8u; }
        if (ctx->pc != 0x11F0D8u) { return; }
    }
    ctx->pc = 0x11F0D8u;
    // 0x11f0d8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x11f0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_11f0dc:
    // 0x11f0dc: 0x3404bd00  ori         $a0, $zero, 0xBD00
    ctx->pc = 0x11f0dcu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48384u)));
    // 0x11f0e0: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x11f0e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x11f0e4: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x11f0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x11f0e8: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x11f0e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x11f0ec: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x11f0ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11f0f0: 0x2605fffd  addiu       $a1, $s0, -0x3
    ctx->pc = 0x11f0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
    // 0x11f0f4: 0xae850024  sw          $a1, 0x24($s4)
    ctx->pc = 0x11f0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 5));
    // 0x11f0f8: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x11f0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x11f0fc: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x11F0FCu;
    {
        const bool branch_taken_0x11f0fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x11F100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F0FCu;
            // 0x11f100: 0xae820020  sw          $v0, 0x20($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f0fc) {
            ctx->pc = 0x11F128u;
            goto label_11f128;
        }
    }
    ctx->pc = 0x11F104u;
    // 0x11f104: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11f104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f108: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11F108u;
    SET_GPR_U32(ctx, 31, 0x11F110u);
    ctx->pc = 0x11F10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F108u;
            // 0x11f10c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F110u; }
        if (ctx->pc != 0x11F110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F110u; }
        if (ctx->pc != 0x11F110u) { return; }
    }
    ctx->pc = 0x11F110u;
    // 0x11f110: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x11f110u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x11f114: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11f114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11f118: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x11f118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11f11c: 0x2605fff9  addiu       $a1, $s0, -0x7
    ctx->pc = 0x11f11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967289));
    // 0x11f120: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x11f120u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x11f124: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x11f124u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_11f128:
    // 0x11f128: 0x10a0003f  beqz        $a1, . + 4 + (0x3F << 2)
    ctx->pc = 0x11F128u;
    {
        const bool branch_taken_0x11f128 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F128u;
            // 0x11f12c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f128) {
            ctx->pc = 0x11F228u;
            goto label_11f228;
        }
    }
    ctx->pc = 0x11F130u;
    // 0x11f130: 0xc04980c  jal         func_126030
    ctx->pc = 0x11F130u;
    SET_GPR_U32(ctx, 31, 0x11F138u);
    ctx->pc = 0x11F134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F130u;
            // 0x11f134: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126030u;
    if (runtime->hasFunction(0x126030u)) {
        auto targetFn = runtime->lookupFunction(0x126030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F138u; }
        if (ctx->pc != 0x11F138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitJump_0x126030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F138u; }
        if (ctx->pc != 0x11F138u) { return; }
    }
    ctx->pc = 0x11F138u;
    // 0x11f138: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x11F138u;
    {
        const bool branch_taken_0x11f138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F138u;
            // 0x11f13c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f138) {
            ctx->pc = 0x11F228u;
            goto label_11f228;
        }
    }
    ctx->pc = 0x11F140u;
label_11f140:
    // 0x11f140: 0x3402bc00  ori         $v0, $zero, 0xBC00
    ctx->pc = 0x11f140u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48128u)));
    // 0x11f144: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x11f144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11f148: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x11F148u;
    {
        const bool branch_taken_0x11f148 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x11f148) {
            ctx->pc = 0x11F1B0u;
            goto label_11f1b0;
        }
    }
    ctx->pc = 0x11F150u;
    // 0x11f150: 0x3402bf00  ori         $v0, $zero, 0xBF00
    ctx->pc = 0x11f150u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48896u)));
    // 0x11f154: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x11f154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11f158: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x11F158u;
    {
        const bool branch_taken_0x11f158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x11f158) {
            ctx->pc = 0x11F1B8u;
            goto label_11f1b8;
        }
    }
    ctx->pc = 0x11F160u;
    // 0x11f160: 0x3402f000  ori         $v0, $zero, 0xF000
    ctx->pc = 0x11f160u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)61440u)));
    // 0x11f164: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x11f164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11f168: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11F168u;
    {
        const bool branch_taken_0x11f168 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x11f168) {
            ctx->pc = 0x11F1B0u;
            goto label_11f1b0;
        }
    }
    ctx->pc = 0x11F170u;
    // 0x11f170: 0x3402f100  ori         $v0, $zero, 0xF100
    ctx->pc = 0x11f170u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)61696u)));
    // 0x11f174: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x11f174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11f178: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11F178u;
    {
        const bool branch_taken_0x11f178 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x11f178) {
            ctx->pc = 0x11F1B0u;
            goto label_11f1b0;
        }
    }
    ctx->pc = 0x11F180u;
    // 0x11f180: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x11f180u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65280u)));
    // 0x11f184: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x11f184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11f188: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11F188u;
    {
        const bool branch_taken_0x11f188 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x11f188) {
            ctx->pc = 0x11F1B0u;
            goto label_11f1b0;
        }
    }
    ctx->pc = 0x11F190u;
    // 0x11f190: 0x3402f200  ori         $v0, $zero, 0xF200
    ctx->pc = 0x11f190u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)61952u)));
    // 0x11f194: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x11f194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11f198: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F198u;
    {
        const bool branch_taken_0x11f198 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x11f198) {
            ctx->pc = 0x11F1B0u;
            goto label_11f1b0;
        }
    }
    ctx->pc = 0x11F1A0u;
    // 0x11f1a0: 0x3402f800  ori         $v0, $zero, 0xF800
    ctx->pc = 0x11f1a0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)63488u)));
    // 0x11f1a4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x11f1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11f1a8: 0x14820015  bne         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x11F1A8u;
    {
        const bool branch_taken_0x11f1a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x11f1a8) {
            ctx->pc = 0x11F200u;
            goto label_11f200;
        }
    }
    ctx->pc = 0x11F1B0u;
label_11f1b0:
    // 0x11f1b0: 0x3402bf00  ori         $v0, $zero, 0xBF00
    ctx->pc = 0x11f1b0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48896u)));
    // 0x11f1b4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x11f1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_11f1b8:
    // 0x11f1b8: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11F1B8u;
    {
        const bool branch_taken_0x11f1b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x11F1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F1B8u;
            // 0x11f1bc: 0x8e900008  lw          $s0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f1b8) {
            ctx->pc = 0x11F1E4u;
            goto label_11f1e4;
        }
    }
    ctx->pc = 0x11F1C0u;
    // 0x11f1c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11f1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f1c4: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11F1C4u;
    SET_GPR_U32(ctx, 31, 0x11F1CCu);
    ctx->pc = 0x11F1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F1C4u;
            // 0x11f1c8: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F1CCu; }
        if (ctx->pc != 0x11F1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F1CCu; }
        if (ctx->pc != 0x11F1CCu) { return; }
    }
    ctx->pc = 0x11F1CCu;
    // 0x11f1cc: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x11f1ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x11f1d0: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x11f1d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x11f1d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11f1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11f1d8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x11f1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11f1dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x11f1dcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x11f1e0: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x11f1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_11f1e4:
    // 0x11f1e4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11F1E4u;
    {
        const bool branch_taken_0x11f1e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F1E4u;
            // 0x11f1e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f1e4) {
            ctx->pc = 0x11F228u;
            goto label_11f228;
        }
    }
    ctx->pc = 0x11F1ECu;
    // 0x11f1ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11f1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f1f0: 0xc04980c  jal         func_126030
    ctx->pc = 0x11F1F0u;
    SET_GPR_U32(ctx, 31, 0x11F1F8u);
    ctx->pc = 0x11F1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F1F0u;
            // 0x11f1f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126030u;
    if (runtime->hasFunction(0x126030u)) {
        auto targetFn = runtime->lookupFunction(0x126030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F1F8u; }
        if (ctx->pc != 0x11F1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitJump_0x126030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F1F8u; }
        if (ctx->pc != 0x11F1F8u) { return; }
    }
    ctx->pc = 0x11F1F8u;
    // 0x11f1f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x11F1F8u;
    {
        const bool branch_taken_0x11f1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F1F8u;
            // 0x11f1fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f1f8) {
            ctx->pc = 0x11F228u;
            goto label_11f228;
        }
    }
    ctx->pc = 0x11F200u;
label_11f200:
    // 0x11f200: 0x3402be00  ori         $v0, $zero, 0xBE00
    ctx->pc = 0x11f200u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48640u)));
    // 0x11f204: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x11f204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11f208: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11F208u;
    {
        const bool branch_taken_0x11f208 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x11F20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F208u;
            // 0x11f20c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f208) {
            ctx->pc = 0x11F228u;
            goto label_11f228;
        }
    }
    ctx->pc = 0x11F210u;
    // 0x11f210: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x11f210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x11f214: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F214u;
    {
        const bool branch_taken_0x11f214 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F214u;
            // 0x11f218: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f214) {
            ctx->pc = 0x11F22Cu;
            goto label_11f22c;
        }
    }
    ctx->pc = 0x11F21Cu;
    // 0x11f21c: 0xc04980c  jal         func_126030
    ctx->pc = 0x11F21Cu;
    SET_GPR_U32(ctx, 31, 0x11F224u);
    ctx->pc = 0x11F220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F21Cu;
            // 0x11f220: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126030u;
    if (runtime->hasFunction(0x126030u)) {
        auto targetFn = runtime->lookupFunction(0x126030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F224u; }
        if (ctx->pc != 0x11F224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitJump_0x126030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F224u; }
        if (ctx->pc != 0x11F224u) { return; }
    }
    ctx->pc = 0x11F224u;
    // 0x11f224: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11f224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f228:
    // 0x11f228: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x11f228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_11f22c:
    // 0x11f22c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x11f22cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11f230: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x11f230u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11f234: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x11f234u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11f238: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x11f238u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11f23c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x11f23cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11f240: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x11f240u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11f244: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11f244u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f248: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11f248u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f24c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11f24cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f250: 0x3e00008  jr          $ra
    ctx->pc = 0x11F250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F250u;
            // 0x11f254: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11EEDCu: goto label_11eedc;
            case 0x11EF68u: goto label_11ef68;
            case 0x11EF7Cu: goto label_11ef7c;
            case 0x11EF98u: goto label_11ef98;
            case 0x11F024u: goto label_11f024;
            case 0x11F03Cu: goto label_11f03c;
            case 0x11F04Cu: goto label_11f04c;
            case 0x11F05Cu: goto label_11f05c;
            case 0x11F090u: goto label_11f090;
            case 0x11F0B0u: goto label_11f0b0;
            case 0x11F0B4u: goto label_11f0b4;
            case 0x11F0DCu: goto label_11f0dc;
            case 0x11F128u: goto label_11f128;
            case 0x11F140u: goto label_11f140;
            case 0x11F1B0u: goto label_11f1b0;
            case 0x11F1B8u: goto label_11f1b8;
            case 0x11F1E4u: goto label_11f1e4;
            case 0x11F200u: goto label_11f200;
            case 0x11F228u: goto label_11f228;
            case 0x11F22Cu: goto label_11f22c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11F258u;
}
