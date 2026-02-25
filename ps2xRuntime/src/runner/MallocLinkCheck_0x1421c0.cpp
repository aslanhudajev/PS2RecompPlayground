#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MallocLinkCheck
// Address: 0x1421c0 - 0x14255c
void MallocLinkCheck_0x1421c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MallocLinkCheck_0x1421c0");
#endif

    ctx->pc = 0x1421c0u;

    // 0x1421c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1421c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1421c4: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1421c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1421c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1421c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1421cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1421ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1421d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1421d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1421d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1421d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1421d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1421d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1421dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1421dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1421e0: 0x8c3179e8  lw          $s1, 0x79E8($at)
    ctx->pc = 0x1421e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31208)));
    // 0x1421e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1421e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1421e8:
    // 0x1421e8: 0x3222000f  andi        $v0, $s1, 0xF
    ctx->pc = 0x1421e8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)15u)));
    // 0x1421ec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1421ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1421f0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1421f0u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1421f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1421F4u;
    {
        const bool branch_taken_0x1421f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1421F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1421F4u;
            // 0x1421f8: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1421f4) {
            ctx->pc = 0x142210u;
            goto label_142210;
        }
    }
    ctx->pc = 0x1421FCu;
    // 0x1421fc: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1421FCu;
    SET_GPR_U32(ctx, 31, 0x142204u);
    ctx->pc = 0x142200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1421FCu;
            // 0x142200: 0x248408b0  addiu       $a0, $a0, 0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142204u; }
        if (ctx->pc != 0x142204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142204u; }
        if (ctx->pc != 0x142204u) { return; }
    }
    ctx->pc = 0x142204u;
    // 0x142204: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x142204u;
    {
        const bool branch_taken_0x142204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142204u;
            // 0x142208: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142204) {
            ctx->pc = 0x142358u;
            goto label_142358;
        }
    }
    ctx->pc = 0x14220Cu;
    // 0x14220c: 0x0  nop
    ctx->pc = 0x14220cu;
    // NOP
label_142210:
    // 0x142210: 0xc050984  jal         func_142610
    ctx->pc = 0x142210u;
    SET_GPR_U32(ctx, 31, 0x142218u);
    ctx->pc = 0x142214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142210u;
            // 0x142214: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142610u;
    if (runtime->hasFunction(0x142610u)) {
        auto targetFn = runtime->lookupFunction(0x142610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142218u; }
        if (ctx->pc != 0x142218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddressCheck_0x142610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142218u; }
        if (ctx->pc != 0x142218u) { return; }
    }
    ctx->pc = 0x142218u;
    // 0x142218: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x142218u;
    {
        const bool branch_taken_0x142218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14221Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142218u;
            // 0x14221c: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142218) {
            ctx->pc = 0x142230u;
            goto label_142230;
        }
    }
    ctx->pc = 0x142220u;
    // 0x142220: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x142220u;
    SET_GPR_U32(ctx, 31, 0x142228u);
    ctx->pc = 0x142224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142220u;
            // 0x142224: 0x248408d0  addiu       $a0, $a0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142228u; }
        if (ctx->pc != 0x142228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142228u; }
        if (ctx->pc != 0x142228u) { return; }
    }
    ctx->pc = 0x142228u;
    // 0x142228: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x142228u;
    {
        const bool branch_taken_0x142228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14222Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142228u;
            // 0x14222c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142228) {
            ctx->pc = 0x142358u;
            goto label_142358;
        }
    }
    ctx->pc = 0x142230u;
