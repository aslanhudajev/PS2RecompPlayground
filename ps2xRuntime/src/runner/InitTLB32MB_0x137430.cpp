#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitTLB32MB
// Address: 0x137430 - 0x137624
void InitTLB32MB_0x137430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitTLB32MB_0x137430");
#endif

    ctx->pc = 0x137430u;

    // 0x137430: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x137430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x137434: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x137434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x137438: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x137438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x13743c: 0x2484f950  addiu       $a0, $a0, -0x6B0
    ctx->pc = 0x13743cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965584));
    // 0x137440: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x137440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x137444: 0x3c120021  lui         $s2, 0x21
    ctx->pc = 0x137444u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)33 << 16));
    // 0x137448: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x137448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13744c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13744cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x137450: 0x26500af8  addiu       $s0, $s2, 0xAF8
    ctx->pc = 0x137450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 2808));
    // 0x137454: 0x8e450af8  lw          $a1, 0xAF8($s2)
    ctx->pc = 0x137454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2808)));
    // 0x137458: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x137458u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13745c: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x13745cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x137460: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x137460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137464: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x137464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x137468: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x137468u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x13746c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x13746cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137470: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x137470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x137474: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x137474u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x137478: 0xc04c332  jal         func_130CC8
    ctx->pc = 0x137478u;
    SET_GPR_U32(ctx, 31, 0x137480u);
    ctx->pc = 0x13747Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137478u;
            // 0x13747c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130CC8u;
    if (runtime->hasFunction(0x130CC8u)) {
        auto targetFn = runtime->lookupFunction(0x130CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137480u; }
        if (ctx->pc != 0x137480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kprintf_0x130cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137480u; }
        if (ctx->pc != 0x137480u) { return; }
    }
    ctx->pc = 0x137480u;
    // 0x137480: 0x40803000  mtc0        $zero, Wired
    ctx->pc = 0x137480u;
    ctx->cop0_wired = GPR_U32(ctx, 0) & 0x3F; ctx->cop0_random = 47;
    // 0x137484: 0x40f  sync.p
    ctx->pc = 0x137484u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x137488: 0x8e510af8  lw          $s1, 0xAF8($s2)
    ctx->pc = 0x137488u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2808)));
    // 0x13748c: 0x2a220031  slti        $v0, $s1, 0x31
    ctx->pc = 0x13748cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x137490: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x137490u;
    {
        const bool branch_taken_0x137490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137490u;
            // 0x137494: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137490) {
            ctx->pc = 0x1374ACu;
            goto label_1374ac;
        }
    }
    ctx->pc = 0x137498u;
    // 0x137498: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x137498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x13749c: 0xc04c332  jal         func_130CC8
    ctx->pc = 0x13749Cu;
    SET_GPR_U32(ctx, 31, 0x1374A4u);
    ctx->pc = 0x1374A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13749Cu;
            // 0x1374a0: 0x2484f988  addiu       $a0, $a0, -0x678 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130CC8u;
    if (runtime->hasFunction(0x130CC8u)) {
        auto targetFn = runtime->lookupFunction(0x130CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1374A4u; }
        if (ctx->pc != 0x1374A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kprintf_0x130cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1374A4u; }
        if (ctx->pc != 0x1374A4u) { return; }
    }
    ctx->pc = 0x1374A4u;
    // 0x1374a4: 0xc04e004  jal         func_138010
    ctx->pc = 0x1374A4u;
    SET_GPR_U32(ctx, 31, 0x1374ACu);
    ctx->pc = 0x1374A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1374A4u;
            // 0x1374a8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138010u;
    if (runtime->hasFunction(0x138010u)) {
        auto targetFn = runtime->lookupFunction(0x138010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1374ACu; }
        if (ctx->pc != 0x1374ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Exit_0x138010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1374ACu; }
        if (ctx->pc != 0x1374ACu) { return; }
    }
    ctx->pc = 0x1374ACu;
