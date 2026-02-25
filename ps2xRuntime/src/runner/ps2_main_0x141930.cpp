#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: main
// Address: 0x141930 - 0x141bac
void ps2_main_0x141930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ps2_main_0x141930");
#endif

    ctx->pc = 0x141930u;

    // 0x141930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x141930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x141934: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x141934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141938: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x141938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14193c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14193cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x141940: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x141940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x141944: 0xc050bf8  jal         func_142FE0
    ctx->pc = 0x141944u;
    SET_GPR_U32(ctx, 31, 0x14194Cu);
    ctx->pc = 0x141948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141944u;
            // 0x141948: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FE0u;
    if (runtime->hasFunction(0x142FE0u)) {
        auto targetFn = runtime->lookupFunction(0x142FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14194Cu; }
        if (ctx->pc != 0x14194Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSrand_0x142fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14194Cu; }
        if (ctx->pc != 0x14194Cu) { return; }
    }
    ctx->pc = 0x14194Cu;
    // 0x14194c: 0xc050a78  jal         func_1429E0
    ctx->pc = 0x14194Cu;
    SET_GPR_U32(ctx, 31, 0x141954u);
    ctx->pc = 0x1429E0u;
    if (runtime->hasFunction(0x1429E0u)) {
        auto targetFn = runtime->lookupFunction(0x1429E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141954u; }
        if (ctx->pc != 0x141954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsMallocImportunateCheckOff_0x1429e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141954u; }
        if (ctx->pc != 0x141954u) { return; }
    }
    ctx->pc = 0x141954u;
    // 0x141954: 0xc0509e8  jal         func_1427A0
    ctx->pc = 0x141954u;
    SET_GPR_U32(ctx, 31, 0x14195Cu);
    ctx->pc = 0x1427A0u;
    if (runtime->hasFunction(0x1427A0u)) {
        auto targetFn = runtime->lookupFunction(0x1427A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14195Cu; }
        if (ctx->pc != 0x14195Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsInitMalloc_0x1427a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14195Cu; }
        if (ctx->pc != 0x14195Cu) { return; }
    }
    ctx->pc = 0x14195Cu;
    // 0x14195c: 0xc050384  jal         func_140E10
    ctx->pc = 0x14195Cu;
    SET_GPR_U32(ctx, 31, 0x141964u);
    ctx->pc = 0x140E10u;
    if (runtime->hasFunction(0x140E10u)) {
        auto targetFn = runtime->lookupFunction(0x140E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141964u; }
        if (ctx->pc != 0x141964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsInitGS_0x140e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141964u; }
        if (ctx->pc != 0x141964u) { return; }
    }
    ctx->pc = 0x141964u;
    // 0x141964: 0xc05c26c  jal         func_1709B0
    ctx->pc = 0x141964u;
    SET_GPR_U32(ctx, 31, 0x14196Cu);
    ctx->pc = 0x1709B0u;
    if (runtime->hasFunction(0x1709B0u)) {
        auto targetFn = runtime->lookupFunction(0x1709B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14196Cu; }
        if (ctx->pc != 0x14196Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsInitGp_0x1709b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14196Cu; }
        if (ctx->pc != 0x14196Cu) { return; }
    }
    ctx->pc = 0x14196Cu;
    // 0x14196c: 0xc059e68  jal         func_1679A0
    ctx->pc = 0x14196Cu;
    SET_GPR_U32(ctx, 31, 0x141974u);
    ctx->pc = 0x1679A0u;
    if (runtime->hasFunction(0x1679A0u)) {
        auto targetFn = runtime->lookupFunction(0x1679A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141974u; }
        if (ctx->pc != 0x141974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        debug_draw_print_init_0x1679a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141974u; }
        if (ctx->pc != 0x141974u) { return; }
    }
    ctx->pc = 0x141974u;
    // 0x141974: 0xc05059c  jal         func_141670
    ctx->pc = 0x141974u;
    SET_GPR_U32(ctx, 31, 0x14197Cu);
    ctx->pc = 0x141670u;
    if (runtime->hasFunction(0x141670u)) {
        auto targetFn = runtime->lookupFunction(0x141670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14197Cu; }
        if (ctx->pc != 0x14197Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRebootIOP_0x141670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14197Cu; }
        if (ctx->pc != 0x14197Cu) { return; }
    }
    ctx->pc = 0x14197Cu;
    // 0x14197c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14197cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x141980: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x141980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // Skip MpegMain entirely - no IPU yet; avoids alloc_buf/unalloc_buf crash
    ctx->pc = 0x14198Cu;
    // 0x14198c: 0xc050544  jal         func_141510
    ctx->pc = 0x14198Cu;
    SET_GPR_U32(ctx, 31, 0x141994u);
    ctx->pc = 0x141510u;
    if (runtime->hasFunction(0x141510u)) {
        auto targetFn = runtime->lookupFunction(0x141510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141994u; }
        if (ctx->pc != 0x141994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRomLoadInit_0x141510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141994u; }
        if (ctx->pc != 0x141994u) { return; }
    }
    ctx->pc = 0x141994u;
    // 0x141994: 0xc05c7ac  jal         func_171EB0
    ctx->pc = 0x141994u;
    SET_GPR_U32(ctx, 31, 0x14199Cu);
    ctx->pc = 0x171EB0u;
    if (runtime->hasFunction(0x171EB0u)) {
        auto targetFn = runtime->lookupFunction(0x171EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14199Cu; }
        if (ctx->pc != 0x14199Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsLogo_0x171eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14199Cu; }
        if (ctx->pc != 0x14199Cu) { return; }
    }
    ctx->pc = 0x14199Cu;
    // 0x14199c: 0xc0559c0  jal         func_156700
    ctx->pc = 0x14199Cu;
    SET_GPR_U32(ctx, 31, 0x1419A4u);
    ctx->pc = 0x156700u;
    if (runtime->hasFunction(0x156700u)) {
        auto targetFn = runtime->lookupFunction(0x156700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1419A4u; }
        if (ctx->pc != 0x1419A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsInitPad_0x156700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1419A4u; }
        if (ctx->pc != 0x1419A4u) { return; }
    }
    ctx->pc = 0x1419A4u;
    // 0x1419a4: 0xc055130  jal         func_1544C0
    ctx->pc = 0x1419A4u;
    SET_GPR_U32(ctx, 31, 0x1419ACu);
    ctx->pc = 0x1544C0u;
    if (runtime->hasFunction(0x1544C0u)) {
        auto targetFn = runtime->lookupFunction(0x1544C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1419ACu; }
        if (ctx->pc != 0x1419ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShockInit_0x1544c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1419ACu; }
        if (ctx->pc != 0x1419ACu) { return; }
    }
    ctx->pc = 0x1419ACu;
    // 0x1419ac: 0xc05d298  jal         func_174A60
    ctx->pc = 0x1419ACu;
    SET_GPR_U32(ctx, 31, 0x1419B4u);
    ctx->pc = 0x174A60u;
    if (runtime->hasFunction(0x174A60u)) {
        auto targetFn = runtime->lookupFunction(0x174A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1419B4u; }
        if (ctx->pc != 0x1419B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Sound_Init_0x174a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1419B4u; }
        if (ctx->pc != 0x1419B4u) { return; }
    }
    ctx->pc = 0x1419B4u;
    // 0x1419b4: 0xc05c240  jal         func_170900
    ctx->pc = 0x1419B4u;
    SET_GPR_U32(ctx, 31, 0x1419BCu);
    ctx->pc = 0x170900u;
    if (runtime->hasFunction(0x170900u)) {
        auto targetFn = runtime->lookupFunction(0x170900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1419BCu; }
        if (ctx->pc != 0x1419BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsTim2LoaderInit_0x170900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1419BCu; }
        if (ctx->pc != 0x1419BCu) { return; }
    }
    ctx->pc = 0x1419BCu;
    // 0x1419bc: 0xc060b80  jal         func_182E00
    ctx->pc = 0x1419BCu;
    SET_GPR_U32(ctx, 31, 0x1419C4u);
    ctx->pc = 0x182E00u;
    if (runtime->hasFunction(0x182E00u)) {
        auto targetFn = runtime->lookupFunction(0x182E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1419C4u; }
        if (ctx->pc != 0x1419C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsAsciiFontInit_0x182e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1419C4u; }
        if (ctx->pc != 0x1419C4u) { return; }
    }
    ctx->pc = 0x1419C4u;
    // 0x1419c4: 0xc058578  jal         func_1615E0
    ctx->pc = 0x1419C4u;
    SET_GPR_U32(ctx, 31, 0x1419CCu);
    ctx->pc = 0x1615E0u;
    if (runtime->hasFunction(0x1615E0u)) {
        auto targetFn = runtime->lookupFunction(0x1615E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1419CCu; }
        if (ctx->pc != 0x1419CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsCameraInit_0x1615e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1419CCu; }
        if (ctx->pc != 0x1419CCu) { return; }
    }
    ctx->pc = 0x1419CCu;
    // 0x1419cc: 0xc050b5c  jal         func_142D70
    ctx->pc = 0x1419CCu;
    SET_GPR_U32(ctx, 31, 0x1419D4u);
    ctx->pc = 0x142D70u;
    if (runtime->hasFunction(0x142D70u)) {
        auto targetFn = runtime->lookupFunction(0x142D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1419D4u; }
        if (ctx->pc != 0x1419D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsInitTask_0x142d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1419D4u; }
        if (ctx->pc != 0x1419D4u) { return; }
    }
    ctx->pc = 0x1419D4u;
    // 0x1419d4: 0x24020082  addiu       $v0, $zero, 0x82
    ctx->pc = 0x1419d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x1419d8: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x1419d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x1419dc: 0xc059e84  jal         func_167A10
    ctx->pc = 0x1419DCu;
    SET_GPR_U32(ctx, 31, 0x1419E4u);
    ctx->pc = 0x1419E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1419DCu;
            // 0x1419e0: 0xac220010  sw          $v0, 0x10($at) (Delay Slot)
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A10u;
    if (runtime->hasFunction(0x167A10u)) {
        auto targetFn = runtime->lookupFunction(0x167A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1419E4u; }
        if (ctx->pc != 0x1419E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        debug_InitDMATimer_0x167a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1419E4u; }
        if (ctx->pc != 0x1419E4u) { return; }
    }
    ctx->pc = 0x1419E4u;
    // 0x1419e4: 0xc065c94  jal         func_197250
    ctx->pc = 0x1419E4u;
    SET_GPR_U32(ctx, 31, 0x1419ECu);
    ctx->pc = 0x197250u;
    if (runtime->hasFunction(0x197250u)) {
        auto targetFn = runtime->lookupFunction(0x197250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1419ECu; }
        if (ctx->pc != 0x1419ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CommonDefaultSetting_0x197250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1419ECu; }
        if (ctx->pc != 0x1419ECu) { return; }
    }
    ctx->pc = 0x1419ECu;
    // 0x1419ec: 0xc061ad0  jal         func_186B40
    ctx->pc = 0x1419ECu;
    SET_GPR_U32(ctx, 31, 0x1419F4u);
    ctx->pc = 0x186B40u;
    if (runtime->hasFunction(0x186B40u)) {
        auto targetFn = runtime->lookupFunction(0x186B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1419F4u; }
        if (ctx->pc != 0x1419F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MemCardInit_0x186b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1419F4u; }
        if (ctx->pc != 0x1419F4u) { return; }
    }
    ctx->pc = 0x1419F4u;
    // 0x1419f4: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x1419f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x1419f8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1419f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1419fc: 0x24846d20  addiu       $a0, $a0, 0x6D20
    ctx->pc = 0x1419fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27936));
    // 0x141a00: 0x24a507b8  addiu       $a1, $a1, 0x7B8
    ctx->pc = 0x141a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1976));
    // 0x141a04: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x141a04u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32768u)));
    // 0x141a08: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x141a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x141a0c: 0xc050a94  jal         func_142A50
    ctx->pc = 0x141A0Cu;
    SET_GPR_U32(ctx, 31, 0x141A14u);
    ctx->pc = 0x141A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141A0Cu;
            // 0x141a10: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142A50u;
    if (runtime->hasFunction(0x142A50u)) {
        auto targetFn = runtime->lookupFunction(0x142A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141A14u; }
        if (ctx->pc != 0x141A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsKickTask_0x142a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141A14u; }
        if (ctx->pc != 0x141A14u) { return; }
    }
    ctx->pc = 0x141A14u;
    // 0x141a14: 0x0  nop
    ctx->pc = 0x141a14u;
    // NOP
