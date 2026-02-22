#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _request_end
// Address: 0x10ff40 - 0x10fff4
void _request_end_0x10ff40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10ff40u;

label_10ff40:
    // 0x10ff40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10ff40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_10ff44:
    // 0x10ff44: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x10ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_10ff48:
    // 0x10ff48: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10ff48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_10ff4c:
    // 0x10ff4c: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x10ff4cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)10u)));
label_10ff50:
    // 0x10ff50: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10ff50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_10ff54:
    // 0x10ff54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10ff54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10ff58:
    // 0x10ff58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ff58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_10ff5c:
    // 0x10ff5c: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x10ff5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_10ff60:
    // 0x10ff60: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_10ff64:
    if (ctx->pc == 0x10FF64u) {
        ctx->pc = 0x10FF64u;
            // 0x10ff64: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->pc = 0x10FF68u;
        goto label_10ff68;
    }
    ctx->pc = 0x10FF60u;
    {
        const bool branch_taken_0x10ff60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10FF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10FF60u;
            // 0x10ff64: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ff60) {
            ctx->pc = 0x10FF88u;
            goto label_10ff88;
        }
    }
    ctx->pc = 0x10FF68u;
label_10ff68:
    // 0x10ff68: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_10ff6c:
    if (ctx->pc == 0x10FF6Cu) {
        ctx->pc = 0x10FF6Cu;
            // 0x10ff6c: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x10FF70u;
        goto label_10ff70;
    }
    ctx->pc = 0x10FF68u;
    {
        const bool branch_taken_0x10ff68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ff68) {
            ctx->pc = 0x10FF6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10FF68u;
            // 0x10ff6c: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10FFC0u;
            goto label_10ffc0;
        }
    }
    ctx->pc = 0x10FF70u;
label_10ff70:
    // 0x10ff70: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x10ff70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_10ff74:
    // 0x10ff74: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x10ff74u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)9u)));
label_10ff78:
    // 0x10ff78: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
label_10ff7c:
    if (ctx->pc == 0x10FF7Cu) {
        ctx->pc = 0x10FF7Cu;
            // 0x10ff7c: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->pc = 0x10FF80u;
        goto label_10ff80;
    }
    ctx->pc = 0x10FF78u;
    {
        const bool branch_taken_0x10ff78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10ff78) {
            ctx->pc = 0x10FF7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10FF78u;
            // 0x10ff7c: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10FFA8u;
            goto label_10ffa8;
        }
    }
    ctx->pc = 0x10FF80u;
label_10ff80:
    // 0x10ff80: 0x1000000f  b           . + 4 + (0xF << 2)
label_10ff84:
    if (ctx->pc == 0x10FF84u) {
        ctx->pc = 0x10FF84u;
            // 0x10ff84: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x10FF88u;
        goto label_10ff88;
    }
    ctx->pc = 0x10FF80u;
    {
        const bool branch_taken_0x10ff80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10FF80u;
            // 0x10ff84: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ff80) {
            ctx->pc = 0x10FFC0u;
            goto label_10ffc0;
        }
    }
    ctx->pc = 0x10FF88u;
label_10ff88:
    // 0x10ff88: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x10ff88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_10ff8c:
    // 0x10ff8c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x10ff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10ff90:
    // 0x10ff90: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_10ff94:
    if (ctx->pc == 0x10FF94u) {
        ctx->pc = 0x10FF94u;
            // 0x10ff94: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x10FF98u;
        goto label_10ff98;
    }
    ctx->pc = 0x10FF90u;
    {
        const bool branch_taken_0x10ff90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ff90) {
            ctx->pc = 0x10FF94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10FF90u;
            // 0x10ff94: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10FFC4u;
            goto label_10ffc4;
        }
    }
    ctx->pc = 0x10FF98u;
label_10ff98:
    // 0x10ff98: 0x40f809  jalr        $v0
