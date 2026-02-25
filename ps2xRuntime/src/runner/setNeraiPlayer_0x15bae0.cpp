#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: setNeraiPlayer
// Address: 0x15bae0 - 0x15bc98
void setNeraiPlayer_0x15bae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("setNeraiPlayer_0x15bae0");
#endif

    ctx->pc = 0x15bae0u;

    // 0x15bae0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15bae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15bae4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15bae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15bae8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15bae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15baec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15baecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15baf0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15baf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15baf4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15baf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15baf8: 0x27b10048  addiu       $s1, $sp, 0x48
    ctx->pc = 0x15baf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x15bafc: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x15bafcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_15bb00:
    // 0x15bb00: 0xc0636e8  jal         func_18DBA0
    ctx->pc = 0x15BB00u;
    SET_GPR_U32(ctx, 31, 0x15BB08u);
    ctx->pc = 0x15BB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB00u;
            // 0x15bb04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DBA0u;
    if (runtime->hasFunction(0x18DBA0u)) {
        auto targetFn = runtime->lookupFunction(0x18DBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BB08u; }
        if (ctx->pc != 0x15BB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerAddr_0x18dba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BB08u; }
        if (ctx->pc != 0x15BB08u) { return; }
    }
    ctx->pc = 0x15BB08u;
    // 0x15bb08: 0x8c4400a8  lw          $a0, 0xA8($v0)
    ctx->pc = 0x15bb08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x15bb0c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15bb0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x15bb10: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x15bb10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15bb14: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x15bb14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x15bb18: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x15bb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
    // 0x15bb1c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x15bb1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x15bb20: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x15bb20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x15bb24: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x15BB24u;
    {
        const bool branch_taken_0x15bb24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB24u;
            // 0x15bb28: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb24) {
            ctx->pc = 0x15BB00u;
            goto label_15bb00;
        }
    }
    ctx->pc = 0x15BB2Cu;
    // 0x15bb2c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15bb2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15bb30: 0x8c233530  lw          $v1, 0x3530($at)
    ctx->pc = 0x15bb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13616)));
    // 0x15bb34: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x15BB34u;
    {
        const bool branch_taken_0x15bb34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB34u;
            // 0x15bb38: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb34) {
            ctx->pc = 0x15BBE0u;
            goto label_15bbe0;
        }
    }
    ctx->pc = 0x15BB3Cu;
    // 0x15bb3c: 0x8c223534  lw          $v0, 0x3534($at)
    ctx->pc = 0x15bb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13620)));
    // 0x15bb40: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x15BB40u;
    {
        const bool branch_taken_0x15bb40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bb40) {
            ctx->pc = 0x15BBE0u;
            goto label_15bbe0;
        }
    }
    ctx->pc = 0x15BB48u;
    // 0x15bb48: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x15bb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x15bb4c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15bb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15bb50: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x15bb50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15bb54: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x15BB54u;
    {
        const bool branch_taken_0x15bb54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB54u;
            // 0x15bb58: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb54) {
            ctx->pc = 0x15BB68u;
            goto label_15bb68;
        }
    }
    ctx->pc = 0x15BB5Cu;
    // 0x15bb5c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x15BB5Cu;
    {
        const bool branch_taken_0x15bb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB5Cu;
            // 0x15bb60: 0xac203524  sw          $zero, 0x3524($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13604), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb5c) {
            ctx->pc = 0x15BBD0u;
            goto label_15bbd0;
        }
    }
    ctx->pc = 0x15BB64u;
    // 0x15bb64: 0x0  nop
    ctx->pc = 0x15bb64u;
    // NOP
