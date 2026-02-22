#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setBITBLTBUF
// Address: 0x11b9b0 - 0x11b9e0
void setBITBLTBUF_0x11b9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11b9b0u;

    // 0x11b9b0: 0x73e3c  dsll32      $a3, $a3, 24
    ctx->pc = 0x11b9b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 24));
    // 0x11b9b4: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x11b9b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x11b9b8: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x11b9b8u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), GPR_VEC(ctx, 6)));
    // 0x11b9bc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x11b9bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11b9c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11b9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b9c4: 0xe53025  or          $a2, $a3, $a1
    ctx->pc = 0x11b9c4u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 7), GPR_VEC(ctx, 5)));
    // 0x11b9c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b9cc: 0xc046d3a  jal         func_11B4E8
    ctx->pc = 0x11B9CCu;
    SET_GPR_U32(ctx, 31, 0x11B9D4u);
    ctx->pc = 0x11B9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B9CCu;
            // 0x11b9d0: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B4E8u;
    if (runtime->hasFunction(0x11B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x11B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B9D4u; }
        if (ctx->pc != 0x11B9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setGIFad_0x11b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B9D4u; }
        if (ctx->pc != 0x11B9D4u) { return; }
    }
    ctx->pc = 0x11B9D4u;
    // 0x11b9d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x11B9D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B9D8u;
            // 0x11b9dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B9E0u;
}
