#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setlocale
// Address: 0x12fb00 - 0x12fb2c
void setlocale_0x12fb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12fb00u;

    // 0x12fb00: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x12fb00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb04: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x12fb04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x12fb08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12fb08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12fb0c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x12fb0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb10: 0x8c642544  lw          $a0, 0x2544($v1)
    ctx->pc = 0x12fb10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9540)));
    // 0x12fb14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12fb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12fb18: 0xc04be9a  jal         func_12FA68
    ctx->pc = 0x12FB18u;
    SET_GPR_U32(ctx, 31, 0x12FB20u);
    ctx->pc = 0x12FB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FB18u;
            // 0x12fb1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FA68u;
    if (runtime->hasFunction(0x12FA68u)) {
        auto targetFn = runtime->lookupFunction(0x12FA68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FB20u; }
        if (ctx->pc != 0x12FB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _setlocale_r_0x12fa68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FB20u; }
        if (ctx->pc != 0x12FB20u) { return; }
    }
    ctx->pc = 0x12FB20u;
    // 0x12fb20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12fb20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12fb24: 0x3e00008  jr          $ra
    ctx->pc = 0x12FB24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FB24u;
            // 0x12fb28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12FB2Cu;
}
