#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Display_MSH_HeaderInfo
// Address: 0x174490 - 0x1745c4
void Display_MSH_HeaderInfo_0x174490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Display_MSH_HeaderInfo_0x174490");
#endif

    ctx->pc = 0x174490u;

    // 0x174490: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x174490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x174494: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x174494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174498: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x174498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17449c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17449cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1744a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1744a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1744a4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1744a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1744a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1744a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1744ac: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x1744acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1744b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1744b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1744b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1744b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1744b8: 0xc05c9d8  jal         func_172760
    ctx->pc = 0x1744B8u;
    SET_GPR_U32(ctx, 31, 0x1744C0u);
    ctx->pc = 0x1744BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1744B8u;
            // 0x1744bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172760u;
    if (runtime->hasFunction(0x172760u)) {
        auto targetFn = runtime->lookupFunction(0x172760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1744C0u; }
        if (ctx->pc != 0x1744C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_GetMSHInfo_0x172760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1744C0u; }
        if (ctx->pc != 0x1744C0u) { return; }
    }
    ctx->pc = 0x1744C0u;
    // 0x1744c0: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1744c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1744c4: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1744c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1744c8: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1744C8u;
    SET_GPR_U32(ctx, 31, 0x1744D0u);
    ctx->pc = 0x1744CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1744C8u;
            // 0x1744cc: 0x24841950  addiu       $a0, $a0, 0x1950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1744D0u; }
        if (ctx->pc != 0x1744D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1744D0u; }
        if (ctx->pc != 0x1744D0u) { return; }
    }
    ctx->pc = 0x1744D0u;
    // 0x1744d0: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x1744d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1744d4: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1744d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1744d8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1744d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1744dc: 0x24841970  addiu       $a0, $a0, 0x1970
    ctx->pc = 0x1744dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6512));
    // 0x1744e0: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1744E0u;
    SET_GPR_U32(ctx, 31, 0x1744E8u);
    ctx->pc = 0x1744E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1744E0u;
            // 0x1744e4: 0x453023  subu        $a2, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1744E8u; }
        if (ctx->pc != 0x1744E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1744E8u; }
        if (ctx->pc != 0x1744E8u) { return; }
    }
    ctx->pc = 0x1744E8u;
    // 0x1744e8: 0x27b10058  addiu       $s1, $sp, 0x58
    ctx->pc = 0x1744e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1744ec: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1744ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1744f0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1744f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1744f4: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1744F4u;
    SET_GPR_U32(ctx, 31, 0x1744FCu);
    ctx->pc = 0x1744F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1744F4u;
            // 0x1744f8: 0x248419b0  addiu       $a0, $a0, 0x19B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1744FCu; }
        if (ctx->pc != 0x1744FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1744FCu; }
        if (ctx->pc != 0x1744FCu) { return; }
    }
    ctx->pc = 0x1744FCu;
    // 0x1744fc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1744fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x174500: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x174500u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x174504: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x174504u;
    {
        const bool branch_taken_0x174504 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x174508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174504u;
            // 0x174508: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174504) {
            ctx->pc = 0x174588u;
            goto label_174588;
        }
    }
    ctx->pc = 0x17450Cu;
    // 0x17450c: 0x0  nop
    ctx->pc = 0x17450cu;
    // NOP
