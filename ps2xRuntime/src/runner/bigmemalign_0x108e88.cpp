#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: bigmemalign
// Address: 0x108e88 - 0x108ec0
void bigmemalign_0x108e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("bigmemalign_0x108e88");
#endif

    ctx->pc = 0x108e88u;

    // 0x108e88: 0x8f82817c  lw          $v0, -0x7E84($gp)
    ctx->pc = 0x108e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
    // 0x108e8c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x108e8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x108e90: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x108e90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x108e94: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x108E94u;
    {
        const bool branch_taken_0x108e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108E94u;
            // 0x108e98: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108e94) {
            ctx->pc = 0x108EB0u;
            goto label_108eb0;
        }
    }
    ctx->pc = 0x108E9Cu;
    // 0x108e9c: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x108e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x108ea0: 0xc043ef8  jal         func_10FBE0
    ctx->pc = 0x108EA0u;
    SET_GPR_U32(ctx, 31, 0x108EA8u);
    ctx->pc = 0x108EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108EA0u;
            // 0x108ea4: 0x24843398  addiu       $a0, $a0, 0x3398 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FBE0u;
    if (runtime->hasFunction(0x10FBE0u)) {
        auto targetFn = runtime->lookupFunction(0x10FBE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108EA8u; }
        if (ctx->pc != 0x108EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePrintf_0x10fbe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108EA8u; }
        if (ctx->pc != 0x108EA8u) { return; }
    }
    ctx->pc = 0x108EA8u;
    // 0x108ea8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x108EA8u;
    {
        const bool branch_taken_0x108ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108EA8u;
            // 0x108eac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ea8) {
            ctx->pc = 0x108EB4u;
            goto label_108eb4;
        }
    }
    ctx->pc = 0x108EB0u;
label_108eb0:
    // 0x108eb0: 0x8f828178  lw          $v0, -0x7E88($gp)
    ctx->pc = 0x108eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
label_108eb4:
    // 0x108eb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x108EB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108EB8u;
            // 0x108ebc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x108EB0u: goto label_108eb0;
            case 0x108EB4u: goto label_108eb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x108EC0u;
}
