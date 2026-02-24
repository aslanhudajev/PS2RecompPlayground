#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: PlaySound
// Address: 0x10b298 - 0x10b3d0
void PlaySound_0x10b298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("PlaySound_0x10b298");
#endif

    ctx->pc = 0x10b298u;

    // 0x10b298: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10b298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10b29c: 0x8f828390  lw          $v0, -0x7C70($gp)
    ctx->pc = 0x10b29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
    // 0x10b2a0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x10b2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x10b2a4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10b2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10b2a8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x10b2a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b2ac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10b2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10b2b0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x10b2b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b2b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x10b2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x10b2b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10b2b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b2bc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10b2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10b2c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10b2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10b2c4: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x10B2C4u;
    {
        const bool branch_taken_0x10b2c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B2C4u;
            // 0x10b2c8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b2c4) {
            ctx->pc = 0x10B3ACu;
            goto label_10b3ac;
        }
    }
    ctx->pc = 0x10B2CCu;
    // 0x10b2cc: 0x2a220018  slti        $v0, $s1, 0x18
    ctx->pc = 0x10b2ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x10b2d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B2D0u;
    {
        const bool branch_taken_0x10b2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B2D0u;
            // 0x10b2d4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b2d0) {
            ctx->pc = 0x10B2E0u;
            goto label_10b2e0;
        }
    }
    ctx->pc = 0x10B2D8u;
    // 0x10b2d8: 0x2631ffe8  addiu       $s1, $s1, -0x18
    ctx->pc = 0x10b2d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967272));
    // 0x10b2dc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x10b2dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10b2e0:
    // 0x10b2e0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x10b2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x10b2e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10b2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b2e8: 0x2828025  or          $s0, $s4, $v0
    ctx->pc = 0x10b2e8u;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 20), GPR_VEC(ctx, 2)));
    // 0x10b2ec: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x10b2ecu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32784u)));
    // 0x10b2f0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10b2f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b2f4: 0xc045c80  jal         func_117200
    ctx->pc = 0x10B2F4u;
    SET_GPR_U32(ctx, 31, 0x10B2FCu);
    ctx->pc = 0x10B2F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B2F4u;
            // 0x10b2f8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B2FCu; }
        if (ctx->pc != 0x10B2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B2FCu; }
        if (ctx->pc != 0x10B2FCu) { return; }
    }
    ctx->pc = 0x10B2FCu;
    // 0x10b2fc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x10b2fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10b300: 0x14520005  bne         $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B300u;
    {
        const bool branch_taken_0x10b300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x10B304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B300u;
            // 0x10b304: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b300) {
            ctx->pc = 0x10B318u;
            goto label_10b318;
        }
    }
    ctx->pc = 0x10B308u;
    // 0x10b308: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10b308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10b30c: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10B30Cu;
    SET_GPR_U32(ctx, 31, 0x10B314u);
    ctx->pc = 0x10B310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B30Cu;
            // 0x10b310: 0x24845eb0  addiu       $a0, $a0, 0x5EB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B314u; }
        if (ctx->pc != 0x10B314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B314u; }
        if (ctx->pc != 0x10B314u) { return; }
    }
    ctx->pc = 0x10B314u;
    // 0x10b314: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x10b314u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10b318:
    // 0x10b318: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10b318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b31c: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x10b31cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32784u)));
    // 0x10b320: 0xc045c80  jal         func_117200
    ctx->pc = 0x10B320u;
    SET_GPR_U32(ctx, 31, 0x10B328u);
    ctx->pc = 0x10B324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B320u;
            // 0x10b324: 0x36060100  ori         $a2, $s0, 0x100 (Delay Slot)
        SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)256u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B328u; }
        if (ctx->pc != 0x10B328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B328u; }
        if (ctx->pc != 0x10B328u) { return; }
    }
    ctx->pc = 0x10B328u;
    // 0x10b328: 0x14520005  bne         $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B328u;
    {
        const bool branch_taken_0x10b328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x10B32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B328u;
            // 0x10b32c: 0x36060200  ori         $a2, $s0, 0x200 (Delay Slot)
        SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)512u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b328) {
            ctx->pc = 0x10B340u;
            goto label_10b340;
        }
    }
    ctx->pc = 0x10B330u;
    // 0x10b330: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10b330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10b334: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10B334u;
    SET_GPR_U32(ctx, 31, 0x10B33Cu);
    ctx->pc = 0x10B338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B334u;
            // 0x10b338: 0x24845eb8  addiu       $a0, $a0, 0x5EB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B33Cu; }
        if (ctx->pc != 0x10B33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B33Cu; }
        if (ctx->pc != 0x10B33Cu) { return; }
    }
    ctx->pc = 0x10B33Cu;
    // 0x10b33c: 0x36060200  ori         $a2, $s0, 0x200
    ctx->pc = 0x10b33cu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)512u)));