label_141a18:
    // 0x141a18: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x141a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x141a1c: 0xac200000  sw          $zero, 0x0($at)
    ctx->pc = 0x141a1cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x141a20: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141a24: 0xc059e58  jal         func_167960
    ctx->pc = 0x141A24u;
    SET_GPR_U32(ctx, 31, 0x141A2Cu);
    ctx->pc = 0x141A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141A24u;
            // 0x141a28: 0x8c247918  lw          $a0, 0x7918($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31000)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167960u;
    if (runtime->hasFunction(0x167960u)) {
        auto targetFn = runtime->lookupFunction(0x167960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141A2Cu; }
        if (ctx->pc != 0x141A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        debug_status_set_frame_cnt_0x167960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141A2Cu; }
        if (ctx->pc != 0x141A2Cu) { return; }
    }
    ctx->pc = 0x141A2Cu;
    // 0x141a2c: 0xc059e6c  jal         func_1679B0
    ctx->pc = 0x141A2Cu;
    SET_GPR_U32(ctx, 31, 0x141A34u);
    ctx->pc = 0x1679B0u;
    if (runtime->hasFunction(0x1679B0u)) {
        auto targetFn = runtime->lookupFunction(0x1679B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141A34u; }
        if (ctx->pc != 0x141A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        debug_ResetDMATimer_0x1679b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141A34u; }
        if (ctx->pc != 0x141A34u) { return; }
    }
    ctx->pc = 0x141A34u;
    // 0x141a34: 0xc059e7c  jal         func_1679F0
    ctx->pc = 0x141A34u;
    SET_GPR_U32(ctx, 31, 0x141A3Cu);
    ctx->pc = 0x1679F0u;
    if (runtime->hasFunction(0x1679F0u)) {
        auto targetFn = runtime->lookupFunction(0x1679F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141A3Cu; }
        if (ctx->pc != 0x141A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        debug_SetDMATimer_0x1679f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141A3Cu; }
        if (ctx->pc != 0x141A3Cu) { return; }
    }
    ctx->pc = 0x141A3Cu;
    // 0x141a3c: 0xc05023c  jal         func_1408F0
    ctx->pc = 0x141A3Cu;
    SET_GPR_U32(ctx, 31, 0x141A44u);
    ctx->pc = 0x1408F0u;
    if (runtime->hasFunction(0x1408F0u)) {
        auto targetFn = runtime->lookupFunction(0x1408F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141A44u; }
        if (ctx->pc != 0x141A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsHiGsCtxRegist_0x1408f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141A44u; }
        if (ctx->pc != 0x141A44u) { return; }
    }
    ctx->pc = 0x141A44u;
    // 0x141a44: 0xc050190  jal         func_140640
    ctx->pc = 0x141A44u;
    SET_GPR_U32(ctx, 31, 0x141A4Cu);
    ctx->pc = 0x140640u;
    if (runtime->hasFunction(0x140640u)) {
        auto targetFn = runtime->lookupFunction(0x140640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141A4Cu; }
        if (ctx->pc != 0x141A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsHiGsEnvRegist_0x140640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141A4Cu; }
        if (ctx->pc != 0x141A4Cu) { return; }
    }
    ctx->pc = 0x141A4Cu;
    // 0x141a4c: 0xc043774  jal         func_10DDD0
    ctx->pc = 0x141A4Cu;
    SET_GPR_U32(ctx, 31, 0x141A54u);
    ctx->pc = 0x10DDD0u;
    if (runtime->hasFunction(0x10DDD0u)) {
        auto targetFn = runtime->lookupFunction(0x10DDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141A54u; }
        if (ctx->pc != 0x141A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMASend_0x10ddd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141A54u; }
        if (ctx->pc != 0x141A54u) { return; }
    }
    ctx->pc = 0x141A54u;
    // 0x141a54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x141a54u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x141a58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x141A58u;
    {
        const bool branch_taken_0x141a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141A58u;
            // 0x141a5c: 0x3c010021  lui         $at, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141a58) {
            ctx->pc = 0x141A78u;
            goto label_141a78;
        }
    }
    ctx->pc = 0x141A60u;
    // 0x141a60: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x141a60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x141a64: 0x8c26f840  lw          $a2, -0x7C0($at)
    ctx->pc = 0x141a64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965312)));
    // 0x141a68: 0x248407c8  addiu       $a0, $a0, 0x7C8
    ctx->pc = 0x141a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1992));
    // 0x141a6c: 0xc059e98  jal         func_167A60
    ctx->pc = 0x141A6Cu;
    SET_GPR_U32(ctx, 31, 0x141A74u);
    ctx->pc = 0x141A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141A6Cu;
            // 0x141a70: 0x240500a4  addiu       $a1, $zero, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141A74u; }
        if (ctx->pc != 0x141A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141A74u; }
        if (ctx->pc != 0x141A74u) { return; }
    }
    ctx->pc = 0x141A74u;
    // 0x141a74: 0x0  nop
    ctx->pc = 0x141a74u;
    // NOP
