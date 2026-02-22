#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _Error1
// Address: 0x11ffe8 - 0x120014
void ps2__Error1_0x11ffe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11ffe8u;

    // 0x11ffe8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x11ffe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ffec: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x11ffecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x11fff0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x11fff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fff4: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x11fff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x11fff8: 0xc04ad3a  jal         func_12B4E8
    ctx->pc = 0x11FFF8u;
    SET_GPR_U32(ctx, 31, 0x120000u);
    ctx->pc = 0x11FFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FFF8u;
            // 0x11fffc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B4E8u;
    if (runtime->hasFunction(0x12B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x12B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120000u; }
        if (ctx->pc != 0x120000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x12b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120000u; }
        if (ctx->pc != 0x120000u) { return; }
    }
    ctx->pc = 0x120000u;
    // 0x120000: 0xc048006  jal         func_120018
    ctx->pc = 0x120000u;
    SET_GPR_U32(ctx, 31, 0x120008u);
    ctx->pc = 0x120004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120000u;
            // 0x120004: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120018u;
    if (runtime->hasFunction(0x120018u)) {
        auto targetFn = runtime->lookupFunction(0x120018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120008u; }
        if (ctx->pc != 0x120008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x120018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120008u; }
        if (ctx->pc != 0x120008u) { return; }
    }
    ctx->pc = 0x120008u;
    // 0x120008: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x120008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x12000c: 0x3e00008  jr          $ra
    ctx->pc = 0x12000Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12000Cu;
            // 0x120010: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x120014u;
}
