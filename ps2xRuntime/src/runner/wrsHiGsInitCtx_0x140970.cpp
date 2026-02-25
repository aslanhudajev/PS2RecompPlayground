#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsHiGsInitCtx
// Address: 0x140970 - 0x140dc4
void wrsHiGsInitCtx_0x140970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsHiGsInitCtx_0x140970");
#endif

    ctx->pc = 0x140970u;

    // 0x140970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x140970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x140974: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x140974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x140978: 0xc0448b8  jal         func_1122E0
    ctx->pc = 0x140978u;
    SET_GPR_U32(ctx, 31, 0x140980u);
    ctx->pc = 0x14097Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140978u;
            // 0x14097c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1122E0u;
    if (runtime->hasFunction(0x1122E0u)) {
        auto targetFn = runtime->lookupFunction(0x1122E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140980u; }
        if (ctx->pc != 0x140980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsCtxCreate_0x1122e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140980u; }
        if (ctx->pc != 0x140980u) { return; }
    }
    ctx->pc = 0x140980u;
    // 0x140980: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x140980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140984: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x140984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x140988: 0xac227700  sw          $v0, 0x7700($at)
    ctx->pc = 0x140988u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30464), GPR_U32(ctx, 2));
    // 0x14098c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x14098cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140990: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x140990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140994: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x140994u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140998: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x140998u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14099c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x14099cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1409a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1409a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1409a4: 0xc045914  jal         func_116450
    ctx->pc = 0x1409A4u;
    SET_GPR_U32(ctx, 31, 0x1409ACu);
    ctx->pc = 0x1409A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1409A4u;
            // 0x1409a8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116450u;
    if (runtime->hasFunction(0x116450u)) {
        auto targetFn = runtime->lookupFunction(0x116450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1409ACu; }
        if (ctx->pc != 0x1409ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsPrmodeRegs_0x116450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1409ACu; }
        if (ctx->pc != 0x1409ACu) { return; }
    }
    ctx->pc = 0x1409ACu;
    // 0x1409ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1409acu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x1409b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1409B0u;
    {
        const bool branch_taken_0x1409b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1409B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1409B0u;
            // 0x1409b4: 0x3c010021  lui         $at, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1409b0) {
            ctx->pc = 0x1409D0u;
            goto label_1409d0;
        }
    }
    ctx->pc = 0x1409B8u;
    // 0x1409b8: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1409b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1409bc: 0x8c26f840  lw          $a2, -0x7C0($at)
    ctx->pc = 0x1409bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965312)));
    // 0x1409c0: 0x248402d8  addiu       $a0, $a0, 0x2D8
    ctx->pc = 0x1409c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 728));
    // 0x1409c4: 0xc059e98  jal         func_167A60
    ctx->pc = 0x1409C4u;
    SET_GPR_U32(ctx, 31, 0x1409CCu);
    ctx->pc = 0x1409C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1409C4u;
            // 0x1409c8: 0x2405005e  addiu       $a1, $zero, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1409CCu; }
        if (ctx->pc != 0x1409CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1409CCu; }
        if (ctx->pc != 0x1409CCu) { return; }
    }
    ctx->pc = 0x1409CCu;
    // 0x1409cc: 0x0  nop
    ctx->pc = 0x1409ccu;
    // NOP
label_1409d0:
    // 0x1409d0: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1409d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1409d4: 0x8c247700  lw          $a0, 0x7700($at)
    ctx->pc = 0x1409d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30464)));
    // 0x1409d8: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1409d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1409dc: 0xc044a50  jal         func_112940
    ctx->pc = 0x1409DCu;
    SET_GPR_U32(ctx, 31, 0x1409E4u);
    ctx->pc = 0x1409E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1409DCu;
            // 0x1409e0: 0x8c25fbc0  lw          $a1, -0x440($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966208)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112940u;
    if (runtime->hasFunction(0x112940u)) {
        auto targetFn = runtime->lookupFunction(0x112940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1409E4u; }
        if (ctx->pc != 0x1409E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsCtxCopy_0x112940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1409E4u; }
        if (ctx->pc != 0x1409E4u) { return; }
    }
    ctx->pc = 0x1409E4u;
    // 0x1409e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1409e4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x1409e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1409E8u;
    {
        const bool branch_taken_0x1409e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1409ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1409E8u;
            // 0x1409ec: 0x3c010021  lui         $at, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1409e8) {
            ctx->pc = 0x140A08u;
            goto label_140a08;
        }
    }
    ctx->pc = 0x1409F0u;
    // 0x1409f0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1409f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1409f4: 0x8c26f840  lw          $a2, -0x7C0($at)
    ctx->pc = 0x1409f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965312)));
    // 0x1409f8: 0x248402d8  addiu       $a0, $a0, 0x2D8
    ctx->pc = 0x1409f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 728));
    // 0x1409fc: 0xc059e98  jal         func_167A60
    ctx->pc = 0x1409FCu;
    SET_GPR_U32(ctx, 31, 0x140A04u);
    ctx->pc = 0x140A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1409FCu;
            // 0x140a00: 0x24050060  addiu       $a1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140A04u; }
        if (ctx->pc != 0x140A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140A04u; }
        if (ctx->pc != 0x140A04u) { return; }
    }
    ctx->pc = 0x140A04u;
    // 0x140a04: 0x0  nop
    ctx->pc = 0x140a04u;
    // NOP