label_1374ac:
    // 0x1374ac: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1374acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1374b0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1374B0u;
    {
        const bool branch_taken_0x1374b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1374B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1374B0u;
            // 0x1374b4: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1374b0) {
            ctx->pc = 0x1374E8u;
            goto label_1374e8;
        }
    }
    ctx->pc = 0x1374B8u;
    // 0x1374b8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1374b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1374bc: 0x0  nop
    ctx->pc = 0x1374bcu;
    // NOP
label_1374c0:
    // 0x1374c0: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x1374c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1374c4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1374c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1374c8: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x1374c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1374cc: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x1374ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1374d0: 0xc04dcd4  jal         func_137350
    ctx->pc = 0x1374D0u;
    SET_GPR_U32(ctx, 31, 0x1374D8u);
    ctx->pc = 0x1374D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1374D0u;
            // 0x1374d4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137350u;
    if (runtime->hasFunction(0x137350u)) {
        auto targetFn = runtime->lookupFunction(0x137350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1374D8u; }
        if (ctx->pc != 0x1374D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__SetTLBEntry_0x137350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1374D8u; }
        if (ctx->pc != 0x1374D8u) { return; }
    }
    ctx->pc = 0x1374D8u;
    // 0x1374d8: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x1374d8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x1374dc: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1374dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1374e0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1374E0u;
    {
        const bool branch_taken_0x1374e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1374e0) {
            ctx->pc = 0x1374E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1374E0u;
            // 0x1374e4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1374C0u;
            goto label_1374c0;
        }
    }
    ctx->pc = 0x1374E8u;
label_1374e8:
    // 0x1374e8: 0x26500af8  addiu       $s0, $s2, 0xAF8
    ctx->pc = 0x1374e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 2808));
    // 0x1374ec: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1374ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1374f0: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x1374f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x1374f4: 0x2a230031  slti        $v1, $s1, 0x31
    ctx->pc = 0x1374f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x1374f8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1374F8u;
    {
        const bool branch_taken_0x1374f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1374FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1374F8u;
            // 0x1374fc: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1374f8) {
            ctx->pc = 0x137518u;
            goto label_137518;
        }
    }
    ctx->pc = 0x137500u;
    // 0x137500: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x137500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x137504: 0xc04c332  jal         func_130CC8
    ctx->pc = 0x137504u;
    SET_GPR_U32(ctx, 31, 0x13750Cu);
    ctx->pc = 0x137508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137504u;
            // 0x137508: 0x2484f9a0  addiu       $a0, $a0, -0x660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130CC8u;
    if (runtime->hasFunction(0x130CC8u)) {
        auto targetFn = runtime->lookupFunction(0x130CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13750Cu; }
        if (ctx->pc != 0x13750Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kprintf_0x130cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13750Cu; }
        if (ctx->pc != 0x13750Cu) { return; }
    }
    ctx->pc = 0x13750Cu;
    // 0x13750c: 0xc04e004  jal         func_138010
    ctx->pc = 0x13750Cu;
    SET_GPR_U32(ctx, 31, 0x137514u);
    ctx->pc = 0x137510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13750Cu;
            // 0x137510: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138010u;
    if (runtime->hasFunction(0x138010u)) {
        auto targetFn = runtime->lookupFunction(0x138010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137514u; }
        if (ctx->pc != 0x137514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Exit_0x138010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137514u; }
        if (ctx->pc != 0x137514u) { return; }
    }
    ctx->pc = 0x137514u;
    // 0x137514: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x137514u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_137518:
    // 0x137518: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x137518u;
    {
        const bool branch_taken_0x137518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13751Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137518u;
            // 0x13751c: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137518) {
            ctx->pc = 0x137550u;
            goto label_137550;
        }
    }
    ctx->pc = 0x137520u;
    // 0x137520: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x137520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x137524: 0x0  nop
    ctx->pc = 0x137524u;
    // NOP
