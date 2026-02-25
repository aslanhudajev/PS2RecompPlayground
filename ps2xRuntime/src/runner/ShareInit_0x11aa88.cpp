#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ShareInit
// Address: 0x11aa88 - 0x11ac24
void ShareInit_0x11aa88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ShareInit_0x11aa88");
#endif

    ctx->pc = 0x11aa88u;

    // 0x11aa88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11aa88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11aa8c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x11aa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x11aa90: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11aa90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11aa94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11aa94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11aa98: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11aa98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aa9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11aa9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aaa0: 0xdc45e8c0  ld          $a1, -0x1740($v0)
    ctx->pc = 0x11aaa0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294961344)));
    // 0x11aaa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11aaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11aaa8: 0xc04724a  jal         func_11C928
    ctx->pc = 0x11AAA8u;
    SET_GPR_U32(ctx, 31, 0x11AAB0u);
    ctx->pc = 0x11AAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AAA8u;
            // 0x11aaac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C928u;
    if (runtime->hasFunction(0x11C928u)) {
        auto targetFn = runtime->lookupFunction(0x11C928u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AAB0u; }
        if (ctx->pc != 0x11AAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShareGetHead_0x11c928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AAB0u; }
        if (ctx->pc != 0x11AAB0u) { return; }
    }
    ctx->pc = 0x11AAB0u;
    // 0x11aab0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11AAB0u;
    {
        const bool branch_taken_0x11aab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AAB0u;
            // 0x11aab4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aab0) {
            ctx->pc = 0x11AAC8u;
            goto label_11aac8;
        }
    }
    ctx->pc = 0x11AAB8u;
    // 0x11aab8: 0xc046962  jal         func_11A588
    ctx->pc = 0x11AAB8u;
    SET_GPR_U32(ctx, 31, 0x11AAC0u);
    ctx->pc = 0x11AABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AAB8u;
            // 0x11aabc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A588u;
    if (runtime->hasFunction(0x11A588u)) {
        auto targetFn = runtime->lookupFunction(0x11A588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AAC0u; }
        if (ctx->pc != 0x11AAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_share_err_0x11a588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AAC0u; }
        if (ctx->pc != 0x11AAC0u) { return; }
    }
    ctx->pc = 0x11AAC0u;
    // 0x11aac0: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x11AAC0u;
    {
        const bool branch_taken_0x11aac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AAC0u;
            // 0x11aac4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aac0) {
            ctx->pc = 0x11AC14u;
            goto label_11ac14;
        }
    }
    ctx->pc = 0x11AAC8u;
label_11aac8:
    // 0x11aac8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x11aac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x11aacc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11aaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aad0: 0xc04724a  jal         func_11C928
    ctx->pc = 0x11AAD0u;
    SET_GPR_U32(ctx, 31, 0x11AAD8u);
    ctx->pc = 0x11AAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AAD0u;
            // 0x11aad4: 0xdc45e8c8  ld          $a1, -0x1738($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294961352)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C928u;
    if (runtime->hasFunction(0x11C928u)) {
        auto targetFn = runtime->lookupFunction(0x11C928u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AAD8u; }
        if (ctx->pc != 0x11AAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShareGetHead_0x11c928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AAD8u; }
        if (ctx->pc != 0x11AAD8u) { return; }
    }
    ctx->pc = 0x11AAD8u;
    // 0x11aad8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11AAD8u;
    {
        const bool branch_taken_0x11aad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AAD8u;
            // 0x11aadc: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aad8) {
            ctx->pc = 0x11AAF0u;
            goto label_11aaf0;
        }
    }
    ctx->pc = 0x11AAE0u;
    // 0x11aae0: 0xc046962  jal         func_11A588
    ctx->pc = 0x11AAE0u;
    SET_GPR_U32(ctx, 31, 0x11AAE8u);
    ctx->pc = 0x11AAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AAE0u;
            // 0x11aae4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A588u;
    if (runtime->hasFunction(0x11A588u)) {
        auto targetFn = runtime->lookupFunction(0x11A588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AAE8u; }
        if (ctx->pc != 0x11AAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_share_err_0x11a588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AAE8u; }
        if (ctx->pc != 0x11AAE8u) { return; }
    }
    ctx->pc = 0x11AAE8u;
    // 0x11aae8: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x11AAE8u;
    {
        const bool branch_taken_0x11aae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AAE8u;
            // 0x11aaec: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aae8) {
            ctx->pc = 0x11AC14u;
            goto label_11ac14;
        }
    }
    ctx->pc = 0x11AAF0u;
