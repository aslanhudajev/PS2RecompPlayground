#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setRGBAQ
// Address: 0x11b6f8 - 0x11b748
void setRGBAQ_0x11b6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11b6f8u;

    // 0x11b6f8: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x11b6f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x11b6fc: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x11b6fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11b700: 0x6363a  dsrl        $a2, $a2, 24
    ctx->pc = 0x11b700u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 24);
    // 0x11b704: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x11b704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11b708: 0x73c3a  dsrl        $a3, $a3, 16
    ctx->pc = 0x11b708u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 16);
    // 0x11b70c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x11b70cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11b710: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x11b710u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), GPR_VEC(ctx, 6)));
    // 0x11b714: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x11b714u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x11b718: 0xa92825  or          $a1, $a1, $t1
    ctx->pc = 0x11b718u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 9)));
    // 0x11b71c: 0x8303c  dsll32      $a2, $t0, 0
    ctx->pc = 0x11b71cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << (32 + 0));
    // 0x11b720: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x11b720u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 7)));
    // 0x11b724: 0x6323a  dsrl        $a2, $a2, 8
    ctx->pc = 0x11b724u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 8);
    // 0x11b728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11b728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b72c: 0xa63025  or          $a2, $a1, $a2
    ctx->pc = 0x11b72cu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x11b730: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b734: 0xc046d3a  jal         func_11B4E8
    ctx->pc = 0x11B734u;
    SET_GPR_U32(ctx, 31, 0x11B73Cu);
    ctx->pc = 0x11B738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B734u;
            // 0x11b738: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B4E8u;
    if (runtime->hasFunction(0x11B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x11B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B73Cu; }
        if (ctx->pc != 0x11B73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setGIFad_0x11b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B73Cu; }
        if (ctx->pc != 0x11B73Cu) { return; }
    }
    ctx->pc = 0x11B73Cu;
    // 0x11b73c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b740: 0x3e00008  jr          $ra
    ctx->pc = 0x11B740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B740u;
            // 0x11b744: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B748u;
}
