#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: PointsUnInit
// Address: 0x1db7e0 - 0x1db830
void PointsUnInit_0x1db7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("PointsUnInit_0x1db7e0");
#endif

    ctx->pc = 0x1db7e0u;

    // 0x1db7e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1db7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1db7e4: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1db7e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1db7e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1db7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1db7ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1db7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1db7f0: 0x8c241d80  lw          $a0, 0x1D80($at)
    ctx->pc = 0x1db7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7552)));
    // 0x1db7f4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1DB7F4u;
    {
        const bool branch_taken_0x1db7f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db7f4) {
            ctx->pc = 0x1DB820u;
            goto label_1db820;
        }
    }
    ctx->pc = 0x1DB7FCu;
    // 0x1db7fc: 0x0  nop
    ctx->pc = 0x1db7fcu;
    // NOP
label_1db800:
    // 0x1db800: 0xc076e0c  jal         func_1DB830
    ctx->pc = 0x1DB800u;
    SET_GPR_U32(ctx, 31, 0x1DB808u);
    ctx->pc = 0x1DB804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB800u;
            // 0x1db804: 0x8c900040  lw          $s0, 0x40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB830u;
    if (runtime->hasFunction(0x1DB830u)) {
        auto targetFn = runtime->lookupFunction(0x1DB830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB808u; }
        if (ctx->pc != 0x1DB808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PointsFree_0x1db830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB808u; }
        if (ctx->pc != 0x1DB808u) { return; }
    }
    ctx->pc = 0x1DB808u;
    // 0x1db808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db80c: 0x0  nop
    ctx->pc = 0x1db80cu;
    // NOP
    // 0x1db810: 0x0  nop
    ctx->pc = 0x1db810u;
    // NOP
    // 0x1db814: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DB814u;
    {
        const bool branch_taken_0x1db814 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db814) {
            ctx->pc = 0x1DB800u;
            goto label_1db800;
        }
    }
    ctx->pc = 0x1DB81Cu;
    // 0x1db81c: 0x0  nop
    ctx->pc = 0x1db81cu;
    // NOP
label_1db820:
    // 0x1db820: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1db820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db824: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1db824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db828: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB828u;
            // 0x1db82c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DB800u: goto label_1db800;
            case 0x1DB820u: goto label_1db820;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DB830u;
}
