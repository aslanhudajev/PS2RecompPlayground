#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: kputs
// Address: 0x1155a8 - 0x1155cc
void kputs_0x1155a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1155a8u;

    // 0x1155a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1155a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1155ac: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1155acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1155b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1155b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1155b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1155b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1155b8: 0xc0439b4  jal         func_10E6D0
    ctx->pc = 0x1155B8u;
    SET_GPR_U32(ctx, 31, 0x1155C0u);
    ctx->pc = 0x1155BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1155B8u;
            // 0x1155bc: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E6D0u;
    if (runtime->hasFunction(0x10E6D0u)) {
        auto targetFn = runtime->lookupFunction(0x10E6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1155C0u; }
        if (ctx->pc != 0x1155C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Deci2Call_0x10e6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1155C0u; }
        if (ctx->pc != 0x1155C0u) { return; }
    }
    ctx->pc = 0x1155C0u;
    // 0x1155c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1155c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1155c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1155C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1155C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1155C4u;
            // 0x1155c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1155CCu;
}