label_140a08:
    // 0x140a08: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x140a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x140a0c: 0x8c247700  lw          $a0, 0x7700($at)
    ctx->pc = 0x140a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30464)));
    // 0x140a10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x140a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140a14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x140a14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140a18: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x140a18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x140a1c: 0x240801c0  addiu       $t0, $zero, 0x1C0
    ctx->pc = 0x140a1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x140a20: 0xc044e14  jal         func_113850
    ctx->pc = 0x140A20u;
    SET_GPR_U32(ctx, 31, 0x140A28u);
    ctx->pc = 0x140A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140A20u;
            // 0x140a24: 0x2409fffe  addiu       $t1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
    ctx->pc = 0x113850u;
    if (runtime->hasFunction(0x113850u)) {
        auto targetFn = runtime->lookupFunction(0x113850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140A28u; }
        if (ctx->pc != 0x140A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsCtxSetRect_0x113850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140A28u; }
        if (ctx->pc != 0x140A28u) { return; }
    }
    ctx->pc = 0x140A28u;
    // 0x140a28: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x140a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x140a2c: 0xc044676  jal         func_1119D8
    ctx->pc = 0x140A2Cu;
    SET_GPR_U32(ctx, 31, 0x140A34u);
    ctx->pc = 0x140A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140A2Cu;
            // 0x140a30: 0x8c247700  lw          $a0, 0x7700($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30464)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1119D8u;
    if (runtime->hasFunction(0x1119D8u)) {
        auto targetFn = runtime->lookupFunction(0x1119D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140A34u; }
        if (ctx->pc != 0x140A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsCtxSetDefault_0x1119d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140A34u; }
        if (ctx->pc != 0x140A34u) { return; }
    }
    ctx->pc = 0x140A34u;
    // 0x140a34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x140a34u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x140a38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x140A38u;
    {
        const bool branch_taken_0x140a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140A38u;
            // 0x140a3c: 0x3c010021  lui         $at, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140a38) {
            ctx->pc = 0x140A58u;
            goto label_140a58;
        }
    }
    ctx->pc = 0x140A40u;
    // 0x140a40: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x140a40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x140a44: 0x8c26f840  lw          $a2, -0x7C0($at)
    ctx->pc = 0x140a44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965312)));
    // 0x140a48: 0x248402d8  addiu       $a0, $a0, 0x2D8
    ctx->pc = 0x140a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 728));
    // 0x140a4c: 0xc059e98  jal         func_167A60
    ctx->pc = 0x140A4Cu;
    SET_GPR_U32(ctx, 31, 0x140A54u);
    ctx->pc = 0x140A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140A4Cu;
            // 0x140a50: 0x24050069  addiu       $a1, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140A54u; }
        if (ctx->pc != 0x140A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140A54u; }
        if (ctx->pc != 0x140A54u) { return; }
    }
    ctx->pc = 0x140A54u;
    // 0x140a54: 0x0  nop
    ctx->pc = 0x140a54u;
    // NOP
label_140a58:
    // 0x140a58: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x140a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x140a5c: 0x8c247700  lw          $a0, 0x7700($at)
    ctx->pc = 0x140a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30464)));
    // 0x140a60: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x140a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x140a64: 0x24060031  addiu       $a2, $zero, 0x31
    ctx->pc = 0x140a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x140a68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x140a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140a6c: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x140a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x140a70: 0xc045500  jal         func_115400
    ctx->pc = 0x140A70u;
    SET_GPR_U32(ctx, 31, 0x140A78u);
    ctx->pc = 0x140A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140A70u;
            // 0x140a74: 0x240901c0  addiu       $t1, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115400u;
    if (runtime->hasFunction(0x115400u)) {
        auto targetFn = runtime->lookupFunction(0x115400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140A78u; }
        if (ctx->pc != 0x140A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsCtxSetDefaultValues_0x115400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140A78u; }
        if (ctx->pc != 0x140A78u) { return; }
    }
    ctx->pc = 0x140A78u;
    // 0x140a78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x140a78u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x140a7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x140A7Cu;
    {
        const bool branch_taken_0x140a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140A7Cu;
            // 0x140a80: 0x3c010021  lui         $at, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140a7c) {
            ctx->pc = 0x140A98u;
            goto label_140a98;
        }
    }
    ctx->pc = 0x140A84u;
    // 0x140a84: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x140a84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x140a88: 0x8c26f840  lw          $a2, -0x7C0($at)
    ctx->pc = 0x140a88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965312)));
    // 0x140a8c: 0x248402d8  addiu       $a0, $a0, 0x2D8
    ctx->pc = 0x140a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 728));
    // 0x140a90: 0xc059e98  jal         func_167A60
    ctx->pc = 0x140A90u;
    SET_GPR_U32(ctx, 31, 0x140A98u);
    ctx->pc = 0x140A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140A90u;
            // 0x140a94: 0x2405006e  addiu       $a1, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140A98u; }
        if (ctx->pc != 0x140A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140A98u; }
        if (ctx->pc != 0x140A98u) { return; }
    }
    ctx->pc = 0x140A98u;
