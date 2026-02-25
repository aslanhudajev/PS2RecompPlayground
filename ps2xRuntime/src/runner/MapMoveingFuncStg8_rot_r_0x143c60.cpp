#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFuncStg8_rot_r
// Address: 0x143c60 - 0x143cc0
void MapMoveingFuncStg8_rot_r_0x143c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFuncStg8_rot_r_0x143c60");
#endif

    ctx->pc = 0x143c60u;

    // 0x143c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x143c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x143c64: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x143c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x143c68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x143c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x143c6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x143c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x143c70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x143c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143c74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x143c74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143c78: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x143c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x143c7c: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x143C7Cu;
    SET_GPR_U32(ctx, 31, 0x143C84u);
    ctx->pc = 0x143C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143C7Cu;
            // 0x143c80: 0xdc2595d8  ld          $a1, -0x6A28($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294940120)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143C84u; }
        if (ctx->pc != 0x143C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143C84u; }
        if (ctx->pc != 0x143C84u) { return; }
    }
    ctx->pc = 0x143C84u;
    // 0x143c84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x143c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143c88: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x143C88u;
    SET_GPR_U32(ctx, 31, 0x143C90u);
    ctx->pc = 0x143C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143C88u;
            // 0x143c8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143C90u; }
        if (ctx->pc != 0x143C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143C90u; }
        if (ctx->pc != 0x143C90u) { return; }
    }
    ctx->pc = 0x143C90u;
    // 0x143c90: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x143c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x143c94: 0xc4209c70  lwc1        $f0, -0x6390($at)
    ctx->pc = 0x143c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143c98: 0xc0788f8  jal         func_1E23E0
    ctx->pc = 0x143C98u;
    SET_GPR_U32(ctx, 31, 0x143CA0u);
    ctx->pc = 0x143C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143C98u;
            // 0x143c9c: 0xe4400014  swc1        $f0, 0x14($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23E0u;
    if (runtime->hasFunction(0x1E23E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143CA0u; }
        if (ctx->pc != 0x143CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isstage8bossbroken_0x1e23e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143CA0u; }
        if (ctx->pc != 0x143CA0u) { return; }
    }
    ctx->pc = 0x143CA0u;
    // 0x143ca0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143CA0u;
    {
        const bool branch_taken_0x143ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143CA0u;
            // 0x143ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143ca0) {
            ctx->pc = 0x143CB0u;
            goto label_143cb0;
        }
    }
    ctx->pc = 0x143CA8u;
    // 0x143ca8: 0xc053348  jal         func_14CD20
    ctx->pc = 0x143CA8u;
    SET_GPR_U32(ctx, 31, 0x143CB0u);
    ctx->pc = 0x14CD20u;
    if (runtime->hasFunction(0x14CD20u)) {
        auto targetFn = runtime->lookupFunction(0x14CD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143CB0u; }
        if (ctx->pc != 0x143CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemFree_0x14cd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143CB0u; }
        if (ctx->pc != 0x143CB0u) { return; }
    }
    ctx->pc = 0x143CB0u;
label_143cb0:
    // 0x143cb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x143cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143cb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143cb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x143CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143CB8u;
            // 0x143cbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x143CB0u: goto label_143cb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x143CC0u;
}