label_142230:
    // 0x142230: 0x8e33001c  lw          $s3, 0x1C($s1)
    ctx->pc = 0x142230u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x142234: 0xc050984  jal         func_142610
    ctx->pc = 0x142234u;
    SET_GPR_U32(ctx, 31, 0x14223Cu);
    ctx->pc = 0x142238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142234u;
            // 0x142238: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142610u;
    if (runtime->hasFunction(0x142610u)) {
        auto targetFn = runtime->lookupFunction(0x142610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14223Cu; }
        if (ctx->pc != 0x14223Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddressCheck_0x142610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14223Cu; }
        if (ctx->pc != 0x14223Cu) { return; }
    }
    ctx->pc = 0x14223Cu;
    // 0x14223c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14223Cu;
    {
        const bool branch_taken_0x14223c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14223Cu;
            // 0x142240: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14223c) {
            ctx->pc = 0x142258u;
            goto label_142258;
        }
    }
    ctx->pc = 0x142244u;
    // 0x142244: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x142244u;
    SET_GPR_U32(ctx, 31, 0x14224Cu);
    ctx->pc = 0x142248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142244u;
            // 0x142248: 0x248408f0  addiu       $a0, $a0, 0x8F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14224Cu; }
        if (ctx->pc != 0x14224Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14224Cu; }
        if (ctx->pc != 0x14224Cu) { return; }
    }
    ctx->pc = 0x14224Cu;
    // 0x14224c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x14224Cu;
    {
        const bool branch_taken_0x14224c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14224Cu;
            // 0x142250: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14224c) {
            ctx->pc = 0x142358u;
            goto label_142358;
        }
    }
    ctx->pc = 0x142254u;
    // 0x142254: 0x0  nop
    ctx->pc = 0x142254u;
    // NOP
label_142258:
    // 0x142258: 0x3262000f  andi        $v0, $s3, 0xF
    ctx->pc = 0x142258u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 19), _mm_cvtsi32_si128((int)15u)));
    // 0x14225c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14225Cu;
    {
        const bool branch_taken_0x14225c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14225Cu;
            // 0x142260: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14225c) {
            ctx->pc = 0x142290u;
            goto label_142290;
        }
    }
    ctx->pc = 0x142264u;
    // 0x142264: 0xc050984  jal         func_142610
    ctx->pc = 0x142264u;
    SET_GPR_U32(ctx, 31, 0x14226Cu);
    ctx->pc = 0x142610u;
    if (runtime->hasFunction(0x142610u)) {
        auto targetFn = runtime->lookupFunction(0x142610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14226Cu; }
        if (ctx->pc != 0x14226Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddressCheck_0x142610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14226Cu; }
        if (ctx->pc != 0x14226Cu) { return; }
    }
    ctx->pc = 0x14226Cu;
    // 0x14226c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14226Cu;
    {
        const bool branch_taken_0x14226c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14226c) {
            ctx->pc = 0x142288u;
            goto label_142288;
        }
    }
    ctx->pc = 0x142274u;
    // 0x142274: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x142274u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x142278: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x142278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x14227c: 0x24840910  addiu       $a0, $a0, 0x910
    ctx->pc = 0x14227cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2320));
    // 0x142280: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x142280u;
    SET_GPR_U32(ctx, 31, 0x142288u);
    ctx->pc = 0x142284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142280u;
            // 0x142284: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142288u; }
        if (ctx->pc != 0x142288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142288u; }
        if (ctx->pc != 0x142288u) { return; }
    }
    ctx->pc = 0x142288u;
label_142288:
    // 0x142288: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x142288u;
    {
        const bool branch_taken_0x142288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14228Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142288u;
            // 0x14228c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142288) {
            ctx->pc = 0x142358u;
            goto label_142358;
        }
    }
    ctx->pc = 0x142290u;
