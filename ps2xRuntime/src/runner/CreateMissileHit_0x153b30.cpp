#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateMissileHit
// Address: 0x153b30 - 0x153bb8
void CreateMissileHit_0x153b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateMissileHit_0x153b30");
#endif

    ctx->pc = 0x153b30u;

    // 0x153b30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x153b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x153b34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x153b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x153b38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x153b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x153b3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x153b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x153b40: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x153b40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153b44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x153b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x153b48: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x153b48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153b4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x153b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x153b50: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x153b50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153b54: 0xc05506c  jal         func_1541B0
    ctx->pc = 0x153B54u;
    SET_GPR_U32(ctx, 31, 0x153B5Cu);
    ctx->pc = 0x153B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153B54u;
            // 0x153b58: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1541B0u;
    if (runtime->hasFunction(0x1541B0u)) {
        auto targetFn = runtime->lookupFunction(0x1541B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153B5Cu; }
        if (ctx->pc != 0x153B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotAlloc_0x1541b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153B5Cu; }
        if (ctx->pc != 0x153B5Cu) { return; }
    }
    ctx->pc = 0x153B5Cu;
    // 0x153b5c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x153b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x153b60: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x153b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x153b64: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x153b64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x153b68: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x153b68u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x153b6c: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x153b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x153b70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x153b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153b74: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x153b74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x153b78: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x153b78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    // 0x153b7c: 0xac51000c  sw          $s1, 0xC($v0)
    ctx->pc = 0x153b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
    // 0x153b80: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x153b80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x153b84: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x153b84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x153b88: 0xac440030  sw          $a0, 0x30($v0)
    ctx->pc = 0x153b88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 4));
    // 0x153b8c: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x153b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x153b90: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x153b90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x153b94: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x153b94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x153b98: 0xac50003c  sw          $s0, 0x3C($v0)
    ctx->pc = 0x153b98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 16));
    // 0x153b9c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x153b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x153ba0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x153ba0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x153ba4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x153ba4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153ba8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x153ba8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153bac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x153bacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x153BB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153BB0u;
            // 0x153bb4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x153BB8u;
}