label_11aaf0:
    // 0x11aaf0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x11aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x11aaf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11aaf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aaf8: 0xc04724a  jal         func_11C928
    ctx->pc = 0x11AAF8u;
    SET_GPR_U32(ctx, 31, 0x11AB00u);
    ctx->pc = 0x11AAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AAF8u;
            // 0x11aafc: 0xdc45e8d0  ld          $a1, -0x1730($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294961360)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C928u;
    if (runtime->hasFunction(0x11C928u)) {
        auto targetFn = runtime->lookupFunction(0x11C928u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AB00u; }
        if (ctx->pc != 0x11AB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShareGetHead_0x11c928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AB00u; }
        if (ctx->pc != 0x11AB00u) { return; }
    }
    ctx->pc = 0x11AB00u;
    // 0x11ab00: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11AB00u;
    {
        const bool branch_taken_0x11ab00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AB00u;
            // 0x11ab04: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab00) {
            ctx->pc = 0x11AB18u;
            goto label_11ab18;
        }
    }
    ctx->pc = 0x11AB08u;
    // 0x11ab08: 0xc046962  jal         func_11A588
    ctx->pc = 0x11AB08u;
    SET_GPR_U32(ctx, 31, 0x11AB10u);
    ctx->pc = 0x11AB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AB08u;
            // 0x11ab0c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A588u;
    if (runtime->hasFunction(0x11A588u)) {
        auto targetFn = runtime->lookupFunction(0x11A588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AB10u; }
        if (ctx->pc != 0x11AB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_share_err_0x11a588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AB10u; }
        if (ctx->pc != 0x11AB10u) { return; }
    }
    ctx->pc = 0x11AB10u;
    // 0x11ab10: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x11AB10u;
    {
        const bool branch_taken_0x11ab10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AB10u;
            // 0x11ab14: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab10) {
            ctx->pc = 0x11AC14u;
            goto label_11ac14;
        }
    }
    ctx->pc = 0x11AB18u;
label_11ab18:
    // 0x11ab18: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x11ab18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x11ab1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11ab1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab20: 0xc04724a  jal         func_11C928
    ctx->pc = 0x11AB20u;
    SET_GPR_U32(ctx, 31, 0x11AB28u);
    ctx->pc = 0x11AB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AB20u;
            // 0x11ab24: 0xdc45e8d8  ld          $a1, -0x1728($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294961368)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C928u;
    if (runtime->hasFunction(0x11C928u)) {
        auto targetFn = runtime->lookupFunction(0x11C928u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AB28u; }
        if (ctx->pc != 0x11AB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShareGetHead_0x11c928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AB28u; }
        if (ctx->pc != 0x11AB28u) { return; }
    }
    ctx->pc = 0x11AB28u;
    // 0x11ab28: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11AB28u;
    {
        const bool branch_taken_0x11ab28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AB28u;
            // 0x11ab2c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab28) {
            ctx->pc = 0x11AB40u;
            goto label_11ab40;
        }
    }
    ctx->pc = 0x11AB30u;
    // 0x11ab30: 0xc046962  jal         func_11A588
    ctx->pc = 0x11AB30u;
    SET_GPR_U32(ctx, 31, 0x11AB38u);
    ctx->pc = 0x11AB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AB30u;
            // 0x11ab34: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A588u;
    if (runtime->hasFunction(0x11A588u)) {
        auto targetFn = runtime->lookupFunction(0x11A588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AB38u; }
        if (ctx->pc != 0x11AB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_share_err_0x11a588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AB38u; }
        if (ctx->pc != 0x11AB38u) { return; }
    }
    ctx->pc = 0x11AB38u;
    // 0x11ab38: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x11AB38u;
    {
        const bool branch_taken_0x11ab38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AB38u;
            // 0x11ab3c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab38) {
            ctx->pc = 0x11AC14u;
            goto label_11ac14;
        }
    }
    ctx->pc = 0x11AB40u;