label_142290:
    // 0x142290: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x142290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142294: 0xc050958  jal         func_142560
    ctx->pc = 0x142294u;
    SET_GPR_U32(ctx, 31, 0x14229Cu);
    ctx->pc = 0x142298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142294u;
            // 0x142298: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142560u;
    if (runtime->hasFunction(0x142560u)) {
        auto targetFn = runtime->lookupFunction(0x142560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14229Cu; }
        if (ctx->pc != 0x14229Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignetureCheck_0x142560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14229Cu; }
        if (ctx->pc != 0x14229Cu) { return; }
    }
    ctx->pc = 0x14229Cu;
    // 0x14229c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14229cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1422a0: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1422A0u;
    {
        const bool branch_taken_0x1422a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1422A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1422A0u;
            // 0x1422a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1422a0) {
            ctx->pc = 0x1422F0u;
            goto label_1422f0;
        }
    }
    ctx->pc = 0x1422A8u;
    // 0x1422a8: 0xc050984  jal         func_142610
    ctx->pc = 0x1422A8u;
    SET_GPR_U32(ctx, 31, 0x1422B0u);
    ctx->pc = 0x142610u;
    if (runtime->hasFunction(0x142610u)) {
        auto targetFn = runtime->lookupFunction(0x142610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1422B0u; }
        if (ctx->pc != 0x1422B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddressCheck_0x142610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1422B0u; }
        if (ctx->pc != 0x1422B0u) { return; }
    }
    ctx->pc = 0x1422B0u;
    // 0x1422b0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1422B0u;
    {
        const bool branch_taken_0x1422b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1422b0) {
            ctx->pc = 0x1422D8u;
            goto label_1422d8;
        }
    }
    ctx->pc = 0x1422B8u;
    // 0x1422b8: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x1422b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1422bc: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1422bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1422c0: 0x24840940  addiu       $a0, $a0, 0x940
    ctx->pc = 0x1422c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2368));
    // 0x1422c4: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1422C4u;
    SET_GPR_U32(ctx, 31, 0x1422CCu);
    ctx->pc = 0x1422C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1422C4u;
            // 0x1422c8: 0x26650004  addiu       $a1, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1422CCu; }
        if (ctx->pc != 0x1422CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1422CCu; }
        if (ctx->pc != 0x1422CCu) { return; }
    }
    ctx->pc = 0x1422CCu;
    // 0x1422cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1422CCu;
    {
        const bool branch_taken_0x1422cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1422cc) {
            ctx->pc = 0x1422E8u;
            goto label_1422e8;
        }
    }
    ctx->pc = 0x1422D4u;
    // 0x1422d4: 0x0  nop
    ctx->pc = 0x1422d4u;
    // NOP
label_1422d8:
    // 0x1422d8: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1422d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1422dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1422dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1422e0: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1422E0u;
    SET_GPR_U32(ctx, 31, 0x1422E8u);
    ctx->pc = 0x1422E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1422E0u;
            // 0x1422e4: 0x24840960  addiu       $a0, $a0, 0x960 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1422E8u; }
        if (ctx->pc != 0x1422E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1422E8u; }
        if (ctx->pc != 0x1422E8u) { return; }
    }
    ctx->pc = 0x1422E8u;
label_1422e8:
    // 0x1422e8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1422E8u;
    {
        const bool branch_taken_0x1422e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1422ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1422E8u;
            // 0x1422ec: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1422e8) {
            ctx->pc = 0x142358u;
            goto label_142358;
        }
    }
    ctx->pc = 0x1422F0u;
label_1422f0:
    // 0x1422f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1422f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1422f4: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1422F4u;
    {
        const bool branch_taken_0x1422f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1422F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1422F4u;
            // 0x1422f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1422f4) {
            ctx->pc = 0x142340u;
            goto label_142340;
        }
    }
    ctx->pc = 0x1422FCu;
    // 0x1422fc: 0xc050984  jal         func_142610
    ctx->pc = 0x1422FCu;
    SET_GPR_U32(ctx, 31, 0x142304u);
    ctx->pc = 0x142610u;
    if (runtime->hasFunction(0x142610u)) {
        auto targetFn = runtime->lookupFunction(0x142610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142304u; }
        if (ctx->pc != 0x142304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddressCheck_0x142610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142304u; }
        if (ctx->pc != 0x142304u) { return; }
    }
    ctx->pc = 0x142304u;
    // 0x142304: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x142304u;
    {
        const bool branch_taken_0x142304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x142304) {
            ctx->pc = 0x142328u;
            goto label_142328;
        }
    }
    ctx->pc = 0x14230Cu;
    // 0x14230c: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x14230cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x142310: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x142310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x142314: 0x24840990  addiu       $a0, $a0, 0x990
    ctx->pc = 0x142314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2448));
    // 0x142318: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x142318u;
    SET_GPR_U32(ctx, 31, 0x142320u);
    ctx->pc = 0x14231Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142318u;
            // 0x14231c: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142320u; }
        if (ctx->pc != 0x142320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142320u; }
        if (ctx->pc != 0x142320u) { return; }
    }
    ctx->pc = 0x142320u;
    // 0x142320: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x142320u;
    {
        const bool branch_taken_0x142320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142320) {
            ctx->pc = 0x142338u;
            goto label_142338;
        }
    }
    ctx->pc = 0x142328u;
