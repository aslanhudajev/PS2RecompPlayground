#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: camerainit
// Address: 0x167c80 - 0x167ce8
void camerainit_0x167c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("camerainit_0x167c80");
#endif

    ctx->pc = 0x167c80u;

    // 0x167c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x167c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x167c84: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x167c84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x167c88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x167c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x167c8c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x167c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x167c90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x167c94: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x167c94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x167c98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x167c98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167c9c: 0x24a59dc0  addiu       $a1, $a1, -0x6240
    ctx->pc = 0x167c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942144));
    // 0x167ca0: 0x24c69dd0  addiu       $a2, $a2, -0x6230
    ctx->pc = 0x167ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942160));
    // 0x167ca4: 0xc059f98  jal         func_167E60
    ctx->pc = 0x167CA4u;
    SET_GPR_U32(ctx, 31, 0x167CACu);
    ctx->pc = 0x167CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167CA4u;
            // 0x167ca8: 0x24e79de0  addiu       $a3, $a3, -0x6220 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167E60u;
    if (runtime->hasFunction(0x167E60u)) {
        auto targetFn = runtime->lookupFunction(0x167E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167CACu; }
        if (ctx->pc != 0x167CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        perspective_0x167e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167CACu; }
        if (ctx->pc != 0x167CACu) { return; }
    }
    ctx->pc = 0x167CACu;
    // 0x167cac: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x167cacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x167cb0: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x167cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x167cb4: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x167cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x167cb8: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x167cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x167cbc: 0x24849df0  addiu       $a0, $a0, -0x6210
    ctx->pc = 0x167cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942192));
    // 0x167cc0: 0x24a54c60  addiu       $a1, $a1, 0x4C60
    ctx->pc = 0x167cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19552));
    // 0x167cc4: 0x24c64c70  addiu       $a2, $a2, 0x4C70
    ctx->pc = 0x167cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19568));
    // 0x167cc8: 0xc059f78  jal         func_167DE0
    ctx->pc = 0x167CC8u;
    SET_GPR_U32(ctx, 31, 0x167CD0u);
    ctx->pc = 0x167CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167CC8u;
            // 0x167ccc: 0x24e79e00  addiu       $a3, $a3, -0x6200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167DE0u;
    if (runtime->hasFunction(0x167DE0u)) {
        auto targetFn = runtime->lookupFunction(0x167DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167CD0u; }
        if (ctx->pc != 0x167CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        viewset_0x167de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167CD0u; }
        if (ctx->pc != 0x167CD0u) { return; }
    }
    ctx->pc = 0x167CD0u;
    // 0x167cd0: 0xc059f3c  jal         func_167CF0
    ctx->pc = 0x167CD0u;
    SET_GPR_U32(ctx, 31, 0x167CD8u);
    ctx->pc = 0x167CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167CD0u;
            // 0x167cd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167CF0u;
    if (runtime->hasFunction(0x167CF0u)) {
        auto targetFn = runtime->lookupFunction(0x167CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167CD8u; }
        if (ctx->pc != 0x167CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cameraview_0x167cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167CD8u; }
        if (ctx->pc != 0x167CD8u) { return; }
    }
    ctx->pc = 0x167CD8u;
    // 0x167cd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x167cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167cdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167cdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x167CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167CE0u;
            // 0x167ce4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x167CE8u;
}