label_11ab40:
    // 0x11ab40: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x11ab40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x11ab44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11ab44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab48: 0xc04724a  jal         func_11C928
    ctx->pc = 0x11AB48u;
    SET_GPR_U32(ctx, 31, 0x11AB50u);
    ctx->pc = 0x11AB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AB48u;
            // 0x11ab4c: 0xdc45e8e0  ld          $a1, -0x1720($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294961376)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C928u;
    if (runtime->hasFunction(0x11C928u)) {
        auto targetFn = runtime->lookupFunction(0x11C928u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AB50u; }
        if (ctx->pc != 0x11AB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShareGetHead_0x11c928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AB50u; }
        if (ctx->pc != 0x11AB50u) { return; }
    }
    ctx->pc = 0x11AB50u;
    // 0x11ab50: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11AB50u;
    {
        const bool branch_taken_0x11ab50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AB50u;
            // 0x11ab54: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab50) {
            ctx->pc = 0x11AB68u;
            goto label_11ab68;
        }
    }
    ctx->pc = 0x11AB58u;
    // 0x11ab58: 0xc046962  jal         func_11A588
    ctx->pc = 0x11AB58u;
    SET_GPR_U32(ctx, 31, 0x11AB60u);
    ctx->pc = 0x11AB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AB58u;
            // 0x11ab5c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A588u;
    if (runtime->hasFunction(0x11A588u)) {
        auto targetFn = runtime->lookupFunction(0x11A588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AB60u; }
        if (ctx->pc != 0x11AB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_share_err_0x11a588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AB60u; }
        if (ctx->pc != 0x11AB60u) { return; }
    }
    ctx->pc = 0x11AB60u;
    // 0x11ab60: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x11AB60u;
    {
        const bool branch_taken_0x11ab60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AB60u;
            // 0x11ab64: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab60) {
            ctx->pc = 0x11AC14u;
            goto label_11ac14;
        }
    }
    ctx->pc = 0x11AB68u;
label_11ab68:
    // 0x11ab68: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x11ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x11ab6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11ab6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab70: 0xc04724a  jal         func_11C928
    ctx->pc = 0x11AB70u;
    SET_GPR_U32(ctx, 31, 0x11AB78u);
    ctx->pc = 0x11AB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AB70u;
            // 0x11ab74: 0xdc45e8e8  ld          $a1, -0x1718($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294961384)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C928u;
    if (runtime->hasFunction(0x11C928u)) {
        auto targetFn = runtime->lookupFunction(0x11C928u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AB78u; }
        if (ctx->pc != 0x11AB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShareGetHead_0x11c928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AB78u; }
        if (ctx->pc != 0x11AB78u) { return; }
    }
    ctx->pc = 0x11AB78u;
    // 0x11ab78: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11AB78u;
    {
        const bool branch_taken_0x11ab78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AB78u;
            // 0x11ab7c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab78) {
            ctx->pc = 0x11AB90u;
            goto label_11ab90;
        }
    }
    ctx->pc = 0x11AB80u;
    // 0x11ab80: 0xc046962  jal         func_11A588
    ctx->pc = 0x11AB80u;
    SET_GPR_U32(ctx, 31, 0x11AB88u);
    ctx->pc = 0x11AB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AB80u;
            // 0x11ab84: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A588u;
    if (runtime->hasFunction(0x11A588u)) {
        auto targetFn = runtime->lookupFunction(0x11A588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AB88u; }
        if (ctx->pc != 0x11AB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_share_err_0x11a588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AB88u; }
        if (ctx->pc != 0x11AB88u) { return; }
    }
    ctx->pc = 0x11AB88u;
    // 0x11ab88: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x11AB88u;
    {
        const bool branch_taken_0x11ab88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AB88u;
            // 0x11ab8c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab88) {
            ctx->pc = 0x11AC14u;
            goto label_11ac14;
        }
    }
    ctx->pc = 0x11AB90u;
