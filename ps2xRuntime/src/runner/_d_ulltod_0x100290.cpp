#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _d_ulltod
// Address: 0x100290 - 0x1002dc
void _d_ulltod_0x100290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_d_ulltod_0x100290");
#endif

    ctx->pc = 0x100290u;

    // 0x100290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x100294: 0x18800006  blez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x100294u;
    {
        const bool branch_taken_0x100294 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x100298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100294u;
            // 0x100298: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100294) {
            ctx->pc = 0x1002B0u;
            goto label_1002b0;
        }
    }
    ctx->pc = 0x10029Cu;
    // 0x10029c: 0xc0402b0  jal         func_100AC0
    ctx->pc = 0x10029Cu;
    SET_GPR_U32(ctx, 31, 0x1002A4u);
    ctx->pc = 0x100AC0u;
    if (runtime->hasFunction(0x100AC0u)) {
        auto targetFn = runtime->lookupFunction(0x100AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1002A4u; }
        if (ctx->pc != 0x1002A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___floatdidf_0x100ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1002A4u; }
        if (ctx->pc != 0x1002A4u) { return; }
    }
    ctx->pc = 0x1002A4u;
    // 0x1002a4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1002A4u;
    {
        const bool branch_taken_0x1002a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1002a4) {
            ctx->pc = 0x1002D0u;
            goto label_1002d0;
        }
    }
    ctx->pc = 0x1002ACu;
    // 0x1002ac: 0x0  nop
    ctx->pc = 0x1002acu;
    // NOP
label_1002b0:
    // 0x1002b0: 0x4187a  dsrl        $v1, $a0, 1
    ctx->pc = 0x1002b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) >> 1);
    // 0x1002b4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1002b4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
    // 0x1002b8: 0xc0402b0  jal         func_100AC0
    ctx->pc = 0x1002B8u;
    SET_GPR_U32(ctx, 31, 0x1002C0u);
    ctx->pc = 0x1002BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1002B8u;
            // 0x1002bc: 0x622025  or          $a0, $v1, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AC0u;
    if (runtime->hasFunction(0x100AC0u)) {
        auto targetFn = runtime->lookupFunction(0x100AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1002C0u; }
        if (ctx->pc != 0x1002C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___floatdidf_0x100ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1002C0u; }
        if (ctx->pc != 0x1002C0u) { return; }
    }
    ctx->pc = 0x1002C0u;
    // 0x1002c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1002c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1002c4: 0xc040850  jal         func_102140
    ctx->pc = 0x1002C4u;
    SET_GPR_U32(ctx, 31, 0x1002CCu);
    ctx->pc = 0x1002C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1002C4u;
            // 0x1002c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102140u;
    if (runtime->hasFunction(0x102140u)) {
        auto targetFn = runtime->lookupFunction(0x102140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1002CCu; }
        if (ctx->pc != 0x1002CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x102140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1002CCu; }
        if (ctx->pc != 0x1002CCu) { return; }
    }
    ctx->pc = 0x1002CCu;
    // 0x1002cc: 0x0  nop
    ctx->pc = 0x1002ccu;
    // NOP
label_1002d0:
    // 0x1002d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1002d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1002d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1002D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1002D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1002D4u;
            // 0x1002d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1002B0u: goto label_1002b0;
            case 0x1002D0u: goto label_1002d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1002DCu;
}
