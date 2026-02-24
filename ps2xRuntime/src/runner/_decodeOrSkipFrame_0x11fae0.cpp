#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _decodeOrSkipFrame
// Address: 0x11fae0 - 0x11fc04
void _decodeOrSkipFrame_0x11fae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_decodeOrSkipFrame_0x11fae0");
#endif

    ctx->pc = 0x11fae0u;

    // 0x11fae0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11fae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11fae4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11fae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11fae8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x11fae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11faec: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11faecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11faf0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x11faf0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11faf4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x11faf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x11faf8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11faf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fafc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11fafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11fb00: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11fb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11fb04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11fb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11fb08: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FB08u;
    {
        const bool branch_taken_0x11fb08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x11FB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FB08u;
            // 0x11fb0c: 0x8e300040  lw          $s0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb08) {
            ctx->pc = 0x11FB1Cu;
            goto label_11fb1c;
        }
    }
    ctx->pc = 0x11FB10u;
    // 0x11fb10: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x11fb10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x11fb14: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11FB14u;
    {
        const bool branch_taken_0x11fb14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FB14u;
            // 0x11fb18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb14) {
            ctx->pc = 0x11FB64u;
            goto label_11fb64;
        }
    }
    ctx->pc = 0x11FB1Cu;
label_11fb1c:
    // 0x11fb1c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x11fb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11fb20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11FB20u;
    {
        const bool branch_taken_0x11fb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FB20u;
            // 0x11fb24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb20) {
            ctx->pc = 0x11FB30u;
            goto label_11fb30;
        }
    }
    ctx->pc = 0x11FB28u;
    // 0x11fb28: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x11fb28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x11fb2c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x11fb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_11fb30:
    // 0x11fb30: 0xc04931c  jal         func_124C70
    ctx->pc = 0x11FB30u;
    SET_GPR_U32(ctx, 31, 0x11FB38u);
    ctx->pc = 0x11FB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FB30u;
            // 0x11fb34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x124C70u;
    if (runtime->hasFunction(0x124C70u)) {
        auto targetFn = runtime->lookupFunction(0x124C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FB38u; }
        if (ctx->pc != 0x11FB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _updateRefImage_0x124c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FB38u; }
        if (ctx->pc != 0x11FB38u) { return; }
    }
    ctx->pc = 0x11FB38u;
    // 0x11fb38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11FB38u;
    {
        const bool branch_taken_0x11fb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FB38u;
            // 0x11fb3c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb38) {
            ctx->pc = 0x11FB58u;
            goto label_11fb58;
        }
    }
    ctx->pc = 0x11FB40u;
    // 0x11fb40: 0x3c130017  lui         $s3, 0x17
    ctx->pc = 0x11fb40u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)23 << 16));
    // 0x11fb44: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x11fb44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11fb48: 0xc0492b6  jal         func_124AD8
    ctx->pc = 0x11FB48u;
    SET_GPR_U32(ctx, 31, 0x11FB50u);
    ctx->pc = 0x11FB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FB48u;
            // 0x11fb4c: 0x8e641904  lw          $a0, 0x1904($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6404)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x124AD8u;
    if (runtime->hasFunction(0x124AD8u)) {
        auto targetFn = runtime->lookupFunction(0x124AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FB50u; }
        if (ctx->pc != 0x11FB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _decPicture_0x124ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FB50u; }
        if (ctx->pc != 0x11FB50u) { return; }
    }
    ctx->pc = 0x11FB50u;
    // 0x11fb50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11FB50u;
    {
        const bool branch_taken_0x11fb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FB50u;
            // 0x11fb54: 0x2182b  sltu        $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb50) {
            ctx->pc = 0x11FB5Cu;
            goto label_11fb5c;
        }
    }
    ctx->pc = 0x11FB58u;
label_11fb58:
    // 0x11fb58: 0x3c130017  lui         $s3, 0x17
    ctx->pc = 0x11fb58u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)23 << 16));
label_11fb5c:
    // 0x11fb5c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11FB5Cu;
    {
        const bool branch_taken_0x11fb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FB5Cu;
            // 0x11fb60: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb5c) {
            ctx->pc = 0x11FB7Cu;
            goto label_11fb7c;
        }
    }
    ctx->pc = 0x11FB64u;