label_140a98:
    // 0x140a98: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x140a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x140a9c: 0x8c247700  lw          $a0, 0x7700($at)
    ctx->pc = 0x140a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30464)));
    // 0x140aa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x140aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140aa4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x140aa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140aa8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x140aa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140aac: 0xc044ce8  jal         func_1133A0
    ctx->pc = 0x140AACu;
    SET_GPR_U32(ctx, 31, 0x140AB4u);
    ctx->pc = 0x140AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140AACu;
            // 0x140ab0: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1133A0u;
    if (runtime->hasFunction(0x1133A0u)) {
        auto targetFn = runtime->lookupFunction(0x1133A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140AB4u; }
        if (ctx->pc != 0x140AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsCtxSetClearColor_0x1133a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140AB4u; }
        if (ctx->pc != 0x140AB4u) { return; }
    }
    ctx->pc = 0x140AB4u;
    // 0x140ab4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x140ab4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x140ab8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x140AB8u;
    {
        const bool branch_taken_0x140ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140AB8u;
            // 0x140abc: 0x3c010021  lui         $at, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140ab8) {
            ctx->pc = 0x140AD8u;
            goto label_140ad8;
        }
    }
    ctx->pc = 0x140AC0u;
    // 0x140ac0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x140ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x140ac4: 0x8c26f840  lw          $a2, -0x7C0($at)
    ctx->pc = 0x140ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965312)));
    // 0x140ac8: 0x248402d8  addiu       $a0, $a0, 0x2D8
    ctx->pc = 0x140ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 728));
    // 0x140acc: 0xc059e98  jal         func_167A60
    ctx->pc = 0x140ACCu;
    SET_GPR_U32(ctx, 31, 0x140AD4u);
    ctx->pc = 0x140AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140ACCu;
            // 0x140ad0: 0x24050072  addiu       $a1, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140AD4u; }
        if (ctx->pc != 0x140AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140AD4u; }
        if (ctx->pc != 0x140AD4u) { return; }
    }
    ctx->pc = 0x140AD4u;
    // 0x140ad4: 0x0  nop
    ctx->pc = 0x140ad4u;
    // NOP
label_140ad8:
    // 0x140ad8: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x140ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x140adc: 0x8c247700  lw          $a0, 0x7700($at)
    ctx->pc = 0x140adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30464)));
    // 0x140ae0: 0xc044cf2  jal         func_1133C8
    ctx->pc = 0x140AE0u;
    SET_GPR_U32(ctx, 31, 0x140AE8u);
    ctx->pc = 0x140AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140AE0u;
            // 0x140ae4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1133C8u;
    if (runtime->hasFunction(0x1133C8u)) {
        auto targetFn = runtime->lookupFunction(0x1133C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140AE8u; }
        if (ctx->pc != 0x140AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsCtxSetClearZ_0x1133c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140AE8u; }
        if (ctx->pc != 0x140AE8u) { return; }
    }
    ctx->pc = 0x140AE8u;
    // 0x140ae8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x140ae8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x140aec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x140AECu;
    {
        const bool branch_taken_0x140aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140AECu;
            // 0x140af0: 0x3c010021  lui         $at, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140aec) {
            ctx->pc = 0x140B08u;
            goto label_140b08;
        }
    }
    ctx->pc = 0x140AF4u;
    // 0x140af4: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x140af4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x140af8: 0x8c26f840  lw          $a2, -0x7C0($at)
    ctx->pc = 0x140af8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965312)));
    // 0x140afc: 0x248402d8  addiu       $a0, $a0, 0x2D8
    ctx->pc = 0x140afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 728));
    // 0x140b00: 0xc059e98  jal         func_167A60
    ctx->pc = 0x140B00u;
    SET_GPR_U32(ctx, 31, 0x140B08u);
    ctx->pc = 0x140B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140B00u;
            // 0x140b04: 0x24050074  addiu       $a1, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140B08u; }
        if (ctx->pc != 0x140B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140B08u; }
        if (ctx->pc != 0x140B08u) { return; }
    }
    ctx->pc = 0x140B08u;
