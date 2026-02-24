#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: drawClearScreen
// Address: 0x1030e0 - 0x103208
void drawClearScreen_0x1030e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("drawClearScreen_0x1030e0");
#endif

    ctx->pc = 0x1030e0u;

    // 0x1030e0: 0x8f8f82b8  lw          $t7, -0x7D48($gp)
    ctx->pc = 0x1030e0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x1030e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1030e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1030e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1030e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1030ec: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1030ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1030f0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1030f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1030f4: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x1030f4u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)3u)));
    // 0x1030f8: 0x240c000e  addiu       $t4, $zero, 0xE
    ctx->pc = 0x1030f8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1030fc: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x1030fcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x103100: 0x7de30000  sq          $v1, 0x0($t7)
    ctx->pc = 0x103100u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 0), GPR_VEC(ctx, 3));
    // 0x103104: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x103104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x103108: 0xfde50010  sd          $a1, 0x10($t7)
    ctx->pc = 0x103108u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 16), GPR_U64(ctx, 5));
    // 0x10310c: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x10310cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x103110: 0xfdec0018  sd          $t4, 0x18($t7)
    ctx->pc = 0x103110u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 24), GPR_U64(ctx, 12));
    // 0x103114: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x103114u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x103118: 0x24090047  addiu       $t1, $zero, 0x47
    ctx->pc = 0x103118u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x10311c: 0x3c0a2000  lui         $t2, 0x2000
    ctx->pc = 0x10311cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)8192 << 16));
    // 0x103120: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x103120u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x103124: 0x354a8001  ori         $t2, $t2, 0x8001
    ctx->pc = 0x103124u;
    SET_GPR_VEC(ctx, 10, PS2_POR(GPR_VEC(ctx, 10), _mm_cvtsi32_si128((int)32769u)));
    // 0x103128: 0x240b0044  addiu       $t3, $zero, 0x44
    ctx->pc = 0x103128u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x10312c: 0x240d6b60  addiu       $t5, $zero, 0x6B60
    ctx->pc = 0x10312cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 27488));
    // 0x103130: 0xade20000  sw          $v0, 0x0($t7)
    ctx->pc = 0x103130u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
    // 0x103134: 0x25e50060  addiu       $a1, $t7, 0x60
    ctx->pc = 0x103134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), 96));
    // 0x103138: 0xfde70020  sd          $a3, 0x20($t7)
    ctx->pc = 0x103138u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 32), GPR_U64(ctx, 7));
    // 0x10313c: 0x240e7000  addiu       $t6, $zero, 0x7000
    ctx->pc = 0x10313cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x103140: 0xfde80038  sd          $t0, 0x38($t7)
    ctx->pc = 0x103140u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 56), GPR_U64(ctx, 8));
    // 0x103144: 0x340cffff  ori         $t4, $zero, 0xFFFF
    ctx->pc = 0x103144u;
    SET_GPR_VEC(ctx, 12, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x103148: 0xfde90048  sd          $t1, 0x48($t7)
    ctx->pc = 0x103148u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 72), GPR_U64(ctx, 9));
    // 0x10314c: 0x340794a0  ori         $a3, $zero, 0x94A0
    ctx->pc = 0x10314cu;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)38048u)));
    // 0x103150: 0xfdea0050  sd          $t2, 0x50($t7)
    ctx->pc = 0x103150u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 80), GPR_U64(ctx, 10));
    // 0x103154: 0x25e20070  addiu       $v0, $t7, 0x70
    ctx->pc = 0x103154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 112));
    // 0x103158: 0xfdeb0058  sd          $t3, 0x58($t7)
    ctx->pc = 0x103158u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 88), GPR_U64(ctx, 11));
    // 0x10315c: 0x34069000  ori         $a2, $zero, 0x9000
    ctx->pc = 0x10315cu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)36864u)));
    // 0x103160: 0xaded0060  sw          $t5, 0x60($t7)
    ctx->pc = 0x103160u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 96), GPR_U32(ctx, 13));
    // 0x103164: 0x3c087000  lui         $t0, 0x7000
    ctx->pc = 0x103164u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    // 0x103168: 0xfde00028  sd          $zero, 0x28($t7)
    ctx->pc = 0x103168u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 40), GPR_U64(ctx, 0));
    // 0x10316c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10316cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103170: 0xfde00030  sd          $zero, 0x30($t7)
    ctx->pc = 0x103170u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 48), GPR_U64(ctx, 0));
    // 0x103174: 0xfde00040  sd          $zero, 0x40($t7)
    ctx->pc = 0x103174u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 64), GPR_U64(ctx, 0));
    // 0x103178: 0xacae0004  sw          $t6, 0x4($a1)
    ctx->pc = 0x103178u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 14));
    // 0x10317c: 0xacac0008  sw          $t4, 0x8($a1)
    ctx->pc = 0x10317cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 12));
    // 0x103180: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x103180u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x103184: 0xade70070  sw          $a3, 0x70($t7)
    ctx->pc = 0x103184u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 112), GPR_U32(ctx, 7));
    // 0x103188: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x103188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x10318c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x10318cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x103190: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x103190u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x103194: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x103194u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x103198: 0x7de20080  sq          $v0, 0x80($t7)
    ctx->pc = 0x103198u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 128), GPR_VEC(ctx, 2));
    // 0x10319c: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x10319cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1031a0: 0xade80080  sw          $t0, 0x80($t7)
    ctx->pc = 0x1031a0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 128), GPR_U32(ctx, 8));
    // 0x1031a4: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x1031a4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)7u)));
    // 0x1031a8: 0xc043948  jal         func_10E520
    ctx->pc = 0x1031A8u;
    SET_GPR_U32(ctx, 31, 0x1031B0u);
    ctx->pc = 0x1031ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1031A8u;
            // 0x1031ac: 0xade20000  sw          $v0, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E520u;
    if (runtime->hasFunction(0x10E520u)) {
        auto targetFn = runtime->lookupFunction(0x10E520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1031B0u; }
        if (ctx->pc != 0x1031B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1031B0u; }
        if (ctx->pc != 0x1031B0u) { return; }
    }
    ctx->pc = 0x1031B0u;
    // 0x1031b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1031b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1031b4: 0xc043322  jal         func_10CC88
    ctx->pc = 0x1031B4u;
    SET_GPR_U32(ctx, 31, 0x1031BCu);
    ctx->pc = 0x1031B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1031B4u;
            // 0x1031b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC88u;
    if (runtime->hasFunction(0x10CC88u)) {
        auto targetFn = runtime->lookupFunction(0x10CC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1031BCu; }
        if (ctx->pc != 0x1031BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1031BCu; }
        if (ctx->pc != 0x1031BCu) { return; }
    }
    ctx->pc = 0x1031BCu;
    // 0x1031bc: 0x8f848490  lw          $a0, -0x7B70($gp)
    ctx->pc = 0x1031bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x1031c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1031c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1031c4: 0xc04372a  jal         func_10DCA8
    ctx->pc = 0x1031C4u;
    SET_GPR_U32(ctx, 31, 0x1031CCu);
    ctx->pc = 0x1031C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1031C4u;
            // 0x1031c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DCA8u;
    if (runtime->hasFunction(0x10DCA8u)) {
        auto targetFn = runtime->lookupFunction(0x10DCA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1031CCu; }
        if (ctx->pc != 0x1031CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSync_0x10dca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1031CCu; }
        if (ctx->pc != 0x1031CCu) { return; }
    }
    ctx->pc = 0x1031CCu;
    // 0x1031cc: 0x8f8382b8  lw          $v1, -0x7D48($gp)
    ctx->pc = 0x1031ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x1031d0: 0x3c050fff  lui         $a1, 0xFFF
    ctx->pc = 0x1031d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4095 << 16));
    // 0x1031d4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1031d4u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65535u)));
    // 0x1031d8: 0x8f848490  lw          $a0, -0x7B70($gp)
    ctx->pc = 0x1031d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x1031dc: 0xc0435d6  jal         func_10D758
    ctx->pc = 0x1031DCu;
    SET_GPR_U32(ctx, 31, 0x1031E4u);
    ctx->pc = 0x1031E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1031DCu;
            // 0x1031e0: 0x652824  and         $a1, $v1, $a1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D758u;
    if (runtime->hasFunction(0x10D758u)) {
        auto targetFn = runtime->lookupFunction(0x10D758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1031E4u; }
        if (ctx->pc != 0x1031E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x10d758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1031E4u; }
        if (ctx->pc != 0x1031E4u) { return; }
    }
    ctx->pc = 0x1031E4u;
    // 0x1031e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1031e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1031e8: 0xc043322  jal         func_10CC88
    ctx->pc = 0x1031E8u;
    SET_GPR_U32(ctx, 31, 0x1031F0u);
    ctx->pc = 0x1031ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1031E8u;
            // 0x1031ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC88u;
    if (runtime->hasFunction(0x10CC88u)) {
        auto targetFn = runtime->lookupFunction(0x10CC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1031F0u; }
        if (ctx->pc != 0x1031F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1031F0u; }
        if (ctx->pc != 0x1031F0u) { return; }
    }
    ctx->pc = 0x1031F0u;
    // 0x1031f0: 0x8f848490  lw          $a0, -0x7B70($gp)
    ctx->pc = 0x1031f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x1031f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1031f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1031f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1031f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1031fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1031fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103200: 0x804372a  j           func_10DCA8
    ctx->pc = 0x103200u;
    ctx->pc = 0x103204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103200u;
            // 0x103204: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DCA8u;
    if (runtime->hasFunction(0x10DCA8u)) {
        auto targetFn = runtime->lookupFunction(0x10DCA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceDmaSync_0x10dca8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x103208u;
}
