#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: PowerOffCB
// Address: 0x117bb0 - 0x117d38
void PowerOffCB_0x117bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("PowerOffCB_0x117bb0");
#endif

    ctx->pc = 0x117bb0u;

    // 0x117bb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x117bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x117bb4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x117bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117bb8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x117bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x117bbc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x117bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x117bc0: 0x3c140017  lui         $s4, 0x17
    ctx->pc = 0x117bc0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)23 << 16));
    // 0x117bc4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x117bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x117bc8: 0x3c120017  lui         $s2, 0x17
    ctx->pc = 0x117bc8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)23 << 16));
    // 0x117bcc: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x117bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x117bd0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x117bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x117bd4: 0xc043f10  jal         func_10FC40
    ctx->pc = 0x117BD4u;
    SET_GPR_U32(ctx, 31, 0x117BDCu);
    ctx->pc = 0x117BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117BD4u;
            // 0x117bd8: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FC40u;
    if (runtime->hasFunction(0x10FC40u)) {
        auto targetFn = runtime->lookupFunction(0x10FC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117BDCu; }
        if (ctx->pc != 0x117BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitRpc_0x10fc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117BDCu; }
        if (ctx->pc != 0x117BDCu) { return; }
    }
    ctx->pc = 0x117BDCu;
    // 0x117bdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x117bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117be0: 0xc0453ee  jal         func_114FB8
    ctx->pc = 0x117BE0u;
    SET_GPR_U32(ctx, 31, 0x117BE8u);
    ctx->pc = 0x117BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117BE0u;
            // 0x117be4: 0xae82fca4  sw          $v0, -0x35C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294966436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114FB8u;
    if (runtime->hasFunction(0x114FB8u)) {
        auto targetFn = runtime->lookupFunction(0x114FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117BE8u; }
        if (ctx->pc != 0x117BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x114fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117BE8u; }
        if (ctx->pc != 0x117BE8u) { return; }
    }
    ctx->pc = 0x117BE8u;
    // 0x117be8: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x117be8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x117bec: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x117becu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x117bf0: 0x24a57b70  addiu       $a1, $a1, 0x7B70
    ctx->pc = 0x117bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31600));
    // 0x117bf4: 0x34840012  ori         $a0, $a0, 0x12
    ctx->pc = 0x117bf4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)18u)));
    // 0x117bf8: 0xc04564c  jal         func_115930
    ctx->pc = 0x117BF8u;
    SET_GPR_U32(ctx, 31, 0x117C00u);
    ctx->pc = 0x117BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117BF8u;
            // 0x117bfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115930u;
    if (runtime->hasFunction(0x115930u)) {
        auto targetFn = runtime->lookupFunction(0x115930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117C00u; }
        if (ctx->pc != 0x117C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifAddCmdHandler_0x115930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117C00u; }
        if (ctx->pc != 0x117C00u) { return; }
    }
    ctx->pc = 0x117C00u;
    // 0x117c00: 0xc045400  jal         func_115000
    ctx->pc = 0x117C00u;
    SET_GPR_U32(ctx, 31, 0x117C08u);
    ctx->pc = 0x115000u;
    if (runtime->hasFunction(0x115000u)) {
        auto targetFn = runtime->lookupFunction(0x115000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117C08u; }
        if (ctx->pc != 0x117C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x115000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117C08u; }
        if (ctx->pc != 0x117C08u) { return; }
    }
    ctx->pc = 0x117C08u;
    // 0x117c08: 0x8e43fcbc  lw          $v1, -0x344($s2)
    ctx->pc = 0x117c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294966460)));
    // 0x117c0c: 0x461002e  bgez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x117C0Cu;
    {
        const bool branch_taken_0x117c0c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x117C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117C0Cu;
            // 0x117c10: 0x3c130018  lui         $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)24 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117c0c) {
            ctx->pc = 0x117CC8u;
            goto label_117cc8;
        }
    }
    ctx->pc = 0x117C14u;
    // 0x117c14: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x117C14u;
    {
        const bool branch_taken_0x117c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117C14u;
            // 0x117c18: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117c14) {
            ctx->pc = 0x117C54u;
            goto label_117c54;
        }
    }
    ctx->pc = 0x117C1Cu;
    // 0x117c1c: 0x0  nop
    ctx->pc = 0x117c1cu;
    // NOP