label_140b08:
    // 0x140b08: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x140b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x140b0c: 0x8c247700  lw          $a0, 0x7700($at)
    ctx->pc = 0x140b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30464)));
    // 0x140b10: 0xc044cf6  jal         func_1133D8
    ctx->pc = 0x140B10u;
    SET_GPR_U32(ctx, 31, 0x140B18u);
    ctx->pc = 0x140B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140B10u;
            // 0x140b14: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1133D8u;
    if (runtime->hasFunction(0x1133D8u)) {
        auto targetFn = runtime->lookupFunction(0x1133D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140B18u; }
        if (ctx->pc != 0x140B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsCtxSetClearMode_0x1133d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140B18u; }
        if (ctx->pc != 0x140B18u) { return; }
    }
    ctx->pc = 0x140B18u;
    // 0x140b18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x140b18u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x140b1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x140B1Cu;
    {
        const bool branch_taken_0x140b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140B1Cu;
            // 0x140b20: 0x3c010021  lui         $at, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140b1c) {
            ctx->pc = 0x140B38u;
            goto label_140b38;
        }
    }
    ctx->pc = 0x140B24u;
    // 0x140b24: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x140b24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x140b28: 0x8c26f840  lw          $a2, -0x7C0($at)
    ctx->pc = 0x140b28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965312)));
    // 0x140b2c: 0x248402d8  addiu       $a0, $a0, 0x2D8
    ctx->pc = 0x140b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 728));
    // 0x140b30: 0xc059e98  jal         func_167A60
    ctx->pc = 0x140B30u;
    SET_GPR_U32(ctx, 31, 0x140B38u);
    ctx->pc = 0x140B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140B30u;
            // 0x140b34: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140B38u; }
        if (ctx->pc != 0x140B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140B38u; }
        if (ctx->pc != 0x140B38u) { return; }
    }
    ctx->pc = 0x140B38u;
label_140b38:
    // 0x140b38: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x140b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x140b3c: 0x8c247700  lw          $a0, 0x7700($at)
    ctx->pc = 0x140b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30464)));
    // 0x140b40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x140b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140b44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x140b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140b48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x140b48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140b4c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x140b4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140b50: 0xc0451ac  jal         func_1146B0
    ctx->pc = 0x140B50u;
    SET_GPR_U32(ctx, 31, 0x140B58u);
    ctx->pc = 0x140B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140B50u;
            // 0x140b54: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1146B0u;
    if (runtime->hasFunction(0x1146B0u)) {
        auto targetFn = runtime->lookupFunction(0x1146B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140B58u; }
        if (ctx->pc != 0x140B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsCtxSetRegAlpha_0x1146b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140B58u; }
        if (ctx->pc != 0x140B58u) { return; }
    }
    ctx->pc = 0x140B58u;
    // 0x140b58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x140b58u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x140b5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x140B5Cu;
    {
        const bool branch_taken_0x140b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140B5Cu;
            // 0x140b60: 0x3c010021  lui         $at, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140b5c) {
            ctx->pc = 0x140B78u;
            goto label_140b78;
        }
    }
    ctx->pc = 0x140B64u;
    // 0x140b64: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x140b64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x140b68: 0x8c26f840  lw          $a2, -0x7C0($at)
    ctx->pc = 0x140b68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965312)));
    // 0x140b6c: 0x248402d8  addiu       $a0, $a0, 0x2D8
    ctx->pc = 0x140b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 728));
    // 0x140b70: 0xc059e98  jal         func_167A60
    ctx->pc = 0x140B70u;
    SET_GPR_U32(ctx, 31, 0x140B78u);
    ctx->pc = 0x140B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140B70u;
            // 0x140b74: 0x2405007b  addiu       $a1, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140B78u; }
        if (ctx->pc != 0x140B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140B78u; }
        if (ctx->pc != 0x140B78u) { return; }
    }
    ctx->pc = 0x140B78u;
label_140b78:
    // 0x140b78: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x140b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x140b7c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x140b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x140b80: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x140b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x140b84: 0x8c247700  lw          $a0, 0x7700($at)
    ctx->pc = 0x140b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30464)));
    // 0x140b88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x140b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140b8c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x140b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x140b90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x140b90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140b94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x140b94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140b98: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x140b98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140b9c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x140b9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140ba0: 0xc04517a  jal         func_1145E8
    ctx->pc = 0x140BA0u;
    SET_GPR_U32(ctx, 31, 0x140BA8u);
    ctx->pc = 0x140BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140BA0u;
            // 0x140ba4: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1145E8u;
    if (runtime->hasFunction(0x1145E8u)) {
        auto targetFn = runtime->lookupFunction(0x1145E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140BA8u; }
        if (ctx->pc != 0x140BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsCtxSetRegTest_0x1145e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140BA8u; }
        if (ctx->pc != 0x140BA8u) { return; }
    }
    ctx->pc = 0x140BA8u;
    // 0x140ba8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x140ba8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x140bac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x140BACu;
    {
        const bool branch_taken_0x140bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140BACu;
            // 0x140bb0: 0x3c010021  lui         $at, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140bac) {
            ctx->pc = 0x140BC8u;
            goto label_140bc8;
        }
    }
    ctx->pc = 0x140BB4u;
    // 0x140bb4: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x140bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x140bb8: 0x8c26f840  lw          $a2, -0x7C0($at)
    ctx->pc = 0x140bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965312)));
    // 0x140bbc: 0x248402d8  addiu       $a0, $a0, 0x2D8
    ctx->pc = 0x140bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 728));
    // 0x140bc0: 0xc059e98  jal         func_167A60
    ctx->pc = 0x140BC0u;
    SET_GPR_U32(ctx, 31, 0x140BC8u);
    ctx->pc = 0x140BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140BC0u;
            // 0x140bc4: 0x24050081  addiu       $a1, $zero, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140BC8u; }
        if (ctx->pc != 0x140BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140BC8u; }
        if (ctx->pc != 0x140BC8u) { return; }
    }
    ctx->pc = 0x140BC8u;
