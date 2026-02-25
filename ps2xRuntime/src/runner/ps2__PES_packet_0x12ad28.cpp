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
// Address: 0x12ad28 - 0x12b2d8
void ps2__PES_packet_0x12ad28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ps2__PES_packet_0x12ad28");
#endif

    ctx->pc = 0x12ad28u;

    // 0x12ad28: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x12ad28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x12ad2c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x12ad2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x12ad30: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x12ad30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x12ad34: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x12ad34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x12ad38: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x12ad38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ad3c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x12ad3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x12ad40: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x12ad40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ad44: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x12ad44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x12ad48: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x12ad48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12ad4c: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x12ad4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x12ad50: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x12ad50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x12ad54: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x12ad54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x12ad58: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x12ad58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x12ad5c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x12ad5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x12ad60: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x12ad60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x12ad64: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x12ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x12ad68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x12ad68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12ad6c: 0xae820028  sw          $v0, 0x28($s4)
    ctx->pc = 0x12ad6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
    // 0x12ad70: 0x2468f3e8  addiu       $t0, $v1, -0xC18
    ctx->pc = 0x12ad70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964200));
    // 0x12ad74: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x12ad74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x12ad78: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x12ad78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x12ad7c: 0x6906000f  ldl         $a2, 0xF($t0)
    ctx->pc = 0x12ad7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x12ad80: 0x6d060008  ldr         $a2, 0x8($t0)
    ctx->pc = 0x12ad80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x12ad84: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x12ad84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12ad88: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x12ad88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12ad8c: 0xb3a6000f  sdl         $a2, 0xF($sp)
    ctx->pc = 0x12ad8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12ad90: 0xb7a60008  sdr         $a2, 0x8($sp)
    ctx->pc = 0x12ad90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12ad94: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12AD94u;
    SET_GPR_U32(ctx, 31, 0x12AD9Cu);
    ctx->pc = 0x12AD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AD94u;
            // 0x12ad98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AD9Cu; }
        if (ctx->pc != 0x12AD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AD9Cu; }
        if (ctx->pc != 0x12AD9Cu) { return; }
    }
    ctx->pc = 0x12AD9Cu;
    // 0x12ad9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12ad9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ada0: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12ADA0u;
    SET_GPR_U32(ctx, 31, 0x12ADA8u);
    ctx->pc = 0x12ADA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12ADA0u;
            // 0x12ada4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ADA8u; }
        if (ctx->pc != 0x12ADA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ADA8u; }
        if (ctx->pc != 0x12ADA8u) { return; }
    }
    ctx->pc = 0x12ADA8u;
    // 0x12ada8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12ada8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12adac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12adacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12adb0: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x12adb0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x12adb4: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12ADB4u;
    SET_GPR_U32(ctx, 31, 0x12ADBCu);
    ctx->pc = 0x12ADB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12ADB4u;
            // 0x12adb8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ADBCu; }
        if (ctx->pc != 0x12ADBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ADBCu; }
        if (ctx->pc != 0x12ADBCu) { return; }
    }
    ctx->pc = 0x12ADBCu;
    // 0x12adbc: 0xde840000  ld          $a0, 0x0($s4)
    ctx->pc = 0x12adbcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12adc0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x12adc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12adc4: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x12adc4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x12adc8: 0x3402bc00  ori         $v0, $zero, 0xBC00
    ctx->pc = 0x12adc8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48128u)));
    // 0x12adcc: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x12adccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x12add0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x12add0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12add4: 0xfe830010  sd          $v1, 0x10($s4)
    ctx->pc = 0x12add4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 3));
    // 0x12add8: 0x10820115  beq         $a0, $v0, . + 4 + (0x115 << 2)
    ctx->pc = 0x12ADD8u;
    {
        const bool branch_taken_0x12add8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x12ADDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ADD8u;
            // 0x12addc: 0xfe830018  sd          $v1, 0x18($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12add8) {
            ctx->pc = 0x12B230u;
            goto label_12b230;
        }
    }
    ctx->pc = 0x12ADE0u;
    // 0x12ade0: 0x3402be00  ori         $v0, $zero, 0xBE00
    ctx->pc = 0x12ade0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48640u)));
    // 0x12ade4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x12ade4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x12ade8: 0x108200f5  beq         $a0, $v0, . + 4 + (0xF5 << 2)
    ctx->pc = 0x12ADE8u;
    {
        const bool branch_taken_0x12ade8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x12ade8) {
            ctx->pc = 0x12B1C0u;
            goto label_12b1c0;
        }
    }
    ctx->pc = 0x12ADF0u;
    // 0x12adf0: 0x3402bf00  ori         $v0, $zero, 0xBF00
    ctx->pc = 0x12adf0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48896u)));
    // 0x12adf4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x12adf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x12adf8: 0x108200f1  beq         $a0, $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x12ADF8u;
    {
        const bool branch_taken_0x12adf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x12adf8) {
            ctx->pc = 0x12B1C0u;
            goto label_12b1c0;
        }
    }
    ctx->pc = 0x12AE00u;
    // 0x12ae00: 0x3402f000  ori         $v0, $zero, 0xF000
    ctx->pc = 0x12ae00u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)61440u)));
    // 0x12ae04: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x12ae04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x12ae08: 0x108200ed  beq         $a0, $v0, . + 4 + (0xED << 2)
    ctx->pc = 0x12AE08u;
    {
        const bool branch_taken_0x12ae08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x12ae08) {
            ctx->pc = 0x12B1C0u;
            goto label_12b1c0;
        }
    }
    ctx->pc = 0x12AE10u;
    // 0x12ae10: 0x3402f100  ori         $v0, $zero, 0xF100
    ctx->pc = 0x12ae10u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)61696u)));
    // 0x12ae14: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x12ae14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x12ae18: 0x108200e9  beq         $a0, $v0, . + 4 + (0xE9 << 2)
    ctx->pc = 0x12AE18u;
    {
        const bool branch_taken_0x12ae18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x12ae18) {
            ctx->pc = 0x12B1C0u;
            goto label_12b1c0;
        }
    }
    ctx->pc = 0x12AE20u;
    // 0x12ae20: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x12ae20u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65280u)));
    // 0x12ae24: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x12ae24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x12ae28: 0x108200e5  beq         $a0, $v0, . + 4 + (0xE5 << 2)
    ctx->pc = 0x12AE28u;
    {
        const bool branch_taken_0x12ae28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x12ae28) {
            ctx->pc = 0x12B1C0u;
            goto label_12b1c0;
        }
    }
    ctx->pc = 0x12AE30u;
    // 0x12ae30: 0x3402f200  ori         $v0, $zero, 0xF200
    ctx->pc = 0x12ae30u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)61952u)));
    // 0x12ae34: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x12ae34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x12ae38: 0x108200e1  beq         $a0, $v0, . + 4 + (0xE1 << 2)
    ctx->pc = 0x12AE38u;
    {
        const bool branch_taken_0x12ae38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x12ae38) {
            ctx->pc = 0x12B1C0u;
            goto label_12b1c0;
        }
    }
    ctx->pc = 0x12AE40u;
    // 0x12ae40: 0x3402f800  ori         $v0, $zero, 0xF800
    ctx->pc = 0x12ae40u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)63488u)));
    // 0x12ae44: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x12ae44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x12ae48: 0x108200dd  beq         $a0, $v0, . + 4 + (0xDD << 2)
    ctx->pc = 0x12AE48u;
    {
        const bool branch_taken_0x12ae48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x12ae48) {
            ctx->pc = 0x12B1C0u;
            goto label_12b1c0;
        }
    }
    ctx->pc = 0x12AE50u;
    // 0x12ae50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12ae50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ae54: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12AE54u;
    SET_GPR_U32(ctx, 31, 0x12AE5Cu);
    ctx->pc = 0x12AE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AE54u;
            // 0x12ae58: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AE5Cu; }
        if (ctx->pc != 0x12AE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AE5Cu; }
        if (ctx->pc != 0x12AE5Cu) { return; }
    }
    ctx->pc = 0x12AE5Cu;
    // 0x12ae5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12ae5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ae60: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12AE60u;
    SET_GPR_U32(ctx, 31, 0x12AE68u);
    ctx->pc = 0x12AE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AE60u;
            // 0x12ae64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AE68u; }
        if (ctx->pc != 0x12AE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AE68u; }
        if (ctx->pc != 0x12AE68u) { return; }
    }
    ctx->pc = 0x12AE68u;
    // 0x12ae68: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x12ae68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x12ae6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12ae6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ae70: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12AE70u;
    SET_GPR_U32(ctx, 31, 0x12AE78u);
    ctx->pc = 0x12AE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AE70u;
            // 0x12ae74: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AE78u; }
        if (ctx->pc != 0x12AE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AE78u; }
        if (ctx->pc != 0x12AE78u) { return; }
    }
    ctx->pc = 0x12AE78u;
    // 0x12ae78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12ae78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ae7c: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12AE7Cu;
    SET_GPR_U32(ctx, 31, 0x12AE84u);
    ctx->pc = 0x12AE80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AE7Cu;
            // 0x12ae80: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AE84u; }
        if (ctx->pc != 0x12AE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AE84u; }
        if (ctx->pc != 0x12AE84u) { return; }
    }
    ctx->pc = 0x12AE84u;
    // 0x12ae84: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x12ae84u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ae88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12ae88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ae8c: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12AE8Cu;
    SET_GPR_U32(ctx, 31, 0x12AE94u);
    ctx->pc = 0x12AE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AE8Cu;
            // 0x12ae90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AE94u; }
        if (ctx->pc != 0x12AE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AE94u; }
        if (ctx->pc != 0x12AE94u) { return; }
    }
    ctx->pc = 0x12AE94u;
    // 0x12ae94: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x12ae94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x12ae98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12ae98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ae9c: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12AE9Cu;
    SET_GPR_U32(ctx, 31, 0x12AEA4u);
    ctx->pc = 0x12AEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AE9Cu;
            // 0x12aea0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AEA4u; }
        if (ctx->pc != 0x12AEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AEA4u; }
        if (ctx->pc != 0x12AEA4u) { return; }
    }
    ctx->pc = 0x12AEA4u;
    // 0x12aea4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x12aea4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aea8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12aea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aeac: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12AEACu;
    SET_GPR_U32(ctx, 31, 0x12AEB4u);
    ctx->pc = 0x12AEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AEACu;
            // 0x12aeb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AEB4u; }
        if (ctx->pc != 0x12AEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AEB4u; }
        if (ctx->pc != 0x12AEB4u) { return; }
    }
    ctx->pc = 0x12AEB4u;
    // 0x12aeb4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12aeb4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aeb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12aeb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aebc: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12AEBCu;
    SET_GPR_U32(ctx, 31, 0x12AEC4u);
    ctx->pc = 0x12AEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AEBCu;
            // 0x12aec0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AEC4u; }
        if (ctx->pc != 0x12AEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AEC4u; }
        if (ctx->pc != 0x12AEC4u) { return; }
    }
    ctx->pc = 0x12AEC4u;
    // 0x12aec4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12aec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x12aec8: 0x32e30002  andi        $v1, $s7, 0x2
    ctx->pc = 0x12aec8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 23), _mm_cvtsi32_si128((int)2u)));
    // 0x12aecc: 0xde620018  ld          $v0, 0x18($s3)
    ctx->pc = 0x12aeccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x12aed0: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x12aed0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12aed4: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x12aed4u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x12aed8: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x12AED8u;
    {
        const bool branch_taken_0x12aed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AED8u;
            // 0x12aedc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aed8) {
            ctx->pc = 0x12AF64u;
            goto label_12af64;
        }
    }
    ctx->pc = 0x12AEE0u;
    // 0x12aee0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12aee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aee4: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12AEE4u;
    SET_GPR_U32(ctx, 31, 0x12AEECu);
    ctx->pc = 0x12AEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AEE4u;
            // 0x12aee8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AEECu; }
        if (ctx->pc != 0x12AEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AEECu; }
        if (ctx->pc != 0x12AEECu) { return; }
    }
    ctx->pc = 0x12AEECu;
    // 0x12aeec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12aeecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aef0: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12AEF0u;
    SET_GPR_U32(ctx, 31, 0x12AEF8u);
    ctx->pc = 0x12AEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AEF0u;
            // 0x12aef4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AEF8u; }
        if (ctx->pc != 0x12AEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AEF8u; }
        if (ctx->pc != 0x12AEF8u) { return; }
    }
    ctx->pc = 0x12AEF8u;
    // 0x12aef8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12aef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aefc: 0xc04a900  jal         func_12A400
    ctx->pc = 0x12AEFCu;
    SET_GPR_U32(ctx, 31, 0x12AF04u);
    ctx->pc = 0x12AF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AEFCu;
            // 0x12af00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A400u;
    if (runtime->hasFunction(0x12A400u)) {
        auto targetFn = runtime->lookupFunction(0x12A400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AF04u; }
        if (ctx->pc != 0x12AF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x12a400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AF04u; }
        if (ctx->pc != 0x12AF04u) { return; }
    }
    ctx->pc = 0x12AF04u;
    // 0x12af04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12af04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12af08: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12AF08u;
    SET_GPR_U32(ctx, 31, 0x12AF10u);
    ctx->pc = 0x12AF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AF08u;
            // 0x12af0c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AF10u; }
        if (ctx->pc != 0x12AF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AF10u; }
        if (ctx->pc != 0x12AF10u) { return; }
    }
    ctx->pc = 0x12AF10u;
    // 0x12af10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12af10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12af14: 0xc04a900  jal         func_12A400
    ctx->pc = 0x12AF14u;
    SET_GPR_U32(ctx, 31, 0x12AF1Cu);
    ctx->pc = 0x12AF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AF14u;
            // 0x12af18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A400u;
    if (runtime->hasFunction(0x12A400u)) {
        auto targetFn = runtime->lookupFunction(0x12A400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AF1Cu; }
        if (ctx->pc != 0x12AF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x12a400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AF1Cu; }
        if (ctx->pc != 0x12AF1Cu) { return; }
    }
    ctx->pc = 0x12AF1Cu;
    // 0x12af1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12af1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12af20: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12AF20u;
    SET_GPR_U32(ctx, 31, 0x12AF28u);
    ctx->pc = 0x12AF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AF20u;
            // 0x12af24: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AF28u; }
        if (ctx->pc != 0x12AF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AF28u; }
        if (ctx->pc != 0x12AF28u) { return; }
    }
    ctx->pc = 0x12AF28u;
    // 0x12af28: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12af28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12af2c: 0xc04a900  jal         func_12A400
    ctx->pc = 0x12AF2Cu;
    SET_GPR_U32(ctx, 31, 0x12AF34u);
    ctx->pc = 0x12AF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AF2Cu;
            // 0x12af30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A400u;
    if (runtime->hasFunction(0x12A400u)) {
        auto targetFn = runtime->lookupFunction(0x12A400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AF34u; }
        if (ctx->pc != 0x12AF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x12a400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AF34u; }
        if (ctx->pc != 0x12AF34u) { return; }
    }
    ctx->pc = 0x12AF34u;
    // 0x12af34: 0x101780  sll         $v0, $s0, 30
    ctx->pc = 0x12af34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 30));
    // 0x12af38: 0x118bc0  sll         $s1, $s1, 15
    ctx->pc = 0x12af38u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 15));
    // 0x12af3c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x12af3cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 17)));
    // 0x12af40: 0x108082  srl         $s0, $s0, 2
    ctx->pc = 0x12af40u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x12af44: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x12af44u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 18)));
    // 0x12af48: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x12af48u;
    SET_GPR_VEC(ctx, 16, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)1u)));
    // 0x12af4c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12af4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12af50: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x12af50u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x12af54: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x12af54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x12af58: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x12af58u;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 16), GPR_VEC(ctx, 2)));
    // 0x12af5c: 0xfe900010  sd          $s0, 0x10($s4)
    ctx->pc = 0x12af5cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 16));
    // 0x12af60: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x12af60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_12af64:
    // 0x12af64: 0x16e20022  bne         $s7, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x12AF64u;
    {
        const bool branch_taken_0x12af64 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x12AF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AF64u;
            // 0x12af68: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af64) {
            ctx->pc = 0x12AFF0u;
            goto label_12aff0;
        }
    }
    ctx->pc = 0x12AF6Cu;
    // 0x12af6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12af6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12af70: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12AF70u;
    SET_GPR_U32(ctx, 31, 0x12AF78u);
    ctx->pc = 0x12AF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AF70u;
            // 0x12af74: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AF78u; }
        if (ctx->pc != 0x12AF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AF78u; }
        if (ctx->pc != 0x12AF78u) { return; }
    }
    ctx->pc = 0x12AF78u;
    // 0x12af78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12af78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12af7c: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12AF7Cu;
    SET_GPR_U32(ctx, 31, 0x12AF84u);
    ctx->pc = 0x12AF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AF7Cu;
            // 0x12af80: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AF84u; }
        if (ctx->pc != 0x12AF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AF84u; }
        if (ctx->pc != 0x12AF84u) { return; }
    }
    ctx->pc = 0x12AF84u;
    // 0x12af84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12af84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12af88: 0xc04a900  jal         func_12A400
    ctx->pc = 0x12AF88u;
    SET_GPR_U32(ctx, 31, 0x12AF90u);
    ctx->pc = 0x12AF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AF88u;
            // 0x12af8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A400u;
    if (runtime->hasFunction(0x12A400u)) {
        auto targetFn = runtime->lookupFunction(0x12A400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AF90u; }
        if (ctx->pc != 0x12AF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x12a400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AF90u; }
        if (ctx->pc != 0x12AF90u) { return; }
    }
    ctx->pc = 0x12AF90u;
    // 0x12af90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12af90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12af94: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12AF94u;
    SET_GPR_U32(ctx, 31, 0x12AF9Cu);
    ctx->pc = 0x12AF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AF94u;
            // 0x12af98: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AF9Cu; }
        if (ctx->pc != 0x12AF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AF9Cu; }
        if (ctx->pc != 0x12AF9Cu) { return; }
    }
    ctx->pc = 0x12AF9Cu;
    // 0x12af9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12af9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12afa0: 0xc04a900  jal         func_12A400
    ctx->pc = 0x12AFA0u;
    SET_GPR_U32(ctx, 31, 0x12AFA8u);
    ctx->pc = 0x12AFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AFA0u;
            // 0x12afa4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A400u;
    if (runtime->hasFunction(0x12A400u)) {
        auto targetFn = runtime->lookupFunction(0x12A400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AFA8u; }
        if (ctx->pc != 0x12AFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x12a400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AFA8u; }
        if (ctx->pc != 0x12AFA8u) { return; }
    }
    ctx->pc = 0x12AFA8u;
    // 0x12afa8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12afa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12afac: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12AFACu;
    SET_GPR_U32(ctx, 31, 0x12AFB4u);
    ctx->pc = 0x12AFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AFACu;
            // 0x12afb0: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AFB4u; }
        if (ctx->pc != 0x12AFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AFB4u; }
        if (ctx->pc != 0x12AFB4u) { return; }
    }
    ctx->pc = 0x12AFB4u;
    // 0x12afb4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12afb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12afb8: 0xc04a900  jal         func_12A400
    ctx->pc = 0x12AFB8u;
    SET_GPR_U32(ctx, 31, 0x12AFC0u);
    ctx->pc = 0x12AFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AFB8u;
            // 0x12afbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A400u;
    if (runtime->hasFunction(0x12A400u)) {
        auto targetFn = runtime->lookupFunction(0x12A400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AFC0u; }
        if (ctx->pc != 0x12AFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x12a400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AFC0u; }
        if (ctx->pc != 0x12AFC0u) { return; }
    }
    ctx->pc = 0x12AFC0u;
    // 0x12afc0: 0x101780  sll         $v0, $s0, 30
    ctx->pc = 0x12afc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 30));
    // 0x12afc4: 0x118bc0  sll         $s1, $s1, 15
    ctx->pc = 0x12afc4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 15));
    // 0x12afc8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x12afc8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 17)));
    // 0x12afcc: 0x108082  srl         $s0, $s0, 2
    ctx->pc = 0x12afccu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x12afd0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x12afd0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 18)));
    // 0x12afd4: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x12afd4u;
    SET_GPR_VEC(ctx, 16, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)1u)));
    // 0x12afd8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12afd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12afdc: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x12afdcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x12afe0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x12afe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x12afe4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x12afe4u;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 16), GPR_VEC(ctx, 2)));
    // 0x12afe8: 0xfe900018  sd          $s0, 0x18($s4)
    ctx->pc = 0x12afe8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 16));
    // 0x12afec: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12afecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12aff0:
    // 0x12aff0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x12aff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12aff4: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12AFF4u;
    {
        const bool branch_taken_0x12aff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x12AFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AFF4u;
            // 0x12aff8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aff4) {
            ctx->pc = 0x12B004u;
            goto label_12b004;
        }
    }
    ctx->pc = 0x12AFFCu;
    // 0x12affc: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12AFFCu;
    SET_GPR_U32(ctx, 31, 0x12B004u);
    ctx->pc = 0x12B000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AFFCu;
            // 0x12b000: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B004u; }
        if (ctx->pc != 0x12B004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B004u; }
        if (ctx->pc != 0x12B004u) { return; }
    }
    ctx->pc = 0x12B004u;
