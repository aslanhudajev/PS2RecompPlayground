#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsInitGS
// Address: 0x140e10 - 0x140f00
void wrsInitGS_0x140e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsInitGS_0x140e10");
#endif

    ctx->pc = 0x140e10u;

    // 0x140e10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x140e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x140e14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x140e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140e18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x140e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x140e1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x140e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140e20: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x140e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x140e24: 0xc042ada  jal         func_10AB68
    ctx->pc = 0x140E24u;
    SET_GPR_U32(ctx, 31, 0x140E2Cu);
    ctx->pc = 0x140E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140E24u;
            // 0x140e28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AB68u;
    if (runtime->hasFunction(0x10AB68u)) {
        auto targetFn = runtime->lookupFunction(0x10AB68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E2Cu; }
        if (ctx->pc != 0x140E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsResetGraph_0x10ab68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E2Cu; }
        if (ctx->pc != 0x140E2Cu) { return; }
    }
    ctx->pc = 0x140E2Cu;
    // 0x140e2c: 0xc042b42  jal         func_10AD08
    ctx->pc = 0x140E2Cu;
    SET_GPR_U32(ctx, 31, 0x140E34u);
    ctx->pc = 0x10AD08u;
    if (runtime->hasFunction(0x10AD08u)) {
        auto targetFn = runtime->lookupFunction(0x10AD08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E34u; }
        if (ctx->pc != 0x140E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsResetPath_0x10ad08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E34u; }
        if (ctx->pc != 0x140E34u) { return; }
    }
    ctx->pc = 0x140E34u;
    // 0x140e34: 0xc0504a4  jal         func_141290
    ctx->pc = 0x140E34u;
    SET_GPR_U32(ctx, 31, 0x140E3Cu);
    ctx->pc = 0x140E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140E34u;
            // 0x140e38: 0x3c040050  lui         $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)80 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141290u;
    if (runtime->hasFunction(0x141290u)) {
        auto targetFn = runtime->lookupFunction(0x141290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E3Cu; }
        if (ctx->pc != 0x140E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsInitHiMem_0x141290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E3Cu; }
        if (ctx->pc != 0x140E3Cu) { return; }
    }
    ctx->pc = 0x140E3Cu;
    // 0x140e3c: 0xc050168  jal         func_1405A0
    ctx->pc = 0x140E3Cu;
    SET_GPR_U32(ctx, 31, 0x140E44u);
    ctx->pc = 0x140E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140E3Cu;
            // 0x140e40: 0x3c040030  lui         $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1405A0u;
    if (runtime->hasFunction(0x1405A0u)) {
        auto targetFn = runtime->lookupFunction(0x1405A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E44u; }
        if (ctx->pc != 0x140E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsInitHiGsDma_0x1405a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E44u; }
        if (ctx->pc != 0x140E44u) { return; }
    }
    ctx->pc = 0x140E44u;
    // 0x140e44: 0xc0504b8  jal         func_1412E0
    ctx->pc = 0x140E44u;
    SET_GPR_U32(ctx, 31, 0x140E4Cu);
    ctx->pc = 0x1412E0u;
    if (runtime->hasFunction(0x1412E0u)) {
        auto targetFn = runtime->lookupFunction(0x1412E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E4Cu; }
        if (ctx->pc != 0x140E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsInitHiPlugin_0x1412e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E4Cu; }
        if (ctx->pc != 0x140E4Cu) { return; }
    }
    ctx->pc = 0x140E4Cu;
    // 0x140e4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x140e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140e50: 0xc050490  jal         func_141240
    ctx->pc = 0x140E50u;
    SET_GPR_U32(ctx, 31, 0x140E58u);
    ctx->pc = 0x140E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140E50u;
            // 0x140e54: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141240u;
    if (runtime->hasFunction(0x141240u)) {
        auto targetFn = runtime->lookupFunction(0x141240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E58u; }
        if (ctx->pc != 0x140E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsInitHiGsMem_0x141240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E58u; }
        if (ctx->pc != 0x140E58u) { return; }
    }
    ctx->pc = 0x140E58u;
    // 0x140e58: 0xc044344  jal         func_110D10
    ctx->pc = 0x140E58u;
    SET_GPR_U32(ctx, 31, 0x140E60u);
    ctx->pc = 0x140E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140E58u;
            // 0x140e5c: 0x24040264  addiu       $a0, $zero, 0x264 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110D10u;
    if (runtime->hasFunction(0x110D10u)) {
        auto targetFn = runtime->lookupFunction(0x110D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E60u; }
        if (ctx->pc != 0x140E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsDisplayMode_0x110d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E60u; }
        if (ctx->pc != 0x140E60u) { return; }
    }
    ctx->pc = 0x140E60u;
    // 0x140e60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x140e60u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x140e64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x140E64u;
    {
        const bool branch_taken_0x140e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140E64u;
            // 0x140e68: 0x3c010021  lui         $at, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140e64) {
            ctx->pc = 0x140E80u;
            goto label_140e80;
        }
    }
    ctx->pc = 0x140E6Cu;
    // 0x140e6c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x140e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x140e70: 0x8c26f840  lw          $a2, -0x7C0($at)
    ctx->pc = 0x140e70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965312)));
    // 0x140e74: 0x248402d8  addiu       $a0, $a0, 0x2D8
    ctx->pc = 0x140e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 728));
    // 0x140e78: 0xc059e98  jal         func_167A60
    ctx->pc = 0x140E78u;
    SET_GPR_U32(ctx, 31, 0x140E80u);
    ctx->pc = 0x140E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140E78u;
            // 0x140e7c: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E80u; }
        if (ctx->pc != 0x140E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E80u; }
        if (ctx->pc != 0x140E80u) { return; }
    }
    ctx->pc = 0x140E80u;
