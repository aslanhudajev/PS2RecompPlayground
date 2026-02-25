#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: play_bgm
// Address: 0x174010 - 0x1741f8
void play_bgm_0x174010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("play_bgm_0x174010");
#endif

    ctx->pc = 0x174010u;

    // 0x174010: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x174010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x174014: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x174014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x174018: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x174018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17401c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17401cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x174020: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x174020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174024: 0xc065cf4  jal         func_1973D0
    ctx->pc = 0x174024u;
    SET_GPR_U32(ctx, 31, 0x17402Cu);
    ctx->pc = 0x174028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174024u;
            // 0x174028: 0x7fb00010  sq          $s0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1973D0u;
    if (runtime->hasFunction(0x1973D0u)) {
        auto targetFn = runtime->lookupFunction(0x1973D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17402Cu; }
        if (ctx->pc != 0x17402Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSoundType_0x1973d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17402Cu; }
        if (ctx->pc != 0x17402Cu) { return; }
    }
    ctx->pc = 0x17402Cu;
    // 0x17402c: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x17402Cu;
    {
        const bool branch_taken_0x17402c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17402c) {
            ctx->pc = 0x1740D8u;
            goto label_1740d8;
        }
    }
    ctx->pc = 0x174034u;
    // 0x174034: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x174034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x174038: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x174038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17403c: 0x8c252788  lw          $a1, 0x2788($at)
    ctx->pc = 0x17403cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10120)));
    // 0x174040: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x174040u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174044: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x174044u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174048: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x174048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17404c: 0x94262790  lhu         $a2, 0x2790($at)
    ctx->pc = 0x17404cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 10128)));
    // 0x174050: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x174050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x174054: 0x9427a060  lhu         $a3, -0x5FA0($at)
    ctx->pc = 0x174054u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294942816)));
    // 0x174058: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x174058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17405c: 0x942927a8  lhu         $t1, 0x27A8($at)
    ctx->pc = 0x17405cu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 10152)));
    // 0x174060: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x174060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x174064: 0x8c242780  lw          $a0, 0x2780($at)
    ctx->pc = 0x174064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10112)));
    // 0x174068: 0xc05cdf0  jal         func_1737C0
    ctx->pc = 0x174068u;
    SET_GPR_U32(ctx, 31, 0x174070u);
    ctx->pc = 0x17406Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174068u;
            // 0x17406c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1737C0u;
    if (runtime->hasFunction(0x1737C0u)) {
        auto targetFn = runtime->lookupFunction(0x1737C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174070u; }
        if (ctx->pc != 0x174070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_PlayStream_0x1737c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174070u; }
        if (ctx->pc != 0x174070u) { return; }
    }
    ctx->pc = 0x174070u;
    // 0x174070: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x174070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x174074: 0x118040  sll         $s0, $s1, 1
    ctx->pc = 0x174074u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x174078: 0x8c242788  lw          $a0, 0x2788($at)
    ctx->pc = 0x174078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10120)));
    // 0x17407c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17407cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x174080: 0x8c2627a0  lw          $a2, 0x27A0($at)
    ctx->pc = 0x174080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10144)));
    // 0x174084: 0xc05c9a8  jal         func_1726A0
    ctx->pc = 0x174084u;
    SET_GPR_U32(ctx, 31, 0x17408Cu);
    ctx->pc = 0x174088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174084u;
            // 0x174088: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1726A0u;
    if (runtime->hasFunction(0x1726A0u)) {
        auto targetFn = runtime->lookupFunction(0x1726A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17408Cu; }
        if (ctx->pc != 0x17408Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_SetStreamParent_Int_0x1726a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17408Cu; }
        if (ctx->pc != 0x17408Cu) { return; }
    }
    ctx->pc = 0x17408Cu;
    // 0x17408c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17408cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x174090: 0x3c02000d  lui         $v0, 0xD
    ctx->pc = 0x174090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13 << 16));
    // 0x174094: 0x8c252788  lw          $a1, 0x2788($at)
    ctx->pc = 0x174094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10120)));
    // 0x174098: 0x34426d50  ori         $v0, $v0, 0x6D50
    ctx->pc = 0x174098u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)27984u)));
    // 0x17409c: 0x26070001  addiu       $a3, $s0, 0x1
    ctx->pc = 0x17409cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1740a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1740a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1740a4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1740a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1740a8: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x1740a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1740ac: 0x94262790  lhu         $a2, 0x2790($at)
    ctx->pc = 0x1740acu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 10128)));
    // 0x1740b0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1740b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1740b4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1740b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1740b8: 0x9429a060  lhu         $t1, -0x5FA0($at)
    ctx->pc = 0x1740b8u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294942816)));
    // 0x1740bc: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1740bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1740c0: 0x8c2327a0  lw          $v1, 0x27A0($at)
    ctx->pc = 0x1740c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10144)));
    // 0x1740c4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1740c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1740c8: 0xc05c948  jal         func_172520
    ctx->pc = 0x1740C8u;
    SET_GPR_U32(ctx, 31, 0x1740D0u);
    ctx->pc = 0x1740CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1740C8u;
            // 0x1740cc: 0x625021  addu        $t2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172520u;
    if (runtime->hasFunction(0x172520u)) {
        auto targetFn = runtime->lookupFunction(0x172520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1740D0u; }
        if (ctx->pc != 0x1740D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_SetStreamChild_Int_0x172520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1740D0u; }
        if (ctx->pc != 0x1740D0u) { return; }
    }
    ctx->pc = 0x1740D0u;
    // 0x1740d0: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1740D0u;
    {
        const bool branch_taken_0x1740d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1740d0) {
            ctx->pc = 0x1741E0u;
            goto label_1741e0;
        }
    }
    ctx->pc = 0x1740D8u;
