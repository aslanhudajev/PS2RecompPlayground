#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _clearOnce
// Address: 0x11fec0 - 0x11ff0c
void _clearOnce_0x11fec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_clearOnce_0x11fec0");
#endif

    ctx->pc = 0x11fec0u;

    // 0x11fec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11fec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11fec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11fec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11fec8: 0xc0489e2  jal         func_122788
    ctx->pc = 0x11FEC8u;
    SET_GPR_U32(ctx, 31, 0x11FED0u);
    ctx->pc = 0x11FECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FEC8u;
            // 0x11fecc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122788u;
    if (runtime->hasFunction(0x122788u)) {
        auto targetFn = runtime->lookupFunction(0x122788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FED0u; }
        if (ctx->pc != 0x11FED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _ipuSetMPEG1_0x122788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FED0u; }
        if (ctx->pc != 0x11FED0u) { return; }
    }
    ctx->pc = 0x11FED0u;
    // 0x11fed0: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x11fed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x11fed4: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x11fed4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x11fed8: 0x8c8217b0  lw          $v0, 0x17B0($a0)
    ctx->pc = 0x11fed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6064)));
    // 0x11fedc: 0x24c31df8  addiu       $v1, $a2, 0x1DF8
    ctx->pc = 0x11fedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 7672));
    // 0x11fee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11fee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11fee4: 0x24473300  addiu       $a3, $v0, 0x3300
    ctx->pc = 0x11fee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 13056));
    // 0x11fee8: 0x24441800  addiu       $a0, $v0, 0x1800
    ctx->pc = 0x11fee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6144));
    // 0x11feec: 0x24451b00  addiu       $a1, $v0, 0x1B00
    ctx->pc = 0x11feecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6912));
    // 0x11fef0: 0xacc21df8  sw          $v0, 0x1DF8($a2)
    ctx->pc = 0x11fef0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 7672), GPR_U32(ctx, 2));
    // 0x11fef4: 0xac600280  sw          $zero, 0x280($v1)
    ctx->pc = 0x11fef4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 640), GPR_U32(ctx, 0));
    // 0x11fef8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x11fef8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x11fefc: 0xac650140  sw          $a1, 0x140($v1)
    ctx->pc = 0x11fefcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 320), GPR_U32(ctx, 5));
    // 0x11ff00: 0xac670144  sw          $a3, 0x144($v1)
    ctx->pc = 0x11ff00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 324), GPR_U32(ctx, 7));
    // 0x11ff04: 0x3e00008  jr          $ra
    ctx->pc = 0x11FF04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FF04u;
            // 0x11ff08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11FF0Cu;
}