label_140bc8:
    // 0x140bc8: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x140bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x140bcc: 0x8c247700  lw          $a0, 0x7700($at)
    ctx->pc = 0x140bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30464)));
    // 0x140bd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x140bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140bd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x140bd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140bd8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x140bd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140bdc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x140bdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140be0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x140be0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140be4: 0xc04514c  jal         func_114530
    ctx->pc = 0x140BE4u;
    SET_GPR_U32(ctx, 31, 0x140BECu);
    ctx->pc = 0x140BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140BE4u;
            // 0x140be8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114530u;
    if (runtime->hasFunction(0x114530u)) {
        auto targetFn = runtime->lookupFunction(0x114530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140BECu; }
        if (ctx->pc != 0x140BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsCtxSetRegClamp_0x114530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140BECu; }
        if (ctx->pc != 0x140BECu) { return; }
    }
    ctx->pc = 0x140BECu;
    // 0x140bec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x140becu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x140bf0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x140BF0u;
    {
        const bool branch_taken_0x140bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140BF0u;
            // 0x140bf4: 0x3c010021  lui         $at, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140bf0) {
            ctx->pc = 0x140C10u;
            goto label_140c10;
        }
    }
    ctx->pc = 0x140BF8u;
    // 0x140bf8: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x140bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x140bfc: 0x8c26f840  lw          $a2, -0x7C0($at)
    ctx->pc = 0x140bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965312)));
    // 0x140c00: 0x248402d8  addiu       $a0, $a0, 0x2D8
    ctx->pc = 0x140c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 728));
    // 0x140c04: 0xc059e98  jal         func_167A60
    ctx->pc = 0x140C04u;
    SET_GPR_U32(ctx, 31, 0x140C0Cu);
    ctx->pc = 0x140C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140C04u;
            // 0x140c08: 0x24050083  addiu       $a1, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140C0Cu; }
        if (ctx->pc != 0x140C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140C0Cu; }
        if (ctx->pc != 0x140C0Cu) { return; }
    }
    ctx->pc = 0x140C0Cu;
    // 0x140c0c: 0x0  nop
    ctx->pc = 0x140c0cu;
    // NOP
label_140c10:
    // 0x140c10: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x140c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x140c14: 0x8c247700  lw          $a0, 0x7700($at)
    ctx->pc = 0x140c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30464)));
    // 0x140c18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x140c18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140c1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x140c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140c20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x140c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140c24: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x140c24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140c28: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x140c28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140c2c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x140c2cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140c30: 0xc0450ae  jal         func_1142B8
    ctx->pc = 0x140C30u;
    SET_GPR_U32(ctx, 31, 0x140C38u);
    ctx->pc = 0x140C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140C30u;
            // 0x140c34: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1142B8u;
    if (runtime->hasFunction(0x1142B8u)) {
        auto targetFn = runtime->lookupFunction(0x1142B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140C38u; }
        if (ctx->pc != 0x140C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsCtxSetRegTex1_0x1142b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140C38u; }
        if (ctx->pc != 0x140C38u) { return; }
    }
    ctx->pc = 0x140C38u;
    // 0x140c38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x140c38u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x140c3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x140C3Cu;
    {
        const bool branch_taken_0x140c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140C3Cu;
            // 0x140c40: 0x3c010021  lui         $at, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140c3c) {
            ctx->pc = 0x140C58u;
            goto label_140c58;
        }
    }
    ctx->pc = 0x140C44u;
    // 0x140c44: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x140c44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x140c48: 0x8c26f840  lw          $a2, -0x7C0($at)
    ctx->pc = 0x140c48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965312)));
    // 0x140c4c: 0x248402d8  addiu       $a0, $a0, 0x2D8
    ctx->pc = 0x140c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 728));
    // 0x140c50: 0xc059e98  jal         func_167A60
    ctx->pc = 0x140C50u;
    SET_GPR_U32(ctx, 31, 0x140C58u);
    ctx->pc = 0x140C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140C50u;
            // 0x140c54: 0x24050085  addiu       $a1, $zero, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140C58u; }
        if (ctx->pc != 0x140C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140C58u; }
        if (ctx->pc != 0x140C58u) { return; }
    }
    ctx->pc = 0x140C58u;
