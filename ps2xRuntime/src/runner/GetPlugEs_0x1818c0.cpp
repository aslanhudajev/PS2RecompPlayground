#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: GetPlugEs
// Address: 0x1818c0 - 0x1819f4
void GetPlugEs_0x1818c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("GetPlugEs_0x1818c0");
#endif

    ctx->pc = 0x1818c0u;

    // 0x1818c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1818c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1818c4: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x1818c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1818c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1818c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1818cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1818ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1818d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1818d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1818d4: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x1818D4u;
    {
        const bool branch_taken_0x1818d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1818D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1818D4u;
            // 0x1818d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1818d4) {
            ctx->pc = 0x1819D0u;
            goto label_1819d0;
        }
    }
    ctx->pc = 0x1818DCu;
    // 0x1818dc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1818dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1818e0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1818e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1818e4: 0x246320b0  addiu       $v1, $v1, 0x20B0
    ctx->pc = 0x1818e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8368));
    // 0x1818e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1818e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1818ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1818ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1818f0: 0x400008  jr          $v0
    ctx->pc = 0x1818F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1818F8u: goto label_1818f8;
            case 0x181918u: goto label_181918;
            case 0x181938u: goto label_181938;
            case 0x181958u: goto label_181958;
            case 0x181978u: goto label_181978;
            case 0x181998u: goto label_181998;
            case 0x1819B8u: goto label_1819b8;
            case 0x1819D0u: goto label_1819d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1818F8u;
label_1818f8:
    // 0x1818f8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1818f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1818fc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1818fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x181900: 0x24a52070  addiu       $a1, $a1, 0x2070
    ctx->pc = 0x181900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8304));
    // 0x181904: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x181904u;
    SET_GPR_U32(ctx, 31, 0x18190Cu);
    ctx->pc = 0x181908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181904u;
            // 0x181908: 0x26110170  addiu       $s1, $s0, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18190Cu; }
        if (ctx->pc != 0x18190Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18190Cu; }
        if (ctx->pc != 0x18190Cu) { return; }
    }
    ctx->pc = 0x18190Cu;
    // 0x18190c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x18190Cu;
    {
        const bool branch_taken_0x18190c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18190c) {
            ctx->pc = 0x1819D0u;
            goto label_1819d0;
        }
    }
    ctx->pc = 0x181914u;
    // 0x181914: 0x0  nop
    ctx->pc = 0x181914u;
    // NOP
label_181918:
    // 0x181918: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x181918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18191c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18191cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x181920: 0x24a52078  addiu       $a1, $a1, 0x2078
    ctx->pc = 0x181920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8312));
    // 0x181924: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x181924u;
    SET_GPR_U32(ctx, 31, 0x18192Cu);
    ctx->pc = 0x181928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181924u;
            // 0x181928: 0x26110174  addiu       $s1, $s0, 0x174 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 372));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18192Cu; }
        if (ctx->pc != 0x18192Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18192Cu; }
        if (ctx->pc != 0x18192Cu) { return; }
    }
    ctx->pc = 0x18192Cu;
    // 0x18192c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x18192Cu;
    {
        const bool branch_taken_0x18192c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18192c) {
            ctx->pc = 0x1819D0u;
            goto label_1819d0;
        }
    }
    ctx->pc = 0x181934u;
    // 0x181934: 0x0  nop
    ctx->pc = 0x181934u;
    // NOP
label_181938:
    // 0x181938: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x181938u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18193c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18193cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x181940: 0x24a52080  addiu       $a1, $a1, 0x2080
    ctx->pc = 0x181940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8320));
    // 0x181944: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x181944u;
    SET_GPR_U32(ctx, 31, 0x18194Cu);
    ctx->pc = 0x181948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181944u;
            // 0x181948: 0x26110178  addiu       $s1, $s0, 0x178 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18194Cu; }
        if (ctx->pc != 0x18194Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18194Cu; }
        if (ctx->pc != 0x18194Cu) { return; }
    }
    ctx->pc = 0x18194Cu;
    // 0x18194c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x18194Cu;
    {
        const bool branch_taken_0x18194c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18194c) {
            ctx->pc = 0x1819D0u;
            goto label_1819d0;
        }
    }
    ctx->pc = 0x181954u;
    // 0x181954: 0x0  nop
    ctx->pc = 0x181954u;
    // NOP
