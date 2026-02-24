#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: setXYZ2
// Address: 0x11b748 - 0x11b780
void setXYZ2_0x11b748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("setXYZ2_0x11b748");
#endif

    ctx->pc = 0x11b748u;

    // 0x11b748: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x11b748u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11b74c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x11b74cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11b750: 0x6343a  dsrl        $a2, $a2, 16
    ctx->pc = 0x11b750u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 16);
    // 0x11b754: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x11b754u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11b758: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x11b758u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x11b75c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11b75cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b760: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x11b760u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x11b764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b768: 0xa63025  or          $a2, $a1, $a2
    ctx->pc = 0x11b768u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x11b76c: 0xc046d3a  jal         func_11B4E8
    ctx->pc = 0x11B76Cu;
    SET_GPR_U32(ctx, 31, 0x11B774u);
    ctx->pc = 0x11B770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B76Cu;
            // 0x11b770: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B4E8u;
    if (runtime->hasFunction(0x11B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x11B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B774u; }
        if (ctx->pc != 0x11B774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setGIFad_0x11b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B774u; }
        if (ctx->pc != 0x11B774u) { return; }
    }
    ctx->pc = 0x11B774u;
    // 0x11b774: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b778: 0x3e00008  jr          $ra
    ctx->pc = 0x11B778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B778u;
            // 0x11b77c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B780u;
}
