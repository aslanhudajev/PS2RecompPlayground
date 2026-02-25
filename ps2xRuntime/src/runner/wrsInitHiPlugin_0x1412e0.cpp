#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsInitHiPlugin
// Address: 0x1412e0 - 0x141324
void wrsInitHiPlugin_0x1412e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsInitHiPlugin_0x1412e0");
#endif

    ctx->pc = 0x1412e0u;

    // 0x1412e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1412e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1412e4: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x1412e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x1412e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1412e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1412ec: 0x24842250  addiu       $a0, $a0, 0x2250
    ctx->pc = 0x1412ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8784));
    // 0x1412f0: 0xc0430a6  jal         func_10C298
    ctx->pc = 0x1412F0u;
    SET_GPR_U32(ctx, 31, 0x1412F8u);
    ctx->pc = 0x1412F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1412F0u;
            // 0x1412f4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C298u;
    if (runtime->hasFunction(0x10C298u)) {
        auto targetFn = runtime->lookupFunction(0x10C298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1412F8u; }
        if (ctx->pc != 0x1412F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiRegistTable_0x10c298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1412F8u; }
        if (ctx->pc != 0x1412F8u) { return; }
    }
    ctx->pc = 0x1412F8u;
    // 0x1412f8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1412f8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x1412fc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1412FCu;
    {
        const bool branch_taken_0x1412fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x141300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1412FCu;
            // 0x141300: 0x3c010021  lui         $at, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1412fc) {
            ctx->pc = 0x141318u;
            goto label_141318;
        }
    }
    ctx->pc = 0x141304u;
    // 0x141304: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x141304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x141308: 0x8c26f840  lw          $a2, -0x7C0($at)
    ctx->pc = 0x141308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965312)));
    // 0x14130c: 0x24840308  addiu       $a0, $a0, 0x308
    ctx->pc = 0x14130cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 776));
    // 0x141310: 0xc059e98  jal         func_167A60
    ctx->pc = 0x141310u;
    SET_GPR_U32(ctx, 31, 0x141318u);
    ctx->pc = 0x141314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141310u;
            // 0x141314: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141318u; }
        if (ctx->pc != 0x141318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141318u; }
        if (ctx->pc != 0x141318u) { return; }
    }
    ctx->pc = 0x141318u;
label_141318:
    // 0x141318: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x141318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14131c: 0x3e00008  jr          $ra
    ctx->pc = 0x14131Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14131Cu;
            // 0x141320: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x141318u: goto label_141318;
            default: break;
        }
        return;
    }
    ctx->pc = 0x141324u;
}
