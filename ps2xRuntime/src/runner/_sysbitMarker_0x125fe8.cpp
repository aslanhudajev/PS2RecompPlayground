#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sysbitMarker
// Address: 0x125fe8 - 0x12602c
void _sysbitMarker_0x125fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x125fe8u;

    // 0x125fe8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x125fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x125fec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x125fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125ff0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x125ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x125ff4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x125ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x125ff8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x125ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x125ffc: 0xc0497b8  jal         func_125EE0
    ctx->pc = 0x125FFCu;
    SET_GPR_U32(ctx, 31, 0x126004u);
    ctx->pc = 0x126000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125FFCu;
            // 0x126000: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125EE0u;
    if (runtime->hasFunction(0x125EE0u)) {
        auto targetFn = runtime->lookupFunction(0x125EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126004u; }
        if (ctx->pc != 0x126004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitNext_0x125ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126004u; }
        if (ctx->pc != 0x126004u) { return; }
    }
    ctx->pc = 0x126004u;
    // 0x126004: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x126004u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x126008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12600c: 0xc0497c0  jal         func_125F00
    ctx->pc = 0x12600Cu;
    SET_GPR_U32(ctx, 31, 0x126014u);
    ctx->pc = 0x126010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12600Cu;
            // 0x126010: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F00u;
    if (runtime->hasFunction(0x125F00u)) {
        auto targetFn = runtime->lookupFunction(0x125F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126014u; }
        if (ctx->pc != 0x126014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitFlush_0x125f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126014u; }
        if (ctx->pc != 0x126014u) { return; }
    }
    ctx->pc = 0x126014u;
    // 0x126014: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x126014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126018: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x126018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12601c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x12601cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126020: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x126020u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126024: 0x3e00008  jr          $ra
    ctx->pc = 0x126024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126024u;
            // 0x126028: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12602Cu;
}