label_142328:
    // 0x142328: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x142328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x14232c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14232cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142330: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x142330u;
    SET_GPR_U32(ctx, 31, 0x142338u);
    ctx->pc = 0x142334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142330u;
            // 0x142334: 0x248409b0  addiu       $a0, $a0, 0x9B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142338u; }
        if (ctx->pc != 0x142338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142338u; }
        if (ctx->pc != 0x142338u) { return; }
    }
    ctx->pc = 0x142338u;
label_142338:
    // 0x142338: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x142338u;
    {
        const bool branch_taken_0x142338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14233Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142338u;
            // 0x14233c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142338) {
            ctx->pc = 0x142358u;
            goto label_142358;
        }
    }
    ctx->pc = 0x142340u;
label_142340:
    // 0x142340: 0x8e710018  lw          $s1, 0x18($s3)
    ctx->pc = 0x142340u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x142344: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x142344u;
    {
        const bool branch_taken_0x142344 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x142348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142344u;
            // 0x142348: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142344) {
            ctx->pc = 0x142358u;
            goto label_142358;
        }
    }
    ctx->pc = 0x14234Cu;
    // 0x14234c: 0x1000ffa6  b           . + 4 + (-0x5A << 2)
    ctx->pc = 0x14234Cu;
    {
        const bool branch_taken_0x14234c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14234c) {
            ctx->pc = 0x1421E8u;
            goto label_1421e8;
        }
    }
    ctx->pc = 0x142354u;
    // 0x142354: 0x0  nop
    ctx->pc = 0x142354u;
    // NOP
label_142358:
    // 0x142358: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x142358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x14235c: 0x8c227a00  lw          $v0, 0x7A00($at)
    ctx->pc = 0x14235cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31232)));
    // 0x142360: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x142360u;
    {
        const bool branch_taken_0x142360 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x142364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142360u;
            // 0x142364: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142360) {
            ctx->pc = 0x142378u;
            goto label_142378;
        }
    }
    ctx->pc = 0x142368u;
    // 0x142368: 0x502823  subu        $a1, $v0, $s0
    ctx->pc = 0x142368u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14236c: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x14236Cu;
    SET_GPR_U32(ctx, 31, 0x142374u);
    ctx->pc = 0x142370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14236Cu;
            // 0x142370: 0x248409e0  addiu       $a0, $a0, 0x9E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142374u; }
        if (ctx->pc != 0x142374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142374u; }
        if (ctx->pc != 0x142374u) { return; }
    }
    ctx->pc = 0x142374u;
    // 0x142374: 0x0  nop
    ctx->pc = 0x142374u;
    // NOP
label_142378:
    // 0x142378: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x142378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x14237c: 0x8c3179e0  lw          $s1, 0x79E0($at)
    ctx->pc = 0x14237cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31200)));
    // 0x142380: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x142380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142384: 0x0  nop
    ctx->pc = 0x142384u;
    // NOP
label_142388:
    // 0x142388: 0xc050984  jal         func_142610
    ctx->pc = 0x142388u;
    SET_GPR_U32(ctx, 31, 0x142390u);
    ctx->pc = 0x14238Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142388u;
            // 0x14238c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142610u;
    if (runtime->hasFunction(0x142610u)) {
        auto targetFn = runtime->lookupFunction(0x142610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142390u; }
        if (ctx->pc != 0x142390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddressCheck_0x142610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142390u; }
        if (ctx->pc != 0x142390u) { return; }
    }
    ctx->pc = 0x142390u;
    // 0x142390: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x142390u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x142394: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x142394u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x142398: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x142398u;
    {
        const bool branch_taken_0x142398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14239Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142398u;
            // 0x14239c: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142398) {
            ctx->pc = 0x1423B0u;
            goto label_1423b0;
        }
    }
    ctx->pc = 0x1423A0u;
    // 0x1423a0: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1423A0u;
    SET_GPR_U32(ctx, 31, 0x1423A8u);
    ctx->pc = 0x1423A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1423A0u;
            // 0x1423a4: 0x248408f0  addiu       $a0, $a0, 0x8F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1423A8u; }
        if (ctx->pc != 0x1423A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1423A8u; }
        if (ctx->pc != 0x1423A8u) { return; }
    }
    ctx->pc = 0x1423A8u;
    // 0x1423a8: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x1423A8u;
    {
        const bool branch_taken_0x1423a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1423ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1423A8u;
            // 0x1423ac: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1423a8) {
            ctx->pc = 0x1424F8u;
            goto label_1424f8;
        }
    }
    ctx->pc = 0x1423B0u;
