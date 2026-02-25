#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFuncStg8_rot_l
// Address: 0x143cc0 - 0x143d20
void MapMoveingFuncStg8_rot_l_0x143cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFuncStg8_rot_l_0x143cc0");
#endif

    ctx->pc = 0x143cc0u;

    // 0x143cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x143cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x143cc4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x143cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x143cc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x143cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x143ccc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x143cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x143cd0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x143cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143cd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x143cd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143cd8: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x143cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x143cdc: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x143CDCu;
    SET_GPR_U32(ctx, 31, 0x143CE4u);
    ctx->pc = 0x143CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143CDCu;
            // 0x143ce0: 0xdc2595d0  ld          $a1, -0x6A30($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294940112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143CE4u; }
        if (ctx->pc != 0x143CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143CE4u; }
        if (ctx->pc != 0x143CE4u) { return; }
    }
    ctx->pc = 0x143CE4u;
    // 0x143ce4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x143ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143ce8: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x143CE8u;
    SET_GPR_U32(ctx, 31, 0x143CF0u);
    ctx->pc = 0x143CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143CE8u;
            // 0x143cec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143CF0u; }
        if (ctx->pc != 0x143CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143CF0u; }
        if (ctx->pc != 0x143CF0u) { return; }
    }
    ctx->pc = 0x143CF0u;
    // 0x143cf0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x143cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x143cf4: 0xc4209c78  lwc1        $f0, -0x6388($at)
    ctx->pc = 0x143cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143cf8: 0xc0788f8  jal         func_1E23E0
    ctx->pc = 0x143CF8u;
    SET_GPR_U32(ctx, 31, 0x143D00u);
    ctx->pc = 0x143CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143CF8u;
            // 0x143cfc: 0xe4400014  swc1        $f0, 0x14($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23E0u;
    if (runtime->hasFunction(0x1E23E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143D00u; }
        if (ctx->pc != 0x143D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isstage8bossbroken_0x1e23e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143D00u; }
        if (ctx->pc != 0x143D00u) { return; }
    }
    ctx->pc = 0x143D00u;
    // 0x143d00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143D00u;
    {
        const bool branch_taken_0x143d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143D00u;
            // 0x143d04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143d00) {
            ctx->pc = 0x143D10u;
            goto label_143d10;
        }
    }
    ctx->pc = 0x143D08u;
    // 0x143d08: 0xc053348  jal         func_14CD20
    ctx->pc = 0x143D08u;
    SET_GPR_U32(ctx, 31, 0x143D10u);
    ctx->pc = 0x14CD20u;
    if (runtime->hasFunction(0x14CD20u)) {
        auto targetFn = runtime->lookupFunction(0x14CD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143D10u; }
        if (ctx->pc != 0x143D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemFree_0x14cd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143D10u; }
        if (ctx->pc != 0x143D10u) { return; }
    }
    ctx->pc = 0x143D10u;
label_143d10:
    // 0x143d10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x143d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143d14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143d18: 0x3e00008  jr          $ra
    ctx->pc = 0x143D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143D18u;
            // 0x143d1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x143D10u: goto label_143d10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x143D20u;
}
