#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsInitTask
// Address: 0x142d70 - 0x142e88
void wrsInitTask_0x142d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsInitTask_0x142d70");
#endif

    ctx->pc = 0x142d70u;

    // 0x142d70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x142d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x142d74: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x142d74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x142d78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x142d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x142d7c: 0x24847a30  addiu       $a0, $a0, 0x7A30
    ctx->pc = 0x142d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31280));
    // 0x142d80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x142d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142d84: 0xc04ed90  jal         func_13B640
    ctx->pc = 0x142D84u;
    SET_GPR_U32(ctx, 31, 0x142D8Cu);
    ctx->pc = 0x142D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142D84u;
            // 0x142d88: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B640u;
    if (runtime->hasFunction(0x13B640u)) {
        auto targetFn = runtime->lookupFunction(0x13B640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142D8Cu; }
        if (ctx->pc != 0x142D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x13b640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142D8Cu; }
        if (ctx->pc != 0x142D8Cu) { return; }
    }
    ctx->pc = 0x142D8Cu;
    // 0x142d8c: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x142d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x142d90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x142d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142d94: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x142d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x142d98: 0x24847a30  addiu       $a0, $a0, 0x7A30
    ctx->pc = 0x142d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31280));
    // 0x142d9c: 0xc04bb18  jal         func_12EC60
    ctx->pc = 0x142D9Cu;
    SET_GPR_U32(ctx, 31, 0x142DA4u);
    ctx->pc = 0x142DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142D9Cu;
            // 0x142da0: 0xac227a34  sw          $v0, 0x7A34($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 31284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC60u;
    if (runtime->hasFunction(0x12EC60u)) {
        auto targetFn = runtime->lookupFunction(0x12EC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142DA4u; }
        if (ctx->pc != 0x142DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x12ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142DA4u; }
        if (ctx->pc != 0x142DA4u) { return; }
    }
    ctx->pc = 0x142DA4u;
    // 0x142da4: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x142da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x142da8: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x142da8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x142dac: 0xac227a48  sw          $v0, 0x7A48($at)
    ctx->pc = 0x142dacu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31304), GPR_U32(ctx, 2));
    // 0x142db0: 0x24847a50  addiu       $a0, $a0, 0x7A50
    ctx->pc = 0x142db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31312));
    // 0x142db4: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x142db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x142db8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x142db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142dbc: 0xac207a28  sw          $zero, 0x7A28($at)
    ctx->pc = 0x142dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31272), GPR_U32(ctx, 0));
label_142dc0:
    // 0x142dc0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x142dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x142dc4: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x142dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x142dc8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x142dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x142dcc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x142dccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x142dd0: 0x28a30040  slti        $v1, $a1, 0x40
    ctx->pc = 0x142dd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x142dd4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x142dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x142dd8: 0xa0800044  sb          $zero, 0x44($a0)
    ctx->pc = 0x142dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x142ddc: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x142ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x142de0: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x142de0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x142de4: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x142de4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x142de8: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x142de8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x142dec: 0xa08000c8  sb          $zero, 0xC8($a0)
    ctx->pc = 0x142decu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 200), (uint8_t)GPR_U32(ctx, 0));
    // 0x142df0: 0x24840108  addiu       $a0, $a0, 0x108
    ctx->pc = 0x142df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 264));
    // 0x142df4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x142df4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x142df8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x142df8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x142dfc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x142dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x142e00: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x142e00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x142e04: 0xa0800044  sb          $zero, 0x44($a0)
    ctx->pc = 0x142e04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x142e08: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x142e08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x142e0c: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x142e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x142e10: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x142e10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x142e14: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x142e14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x142e18: 0xa08000c8  sb          $zero, 0xC8($a0)
    ctx->pc = 0x142e18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 200), (uint8_t)GPR_U32(ctx, 0));
    // 0x142e1c: 0x24840108  addiu       $a0, $a0, 0x108
    ctx->pc = 0x142e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 264));
    // 0x142e20: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x142e20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x142e24: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x142e24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x142e28: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x142e28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x142e2c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x142e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x142e30: 0xa0800044  sb          $zero, 0x44($a0)
    ctx->pc = 0x142e30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x142e34: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x142e34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x142e38: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x142e38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x142e3c: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x142e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x142e40: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x142e40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x142e44: 0xa08000c8  sb          $zero, 0xC8($a0)
    ctx->pc = 0x142e44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 200), (uint8_t)GPR_U32(ctx, 0));
    // 0x142e48: 0x24840108  addiu       $a0, $a0, 0x108
    ctx->pc = 0x142e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 264));
    // 0x142e4c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x142e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x142e50: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x142e50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x142e54: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x142e54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x142e58: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x142e58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x142e5c: 0xa0800044  sb          $zero, 0x44($a0)
    ctx->pc = 0x142e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x142e60: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x142e60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x142e64: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x142e64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x142e68: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x142e68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x142e6c: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x142e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x142e70: 0xa08000c8  sb          $zero, 0xC8($a0)
    ctx->pc = 0x142e70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 200), (uint8_t)GPR_U32(ctx, 0));
    // 0x142e74: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x142E74u;
    {
        const bool branch_taken_0x142e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x142E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142E74u;
            // 0x142e78: 0x24840108  addiu       $a0, $a0, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e74) {
            ctx->pc = 0x142DC0u;
            goto label_142dc0;
        }
    }
    ctx->pc = 0x142E7Cu;
    // 0x142e7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x142e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142e80: 0x3e00008  jr          $ra
    ctx->pc = 0x142E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142E80u;
            // 0x142e84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x142DC0u: goto label_142dc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x142E88u;
}
