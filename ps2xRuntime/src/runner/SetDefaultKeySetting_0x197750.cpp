#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SetDefaultKeySetting
// Address: 0x197750 - 0x1977e0
void SetDefaultKeySetting_0x197750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SetDefaultKeySetting_0x197750");
#endif

    ctx->pc = 0x197750u;

    // 0x197750: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x197750u;
    {
        const bool branch_taken_0x197750 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x197754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197750u;
            // 0x197754: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197750) {
            ctx->pc = 0x197798u;
            goto label_197798;
        }
    }
    ctx->pc = 0x197758u;
    // 0x197758: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x19775c: 0xac231624  sw          $v1, 0x1624($at)
    ctx->pc = 0x19775cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5668), GPR_U32(ctx, 3));
    // 0x197760: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x197760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x197764: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197768: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x197768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x19776c: 0xac241628  sw          $a0, 0x1628($at)
    ctx->pc = 0x19776cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5672), GPR_U32(ctx, 4));
    // 0x197770: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197774: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x197774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x197778: 0xac23162c  sw          $v1, 0x162C($at)
    ctx->pc = 0x197778u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5676), GPR_U32(ctx, 3));
    // 0x19777c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x19777cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197780: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x197780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x197784: 0xac241630  sw          $a0, 0x1630($at)
    ctx->pc = 0x197784u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5680), GPR_U32(ctx, 4));
    // 0x197788: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x19778c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x19778Cu;
    {
        const bool branch_taken_0x19778c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19778Cu;
            // 0x197790: 0xac231634  sw          $v1, 0x1634($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 5684), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19778c) {
            ctx->pc = 0x1977D8u;
            goto label_1977d8;
        }
    }
    ctx->pc = 0x197794u;
    // 0x197794: 0x0  nop
    ctx->pc = 0x197794u;
    // NOP
label_197798:
    // 0x197798: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x197798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x19779c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x19779cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1977a0: 0xac231638  sw          $v1, 0x1638($at)
    ctx->pc = 0x1977a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5688), GPR_U32(ctx, 3));
    // 0x1977a4: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x1977a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1977a8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1977a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1977ac: 0xac23163c  sw          $v1, 0x163C($at)
    ctx->pc = 0x1977acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5692), GPR_U32(ctx, 3));
    // 0x1977b0: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1977b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1977b4: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1977b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1977b8: 0xac231640  sw          $v1, 0x1640($at)
    ctx->pc = 0x1977b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5696), GPR_U32(ctx, 3));
    // 0x1977bc: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x1977bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1977c0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1977c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1977c4: 0xac231644  sw          $v1, 0x1644($at)
    ctx->pc = 0x1977c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5700), GPR_U32(ctx, 3));
    // 0x1977c8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1977c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1977cc: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1977ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1977d0: 0xac231648  sw          $v1, 0x1648($at)
    ctx->pc = 0x1977d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5704), GPR_U32(ctx, 3));
    // 0x1977d4: 0x0  nop
    ctx->pc = 0x1977d4u;
    // NOP
label_1977d8:
    // 0x1977d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1977D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197798u: goto label_197798;
            case 0x1977D8u: goto label_1977d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1977E0u;
}