label_141a78:
    // 0x141a78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x141a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141a7c: 0xc042ea2  jal         func_10BA88
    ctx->pc = 0x141A7Cu;
    SET_GPR_U32(ctx, 31, 0x141A84u);
    ctx->pc = 0x141A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141A7Cu;
            // 0x141a80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BA88u;
    if (runtime->hasFunction(0x10BA88u)) {
        auto targetFn = runtime->lookupFunction(0x10BA88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141A84u; }
        if (ctx->pc != 0x141A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10ba88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141A84u; }
        if (ctx->pc != 0x141A84u) { return; }
    }
    ctx->pc = 0x141A84u;
    // 0x141a84: 0xc05022c  jal         func_1408B0
    ctx->pc = 0x141A84u;
    SET_GPR_U32(ctx, 31, 0x141A8Cu);
    ctx->pc = 0x1408B0u;
    if (runtime->hasFunction(0x1408B0u)) {
        auto targetFn = runtime->lookupFunction(0x1408B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141A8Cu; }
        if (ctx->pc != 0x141A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsHiGsCtxRegist2D_0x1408b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141A8Cu; }
        if (ctx->pc != 0x141A8Cu) { return; }
    }
    ctx->pc = 0x141A8Cu;
    // 0x141a8c: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141a90: 0xc05c25c  jal         func_170970
    ctx->pc = 0x141A90u;
    SET_GPR_U32(ctx, 31, 0x141A98u);
    ctx->pc = 0x141A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141A90u;
            // 0x141a94: 0x8c247670  lw          $a0, 0x7670($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30320)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170970u;
    if (runtime->hasFunction(0x170970u)) {
        auto targetFn = runtime->lookupFunction(0x170970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141A98u; }
        if (ctx->pc != 0x141A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGpKickChain_0x170970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141A98u; }
        if (ctx->pc != 0x141A98u) { return; }
    }
    ctx->pc = 0x141A98u;
    // 0x141a98: 0xc050640  jal         func_141900
    ctx->pc = 0x141A98u;
    SET_GPR_U32(ctx, 31, 0x141AA0u);
    ctx->pc = 0x141900u;
    if (runtime->hasFunction(0x141900u)) {
        auto targetFn = runtime->lookupFunction(0x141900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141AA0u; }
        if (ctx->pc != 0x141AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        VsyncMain_0x141900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141AA0u; }
        if (ctx->pc != 0x141AA0u) { return; }
    }
    ctx->pc = 0x141AA0u;
    // 0x141aa0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x141aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x141aa4: 0x8c220a10  lw          $v0, 0xA10($at)
    ctx->pc = 0x141aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2576)));
    // 0x141aa8: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x141AA8u;
    {
        const bool branch_taken_0x141aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x141AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141AA8u;
            // 0x141aac: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141aa8) {
            ctx->pc = 0x141AC0u;
            goto label_141ac0;
        }
    }
    ctx->pc = 0x141AB0u;
    // 0x141ab0: 0x8c24a010  lw          $a0, -0x5FF0($at)
    ctx->pc = 0x141ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942736)));
    // 0x141ab4: 0xc05cd28  jal         func_1734A0
    ctx->pc = 0x141AB4u;
    SET_GPR_U32(ctx, 31, 0x141ABCu);
    ctx->pc = 0x141AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141AB4u;
            // 0x141ab8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1734A0u;
    if (runtime->hasFunction(0x1734A0u)) {
        auto targetFn = runtime->lookupFunction(0x1734A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141ABCu; }
        if (ctx->pc != 0x141ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_GetStatus_0x1734a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141ABCu; }
        if (ctx->pc != 0x141ABCu) { return; }
    }
    ctx->pc = 0x141ABCu;
    // 0x141abc: 0x0  nop
    ctx->pc = 0x141abcu;
    // NOP