label_137528:
    // 0x137528: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x137528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13752c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x13752cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x137530: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x137530u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x137534: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x137534u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x137538: 0xc04dcd4  jal         func_137350
    ctx->pc = 0x137538u;
    SET_GPR_U32(ctx, 31, 0x137540u);
    ctx->pc = 0x13753Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137538u;
            // 0x13753c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137350u;
    if (runtime->hasFunction(0x137350u)) {
        auto targetFn = runtime->lookupFunction(0x137350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137540u; }
        if (ctx->pc != 0x137540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__SetTLBEntry_0x137350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137540u; }
        if (ctx->pc != 0x137540u) { return; }
    }
    ctx->pc = 0x137540u;
    // 0x137540: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x137540u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x137544: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x137544u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x137548: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x137548u;
    {
        const bool branch_taken_0x137548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137548) {
            ctx->pc = 0x13754Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137548u;
            // 0x13754c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137528u;
            goto label_137528;
        }
    }
    ctx->pc = 0x137550u;
label_137550:
    // 0x137550: 0x26500af8  addiu       $s0, $s2, 0xAF8
    ctx->pc = 0x137550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 2808));
    // 0x137554: 0xae19000c  sw          $t9, 0xC($s0)
    ctx->pc = 0x137554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 25));
    // 0x137558: 0x40993000  mtc0        $t9, Wired
    ctx->pc = 0x137558u;
    ctx->cop0_wired = GPR_U32(ctx, 25) & 0x3F; ctx->cop0_random = 47;
    // 0x13755c: 0x40f  sync.p
    ctx->pc = 0x13755cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x137560: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x137560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x137564: 0x58400019  blezl       $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x137564u;
    {
        const bool branch_taken_0x137564 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x137564) {
            ctx->pc = 0x137568u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137564u;
            // 0x137568: 0x320802d  daddu       $s0, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1375CCu;
            goto label_1375cc;
        }
    }
    ctx->pc = 0x13756Cu;
    // 0x13756c: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x13756cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x137570: 0x2a220031  slti        $v0, $s1, 0x31
    ctx->pc = 0x137570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x137574: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x137574u;
    {
        const bool branch_taken_0x137574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137574u;
            // 0x137578: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137574) {
            ctx->pc = 0x137594u;
            goto label_137594;
        }
    }
    ctx->pc = 0x13757Cu;
    // 0x13757c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x13757cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x137580: 0xc04c332  jal         func_130CC8
    ctx->pc = 0x137580u;
    SET_GPR_U32(ctx, 31, 0x137588u);
    ctx->pc = 0x137584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137580u;
            // 0x137584: 0x2484f9b8  addiu       $a0, $a0, -0x648 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130CC8u;
    if (runtime->hasFunction(0x130CC8u)) {
        auto targetFn = runtime->lookupFunction(0x130CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137588u; }
        if (ctx->pc != 0x137588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kprintf_0x130cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137588u; }
        if (ctx->pc != 0x137588u) { return; }
    }
    ctx->pc = 0x137588u;
    // 0x137588: 0xc04e004  jal         func_138010
    ctx->pc = 0x137588u;
    SET_GPR_U32(ctx, 31, 0x137590u);
    ctx->pc = 0x13758Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137588u;
            // 0x13758c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138010u;
    if (runtime->hasFunction(0x138010u)) {
        auto targetFn = runtime->lookupFunction(0x138010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137590u; }
        if (ctx->pc != 0x137590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Exit_0x138010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137590u; }
        if (ctx->pc != 0x137590u) { return; }
    }
    ctx->pc = 0x137590u;
    // 0x137590: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x137590u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_137594:
    // 0x137594: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x137594u;
    {
        const bool branch_taken_0x137594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137594u;
            // 0x137598: 0x8e100018  lw          $s0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137594) {
            ctx->pc = 0x1375C8u;
            goto label_1375c8;
        }
    }
    ctx->pc = 0x13759Cu;
    // 0x13759c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x13759cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1375a0:
    // 0x1375a0: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x1375a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1375a4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1375a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1375a8: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x1375a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1375ac: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x1375acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1375b0: 0xc04dcd4  jal         func_137350
    ctx->pc = 0x1375B0u;
    SET_GPR_U32(ctx, 31, 0x1375B8u);
    ctx->pc = 0x1375B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1375B0u;
            // 0x1375b4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137350u;
    if (runtime->hasFunction(0x137350u)) {
        auto targetFn = runtime->lookupFunction(0x137350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1375B8u; }
        if (ctx->pc != 0x1375B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__SetTLBEntry_0x137350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1375B8u; }
        if (ctx->pc != 0x1375B8u) { return; }
    }
    ctx->pc = 0x1375B8u;
    // 0x1375b8: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x1375b8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x1375bc: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1375bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1375c0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1375C0u;
    {
        const bool branch_taken_0x1375c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1375c0) {
            ctx->pc = 0x1375C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1375C0u;
            // 0x1375c4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1375A0u;
            goto label_1375a0;
        }
    }
    ctx->pc = 0x1375C8u;