label_10b340:
    // 0x10b340: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x10b340u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b344: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10b344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b348: 0xc045c80  jal         func_117200
    ctx->pc = 0x10B348u;
    SET_GPR_U32(ctx, 31, 0x10B350u);
    ctx->pc = 0x10B34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B348u;
            // 0x10b34c: 0x34058010  ori         $a1, $zero, 0x8010 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32784u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B350u; }
        if (ctx->pc != 0x10B350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B350u; }
        if (ctx->pc != 0x10B350u) { return; }
    }
    ctx->pc = 0x10B350u;
    // 0x10b350: 0x14520005  bne         $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B350u;
    {
        const bool branch_taken_0x10b350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x10B354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B350u;
            // 0x10b354: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b350) {
            ctx->pc = 0x10B368u;
            goto label_10b368;
        }
    }
    ctx->pc = 0x10B358u;
    // 0x10b358: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10b358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10b35c: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10B35Cu;
    SET_GPR_U32(ctx, 31, 0x10B364u);
    ctx->pc = 0x10B360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B35Cu;
            // 0x10b360: 0x24843880  addiu       $a0, $a0, 0x3880 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B364u; }
        if (ctx->pc != 0x10B364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B364u; }
        if (ctx->pc != 0x10B364u) { return; }
    }
    ctx->pc = 0x10B364u;
    // 0x10b364: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x10b364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10b368:
    // 0x10b368: 0x36861500  ori         $a2, $s4, 0x1500
    ctx->pc = 0x10b368u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 20), _mm_cvtsi32_si128((int)5376u)));
    // 0x10b36c: 0x2273804  sllv        $a3, $a3, $s1
    ctx->pc = 0x10b36cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x10b370: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10b370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b374: 0xc045c80  jal         func_117200
    ctx->pc = 0x10B374u;
    SET_GPR_U32(ctx, 31, 0x10B37Cu);
    ctx->pc = 0x10B378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B374u;
            // 0x10b378: 0x34058030  ori         $a1, $zero, 0x8030 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32816u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B37Cu; }
        if (ctx->pc != 0x10B37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B37Cu; }
        if (ctx->pc != 0x10B37Cu) { return; }
    }
    ctx->pc = 0x10B37Cu;
    // 0x10b37c: 0x1452000c  bne         $v0, $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x10B37Cu;
    {
        const bool branch_taken_0x10b37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x10B380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B37Cu;
            // 0x10b380: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b37c) {
            ctx->pc = 0x10B3B0u;
            goto label_10b3b0;
        }
    }
    ctx->pc = 0x10B384u;
    // 0x10b384: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10b384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10b388: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x10b388u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10b38c: 0x24843898  addiu       $a0, $a0, 0x3898
    ctx->pc = 0x10b38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14488));
    // 0x10b390: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10b390u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b394: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10b394u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b398: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10b398u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b39c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10b39cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b3a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b3a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b3a4: 0x804ace4  j           func_12B390
    ctx->pc = 0x10B3A4u;
    ctx->pc = 0x10B3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B3A4u;
            // 0x10b3a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        printf_0x12b390(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10B3ACu;
label_10b3ac:
    // 0x10b3ac: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x10b3acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_10b3b0:
    // 0x10b3b0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x10b3b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10b3b4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10b3b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b3b8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10b3b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b3bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10b3bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b3c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10b3c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b3c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b3c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x10B3C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B3C8u;
            // 0x10b3cc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10B2E0u: goto label_10b2e0;
            case 0x10B318u: goto label_10b318;
            case 0x10B340u: goto label_10b340;
            case 0x10B368u: goto label_10b368;
            case 0x10B3ACu: goto label_10b3ac;
            case 0x10B3B0u: goto label_10b3b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10B3D0u;
}