label_11ab90:
    // 0x11ab90: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x11ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x11ab94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11ab94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab98: 0xc04724a  jal         func_11C928
    ctx->pc = 0x11AB98u;
    SET_GPR_U32(ctx, 31, 0x11ABA0u);
    ctx->pc = 0x11AB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AB98u;
            // 0x11ab9c: 0xdc45e8f0  ld          $a1, -0x1710($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294961392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C928u;
    if (runtime->hasFunction(0x11C928u)) {
        auto targetFn = runtime->lookupFunction(0x11C928u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ABA0u; }
        if (ctx->pc != 0x11ABA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShareGetHead_0x11c928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ABA0u; }
        if (ctx->pc != 0x11ABA0u) { return; }
    }
    ctx->pc = 0x11ABA0u;
    // 0x11aba0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11ABA0u;
    {
        const bool branch_taken_0x11aba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11ABA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ABA0u;
            // 0x11aba4: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aba0) {
            ctx->pc = 0x11ABB8u;
            goto label_11abb8;
        }
    }
    ctx->pc = 0x11ABA8u;
    // 0x11aba8: 0xc046962  jal         func_11A588
    ctx->pc = 0x11ABA8u;
    SET_GPR_U32(ctx, 31, 0x11ABB0u);
    ctx->pc = 0x11ABACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11ABA8u;
            // 0x11abac: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A588u;
    if (runtime->hasFunction(0x11A588u)) {
        auto targetFn = runtime->lookupFunction(0x11A588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ABB0u; }
        if (ctx->pc != 0x11ABB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_share_err_0x11a588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ABB0u; }
        if (ctx->pc != 0x11ABB0u) { return; }
    }
    ctx->pc = 0x11ABB0u;
    // 0x11abb0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x11ABB0u;
    {
        const bool branch_taken_0x11abb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ABB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ABB0u;
            // 0x11abb4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11abb0) {
            ctx->pc = 0x11AC14u;
            goto label_11ac14;
        }
    }
    ctx->pc = 0x11ABB8u;
label_11abb8:
    // 0x11abb8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x11abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x11abbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11abbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abc0: 0xc047128  jal         func_11C4A0
    ctx->pc = 0x11ABC0u;
    SET_GPR_U32(ctx, 31, 0x11ABC8u);
    ctx->pc = 0x11ABC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11ABC0u;
            // 0x11abc4: 0xdc45e8f8  ld          $a1, -0x1708($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294961400)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C4A0u;
    if (runtime->hasFunction(0x11C4A0u)) {
        auto targetFn = runtime->lookupFunction(0x11C4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ABC8u; }
        if (ctx->pc != 0x11ABC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeGetHead_0x11c4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ABC8u; }
        if (ctx->pc != 0x11ABC8u) { return; }
    }
    ctx->pc = 0x11ABC8u;
    // 0x11abc8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11ABC8u;
    {
        const bool branch_taken_0x11abc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11ABCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ABC8u;
            // 0x11abcc: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11abc8) {
            ctx->pc = 0x11ABE0u;
            goto label_11abe0;
        }
    }
    ctx->pc = 0x11ABD0u;
    // 0x11abd0: 0xc046962  jal         func_11A588
    ctx->pc = 0x11ABD0u;
    SET_GPR_U32(ctx, 31, 0x11ABD8u);
    ctx->pc = 0x11ABD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11ABD0u;
            // 0x11abd4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A588u;
    if (runtime->hasFunction(0x11A588u)) {
        auto targetFn = runtime->lookupFunction(0x11A588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ABD8u; }
        if (ctx->pc != 0x11ABD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_share_err_0x11a588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ABD8u; }
        if (ctx->pc != 0x11ABD8u) { return; }
    }
    ctx->pc = 0x11ABD8u;
    // 0x11abd8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x11ABD8u;
    {
        const bool branch_taken_0x11abd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ABDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ABD8u;
            // 0x11abdc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11abd8) {
            ctx->pc = 0x11AC14u;
            goto label_11ac14;
        }
    }
    ctx->pc = 0x11ABE0u;
