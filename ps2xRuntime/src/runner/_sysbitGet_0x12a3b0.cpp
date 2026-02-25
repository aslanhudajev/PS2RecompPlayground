#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _sysbitGet
// Address: 0x12a3b0 - 0x12a3fc
void _sysbitGet_0x12a3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_sysbitGet_0x12a3b0");
#endif

    ctx->pc = 0x12a3b0u;

    // 0x12a3b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12a3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12a3b4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x12a3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x12a3b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12a3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12a3bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12a3bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a3c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12a3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12a3c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12a3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12a3c8: 0xc04a8be  jal         func_12A2F8
    ctx->pc = 0x12A3C8u;
    SET_GPR_U32(ctx, 31, 0x12A3D0u);
    ctx->pc = 0x12A3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A3C8u;
            // 0x12a3cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A2F8u;
    if (runtime->hasFunction(0x12A2F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A2F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A3D0u; }
        if (ctx->pc != 0x12A3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitNext_0x12a2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A3D0u; }
        if (ctx->pc != 0x12A3D0u) { return; }
    }
    ctx->pc = 0x12A3D0u;
    // 0x12a3d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12a3d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a3d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12a3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a3d8: 0xc04a8c6  jal         func_12A318
    ctx->pc = 0x12A3D8u;
    SET_GPR_U32(ctx, 31, 0x12A3E0u);
    ctx->pc = 0x12A3DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A3D8u;
            // 0x12a3dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A318u;
    if (runtime->hasFunction(0x12A318u)) {
        auto targetFn = runtime->lookupFunction(0x12A318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A3E0u; }
        if (ctx->pc != 0x12A3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitFlush_0x12a318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A3E0u; }
        if (ctx->pc != 0x12A3E0u) { return; }
    }
    ctx->pc = 0x12A3E0u;
    // 0x12a3e0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x12a3e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a3e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12a3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12a3e8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12a3e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a3ec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x12a3ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a3f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12a3f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x12A3F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A3F4u;
            // 0x12a3f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12A3FCu;
}