label_12b004:
    // 0x12b004: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B004u;
    {
        const bool branch_taken_0x12b004 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B004u;
            // 0x12b008: 0x3be1021  addu        $v0, $sp, $fp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b004) {
            ctx->pc = 0x12B018u;
            goto label_12b018;
        }
    }
    ctx->pc = 0x12B00Cu;
    // 0x12b00c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12b00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b010: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12B010u;
    SET_GPR_U32(ctx, 31, 0x12B018u);
    ctx->pc = 0x12B014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B010u;
            // 0x12b014: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B018u; }
        if (ctx->pc != 0x12B018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B018u; }
        if (ctx->pc != 0x12B018u) { return; }
    }
    ctx->pc = 0x12B018u;
label_12b018:
    // 0x12b018: 0x16b00045  bne         $s5, $s0, . + 4 + (0x45 << 2)
    ctx->pc = 0x12B018u;
    {
        const bool branch_taken_0x12b018 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 16));
        ctx->pc = 0x12B01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B018u;
            // 0x12b01c: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b018) {
            ctx->pc = 0x12B130u;
            goto label_12b130;
        }
    }
    ctx->pc = 0x12B020u;
    // 0x12b020: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12b020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b024: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12B024u;
    SET_GPR_U32(ctx, 31, 0x12B02Cu);
    ctx->pc = 0x12B028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B024u;
            // 0x12b028: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B02Cu; }
        if (ctx->pc != 0x12B02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B02Cu; }
        if (ctx->pc != 0x12B02Cu) { return; }
    }
    ctx->pc = 0x12B02Cu;
    // 0x12b02c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12b02cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b030: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12b030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b034: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12B034u;
    SET_GPR_U32(ctx, 31, 0x12B03Cu);
    ctx->pc = 0x12B038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B034u;
            // 0x12b038: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B03Cu; }
        if (ctx->pc != 0x12B03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B03Cu; }
        if (ctx->pc != 0x12B03Cu) { return; }
    }
    ctx->pc = 0x12B03Cu;
    // 0x12b03c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x12b03cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b040: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12b040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b044: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12B044u;
    SET_GPR_U32(ctx, 31, 0x12B04Cu);
    ctx->pc = 0x12B048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B044u;
            // 0x12b048: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B04Cu; }
        if (ctx->pc != 0x12B04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B04Cu; }
        if (ctx->pc != 0x12B04Cu) { return; }
    }
    ctx->pc = 0x12B04Cu;
    // 0x12b04c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12b04cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b050: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12b050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b054: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12B054u;
    SET_GPR_U32(ctx, 31, 0x12B05Cu);
    ctx->pc = 0x12B058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B054u;
            // 0x12b058: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B05Cu; }
        if (ctx->pc != 0x12B05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B05Cu; }
        if (ctx->pc != 0x12B05Cu) { return; }
    }
    ctx->pc = 0x12B05Cu;
    // 0x12b05c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x12b05cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b060: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12b060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b064: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12B064u;
    SET_GPR_U32(ctx, 31, 0x12B06Cu);
    ctx->pc = 0x12B068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B064u;
            // 0x12b068: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B06Cu; }
        if (ctx->pc != 0x12B06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B06Cu; }
        if (ctx->pc != 0x12B06Cu) { return; }
    }
    ctx->pc = 0x12B06Cu;
    // 0x12b06c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12b06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b070: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12B070u;
    SET_GPR_U32(ctx, 31, 0x12B078u);
    ctx->pc = 0x12B074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B070u;
            // 0x12b074: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B078u; }
        if (ctx->pc != 0x12B078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B078u; }
        if (ctx->pc != 0x12B078u) { return; }
    }
    ctx->pc = 0x12B078u;
    // 0x12b078: 0x1615000a  bne         $s0, $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x12B078u;
    {
        const bool branch_taken_0x12b078 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        ctx->pc = 0x12B07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B078u;
            // 0x12b07c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b078) {
            ctx->pc = 0x12B0A4u;
            goto label_12b0a4;
        }
    }
    ctx->pc = 0x12B080u;
    // 0x12b080: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12b080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b084: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12B084u;
    SET_GPR_U32(ctx, 31, 0x12B08Cu);
    ctx->pc = 0x12B088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B084u;
            // 0x12b088: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B08Cu; }
        if (ctx->pc != 0x12B08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B08Cu; }
        if (ctx->pc != 0x12B08Cu) { return; }
    }
    ctx->pc = 0x12B08Cu;
    // 0x12b08c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12b08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b090: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12B090u;
    SET_GPR_U32(ctx, 31, 0x12B098u);
    ctx->pc = 0x12B094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B090u;
            // 0x12b094: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B098u; }
        if (ctx->pc != 0x12B098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B098u; }
        if (ctx->pc != 0x12B098u) { return; }
    }
    ctx->pc = 0x12B098u;
    // 0x12b098: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12b098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b09c: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12B09Cu;
    SET_GPR_U32(ctx, 31, 0x12B0A4u);
    ctx->pc = 0x12B0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B09Cu;
            // 0x12b0a0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B0A4u; }
        if (ctx->pc != 0x12B0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B0A4u; }
        if (ctx->pc != 0x12B0A4u) { return; }
    }
    ctx->pc = 0x12B0A4u;
