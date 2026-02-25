#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: POINTS_MOVE_00
// Address: 0x1db170 - 0x1db1f8
void POINTS_MOVE_00_0x1db170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("POINTS_MOVE_00_0x1db170");
#endif

    ctx->pc = 0x1db170u;

    // 0x1db170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1db170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1db174: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1db174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1db178: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1db178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1db17c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1db17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1db180: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1db180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1db184: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1db184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db188: 0xc0409de  jal         func_102778
    ctx->pc = 0x1DB188u;
    SET_GPR_U32(ctx, 31, 0x1DB190u);
    ctx->pc = 0x1DB18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB188u;
            // 0x1db18c: 0x622023  subu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102778u;
    if (runtime->hasFunction(0x102778u)) {
        auto targetFn = runtime->lookupFunction(0x102778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB190u; }
        if (ctx->pc != 0x1DB190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x102778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB190u; }
        if (ctx->pc != 0x1DB190u) { return; }
    }
    ctx->pc = 0x1DB190u;
    // 0x1db190: 0x3c043f84  lui         $a0, 0x3F84
    ctx->pc = 0x1db190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16260 << 16));
    // 0x1db194: 0x3c0347ae  lui         $v1, 0x47AE
    ctx->pc = 0x1db194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18350 << 16));
    // 0x1db198: 0x34847ae1  ori         $a0, $a0, 0x7AE1
    ctx->pc = 0x1db198u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)31457u)));
    // 0x1db19c: 0x3463147b  ori         $v1, $v1, 0x147B
    ctx->pc = 0x1db19cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)5243u)));
    // 0x1db1a0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1db1a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1db1a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1db1a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1a8: 0xc040880  jal         func_102200
    ctx->pc = 0x1DB1A8u;
    SET_GPR_U32(ctx, 31, 0x1DB1B0u);
    ctx->pc = 0x1DB1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB1A8u;
            // 0x1db1ac: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB1B0u; }
        if (ctx->pc != 0x1DB1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB1B0u; }
        if (ctx->pc != 0x1DB1B0u) { return; }
    }
    ctx->pc = 0x1DB1B0u;
    // 0x1db1b0: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1DB1B0u;
    SET_GPR_U32(ctx, 31, 0x1DB1B8u);
    ctx->pc = 0x1DB1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB1B0u;
            // 0x1db1b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB1B8u; }
        if (ctx->pc != 0x1DB1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB1B8u; }
        if (ctx->pc != 0x1DB1B8u) { return; }
    }
    ctx->pc = 0x1DB1B8u;
    // 0x1db1b8: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1db1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db1bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1db1bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1db1c0: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1db1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1db1c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1db1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1db1c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1db1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1db1cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1db1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1db1d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1db1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1db1d4: 0x28610051  slti        $at, $v1, 0x51
    ctx->pc = 0x1db1d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)81) ? 1 : 0);
    // 0x1db1d8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB1D8u;
    {
        const bool branch_taken_0x1db1d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB1D8u;
            // 0x1db1dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db1d8) {
            ctx->pc = 0x1DB1E8u;
            goto label_1db1e8;
        }
    }
    ctx->pc = 0x1DB1E0u;
    // 0x1db1e0: 0xc076e0c  jal         func_1DB830
    ctx->pc = 0x1DB1E0u;
    SET_GPR_U32(ctx, 31, 0x1DB1E8u);
    ctx->pc = 0x1DB830u;
    if (runtime->hasFunction(0x1DB830u)) {
        auto targetFn = runtime->lookupFunction(0x1DB830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB1E8u; }
        if (ctx->pc != 0x1DB1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PointsFree_0x1db830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB1E8u; }
        if (ctx->pc != 0x1DB1E8u) { return; }
    }
    ctx->pc = 0x1DB1E8u;
label_1db1e8:
    // 0x1db1e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1db1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db1ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1db1ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB1F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB1F0u;
            // 0x1db1f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DB1E8u: goto label_1db1e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DB1F8u;
}
