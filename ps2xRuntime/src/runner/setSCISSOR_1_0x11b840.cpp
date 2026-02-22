#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setSCISSOR_1
// Address: 0x11b840 - 0x11b880
void setSCISSOR_1_0x11b840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11b840u;

    // 0x11b840: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x11b840u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11b844: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x11b844u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11b848: 0x6343a  dsrl        $a2, $a2, 16
    ctx->pc = 0x11b848u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 16);
    // 0x11b84c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x11b84cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11b850: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x11b850u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x11b854: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x11b854u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x11b858: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x11b858u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 8)));
    // 0x11b85c: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x11b85cu;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), GPR_VEC(ctx, 6)));
    // 0x11b860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11b860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b864: 0xa73025  or          $a2, $a1, $a3
    ctx->pc = 0x11b864u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 7)));
    // 0x11b868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b86c: 0xc046d3a  jal         func_11B4E8
    ctx->pc = 0x11B86Cu;
    SET_GPR_U32(ctx, 31, 0x11B874u);
    ctx->pc = 0x11B870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B86Cu;
            // 0x11b870: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B4E8u;
    if (runtime->hasFunction(0x11B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x11B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B874u; }
        if (ctx->pc != 0x11B874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setGIFad_0x11b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B874u; }
        if (ctx->pc != 0x11B874u) { return; }
    }
    ctx->pc = 0x11B874u;
    // 0x11b874: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b878: 0x3e00008  jr          $ra
    ctx->pc = 0x11B878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B878u;
            // 0x11b87c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B880u;
}