label_1423b0:
    // 0x1423b0: 0x3222000f  andi        $v0, $s1, 0xF
    ctx->pc = 0x1423b0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)15u)));
    // 0x1423b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1423B4u;
    {
        const bool branch_taken_0x1423b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1423B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1423B4u;
            // 0x1423b8: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1423b4) {
            ctx->pc = 0x1423D0u;
            goto label_1423d0;
        }
    }
    ctx->pc = 0x1423BCu;
    // 0x1423bc: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1423BCu;
    SET_GPR_U32(ctx, 31, 0x1423C4u);
    ctx->pc = 0x1423C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1423BCu;
            // 0x1423c0: 0x24840a10  addiu       $a0, $a0, 0xA10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1423C4u; }
        if (ctx->pc != 0x1423C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1423C4u; }
        if (ctx->pc != 0x1423C4u) { return; }
    }
    ctx->pc = 0x1423C4u;
    // 0x1423c4: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1423C4u;
    {
        const bool branch_taken_0x1423c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1423C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1423C4u;
            // 0x1423c8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1423c4) {
            ctx->pc = 0x1424F8u;
            goto label_1424f8;
        }
    }
    ctx->pc = 0x1423CCu;
    // 0x1423cc: 0x0  nop
    ctx->pc = 0x1423ccu;
    // NOP
label_1423d0:
    // 0x1423d0: 0x8e33001c  lw          $s3, 0x1C($s1)
    ctx->pc = 0x1423d0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1423d4: 0xc050984  jal         func_142610
    ctx->pc = 0x1423D4u;
    SET_GPR_U32(ctx, 31, 0x1423DCu);
    ctx->pc = 0x1423D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1423D4u;
            // 0x1423d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142610u;
    if (runtime->hasFunction(0x142610u)) {
        auto targetFn = runtime->lookupFunction(0x142610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1423DCu; }
        if (ctx->pc != 0x1423DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddressCheck_0x142610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1423DCu; }
        if (ctx->pc != 0x1423DCu) { return; }
    }
    ctx->pc = 0x1423DCu;
    // 0x1423dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1423DCu;
    {
        const bool branch_taken_0x1423dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1423E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1423DCu;
            // 0x1423e0: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1423dc) {
            ctx->pc = 0x1423F8u;
            goto label_1423f8;
        }
    }
    ctx->pc = 0x1423E4u;
    // 0x1423e4: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1423E4u;
    SET_GPR_U32(ctx, 31, 0x1423ECu);
    ctx->pc = 0x1423E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1423E4u;
            // 0x1423e8: 0x248408d0  addiu       $a0, $a0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1423ECu; }
        if (ctx->pc != 0x1423ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1423ECu; }
        if (ctx->pc != 0x1423ECu) { return; }
    }
    ctx->pc = 0x1423ECu;
    // 0x1423ec: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1423ECu;
    {
        const bool branch_taken_0x1423ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1423F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1423ECu;
            // 0x1423f0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1423ec) {
            ctx->pc = 0x1424F8u;
            goto label_1424f8;
        }
    }
    ctx->pc = 0x1423F4u;
    // 0x1423f4: 0x0  nop
    ctx->pc = 0x1423f4u;
    // NOP
