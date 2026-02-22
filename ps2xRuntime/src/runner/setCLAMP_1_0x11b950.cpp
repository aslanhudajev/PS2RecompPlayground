#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setCLAMP_1
// Address: 0x11b950 - 0x11b9ac
void setCLAMP_1_0x11b950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11b950u;

    // 0x11b950: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x11b950u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11b954: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x11b954u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x11b958: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x11b958u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x11b95c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x11b95cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11b960: 0xa50bc  dsll32      $t2, $t2, 2
    ctx->pc = 0x11b960u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 2));
    // 0x11b964: 0x844ba  dsrl        $t0, $t0, 18
    ctx->pc = 0x11b964u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 18);
    // 0x11b968: 0x73f3a  dsrl        $a3, $a3, 28
    ctx->pc = 0x11b968u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 28);
    // 0x11b96c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x11b96cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11b970: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x11b970u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x11b974: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x11b974u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 10)));
    // 0x11b978: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x11b978u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x11b97c: 0x637ba  dsrl        $a2, $a2, 30
    ctx->pc = 0x11b97cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 30);
    // 0x11b980: 0x94a3a  dsrl        $t1, $t1, 8
    ctx->pc = 0x11b980u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 8);
    // 0x11b984: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x11b984u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 8)));
    // 0x11b988: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x11b988u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 9)));
    // 0x11b98c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11b98cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b990: 0xa63025  or          $a2, $a1, $a2
    ctx->pc = 0x11b990u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x11b994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b998: 0xc046d3a  jal         func_11B4E8
    ctx->pc = 0x11B998u;
    SET_GPR_U32(ctx, 31, 0x11B9A0u);
    ctx->pc = 0x11B99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B998u;
            // 0x11b99c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B4E8u;
    if (runtime->hasFunction(0x11B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x11B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B9A0u; }
        if (ctx->pc != 0x11B9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setGIFad_0x11b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B9A0u; }
        if (ctx->pc != 0x11B9A0u) { return; }
    }
    ctx->pc = 0x11B9A0u;
    // 0x11b9a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x11B9A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B9A4u;
            // 0x11b9a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B9ACu;
}
