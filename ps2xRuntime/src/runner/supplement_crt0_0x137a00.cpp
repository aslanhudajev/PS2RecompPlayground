#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: supplement_crt0
// Address: 0x137a00 - 0x137a48
void supplement_crt0_0x137a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("supplement_crt0_0x137a00");
#endif

    ctx->pc = 0x137a00u;

    // 0x137a00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x137a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x137a04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x137a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137a08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x137a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x137a0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x137a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137a10: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x137a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x137a14: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x137a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x137a18: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x137a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x137a1c: 0xc04bb18  jal         func_12EC60
    ctx->pc = 0x137A1Cu;
    SET_GPR_U32(ctx, 31, 0x137A24u);
    ctx->pc = 0x137A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137A1Cu;
            // 0x137a20: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC60u;
    if (runtime->hasFunction(0x12EC60u)) {
        auto targetFn = runtime->lookupFunction(0x12EC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137A24u; }
        if (ctx->pc != 0x137A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x12ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137A24u; }
        if (ctx->pc != 0x137A24u) { return; }
    }
    ctx->pc = 0x137A24u;
    // 0x137a24: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x137a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x137a28: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x137a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x137a2c: 0xc04bb18  jal         func_12EC60
    ctx->pc = 0x137A2Cu;
    SET_GPR_U32(ctx, 31, 0x137A34u);
    ctx->pc = 0x137A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137A2Cu;
            // 0x137a30: 0xac620b30  sw          $v0, 0xB30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 2864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC60u;
    if (runtime->hasFunction(0x12EC60u)) {
        auto targetFn = runtime->lookupFunction(0x12EC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137A34u; }
        if (ctx->pc != 0x137A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x12ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137A34u; }
        if (ctx->pc != 0x137A34u) { return; }
    }
    ctx->pc = 0x137A34u;
    // 0x137a34: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x137a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x137a38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x137a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137a3c: 0xac620b34  sw          $v0, 0xB34($v1)
    ctx->pc = 0x137a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2868), GPR_U32(ctx, 2));
    // 0x137a40: 0x3e00008  jr          $ra
    ctx->pc = 0x137A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137A40u;
            // 0x137a44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x137A48u;
}
