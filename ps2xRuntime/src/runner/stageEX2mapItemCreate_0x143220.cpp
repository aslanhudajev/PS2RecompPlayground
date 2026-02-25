#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stageEX2mapItemCreate
// Address: 0x143220 - 0x1432b4
void stageEX2mapItemCreate_0x143220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stageEX2mapItemCreate_0x143220");
#endif

    ctx->pc = 0x143220u;

    // 0x143220: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x143220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x143224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x143224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x143228: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x143228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14322c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x14322cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x143230: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x143230u;
    SET_GPR_U32(ctx, 31, 0x143238u);
    ctx->pc = 0x143234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143230u;
            // 0x143234: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143238u; }
        if (ctx->pc != 0x143238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143238u; }
        if (ctx->pc != 0x143238u) { return; }
    }
    ctx->pc = 0x143238u;
    // 0x143238: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x143238u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x14323c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x14323cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x143240: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x143240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x143244: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x143244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x143248: 0xc0520cc  jal         func_148330
    ctx->pc = 0x143248u;
    SET_GPR_U32(ctx, 31, 0x143250u);
    ctx->pc = 0x14324Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143248u;
            // 0x14324c: 0x24e733c0  addiu       $a3, $a3, 0x33C0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143250u; }
        if (ctx->pc != 0x143250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143250u; }
        if (ctx->pc != 0x143250u) { return; }
    }
    ctx->pc = 0x143250u;
    // 0x143250: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x143250u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x143254: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x143254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x143258: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x143258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14325c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x14325cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x143260: 0xc0520cc  jal         func_148330
    ctx->pc = 0x143260u;
    SET_GPR_U32(ctx, 31, 0x143268u);
    ctx->pc = 0x143264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143260u;
            // 0x143264: 0x24e733c0  addiu       $a3, $a3, 0x33C0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143268u; }
        if (ctx->pc != 0x143268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143268u; }
        if (ctx->pc != 0x143268u) { return; }
    }
    ctx->pc = 0x143268u;
    // 0x143268: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x143268u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x14326c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x14326cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x143270: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x143270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x143274: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x143274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x143278: 0xc0520a0  jal         func_148280
    ctx->pc = 0x143278u;
    SET_GPR_U32(ctx, 31, 0x143280u);
    ctx->pc = 0x14327Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143278u;
            // 0x14327c: 0x24e732c0  addiu       $a3, $a3, 0x32C0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148280u;
    if (runtime->hasFunction(0x148280u)) {
        auto targetFn = runtime->lookupFunction(0x148280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143280u; }
        if (ctx->pc != 0x143280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_Alpha_0x148280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143280u; }
        if (ctx->pc != 0x143280u) { return; }
    }
    ctx->pc = 0x143280u;
    // 0x143280: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x143280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x143284: 0x3c033a03  lui         $v1, 0x3A03
    ctx->pc = 0x143284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14851 << 16));
    // 0x143288: 0xac209c58  sw          $zero, -0x63A8($at)
    ctx->pc = 0x143288u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941784), GPR_U32(ctx, 0));
    // 0x14328c: 0x3464126f  ori         $a0, $v1, 0x126F
    ctx->pc = 0x14328cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4719u)));
    // 0x143290: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x143290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x143294: 0x3c033a83  lui         $v1, 0x3A83
    ctx->pc = 0x143294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14979 << 16));
    // 0x143298: 0xac249c40  sw          $a0, -0x63C0($at)
    ctx->pc = 0x143298u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941760), GPR_U32(ctx, 4));
    // 0x14329c: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x14329cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4719u)));
    // 0x1432a0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1432a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1432a4: 0xac239c38  sw          $v1, -0x63C8($at)
    ctx->pc = 0x1432a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941752), GPR_U32(ctx, 3));
    // 0x1432a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1432a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1432ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1432ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1432B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1432ACu;
            // 0x1432b0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1432B4u;
}
