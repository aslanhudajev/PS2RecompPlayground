#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFunc_Stg4_rotr
// Address: 0x145bf0 - 0x145c80
void MapMoveingFunc_Stg4_rotr_0x145bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFunc_Stg4_rotr_0x145bf0");
#endif

    ctx->pc = 0x145bf0u;

    // 0x145bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x145bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x145bf4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x145bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x145bf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x145bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x145bfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x145bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x145c00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x145c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x145c04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x145c04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145c08: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x145c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x145c0c: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x145C0Cu;
    SET_GPR_U32(ctx, 31, 0x145C14u);
    ctx->pc = 0x145C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145C0Cu;
            // 0x145c10: 0xdc259558  ld          $a1, -0x6AA8($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294939992)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C14u; }
        if (ctx->pc != 0x145C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C14u; }
        if (ctx->pc != 0x145C14u) { return; }
    }
    ctx->pc = 0x145C14u;
    // 0x145c14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x145c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145c18: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x145C18u;
    SET_GPR_U32(ctx, 31, 0x145C20u);
    ctx->pc = 0x145C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145C18u;
            // 0x145c1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C20u; }
        if (ctx->pc != 0x145C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C20u; }
        if (ctx->pc != 0x145C20u) { return; }
    }
    ctx->pc = 0x145C20u;
    // 0x145c20: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x145c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x145c24: 0xc4209ca0  lwc1        $f0, -0x6360($at)
    ctx->pc = 0x145c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145c28: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x145c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x145c2c: 0xc07893c  jal         func_1E24F0
    ctx->pc = 0x145C2Cu;
    SET_GPR_U32(ctx, 31, 0x145C34u);
    ctx->pc = 0x145C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145C2Cu;
            // 0x145c30: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E24F0u;
    if (runtime->hasFunction(0x1E24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C34u; }
        if (ctx->pc != 0x145C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapLightColorControl_0x1e24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C34u; }
        if (ctx->pc != 0x145C34u) { return; }
    }
    ctx->pc = 0x145C34u;
    // 0x145c34: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x145c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x145c38: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x145c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x145c3c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x145c3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x145c40: 0x3c034496  lui         $v1, 0x4496
    ctx->pc = 0x145c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17558 << 16));
    // 0x145c44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x145c44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145c48: 0xc4820124  lwc1        $f2, 0x124($a0)
    ctx->pc = 0x145c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x145c4c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x145c4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x145c50: 0xe4810124  swc1        $f1, 0x124($a0)
    ctx->pc = 0x145c50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x145c54: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x145c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x145c58: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x145c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145c5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x145c5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145c60: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x145C60u;
    {
        const bool branch_taken_0x145c60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x145C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145C60u;
            // 0x145c64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145c60) {
            ctx->pc = 0x145C70u;
            goto label_145c70;
        }
    }
    ctx->pc = 0x145C68u;
    // 0x145c68: 0xc053348  jal         func_14CD20
    ctx->pc = 0x145C68u;
    SET_GPR_U32(ctx, 31, 0x145C70u);
    ctx->pc = 0x14CD20u;
    if (runtime->hasFunction(0x14CD20u)) {
        auto targetFn = runtime->lookupFunction(0x14CD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C70u; }
        if (ctx->pc != 0x145C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemFree_0x14cd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C70u; }
        if (ctx->pc != 0x145C70u) { return; }
    }
    ctx->pc = 0x145C70u;
label_145c70:
    // 0x145c70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x145c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145c74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x145c74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145c78: 0x3e00008  jr          $ra
    ctx->pc = 0x145C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145C78u;
            // 0x145c7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x145C70u: goto label_145c70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x145C80u;
}