label_10ff9c:
    if (ctx->pc == 0x10FF9Cu) {
        ctx->pc = 0x10FF9Cu;
            // 0x10ff9c: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x10FFA0u;
        goto label_10ffa0;
    }
    ctx->pc = 0x10FF98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10FFA0u);
        ctx->pc = 0x10FF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10FF98u;
            // 0x10ff9c: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10FF40u: goto label_10ff40;
            case 0x10FF44u: goto label_10ff44;
            case 0x10FF48u: goto label_10ff48;
            case 0x10FF4Cu: goto label_10ff4c;
            case 0x10FF50u: goto label_10ff50;
            case 0x10FF54u: goto label_10ff54;
            case 0x10FF58u: goto label_10ff58;
            case 0x10FF5Cu: goto label_10ff5c;
            case 0x10FF60u: goto label_10ff60;
            case 0x10FF64u: goto label_10ff64;
            case 0x10FF68u: goto label_10ff68;
            case 0x10FF6Cu: goto label_10ff6c;
            case 0x10FF70u: goto label_10ff70;
            case 0x10FF74u: goto label_10ff74;
            case 0x10FF78u: goto label_10ff78;
            case 0x10FF7Cu: goto label_10ff7c;
            case 0x10FF80u: goto label_10ff80;
            case 0x10FF84u: goto label_10ff84;
            case 0x10FF88u: goto label_10ff88;
            case 0x10FF8Cu: goto label_10ff8c;
            case 0x10FF90u: goto label_10ff90;
            case 0x10FF94u: goto label_10ff94;
            case 0x10FF98u: goto label_10ff98;
            case 0x10FF9Cu: goto label_10ff9c;
            case 0x10FFA0u: goto label_10ffa0;
            case 0x10FFA4u: goto label_10ffa4;
            case 0x10FFA8u: goto label_10ffa8;
            case 0x10FFACu: goto label_10ffac;
            case 0x10FFB0u: goto label_10ffb0;
            case 0x10FFB4u: goto label_10ffb4;
            case 0x10FFB8u: goto label_10ffb8;
            case 0x10FFBCu: goto label_10ffbc;
            case 0x10FFC0u: goto label_10ffc0;
            case 0x10FFC4u: goto label_10ffc4;
            case 0x10FFC8u: goto label_10ffc8;
            case 0x10FFCCu: goto label_10ffcc;
            case 0x10FFD0u: goto label_10ffd0;
            case 0x10FFD4u: goto label_10ffd4;
            case 0x10FFD8u: goto label_10ffd8;
            case 0x10FFDCu: goto label_10ffdc;
            case 0x10FFE0u: goto label_10ffe0;
            case 0x10FFE4u: goto label_10ffe4;
            case 0x10FFE8u: goto label_10ffe8;
            case 0x10FFECu: goto label_10ffec;
            case 0x10FFF0u: goto label_10fff0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10FFA0u; }
            if (ctx->pc != 0x10FFA0u) { return; }
        }
    }
    ctx->pc = 0x10FFA0u;
label_10ffa0:
    // 0x10ffa0: 0x10000007  b           . + 4 + (0x7 << 2)
label_10ffa4:
    if (ctx->pc == 0x10FFA4u) {
        ctx->pc = 0x10FFA4u;
            // 0x10ffa4: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x10FFA8u;
        goto label_10ffa8;
    }
    ctx->pc = 0x10FFA0u;
    {
        const bool branch_taken_0x10ffa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10FFA0u;
            // 0x10ffa4: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ffa0) {
            ctx->pc = 0x10FFC0u;
            goto label_10ffc0;
        }
    }
    ctx->pc = 0x10FFA8u;
label_10ffa8:
    // 0x10ffa8: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x10ffa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_10ffac:
    // 0x10ffac: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x10ffacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_10ffb0:
    // 0x10ffb0: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x10ffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_10ffb4:
    // 0x10ffb4: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x10ffb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_10ffb8:
    // 0x10ffb8: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x10ffb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_10ffbc:
    // 0x10ffbc: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x10ffbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_10ffc0:
    // 0x10ffc0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x10ffc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10ffc4:
    // 0x10ffc4: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
label_10ffc8:
    if (ctx->pc == 0x10FFC8u) {
        ctx->pc = 0x10FFCCu;
        goto label_10ffcc;
    }
    ctx->pc = 0x10FFC4u;
    {
        const bool branch_taken_0x10ffc4 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x10ffc4) {
            ctx->pc = 0x10FFD4u;
            goto label_10ffd4;
        }
    }
    ctx->pc = 0x10FFCCu;
label_10ffcc:
    // 0x10ffcc: 0xc0438b4  jal         func_10E2D0
label_10ffd0:
    if (ctx->pc == 0x10FFD0u) {
        ctx->pc = 0x10FFD4u;
        goto label_10ffd4;
    }
    ctx->pc = 0x10FFCCu;
    SET_GPR_U32(ctx, 31, 0x10FFD4u);
    ctx->pc = 0x10E2D0u;
    if (runtime->hasFunction(0x10E2D0u)) {
        auto targetFn = runtime->lookupFunction(0x10E2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FFD4u; }
        if (ctx->pc != 0x10FFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iSignalSema_0x10e2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FFD4u; }
        if (ctx->pc != 0x10FFD4u) { return; }
    }
    ctx->pc = 0x10FFD4u;