label_117c20:
    // 0x117c20: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x117c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x117c24: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x117c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_117c28:
    // 0x117c28: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x117c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x117c2c: 0x0  nop
    ctx->pc = 0x117c2cu;
    // NOP
    // 0x117c30: 0x0  nop
    ctx->pc = 0x117c30u;
    // NOP
    // 0x117c34: 0x0  nop
    ctx->pc = 0x117c34u;
    // NOP
    // 0x117c38: 0x0  nop
    ctx->pc = 0x117c38u;
    // NOP
    // 0x117c3c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x117C3Cu;
    {
        const bool branch_taken_0x117c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x117c3c) {
            ctx->pc = 0x117C28u;
            goto label_117c28;
        }
    }
    ctx->pc = 0x117C44u;
    // 0x117c44: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x117c44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117c48: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x117c48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x117c4c: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x117C4Cu;
    {
        const bool branch_taken_0x117c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117C4Cu;
            // 0x117c50: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117c4c) {
            ctx->pc = 0x117D04u;
            goto label_117d04;
        }
    }
    ctx->pc = 0x117C54u;
label_117c54:
    // 0x117c54: 0x2670c0f8  addiu       $s0, $s3, -0x3F08
    ctx->pc = 0x117c54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951160));
label_117c58:
    // 0x117c58: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x117c58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x117c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117c60: 0x34a50596  ori         $a1, $a1, 0x596
    ctx->pc = 0x117c60u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)1430u)));
    // 0x117c64: 0xc0440ac  jal         func_1102B0
    ctx->pc = 0x117C64u;
    SET_GPR_U32(ctx, 31, 0x117C6Cu);
    ctx->pc = 0x117C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117C64u;
            // 0x117c68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1102B0u;
    if (runtime->hasFunction(0x1102B0u)) {
        auto targetFn = runtime->lookupFunction(0x1102B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117C6Cu; }
        if (ctx->pc != 0x117C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifBindRpc_0x1102b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117C6Cu; }
        if (ctx->pc != 0x117C6Cu) { return; }
    }
    ctx->pc = 0x117C6Cu;
    // 0x117c6c: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x117C6Cu;
    {
        const bool branch_taken_0x117c6c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x117c6c) {
            ctx->pc = 0x117C70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117C6Cu;
            // 0x117c70: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x117CBCu;
            goto label_117cbc;
        }
    }
    ctx->pc = 0x117C74u;
    // 0x117c74: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x117c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x117c78: 0x8c43fc90  lw          $v1, -0x370($v0)
    ctx->pc = 0x117c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966416)));
    // 0x117c7c: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x117C7Cu;
    {
        const bool branch_taken_0x117c7c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x117C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117C7Cu;
            // 0x117c80: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117c7c) {
            ctx->pc = 0x117C94u;
            goto label_117c94;
        }
    }
    ctx->pc = 0x117C84u;
    // 0x117c84: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x117c84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x117c88: 0xc043ef8  jal         func_10FBE0
    ctx->pc = 0x117C88u;
    SET_GPR_U32(ctx, 31, 0x117C90u);
    ctx->pc = 0x117C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117C88u;
            // 0x117c8c: 0x24844240  addiu       $a0, $a0, 0x4240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FBE0u;
    if (runtime->hasFunction(0x10FBE0u)) {
        auto targetFn = runtime->lookupFunction(0x10FBE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117C90u; }
        if (ctx->pc != 0x117C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePrintf_0x10fbe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117C90u; }
        if (ctx->pc != 0x117C90u) { return; }
    }
    ctx->pc = 0x117C90u;
    // 0x117c90: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x117c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_117c94:
    // 0x117c94: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x117c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_117c98:
    // 0x117c98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x117c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x117c9c: 0x0  nop
    ctx->pc = 0x117c9cu;
    // NOP
    // 0x117ca0: 0x0  nop
    ctx->pc = 0x117ca0u;
    // NOP
    // 0x117ca4: 0x0  nop
    ctx->pc = 0x117ca4u;
    // NOP
    // 0x117ca8: 0x0  nop
    ctx->pc = 0x117ca8u;
    // NOP
    // 0x117cac: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x117CACu;
    {
        const bool branch_taken_0x117cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x117cac) {
            ctx->pc = 0x117C98u;
            goto label_117c98;
        }
    }
    ctx->pc = 0x117CB4u;
    // 0x117cb4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x117CB4u;
    {
        const bool branch_taken_0x117cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117CB4u;
            // 0x117cb8: 0x2670c0f8  addiu       $s0, $s3, -0x3F08 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117cb4) {
            ctx->pc = 0x117C58u;
            goto label_117c58;
        }
    }
    ctx->pc = 0x117CBCu;
