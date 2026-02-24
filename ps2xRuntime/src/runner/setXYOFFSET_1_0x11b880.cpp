#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: setXYOFFSET_1
// Address: 0x11b880 - 0x11b8ac
void setXYOFFSET_1_0x11b880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("setXYOFFSET_1_0x11b880");
#endif

    ctx->pc = 0x11b880u;

    // 0x11b880: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x11b880u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11b884: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x11b884u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11b888: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x11b888u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11b88c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11b88cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b890: 0xa63025  or          $a2, $a1, $a2
    ctx->pc = 0x11b890u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x11b894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b898: 0xc046d3a  jal         func_11B4E8
    ctx->pc = 0x11B898u;
    SET_GPR_U32(ctx, 31, 0x11B8A0u);
    ctx->pc = 0x11B89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B898u;
            // 0x11b89c: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B4E8u;
    if (runtime->hasFunction(0x11B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x11B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B8A0u; }
        if (ctx->pc != 0x11B8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setGIFad_0x11b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B8A0u; }
        if (ctx->pc != 0x11B8A0u) { return; }
    }
    ctx->pc = 0x11B8A0u;
    // 0x11b8a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x11B8A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B8A4u;
            // 0x11b8a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B8ACu;
}
