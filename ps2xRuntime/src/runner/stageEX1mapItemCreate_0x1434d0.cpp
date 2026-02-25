#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stageEX1mapItemCreate
// Address: 0x1434d0 - 0x14354c
void stageEX1mapItemCreate_0x1434d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stageEX1mapItemCreate_0x1434d0");
#endif

    ctx->pc = 0x1434d0u;

    // 0x1434d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1434d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1434d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1434d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1434d8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1434d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1434dc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1434dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1434e0: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1434E0u;
    SET_GPR_U32(ctx, 31, 0x1434E8u);
    ctx->pc = 0x1434E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1434E0u;
            // 0x1434e4: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1434E8u; }
        if (ctx->pc != 0x1434E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1434E8u; }
        if (ctx->pc != 0x1434E8u) { return; }
    }
    ctx->pc = 0x1434E8u;
    // 0x1434e8: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x1434e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x1434ec: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1434ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1434f0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1434f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1434f4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1434f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1434f8: 0xc0520cc  jal         func_148330
    ctx->pc = 0x1434F8u;
    SET_GPR_U32(ctx, 31, 0x143500u);
    ctx->pc = 0x1434FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1434F8u;
            // 0x1434fc: 0x24e736c0  addiu       $a3, $a3, 0x36C0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143500u; }
        if (ctx->pc != 0x143500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143500u; }
        if (ctx->pc != 0x143500u) { return; }
    }
    ctx->pc = 0x143500u;
    // 0x143500: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x143500u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x143504: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x143504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x143508: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x143508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14350c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x14350cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x143510: 0xc0520a0  jal         func_148280
    ctx->pc = 0x143510u;
    SET_GPR_U32(ctx, 31, 0x143518u);
    ctx->pc = 0x143514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143510u;
            // 0x143514: 0x24e73550  addiu       $a3, $a3, 0x3550 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148280u;
    if (runtime->hasFunction(0x148280u)) {
        auto targetFn = runtime->lookupFunction(0x148280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143518u; }
        if (ctx->pc != 0x143518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_Alpha_0x148280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143518u; }
        if (ctx->pc != 0x143518u) { return; }
    }
    ctx->pc = 0x143518u;
    // 0x143518: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x143518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14351c: 0x3c033b44  lui         $v1, 0x3B44
    ctx->pc = 0x14351cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15172 << 16));
    // 0x143520: 0xac209c58  sw          $zero, -0x63A8($at)
    ctx->pc = 0x143520u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941784), GPR_U32(ctx, 0));
    // 0x143524: 0x34649ba6  ori         $a0, $v1, 0x9BA6
    ctx->pc = 0x143524u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39846u)));
    // 0x143528: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x143528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14352c: 0x3c033c03  lui         $v1, 0x3C03
    ctx->pc = 0x14352cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15363 << 16));
    // 0x143530: 0xac249c50  sw          $a0, -0x63B0($at)
    ctx->pc = 0x143530u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941776), GPR_U32(ctx, 4));
    // 0x143534: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x143534u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4719u)));
    // 0x143538: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x143538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14353c: 0xac239c48  sw          $v1, -0x63B8($at)
    ctx->pc = 0x14353cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941768), GPR_U32(ctx, 3));
    // 0x143540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143544: 0x3e00008  jr          $ra
    ctx->pc = 0x143544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143544u;
            // 0x143548: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14354Cu;
}
