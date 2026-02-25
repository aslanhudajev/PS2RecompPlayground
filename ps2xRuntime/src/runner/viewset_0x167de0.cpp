#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: viewset
// Address: 0x167de0 - 0x167e5c
void viewset_0x167de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("viewset_0x167de0");
#endif

    ctx->pc = 0x167de0u;

    // 0x167de0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x167de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x167de4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x167de4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167de8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x167de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x167dec: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x167decu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x167df0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x167df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x167df4: 0x24849d70  addiu       $a0, $a0, -0x6290
    ctx->pc = 0x167df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942064));
    // 0x167df8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x167df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x167dfc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x167dfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x167e04: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x167e04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e08: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x167e08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e0c: 0xc04b76a  jal         func_12DDA8
    ctx->pc = 0x167E0Cu;
    SET_GPR_U32(ctx, 31, 0x167E14u);
    ctx->pc = 0x167E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167E0Cu;
            // 0x167e10: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDA8u;
    if (runtime->hasFunction(0x12DDA8u)) {
        auto targetFn = runtime->lookupFunction(0x12DDA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167E14u; }
        if (ctx->pc != 0x167E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x12dda8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167E14u; }
        if (ctx->pc != 0x167E14u) { return; }
    }
    ctx->pc = 0x167E14u;
    // 0x167e14: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x167e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x167e18: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x167e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e1c: 0xc04b76a  jal         func_12DDA8
    ctx->pc = 0x167E1Cu;
    SET_GPR_U32(ctx, 31, 0x167E24u);
    ctx->pc = 0x167E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167E1Cu;
            // 0x167e20: 0x24844c30  addiu       $a0, $a0, 0x4C30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDA8u;
    if (runtime->hasFunction(0x12DDA8u)) {
        auto targetFn = runtime->lookupFunction(0x12DDA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167E24u; }
        if (ctx->pc != 0x167E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x12dda8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167E24u; }
        if (ctx->pc != 0x167E24u) { return; }
    }
    ctx->pc = 0x167E24u;
    // 0x167e24: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x167e24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x167e28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x167e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e2c: 0xc04b76a  jal         func_12DDA8
    ctx->pc = 0x167E2Cu;
    SET_GPR_U32(ctx, 31, 0x167E34u);
    ctx->pc = 0x167E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167E2Cu;
            // 0x167e30: 0x24844c40  addiu       $a0, $a0, 0x4C40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDA8u;
    if (runtime->hasFunction(0x12DDA8u)) {
        auto targetFn = runtime->lookupFunction(0x12DDA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167E34u; }
        if (ctx->pc != 0x167E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x12dda8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167E34u; }
        if (ctx->pc != 0x167E34u) { return; }
    }
    ctx->pc = 0x167E34u;
    // 0x167e34: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x167e34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x167e38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x167e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e3c: 0xc04b76a  jal         func_12DDA8
    ctx->pc = 0x167E3Cu;
    SET_GPR_U32(ctx, 31, 0x167E44u);
    ctx->pc = 0x167E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167E3Cu;
            // 0x167e40: 0x24849d80  addiu       $a0, $a0, -0x6280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDA8u;
    if (runtime->hasFunction(0x12DDA8u)) {
        auto targetFn = runtime->lookupFunction(0x12DDA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167E44u; }
        if (ctx->pc != 0x167E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x12dda8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167E44u; }
        if (ctx->pc != 0x167E44u) { return; }
    }
    ctx->pc = 0x167E44u;
    // 0x167e44: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x167e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167e48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x167e48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167e4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x167e4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167e50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167e50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167e54: 0x3e00008  jr          $ra
    ctx->pc = 0x167E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167E54u;
            // 0x167e58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x167E5Cu;
}
