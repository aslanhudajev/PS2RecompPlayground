#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFuncStg5_rot_l
// Address: 0x1452c0 - 0x145348
void MapMoveingFuncStg5_rot_l_0x1452c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFuncStg5_rot_l_0x1452c0");
#endif

    ctx->pc = 0x1452c0u;

    // 0x1452c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1452c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1452c4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1452c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1452c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1452c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1452cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1452ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1452d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1452d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1452d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1452d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1452d8: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x1452d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x1452dc: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x1452DCu;
    SET_GPR_U32(ctx, 31, 0x1452E4u);
    ctx->pc = 0x1452E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1452DCu;
            // 0x1452e0: 0xdc2595a0  ld          $a1, -0x6A60($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294940064)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1452E4u; }
        if (ctx->pc != 0x1452E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1452E4u; }
        if (ctx->pc != 0x1452E4u) { return; }
    }
    ctx->pc = 0x1452E4u;
    // 0x1452e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1452e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1452e8: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x1452E8u;
    SET_GPR_U32(ctx, 31, 0x1452F0u);
    ctx->pc = 0x1452ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1452E8u;
            // 0x1452ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1452F0u; }
        if (ctx->pc != 0x1452F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1452F0u; }
        if (ctx->pc != 0x1452F0u) { return; }
    }
    ctx->pc = 0x1452F0u;
    // 0x1452f0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1452f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1452f4: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x1452f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x1452f8: 0xc4229c88  lwc1        $f2, -0x6378($at)
    ctx->pc = 0x1452f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1452fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1452fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x145300: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x145300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x145304: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x145304u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145308: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x145308u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x14530c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x14530cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x145310: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x145310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x145314: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x145314u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x145318: 0xe4610124  swc1        $f1, 0x124($v1)
    ctx->pc = 0x145318u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x14531c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x14531cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x145320: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x145320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145324: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x145324u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145328: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x145328u;
    {
        const bool branch_taken_0x145328 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14532Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145328u;
            // 0x14532c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145328) {
            ctx->pc = 0x145338u;
            goto label_145338;
        }
    }
    ctx->pc = 0x145330u;
    // 0x145330: 0xc053348  jal         func_14CD20
    ctx->pc = 0x145330u;
    SET_GPR_U32(ctx, 31, 0x145338u);
    ctx->pc = 0x14CD20u;
    if (runtime->hasFunction(0x14CD20u)) {
        auto targetFn = runtime->lookupFunction(0x14CD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145338u; }
        if (ctx->pc != 0x145338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemFree_0x14cd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145338u; }
        if (ctx->pc != 0x145338u) { return; }
    }
    ctx->pc = 0x145338u;
label_145338:
    // 0x145338: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x145338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14533c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14533cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145340: 0x3e00008  jr          $ra
    ctx->pc = 0x145340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145340u;
            // 0x145344: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x145338u: goto label_145338;
            default: break;
        }
        return;
    }
    ctx->pc = 0x145348u;
}