label_1423f8:
    // 0x1423f8: 0x3262000f  andi        $v0, $s3, 0xF
    ctx->pc = 0x1423f8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 19), _mm_cvtsi32_si128((int)15u)));
    // 0x1423fc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1423FCu;
    {
        const bool branch_taken_0x1423fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1423FCu;
            // 0x142400: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1423fc) {
            ctx->pc = 0x142430u;
            goto label_142430;
        }
    }
    ctx->pc = 0x142404u;
    // 0x142404: 0xc050984  jal         func_142610
    ctx->pc = 0x142404u;
    SET_GPR_U32(ctx, 31, 0x14240Cu);
    ctx->pc = 0x142610u;
    if (runtime->hasFunction(0x142610u)) {
        auto targetFn = runtime->lookupFunction(0x142610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14240Cu; }
        if (ctx->pc != 0x14240Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddressCheck_0x142610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14240Cu; }
        if (ctx->pc != 0x14240Cu) { return; }
    }
    ctx->pc = 0x14240Cu;
    // 0x14240c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14240Cu;
    {
        const bool branch_taken_0x14240c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14240c) {
            ctx->pc = 0x142428u;
            goto label_142428;
        }
    }
    ctx->pc = 0x142414u;
    // 0x142414: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x142414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x142418: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x142418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x14241c: 0x24840a30  addiu       $a0, $a0, 0xA30
    ctx->pc = 0x14241cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2608));
    // 0x142420: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x142420u;
    SET_GPR_U32(ctx, 31, 0x142428u);
    ctx->pc = 0x142424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142420u;
            // 0x142424: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142428u; }
        if (ctx->pc != 0x142428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142428u; }
        if (ctx->pc != 0x142428u) { return; }
    }
    ctx->pc = 0x142428u;
label_142428:
    // 0x142428: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x142428u;
    {
        const bool branch_taken_0x142428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14242Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142428u;
            // 0x14242c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142428) {
            ctx->pc = 0x1424F8u;
            goto label_1424f8;
        }
    }
    ctx->pc = 0x142430u;
label_142430:
    // 0x142430: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x142430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142434: 0xc050958  jal         func_142560
    ctx->pc = 0x142434u;
    SET_GPR_U32(ctx, 31, 0x14243Cu);
    ctx->pc = 0x142438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142434u;
            // 0x142438: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142560u;
    if (runtime->hasFunction(0x142560u)) {
        auto targetFn = runtime->lookupFunction(0x142560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14243Cu; }
        if (ctx->pc != 0x14243Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignetureCheck_0x142560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14243Cu; }
        if (ctx->pc != 0x14243Cu) { return; }
    }
    ctx->pc = 0x14243Cu;
    // 0x14243c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14243cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142440: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x142440u;
    {
        const bool branch_taken_0x142440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x142444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142440u;
            // 0x142444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142440) {
            ctx->pc = 0x142490u;
            goto label_142490;
        }
    }
    ctx->pc = 0x142448u;
    // 0x142448: 0xc050984  jal         func_142610
    ctx->pc = 0x142448u;
    SET_GPR_U32(ctx, 31, 0x142450u);
    ctx->pc = 0x142610u;
    if (runtime->hasFunction(0x142610u)) {
        auto targetFn = runtime->lookupFunction(0x142610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142450u; }
        if (ctx->pc != 0x142450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddressCheck_0x142610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142450u; }
        if (ctx->pc != 0x142450u) { return; }
    }
    ctx->pc = 0x142450u;
    // 0x142450: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x142450u;
    {
        const bool branch_taken_0x142450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x142450) {
            ctx->pc = 0x142478u;
            goto label_142478;
        }
    }
    ctx->pc = 0x142458u;
    // 0x142458: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x142458u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x14245c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x14245cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x142460: 0x24840940  addiu       $a0, $a0, 0x940
    ctx->pc = 0x142460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2368));
    // 0x142464: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x142464u;
    SET_GPR_U32(ctx, 31, 0x14246Cu);
    ctx->pc = 0x142468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142464u;
            // 0x142468: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14246Cu; }
        if (ctx->pc != 0x14246Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14246Cu; }
        if (ctx->pc != 0x14246Cu) { return; }
    }
    ctx->pc = 0x14246Cu;
    // 0x14246c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14246Cu;
    {
        const bool branch_taken_0x14246c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14246c) {
            ctx->pc = 0x142488u;
            goto label_142488;
        }
    }
    ctx->pc = 0x142474u;
    // 0x142474: 0x0  nop
    ctx->pc = 0x142474u;
    // NOP
