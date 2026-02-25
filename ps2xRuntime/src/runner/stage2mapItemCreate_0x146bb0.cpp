#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage2mapItemCreate
// Address: 0x146bb0 - 0x146c30
void stage2mapItemCreate_0x146bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage2mapItemCreate_0x146bb0");
#endif

    ctx->pc = 0x146bb0u;

    // 0x146bb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x146bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x146bb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x146bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x146bb8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x146bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x146bbc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x146bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x146bc0: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x146BC0u;
    SET_GPR_U32(ctx, 31, 0x146BC8u);
    ctx->pc = 0x146BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146BC0u;
            // 0x146bc4: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146BC8u; }
        if (ctx->pc != 0x146BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146BC8u; }
        if (ctx->pc != 0x146BC8u) { return; }
    }
    ctx->pc = 0x146BC8u;
    // 0x146bc8: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x146bc8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x146bcc: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x146bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x146bd0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x146bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x146bd4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x146bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x146bd8: 0x24e76db0  addiu       $a3, $a3, 0x6DB0
    ctx->pc = 0x146bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28080));
    // 0x146bdc: 0xc0520cc  jal         func_148330
    ctx->pc = 0x146BDCu;
    SET_GPR_U32(ctx, 31, 0x146BE4u);
    ctx->pc = 0x146BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146BDCu;
            // 0x146be0: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146BE4u; }
        if (ctx->pc != 0x146BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146BE4u; }
        if (ctx->pc != 0x146BE4u) { return; }
    }
    ctx->pc = 0x146BE4u;
    // 0x146be4: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x146be4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x146be8: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x146be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x146bec: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x146becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x146bf0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x146bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x146bf4: 0xc0520cc  jal         func_148330
    ctx->pc = 0x146BF4u;
    SET_GPR_U32(ctx, 31, 0x146BFCu);
    ctx->pc = 0x146BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146BF4u;
            // 0x146bf8: 0x24e76c40  addiu       $a3, $a3, 0x6C40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146BFCu; }
        if (ctx->pc != 0x146BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146BFCu; }
        if (ctx->pc != 0x146BFCu) { return; }
    }
    ctx->pc = 0x146BFCu;
    // 0x146bfc: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x146bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x146c00: 0x3c033a83  lui         $v1, 0x3A83
    ctx->pc = 0x146c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14979 << 16));
    // 0x146c04: 0xac209cf0  sw          $zero, -0x6310($at)
    ctx->pc = 0x146c04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941936), GPR_U32(ctx, 0));
    // 0x146c08: 0x3464126f  ori         $a0, $v1, 0x126F
    ctx->pc = 0x146c08u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4719u)));
    // 0x146c0c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x146c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x146c10: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x146c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x146c14: 0xac249ce8  sw          $a0, -0x6318($at)
    ctx->pc = 0x146c14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941928), GPR_U32(ctx, 4));
    // 0x146c18: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x146c18u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
    // 0x146c1c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x146c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x146c20: 0xac239ce0  sw          $v1, -0x6320($at)
    ctx->pc = 0x146c20u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941920), GPR_U32(ctx, 3));
    // 0x146c24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x146c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146c28: 0x3e00008  jr          $ra
    ctx->pc = 0x146C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146C28u;
            // 0x146c2c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x146C30u;
}
