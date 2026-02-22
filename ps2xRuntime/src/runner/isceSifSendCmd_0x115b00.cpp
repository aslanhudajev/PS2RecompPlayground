#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: isceSifSendCmd
// Address: 0x115b00 - 0x115b3c
void isceSifSendCmd_0x115b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x115b00u;

    // 0x115b00: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x115b00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b04: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x115b04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b08: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x115b08u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b0c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x115b0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x115b10: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x115b10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b14: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x115b14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x115b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x115b1c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x115b1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b20: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x115b20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b24: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x115b24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b28: 0xc045662  jal         func_115988
    ctx->pc = 0x115B28u;
    SET_GPR_U32(ctx, 31, 0x115B30u);
    ctx->pc = 0x115B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x115B28u;
            // 0x115b2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115988u;
    if (runtime->hasFunction(0x115988u)) {
        auto targetFn = runtime->lookupFunction(0x115988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115B30u; }
        if (ctx->pc != 0x115B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceSifSendCmd_0x115988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115B30u; }
        if (ctx->pc != 0x115B30u) { return; }
    }
    ctx->pc = 0x115B30u;
    // 0x115b30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x115b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115b34: 0x3e00008  jr          $ra
    ctx->pc = 0x115B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115B34u;
            // 0x115b38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x115B3Cu;
}