label_140e80:
    // 0x140e80: 0xc042e7c  jal         func_10B9F0
    ctx->pc = 0x140E80u;
    SET_GPR_U32(ctx, 31, 0x140E88u);
    ctx->pc = 0x140E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140E80u;
            // 0x140e84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B9F0u;
    if (runtime->hasFunction(0x10B9F0u)) {
        auto targetFn = runtime->lookupFunction(0x10B9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E88u; }
        if (ctx->pc != 0x140E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x10b9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E88u; }
        if (ctx->pc != 0x140E88u) { return; }
    }
    ctx->pc = 0x140E88u;
    // 0x140e88: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x140e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x140e8c: 0xc044388  jal         func_110E20
    ctx->pc = 0x140E8Cu;
    SET_GPR_U32(ctx, 31, 0x140E94u);
    ctx->pc = 0x140E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140E8Cu;
            // 0x140e90: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110E20u;
    if (runtime->hasFunction(0x110E20u)) {
        auto targetFn = runtime->lookupFunction(0x110E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E94u; }
        if (ctx->pc != 0x140E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsDisplaySize_0x110e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E94u; }
        if (ctx->pc != 0x140E94u) { return; }
    }
    ctx->pc = 0x140E94u;
    // 0x140e94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x140e94u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x140e98: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x140E98u;
    {
        const bool branch_taken_0x140e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140E98u;
            // 0x140e9c: 0x3c010021  lui         $at, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140e98) {
            ctx->pc = 0x140EB8u;
            goto label_140eb8;
        }
    }
    ctx->pc = 0x140EA0u;
    // 0x140ea0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x140ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x140ea4: 0x8c26f840  lw          $a2, -0x7C0($at)
    ctx->pc = 0x140ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965312)));
    // 0x140ea8: 0x248402d8  addiu       $a0, $a0, 0x2D8
    ctx->pc = 0x140ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 728));
    // 0x140eac: 0xc059e98  jal         func_167A60
    ctx->pc = 0x140EACu;
    SET_GPR_U32(ctx, 31, 0x140EB4u);
    ctx->pc = 0x140EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140EACu;
            // 0x140eb0: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140EB4u; }
        if (ctx->pc != 0x140EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140EB4u; }
        if (ctx->pc != 0x140EB4u) { return; }
    }
    ctx->pc = 0x140EB4u;
    // 0x140eb4: 0x0  nop
    ctx->pc = 0x140eb4u;
    // NOP
