#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitFont
// Address: 0x1000e8 - 0x1001a4
void InitFont_0x1000e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitFont_0x1000e8");
#endif

    ctx->pc = 0x1000e8u;

    // 0x1000e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1000e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1000ec: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x1000ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1000f0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1000f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1000f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1000f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1000f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1000f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1000fc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1000fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100100: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x100100u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100104: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x100104u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x100108: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x100108u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x10010c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x10010cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x100110: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x100110u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x100114: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x100114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x100118: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x100118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10011c: 0x24041400  addiu       $a0, $zero, 0x1400
    ctx->pc = 0x10011cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
    // 0x100120: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x100120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x100124: 0xc0428ba  jal         func_10A2E8
    ctx->pc = 0x100124u;
    SET_GPR_U32(ctx, 31, 0x10012Cu);
    ctx->pc = 0x100128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100124u;
            // 0x100128: 0x24050280  addiu       $a1, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A2E8u;
    if (runtime->hasFunction(0x10A2E8u)) {
        auto targetFn = runtime->lookupFunction(0x10A2E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10012Cu; }
        if (ctx->pc != 0x10012Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceeFontInit_0x10a2e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10012Cu; }
        if (ctx->pc != 0x10012Cu) { return; }
    }
    ctx->pc = 0x10012Cu;
    // 0x10012c: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x10012cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x100130: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x100130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100134: 0x26102a00  addiu       $s0, $s0, 0x2A00
    ctx->pc = 0x100134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10752));
    // 0x100138: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x100138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10013c: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10013Cu;
    SET_GPR_U32(ctx, 31, 0x100144u);
    ctx->pc = 0x100140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10013Cu;
            // 0x100140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100144u; }
        if (ctx->pc != 0x100144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100144u; }
        if (ctx->pc != 0x100144u) { return; }
    }
    ctx->pc = 0x100144u;
    // 0x100144: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x100144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x100148: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x100148u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10014c: 0x24844f80  addiu       $a0, $a0, 0x4F80
    ctx->pc = 0x10014cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20352));
    // 0x100150: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x100150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100154: 0xc042564  jal         func_109590
    ctx->pc = 0x100154u;
    SET_GPR_U32(ctx, 31, 0x10015Cu);
    ctx->pc = 0x100158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100154u;
            // 0x100158: 0x240600b6  addiu       $a2, $zero, 0xB6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109590u;
    if (runtime->hasFunction(0x109590u)) {
        auto targetFn = runtime->lookupFunction(0x109590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10015Cu; }
        if (ctx->pc != 0x10015Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceeFontLoadFont_0x109590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10015Cu; }
        if (ctx->pc != 0x10015Cu) { return; }
    }
    ctx->pc = 0x10015Cu;
    // 0x10015c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10015cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100160: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x100160u;
    SET_GPR_U32(ctx, 31, 0x100168u);
    ctx->pc = 0x100164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100160u;
            // 0x100164: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100168u; }
        if (ctx->pc != 0x100168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100168u; }
        if (ctx->pc != 0x100168u) { return; }
    }
    ctx->pc = 0x100168u;
    // 0x100168: 0xc042922  jal         func_10A488
    ctx->pc = 0x100168u;
    SET_GPR_U32(ctx, 31, 0x100170u);
    ctx->pc = 0x10016Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100168u;
            // 0x10016c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A488u;
    if (runtime->hasFunction(0x10A488u)) {
        auto targetFn = runtime->lookupFunction(0x10A488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100170u; }
        if (ctx->pc != 0x100170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceeFontSetFont_0x10a488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100170u; }
        if (ctx->pc != 0x100170u) { return; }
    }
    ctx->pc = 0x100170u;
    // 0x100170: 0xc042924  jal         func_10A490
    ctx->pc = 0x100170u;
    SET_GPR_U32(ctx, 31, 0x100178u);
    ctx->pc = 0x100174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100170u;
            // 0x100174: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A490u;
    if (runtime->hasFunction(0x10A490u)) {
        auto targetFn = runtime->lookupFunction(0x10A490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100178u; }
        if (ctx->pc != 0x100178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceeFontSetColour_0x10a490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100178u; }
        if (ctx->pc != 0x100178u) { return; }
    }
    ctx->pc = 0x100178u;
    // 0x100178: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x100178u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x10017c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x10017cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x100180: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x100180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x100184: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x100184u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x100188: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x100188u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10018c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10018cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100190: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x100190u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100194: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x100194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x100198: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x100198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10019c: 0x8042928  j           func_10A4A0
    ctx->pc = 0x10019Cu;
    ctx->pc = 0x1001A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10019Cu;
            // 0x1001a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A4A0u;
    if (runtime->hasFunction(0x10A4A0u)) {
        auto targetFn = runtime->lookupFunction(0x10A4A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceeFontSetScale_0x10a4a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1001A4u;
}
