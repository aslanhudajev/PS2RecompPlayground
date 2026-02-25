#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsDeleteTim2
// Address: 0x170700 - 0x170738
void wrsDeleteTim2_0x170700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsDeleteTim2_0x170700");
#endif

    ctx->pc = 0x170700u;

    // 0x170700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x170700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x170704: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x170704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x170708: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x170708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17070c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17070cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170710: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x170710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x170714: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x170714u;
    {
        const bool branch_taken_0x170714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x170714) {
            ctx->pc = 0x170728u;
            goto label_170728;
        }
    }
    ctx->pc = 0x17071Cu;
    // 0x17071c: 0xc050700  jal         func_141C00
    ctx->pc = 0x17071Cu;
    SET_GPR_U32(ctx, 31, 0x170724u);
    ctx->pc = 0x141C00u;
    if (runtime->hasFunction(0x141C00u)) {
        auto targetFn = runtime->lookupFunction(0x141C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170724u; }
        if (ctx->pc != 0x170724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFree_0x141c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170724u; }
        if (ctx->pc != 0x170724u) { return; }
    }
    ctx->pc = 0x170724u;
    // 0x170724: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x170724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_170728:
    // 0x170728: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x170728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17072c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17072cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170730: 0x3e00008  jr          $ra
    ctx->pc = 0x170730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170730u;
            // 0x170734: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170728u: goto label_170728;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170738u;
}