label_141ac0:
    // 0x141ac0: 0xc05caac  jal         func_172AB0
    ctx->pc = 0x141AC0u;
    SET_GPR_U32(ctx, 31, 0x141AC8u);
    ctx->pc = 0x141AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141AC0u;
            // 0x141ac4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172AB0u;
    if (runtime->hasFunction(0x172AB0u)) {
        auto targetFn = runtime->lookupFunction(0x172AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141AC8u; }
        if (ctx->pc != 0x141AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushIOPCommand_0x172ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141AC8u; }
        if (ctx->pc != 0x141AC8u) { return; }
    }
    ctx->pc = 0x141AC8u;
    // 0x141ac8: 0xc05c844  jal         func_172110
    ctx->pc = 0x141AC8u;
    SET_GPR_U32(ctx, 31, 0x141AD0u);
    ctx->pc = 0x172110u;
    if (runtime->hasFunction(0x172110u)) {
        auto targetFn = runtime->lookupFunction(0x172110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141AD0u; }
        if (ctx->pc != 0x141AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_HandleCDErrors_0x172110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141AD0u; }
        if (ctx->pc != 0x141AD0u) { return; }
    }
    ctx->pc = 0x141AD0u;
    // 0x141ad0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x141ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x141ad4: 0xc043808  jal         func_10E020
    ctx->pc = 0x141AD4u;
    SET_GPR_U32(ctx, 31, 0x141ADCu);
    ctx->pc = 0x141AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141AD4u;
            // 0x141ad8: 0x8c300a10  lw          $s0, 0xA10($at) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2576)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (runtime->hasFunction(0x10E020u)) {
        auto targetFn = runtime->lookupFunction(0x10E020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141ADCu; }
        if (ctx->pc != 0x141ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAWait_0x10e020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141ADCu; }
        if (ctx->pc != 0x141ADCu) { return; }
    }
    ctx->pc = 0x141ADCu;
    // 0x141adc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x141adcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x141ae0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x141AE0u;
    {
        const bool branch_taken_0x141ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141AE0u;
            // 0x141ae4: 0x3c010021  lui         $at, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141ae0) {
            ctx->pc = 0x141B00u;
            goto label_141b00;
        }
    }
    ctx->pc = 0x141AE8u;
    // 0x141ae8: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x141ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x141aec: 0x8c26f840  lw          $a2, -0x7C0($at)
    ctx->pc = 0x141aecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965312)));
    // 0x141af0: 0x248407c8  addiu       $a0, $a0, 0x7C8
    ctx->pc = 0x141af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1992));
    // 0x141af4: 0xc059e98  jal         func_167A60
    ctx->pc = 0x141AF4u;
    SET_GPR_U32(ctx, 31, 0x141AFCu);
    ctx->pc = 0x141AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141AF4u;
            // 0x141af8: 0x240500bb  addiu       $a1, $zero, 0xBB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141AFCu; }
        if (ctx->pc != 0x141AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141AFCu; }
        if (ctx->pc != 0x141AFCu) { return; }
    }
    ctx->pc = 0x141AFCu;
    // 0x141afc: 0x0  nop
    ctx->pc = 0x141afcu;
    // NOP