label_117cbc:
    // 0x117cbc: 0x1040ffd8  beqz        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x117CBCu;
    {
        const bool branch_taken_0x117cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117CBCu;
            // 0x117cc0: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117cbc) {
            ctx->pc = 0x117C20u;
            goto label_117c20;
        }
    }
    ctx->pc = 0x117CC4u;
    // 0x117cc4: 0xae40fcbc  sw          $zero, -0x344($s2)
    ctx->pc = 0x117cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294966460), GPR_U32(ctx, 0));
label_117cc8:
    // 0x117cc8: 0x3c030018  lui         $v1, 0x18
    ctx->pc = 0x117cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24 << 16));
    // 0x117ccc: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x117cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x117cd0: 0xac62c120  sw          $v0, -0x3EE0($v1)
    ctx->pc = 0x117cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294951200), GPR_U32(ctx, 2));
    // 0x117cd4: 0x2664c0f8  addiu       $a0, $s3, -0x3F08
    ctx->pc = 0x117cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951160));
    // 0x117cd8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x117cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x117cdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x117cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117ce0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x117ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117ce4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x117ce4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ce8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x117ce8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117cec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x117cecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117cf0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x117cf0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117cf4: 0xc044120  jal         func_110480
    ctx->pc = 0x117CF4u;
    SET_GPR_U32(ctx, 31, 0x117CFCu);
    ctx->pc = 0x117CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117CF4u;
            // 0x117cf8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110480u;
    if (runtime->hasFunction(0x110480u)) {
        auto targetFn = runtime->lookupFunction(0x110480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117CFCu; }
        if (ctx->pc != 0x117CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifCallRpc_0x110480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117CFCu; }
        if (ctx->pc != 0x117CFCu) { return; }
    }
    ctx->pc = 0x117CFCu;
    // 0x117cfc: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x117CFCu;
    {
        const bool branch_taken_0x117cfc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x117cfc) {
            ctx->pc = 0x117D10u;
            goto label_117d10;
        }
    }
    ctx->pc = 0x117D04u;
label_117d04:
    // 0x117d04: 0xae80fca4  sw          $zero, -0x35C($s4)
    ctx->pc = 0x117d04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294966436), GPR_U32(ctx, 0));
    // 0x117d08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x117D08u;
    {
        const bool branch_taken_0x117d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117D08u;
            // 0x117d0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d08) {
            ctx->pc = 0x117D18u;
            goto label_117d18;
        }
    }
    ctx->pc = 0x117D10u;
label_117d10:
    // 0x117d10: 0xae80fca4  sw          $zero, -0x35C($s4)
    ctx->pc = 0x117d10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294966436), GPR_U32(ctx, 0));
    // 0x117d14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x117d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_117d18:
    // 0x117d18: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x117d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x117d1c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x117d1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x117d20: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x117d20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x117d24: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x117d24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117d28: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x117d28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117d2c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x117d2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117d30: 0x3e00008  jr          $ra
    ctx->pc = 0x117D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117D30u;
            // 0x117d34: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117C20u: goto label_117c20;
            case 0x117C28u: goto label_117c28;
            case 0x117C54u: goto label_117c54;
            case 0x117C58u: goto label_117c58;
            case 0x117C94u: goto label_117c94;
            case 0x117C98u: goto label_117c98;
            case 0x117CBCu: goto label_117cbc;
            case 0x117CC8u: goto label_117cc8;
            case 0x117D04u: goto label_117d04;
            case 0x117D10u: goto label_117d10;
            case 0x117D18u: goto label_117d18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x117D38u;
}
