#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _sysbitMarker
// Address: 0x12a400 - 0x12a444
void _sysbitMarker_0x12a400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_sysbitMarker_0x12a400");
#endif

    ctx->pc = 0x12a400u;

    // 0x12a400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12a400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12a404: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12a404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a408: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12a408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12a40c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x12a40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x12a410: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12a410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12a414: 0xc04a8be  jal         func_12A2F8
    ctx->pc = 0x12A414u;
    SET_GPR_U32(ctx, 31, 0x12A41Cu);
    ctx->pc = 0x12A418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A414u;
            // 0x12a418: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A2F8u;
    if (runtime->hasFunction(0x12A2F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A2F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A41Cu; }
        if (ctx->pc != 0x12A41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitNext_0x12a2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A41Cu; }
        if (ctx->pc != 0x12A41Cu) { return; }
    }
    ctx->pc = 0x12A41Cu;
    // 0x12a41c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12a41cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12a420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a424: 0xc04a8c6  jal         func_12A318
    ctx->pc = 0x12A424u;
    SET_GPR_U32(ctx, 31, 0x12A42Cu);
    ctx->pc = 0x12A428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A424u;
            // 0x12a428: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A318u;
    if (runtime->hasFunction(0x12A318u)) {
        auto targetFn = runtime->lookupFunction(0x12A318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A42Cu; }
        if (ctx->pc != 0x12A42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitFlush_0x12a318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A42Cu; }
        if (ctx->pc != 0x12A42Cu) { return; }
    }
    ctx->pc = 0x12A42Cu;
    // 0x12a42c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12a42cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a430: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12a430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a434: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x12a434u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a438: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12a438u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a43c: 0x3e00008  jr          $ra
    ctx->pc = 0x12A43Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A43Cu;
            // 0x12a440: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12A444u;
}