label_1740d8:
    // 0x1740d8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1740d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1740dc: 0x9424a060  lhu         $a0, -0x5FA0($at)
    ctx->pc = 0x1740dcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294942816)));
    // 0x1740e0: 0x3c023fe0  lui         $v0, 0x3FE0
    ctx->pc = 0x1740e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16352 << 16));
    // 0x1740e4: 0xc0400a0  jal         func_100280
    ctx->pc = 0x1740E4u;
    SET_GPR_U32(ctx, 31, 0x1740ECu);
    ctx->pc = 0x1740E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1740E4u;
            // 0x1740e8: 0x2803c  dsll32      $s0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100280u;
    if (runtime->hasFunction(0x100280u)) {
        auto targetFn = runtime->lookupFunction(0x100280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1740ECu; }
        if (ctx->pc != 0x1740ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _d_utod_0x100280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1740ECu; }
        if (ctx->pc != 0x1740ECu) { return; }
    }
    ctx->pc = 0x1740ECu;
    // 0x1740ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1740ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1740f0: 0xc040880  jal         func_102200
    ctx->pc = 0x1740F0u;
    SET_GPR_U32(ctx, 31, 0x1740F8u);
    ctx->pc = 0x1740F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1740F0u;
            // 0x1740f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1740F8u; }
        if (ctx->pc != 0x1740F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1740F8u; }
        if (ctx->pc != 0x1740F8u) { return; }
    }
    ctx->pc = 0x1740F8u;
    // 0x1740f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1740f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1740fc: 0xc040a0c  jal         func_102830
    ctx->pc = 0x1740FCu;
    SET_GPR_U32(ctx, 31, 0x174104u);
    ctx->pc = 0x174100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1740FCu;
            // 0x174100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102830u;
    if (runtime->hasFunction(0x102830u)) {
        auto targetFn = runtime->lookupFunction(0x102830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174104u; }
        if (ctx->pc != 0x174104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x102830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174104u; }
        if (ctx->pc != 0x174104u) { return; }
    }
    ctx->pc = 0x174104u;
    // 0x174104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x174104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174108: 0xc040a0c  jal         func_102830
    ctx->pc = 0x174108u;
    SET_GPR_U32(ctx, 31, 0x174110u);
    ctx->pc = 0x17410Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174108u;
            // 0x17410c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102830u;
    if (runtime->hasFunction(0x102830u)) {
        auto targetFn = runtime->lookupFunction(0x102830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174110u; }
        if (ctx->pc != 0x174110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x102830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174110u; }
        if (ctx->pc != 0x174110u) { return; }
    }
    ctx->pc = 0x174110u;
    // 0x174110: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x174110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x174114: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x174114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x174118: 0x8c252788  lw          $a1, 0x2788($at)
    ctx->pc = 0x174118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10120)));
    // 0x17411c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x17411cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174120: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x174120u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174124: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x174124u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174128: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x174128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17412c: 0x94262790  lhu         $a2, 0x2790($at)
    ctx->pc = 0x17412cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 10128)));
    // 0x174130: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x174130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x174134: 0x942927a8  lhu         $t1, 0x27A8($at)
    ctx->pc = 0x174134u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 10152)));
    // 0x174138: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x174138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17413c: 0x8c242780  lw          $a0, 0x2780($at)
    ctx->pc = 0x17413cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10112)));
    // 0x174140: 0xc05cdf0  jal         func_1737C0
    ctx->pc = 0x174140u;
    SET_GPR_U32(ctx, 31, 0x174148u);
    ctx->pc = 0x174144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174140u;
            // 0x174144: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1737C0u;
    if (runtime->hasFunction(0x1737C0u)) {
        auto targetFn = runtime->lookupFunction(0x1737C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174148u; }
        if (ctx->pc != 0x174148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_PlayStream_0x1737c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174148u; }
        if (ctx->pc != 0x174148u) { return; }
    }
    ctx->pc = 0x174148u;
    // 0x174148: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x174148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17414c: 0x119040  sll         $s2, $s1, 1
    ctx->pc = 0x17414cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x174150: 0x8c242788  lw          $a0, 0x2788($at)
    ctx->pc = 0x174150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10120)));
    // 0x174154: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x174154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x174158: 0x8c2627a0  lw          $a2, 0x27A0($at)
    ctx->pc = 0x174158u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10144)));
    // 0x17415c: 0xc05c9a8  jal         func_1726A0
    ctx->pc = 0x17415Cu;
    SET_GPR_U32(ctx, 31, 0x174164u);
    ctx->pc = 0x174160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17415Cu;
            // 0x174160: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1726A0u;
    if (runtime->hasFunction(0x1726A0u)) {
        auto targetFn = runtime->lookupFunction(0x1726A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174164u; }
        if (ctx->pc != 0x174164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_SetStreamParent_Int_0x1726a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174164u; }
        if (ctx->pc != 0x174164u) { return; }
    }
    ctx->pc = 0x174164u;
    // 0x174164: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x174164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x174168: 0x3c023fe0  lui         $v0, 0x3FE0
    ctx->pc = 0x174168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16352 << 16));
    // 0x17416c: 0x9424a060  lhu         $a0, -0x5FA0($at)
    ctx->pc = 0x17416cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294942816)));
    // 0x174170: 0xc0400a0  jal         func_100280
    ctx->pc = 0x174170u;
    SET_GPR_U32(ctx, 31, 0x174178u);
    ctx->pc = 0x174174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174170u;
            // 0x174174: 0x2803c  dsll32      $s0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100280u;
    if (runtime->hasFunction(0x100280u)) {
        auto targetFn = runtime->lookupFunction(0x100280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174178u; }
        if (ctx->pc != 0x174178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _d_utod_0x100280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174178u; }
        if (ctx->pc != 0x174178u) { return; }
    }
    ctx->pc = 0x174178u;
    // 0x174178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x174178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17417c: 0xc040880  jal         func_102200
    ctx->pc = 0x17417Cu;
    SET_GPR_U32(ctx, 31, 0x174184u);
    ctx->pc = 0x174180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17417Cu;
            // 0x174180: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174184u; }
        if (ctx->pc != 0x174184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174184u; }
        if (ctx->pc != 0x174184u) { return; }
    }
    ctx->pc = 0x174184u;
    // 0x174184: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x174184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x174188: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x174188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17418c: 0x8c312788  lw          $s1, 0x2788($at)
    ctx->pc = 0x17418cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10120)));
    // 0x174190: 0xc040a0c  jal         func_102830
    ctx->pc = 0x174190u;
    SET_GPR_U32(ctx, 31, 0x174198u);
    ctx->pc = 0x174194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174190u;
            // 0x174194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102830u;
    if (runtime->hasFunction(0x102830u)) {
        auto targetFn = runtime->lookupFunction(0x102830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174198u; }
        if (ctx->pc != 0x174198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x102830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174198u; }
        if (ctx->pc != 0x174198u) { return; }
    }
    ctx->pc = 0x174198u;
    // 0x174198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x174198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17419c: 0xc040a0c  jal         func_102830
    ctx->pc = 0x17419Cu;
    SET_GPR_U32(ctx, 31, 0x1741A4u);
    ctx->pc = 0x1741A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17419Cu;
            // 0x1741a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102830u;
    if (runtime->hasFunction(0x102830u)) {
        auto targetFn = runtime->lookupFunction(0x102830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1741A4u; }
        if (ctx->pc != 0x1741A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x102830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1741A4u; }
        if (ctx->pc != 0x1741A4u) { return; }
    }
    ctx->pc = 0x1741A4u;
    // 0x1741a4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1741a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1741a8: 0x3c03000d  lui         $v1, 0xD
    ctx->pc = 0x1741a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13 << 16));
    // 0x1741ac: 0x94262790  lhu         $a2, 0x2790($at)
    ctx->pc = 0x1741acu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 10128)));
    // 0x1741b0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1741b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1741b4: 0x34636d50  ori         $v1, $v1, 0x6D50
    ctx->pc = 0x1741b4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)27984u)));
    // 0x1741b8: 0x26470001  addiu       $a3, $s2, 0x1
    ctx->pc = 0x1741b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1741bc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1741bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1741c0: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x1741c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1741c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1741c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1741c8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1741c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1741cc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1741ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1741d0: 0x8c2a27a0  lw          $t2, 0x27A0($at)
    ctx->pc = 0x1741d0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10144)));
    // 0x1741d4: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x1741d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x1741d8: 0xc05c948  jal         func_172520
    ctx->pc = 0x1741D8u;
    SET_GPR_U32(ctx, 31, 0x1741E0u);
    ctx->pc = 0x1741DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1741D8u;
            // 0x1741dc: 0x435021  addu        $t2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172520u;
    if (runtime->hasFunction(0x172520u)) {
        auto targetFn = runtime->lookupFunction(0x172520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1741E0u; }
        if (ctx->pc != 0x1741E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_SetStreamChild_Int_0x172520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1741E0u; }
        if (ctx->pc != 0x1741E0u) { return; }
    }
    ctx->pc = 0x1741E0u;
label_1741e0:
    // 0x1741e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1741e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1741e4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1741e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1741e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1741e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1741ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1741ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1741f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1741F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1741F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1741F0u;
            // 0x1741f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1740D8u: goto label_1740d8;
            case 0x1741E0u: goto label_1741e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1741F8u;
}
