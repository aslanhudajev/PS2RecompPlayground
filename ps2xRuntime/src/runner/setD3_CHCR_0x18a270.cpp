#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: setD3_CHCR
// Address: 0x18a270 - 0x18a2d4
void setD3_CHCR_0x18a270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("setD3_CHCR_0x18a270");
#endif

    ctx->pc = 0x18a270u;

    // 0x18a270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18a270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18a274: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18a274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18a278: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18a278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18a27c: 0xc04de68  jal         func_1379A0
    ctx->pc = 0x18A27Cu;
    SET_GPR_U32(ctx, 31, 0x18A284u);
    ctx->pc = 0x18A280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A27Cu;
            // 0x18a280: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1379A0u;
    if (runtime->hasFunction(0x1379A0u)) {
        auto targetFn = runtime->lookupFunction(0x1379A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A284u; }
        if (ctx->pc != 0x18A284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x1379a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A284u; }
        if (ctx->pc != 0x18A284u) { return; }
    }
    ctx->pc = 0x18A284u;
    // 0x18a284: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x18a284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x18a288: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x18a288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x18a28c: 0x8c24f520  lw          $a0, -0xAE0($at)
    ctx->pc = 0x18a28cu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294964512))); // MMIO: 0x1000f520
    // 0x18a290: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x18a290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x18a294: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18a294u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x18a298: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x18a298u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x18a29c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x18a29cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x18a2a0: 0xac23f590  sw          $v1, -0xA70($at)
    ctx->pc = 0x18a2a0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294964624), GPR_U32(ctx, 3)); // MMIO: 0x1000f590
    // 0x18a2a4: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x18a2a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x18a2a8: 0xac30b000  sw          $s0, -0x5000($at)
    ctx->pc = 0x18a2a8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294946816), GPR_U32(ctx, 16)); // MMIO: 0x1000b000
    // 0x18a2ac: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x18a2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x18a2b0: 0x8c23f520  lw          $v1, -0xAE0($at)
    ctx->pc = 0x18a2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294964512))); // MMIO: 0x1000f520
    // 0x18a2b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18a2b4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18a2b8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x18a2b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x18a2bc: 0xc04de7a  jal         func_1379E8
    ctx->pc = 0x18A2BCu;
    SET_GPR_U32(ctx, 31, 0x18A2C4u);
    ctx->pc = 0x18A2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A2BCu;
            // 0x18a2c0: 0xac22f590  sw          $v0, -0xA70($at) (Delay Slot)
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294964624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1379E8u;
    if (runtime->hasFunction(0x1379E8u)) {
        auto targetFn = runtime->lookupFunction(0x1379E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A2C4u; }
        if (ctx->pc != 0x18A2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x1379e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A2C4u; }
        if (ctx->pc != 0x18A2C4u) { return; }
    }
    ctx->pc = 0x18A2C4u;
    // 0x18a2c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18a2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a2c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a2c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x18A2CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A2CCu;
            // 0x18a2d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A2D4u;
}
