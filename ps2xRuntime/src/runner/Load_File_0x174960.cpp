#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Load_File
// Address: 0x174960 - 0x174a5c
void Load_File_0x174960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Load_File_0x174960");
#endif

    ctx->pc = 0x174960u;

    // 0x174960: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x174960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x174964: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x174964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x174968: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x174968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17496c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17496cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x174970: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x174970u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174974: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x174974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x174978: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x174978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17497c: 0x0  nop
    ctx->pc = 0x17497cu;
    // NOP
label_174980:
    // 0x174980: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x174980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174984: 0xc04cb80  jal         func_132E00
    ctx->pc = 0x174984u;
    SET_GPR_U32(ctx, 31, 0x17498Cu);
    ctx->pc = 0x174988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174984u;
            // 0x174988: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E00u;
    if (runtime->hasFunction(0x132E00u)) {
        auto targetFn = runtime->lookupFunction(0x132E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17498Cu; }
        if (ctx->pc != 0x17498Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceOpen_0x132e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17498Cu; }
        if (ctx->pc != 0x17498Cu) { return; }
    }
    ctx->pc = 0x17498Cu;
    // 0x17498c: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17498Cu;
    {
        const bool branch_taken_0x17498c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x174990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17498Cu;
            // 0x174990: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17498c) {
            ctx->pc = 0x1749B0u;
            goto label_1749b0;
        }
    }
    ctx->pc = 0x174994u;
    // 0x174994: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x174994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x174998: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x174998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17499c: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x17499Cu;
    SET_GPR_U32(ctx, 31, 0x1749A4u);
    ctx->pc = 0x1749A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17499Cu;
            // 0x1749a0: 0x24841d20  addiu       $a0, $a0, 0x1D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1749A4u; }
        if (ctx->pc != 0x1749A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1749A4u; }
        if (ctx->pc != 0x1749A4u) { return; }
    }
    ctx->pc = 0x1749A4u;
    // 0x1749a4: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x1749A4u;
    {
        const bool branch_taken_0x1749a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1749a4) {
            ctx->pc = 0x174980u;
            goto label_174980;
        }
    }
    ctx->pc = 0x1749ACu;
    // 0x1749ac: 0x0  nop
    ctx->pc = 0x1749acu;
    // NOP