label_11fb64:
    // 0x11fb64: 0xc04931c  jal         func_124C70
    ctx->pc = 0x11FB64u;
    SET_GPR_U32(ctx, 31, 0x11FB6Cu);
    ctx->pc = 0x11FB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FB64u;
            // 0x11fb68: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x124C70u;
    if (runtime->hasFunction(0x124C70u)) {
        auto targetFn = runtime->lookupFunction(0x124C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FB6Cu; }
        if (ctx->pc != 0x11FB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _updateRefImage_0x124c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FB6Cu; }
        if (ctx->pc != 0x11FB6Cu) { return; }
    }
    ctx->pc = 0x11FB6Cu;
    // 0x11fb6c: 0x3c130017  lui         $s3, 0x17
    ctx->pc = 0x11fb6cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)23 << 16));
    // 0x11fb70: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11fb70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fb74: 0xc047df4  jal         func_11F7D0
    ctx->pc = 0x11FB74u;
    SET_GPR_U32(ctx, 31, 0x11FB7Cu);
    ctx->pc = 0x11FB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FB74u;
            // 0x11fb78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F7D0u;
    if (runtime->hasFunction(0x11F7D0u)) {
        auto targetFn = runtime->lookupFunction(0x11F7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FB7Cu; }
        if (ctx->pc != 0x11FB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x11f7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FB7Cu; }
        if (ctx->pc != 0x11FB7Cu) { return; }
    }
    ctx->pc = 0x11FB7Cu;
label_11fb7c:
    // 0x11fb7c: 0x8e641904  lw          $a0, 0x1904($s3)
    ctx->pc = 0x11fb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6404)));
    // 0x11fb80: 0xc0492ee  jal         func_124BB8
    ctx->pc = 0x11FB80u;
    SET_GPR_U32(ctx, 31, 0x11FB88u);
    ctx->pc = 0x11FB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FB80u;
            // 0x11fb84: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x124BB8u;
    if (runtime->hasFunction(0x124BB8u)) {
        auto targetFn = runtime->lookupFunction(0x124BB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FB88u; }
        if (ctx->pc != 0x11FB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _outputFrame_0x124bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FB88u; }
        if (ctx->pc != 0x11FB88u) { return; }
    }
    ctx->pc = 0x11FB88u;
    // 0x11fb88: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x11fb88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x11fb8c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x11fb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11fb90: 0x8c4319ac  lw          $v1, 0x19AC($v0)
    ctx->pc = 0x11fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6572)));
    // 0x11fb94: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11FB94u;
    {
        const bool branch_taken_0x11fb94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x11FB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FB94u;
            // 0x11fb98: 0x3c030017  lui         $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb94) {
            ctx->pc = 0x11FBB4u;
            goto label_11fbb4;
        }
    }
    ctx->pc = 0x11FB9Cu;
    // 0x11fb9c: 0x16800006  bnez        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x11FB9Cu;
    {
        const bool branch_taken_0x11fb9c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FB9Cu;
            // 0x11fba0: 0x8e641904  lw          $a0, 0x1904($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb9c) {
            ctx->pc = 0x11FBB8u;
            goto label_11fbb8;
        }
    }
    ctx->pc = 0x11FBA4u;
    // 0x11fba4: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x11fba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x11fba8: 0x8c62191c  lw          $v0, 0x191C($v1)
    ctx->pc = 0x11fba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6428)));
    // 0x11fbac: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x11fbacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x11fbb0: 0xac62191c  sw          $v0, 0x191C($v1)
    ctx->pc = 0x11fbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6428), GPR_U32(ctx, 2));
label_11fbb4:
    // 0x11fbb4: 0x8e641904  lw          $a0, 0x1904($s3)
    ctx->pc = 0x11fbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6404)));
label_11fbb8:
    // 0x11fbb8: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x11fbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x11fbbc: 0x8c63191c  lw          $v1, 0x191C($v1)
    ctx->pc = 0x11fbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6428)));
    // 0x11fbc0: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x11fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11fbc4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11FBC4u;
    {
        const bool branch_taken_0x11fbc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FBC4u;
            // 0x11fbc8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fbc4) {
            ctx->pc = 0x11FBE0u;
            goto label_11fbe0;
        }
    }
    ctx->pc = 0x11FBCCu;
    // 0x11fbcc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x11fbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11fbd0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x11fbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x11fbd4: 0xae631904  sw          $v1, 0x1904($s3)
    ctx->pc = 0x11fbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6404), GPR_U32(ctx, 3));
    // 0x11fbd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11fbdc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x11fbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_11fbe0:
    // 0x11fbe0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x11fbe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fbe4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x11fbe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11fbe8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x11fbe8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11fbec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11fbecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11fbf0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11fbf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11fbf4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11fbf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11fbf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11fbf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11fbfc: 0x3e00008  jr          $ra
    ctx->pc = 0x11FBFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FBFCu;
            // 0x11fc00: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11FB1Cu: goto label_11fb1c;
            case 0x11FB30u: goto label_11fb30;
            case 0x11FB58u: goto label_11fb58;
            case 0x11FB5Cu: goto label_11fb5c;
            case 0x11FB64u: goto label_11fb64;
            case 0x11FB7Cu: goto label_11fb7c;
            case 0x11FBB4u: goto label_11fbb4;
            case 0x11FBB8u: goto label_11fbb8;
            case 0x11FBE0u: goto label_11fbe0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11FC04u;
}