label_142478:
    // 0x142478: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x142478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x14247c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14247cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142480: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x142480u;
    SET_GPR_U32(ctx, 31, 0x142488u);
    ctx->pc = 0x142484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142480u;
            // 0x142484: 0x24840960  addiu       $a0, $a0, 0x960 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142488u; }
        if (ctx->pc != 0x142488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142488u; }
        if (ctx->pc != 0x142488u) { return; }
    }
    ctx->pc = 0x142488u;
label_142488:
    // 0x142488: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x142488u;
    {
        const bool branch_taken_0x142488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14248Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142488u;
            // 0x14248c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142488) {
            ctx->pc = 0x1424F8u;
            goto label_1424f8;
        }
    }
    ctx->pc = 0x142490u;
label_142490:
    // 0x142490: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x142490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x142494: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x142494u;
    {
        const bool branch_taken_0x142494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x142498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142494u;
            // 0x142498: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142494) {
            ctx->pc = 0x1424E0u;
            goto label_1424e0;
        }
    }
    ctx->pc = 0x14249Cu;
    // 0x14249c: 0xc050984  jal         func_142610
    ctx->pc = 0x14249Cu;
    SET_GPR_U32(ctx, 31, 0x1424A4u);
    ctx->pc = 0x142610u;
    if (runtime->hasFunction(0x142610u)) {
        auto targetFn = runtime->lookupFunction(0x142610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1424A4u; }
        if (ctx->pc != 0x1424A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddressCheck_0x142610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1424A4u; }
        if (ctx->pc != 0x1424A4u) { return; }
    }
    ctx->pc = 0x1424A4u;
    // 0x1424a4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1424A4u;
    {
        const bool branch_taken_0x1424a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1424a4) {
            ctx->pc = 0x1424C8u;
            goto label_1424c8;
        }
    }
    ctx->pc = 0x1424ACu;
    // 0x1424ac: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x1424acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1424b0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1424b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1424b4: 0x24840990  addiu       $a0, $a0, 0x990
    ctx->pc = 0x1424b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2448));
    // 0x1424b8: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1424B8u;
    SET_GPR_U32(ctx, 31, 0x1424C0u);
    ctx->pc = 0x1424BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1424B8u;
            // 0x1424bc: 0x26650004  addiu       $a1, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1424C0u; }
        if (ctx->pc != 0x1424C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1424C0u; }
        if (ctx->pc != 0x1424C0u) { return; }
    }
    ctx->pc = 0x1424C0u;
    // 0x1424c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1424C0u;
    {
        const bool branch_taken_0x1424c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1424c0) {
            ctx->pc = 0x1424D8u;
            goto label_1424d8;
        }
    }
    ctx->pc = 0x1424C8u;
label_1424c8:
    // 0x1424c8: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1424c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1424cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1424ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1424d0: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1424D0u;
    SET_GPR_U32(ctx, 31, 0x1424D8u);
    ctx->pc = 0x1424D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1424D0u;
            // 0x1424d4: 0x248409b0  addiu       $a0, $a0, 0x9B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1424D8u; }
        if (ctx->pc != 0x1424D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1424D8u; }
        if (ctx->pc != 0x1424D8u) { return; }
    }
    ctx->pc = 0x1424D8u;
label_1424d8:
    // 0x1424d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1424D8u;
    {
        const bool branch_taken_0x1424d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1424DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1424D8u;
            // 0x1424dc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1424d8) {
            ctx->pc = 0x1424F8u;
            goto label_1424f8;
        }
    }
    ctx->pc = 0x1424E0u;
label_1424e0:
    // 0x1424e0: 0x8e710018  lw          $s1, 0x18($s3)
    ctx->pc = 0x1424e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1424e4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1424E4u;
    {
        const bool branch_taken_0x1424e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1424E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1424E4u;
            // 0x1424e8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1424e4) {
            ctx->pc = 0x1424F8u;
            goto label_1424f8;
        }
    }
    ctx->pc = 0x1424ECu;
    // 0x1424ec: 0x1000ffa6  b           . + 4 + (-0x5A << 2)
    ctx->pc = 0x1424ECu;
    {
        const bool branch_taken_0x1424ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1424ec) {
            ctx->pc = 0x142388u;
            goto label_142388;
        }
    }
    ctx->pc = 0x1424F4u;
    // 0x1424f4: 0x0  nop
    ctx->pc = 0x1424f4u;
    // NOP