label_1375c8:
    // 0x1375c8: 0x320802d  daddu       $s0, $t9, $zero
    ctx->pc = 0x1375c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_1375cc:
    // 0x1375cc: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x1375ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1375d0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1375D0u;
    {
        const bool branch_taken_0x1375d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1375D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1375D0u;
            // 0x1375d4: 0x19cb40  sll         $t9, $t9, 13 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1375d0) {
            ctx->pc = 0x137608u;
            goto label_137608;
        }
    }
    ctx->pc = 0x1375D8u;
    // 0x1375d8: 0x3c02e000  lui         $v0, 0xE000
    ctx->pc = 0x1375d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57344 << 16));
    // 0x1375dc: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x1375dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_1375e0:
    // 0x1375e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1375e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1375e4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1375e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1375e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1375e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1375ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1375ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1375f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1375f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1375f4: 0xc04dcd4  jal         func_137350
    ctx->pc = 0x1375F4u;
    SET_GPR_U32(ctx, 31, 0x1375FCu);
    ctx->pc = 0x1375F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1375F4u;
            // 0x1375f8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137350u;
    if (runtime->hasFunction(0x137350u)) {
        auto targetFn = runtime->lookupFunction(0x137350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1375FCu; }
        if (ctx->pc != 0x1375FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__SetTLBEntry_0x137350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1375FCu; }
        if (ctx->pc != 0x1375FCu) { return; }
    }
    ctx->pc = 0x1375FCu;
    // 0x1375fc: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x1375fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x137600: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x137600u;
    {
        const bool branch_taken_0x137600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137600u;
            // 0x137604: 0x26312000  addiu       $s1, $s1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137600) {
            ctx->pc = 0x1375E0u;
            goto label_1375e0;
        }
    }
    ctx->pc = 0x137608u;
label_137608:
    // 0x137608: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x137608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13760c: 0x320102d  daddu       $v0, $t9, $zero
    ctx->pc = 0x13760cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137610: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x137610u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137614: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x137614u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137618: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x137618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13761c: 0x3e00008  jr          $ra
    ctx->pc = 0x13761Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13761Cu;
            // 0x137620: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1374ACu: goto label_1374ac;
            case 0x1374C0u: goto label_1374c0;
            case 0x1374E8u: goto label_1374e8;
            case 0x137518u: goto label_137518;
            case 0x137528u: goto label_137528;
            case 0x137550u: goto label_137550;
            case 0x137594u: goto label_137594;
            case 0x1375A0u: goto label_1375a0;
            case 0x1375C8u: goto label_1375c8;
            case 0x1375CCu: goto label_1375cc;
            case 0x1375E0u: goto label_1375e0;
            case 0x137608u: goto label_137608;
            default: break;
        }
        return;
    }
    ctx->pc = 0x137624u;
}
