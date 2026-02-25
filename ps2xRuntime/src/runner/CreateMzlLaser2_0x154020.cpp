#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateMzlLaser2
// Address: 0x154020 - 0x154098
void CreateMzlLaser2_0x154020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateMzlLaser2_0x154020");
#endif

    ctx->pc = 0x154020u;

    // 0x154020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x154020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x154024: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x154024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x154028: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x154028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15402c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15402cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x154030: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x154030u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154034: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x154034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x154038: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x154038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15403c: 0xc05506c  jal         func_1541B0
    ctx->pc = 0x15403Cu;
    SET_GPR_U32(ctx, 31, 0x154044u);
    ctx->pc = 0x154040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15403Cu;
            // 0x154040: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1541B0u;
    if (runtime->hasFunction(0x1541B0u)) {
        auto targetFn = runtime->lookupFunction(0x1541B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154044u; }
        if (ctx->pc != 0x154044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotAlloc_0x1541b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154044u; }
        if (ctx->pc != 0x154044u) { return; }
    }
    ctx->pc = 0x154044u;
    // 0x154044: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x154044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x154048: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x154048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15404c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x15404cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x154050: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x154050u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x154054: 0x8e440098  lw          $a0, 0x98($s2)
    ctx->pc = 0x154054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x154058: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x154058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x15405c: 0x8e44009c  lw          $a0, 0x9C($s2)
    ctx->pc = 0x15405cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x154060: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x154060u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x154064: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x154064u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x154068: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x154068u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x15406c: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x15406cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    // 0x154070: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x154070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x154074: 0xac510018  sw          $s1, 0x18($v0)
    ctx->pc = 0x154074u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 17));
    // 0x154078: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x154078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x15407c: 0xac50003c  sw          $s0, 0x3C($v0)
    ctx->pc = 0x15407cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 16));
    // 0x154080: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x154080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x154084: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x154084u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154088: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x154088u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15408c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15408cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154090: 0x3e00008  jr          $ra
    ctx->pc = 0x154090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154090u;
            // 0x154094: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154098u;
}
