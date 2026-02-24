#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: runMenu
// Address: 0x102268 - 0x102348
void runMenu_0x102268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("runMenu_0x102268");
#endif

    ctx->pc = 0x102268u;

    // 0x102268: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x102268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10226c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x10226cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x102270: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x102270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x102274: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x102274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x102278: 0x3c110014  lui         $s1, 0x14
    ctx->pc = 0x102278u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)20 << 16));
    // 0x10227c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10227cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x102280: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x102280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x102284: 0x24842c38  addiu       $a0, $a0, 0x2C38
    ctx->pc = 0x102284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11320));
    // 0x102288: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x102288u;
    SET_GPR_U32(ctx, 31, 0x102290u);
    ctx->pc = 0x10228Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102288u;
            // 0x10228c: 0xa622dfc0  sh          $v0, -0x2040($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4294959040), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102290u; }
        if (ctx->pc != 0x102290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102290u; }
        if (ctx->pc != 0x102290u) { return; }
    }
    ctx->pc = 0x102290u;
    // 0x102290: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x102290u;
    {
        const bool branch_taken_0x102290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102290u;
            // 0x102294: 0x8623dfc0  lh          $v1, -0x2040($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294959040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102290) {
            ctx->pc = 0x10232Cu;
            goto label_10232c;
        }
    }
    ctx->pc = 0x102298u;
label_102298:
    // 0x102298: 0xc040260  jal         func_100980
    ctx->pc = 0x102298u;
    SET_GPR_U32(ctx, 31, 0x1022A0u);
    ctx->pc = 0x100980u;
    if (runtime->hasFunction(0x100980u)) {
        auto targetFn = runtime->lookupFunction(0x100980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1022A0u; }
        if (ctx->pc != 0x1022A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menuControl_0x100980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1022A0u; }
        if (ctx->pc != 0x1022A0u) { return; }
    }
    ctx->pc = 0x1022A0u;
    // 0x1022a0: 0x8623dfc0  lh          $v1, -0x2040($s1)
    ctx->pc = 0x1022a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294959040)));
    // 0x1022a4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1022a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1022a8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1022A8u;
    {
        const bool branch_taken_0x1022a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1022ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1022A8u;
            // 0x1022ac: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1022a8) {
            ctx->pc = 0x102320u;
            goto label_102320;
        }
    }
    ctx->pc = 0x1022B0u;
    // 0x1022b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1022b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1022b4: 0x24422c50  addiu       $v0, $v0, 0x2C50
    ctx->pc = 0x1022b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11344));
    // 0x1022b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1022b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1022bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1022bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1022c0: 0x800008  jr          $a0
    ctx->pc = 0x1022C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1022C8u: goto label_1022c8;
            case 0x102308u: goto label_102308;
            case 0x102318u: goto label_102318;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1022C8u;
label_1022c8:
    // 0x1022c8: 0x8f8280b4  lw          $v0, -0x7F4C($gp)
    ctx->pc = 0x1022c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934708)));
    // 0x1022cc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1022CCu;
    {
        const bool branch_taken_0x1022cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1022D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1022CCu;
            // 0x1022d0: 0x3c100014  lui         $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1022cc) {
            ctx->pc = 0x102308u;
            goto label_102308;
        }
    }
    ctx->pc = 0x1022D4u;
    // 0x1022d4: 0x0  nop
    ctx->pc = 0x1022d4u;
    // NOP