label_12b0a4:
    // 0x12b0a4: 0x17d50006  bne         $fp, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x12B0A4u;
    {
        const bool branch_taken_0x12b0a4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 21));
        ctx->pc = 0x12B0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B0A4u;
            // 0x12b0a8: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b0a4) {
            ctx->pc = 0x12B0C0u;
            goto label_12b0c0;
        }
    }
    ctx->pc = 0x12B0ACu;
    // 0x12b0ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12b0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b0b0: 0xc04b01e  jal         func_12C078
    ctx->pc = 0x12B0B0u;
    SET_GPR_U32(ctx, 31, 0x12B0B8u);
    ctx->pc = 0x12B0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B0B0u;
            // 0x12b0b4: 0x24a5f3f8  addiu       $a1, $a1, -0xC08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C078u;
    if (runtime->hasFunction(0x12C078u)) {
        auto targetFn = runtime->lookupFunction(0x12C078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B0B8u; }
        if (ctx->pc != 0x12B0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x12c078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B0B8u; }
        if (ctx->pc != 0x12B0B8u) { return; }
    }
    ctx->pc = 0x12B0B8u;
    // 0x12b0b8: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x12B0B8u;
    {
        const bool branch_taken_0x12b0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B0B8u;
            // 0x12b0bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b0b8) {
            ctx->pc = 0x12B2A8u;
            goto label_12b2a8;
        }
    }
    ctx->pc = 0x12B0C0u;
