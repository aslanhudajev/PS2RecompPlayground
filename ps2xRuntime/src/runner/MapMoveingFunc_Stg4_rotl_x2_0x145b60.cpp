#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFunc_Stg4_rotl_x2
// Address: 0x145b60 - 0x145bf0
void MapMoveingFunc_Stg4_rotl_x2_0x145b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFunc_Stg4_rotl_x2_0x145b60");
#endif

    ctx->pc = 0x145b60u;

    // 0x145b60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x145b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x145b64: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x145b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x145b68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x145b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x145b6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x145b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x145b70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x145b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x145b74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x145b74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145b78: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x145b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x145b7c: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x145B7Cu;
    SET_GPR_U32(ctx, 31, 0x145B84u);
    ctx->pc = 0x145B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145B7Cu;
            // 0x145b80: 0xdc259560  ld          $a1, -0x6AA0($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294940000)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145B84u; }
        if (ctx->pc != 0x145B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145B84u; }
        if (ctx->pc != 0x145B84u) { return; }
    }
    ctx->pc = 0x145B84u;
    // 0x145b84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x145b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145b88: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x145B88u;
    SET_GPR_U32(ctx, 31, 0x145B90u);
    ctx->pc = 0x145B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145B88u;
            // 0x145b8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145B90u; }
        if (ctx->pc != 0x145B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145B90u; }
        if (ctx->pc != 0x145B90u) { return; }
    }
    ctx->pc = 0x145B90u;
    // 0x145b90: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x145b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x145b94: 0xc4209c98  lwc1        $f0, -0x6368($at)
    ctx->pc = 0x145b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145b98: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x145b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x145b9c: 0xc07893c  jal         func_1E24F0
    ctx->pc = 0x145B9Cu;
    SET_GPR_U32(ctx, 31, 0x145BA4u);
    ctx->pc = 0x145BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145B9Cu;
            // 0x145ba0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E24F0u;
    if (runtime->hasFunction(0x1E24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145BA4u; }
        if (ctx->pc != 0x145BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapLightColorControl_0x1e24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145BA4u; }
        if (ctx->pc != 0x145BA4u) { return; }
    }
    ctx->pc = 0x145BA4u;
    // 0x145ba4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x145ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x145ba8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x145ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x145bac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x145bacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x145bb0: 0x3c034496  lui         $v1, 0x4496
    ctx->pc = 0x145bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17558 << 16));
    // 0x145bb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x145bb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145bb8: 0xc4820124  lwc1        $f2, 0x124($a0)
    ctx->pc = 0x145bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x145bbc: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x145bbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x145bc0: 0xe4810124  swc1        $f1, 0x124($a0)
    ctx->pc = 0x145bc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x145bc4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x145bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x145bc8: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x145bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145bcc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x145bccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145bd0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x145BD0u;
    {
        const bool branch_taken_0x145bd0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x145BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145BD0u;
            // 0x145bd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145bd0) {
            ctx->pc = 0x145BE0u;
            goto label_145be0;
        }
    }
    ctx->pc = 0x145BD8u;
    // 0x145bd8: 0xc053348  jal         func_14CD20
    ctx->pc = 0x145BD8u;
    SET_GPR_U32(ctx, 31, 0x145BE0u);
    ctx->pc = 0x14CD20u;
    if (runtime->hasFunction(0x14CD20u)) {
        auto targetFn = runtime->lookupFunction(0x14CD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145BE0u; }
        if (ctx->pc != 0x145BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemFree_0x14cd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145BE0u; }
        if (ctx->pc != 0x145BE0u) { return; }
    }
    ctx->pc = 0x145BE0u;
label_145be0:
    // 0x145be0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x145be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145be4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x145be4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145be8: 0x3e00008  jr          $ra
    ctx->pc = 0x145BE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145BE8u;
            // 0x145bec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x145BE0u: goto label_145be0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x145BF0u;
}
