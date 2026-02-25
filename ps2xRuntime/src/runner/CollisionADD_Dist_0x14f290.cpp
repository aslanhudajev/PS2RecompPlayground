#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CollisionADD_Dist
// Address: 0x14f290 - 0x14f2f8
void CollisionADD_Dist_0x14f290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CollisionADD_Dist_0x14f290");
#endif

    ctx->pc = 0x14f290u;

    // 0x14f290: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14f290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14f294: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x14f294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x14f298: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14f298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14f29c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14f29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14f2a0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x14f2a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f2a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14f2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14f2a8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x14f2a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f2ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14f2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14f2b0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x14f2b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f2b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14f2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14f2b8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x14f2b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f2bc: 0xc053cf4  jal         func_14F3D0
    ctx->pc = 0x14F2BCu;
    SET_GPR_U32(ctx, 31, 0x14F2C4u);
    ctx->pc = 0x14F2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F2BCu;
            // 0x14f2c0: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F3D0u;
    if (runtime->hasFunction(0x14F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x14F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F2C4u; }
        if (ctx->pc != 0x14F2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionAlloc_Dist_0x14f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F2C4u; }
        if (ctx->pc != 0x14F2C4u) { return; }
    }
    ctx->pc = 0x14F2C4u;
    // 0x14f2c4: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x14f2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x14f2c8: 0xac520004  sw          $s2, 0x4($v0)
    ctx->pc = 0x14f2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    // 0x14f2cc: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x14f2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x14f2d0: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x14f2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
    // 0x14f2d4: 0xac530018  sw          $s3, 0x18($v0)
    ctx->pc = 0x14f2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 19));
    // 0x14f2d8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x14f2d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14f2dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14f2dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14f2e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14f2e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14f2e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14f2e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f2e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14f2e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f2ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14f2ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f2f0: 0x3e00008  jr          $ra
    ctx->pc = 0x14F2F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F2F0u;
            // 0x14f2f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14F2F8u;
}