label_12b0c0:
    // 0x12b0c0: 0x16550003  bne         $s2, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B0C0u;
    {
        const bool branch_taken_0x12b0c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        ctx->pc = 0x12B0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B0C0u;
            // 0x12b0c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b0c0) {
            ctx->pc = 0x12B0D0u;
            goto label_12b0d0;
        }
    }
    ctx->pc = 0x12B0C8u;
    // 0x12b0c8: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12B0C8u;
    SET_GPR_U32(ctx, 31, 0x12B0D0u);
    ctx->pc = 0x12B0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B0C8u;
            // 0x12b0cc: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B0D0u; }
        if (ctx->pc != 0x12B0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B0D0u; }
        if (ctx->pc != 0x12B0D0u) { return; }
    }
    ctx->pc = 0x12B0D0u;
label_12b0d0:
    // 0x12b0d0: 0x16f50003  bne         $s7, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B0D0u;
    {
        const bool branch_taken_0x12b0d0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 21));
        ctx->pc = 0x12B0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B0D0u;
            // 0x12b0d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b0d0) {
            ctx->pc = 0x12B0E0u;
            goto label_12b0e0;
        }
    }
    ctx->pc = 0x12B0D8u;
    // 0x12b0d8: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12B0D8u;
    SET_GPR_U32(ctx, 31, 0x12B0E0u);
    ctx->pc = 0x12B0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B0D8u;
            // 0x12b0dc: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B0E0u; }
        if (ctx->pc != 0x12B0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B0E0u; }
        if (ctx->pc != 0x12B0E0u) { return; }
    }
    ctx->pc = 0x12B0E0u;
