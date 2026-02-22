#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sysbitGet
// Address: 0x125f98 - 0x125fe4
void _sysbitGet_0x125f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x125f98u;

    // 0x125f98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x125f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x125f9c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x125f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x125fa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x125fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x125fa4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x125fa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125fa8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x125fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x125fac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x125facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x125fb0: 0xc0497b8  jal         func_125EE0
    ctx->pc = 0x125FB0u;
    SET_GPR_U32(ctx, 31, 0x125FB8u);
    ctx->pc = 0x125FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125FB0u;
            // 0x125fb4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125EE0u;
    if (runtime->hasFunction(0x125EE0u)) {
        auto targetFn = runtime->lookupFunction(0x125EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125FB8u; }
        if (ctx->pc != 0x125FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitNext_0x125ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125FB8u; }
        if (ctx->pc != 0x125FB8u) { return; }
    }
    ctx->pc = 0x125FB8u;
    // 0x125fb8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x125fb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125fbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x125fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125fc0: 0xc0497c0  jal         func_125F00
    ctx->pc = 0x125FC0u;
    SET_GPR_U32(ctx, 31, 0x125FC8u);
    ctx->pc = 0x125FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125FC0u;
            // 0x125fc4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F00u;
    if (runtime->hasFunction(0x125F00u)) {
        auto targetFn = runtime->lookupFunction(0x125F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125FC8u; }
        if (ctx->pc != 0x125FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitFlush_0x125f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125FC8u; }
        if (ctx->pc != 0x125FC8u) { return; }
    }
    ctx->pc = 0x125FC8u;
    // 0x125fc8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x125fc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125fcc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x125fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x125fd0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x125fd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125fd4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x125fd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125fd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x125fd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x125FDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125FDCu;
            // 0x125fe0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x125FE4u;
}
