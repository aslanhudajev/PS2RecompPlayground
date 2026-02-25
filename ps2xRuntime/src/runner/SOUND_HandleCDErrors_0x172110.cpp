#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SOUND_HandleCDErrors
// Address: 0x172110 - 0x17223c
void SOUND_HandleCDErrors_0x172110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SOUND_HandleCDErrors_0x172110");
#endif

    ctx->pc = 0x172110u;

    // 0x172110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x172114: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x172114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x172118: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x172118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17211c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17211cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x172120: 0x90230a28  lbu         $v1, 0xA28($at)
    ctx->pc = 0x172120u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 2600)));
    // 0x172124: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x172124u;
    {
        const bool branch_taken_0x172124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x172128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172124u;
            // 0x172128: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172124) {
            ctx->pc = 0x1721B0u;
            goto label_1721b0;
        }
    }
    ctx->pc = 0x17212Cu;
    // 0x17212c: 0x8c220ac0  lw          $v0, 0xAC0($at)
    ctx->pc = 0x17212cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2752)));
    // 0x172130: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x172130u;
    {
        const bool branch_taken_0x172130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172130u;
            // 0x172134: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172130) {
            ctx->pc = 0x172140u;
            goto label_172140;
        }
    }
    ctx->pc = 0x172138u;
    // 0x172138: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x172138u;
    SET_GPR_U32(ctx, 31, 0x172140u);
    ctx->pc = 0x17213Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172138u;
            // 0x17213c: 0x24841360  addiu       $a0, $a0, 0x1360 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172140u; }
        if (ctx->pc != 0x172140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172140u; }
        if (ctx->pc != 0x172140u) { return; }
    }
    ctx->pc = 0x172140u;
label_172140:
    // 0x172140: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x172140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x172144: 0x90220a28  lbu         $v0, 0xA28($at)
    ctx->pc = 0x172144u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 2600)));
    // 0x172148: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x172148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17214c: 0xc05c890  jal         func_172240
    ctx->pc = 0x17214Cu;
    SET_GPR_U32(ctx, 31, 0x172154u);
    ctx->pc = 0x172150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17214Cu;
            // 0x172150: 0xac220ac0  sw          $v0, 0xAC0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 2752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172240u;
    if (runtime->hasFunction(0x172240u)) {
        auto targetFn = runtime->lookupFunction(0x172240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172154u; }
        if (ctx->pc != 0x172154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_CheckCDError_0x172240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172154u; }
        if (ctx->pc != 0x172154u) { return; }
    }
    ctx->pc = 0x172154u;
    // 0x172154: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x172154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x172158: 0xc05cd28  jal         func_1734A0
    ctx->pc = 0x172158u;
    SET_GPR_U32(ctx, 31, 0x172160u);
    ctx->pc = 0x17215Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172158u;
            // 0x17215c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1734A0u;
    if (runtime->hasFunction(0x1734A0u)) {
        auto targetFn = runtime->lookupFunction(0x1734A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172160u; }
        if (ctx->pc != 0x172160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_GetStatus_0x1734a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172160u; }
        if (ctx->pc != 0x172160u) { return; }
    }
    ctx->pc = 0x172160u;
label_172160:
    // 0x172160: 0xc05caac  jal         func_172AB0
    ctx->pc = 0x172160u;
    SET_GPR_U32(ctx, 31, 0x172168u);
    ctx->pc = 0x172164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172160u;
            // 0x172164: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172AB0u;
    if (runtime->hasFunction(0x172AB0u)) {
        auto targetFn = runtime->lookupFunction(0x172AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172168u; }
        if (ctx->pc != 0x172168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushIOPCommand_0x172ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172168u; }
        if (ctx->pc != 0x172168u) { return; }
    }
    ctx->pc = 0x172168u;
    // 0x172168: 0x0  nop
    ctx->pc = 0x172168u;
    // NOP
    // 0x17216c: 0x0  nop
    ctx->pc = 0x17216cu;
    // NOP
    // 0x172170: 0x0  nop
    ctx->pc = 0x172170u;
    // NOP
    // 0x172174: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x172174u;
    {
        const bool branch_taken_0x172174 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x172174) {
            ctx->pc = 0x172160u;
            goto label_172160;
        }
    }
    ctx->pc = 0x17217Cu;
    // 0x17217c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17217cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x172180: 0x90220a38  lbu         $v0, 0xA38($at)
    ctx->pc = 0x172180u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 2616)));
    // 0x172184: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x172184u;
    {
        const bool branch_taken_0x172184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172184u;
            // 0x172188: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172184) {
            ctx->pc = 0x1721B8u;
            goto label_1721b8;
        }
    }
    ctx->pc = 0x17218Cu;
    // 0x17218c: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x17218Cu;
    SET_GPR_U32(ctx, 31, 0x172194u);
    ctx->pc = 0x172190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17218Cu;
            // 0x172190: 0x248413b0  addiu       $a0, $a0, 0x13B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172194u; }
        if (ctx->pc != 0x172194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172194u; }
        if (ctx->pc != 0x172194u) { return; }
    }
    ctx->pc = 0x172194u;
    // 0x172194: 0xc05c89c  jal         func_172270
    ctx->pc = 0x172194u;
    SET_GPR_U32(ctx, 31, 0x17219Cu);
    ctx->pc = 0x172270u;
    if (runtime->hasFunction(0x172270u)) {
        auto targetFn = runtime->lookupFunction(0x172270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17219Cu; }
        if (ctx->pc != 0x17219Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_RestartFromCDError_0x172270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17219Cu; }
        if (ctx->pc != 0x17219Cu) { return; }
    }
    ctx->pc = 0x17219Cu;
    // 0x17219c: 0xc05caac  jal         func_172AB0
    ctx->pc = 0x17219Cu;
    SET_GPR_U32(ctx, 31, 0x1721A4u);
    ctx->pc = 0x1721A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17219Cu;
            // 0x1721a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172AB0u;
    if (runtime->hasFunction(0x172AB0u)) {
        auto targetFn = runtime->lookupFunction(0x172AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1721A4u; }
        if (ctx->pc != 0x1721A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushIOPCommand_0x172ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1721A4u; }
        if (ctx->pc != 0x1721A4u) { return; }
    }
    ctx->pc = 0x1721A4u;
    // 0x1721a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1721A4u;
    {
        const bool branch_taken_0x1721a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1721a4) {
            ctx->pc = 0x1721B8u;
            goto label_1721b8;
        }
    }
    ctx->pc = 0x1721ACu;
    // 0x1721ac: 0x0  nop
    ctx->pc = 0x1721acu;
    // NOP
