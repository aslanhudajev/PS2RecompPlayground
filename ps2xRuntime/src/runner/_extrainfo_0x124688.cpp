#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _extrainfo
// Address: 0x124688 - 0x1246bc
void _extrainfo_0x124688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x124688u;

    // 0x124688: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x124688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12468c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12468Cu;
    {
        const bool branch_taken_0x12468c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12468Cu;
            // 0x124690: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12468c) {
            ctx->pc = 0x1246A0u;
            goto label_1246a0;
        }
    }
    ctx->pc = 0x124694u;
    // 0x124694: 0x0  nop
    ctx->pc = 0x124694u;
    // NOP
label_124698:
    // 0x124698: 0xc048f96  jal         func_123E58
    ctx->pc = 0x124698u;
    SET_GPR_U32(ctx, 31, 0x1246A0u);
    ctx->pc = 0x123E58u;
    if (runtime->hasFunction(0x123E58u)) {
        auto targetFn = runtime->lookupFunction(0x123E58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1246A0u; }
        if (ctx->pc != 0x1246A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x123e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1246A0u; }
        if (ctx->pc != 0x1246A0u) { return; }
    }
    ctx->pc = 0x1246A0u;
label_1246a0:
    // 0x1246a0: 0xc048fdc  jal         func_123F70
    ctx->pc = 0x1246A0u;
    SET_GPR_U32(ctx, 31, 0x1246A8u);
    ctx->pc = 0x1246A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1246A0u;
            // 0x1246a4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F70u;
    if (runtime->hasFunction(0x123F70u)) {
        auto targetFn = runtime->lookupFunction(0x123F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1246A8u; }
        if (ctx->pc != 0x1246A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1246A8u; }
        if (ctx->pc != 0x1246A8u) { return; }
    }
    ctx->pc = 0x1246A8u;
    // 0x1246a8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1246A8u;
    {
        const bool branch_taken_0x1246a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1246ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1246A8u;
            // 0x1246ac: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1246a8) {
            ctx->pc = 0x124698u;
            goto label_124698;
        }
    }
    ctx->pc = 0x1246B0u;
    // 0x1246b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1246b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1246b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1246B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1246B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1246B4u;
            // 0x1246b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124698u: goto label_124698;
            case 0x1246A0u: goto label_1246a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1246BCu;
}
