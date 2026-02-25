#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage4mapItemCreate
// Address: 0x145940 - 0x1459a4
void stage4mapItemCreate_0x145940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage4mapItemCreate_0x145940");
#endif

    ctx->pc = 0x145940u;

    // 0x145940: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x145940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x145944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x145944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x145948: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x145948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14594c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x14594cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x145950: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x145950u;
    SET_GPR_U32(ctx, 31, 0x145958u);
    ctx->pc = 0x145954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145950u;
            // 0x145954: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145958u; }
        if (ctx->pc != 0x145958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145958u; }
        if (ctx->pc != 0x145958u) { return; }
    }
    ctx->pc = 0x145958u;
    // 0x145958: 0x3c023ee6  lui         $v0, 0x3EE6
    ctx->pc = 0x145958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16102 << 16));
    // 0x14595c: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x14595cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x145960: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x145960u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x145964: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x145964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x145968: 0x3c02bf05  lui         $v0, 0xBF05
    ctx->pc = 0x145968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48901 << 16));
    // 0x14596c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x14596cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x145970: 0x34421eb8  ori         $v0, $v0, 0x1EB8
    ctx->pc = 0x145970u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)7864u)));
    // 0x145974: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x145974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x145978: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x145978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x14597c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x14597cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x145980: 0x3c02be85  lui         $v0, 0xBE85
    ctx->pc = 0x145980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48773 << 16));
    // 0x145984: 0x24e759b0  addiu       $a3, $a3, 0x59B0
    ctx->pc = 0x145984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22960));
    // 0x145988: 0x34421eb8  ori         $v0, $v0, 0x1EB8
    ctx->pc = 0x145988u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)7864u)));
    // 0x14598c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x14598cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x145990: 0xc0520cc  jal         func_148330
    ctx->pc = 0x145990u;
    SET_GPR_U32(ctx, 31, 0x145998u);
    ctx->pc = 0x145994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145990u;
            // 0x145994: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145998u; }
        if (ctx->pc != 0x145998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145998u; }
        if (ctx->pc != 0x145998u) { return; }
    }
    ctx->pc = 0x145998u;
    // 0x145998: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x145998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14599c: 0x3e00008  jr          $ra
    ctx->pc = 0x14599Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1459A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14599Cu;
            // 0x1459a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1459A4u;
}