label_140c58:
    // 0x140c58: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x140c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x140c5c: 0x8c247700  lw          $a0, 0x7700($at)
    ctx->pc = 0x140c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30464)));
    // 0x140c60: 0xc044a0c  jal         func_112830
    ctx->pc = 0x140C60u;
    SET_GPR_U32(ctx, 31, 0x140C68u);
    ctx->pc = 0x140C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140C60u;
            // 0x140c64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112830u;
    if (runtime->hasFunction(0x112830u)) {
        auto targetFn = runtime->lookupFunction(0x112830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140C68u; }
        if (ctx->pc != 0x140C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsCtxSetHalfOffset_0x112830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140C68u; }
        if (ctx->pc != 0x140C68u) { return; }
    }
    ctx->pc = 0x140C68u;
    // 0x140c68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x140c68u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x140c6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x140C6Cu;
    {
        const bool branch_taken_0x140c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140C6Cu;
            // 0x140c70: 0x3c010021  lui         $at, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140c6c) {
            ctx->pc = 0x140C88u;
            goto label_140c88;
        }
    }
    ctx->pc = 0x140C74u;
    // 0x140c74: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x140c74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x140c78: 0x8c26f840  lw          $a2, -0x7C0($at)
    ctx->pc = 0x140c78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965312)));
    // 0x140c7c: 0x248402d8  addiu       $a0, $a0, 0x2D8
    ctx->pc = 0x140c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 728));
    // 0x140c80: 0xc059e98  jal         func_167A60
    ctx->pc = 0x140C80u;
    SET_GPR_U32(ctx, 31, 0x140C88u);
    ctx->pc = 0x140C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140C80u;
            // 0x140c84: 0x24050088  addiu       $a1, $zero, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140C88u; }
        if (ctx->pc != 0x140C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140C88u; }
        if (ctx->pc != 0x140C88u) { return; }
    }
    ctx->pc = 0x140C88u;
label_140c88:
    // 0x140c88: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x140c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x140c8c: 0xc044c86  jal         func_113218
    ctx->pc = 0x140C8Cu;
    SET_GPR_U32(ctx, 31, 0x140C94u);
    ctx->pc = 0x140C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140C8Cu;
            // 0x140c90: 0x8c247700  lw          $a0, 0x7700($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30464)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x113218u;
    if (runtime->hasFunction(0x113218u)) {
        auto targetFn = runtime->lookupFunction(0x113218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140C94u; }
        if (ctx->pc != 0x140C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsCtxUpdate_0x113218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140C94u; }
        if (ctx->pc != 0x140C94u) { return; }
    }
    ctx->pc = 0x140C94u;
    // 0x140c94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x140c94u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x140c98: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x140C98u;
    {
        const bool branch_taken_0x140c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140C98u;
            // 0x140c9c: 0x3c010021  lui         $at, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140c98) {
            ctx->pc = 0x140CB8u;
            goto label_140cb8;
        }
    }
    ctx->pc = 0x140CA0u;
    // 0x140ca0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x140ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x140ca4: 0x8c26f840  lw          $a2, -0x7C0($at)
    ctx->pc = 0x140ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965312)));
    // 0x140ca8: 0x248402d8  addiu       $a0, $a0, 0x2D8
    ctx->pc = 0x140ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 728));
    // 0x140cac: 0xc059e98  jal         func_167A60
    ctx->pc = 0x140CACu;
    SET_GPR_U32(ctx, 31, 0x140CB4u);
    ctx->pc = 0x140CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140CACu;
            // 0x140cb0: 0x2405008e  addiu       $a1, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140CB4u; }
        if (ctx->pc != 0x140CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140CB4u; }
        if (ctx->pc != 0x140CB4u) { return; }
    }
    ctx->pc = 0x140CB4u;
    // 0x140cb4: 0x0  nop
    ctx->pc = 0x140cb4u;
    // NOP
label_140cb8:
    // 0x140cb8: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x140cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x140cbc: 0x8c24fbc0  lw          $a0, -0x440($at)
    ctx->pc = 0x140cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966208)));
    // 0x140cc0: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x140cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x140cc4: 0xc044a50  jal         func_112940
    ctx->pc = 0x140CC4u;
    SET_GPR_U32(ctx, 31, 0x140CCCu);
    ctx->pc = 0x140CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140CC4u;
            // 0x140cc8: 0x8c257700  lw          $a1, 0x7700($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30464)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112940u;
    if (runtime->hasFunction(0x112940u)) {
        auto targetFn = runtime->lookupFunction(0x112940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140CCCu; }
        if (ctx->pc != 0x140CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsCtxCopy_0x112940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140CCCu; }
        if (ctx->pc != 0x140CCCu) { return; }
    }
    ctx->pc = 0x140CCCu;
    // 0x140ccc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x140cccu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x140cd0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x140CD0u;
    {
        const bool branch_taken_0x140cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140CD0u;
            // 0x140cd4: 0x3c010021  lui         $at, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140cd0) {
            ctx->pc = 0x140CF0u;
            goto label_140cf0;
        }
    }
    ctx->pc = 0x140CD8u;
    // 0x140cd8: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x140cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x140cdc: 0x8c26f840  lw          $a2, -0x7C0($at)
    ctx->pc = 0x140cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965312)));
    // 0x140ce0: 0x248402d8  addiu       $a0, $a0, 0x2D8
    ctx->pc = 0x140ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 728));
    // 0x140ce4: 0xc059e98  jal         func_167A60
    ctx->pc = 0x140CE4u;
    SET_GPR_U32(ctx, 31, 0x140CECu);
    ctx->pc = 0x140CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140CE4u;
            // 0x140ce8: 0x24050096  addiu       $a1, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140CECu; }
        if (ctx->pc != 0x140CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140CECu; }
        if (ctx->pc != 0x140CECu) { return; }
    }
    ctx->pc = 0x140CECu;
    // 0x140cec: 0x0  nop
    ctx->pc = 0x140cecu;
    // NOP