label_1022d8:
    // 0x1022d8: 0xc042fd0  jal         func_10BF40
    ctx->pc = 0x1022D8u;
    SET_GPR_U32(ctx, 31, 0x1022E0u);
    ctx->pc = 0x1022DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1022D8u;
            // 0x1022dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BF40u;
    if (runtime->hasFunction(0x10BF40u)) {
        auto targetFn = runtime->lookupFunction(0x10BF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1022E0u; }
        if (ctx->pc != 0x1022E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetVoiceStatus_0x10bf40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1022E0u; }
        if (ctx->pc != 0x1022E0u) { return; }
    }
    ctx->pc = 0x1022E0u;
    // 0x1022e0: 0x2603e120  addiu       $v1, $s0, -0x1EE0
    ctx->pc = 0x1022e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959392));
    // 0x1022e4: 0xaf8280b0  sw          $v0, -0x7F50($gp)
    ctx->pc = 0x1022e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934704), GPR_U32(ctx, 2));
    // 0x1022e8: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x1022e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1022ec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1022ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1022f0: 0xc042ca6  jal         func_10B298
    ctx->pc = 0x1022F0u;
    SET_GPR_U32(ctx, 31, 0x1022F8u);
    ctx->pc = 0x1022F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1022F0u;
            // 0x1022f4: 0x24063fff  addiu       $a2, $zero, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B298u;
    if (runtime->hasFunction(0x10B298u)) {
        auto targetFn = runtime->lookupFunction(0x10B298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1022F8u; }
        if (ctx->pc != 0x1022F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlaySound_0x10b298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1022F8u; }
        if (ctx->pc != 0x1022F8u) { return; }
    }
    ctx->pc = 0x1022F8u;
    // 0x1022f8: 0x8f8280b4  lw          $v0, -0x7F4C($gp)
    ctx->pc = 0x1022f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934708)));
    // 0x1022fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1022fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x102300: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x102300u;
    {
        const bool branch_taken_0x102300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102300u;
            // 0x102304: 0xaf8280b4  sw          $v0, -0x7F4C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934708), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102300) {
            ctx->pc = 0x1022D8u;
            goto label_1022d8;
        }
    }
    ctx->pc = 0x102308u;
label_102308:
    // 0x102308: 0xc0407e0  jal         func_101F80
    ctx->pc = 0x102308u;
    SET_GPR_U32(ctx, 31, 0x102310u);
    ctx->pc = 0x101F80u;
    if (runtime->hasFunction(0x101F80u)) {
        auto targetFn = runtime->lookupFunction(0x101F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102310u; }
        if (ctx->pc != 0x102310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        updateScreen_0x101f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102310u; }
        if (ctx->pc != 0x102310u) { return; }
    }
    ctx->pc = 0x102310u;
    // 0x102310: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x102310u;
    {
        const bool branch_taken_0x102310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x102310) {
            ctx->pc = 0x102320u;
            goto label_102320;
        }
    }
    ctx->pc = 0x102318u;
label_102318:
    // 0x102318: 0xc042c86  jal         func_10B218
    ctx->pc = 0x102318u;
    SET_GPR_U32(ctx, 31, 0x102320u);
    ctx->pc = 0x10B218u;
    if (runtime->hasFunction(0x10B218u)) {
        auto targetFn = runtime->lookupFunction(0x10B218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102320u; }
        if (ctx->pc != 0x102320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopAllSounds_0x10b218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102320u; }
        if (ctx->pc != 0x102320u) { return; }
    }
    ctx->pc = 0x102320u;
label_102320:
    // 0x102320: 0xc0407e0  jal         func_101F80
    ctx->pc = 0x102320u;
    SET_GPR_U32(ctx, 31, 0x102328u);
    ctx->pc = 0x101F80u;
    if (runtime->hasFunction(0x101F80u)) {
        auto targetFn = runtime->lookupFunction(0x101F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102328u; }
        if (ctx->pc != 0x102328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        updateScreen_0x101f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102328u; }
        if (ctx->pc != 0x102328u) { return; }
    }
    ctx->pc = 0x102328u;
    // 0x102328: 0x8623dfc0  lh          $v1, -0x2040($s1)
    ctx->pc = 0x102328u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294959040)));
label_10232c:
    // 0x10232c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10232cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x102330: 0x1462ffd9  bne         $v1, $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x102330u;
    {
        const bool branch_taken_0x102330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x102334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102330u;
            // 0x102334: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102330) {
            ctx->pc = 0x102298u;
            goto label_102298;
        }
    }
    ctx->pc = 0x102338u;
    // 0x102338: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x102338u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10233c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10233cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102340: 0x3e00008  jr          $ra
    ctx->pc = 0x102340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102340u;
            // 0x102344: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102298u: goto label_102298;
            case 0x1022C8u: goto label_1022c8;
            case 0x1022D8u: goto label_1022d8;
            case 0x102308u: goto label_102308;
            case 0x102318u: goto label_102318;
            case 0x102320u: goto label_102320;
            case 0x10232Cu: goto label_10232c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102348u;
}