label_12b0e0:
    // 0x12b0e0: 0x16350013  bne         $s1, $s5, . + 4 + (0x13 << 2)
    ctx->pc = 0x12B0E0u;
    {
        const bool branch_taken_0x12b0e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x12B0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B0E0u;
            // 0x12b0e4: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b0e0) {
            ctx->pc = 0x12B130u;
            goto label_12b130;
        }
    }
    ctx->pc = 0x12B0E8u;
    // 0x12b0e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12b0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b0ec: 0xc04a900  jal         func_12A400
    ctx->pc = 0x12B0ECu;
    SET_GPR_U32(ctx, 31, 0x12B0F4u);
    ctx->pc = 0x12B0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B0ECu;
            // 0x12b0f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A400u;
    if (runtime->hasFunction(0x12A400u)) {
        auto targetFn = runtime->lookupFunction(0x12A400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B0F4u; }
        if (ctx->pc != 0x12B0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x12a400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B0F4u; }
        if (ctx->pc != 0x12B0F4u) { return; }
    }
    ctx->pc = 0x12B0F4u;
    // 0x12b0f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12b0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b0f8: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12B0F8u;
    SET_GPR_U32(ctx, 31, 0x12B100u);
    ctx->pc = 0x12B0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B0F8u;
            // 0x12b0fc: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B100u; }
        if (ctx->pc != 0x12B100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B100u; }
        if (ctx->pc != 0x12B100u) { return; }
    }
    ctx->pc = 0x12B100u;
    // 0x12b100: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12b100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b104: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x12B104u;
    {
        const bool branch_taken_0x12b104 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B104u;
            // 0x12b108: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b104) {
            ctx->pc = 0x12B130u;
            goto label_12b130;
        }
    }
    ctx->pc = 0x12B10Cu;
    // 0x12b10c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12b10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12b110:
    // 0x12b110: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12B110u;
    SET_GPR_U32(ctx, 31, 0x12B118u);
    ctx->pc = 0x12B114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B110u;
            // 0x12b114: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B118u; }
        if (ctx->pc != 0x12B118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B118u; }
        if (ctx->pc != 0x12B118u) { return; }
    }
    ctx->pc = 0x12B118u;
    // 0x12b118: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x12b118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x12b11c: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x12b11cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x12b120: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12B120u;
    {
        const bool branch_taken_0x12b120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B120u;
            // 0x12b124: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b120) {
            ctx->pc = 0x12B110u;
            goto label_12b110;
        }
    }
    ctx->pc = 0x12B128u;
    // 0x12b128: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12B128u;
    {
        const bool branch_taken_0x12b128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B128u;
            // 0x12b12c: 0xde620018  ld          $v0, 0x18($s3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b128) {
            ctx->pc = 0x12B134u;
            goto label_12b134;
        }
    }
    ctx->pc = 0x12B130u;
