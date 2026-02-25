#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ItemHitFunction_1UP
// Address: 0x196db0 - 0x196e14
void ItemHitFunction_1UP_0x196db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ItemHitFunction_1UP_0x196db0");
#endif

    ctx->pc = 0x196db0u;

    // 0x196db0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x196db4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x196db8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x196db8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x196dbc: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x196dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x196dc0: 0x18800011  blez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x196DC0u;
    {
        const bool branch_taken_0x196dc0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x196DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196DC0u;
            // 0x196dc4: 0x8ca6000c  lw          $a2, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196dc0) {
            ctx->pc = 0x196E08u;
            goto label_196e08;
        }
    }
    ctx->pc = 0x196DC8u;
    // 0x196dc8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x196dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x196dcc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x196DCCu;
    {
        const bool branch_taken_0x196dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x196dcc) {
            ctx->pc = 0x196DE0u;
            goto label_196de0;
        }
    }
    ctx->pc = 0x196DD4u;
    // 0x196dd4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x196DD4u;
    {
        const bool branch_taken_0x196dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196dd4) {
            ctx->pc = 0x196E08u;
            goto label_196e08;
        }
    }
    ctx->pc = 0x196DDCu;
    // 0x196ddc: 0x0  nop
    ctx->pc = 0x196ddcu;
    // NOP
label_196de0:
    // 0x196de0: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x196de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x196de4: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x196de4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x196de8: 0x8cc200ac  lw          $v0, 0xAC($a2)
    ctx->pc = 0x196de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 172)));
    // 0x196dec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x196decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x196df0: 0xacc200ac  sw          $v0, 0xAC($a2)
    ctx->pc = 0x196df0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 172), GPR_U32(ctx, 2));
    // 0x196df4: 0xc4ec000c  lwc1        $f12, 0xC($a3)
    ctx->pc = 0x196df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x196df8: 0xc4ed0010  lwc1        $f13, 0x10($a3)
    ctx->pc = 0x196df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x196dfc: 0xc05d080  jal         func_174200
    ctx->pc = 0x196DFCu;
    SET_GPR_U32(ctx, 31, 0x196E04u);
    ctx->pc = 0x196E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196DFCu;
            // 0x196e00: 0x2404003d  addiu       $a0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196E04u; }
        if (ctx->pc != 0x196E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196E04u; }
        if (ctx->pc != 0x196E04u) { return; }
    }
    ctx->pc = 0x196E04u;
    // 0x196e04: 0x0  nop
    ctx->pc = 0x196e04u;
    // NOP
label_196e08:
    // 0x196e08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x196E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196E0Cu;
            // 0x196e10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196DE0u: goto label_196de0;
            case 0x196E08u: goto label_196e08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x196E14u;
}
