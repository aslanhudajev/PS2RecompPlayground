#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: kill
// Address: 0x10e9d0 - 0x10e9f8
void kill_0x10e9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e9d0u;

    // 0x10e9d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10e9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10e9d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10e9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10e9d8: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E9D8u;
    {
        const bool branch_taken_0x10e9d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x10E9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E9D8u;
            // 0x10e9dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e9d8) {
            ctx->pc = 0x10E9E8u;
            goto label_10e9e8;
        }
    }
    ctx->pc = 0x10E9E0u;
    // 0x10e9e0: 0xc0437b0  jal         func_10DEC0
    ctx->pc = 0x10E9E0u;
    SET_GPR_U32(ctx, 31, 0x10E9E8u);
    ctx->pc = 0x10E9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E9E0u;
            // 0x10e9e4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DEC0u;
    if (runtime->hasFunction(0x10DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x10DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E9E8u; }
        if (ctx->pc != 0x10E9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Exit_0x10dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E9E8u; }
        if (ctx->pc != 0x10E9E8u) { return; }
    }
    ctx->pc = 0x10E9E8u;
label_10e9e8:
    // 0x10e9e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e9ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10e9ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x10E9F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E9F0u;
            // 0x10e9f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10E9E8u: goto label_10e9e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10E9F8u;
}
