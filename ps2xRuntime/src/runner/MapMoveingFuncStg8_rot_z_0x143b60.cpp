#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFuncStg8_rot_z
// Address: 0x143b60 - 0x143ba0
void MapMoveingFuncStg8_rot_z_0x143b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFuncStg8_rot_z_0x143b60");
#endif

    ctx->pc = 0x143b60u;

    // 0x143b60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x143b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x143b64: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x143b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x143b68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x143b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x143b6c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x143b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143b70: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x143b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x143b74: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x143B74u;
    SET_GPR_U32(ctx, 31, 0x143B7Cu);
    ctx->pc = 0x143B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143B74u;
            // 0x143b78: 0xdc2595f0  ld          $a1, -0x6A10($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294940144)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143B7Cu; }
        if (ctx->pc != 0x143B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143B7Cu; }
        if (ctx->pc != 0x143B7Cu) { return; }
    }
    ctx->pc = 0x143B7Cu;
    // 0x143b7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x143b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143b80: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x143B80u;
    SET_GPR_U32(ctx, 31, 0x143B88u);
    ctx->pc = 0x143B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143B80u;
            // 0x143b84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143B88u; }
        if (ctx->pc != 0x143B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143B88u; }
        if (ctx->pc != 0x143B88u) { return; }
    }
    ctx->pc = 0x143B88u;
    // 0x143b88: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x143b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x143b8c: 0xc4209c70  lwc1        $f0, -0x6390($at)
    ctx->pc = 0x143b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143b90: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x143b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x143b94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143b98: 0x3e00008  jr          $ra
    ctx->pc = 0x143B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143B98u;
            // 0x143b9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x143BA0u;
}