label_15bb68:
    // 0x15bb68: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x15bb68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15bb6c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x15BB6Cu;
    {
        const bool branch_taken_0x15bb6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bb6c) {
            ctx->pc = 0x15BB88u;
            goto label_15bb88;
        }
    }
    ctx->pc = 0x15BB74u;
    // 0x15bb74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15bb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15bb78: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15bb78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15bb7c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x15BB7Cu;
    {
        const bool branch_taken_0x15bb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB7Cu;
            // 0x15bb80: 0xac223524  sw          $v0, 0x3524($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13604), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb7c) {
            ctx->pc = 0x15BBD0u;
            goto label_15bbd0;
        }
    }
    ctx->pc = 0x15BB84u;
    // 0x15bb84: 0x0  nop
    ctx->pc = 0x15bb84u;
    // NOP
label_15bb88:
    // 0x15bb88: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x15bb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x15bb8c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15bb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15bb90: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x15bb90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15bb94: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x15BB94u;
    {
        const bool branch_taken_0x15bb94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB94u;
            // 0x15bb98: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb94) {
            ctx->pc = 0x15BBA8u;
            goto label_15bba8;
        }
    }
    ctx->pc = 0x15BB9Cu;
    // 0x15bb9c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15BB9Cu;
    {
        const bool branch_taken_0x15bb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB9Cu;
            // 0x15bba0: 0xac203524  sw          $zero, 0x3524($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13604), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb9c) {
            ctx->pc = 0x15BBD0u;
            goto label_15bbd0;
        }
    }
    ctx->pc = 0x15BBA4u;
    // 0x15bba4: 0x0  nop
    ctx->pc = 0x15bba4u;
    // NOP
label_15bba8:
    // 0x15bba8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x15bba8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15bbac: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x15BBACu;
    {
        const bool branch_taken_0x15bbac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bbac) {
            ctx->pc = 0x15BBC8u;
            goto label_15bbc8;
        }
    }
    ctx->pc = 0x15BBB4u;
    // 0x15bbb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15bbb8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15bbb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15bbbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15BBBCu;
    {
        const bool branch_taken_0x15bbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BBC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BBBCu;
            // 0x15bbc0: 0xac223524  sw          $v0, 0x3524($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13604), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bbbc) {
            ctx->pc = 0x15BBD0u;
            goto label_15bbd0;
        }
    }
    ctx->pc = 0x15BBC4u;
    // 0x15bbc4: 0x0  nop
    ctx->pc = 0x15bbc4u;
    // NOP
label_15bbc8:
    // 0x15bbc8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15bbc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15bbcc: 0xac203524  sw          $zero, 0x3524($at)
    ctx->pc = 0x15bbccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13604), GPR_U32(ctx, 0));
label_15bbd0:
    // 0x15bbd0: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x15bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x15bbd4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15bbd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15bbd8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x15BBD8u;
    {
        const bool branch_taken_0x15bbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BBD8u;
            // 0x15bbdc: 0xac223520  sw          $v0, 0x3520($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bbd8) {
            ctx->pc = 0x15BC28u;
            goto label_15bc28;
        }
    }
    ctx->pc = 0x15BBE0u;
label_15bbe0:
    // 0x15bbe0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x15BBE0u;
    {
        const bool branch_taken_0x15bbe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BBE0u;
            // 0x15bbe4: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bbe0) {
            ctx->pc = 0x15BC00u;
            goto label_15bc00;
        }
    }
    ctx->pc = 0x15BBE8u;
    // 0x15bbe8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15bbec: 0xac203524  sw          $zero, 0x3524($at)
    ctx->pc = 0x15bbecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13604), GPR_U32(ctx, 0));
    // 0x15bbf0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15bbf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15bbf4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15BBF4u;
    {
        const bool branch_taken_0x15bbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BBF4u;
            // 0x15bbf8: 0xac223520  sw          $v0, 0x3520($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bbf4) {
            ctx->pc = 0x15BC28u;
            goto label_15bc28;
        }
    }
    ctx->pc = 0x15BBFCu;
    // 0x15bbfc: 0x0  nop
    ctx->pc = 0x15bbfcu;
    // NOP
