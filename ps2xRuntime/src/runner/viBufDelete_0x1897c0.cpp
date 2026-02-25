#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: viBufDelete
// Address: 0x1897c0 - 0x18980c
void viBufDelete_0x1897c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("viBufDelete_0x1897c0");
#endif

    ctx->pc = 0x1897c0u;

    // 0x1897c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1897c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1897c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1897c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1897c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1897c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1897cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1897ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1897d0: 0xc062880  jal         func_18A200
    ctx->pc = 0x1897D0u;
    SET_GPR_U32(ctx, 31, 0x1897D8u);
    ctx->pc = 0x1897D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1897D0u;
            // 0x1897d4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A200u;
    if (runtime->hasFunction(0x18A200u)) {
        auto targetFn = runtime->lookupFunction(0x18A200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1897D8u; }
        if (ctx->pc != 0x1897D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setD4_CHCR_0x18a200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1897D8u; }
        if (ctx->pc != 0x1897D8u) { return; }
    }
    ctx->pc = 0x1897D8u;
    // 0x1897d8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1897d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1897dc: 0xac20b420  sw          $zero, -0x4BE0($at)
    ctx->pc = 0x1897dcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294947872), GPR_U32(ctx, 0)); // MMIO: 0x1000b420
    // 0x1897e0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1897e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1897e4: 0xac20b410  sw          $zero, -0x4BF0($at)
    ctx->pc = 0x1897e4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294947856), GPR_U32(ctx, 0)); // MMIO: 0x1000b410
    // 0x1897e8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1897e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1897ec: 0xac20b430  sw          $zero, -0x4BD0($at)
    ctx->pc = 0x1897ecu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294947888), GPR_U32(ctx, 0)); // MMIO: 0x1000b430
    // 0x1897f0: 0xc04bb1c  jal         func_12EC70
    ctx->pc = 0x1897F0u;
    SET_GPR_U32(ctx, 31, 0x1897F8u);
    ctx->pc = 0x1897F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1897F0u;
            // 0x1897f4: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC70u;
    if (runtime->hasFunction(0x12EC70u)) {
        auto targetFn = runtime->lookupFunction(0x12EC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1897F8u; }
        if (ctx->pc != 0x1897F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteSema_0x12ec70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1897F8u; }
        if (ctx->pc != 0x1897F8u) { return; }
    }
    ctx->pc = 0x1897F8u;
    // 0x1897f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1897f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1897fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1897fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189800: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x189800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189804: 0x3e00008  jr          $ra
    ctx->pc = 0x189804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189804u;
            // 0x189808: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18980Cu;
}
