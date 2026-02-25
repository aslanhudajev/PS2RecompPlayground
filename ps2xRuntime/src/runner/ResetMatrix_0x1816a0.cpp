#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ResetMatrix
// Address: 0x1816a0 - 0x1816f8
void ResetMatrix_0x1816a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ResetMatrix_0x1816a0");
#endif

    ctx->pc = 0x1816a0u;

    // 0x1816a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1816a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1816a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1816a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1816a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1816a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1816ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1816acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1816b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1816b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1816b4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1816b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1816b8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1816b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1816bc: 0xc04b76e  jal         func_12DDB8
    ctx->pc = 0x1816BCu;
    SET_GPR_U32(ctx, 31, 0x1816C4u);
    ctx->pc = 0x1816C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1816BCu;
            // 0x1816c0: 0x24a5a2e0  addiu       $a1, $a1, -0x5D20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDB8u;
    if (runtime->hasFunction(0x12DDB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DDB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1816C4u; }
        if (ctx->pc != 0x1816C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x12ddb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1816C4u; }
        if (ctx->pc != 0x1816C4u) { return; }
    }
    ctx->pc = 0x1816C4u;
    // 0x1816c4: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x1816c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x1816c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1816c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1816cc: 0xc04b76a  jal         func_12DDA8
    ctx->pc = 0x1816CCu;
    SET_GPR_U32(ctx, 31, 0x1816D4u);
    ctx->pc = 0x1816D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1816CCu;
            // 0x1816d0: 0x24a53dd0  addiu       $a1, $a1, 0x3DD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDA8u;
    if (runtime->hasFunction(0x12DDA8u)) {
        auto targetFn = runtime->lookupFunction(0x12DDA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1816D4u; }
        if (ctx->pc != 0x1816D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x12dda8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1816D4u; }
        if (ctx->pc != 0x1816D4u) { return; }
    }
    ctx->pc = 0x1816D4u;
    // 0x1816d4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1816d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1816d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1816d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1816dc: 0xc04b76a  jal         func_12DDA8
    ctx->pc = 0x1816DCu;
    SET_GPR_U32(ctx, 31, 0x1816E4u);
    ctx->pc = 0x1816E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1816DCu;
            // 0x1816e0: 0x24a5a320  addiu       $a1, $a1, -0x5CE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDA8u;
    if (runtime->hasFunction(0x12DDA8u)) {
        auto targetFn = runtime->lookupFunction(0x12DDA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1816E4u; }
        if (ctx->pc != 0x1816E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x12dda8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1816E4u; }
        if (ctx->pc != 0x1816E4u) { return; }
    }
    ctx->pc = 0x1816E4u;
    // 0x1816e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1816e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1816e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1816e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1816ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1816ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1816f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1816F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1816F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1816F0u;
            // 0x1816f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1816F8u;
}
