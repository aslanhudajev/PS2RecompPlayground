#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFunc_Stg4_rotl
// Address: 0x145c80 - 0x145d10
void MapMoveingFunc_Stg4_rotl_0x145c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFunc_Stg4_rotl_0x145c80");
#endif

    ctx->pc = 0x145c80u;

    // 0x145c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x145c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x145c84: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x145c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x145c88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x145c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x145c8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x145c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x145c90: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x145c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x145c94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x145c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145c98: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x145c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x145c9c: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x145C9Cu;
    SET_GPR_U32(ctx, 31, 0x145CA4u);
    ctx->pc = 0x145CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145C9Cu;
            // 0x145ca0: 0xdc259550  ld          $a1, -0x6AB0($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294939984)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145CA4u; }
        if (ctx->pc != 0x145CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145CA4u; }
        if (ctx->pc != 0x145CA4u) { return; }
    }
    ctx->pc = 0x145CA4u;
    // 0x145ca4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x145ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145ca8: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x145CA8u;
    SET_GPR_U32(ctx, 31, 0x145CB0u);
    ctx->pc = 0x145CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145CA8u;
            // 0x145cac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145CB0u; }
        if (ctx->pc != 0x145CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145CB0u; }
        if (ctx->pc != 0x145CB0u) { return; }
    }
    ctx->pc = 0x145CB0u;
    // 0x145cb0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x145cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x145cb4: 0xc4209ca8  lwc1        $f0, -0x6358($at)
    ctx->pc = 0x145cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145cb8: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x145cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x145cbc: 0xc07893c  jal         func_1E24F0
    ctx->pc = 0x145CBCu;
    SET_GPR_U32(ctx, 31, 0x145CC4u);
    ctx->pc = 0x145CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145CBCu;
            // 0x145cc0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E24F0u;
    if (runtime->hasFunction(0x1E24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145CC4u; }
        if (ctx->pc != 0x145CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapLightColorControl_0x1e24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145CC4u; }
        if (ctx->pc != 0x145CC4u) { return; }
    }
    ctx->pc = 0x145CC4u;
    // 0x145cc4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x145cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x145cc8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x145cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x145ccc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x145cccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x145cd0: 0x3c034496  lui         $v1, 0x4496
    ctx->pc = 0x145cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17558 << 16));
    // 0x145cd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x145cd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145cd8: 0xc4820124  lwc1        $f2, 0x124($a0)
    ctx->pc = 0x145cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x145cdc: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x145cdcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x145ce0: 0xe4810124  swc1        $f1, 0x124($a0)
    ctx->pc = 0x145ce0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x145ce4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x145ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x145ce8: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x145ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145cec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x145cecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145cf0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x145CF0u;
    {
        const bool branch_taken_0x145cf0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x145CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145CF0u;
            // 0x145cf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145cf0) {
            ctx->pc = 0x145D00u;
            goto label_145d00;
        }
    }
    ctx->pc = 0x145CF8u;
    // 0x145cf8: 0xc053348  jal         func_14CD20
    ctx->pc = 0x145CF8u;
    SET_GPR_U32(ctx, 31, 0x145D00u);
    ctx->pc = 0x14CD20u;
    if (runtime->hasFunction(0x14CD20u)) {
        auto targetFn = runtime->lookupFunction(0x14CD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D00u; }
        if (ctx->pc != 0x145D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemFree_0x14cd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D00u; }
        if (ctx->pc != 0x145D00u) { return; }
    }
    ctx->pc = 0x145D00u;
label_145d00:
    // 0x145d00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x145d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145d04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x145d04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145d08: 0x3e00008  jr          $ra
    ctx->pc = 0x145D08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145D08u;
            // 0x145d0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x145D00u: goto label_145d00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x145D10u;
}