label_12b130:
    // 0x12b130: 0xde620018  ld          $v0, 0x18($s3)
    ctx->pc = 0x12b130u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
label_12b134:
    // 0x12b134: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b138: 0x52102f  dsubu       $v0, $v0, $s2
    ctx->pc = 0x12b138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 18));
    // 0x12b13c: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x12b13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x12b140: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12b140u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12b144: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x12b144u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12b148: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B148u;
    {
        const bool branch_taken_0x12b148 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b148) {
            ctx->pc = 0x12B14Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12B148u;
            // 0x12b14c: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12B15Cu;
            goto label_12b15c;
        }
    }
    ctx->pc = 0x12B150u;
    // 0x12b150: 0xc04a912  jal         func_12A448
    ctx->pc = 0x12B150u;
    SET_GPR_U32(ctx, 31, 0x12B158u);
    ctx->pc = 0x12B154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B150u;
            // 0x12b154: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A448u;
    if (runtime->hasFunction(0x12A448u)) {
        auto targetFn = runtime->lookupFunction(0x12A448u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B158u; }
        if (ctx->pc != 0x12B158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitJump_0x12a448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B158u; }
        if (ctx->pc != 0x12B158u) { return; }
    }
    ctx->pc = 0x12B158u;
    // 0x12b158: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x12b158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12b15c:
    // 0x12b15c: 0x3404bd00  ori         $a0, $zero, 0xBD00
    ctx->pc = 0x12b15cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48384u)));
    // 0x12b160: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x12b160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x12b164: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x12b164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x12b168: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x12b168u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12b16c: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x12b16cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x12b170: 0x2605fffd  addiu       $a1, $s0, -0x3
    ctx->pc = 0x12b170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
    // 0x12b174: 0xae850024  sw          $a1, 0x24($s4)
    ctx->pc = 0x12b174u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 5));
    // 0x12b178: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x12b178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x12b17c: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x12B17Cu;
    {
        const bool branch_taken_0x12b17c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x12B180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B17Cu;
            // 0x12b180: 0xae820020  sw          $v0, 0x20($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b17c) {
            ctx->pc = 0x12B1A8u;
            goto label_12b1a8;
        }
    }
    ctx->pc = 0x12B184u;
    // 0x12b184: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12b184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b188: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12B188u;
    SET_GPR_U32(ctx, 31, 0x12B190u);
    ctx->pc = 0x12B18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B188u;
            // 0x12b18c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B190u; }
        if (ctx->pc != 0x12B190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B190u; }
        if (ctx->pc != 0x12B190u) { return; }
    }
    ctx->pc = 0x12B190u;
    // 0x12b190: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x12b190u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12b194: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12b194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12b198: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x12b198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x12b19c: 0x2605fff9  addiu       $a1, $s0, -0x7
    ctx->pc = 0x12b19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967289));
    // 0x12b1a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12b1a0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x12b1a4: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x12b1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_12b1a8:
    // 0x12b1a8: 0x10a0003f  beqz        $a1, . + 4 + (0x3F << 2)
    ctx->pc = 0x12B1A8u;
    {
        const bool branch_taken_0x12b1a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B1A8u;
            // 0x12b1ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b1a8) {
            ctx->pc = 0x12B2A8u;
            goto label_12b2a8;
        }
    }
    ctx->pc = 0x12B1B0u;
    // 0x12b1b0: 0xc04a912  jal         func_12A448
    ctx->pc = 0x12B1B0u;
    SET_GPR_U32(ctx, 31, 0x12B1B8u);
    ctx->pc = 0x12B1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B1B0u;
            // 0x12b1b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A448u;
    if (runtime->hasFunction(0x12A448u)) {
        auto targetFn = runtime->lookupFunction(0x12A448u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B1B8u; }
        if (ctx->pc != 0x12B1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitJump_0x12a448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B1B8u; }
        if (ctx->pc != 0x12B1B8u) { return; }
    }
    ctx->pc = 0x12B1B8u;
    // 0x12b1b8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x12B1B8u;
    {
        const bool branch_taken_0x12b1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B1B8u;
            // 0x12b1bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b1b8) {
            ctx->pc = 0x12B2A8u;
            goto label_12b2a8;
        }
    }
    ctx->pc = 0x12B1C0u;