label_11abe0:
    // 0x11abe0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x11abe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x11abe4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11abe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abe8: 0xc047128  jal         func_11C4A0
    ctx->pc = 0x11ABE8u;
    SET_GPR_U32(ctx, 31, 0x11ABF0u);
    ctx->pc = 0x11ABECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11ABE8u;
            // 0x11abec: 0xdc45e900  ld          $a1, -0x1700($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294961408)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C4A0u;
    if (runtime->hasFunction(0x11C4A0u)) {
        auto targetFn = runtime->lookupFunction(0x11C4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ABF0u; }
        if (ctx->pc != 0x11ABF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeGetHead_0x11c4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ABF0u; }
        if (ctx->pc != 0x11ABF0u) { return; }
    }
    ctx->pc = 0x11ABF0u;
    // 0x11abf0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11ABF0u;
    {
        const bool branch_taken_0x11abf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11ABF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ABF0u;
            // 0x11abf4: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11abf0) {
            ctx->pc = 0x11AC08u;
            goto label_11ac08;
        }
    }
    ctx->pc = 0x11ABF8u;
    // 0x11abf8: 0xc046962  jal         func_11A588
    ctx->pc = 0x11ABF8u;
    SET_GPR_U32(ctx, 31, 0x11AC00u);
    ctx->pc = 0x11ABFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11ABF8u;
            // 0x11abfc: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A588u;
    if (runtime->hasFunction(0x11A588u)) {
        auto targetFn = runtime->lookupFunction(0x11A588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AC00u; }
        if (ctx->pc != 0x11AC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_share_err_0x11a588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AC00u; }
        if (ctx->pc != 0x11AC00u) { return; }
    }
    ctx->pc = 0x11AC00u;
    // 0x11ac00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11AC00u;
    {
        const bool branch_taken_0x11ac00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AC00u;
            // 0x11ac04: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ac00) {
            ctx->pc = 0x11AC14u;
            goto label_11ac14;
        }
    }
    ctx->pc = 0x11AC08u;
label_11ac08:
    // 0x11ac08: 0xc046a38  jal         func_11A8E0
    ctx->pc = 0x11AC08u;
    SET_GPR_U32(ctx, 31, 0x11AC10u);
    ctx->pc = 0x11AC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AC08u;
            // 0x11ac0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A8E0u;
    if (runtime->hasFunction(0x11A8E0u)) {
        auto targetFn = runtime->lookupFunction(0x11A8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AC10u; }
        if (ctx->pc != 0x11AC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GeomInit_0x11a8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AC10u; }
        if (ctx->pc != 0x11AC10u) { return; }
    }
    ctx->pc = 0x11AC10u;
    // 0x11ac10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11ac10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11ac14:
    // 0x11ac14: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11ac14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ac18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11ac18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ac1c: 0x3e00008  jr          $ra
    ctx->pc = 0x11AC1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AC1Cu;
            // 0x11ac20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11AAC8u: goto label_11aac8;
            case 0x11AAF0u: goto label_11aaf0;
            case 0x11AB18u: goto label_11ab18;
            case 0x11AB40u: goto label_11ab40;
            case 0x11AB68u: goto label_11ab68;
            case 0x11AB90u: goto label_11ab90;
            case 0x11ABB8u: goto label_11abb8;
            case 0x11ABE0u: goto label_11abe0;
            case 0x11AC08u: goto label_11ac08;
            case 0x11AC14u: goto label_11ac14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11AC24u;
}