label_140cf0:
    // 0x140cf0: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x140cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x140cf4: 0xc044c86  jal         func_113218
    ctx->pc = 0x140CF4u;
    SET_GPR_U32(ctx, 31, 0x140CFCu);
    ctx->pc = 0x140CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140CF4u;
            // 0x140cf8: 0x8c24fbc0  lw          $a0, -0x440($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966208)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x113218u;
    if (runtime->hasFunction(0x113218u)) {
        auto targetFn = runtime->lookupFunction(0x113218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140CFCu; }
        if (ctx->pc != 0x140CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsCtxUpdate_0x113218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140CFCu; }
        if (ctx->pc != 0x140CFCu) { return; }
    }
    ctx->pc = 0x140CFCu;
    // 0x140cfc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x140cfcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x140d00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x140D00u;
    {
        const bool branch_taken_0x140d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140D00u;
            // 0x140d04: 0x3c010021  lui         $at, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140d00) {
            ctx->pc = 0x140D20u;
            goto label_140d20;
        }
    }
    ctx->pc = 0x140D08u;
    // 0x140d08: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x140d08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x140d0c: 0x8c26f840  lw          $a2, -0x7C0($at)
    ctx->pc = 0x140d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965312)));
    // 0x140d10: 0x248402d8  addiu       $a0, $a0, 0x2D8
    ctx->pc = 0x140d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 728));
    // 0x140d14: 0xc059e98  jal         func_167A60
    ctx->pc = 0x140D14u;
    SET_GPR_U32(ctx, 31, 0x140D1Cu);
    ctx->pc = 0x140D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140D14u;
            // 0x140d18: 0x24050098  addiu       $a1, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140D1Cu; }
        if (ctx->pc != 0x140D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140D1Cu; }
        if (ctx->pc != 0x140D1Cu) { return; }
    }
    ctx->pc = 0x140D1Cu;
    // 0x140d1c: 0x0  nop
    ctx->pc = 0x140d1cu;
    // NOP
label_140d20:
    // 0x140d20: 0xc0448b8  jal         func_1122E0
    ctx->pc = 0x140D20u;
    SET_GPR_U32(ctx, 31, 0x140D28u);
    ctx->pc = 0x140D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140D20u;
            // 0x140d24: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1122E0u;
    if (runtime->hasFunction(0x1122E0u)) {
        auto targetFn = runtime->lookupFunction(0x1122E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140D28u; }
        if (ctx->pc != 0x140D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsCtxCreate_0x1122e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140D28u; }
        if (ctx->pc != 0x140D28u) { return; }
    }
    ctx->pc = 0x140D28u;
    // 0x140d28: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x140d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x140d2c: 0xac2276c0  sw          $v0, 0x76C0($at)
    ctx->pc = 0x140d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30400), GPR_U32(ctx, 2));
    // 0x140d30: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x140d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x140d34: 0x8c2476c0  lw          $a0, 0x76C0($at)
    ctx->pc = 0x140d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30400)));
    // 0x140d38: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x140d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x140d3c: 0xc044a50  jal         func_112940
    ctx->pc = 0x140D3Cu;
    SET_GPR_U32(ctx, 31, 0x140D44u);
    ctx->pc = 0x140D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140D3Cu;
            // 0x140d40: 0x8c257700  lw          $a1, 0x7700($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30464)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112940u;
    if (runtime->hasFunction(0x112940u)) {
        auto targetFn = runtime->lookupFunction(0x112940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140D44u; }
        if (ctx->pc != 0x140D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsCtxCopy_0x112940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140D44u; }
        if (ctx->pc != 0x140D44u) { return; }
    }
    ctx->pc = 0x140D44u;
    // 0x140d44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x140d44u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x140d48: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x140D48u;
    {
        const bool branch_taken_0x140d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140D48u;
            // 0x140d4c: 0x3c010021  lui         $at, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140d48) {
            ctx->pc = 0x140D68u;
            goto label_140d68;
        }
    }
    ctx->pc = 0x140D50u;
    // 0x140d50: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x140d50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x140d54: 0x8c26f840  lw          $a2, -0x7C0($at)
    ctx->pc = 0x140d54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965312)));
    // 0x140d58: 0x248402d8  addiu       $a0, $a0, 0x2D8
    ctx->pc = 0x140d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 728));
    // 0x140d5c: 0xc059e98  jal         func_167A60
    ctx->pc = 0x140D5Cu;
    SET_GPR_U32(ctx, 31, 0x140D64u);
    ctx->pc = 0x140D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140D5Cu;
            // 0x140d60: 0x2405009c  addiu       $a1, $zero, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140D64u; }
        if (ctx->pc != 0x140D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140D64u; }
        if (ctx->pc != 0x140D64u) { return; }
    }
    ctx->pc = 0x140D64u;
    // 0x140d64: 0x0  nop
    ctx->pc = 0x140d64u;
    // NOP
