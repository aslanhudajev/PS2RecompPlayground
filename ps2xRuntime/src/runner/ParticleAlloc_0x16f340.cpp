#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ParticleAlloc
// Address: 0x16f340 - 0x16f384
void ParticleAlloc_0x16f340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ParticleAlloc_0x16f340");
#endif

    ctx->pc = 0x16f340u;

    // 0x16f340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16f340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16f344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16f344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16f348: 0xc04ea32  jal         func_13A8C8
    ctx->pc = 0x16F348u;
    SET_GPR_U32(ctx, 31, 0x16F350u);
    ctx->pc = 0x16F34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F348u;
            // 0x16f34c: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A8C8u;
    if (runtime->hasFunction(0x13A8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13A8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F350u; }
        if (ctx->pc != 0x16F350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        malloc_0x13a8c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F350u; }
        if (ctx->pc != 0x16F350u) { return; }
    }
    ctx->pc = 0x16F350u;
    // 0x16f350: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x16f350u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x16f354: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x16f354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x16f358: 0x8c234cf0  lw          $v1, 0x4CF0($at)
    ctx->pc = 0x16f358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19696)));
    // 0x16f35c: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x16f35cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x16f360: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x16f360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x16f364: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16F364u;
    {
        const bool branch_taken_0x16f364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f364) {
            ctx->pc = 0x16F370u;
            goto label_16f370;
        }
    }
    ctx->pc = 0x16F36Cu;
    // 0x16f36c: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x16f36cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_16f370:
    // 0x16f370: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x16f370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x16f374: 0xac224cf0  sw          $v0, 0x4CF0($at)
    ctx->pc = 0x16f374u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19696), GPR_U32(ctx, 2));
    // 0x16f378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f37c: 0x3e00008  jr          $ra
    ctx->pc = 0x16F37Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F37Cu;
            // 0x16f380: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16F370u: goto label_16f370;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16F384u;
}
