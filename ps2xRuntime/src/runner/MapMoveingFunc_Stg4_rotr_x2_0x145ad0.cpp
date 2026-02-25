#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFunc_Stg4_rotr_x2
// Address: 0x145ad0 - 0x145b60
void MapMoveingFunc_Stg4_rotr_x2_0x145ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFunc_Stg4_rotr_x2_0x145ad0");
#endif

    ctx->pc = 0x145ad0u;

    // 0x145ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x145ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x145ad4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x145ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x145ad8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x145ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x145adc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x145adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x145ae0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x145ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x145ae4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x145ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145ae8: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x145ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x145aec: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x145AECu;
    SET_GPR_U32(ctx, 31, 0x145AF4u);
    ctx->pc = 0x145AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145AECu;
            // 0x145af0: 0xdc259568  ld          $a1, -0x6A98($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294940008)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145AF4u; }
        if (ctx->pc != 0x145AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145AF4u; }
        if (ctx->pc != 0x145AF4u) { return; }
    }
    ctx->pc = 0x145AF4u;
    // 0x145af4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x145af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145af8: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x145AF8u;
    SET_GPR_U32(ctx, 31, 0x145B00u);
    ctx->pc = 0x145AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145AF8u;
            // 0x145afc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145B00u; }
        if (ctx->pc != 0x145B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145B00u; }
        if (ctx->pc != 0x145B00u) { return; }
    }
    ctx->pc = 0x145B00u;
    // 0x145b00: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x145b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x145b04: 0xc4209c90  lwc1        $f0, -0x6370($at)
    ctx->pc = 0x145b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145b08: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x145b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x145b0c: 0xc07893c  jal         func_1E24F0
    ctx->pc = 0x145B0Cu;
    SET_GPR_U32(ctx, 31, 0x145B14u);
    ctx->pc = 0x145B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145B0Cu;
            // 0x145b10: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E24F0u;
    if (runtime->hasFunction(0x1E24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145B14u; }
        if (ctx->pc != 0x145B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapLightColorControl_0x1e24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145B14u; }
        if (ctx->pc != 0x145B14u) { return; }
    }
    ctx->pc = 0x145B14u;
    // 0x145b14: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x145b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x145b18: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x145b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x145b1c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x145b1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x145b20: 0x3c034496  lui         $v1, 0x4496
    ctx->pc = 0x145b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17558 << 16));
    // 0x145b24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x145b24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145b28: 0xc4820124  lwc1        $f2, 0x124($a0)
    ctx->pc = 0x145b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x145b2c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x145b2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x145b30: 0xe4810124  swc1        $f1, 0x124($a0)
    ctx->pc = 0x145b30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x145b34: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x145b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x145b38: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x145b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145b3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x145b3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145b40: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x145B40u;
    {
        const bool branch_taken_0x145b40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x145B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145B40u;
            // 0x145b44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145b40) {
            ctx->pc = 0x145B50u;
            goto label_145b50;
        }
    }
    ctx->pc = 0x145B48u;
    // 0x145b48: 0xc053348  jal         func_14CD20
    ctx->pc = 0x145B48u;
    SET_GPR_U32(ctx, 31, 0x145B50u);
    ctx->pc = 0x14CD20u;
    if (runtime->hasFunction(0x14CD20u)) {
        auto targetFn = runtime->lookupFunction(0x14CD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145B50u; }
        if (ctx->pc != 0x145B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemFree_0x14cd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145B50u; }
        if (ctx->pc != 0x145B50u) { return; }
    }
    ctx->pc = 0x145B50u;
label_145b50:
    // 0x145b50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x145b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145b54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x145b54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145b58: 0x3e00008  jr          $ra
    ctx->pc = 0x145B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145B58u;
            // 0x145b5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x145B50u: goto label_145b50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x145B60u;
}