label_140d68:
    // 0x140d68: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x140d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x140d6c: 0x8c2476c0  lw          $a0, 0x76C0($at)
    ctx->pc = 0x140d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30400)));
    // 0x140d70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x140d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140d74: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x140d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x140d78: 0xc04502a  jal         func_1140A8
    ctx->pc = 0x140D78u;
    SET_GPR_U32(ctx, 31, 0x140D80u);
    ctx->pc = 0x140D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140D78u;
            // 0x140d7c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1140A8u;
    if (runtime->hasFunction(0x1140A8u)) {
        auto targetFn = runtime->lookupFunction(0x1140A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140D80u; }
        if (ctx->pc != 0x140D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsCtxSetRegZbuf_0x1140a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140D80u; }
        if (ctx->pc != 0x140D80u) { return; }
    }
    ctx->pc = 0x140D80u;
    // 0x140d80: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x140d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x140d84: 0xc044c86  jal         func_113218
    ctx->pc = 0x140D84u;
    SET_GPR_U32(ctx, 31, 0x140D8Cu);
    ctx->pc = 0x140D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140D84u;
            // 0x140d88: 0x8c2476c0  lw          $a0, 0x76C0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30400)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x113218u;
    if (runtime->hasFunction(0x113218u)) {
        auto targetFn = runtime->lookupFunction(0x113218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140D8Cu; }
        if (ctx->pc != 0x140D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsCtxUpdate_0x113218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140D8Cu; }
        if (ctx->pc != 0x140D8Cu) { return; }
    }
    ctx->pc = 0x140D8Cu;
    // 0x140d8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x140d8cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x140d90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x140D90u;
    {
        const bool branch_taken_0x140d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140D90u;
            // 0x140d94: 0x3c010021  lui         $at, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140d90) {
            ctx->pc = 0x140DB0u;
            goto label_140db0;
        }
    }
    ctx->pc = 0x140D98u;
    // 0x140d98: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x140d98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x140d9c: 0x8c26f840  lw          $a2, -0x7C0($at)
    ctx->pc = 0x140d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965312)));
    // 0x140da0: 0x248402d8  addiu       $a0, $a0, 0x2D8
    ctx->pc = 0x140da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 728));
    // 0x140da4: 0xc059e98  jal         func_167A60
    ctx->pc = 0x140DA4u;
    SET_GPR_U32(ctx, 31, 0x140DACu);
    ctx->pc = 0x140DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140DA4u;
            // 0x140da8: 0x240500a0  addiu       $a1, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140DACu; }
        if (ctx->pc != 0x140DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140DACu; }
        if (ctx->pc != 0x140DACu) { return; }
    }
    ctx->pc = 0x140DACu;
    // 0x140dac: 0x0  nop
    ctx->pc = 0x140dacu;
    // NOP
label_140db0:
    // 0x140db0: 0xc04421e  jal         func_110878
    ctx->pc = 0x140DB0u;
    SET_GPR_U32(ctx, 31, 0x140DB8u);
    ctx->pc = 0x110878u;
    if (runtime->hasFunction(0x110878u)) {
        auto targetFn = runtime->lookupFunction(0x110878u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140DB8u; }
        if (ctx->pc != 0x140DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsDisplayStatus_0x110878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140DB8u; }
        if (ctx->pc != 0x140DB8u) { return; }
    }
    ctx->pc = 0x140DB8u;
    // 0x140db8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x140db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x140DBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140DBCu;
            // 0x140dc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1409D0u: goto label_1409d0;
            case 0x140A08u: goto label_140a08;
            case 0x140A58u: goto label_140a58;
            case 0x140A98u: goto label_140a98;
            case 0x140AD8u: goto label_140ad8;
            case 0x140B08u: goto label_140b08;
            case 0x140B38u: goto label_140b38;
            case 0x140B78u: goto label_140b78;
            case 0x140BC8u: goto label_140bc8;
            case 0x140C10u: goto label_140c10;
            case 0x140C58u: goto label_140c58;
            case 0x140C88u: goto label_140c88;
            case 0x140CB8u: goto label_140cb8;
            case 0x140CF0u: goto label_140cf0;
            case 0x140D20u: goto label_140d20;
            case 0x140D68u: goto label_140d68;
            case 0x140DB0u: goto label_140db0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x140DC4u;
}