label_1721b0:
    // 0x1721b0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1721b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1721b4: 0xac200ac0  sw          $zero, 0xAC0($at)
    ctx->pc = 0x1721b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2752), GPR_U32(ctx, 0));
label_1721b8:
    // 0x1721b8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1721b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1721bc: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x1721bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2744)));
    // 0x1721c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1721c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1721c4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1721C4u;
    {
        const bool branch_taken_0x1721c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1721C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1721C4u;
            // 0x1721c8: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1721c4) {
            ctx->pc = 0x1721F0u;
            goto label_1721f0;
        }
    }
    ctx->pc = 0x1721CCu;
    // 0x1721cc: 0x90220a30  lbu         $v0, 0xA30($at)
    ctx->pc = 0x1721ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 2608)));
    // 0x1721d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1721D0u;
    {
        const bool branch_taken_0x1721d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1721D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1721D0u;
            // 0x1721d4: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1721d0) {
            ctx->pc = 0x1721F0u;
            goto label_1721f0;
        }
    }
    ctx->pc = 0x1721D8u;
    // 0x1721d8: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1721D8u;
    SET_GPR_U32(ctx, 31, 0x1721E0u);
    ctx->pc = 0x1721DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1721D8u;
            // 0x1721dc: 0x248413f0  addiu       $a0, $a0, 0x13F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1721E0u; }
        if (ctx->pc != 0x1721E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1721E0u; }
        if (ctx->pc != 0x1721E0u) { return; }
    }
    ctx->pc = 0x1721E0u;
    // 0x1721e0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1721e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1721e4: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1721E4u;
    SET_GPR_U32(ctx, 31, 0x1721ECu);
    ctx->pc = 0x1721E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1721E4u;
            // 0x1721e8: 0x24841420  addiu       $a0, $a0, 0x1420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1721ECu; }
        if (ctx->pc != 0x1721ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1721ECu; }
        if (ctx->pc != 0x1721ECu) { return; }
    }
    ctx->pc = 0x1721ECu;
    // 0x1721ec: 0x0  nop
    ctx->pc = 0x1721ecu;
    // NOP
label_1721f0:
    // 0x1721f0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1721f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1721f4: 0x90240a30  lbu         $a0, 0xA30($at)
    ctx->pc = 0x1721f4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 2608)));
    // 0x1721f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1721f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1721fc: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1721fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x172200: 0x90230a28  lbu         $v1, 0xA28($at)
    ctx->pc = 0x172200u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 2600)));
    // 0x172204: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x172204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x172208: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x172208u;
    {
        const bool branch_taken_0x172208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17220Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172208u;
            // 0x17220c: 0xac240ab8  sw          $a0, 0xAB8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 2744), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172208) {
            ctx->pc = 0x172218u;
            goto label_172218;
        }
    }
    ctx->pc = 0x172210u;
    // 0x172210: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x172210u;
    {
        const bool branch_taken_0x172210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172210u;
            // 0x172214: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172210) {
            ctx->pc = 0x172230u;
            goto label_172230;
        }
    }
    ctx->pc = 0x172218u;
label_172218:
    // 0x172218: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x172218u;
    {
        const bool branch_taken_0x172218 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x172218) {
            ctx->pc = 0x172228u;
            goto label_172228;
        }
    }
    ctx->pc = 0x172220u;
    // 0x172220: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x172220u;
    {
        const bool branch_taken_0x172220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172220u;
            // 0x172224: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172220) {
            ctx->pc = 0x17222Cu;
            goto label_17222c;
        }
    }
    ctx->pc = 0x172228u;
label_172228:
    // 0x172228: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x172228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17222c:
    // 0x17222c: 0x0  nop
    ctx->pc = 0x17222cu;
    // NOP
label_172230:
    // 0x172230: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172234: 0x3e00008  jr          $ra
    ctx->pc = 0x172234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172234u;
            // 0x172238: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172140u: goto label_172140;
            case 0x172160u: goto label_172160;
            case 0x1721B0u: goto label_1721b0;
            case 0x1721B8u: goto label_1721b8;
            case 0x1721F0u: goto label_1721f0;
            case 0x172218u: goto label_172218;
            case 0x172228u: goto label_172228;
            case 0x17222Cu: goto label_17222c;
            case 0x172230u: goto label_172230;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17223Cu;
}