label_15bc00:
    // 0x15bc00: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15bc00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15bc04: 0x8c223534  lw          $v0, 0x3534($at)
    ctx->pc = 0x15bc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13620)));
    // 0x15bc08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15BC08u;
    {
        const bool branch_taken_0x15bc08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BC08u;
            // 0x15bc0c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bc08) {
            ctx->pc = 0x15BC28u;
            goto label_15bc28;
        }
    }
    ctx->pc = 0x15BC10u;
    // 0x15bc10: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15bc10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15bc14: 0xac233524  sw          $v1, 0x3524($at)
    ctx->pc = 0x15bc14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13604), GPR_U32(ctx, 3));
    // 0x15bc18: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15bc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15bc1c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15bc1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15bc20: 0xac223520  sw          $v0, 0x3520($at)
    ctx->pc = 0x15bc20u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13600), GPR_U32(ctx, 2));
    // 0x15bc24: 0x0  nop
    ctx->pc = 0x15bc24u;
    // NOP
label_15bc28:
    // 0x15bc28: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15bc28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15bc2c: 0xc0636e8  jal         func_18DBA0
    ctx->pc = 0x15BC2Cu;
    SET_GPR_U32(ctx, 31, 0x15BC34u);
    ctx->pc = 0x15BC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BC2Cu;
            // 0x15bc30: 0x8c243524  lw          $a0, 0x3524($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13604)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DBA0u;
    if (runtime->hasFunction(0x18DBA0u)) {
        auto targetFn = runtime->lookupFunction(0x18DBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BC34u; }
        if (ctx->pc != 0x15BC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerAddr_0x18dba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BC34u; }
        if (ctx->pc != 0x15BC34u) { return; }
    }
    ctx->pc = 0x15BC34u;
    // 0x15bc34: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x15bc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x15bc38: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15bc38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15bc3c: 0xac233528  sw          $v1, 0x3528($at)
    ctx->pc = 0x15bc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13608), GPR_U32(ctx, 3));
    // 0x15bc40: 0x8c42009c  lw          $v0, 0x9C($v0)
    ctx->pc = 0x15bc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x15bc44: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15bc44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15bc48: 0xc065d00  jal         func_197400
    ctx->pc = 0x15BC48u;
    SET_GPR_U32(ctx, 31, 0x15BC50u);
    ctx->pc = 0x15BC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BC48u;
            // 0x15bc4c: 0xac22352c  sw          $v0, 0x352C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BC50u; }
        if (ctx->pc != 0x15BC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BC50u; }
        if (ctx->pc != 0x15BC50u) { return; }
    }
    ctx->pc = 0x15BC50u;
    // 0x15bc50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15bc50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bc54: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x15bc54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x15bc58: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x15bc58u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x15bc5c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15bc5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15bc60: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x15bc60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x15bc64: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x15bc64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x15bc68: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x15bc68u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15bc6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15bc6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bc70: 0x0  nop
    ctx->pc = 0x15bc70u;
    // NOP
    // 0x15bc74: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x15bc74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x15bc78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15bc78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15bc7c: 0xe420351c  swc1        $f0, 0x351C($at)
    ctx->pc = 0x15bc7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 13596), bits); }
    // 0x15bc80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15bc80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15bc84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15bc84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15bc88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15bc88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bc8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15bc8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bc90: 0x3e00008  jr          $ra
    ctx->pc = 0x15BC90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BC90u;
            // 0x15bc94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15BB00u: goto label_15bb00;
            case 0x15BB68u: goto label_15bb68;
            case 0x15BB88u: goto label_15bb88;
            case 0x15BBA8u: goto label_15bba8;
            case 0x15BBC8u: goto label_15bbc8;
            case 0x15BBD0u: goto label_15bbd0;
            case 0x15BBE0u: goto label_15bbe0;
            case 0x15BC00u: goto label_15bc00;
            case 0x15BC28u: goto label_15bc28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15BC98u;
}