label_181958:
    // 0x181958: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x181958u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18195c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18195cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x181960: 0x24a52088  addiu       $a1, $a1, 0x2088
    ctx->pc = 0x181960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8328));
    // 0x181964: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x181964u;
    SET_GPR_U32(ctx, 31, 0x18196Cu);
    ctx->pc = 0x181968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181964u;
            // 0x181968: 0x2611017c  addiu       $s1, $s0, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 380));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18196Cu; }
        if (ctx->pc != 0x18196Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18196Cu; }
        if (ctx->pc != 0x18196Cu) { return; }
    }
    ctx->pc = 0x18196Cu;
    // 0x18196c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x18196Cu;
    {
        const bool branch_taken_0x18196c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18196c) {
            ctx->pc = 0x1819D0u;
            goto label_1819d0;
        }
    }
    ctx->pc = 0x181974u;
    // 0x181974: 0x0  nop
    ctx->pc = 0x181974u;
    // NOP
label_181978:
    // 0x181978: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x181978u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18197c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18197cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x181980: 0x24a52090  addiu       $a1, $a1, 0x2090
    ctx->pc = 0x181980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8336));
    // 0x181984: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x181984u;
    SET_GPR_U32(ctx, 31, 0x18198Cu);
    ctx->pc = 0x181988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181984u;
            // 0x181988: 0x26110180  addiu       $s1, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18198Cu; }
        if (ctx->pc != 0x18198Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18198Cu; }
        if (ctx->pc != 0x18198Cu) { return; }
    }
    ctx->pc = 0x18198Cu;
    // 0x18198c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x18198Cu;
    {
        const bool branch_taken_0x18198c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18198c) {
            ctx->pc = 0x1819D0u;
            goto label_1819d0;
        }
    }
    ctx->pc = 0x181994u;
    // 0x181994: 0x0  nop
    ctx->pc = 0x181994u;
    // NOP
label_181998:
    // 0x181998: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x181998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18199c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18199cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1819a0: 0x24a52098  addiu       $a1, $a1, 0x2098
    ctx->pc = 0x1819a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8344));
    // 0x1819a4: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x1819A4u;
    SET_GPR_U32(ctx, 31, 0x1819ACu);
    ctx->pc = 0x1819A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1819A4u;
            // 0x1819a8: 0x26110184  addiu       $s1, $s0, 0x184 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 388));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1819ACu; }
        if (ctx->pc != 0x1819ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1819ACu; }
        if (ctx->pc != 0x1819ACu) { return; }
    }
    ctx->pc = 0x1819ACu;
    // 0x1819ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1819ACu;
    {
        const bool branch_taken_0x1819ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1819ac) {
            ctx->pc = 0x1819D0u;
            goto label_1819d0;
        }
    }
    ctx->pc = 0x1819B4u;
    // 0x1819b4: 0x0  nop
    ctx->pc = 0x1819b4u;
    // NOP
label_1819b8:
    // 0x1819b8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1819b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1819bc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1819bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1819c0: 0x24a520a0  addiu       $a1, $a1, 0x20A0
    ctx->pc = 0x1819c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8352));
    // 0x1819c4: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x1819C4u;
    SET_GPR_U32(ctx, 31, 0x1819CCu);
    ctx->pc = 0x1819C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1819C4u;
            // 0x1819c8: 0x26110188  addiu       $s1, $s0, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1819CCu; }
        if (ctx->pc != 0x1819CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1819CCu; }
        if (ctx->pc != 0x1819CCu) { return; }
    }
    ctx->pc = 0x1819CCu;
    // 0x1819cc: 0x0  nop
    ctx->pc = 0x1819ccu;
    // NOP
label_1819d0:
    // 0x1819d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1819d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1819d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1819d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1819d8: 0xc043184  jal         func_10C610
    ctx->pc = 0x1819D8u;
    SET_GPR_U32(ctx, 31, 0x1819E0u);
    ctx->pc = 0x1819DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1819D8u;
            // 0x1819dc: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C610u;
    if (runtime->hasFunction(0x10C610u)) {
        auto targetFn = runtime->lookupFunction(0x10C610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1819E0u; }
        if (ctx->pc != 0x1819E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGetPlug_0x10c610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1819E0u; }
        if (ctx->pc != 0x1819E0u) { return; }
    }
    ctx->pc = 0x1819E0u;
    // 0x1819e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1819e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1819e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1819e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1819e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1819e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1819ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1819ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1819F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1819ECu;
            // 0x1819f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1818F8u: goto label_1818f8;
            case 0x181918u: goto label_181918;
            case 0x181938u: goto label_181938;
            case 0x181958u: goto label_181958;
            case 0x181978u: goto label_181978;
            case 0x181998u: goto label_181998;
            case 0x1819B8u: goto label_1819b8;
            case 0x1819D0u: goto label_1819d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1819F4u;
}