label_12b1c0:
    // 0x12b1c0: 0x3402bc00  ori         $v0, $zero, 0xBC00
    ctx->pc = 0x12b1c0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48128u)));
    // 0x12b1c4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x12b1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x12b1c8: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x12B1C8u;
    {
        const bool branch_taken_0x12b1c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x12b1c8) {
            ctx->pc = 0x12B230u;
            goto label_12b230;
        }
    }
    ctx->pc = 0x12B1D0u;
    // 0x12b1d0: 0x3402bf00  ori         $v0, $zero, 0xBF00
    ctx->pc = 0x12b1d0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48896u)));
    // 0x12b1d4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x12b1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x12b1d8: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x12B1D8u;
    {
        const bool branch_taken_0x12b1d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x12b1d8) {
            ctx->pc = 0x12B238u;
            goto label_12b238;
        }
    }
    ctx->pc = 0x12B1E0u;
    // 0x12b1e0: 0x3402f000  ori         $v0, $zero, 0xF000
    ctx->pc = 0x12b1e0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)61440u)));
    // 0x12b1e4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x12b1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x12b1e8: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12B1E8u;
    {
        const bool branch_taken_0x12b1e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x12b1e8) {
            ctx->pc = 0x12B230u;
            goto label_12b230;
        }
    }
    ctx->pc = 0x12B1F0u;
    // 0x12b1f0: 0x3402f100  ori         $v0, $zero, 0xF100
    ctx->pc = 0x12b1f0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)61696u)));
    // 0x12b1f4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x12b1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x12b1f8: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x12B1F8u;
    {
        const bool branch_taken_0x12b1f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x12b1f8) {
            ctx->pc = 0x12B230u;
            goto label_12b230;
        }
    }
    ctx->pc = 0x12B200u;
    // 0x12b200: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x12b200u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65280u)));
    // 0x12b204: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x12b204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x12b208: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12B208u;
    {
        const bool branch_taken_0x12b208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x12b208) {
            ctx->pc = 0x12B230u;
            goto label_12b230;
        }
    }
    ctx->pc = 0x12B210u;
    // 0x12b210: 0x3402f200  ori         $v0, $zero, 0xF200
    ctx->pc = 0x12b210u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)61952u)));
    // 0x12b214: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x12b214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x12b218: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B218u;
    {
        const bool branch_taken_0x12b218 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x12b218) {
            ctx->pc = 0x12B230u;
            goto label_12b230;
        }
    }
    ctx->pc = 0x12B220u;
    // 0x12b220: 0x3402f800  ori         $v0, $zero, 0xF800
    ctx->pc = 0x12b220u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)63488u)));
    // 0x12b224: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x12b224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x12b228: 0x14820015  bne         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x12B228u;
    {
        const bool branch_taken_0x12b228 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x12b228) {
            ctx->pc = 0x12B280u;
            goto label_12b280;
        }
    }
    ctx->pc = 0x12B230u;