label_1424f8:
    // 0x1424f8: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1424f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1424fc: 0x8c237a00  lw          $v1, 0x7A00($at)
    ctx->pc = 0x1424fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31232)));
    // 0x142500: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x142500u;
    {
        const bool branch_taken_0x142500 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x142504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142500u;
            // 0x142504: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142500) {
            ctx->pc = 0x142518u;
            goto label_142518;
        }
    }
    ctx->pc = 0x142508u;
    // 0x142508: 0x702823  subu        $a1, $v1, $s0
    ctx->pc = 0x142508u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x14250c: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x14250Cu;
    SET_GPR_U32(ctx, 31, 0x142514u);
    ctx->pc = 0x142510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14250Cu;
            // 0x142510: 0x248409e0  addiu       $a0, $a0, 0x9E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142514u; }
        if (ctx->pc != 0x142514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142514u; }
        if (ctx->pc != 0x142514u) { return; }
    }
    ctx->pc = 0x142514u;
    // 0x142514: 0x0  nop
    ctx->pc = 0x142514u;
    // NOP
label_142518:
    // 0x142518: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x142518u;
    {
        const bool branch_taken_0x142518 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x142518) {
            ctx->pc = 0x142540u;
            goto label_142540;
        }
    }
    ctx->pc = 0x142520u;
label_142520:
    // 0x142520: 0x0  nop
    ctx->pc = 0x142520u;
    // NOP
    // 0x142524: 0x0  nop
    ctx->pc = 0x142524u;
    // NOP
    // 0x142528: 0x0  nop
    ctx->pc = 0x142528u;
    // NOP
    // 0x14252c: 0x0  nop
    ctx->pc = 0x14252cu;
    // NOP
    // 0x142530: 0x0  nop
    ctx->pc = 0x142530u;
    // NOP
    // 0x142534: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x142534u;
    {
        const bool branch_taken_0x142534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142534) {
            ctx->pc = 0x142520u;
            goto label_142520;
        }
    }
    ctx->pc = 0x14253Cu;
    // 0x14253c: 0x0  nop
    ctx->pc = 0x14253cu;
    // NOP
label_142540:
    // 0x142540: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x142540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x142544: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x142544u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x142548: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x142548u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14254c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14254cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142550: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x142550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142554: 0x3e00008  jr          $ra
    ctx->pc = 0x142554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142554u;
            // 0x142558: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1421E8u: goto label_1421e8;
            case 0x142210u: goto label_142210;
            case 0x142230u: goto label_142230;
            case 0x142258u: goto label_142258;
            case 0x142288u: goto label_142288;
            case 0x142290u: goto label_142290;
            case 0x1422D8u: goto label_1422d8;
            case 0x1422E8u: goto label_1422e8;
            case 0x1422F0u: goto label_1422f0;
            case 0x142328u: goto label_142328;
            case 0x142338u: goto label_142338;
            case 0x142340u: goto label_142340;
            case 0x142358u: goto label_142358;
            case 0x142378u: goto label_142378;
            case 0x142388u: goto label_142388;
            case 0x1423B0u: goto label_1423b0;
            case 0x1423D0u: goto label_1423d0;
            case 0x1423F8u: goto label_1423f8;
            case 0x142428u: goto label_142428;
            case 0x142430u: goto label_142430;
            case 0x142478u: goto label_142478;
            case 0x142488u: goto label_142488;
            case 0x142490u: goto label_142490;
            case 0x1424C8u: goto label_1424c8;
            case 0x1424D8u: goto label_1424d8;
            case 0x1424E0u: goto label_1424e0;
            case 0x1424F8u: goto label_1424f8;
            case 0x142518u: goto label_142518;
            case 0x142520u: goto label_142520;
            case 0x142540u: goto label_142540;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14255Cu;
}
