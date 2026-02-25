#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFuncStg5_rot_r
// Address: 0x145230 - 0x1452b8
void MapMoveingFuncStg5_rot_r_0x145230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFuncStg5_rot_r_0x145230");
#endif

    ctx->pc = 0x145230u;

    // 0x145230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x145230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x145234: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x145234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x145238: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x145238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14523c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14523cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x145240: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x145240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x145244: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x145244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145248: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x145248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x14524c: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x14524Cu;
    SET_GPR_U32(ctx, 31, 0x145254u);
    ctx->pc = 0x145250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14524Cu;
            // 0x145250: 0xdc2595a8  ld          $a1, -0x6A58($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294940072)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145254u; }
        if (ctx->pc != 0x145254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145254u; }
        if (ctx->pc != 0x145254u) { return; }
    }
    ctx->pc = 0x145254u;
    // 0x145254: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x145254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145258: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x145258u;
    SET_GPR_U32(ctx, 31, 0x145260u);
    ctx->pc = 0x14525Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145258u;
            // 0x14525c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145260u; }
        if (ctx->pc != 0x145260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145260u; }
        if (ctx->pc != 0x145260u) { return; }
    }
    ctx->pc = 0x145260u;
    // 0x145260: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x145260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x145264: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x145264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x145268: 0xc4229c80  lwc1        $f2, -0x6380($at)
    ctx->pc = 0x145268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14526c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14526cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x145270: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x145270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x145274: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x145274u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145278: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x145278u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x14527c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x14527cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x145280: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x145280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x145284: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x145284u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x145288: 0xe4610124  swc1        $f1, 0x124($v1)
    ctx->pc = 0x145288u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x14528c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x14528cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x145290: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x145290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145294: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x145294u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145298: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x145298u;
    {
        const bool branch_taken_0x145298 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14529Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145298u;
            // 0x14529c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145298) {
            ctx->pc = 0x1452A8u;
            goto label_1452a8;
        }
    }
    ctx->pc = 0x1452A0u;
    // 0x1452a0: 0xc053348  jal         func_14CD20
    ctx->pc = 0x1452A0u;
    SET_GPR_U32(ctx, 31, 0x1452A8u);
    ctx->pc = 0x14CD20u;
    if (runtime->hasFunction(0x14CD20u)) {
        auto targetFn = runtime->lookupFunction(0x14CD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1452A8u; }
        if (ctx->pc != 0x1452A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemFree_0x14cd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1452A8u; }
        if (ctx->pc != 0x1452A8u) { return; }
    }
    ctx->pc = 0x1452A8u;
label_1452a8:
    // 0x1452a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1452a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1452ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1452acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1452b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1452B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1452B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1452B0u;
            // 0x1452b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1452A8u: goto label_1452a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1452B8u;
}