label_12b230:
    // 0x12b230: 0x3402bf00  ori         $v0, $zero, 0xBF00
    ctx->pc = 0x12b230u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48896u)));
    // 0x12b234: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x12b234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_12b238:
    // 0x12b238: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12B238u;
    {
        const bool branch_taken_0x12b238 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x12B23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B238u;
            // 0x12b23c: 0x8e900008  lw          $s0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b238) {
            ctx->pc = 0x12B264u;
            goto label_12b264;
        }
    }
    ctx->pc = 0x12B240u;
    // 0x12b240: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12b240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b244: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12B244u;
    SET_GPR_U32(ctx, 31, 0x12B24Cu);
    ctx->pc = 0x12B248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B244u;
            // 0x12b248: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B24Cu; }
        if (ctx->pc != 0x12B24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B24Cu; }
        if (ctx->pc != 0x12B24Cu) { return; }
    }
    ctx->pc = 0x12B24Cu;
    // 0x12b24c: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x12b24cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x12b250: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x12b250u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12b254: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12b254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12b258: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x12b258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x12b25c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12b25cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x12b260: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x12b260u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_12b264:
    // 0x12b264: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x12B264u;
    {
        const bool branch_taken_0x12b264 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B264u;
            // 0x12b268: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b264) {
            ctx->pc = 0x12B2A8u;
            goto label_12b2a8;
        }
    }
    ctx->pc = 0x12B26Cu;
    // 0x12b26c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12b26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b270: 0xc04a912  jal         func_12A448
    ctx->pc = 0x12B270u;
    SET_GPR_U32(ctx, 31, 0x12B278u);
    ctx->pc = 0x12B274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B270u;
            // 0x12b274: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A448u;
    if (runtime->hasFunction(0x12A448u)) {
        auto targetFn = runtime->lookupFunction(0x12A448u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B278u; }
        if (ctx->pc != 0x12B278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitJump_0x12a448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B278u; }
        if (ctx->pc != 0x12B278u) { return; }
    }
    ctx->pc = 0x12B278u;
    // 0x12b278: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12B278u;
    {
        const bool branch_taken_0x12b278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B278u;
            // 0x12b27c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b278) {
            ctx->pc = 0x12B2A8u;
            goto label_12b2a8;
        }
    }
    ctx->pc = 0x12B280u;
label_12b280:
    // 0x12b280: 0x3402be00  ori         $v0, $zero, 0xBE00
    ctx->pc = 0x12b280u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48640u)));
    // 0x12b284: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x12b284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x12b288: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12B288u;
    {
        const bool branch_taken_0x12b288 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x12B28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B288u;
            // 0x12b28c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b288) {
            ctx->pc = 0x12B2A8u;
            goto label_12b2a8;
        }
    }
    ctx->pc = 0x12B290u;
    // 0x12b290: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x12b290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x12b294: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B294u;
    {
        const bool branch_taken_0x12b294 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B294u;
            // 0x12b298: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b294) {
            ctx->pc = 0x12B2ACu;
            goto label_12b2ac;
        }
    }
    ctx->pc = 0x12B29Cu;
    // 0x12b29c: 0xc04a912  jal         func_12A448
    ctx->pc = 0x12B29Cu;
    SET_GPR_U32(ctx, 31, 0x12B2A4u);
    ctx->pc = 0x12B2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B29Cu;
            // 0x12b2a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A448u;
    if (runtime->hasFunction(0x12A448u)) {
        auto targetFn = runtime->lookupFunction(0x12A448u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B2A4u; }
        if (ctx->pc != 0x12B2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitJump_0x12a448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B2A4u; }
        if (ctx->pc != 0x12B2A4u) { return; }
    }
    ctx->pc = 0x12B2A4u;
    // 0x12b2a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12b2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12b2a8:
    // 0x12b2a8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x12b2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_12b2ac:
    // 0x12b2ac: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x12b2acu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12b2b0: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x12b2b0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12b2b4: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x12b2b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12b2b8: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x12b2b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12b2bc: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x12b2bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12b2c0: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x12b2c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12b2c4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x12b2c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12b2c8: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x12b2c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b2cc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x12b2ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x12B2D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B2D0u;
            // 0x12b2d4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12AF64u: goto label_12af64;
            case 0x12AFF0u: goto label_12aff0;
            case 0x12B004u: goto label_12b004;
            case 0x12B018u: goto label_12b018;
            case 0x12B0A4u: goto label_12b0a4;
            case 0x12B0C0u: goto label_12b0c0;
            case 0x12B0D0u: goto label_12b0d0;
            case 0x12B0E0u: goto label_12b0e0;
            case 0x12B110u: goto label_12b110;
            case 0x12B130u: goto label_12b130;
            case 0x12B134u: goto label_12b134;
            case 0x12B15Cu: goto label_12b15c;
            case 0x12B1A8u: goto label_12b1a8;
            case 0x12B1C0u: goto label_12b1c0;
            case 0x12B230u: goto label_12b230;
            case 0x12B238u: goto label_12b238;
            case 0x12B264u: goto label_12b264;
            case 0x12B280u: goto label_12b280;
            case 0x12B2A8u: goto label_12b2a8;
            case 0x12B2ACu: goto label_12b2ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12B2D8u;
}