label_1749b0:
    // 0x1749b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1749b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1749b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1749b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1749b8: 0xc04cc82  jal         func_133208
    ctx->pc = 0x1749B8u;
    SET_GPR_U32(ctx, 31, 0x1749C0u);
    ctx->pc = 0x1749BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1749B8u;
            // 0x1749bc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133208u;
    if (runtime->hasFunction(0x133208u)) {
        auto targetFn = runtime->lookupFunction(0x133208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1749C0u; }
        if (ctx->pc != 0x1749C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceLseek_0x133208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1749C0u; }
        if (ctx->pc != 0x1749C0u) { return; }
    }
    ctx->pc = 0x1749C0u;
    // 0x1749c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1749c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1749c4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1749c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1749c8: 0xc04e9b2  jal         func_13A6C8
    ctx->pc = 0x1749C8u;
    SET_GPR_U32(ctx, 31, 0x1749D0u);
    ctx->pc = 0x1749CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1749C8u;
            // 0x1749cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A6C8u;
    if (runtime->hasFunction(0x13A6C8u)) {
        auto targetFn = runtime->lookupFunction(0x13A6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1749D0u; }
        if (ctx->pc != 0x1749D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memalign_0x13a6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1749D0u; }
        if (ctx->pc != 0x1749D0u) { return; }
    }
    ctx->pc = 0x1749D0u;
    // 0x1749d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1749d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1749d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1749d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1749d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1749d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1749dc: 0xc04cc82  jal         func_133208
    ctx->pc = 0x1749DCu;
    SET_GPR_U32(ctx, 31, 0x1749E4u);
    ctx->pc = 0x1749E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1749DCu;
            // 0x1749e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133208u;
    if (runtime->hasFunction(0x133208u)) {
        auto targetFn = runtime->lookupFunction(0x133208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1749E4u; }
        if (ctx->pc != 0x1749E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceLseek_0x133208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1749E4u; }
        if (ctx->pc != 0x1749E4u) { return; }
    }
    ctx->pc = 0x1749E4u;
    // 0x1749e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1749e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1749e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1749e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1749ec: 0xc04cd10  jal         func_133440
    ctx->pc = 0x1749ECu;
    SET_GPR_U32(ctx, 31, 0x1749F4u);
    ctx->pc = 0x1749F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1749ECu;
            // 0x1749f0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133440u;
    if (runtime->hasFunction(0x133440u)) {
        auto targetFn = runtime->lookupFunction(0x133440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1749F4u; }
        if (ctx->pc != 0x1749F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceRead_0x133440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1749F4u; }
        if (ctx->pc != 0x1749F4u) { return; }
    }
    ctx->pc = 0x1749F4u;
    // 0x1749f4: 0x1051000a  beq         $v0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1749F4u;
    {
        const bool branch_taken_0x1749f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1749F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1749F4u;
            // 0x1749f8: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1749f4) {
            ctx->pc = 0x174A20u;
            goto label_174a20;
        }
    }
    ctx->pc = 0x1749FCu;
    // 0x1749fc: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1749FCu;
    SET_GPR_U32(ctx, 31, 0x174A04u);
    ctx->pc = 0x174A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1749FCu;
            // 0x174a00: 0x24841d38  addiu       $a0, $a0, 0x1D38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A04u; }
        if (ctx->pc != 0x174A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A04u; }
        if (ctx->pc != 0x174A04u) { return; }
    }
    ctx->pc = 0x174A04u;
    // 0x174a04: 0xc04cc22  jal         func_133088
    ctx->pc = 0x174A04u;
    SET_GPR_U32(ctx, 31, 0x174A0Cu);
    ctx->pc = 0x174A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174A04u;
            // 0x174a08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133088u;
    if (runtime->hasFunction(0x133088u)) {
        auto targetFn = runtime->lookupFunction(0x133088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A0Cu; }
        if (ctx->pc != 0x174A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x133088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A0Cu; }
        if (ctx->pc != 0x174A0Cu) { return; }
    }
    ctx->pc = 0x174A0Cu;
    // 0x174a0c: 0xc04ea3c  jal         func_13A8F0
    ctx->pc = 0x174A0Cu;
    SET_GPR_U32(ctx, 31, 0x174A14u);
    ctx->pc = 0x174A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174A0Cu;
            // 0x174a10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A8F0u;
    if (runtime->hasFunction(0x13A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x13A8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A14u; }
        if (ctx->pc != 0x174A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        free_0x13a8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A14u; }
        if (ctx->pc != 0x174A14u) { return; }
    }
    ctx->pc = 0x174A14u;
    // 0x174a14: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x174A14u;
    {
        const bool branch_taken_0x174a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174a14) {
            ctx->pc = 0x174980u;
            goto label_174980;
        }
    }
    ctx->pc = 0x174A1Cu;
    // 0x174a1c: 0x0  nop
    ctx->pc = 0x174a1cu;
    // NOP
label_174a20:
    // 0x174a20: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x174a20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x174a24: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x174a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174a28: 0x24841d50  addiu       $a0, $a0, 0x1D50
    ctx->pc = 0x174a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7504));
    // 0x174a2c: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x174A2Cu;
    SET_GPR_U32(ctx, 31, 0x174A34u);
    ctx->pc = 0x174A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174A2Cu;
            // 0x174a30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A34u; }
        if (ctx->pc != 0x174A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A34u; }
        if (ctx->pc != 0x174A34u) { return; }
    }
    ctx->pc = 0x174A34u;
    // 0x174a34: 0xc04cc22  jal         func_133088
    ctx->pc = 0x174A34u;
    SET_GPR_U32(ctx, 31, 0x174A3Cu);
    ctx->pc = 0x174A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174A34u;
            // 0x174a38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133088u;
    if (runtime->hasFunction(0x133088u)) {
        auto targetFn = runtime->lookupFunction(0x133088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A3Cu; }
        if (ctx->pc != 0x174A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x133088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A3Cu; }
        if (ctx->pc != 0x174A3Cu) { return; }
    }
    ctx->pc = 0x174A3Cu;
    // 0x174a3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x174a3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174a40: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x174a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x174a44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x174a44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174a48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x174a48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174a4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174a4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174a50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174a50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174a54: 0x3e00008  jr          $ra
    ctx->pc = 0x174A54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174A54u;
            // 0x174a58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174980u: goto label_174980;
            case 0x1749B0u: goto label_1749b0;
            case 0x174A20u: goto label_174a20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174A5Cu;
}
