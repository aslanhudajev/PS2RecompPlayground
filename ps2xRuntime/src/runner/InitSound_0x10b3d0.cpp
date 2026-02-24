#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitSound
// Address: 0x10b3d0 - 0x10b50c
void InitSound_0x10b3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitSound_0x10b3d0");
#endif

    ctx->pc = 0x10b3d0u;

    // 0x10b3d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10b3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10b3d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b3d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10b3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10b3dc: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x10b3dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10b3e0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10b3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10b3e4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10b3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10b3e8: 0xc045c30  jal         func_1170C0
    ctx->pc = 0x10B3E8u;
    SET_GPR_U32(ctx, 31, 0x10B3F0u);
    ctx->pc = 0x10B3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B3E8u;
            // 0x10b3ec: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1170C0u;
    if (runtime->hasFunction(0x1170C0u)) {
        auto targetFn = runtime->lookupFunction(0x1170C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B3F0u; }
        if (ctx->pc != 0x10B3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemoteInit_0x1170c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B3F0u; }
        if (ctx->pc != 0x10B3F0u) { return; }
    }
    ctx->pc = 0x10B3F0u;
    // 0x10b3f0: 0x1450000a  bne         $v0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x10B3F0u;
    {
        const bool branch_taken_0x10b3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x10B3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B3F0u;
            // 0x10b3f4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b3f0) {
            ctx->pc = 0x10B41Cu;
            goto label_10b41c;
        }
    }
    ctx->pc = 0x10B3F8u;
    // 0x10b3f8: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10b3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10b3fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10b3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b400: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10b400u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b404: 0x248438b0  addiu       $a0, $a0, 0x38B0
    ctx->pc = 0x10b404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14512));
    // 0x10b408: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10b408u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b40c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10b40cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b410: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b410u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b414: 0x804ace4  j           func_12B390
    ctx->pc = 0x10B414u;
    ctx->pc = 0x10B418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B414u;
            // 0x10b418: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        printf_0x12b390(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10B41Cu;
label_10b41c:
    // 0x10b41c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x10b41cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32768u)));
    // 0x10b420: 0xc045c80  jal         func_117200
    ctx->pc = 0x10B420u;
    SET_GPR_U32(ctx, 31, 0x10B428u);
    ctx->pc = 0x10B424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B420u;
            // 0x10b424: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B428u; }
        if (ctx->pc != 0x10B428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B428u; }
        if (ctx->pc != 0x10B428u) { return; }
    }
    ctx->pc = 0x10B428u;
    // 0x10b428: 0x1450000a  bne         $v0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x10B428u;
    {
        const bool branch_taken_0x10b428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x10B42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B428u;
            // 0x10b42c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b428) {
            ctx->pc = 0x10B454u;
            goto label_10b454;
        }
    }
    ctx->pc = 0x10B430u;
    // 0x10b430: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10b430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10b434: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10b434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b438: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10b438u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b43c: 0x248438d0  addiu       $a0, $a0, 0x38D0
    ctx->pc = 0x10b43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14544));
    // 0x10b440: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10b440u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b444: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10b444u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b448: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b44c: 0x804ace4  j           func_12B390
    ctx->pc = 0x10B44Cu;
    ctx->pc = 0x10B450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B44Cu;
            // 0x10b450: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        printf_0x12b390(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10B454u;
label_10b454:
    // 0x10b454: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x10b454u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10b458: 0x3c130017  lui         $s3, 0x17
    ctx->pc = 0x10b458u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)23 << 16));
    // 0x10b45c: 0x3c120017  lui         $s2, 0x17
    ctx->pc = 0x10b45cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)23 << 16));
    // 0x10b460: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10b460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b464: 0x0  nop
    ctx->pc = 0x10b464u;
    // NOP