label_140eb8:
    // 0x140eb8: 0xc042e7c  jal         func_10B9F0
    ctx->pc = 0x140EB8u;
    SET_GPR_U32(ctx, 31, 0x140EC0u);
    ctx->pc = 0x140EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140EB8u;
            // 0x140ebc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B9F0u;
    if (runtime->hasFunction(0x10B9F0u)) {
        auto targetFn = runtime->lookupFunction(0x10B9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140EC0u; }
        if (ctx->pc != 0x140EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x10b9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140EC0u; }
        if (ctx->pc != 0x140EC0u) { return; }
    }
    ctx->pc = 0x140EC0u;
    // 0x140ec0: 0xc05025c  jal         func_140970
    ctx->pc = 0x140EC0u;
    SET_GPR_U32(ctx, 31, 0x140EC8u);
    ctx->pc = 0x140970u;
    if (runtime->hasFunction(0x140970u)) {
        auto targetFn = runtime->lookupFunction(0x140970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140EC8u; }
        if (ctx->pc != 0x140EC8u) { ctx->pc = 0x140EC8u; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsHiGsInitCtx_0x140970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140EC8u; }
        if (ctx->pc != 0x140EC8u) { ctx->pc = 0x140EC8u; }
    }
    ctx->pc = 0x140EC8u;
    // 0x140ec8: 0xc0501a8  jal         func_1406A0
    ctx->pc = 0x140EC8u;
    SET_GPR_U32(ctx, 31, 0x140ED0u);
    ctx->pc = 0x1406A0u;
    if (runtime->hasFunction(0x1406A0u)) {
        auto targetFn = runtime->lookupFunction(0x1406A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140ED0u; }
        if (ctx->pc != 0x140ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsHiGsInitEnv_0x1406a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140ED0u; }
        if (ctx->pc != 0x140ED0u) { return; }
    }
    ctx->pc = 0x140ED0u;
    // 0x140ed0: 0xc050424  jal         func_141090
    ctx->pc = 0x140ED0u;
    SET_GPR_U32(ctx, 31, 0x140ED8u);
    ctx->pc = 0x141090u;
    if (runtime->hasFunction(0x141090u)) {
        auto targetFn = runtime->lookupFunction(0x141090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140ED8u; }
        if (ctx->pc != 0x140ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsAllocGsMemAll_0x141090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140ED8u; }
        if (ctx->pc != 0x140ED8u) { return; }
    }
    ctx->pc = 0x140ED8u;
    // 0x140ed8: 0xc05018c  jal         func_140630
    ctx->pc = 0x140ED8u;
    SET_GPR_U32(ctx, 31, 0x140EE0u);
    ctx->pc = 0x140630u;
    if (runtime->hasFunction(0x140630u)) {
        auto targetFn = runtime->lookupFunction(0x140630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140EE0u; }
        if (ctx->pc != 0x140EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsOdevIdxInit_0x140630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140EE0u; }
        if (ctx->pc != 0x140EE0u) { return; }
    }
    ctx->pc = 0x140EE0u;
    // 0x140ee0: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x140ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x140ee4: 0xc044d34  jal         func_1134D0
    ctx->pc = 0x140EE4u;
    SET_GPR_U32(ctx, 31, 0x140EECu);
    ctx->pc = 0x140EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140EE4u;
            // 0x140ee8: 0x8c247700  lw          $a0, 0x7700($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30464)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1134D0u;
    if (runtime->hasFunction(0x1134D0u)) {
        auto targetFn = runtime->lookupFunction(0x1134D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140EECu; }
        if (ctx->pc != 0x140EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsCtxChkSize_0x1134d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140EECu; }
        if (ctx->pc != 0x140EECu) { return; }
    }
    ctx->pc = 0x140EECu;
    // 0x140eec: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x140eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x140ef0: 0xac227678  sw          $v0, 0x7678($at)
    ctx->pc = 0x140ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30328), GPR_U32(ctx, 2));
    // 0x140ef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x140ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x140EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140EF8u;
            // 0x140efc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x140E80u: goto label_140e80;
            case 0x140EB8u: goto label_140eb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x140F00u;
}