label_141b00:
    // 0x141b00: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141b04: 0xc05c254  jal         func_170950
    ctx->pc = 0x141B04u;
    SET_GPR_U32(ctx, 31, 0x141B0Cu);
    ctx->pc = 0x141B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141B04u;
            // 0x141b08: 0x8c247670  lw          $a0, 0x7670($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30320)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170950u;
    if (runtime->hasFunction(0x170950u)) {
        auto targetFn = runtime->lookupFunction(0x170950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141B0Cu; }
        if (ctx->pc != 0x141B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGpResetChain_0x170950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141B0Cu; }
        if (ctx->pc != 0x141B0Cu) { return; }
    }
    ctx->pc = 0x141B0Cu;
    // 0x141b0c: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141b10: 0xc05c778  jal         func_171DE0
    ctx->pc = 0x141B10u;
    SET_GPR_U32(ctx, 31, 0x141B18u);
    ctx->pc = 0x141B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141B10u;
            // 0x141b14: 0x8c247670  lw          $a0, 0x7670($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30320)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171DE0u;
    if (runtime->hasFunction(0x171DE0u)) {
        auto targetFn = runtime->lookupFunction(0x171DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141B18u; }
        if (ctx->pc != 0x141B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPacketMemClean_0x171de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141B18u; }
        if (ctx->pc != 0x141B18u) { return; }
    }
    ctx->pc = 0x141B18u;
    // 0x141b18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x141b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141b1c: 0xc042ea2  jal         func_10BA88
    ctx->pc = 0x141B1Cu;
    SET_GPR_U32(ctx, 31, 0x141B24u);
    ctx->pc = 0x141B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141B1Cu;
            // 0x141b20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BA88u;
    if (runtime->hasFunction(0x10BA88u)) {
        auto targetFn = runtime->lookupFunction(0x10BA88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141B24u; }
        if (ctx->pc != 0x141B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10ba88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141B24u; }
        if (ctx->pc != 0x141B24u) { return; }
    }
    ctx->pc = 0x141B24u;
    // 0x141b24: 0xc04421e  jal         func_110878
    ctx->pc = 0x141B24u;
    SET_GPR_U32(ctx, 31, 0x141B2Cu);
    ctx->pc = 0x110878u;
    if (runtime->hasFunction(0x110878u)) {
        auto targetFn = runtime->lookupFunction(0x110878u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141B2Cu; }
        if (ctx->pc != 0x141B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsDisplayStatus_0x110878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141B2Cu; }
        if (ctx->pc != 0x141B2Cu) { return; }
    }
    ctx->pc = 0x141B2Cu;
    // 0x141b2c: 0xc059e74  jal         func_1679D0
    ctx->pc = 0x141B2Cu;
    SET_GPR_U32(ctx, 31, 0x141B34u);
    ctx->pc = 0x1679D0u;
    if (runtime->hasFunction(0x1679D0u)) {
        auto targetFn = runtime->lookupFunction(0x1679D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141B34u; }
        if (ctx->pc != 0x141B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        debug_GetDMATimerEnd_0x1679d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141B34u; }
        if (ctx->pc != 0x141B34u) { return; }
    }
    ctx->pc = 0x141B34u;
    // 0x141b34: 0xc059e78  jal         func_1679E0
    ctx->pc = 0x141B34u;
    SET_GPR_U32(ctx, 31, 0x141B3Cu);
    ctx->pc = 0x141B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141B34u;
            // 0x141b38: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1679E0u;
    if (runtime->hasFunction(0x1679E0u)) {
        auto targetFn = runtime->lookupFunction(0x1679E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141B3Cu; }
        if (ctx->pc != 0x141B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        debug_GetDMATimerStart_0x1679e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141B3Cu; }
        if (ctx->pc != 0x141B3Cu) { return; }
    }
    ctx->pc = 0x141B3Cu;
    // 0x141b3c: 0xc059e54  jal         func_167950
    ctx->pc = 0x141B3Cu;
    SET_GPR_U32(ctx, 31, 0x141B44u);
    ctx->pc = 0x141B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141B3Cu;
            // 0x141b40: 0x2222023  subu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167950u;
    if (runtime->hasFunction(0x167950u)) {
        auto targetFn = runtime->lookupFunction(0x167950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141B44u; }
        if (ctx->pc != 0x141B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        debug_status_set_dma_cnt_0x167950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141B44u; }
        if (ctx->pc != 0x141B44u) { return; }
    }
    ctx->pc = 0x141B44u;
    // 0x141b44: 0xc059e78  jal         func_1679E0
    ctx->pc = 0x141B44u;
    SET_GPR_U32(ctx, 31, 0x141B4Cu);
    ctx->pc = 0x1679E0u;
    if (runtime->hasFunction(0x1679E0u)) {
        auto targetFn = runtime->lookupFunction(0x1679E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141B4Cu; }
        if (ctx->pc != 0x141B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        debug_GetDMATimerStart_0x1679e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141B4Cu; }
        if (ctx->pc != 0x141B4Cu) { return; }
    }
    ctx->pc = 0x141B4Cu;
    // 0x141b4c: 0xc059e50  jal         func_167940
    ctx->pc = 0x141B4Cu;
    SET_GPR_U32(ctx, 31, 0x141B54u);
    ctx->pc = 0x141B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141B4Cu;
            // 0x141b50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167940u;
    if (runtime->hasFunction(0x167940u)) {
        auto targetFn = runtime->lookupFunction(0x167940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141B54u; }
        if (ctx->pc != 0x141B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        debug_status_set_cpu_cnt_0x167940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141B54u; }
        if (ctx->pc != 0x141B54u) { return; }
    }
    ctx->pc = 0x141B54u;
    // 0x141b54: 0xc059e4c  jal         func_167930
    ctx->pc = 0x141B54u;
    SET_GPR_U32(ctx, 31, 0x141B5Cu);
    ctx->pc = 0x167930u;
    if (runtime->hasFunction(0x167930u)) {
        auto targetFn = runtime->lookupFunction(0x167930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141B5Cu; }
        if (ctx->pc != 0x141B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        debug_status_disp_0x167930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141B5Cu; }
        if (ctx->pc != 0x141B5Cu) { return; }
    }
    ctx->pc = 0x141B5Cu;
    // 0x141b5c: 0xc059e5c  jal         func_167970
    ctx->pc = 0x141B5Cu;
    SET_GPR_U32(ctx, 31, 0x141B64u);
    ctx->pc = 0x167970u;
    if (runtime->hasFunction(0x167970u)) {
        auto targetFn = runtime->lookupFunction(0x167970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141B64u; }
        if (ctx->pc != 0x141B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        debug_draw_print_exec_0x167970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141B64u; }
        if (ctx->pc != 0x141B64u) { return; }
    }
    ctx->pc = 0x141B64u;
    // 0x141b64: 0xc05017c  jal         func_1405F0
    ctx->pc = 0x141B64u;
    SET_GPR_U32(ctx, 31, 0x141B6Cu);
    ctx->pc = 0x1405F0u;
    if (runtime->hasFunction(0x1405F0u)) {
        auto targetFn = runtime->lookupFunction(0x1405F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141B6Cu; }
        if (ctx->pc != 0x141B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDisplayFlush_0x1405f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141B6Cu; }
        if (ctx->pc != 0x141B6Cu) { return; }
    }
    ctx->pc = 0x141B6Cu;
    // 0x141b6c: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141b70: 0x8c227910  lw          $v0, 0x7910($at)
    ctx->pc = 0x141b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30992)));
    // 0x141b74: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x141b74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x141b78: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x141b78u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x141b7c: 0x1440ffa6  bnez        $v0, . + 4 + (-0x5A << 2)
    ctx->pc = 0x141B7Cu;
    {
        const bool branch_taken_0x141b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141b7c) {
            ctx->pc = 0x141A18u;
            goto label_141a18;
        }
    }
    ctx->pc = 0x141B84u;
    // 0x141b84: 0xc05062c  jal         func_1418B0
    ctx->pc = 0x141B84u;
    SET_GPR_U32(ctx, 31, 0x141B8Cu);
    ctx->pc = 0x1418B0u;
    if (runtime->hasFunction(0x1418B0u)) {
        auto targetFn = runtime->lookupFunction(0x1418B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141B8Cu; }
        if (ctx->pc != 0x141B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        unInitShienryu2_0x1418b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141B8Cu; }
        if (ctx->pc != 0x141B8Cu) { return; }
    }
    ctx->pc = 0x141B8Cu;
    // 0x141b8c: 0xc050614  jal         func_141850
    ctx->pc = 0x141B8Cu;
    SET_GPR_U32(ctx, 31, 0x141B94u);
    ctx->pc = 0x141850u;
    if (runtime->hasFunction(0x141850u)) {
        auto targetFn = runtime->lookupFunction(0x141850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141B94u; }
        if (ctx->pc != 0x141B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        bootShienryu1_0x141850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141B94u; }
        if (ctx->pc != 0x141B94u) { return; }
    }
    ctx->pc = 0x141B94u;
    // 0x141b94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x141b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141b98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x141b98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141b9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x141b9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141ba0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x141ba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x141BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141BA4u;
            // 0x141ba8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x141A18u: goto label_141a18;
            case 0x141A78u: goto label_141a78;
            case 0x141AC0u: goto label_141ac0;
            case 0x141B00u: goto label_141b00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x141BACu;
}