label_10b468:
    // 0x10b468: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x10b468u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32784u)));
    // 0x10b46c: 0x36060980  ori         $a2, $s0, 0x980
    ctx->pc = 0x10b46cu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)2432u)));
    // 0x10b470: 0xc045c80  jal         func_117200
    ctx->pc = 0x10B470u;
    SET_GPR_U32(ctx, 31, 0x10B478u);
    ctx->pc = 0x10B474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B470u;
            // 0x10b474: 0x24073fff  addiu       $a3, $zero, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B478u; }
        if (ctx->pc != 0x10B478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B478u; }
        if (ctx->pc != 0x10B478u) { return; }
    }
    ctx->pc = 0x10B478u;
    // 0x10b478: 0x14510005  bne         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B478u;
    {
        const bool branch_taken_0x10b478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x10B47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B478u;
            // 0x10b47c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b478) {
            ctx->pc = 0x10B490u;
            goto label_10b490;
        }
    }
    ctx->pc = 0x10B480u;
    // 0x10b480: 0x266438e8  addiu       $a0, $s3, 0x38E8
    ctx->pc = 0x10b480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 14568));
    // 0x10b484: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10B484u;
    SET_GPR_U32(ctx, 31, 0x10B48Cu);
    ctx->pc = 0x10B488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B484u;
            // 0x10b488: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B48Cu; }
        if (ctx->pc != 0x10B48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B48Cu; }
        if (ctx->pc != 0x10B48Cu) { return; }
    }
    ctx->pc = 0x10B48Cu;
    // 0x10b48c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10b48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10b490:
    // 0x10b490: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x10b490u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32784u)));
    // 0x10b494: 0x36060a80  ori         $a2, $s0, 0xA80
    ctx->pc = 0x10b494u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)2688u)));
    // 0x10b498: 0xc045c80  jal         func_117200
    ctx->pc = 0x10B498u;
    SET_GPR_U32(ctx, 31, 0x10B4A0u);
    ctx->pc = 0x10B49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B498u;
            // 0x10b49c: 0x24073fff  addiu       $a3, $zero, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B4A0u; }
        if (ctx->pc != 0x10B4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B4A0u; }
        if (ctx->pc != 0x10B4A0u) { return; }
    }
    ctx->pc = 0x10B4A0u;
    // 0x10b4a0: 0x54510005  bnel        $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B4A0u;
    {
        const bool branch_taken_0x10b4a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x10b4a0) {
            ctx->pc = 0x10B4A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10B4A0u;
            // 0x10b4a4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10B4B8u;
            goto label_10b4b8;
        }
    }
    ctx->pc = 0x10B4A8u;
    // 0x10b4a8: 0x26443910  addiu       $a0, $s2, 0x3910
    ctx->pc = 0x10b4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 14608));
    // 0x10b4ac: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10B4ACu;
    SET_GPR_U32(ctx, 31, 0x10B4B4u);
    ctx->pc = 0x10B4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B4ACu;
            // 0x10b4b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B4B4u; }
        if (ctx->pc != 0x10B4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B4B4u; }
        if (ctx->pc != 0x10B4B4u) { return; }
    }
    ctx->pc = 0x10B4B4u;
    // 0x10b4b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10b4b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_10b4b8:
    // 0x10b4b8: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x10b4b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x10b4bc: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x10B4BCu;
    {
        const bool branch_taken_0x10b4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B4BCu;
            // 0x10b4c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b4bc) {
            ctx->pc = 0x10B468u;
            goto label_10b468;
        }
    }
    ctx->pc = 0x10B4C4u;
    // 0x10b4c4: 0xc045044  jal         func_114110
    ctx->pc = 0x10B4C4u;
    SET_GPR_U32(ctx, 31, 0x10B4CCu);
    ctx->pc = 0x114110u;
    if (runtime->hasFunction(0x114110u)) {
        auto targetFn = runtime->lookupFunction(0x114110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B4CCu; }
        if (ctx->pc != 0x10B4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitIopHeap_0x114110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B4CCu; }
        if (ctx->pc != 0x10B4CCu) { return; }
    }
    ctx->pc = 0x10B4CCu;
    // 0x10b4cc: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10B4CCu;
    {
        const bool branch_taken_0x10b4cc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10B4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B4CCu;
            // 0x10b4d0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b4cc) {
            ctx->pc = 0x10B4F4u;
            goto label_10b4f4;
        }
    }
    ctx->pc = 0x10B4D4u;
    // 0x10b4d4: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10b4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10b4d8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10b4d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b4dc: 0x24843938  addiu       $a0, $a0, 0x3938
    ctx->pc = 0x10b4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14648));
    // 0x10b4e0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10b4e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b4e4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10b4e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b4e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b4e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b4ec: 0x804ace4  j           func_12B390
    ctx->pc = 0x10B4ECu;
    ctx->pc = 0x10B4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B4ECu;
            // 0x10b4f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        printf_0x12b390(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10B4F4u;
label_10b4f4:
    // 0x10b4f4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10b4f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b4f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10b4f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b4fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10b4fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b500: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b504: 0x3e00008  jr          $ra
    ctx->pc = 0x10B504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B504u;
            // 0x10b508: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10B41Cu: goto label_10b41c;
            case 0x10B454u: goto label_10b454;
            case 0x10B468u: goto label_10b468;
            case 0x10B490u: goto label_10b490;
            case 0x10B4B8u: goto label_10b4b8;
            case 0x10B4F4u: goto label_10b4f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10B50Cu;
}
