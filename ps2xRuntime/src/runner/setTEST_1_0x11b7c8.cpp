#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setTEST_1
// Address: 0x11b7c8 - 0x11b840
void setTEST_1_0x11b7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11b7c8u;

    // 0x11b7c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11b7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b7cc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x11b7ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11b7d0: 0x9fa20010  lwu         $v0, 0x10($sp)
    ctx->pc = 0x11b7d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b7d4: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x11b7d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x11b7d8: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x11b7d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x11b7dc: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x11b7dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11b7e0: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x11b7e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x11b7e4: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x11b7e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x11b7e8: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x11b7e8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x11b7ec: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x11b7ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11b7f0: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x11b7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x11b7f4: 0x8453a  dsrl        $t0, $t0, 20
    ctx->pc = 0x11b7f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 20);
    // 0x11b7f8: 0xa547a  dsrl        $t2, $t2, 17
    ctx->pc = 0x11b7f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> 17);
    // 0x11b7fc: 0x637fa  dsrl        $a2, $a2, 31
    ctx->pc = 0x11b7fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 31);
    // 0x11b800: 0x73f3a  dsrl        $a3, $a3, 28
    ctx->pc = 0x11b800u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 28);
    // 0x11b804: 0x94cba  dsrl        $t1, $t1, 18
    ctx->pc = 0x11b804u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 18);
    // 0x11b808: 0xb5c3a  dsrl        $t3, $t3, 16
    ctx->pc = 0x11b808u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> 16);
    // 0x11b80c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x11b80cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x11b810: 0x10a4025  or          $t0, $t0, $t2
    ctx->pc = 0x11b810u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x11b814: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x11b814u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x11b818: 0x12b4825  or          $t1, $t1, $t3
    ctx->pc = 0x11b818u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 11)));
    // 0x11b81c: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x11b81cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 8)));
    // 0x11b820: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x11b820u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 9)));
    // 0x11b824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b828: 0xa63025  or          $a2, $a1, $a2
    ctx->pc = 0x11b828u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x11b82c: 0xc046d3a  jal         func_11B4E8
    ctx->pc = 0x11B82Cu;
    SET_GPR_U32(ctx, 31, 0x11B834u);
    ctx->pc = 0x11B830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B82Cu;
            // 0x11b830: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B4E8u;
    if (runtime->hasFunction(0x11B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x11B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B834u; }
        if (ctx->pc != 0x11B834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setGIFad_0x11b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B834u; }
        if (ctx->pc != 0x11B834u) { return; }
    }
    ctx->pc = 0x11B834u;
    // 0x11b834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b838: 0x3e00008  jr          $ra
    ctx->pc = 0x11B838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B838u;
            // 0x11b83c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B840u;
}