label_174510:
    // 0x174510: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x174510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174514: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x174514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174518: 0xc05c9d8  jal         func_172760
    ctx->pc = 0x174518u;
    SET_GPR_U32(ctx, 31, 0x174520u);
    ctx->pc = 0x17451Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174518u;
            // 0x17451c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172760u;
    if (runtime->hasFunction(0x172760u)) {
        auto targetFn = runtime->lookupFunction(0x172760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174520u; }
        if (ctx->pc != 0x174520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_GetMSHInfo_0x172760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174520u; }
        if (ctx->pc != 0x174520u) { return; }
    }
    ctx->pc = 0x174520u;
    // 0x174520: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x174520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x174524: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x174524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x174528: 0x248419e0  addiu       $a0, $a0, 0x19E0
    ctx->pc = 0x174528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6624));
    // 0x17452c: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x17452Cu;
    SET_GPR_U32(ctx, 31, 0x174534u);
    ctx->pc = 0x174530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17452Cu;
            // 0x174530: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174534u; }
        if (ctx->pc != 0x174534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174534u; }
        if (ctx->pc != 0x174534u) { return; }
    }
    ctx->pc = 0x174534u;
    // 0x174534: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x174534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x174538: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x174538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x17453c: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x17453Cu;
    SET_GPR_U32(ctx, 31, 0x174544u);
    ctx->pc = 0x174540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17453Cu;
            // 0x174540: 0x24841a00  addiu       $a0, $a0, 0x1A00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174544u; }
        if (ctx->pc != 0x174544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174544u; }
        if (ctx->pc != 0x174544u) { return; }
    }
    ctx->pc = 0x174544u;
    // 0x174544: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x174544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x174548: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x174548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x17454c: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x17454Cu;
    SET_GPR_U32(ctx, 31, 0x174554u);
    ctx->pc = 0x174550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17454Cu;
            // 0x174550: 0x24841a10  addiu       $a0, $a0, 0x1A10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174554u; }
        if (ctx->pc != 0x174554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174554u; }
        if (ctx->pc != 0x174554u) { return; }
    }
    ctx->pc = 0x174554u;
    // 0x174554: 0xc05ca8c  jal         func_172A30
    ctx->pc = 0x174554u;
    SET_GPR_U32(ctx, 31, 0x17455Cu);
    ctx->pc = 0x174558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174554u;
            // 0x174558: 0x8e440018  lw          $a0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172A30u;
    if (runtime->hasFunction(0x172A30u)) {
        auto targetFn = runtime->lookupFunction(0x172A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17455Cu; }
        if (ctx->pc != 0x17455Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_HzToSPU_0x172a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17455Cu; }
        if (ctx->pc != 0x17455Cu) { return; }
    }
    ctx->pc = 0x17455Cu;
    // 0x17455c: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x17455cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x174560: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x174560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x174564: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x174564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174568: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x174568u;
    SET_GPR_U32(ctx, 31, 0x174570u);
    ctx->pc = 0x17456Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174568u;
            // 0x17456c: 0x24841a20  addiu       $a0, $a0, 0x1A20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174570u; }
        if (ctx->pc != 0x174570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174570u; }
        if (ctx->pc != 0x174570u) { return; }
    }
    ctx->pc = 0x174570u;
    // 0x174570: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x174570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x174574: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x174574u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x174578: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x174578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x17457c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x17457cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x174580: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x174580u;
    {
        const bool branch_taken_0x174580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174580u;
            // 0x174584: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174580) {
            ctx->pc = 0x174510u;
            goto label_174510;
        }
    }
    ctx->pc = 0x174588u;
label_174588:
    // 0x174588: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x174588u;
    {
        const bool branch_taken_0x174588 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x17458Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174588u;
            // 0x17458c: 0x103283  sra         $a2, $s0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 16), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174588) {
            ctx->pc = 0x174598u;
            goto label_174598;
        }
    }
    ctx->pc = 0x174590u;
    // 0x174590: 0x260203ff  addiu       $v0, $s0, 0x3FF
    ctx->pc = 0x174590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1023));
    // 0x174594: 0x23283  sra         $a2, $v0, 10
    ctx->pc = 0x174594u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
label_174598:
    // 0x174598: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x174598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x17459c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17459cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1745a0: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1745A0u;
    SET_GPR_U32(ctx, 31, 0x1745A8u);
    ctx->pc = 0x1745A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1745A0u;
            // 0x1745a4: 0x24841a40  addiu       $a0, $a0, 0x1A40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1745A8u; }
        if (ctx->pc != 0x1745A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1745A8u; }
        if (ctx->pc != 0x1745A8u) { return; }
    }
    ctx->pc = 0x1745A8u;
    // 0x1745a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1745a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1745ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1745acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1745b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1745b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1745b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1745b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1745b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1745b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1745bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1745BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1745C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1745BCu;
            // 0x1745c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174510u: goto label_174510;
            case 0x174588u: goto label_174588;
            case 0x174598u: goto label_174598;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1745C4u;
}