label_10ffd4:
    // 0x10ffd4: 0xc043fac  jal         func_10FEB0
label_10ffd8:
    if (ctx->pc == 0x10FFD8u) {
        ctx->pc = 0x10FFD8u;
            // 0x10ffd8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x10FFDCu;
        goto label_10ffdc;
    }
    ctx->pc = 0x10FFD4u;
    SET_GPR_U32(ctx, 31, 0x10FFDCu);
    ctx->pc = 0x10FFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10FFD4u;
            // 0x10ffd8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FEB0u;
    if (runtime->hasFunction(0x10FEB0u)) {
        auto targetFn = runtime->lookupFunction(0x10FEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FFDCu; }
        if (ctx->pc != 0x10FFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceRpcFreePacket_0x10feb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FFDCu; }
        if (ctx->pc != 0x10FFDCu) { return; }
    }
    ctx->pc = 0x10FFDCu;
label_10ffdc:
    // 0x10ffdc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x10ffdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_10ffe0:
    // 0x10ffe0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10ffe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10ffe4:
    // 0x10ffe4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10ffe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10ffe8:
    // 0x10ffe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ffe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10ffec:
    // 0x10ffec: 0x3e00008  jr          $ra
label_10fff0:
    if (ctx->pc == 0x10FFF0u) {
        ctx->pc = 0x10FFF0u;
            // 0x10fff0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x10FFF4u;
        goto label_fallthrough_0x10ffec;
    }
    ctx->pc = 0x10FFECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10FFECu;
            // 0x10fff0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10FF40u: goto label_10ff40;
            case 0x10FF44u: goto label_10ff44;
            case 0x10FF48u: goto label_10ff48;
            case 0x10FF4Cu: goto label_10ff4c;
            case 0x10FF50u: goto label_10ff50;
            case 0x10FF54u: goto label_10ff54;
            case 0x10FF58u: goto label_10ff58;
            case 0x10FF5Cu: goto label_10ff5c;
            case 0x10FF60u: goto label_10ff60;
            case 0x10FF64u: goto label_10ff64;
            case 0x10FF68u: goto label_10ff68;
            case 0x10FF6Cu: goto label_10ff6c;
            case 0x10FF70u: goto label_10ff70;
            case 0x10FF74u: goto label_10ff74;
            case 0x10FF78u: goto label_10ff78;
            case 0x10FF7Cu: goto label_10ff7c;
            case 0x10FF80u: goto label_10ff80;
            case 0x10FF84u: goto label_10ff84;
            case 0x10FF88u: goto label_10ff88;
            case 0x10FF8Cu: goto label_10ff8c;
            case 0x10FF90u: goto label_10ff90;
            case 0x10FF94u: goto label_10ff94;
            case 0x10FF98u: goto label_10ff98;
            case 0x10FF9Cu: goto label_10ff9c;
            case 0x10FFA0u: goto label_10ffa0;
            case 0x10FFA4u: goto label_10ffa4;
            case 0x10FFA8u: goto label_10ffa8;
            case 0x10FFACu: goto label_10ffac;
            case 0x10FFB0u: goto label_10ffb0;
            case 0x10FFB4u: goto label_10ffb4;
            case 0x10FFB8u: goto label_10ffb8;
            case 0x10FFBCu: goto label_10ffbc;
            case 0x10FFC0u: goto label_10ffc0;
            case 0x10FFC4u: goto label_10ffc4;
            case 0x10FFC8u: goto label_10ffc8;
            case 0x10FFCCu: goto label_10ffcc;
            case 0x10FFD0u: goto label_10ffd0;
            case 0x10FFD4u: goto label_10ffd4;
            case 0x10FFD8u: goto label_10ffd8;
            case 0x10FFDCu: goto label_10ffdc;
            case 0x10FFE0u: goto label_10ffe0;
            case 0x10FFE4u: goto label_10ffe4;
            case 0x10FFE8u: goto label_10ffe8;
            case 0x10FFECu: goto label_10ffec;
            case 0x10FFF0u: goto label_10fff0;
            default: break;
        }
        return;
    }
label_fallthrough_0x10ffec:
    ctx->pc = 0x10FFF4u;
}
