#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: drawRectangle
// Address: 0x107e00 - 0x107f60
void drawRectangle_0x107e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("drawRectangle_0x107e00");
#endif

    ctx->pc = 0x107e00u;

    // 0x107e00: 0x8f9882b8  lw          $t8, -0x7D48($gp)
    ctx->pc = 0x107e00u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x107e04: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x107e04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x107e08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x107e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x107e0c: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x107e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x107e10: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x107e10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x107e14: 0x35080003  ori         $t0, $t0, 0x3
    ctx->pc = 0x107e14u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)3u)));
    // 0x107e18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x107e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x107e1c: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x107e1cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x107e20: 0x7f030000  sq          $v1, 0x0($t8)
    ctx->pc = 0x107e20u;
    WRITE128(ADD32(GPR_U32(ctx, 24), 0), GPR_VEC(ctx, 3));
    // 0x107e24: 0x24100dc0  addiu       $s0, $zero, 0xDC0
    ctx->pc = 0x107e24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3520));
    // 0x107e28: 0xff080010  sd          $t0, 0x10($t8)
    ctx->pc = 0x107e28u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 16), GPR_U64(ctx, 8));
    // 0x107e2c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x107e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x107e30: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x107e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x107e34: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x107e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x107e38: 0x3c097f00  lui         $t1, 0x7F00
    ctx->pc = 0x107e38u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32512 << 16));
    // 0x107e3c: 0x352900ff  ori         $t1, $t1, 0xFF
    ctx->pc = 0x107e3cu;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 9), _mm_cvtsi32_si128((int)255u)));
    // 0x107e40: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x107e40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107e44: 0x240d0047  addiu       $t5, $zero, 0x47
    ctx->pc = 0x107e44u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x107e48: 0x3c0e2000  lui         $t6, 0x2000
    ctx->pc = 0x107e48u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)8192 << 16));
    // 0x107e4c: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x107e4cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x107e50: 0x35ce8001  ori         $t6, $t6, 0x8001
    ctx->pc = 0x107e50u;
    SET_GPR_VEC(ctx, 14, PS2_POR(GPR_VEC(ctx, 14), _mm_cvtsi32_si128((int)32769u)));
    // 0x107e54: 0x240f0044  addiu       $t7, $zero, 0x44
    ctx->pc = 0x107e54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x107e58: 0xaf020000  sw          $v0, 0x0($t8)
    ctx->pc = 0x107e58u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
    // 0x107e5c: 0xff050018  sd          $a1, 0x18($t8)
    ctx->pc = 0x107e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 24), GPR_U64(ctx, 5));
    // 0x107e60: 0x2408007f  addiu       $t0, $zero, 0x7F
    ctx->pc = 0x107e60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x107e64: 0xff060020  sd          $a2, 0x20($t8)
    ctx->pc = 0x107e64u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 32), GPR_U64(ctx, 6));
    // 0x107e68: 0x27070060  addiu       $a3, $t8, 0x60
    ctx->pc = 0x107e68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 24), 96));
    // 0x107e6c: 0xff090030  sd          $t1, 0x30($t8)
    ctx->pc = 0x107e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 48), GPR_U64(ctx, 9));
    // 0x107e70: 0x240b09c0  addiu       $t3, $zero, 0x9C0
    ctx->pc = 0x107e70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2496));
    // 0x107e74: 0xff0a0038  sd          $t2, 0x38($t8)
    ctx->pc = 0x107e74u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 56), GPR_U64(ctx, 10));
    // 0x107e78: 0x240c1a40  addiu       $t4, $zero, 0x1A40
    ctx->pc = 0x107e78u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 6720));
    // 0x107e7c: 0xaf100060  sw          $s0, 0x60($t8)
    ctx->pc = 0x107e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 96), GPR_U32(ctx, 16));
    // 0x107e80: 0x27020070  addiu       $v0, $t8, 0x70
    ctx->pc = 0x107e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), 112));
    // 0x107e84: 0xff0d0048  sd          $t5, 0x48($t8)
    ctx->pc = 0x107e84u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 72), GPR_U64(ctx, 13));
    // 0x107e88: 0x27050080  addiu       $a1, $t8, 0x80
    ctx->pc = 0x107e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), 128));
    // 0x107e8c: 0xff0e0050  sd          $t6, 0x50($t8)
    ctx->pc = 0x107e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 80), GPR_U64(ctx, 14));
    // 0x107e90: 0x24091640  addiu       $t1, $zero, 0x1640
    ctx->pc = 0x107e90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5696));
    // 0x107e94: 0xff0f0058  sd          $t7, 0x58($t8)
    ctx->pc = 0x107e94u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 88), GPR_U64(ctx, 15));
    // 0x107e98: 0x27060090  addiu       $a2, $t8, 0x90
    ctx->pc = 0x107e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 24), 144));
    // 0x107e9c: 0xff000028  sd          $zero, 0x28($t8)
    ctx->pc = 0x107e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 40), GPR_U64(ctx, 0));
    // 0x107ea0: 0x3c0a7000  lui         $t2, 0x7000
    ctx->pc = 0x107ea0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28672 << 16));
    // 0x107ea4: 0xff000040  sd          $zero, 0x40($t8)
    ctx->pc = 0x107ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 64), GPR_U64(ctx, 0));
    // 0x107ea8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x107ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107eac: 0xace8000c  sw          $t0, 0xC($a3)
    ctx->pc = 0x107eacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 8));
    // 0x107eb0: 0xaceb0004  sw          $t3, 0x4($a3)
    ctx->pc = 0x107eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 11));
    // 0x107eb4: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x107eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x107eb8: 0xaf0c0070  sw          $t4, 0x70($t8)
    ctx->pc = 0x107eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 112), GPR_U32(ctx, 12));
    // 0x107ebc: 0xac4b0004  sw          $t3, 0x4($v0)
    ctx->pc = 0x107ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 11));
    // 0x107ec0: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x107ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
    // 0x107ec4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x107ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x107ec8: 0xaf0c0080  sw          $t4, 0x80($t8)
    ctx->pc = 0x107ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 128), GPR_U32(ctx, 12));
    // 0x107ecc: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x107eccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x107ed0: 0xaca8000c  sw          $t0, 0xC($a1)
    ctx->pc = 0x107ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 8));
    // 0x107ed4: 0xaca90004  sw          $t1, 0x4($a1)
    ctx->pc = 0x107ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 9));
    // 0x107ed8: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x107ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x107edc: 0xaf100090  sw          $s0, 0x90($t8)
    ctx->pc = 0x107edcu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 144), GPR_U32(ctx, 16));
    // 0x107ee0: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x107ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x107ee4: 0xacc90004  sw          $t1, 0x4($a2)
    ctx->pc = 0x107ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 9));
    // 0x107ee8: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x107ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x107eec: 0x7f0200a0  sq          $v0, 0xA0($t8)
    ctx->pc = 0x107eecu;
    WRITE128(ADD32(GPR_U32(ctx, 24), 160), GPR_VEC(ctx, 2));
    // 0x107ef0: 0x8f020000  lw          $v0, 0x0($t8)
    ctx->pc = 0x107ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x107ef4: 0xaf0a00a0  sw          $t2, 0xA0($t8)
    ctx->pc = 0x107ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 160), GPR_U32(ctx, 10));
    // 0x107ef8: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x107ef8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)9u)));
    // 0x107efc: 0xc043948  jal         func_10E520
    ctx->pc = 0x107EFCu;
    SET_GPR_U32(ctx, 31, 0x107F04u);
    ctx->pc = 0x107F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107EFCu;
            // 0x107f00: 0xaf020000  sw          $v0, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E520u;
    if (runtime->hasFunction(0x10E520u)) {
        auto targetFn = runtime->lookupFunction(0x10E520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107F04u; }
        if (ctx->pc != 0x107F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107F04u; }
        if (ctx->pc != 0x107F04u) { return; }
    }
    ctx->pc = 0x107F04u;
    // 0x107f04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x107f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f08: 0xc043322  jal         func_10CC88
    ctx->pc = 0x107F08u;
    SET_GPR_U32(ctx, 31, 0x107F10u);
    ctx->pc = 0x107F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107F08u;
            // 0x107f0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC88u;
    if (runtime->hasFunction(0x10CC88u)) {
        auto targetFn = runtime->lookupFunction(0x10CC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107F10u; }
        if (ctx->pc != 0x107F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107F10u; }
        if (ctx->pc != 0x107F10u) { return; }
    }
    ctx->pc = 0x107F10u;
    // 0x107f10: 0x8f848490  lw          $a0, -0x7B70($gp)
    ctx->pc = 0x107f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x107f14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x107f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f18: 0xc04372a  jal         func_10DCA8
    ctx->pc = 0x107F18u;
    SET_GPR_U32(ctx, 31, 0x107F20u);
    ctx->pc = 0x107F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107F18u;
            // 0x107f1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DCA8u;
    if (runtime->hasFunction(0x10DCA8u)) {
        auto targetFn = runtime->lookupFunction(0x10DCA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107F20u; }
        if (ctx->pc != 0x107F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSync_0x10dca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107F20u; }
        if (ctx->pc != 0x107F20u) { return; }
    }
    ctx->pc = 0x107F20u;
    // 0x107f20: 0x8f8382b8  lw          $v1, -0x7D48($gp)
    ctx->pc = 0x107f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x107f24: 0x3c050fff  lui         $a1, 0xFFF
    ctx->pc = 0x107f24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4095 << 16));
    // 0x107f28: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x107f28u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65535u)));
    // 0x107f2c: 0x8f848490  lw          $a0, -0x7B70($gp)
    ctx->pc = 0x107f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x107f30: 0xc0435d6  jal         func_10D758
    ctx->pc = 0x107F30u;
    SET_GPR_U32(ctx, 31, 0x107F38u);
    ctx->pc = 0x107F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107F30u;
            // 0x107f34: 0x652824  and         $a1, $v1, $a1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D758u;
    if (runtime->hasFunction(0x10D758u)) {
        auto targetFn = runtime->lookupFunction(0x10D758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107F38u; }
        if (ctx->pc != 0x107F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x10d758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107F38u; }
        if (ctx->pc != 0x107F38u) { return; }
    }
    ctx->pc = 0x107F38u;
    // 0x107f38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x107f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f3c: 0xc043322  jal         func_10CC88
    ctx->pc = 0x107F3Cu;
    SET_GPR_U32(ctx, 31, 0x107F44u);
    ctx->pc = 0x107F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107F3Cu;
            // 0x107f40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC88u;
    if (runtime->hasFunction(0x10CC88u)) {
        auto targetFn = runtime->lookupFunction(0x10CC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107F44u; }
        if (ctx->pc != 0x107F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107F44u; }
        if (ctx->pc != 0x107F44u) { return; }
    }
    ctx->pc = 0x107F44u;
    // 0x107f44: 0x8f848490  lw          $a0, -0x7B70($gp)
    ctx->pc = 0x107f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x107f48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x107f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x107f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107f50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x107f50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x107f54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107f58: 0x804372a  j           func_10DCA8
    ctx->pc = 0x107F58u;
    ctx->pc = 0x107F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107F58u;
            // 0x107f5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DCA8u;
    if (runtime->hasFunction(0x10DCA8u)) {
        auto targetFn = runtime->lookupFunction(0x10DCA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceDmaSync_0x10dca8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x107F60u;
}
