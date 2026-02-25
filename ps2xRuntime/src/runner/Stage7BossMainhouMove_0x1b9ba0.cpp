#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage7BossMainhouMove
// Address: 0x1b9ba0 - 0x1ba1b4
void Stage7BossMainhouMove_0x1b9ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage7BossMainhouMove_0x1b9ba0");
#endif

    ctx->pc = 0x1b9ba0u;

    // 0x1b9ba0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1b9ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1b9ba4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1b9ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1b9ba8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b9ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1b9bac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b9bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b9bb0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b9bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b9bb4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b9bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b9bb8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b9bb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9bbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b9bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b9bc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b9bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b9bc4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1b9bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b9bc8: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x1b9bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x1b9bcc: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x1B9BCCu;
    SET_GPR_U32(ctx, 31, 0x1B9BD4u);
    ctx->pc = 0x1B9BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9BCCu;
            // 0x1b9bd0: 0xdc25a9f8  ld          $a1, -0x5608($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294945272)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9BD4u; }
        if (ctx->pc != 0x1B9BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9BD4u; }
        if (ctx->pc != 0x1B9BD4u) { return; }
    }
    ctx->pc = 0x1B9BD4u;
    // 0x1b9bd4: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b9bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b9bd8: 0xac221bc0  sw          $v0, 0x1BC0($at)
    ctx->pc = 0x1b9bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7104), GPR_U32(ctx, 2));
    // 0x1b9bdc: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b9bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b9be0: 0x8c241bc0  lw          $a0, 0x1BC0($at)
    ctx->pc = 0x1b9be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7104)));
    // 0x1b9be4: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x1B9BE4u;
    SET_GPR_U32(ctx, 31, 0x1B9BECu);
    ctx->pc = 0x1B9BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9BE4u;
            // 0x1b9be8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9BECu; }
        if (ctx->pc != 0x1B9BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9BECu; }
        if (ctx->pc != 0x1B9BECu) { return; }
    }
    ctx->pc = 0x1B9BECu;
    // 0x1b9bec: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b9becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b9bf0: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x1b9bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x1b9bf4: 0xac221bc8  sw          $v0, 0x1BC8($at)
    ctx->pc = 0x1b9bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7112), GPR_U32(ctx, 2));
    // 0x1b9bf8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1b9bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b9bfc: 0xc66100d0  lwc1        $f1, 0xD0($s3)
    ctx->pc = 0x1b9bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9c00: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x1b9c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9c04: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b9c04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b9c08: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x1b9c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1b9c0c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1b9c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b9c10: 0xc66100d4  lwc1        $f1, 0xD4($s3)
    ctx->pc = 0x1b9c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9c14: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1b9c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9c18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b9c18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b9c1c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1b9c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1b9c20: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1b9c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b9c24: 0xc66100d8  lwc1        $f1, 0xD8($s3)
    ctx->pc = 0x1b9c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9c28: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x1b9c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9c2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b9c2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b9c30: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x1b9c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x1b9c34: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1b9c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b9c38: 0xc66100e4  lwc1        $f1, 0xE4($s3)
    ctx->pc = 0x1b9c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9c3c: 0xc4400114  lwc1        $f0, 0x114($v0)
    ctx->pc = 0x1b9c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9c40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b9c40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b9c44: 0xe4400114  swc1        $f0, 0x114($v0)
    ctx->pc = 0x1b9c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
    // 0x1b9c48: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1b9c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b9c4c: 0xc66100e0  lwc1        $f1, 0xE0($s3)
    ctx->pc = 0x1b9c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9c50: 0xc4400110  lwc1        $f0, 0x110($v0)
    ctx->pc = 0x1b9c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9c54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b9c54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b9c58: 0xe4400110  swc1        $f0, 0x110($v0)
    ctx->pc = 0x1b9c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    // 0x1b9c5c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1b9c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b9c60: 0xc66100e8  lwc1        $f1, 0xE8($s3)
    ctx->pc = 0x1b9c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9c64: 0xc4400118  lwc1        $f0, 0x118($v0)
    ctx->pc = 0x1b9c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9c68: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b9c68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b9c6c: 0xe4400118  swc1        $f0, 0x118($v0)
    ctx->pc = 0x1b9c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
    // 0x1b9c70: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1b9c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b9c74: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1b9c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b9c78: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1b9c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b9c7c: 0xc06edf8  jal         func_1BB7E0
    ctx->pc = 0x1B9C7Cu;
    SET_GPR_U32(ctx, 31, 0x1B9C84u);
    ctx->pc = 0x1B9C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9C7Cu;
            // 0x1b9c80: 0x27a50088  addiu       $a1, $sp, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB7E0u;
    if (runtime->hasFunction(0x1BB7E0u)) {
        auto targetFn = runtime->lookupFunction(0x1BB7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9C84u; }
        if (ctx->pc != 0x1B9C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1bb7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9C84u; }
        if (ctx->pc != 0x1B9C84u) { return; }
    }
    ctx->pc = 0x1B9C84u;
    // 0x1b9c84: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x1b9c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1b9c88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b9c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b9c8c: 0xae63001c  sw          $v1, 0x1C($s3)
    ctx->pc = 0x1b9c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 3));
    // 0x1b9c90: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1b9c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1b9c94: 0xae630020  sw          $v1, 0x20($s3)
    ctx->pc = 0x1b9c94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 3));
    // 0x1b9c98: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x1b9c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x1b9c9c: 0x106200a8  beq         $v1, $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x1B9C9Cu;
    {
        const bool branch_taken_0x1b9c9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B9CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9C9Cu;
            // 0x1b9ca0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9c9c) {
            ctx->pc = 0x1B9F40u;
            goto label_1b9f40;
        }
    }
    ctx->pc = 0x1B9CA4u;
    // 0x1b9ca4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B9CA4u;
    {
        const bool branch_taken_0x1b9ca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b9ca4) {
            ctx->pc = 0x1B9CC0u;
            goto label_1b9cc0;
        }
    }
    ctx->pc = 0x1B9CACu;
    // 0x1b9cac: 0x106000a4  beqz        $v1, . + 4 + (0xA4 << 2)
    ctx->pc = 0x1B9CACu;
    {
        const bool branch_taken_0x1b9cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9cac) {
            ctx->pc = 0x1B9F40u;
            goto label_1b9f40;
        }
    }
    ctx->pc = 0x1B9CB4u;
    // 0x1b9cb4: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x1B9CB4u;
    {
        const bool branch_taken_0x1b9cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9cb4) {
            ctx->pc = 0x1B9F40u;
            goto label_1b9f40;
        }
    }
    ctx->pc = 0x1B9CBCu;
    // 0x1b9cbc: 0x0  nop
    ctx->pc = 0x1b9cbcu;
    // NOP
label_1b9cc0:
    // 0x1b9cc0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1b9cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1b9cc4: 0x1840009e  blez        $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x1B9CC4u;
    {
        const bool branch_taken_0x1b9cc4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B9CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9CC4u;
            // 0x1b9cc8: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9cc4) {
            ctx->pc = 0x1B9F40u;
            goto label_1b9f40;
        }
    }
    ctx->pc = 0x1B9CCCu;
    // 0x1b9ccc: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x1b9cccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1b9cd0: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1b9cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
    // 0x1b9cd4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1b9cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b9cd8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1b9cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b9cdc: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1b9cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1b9ce0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1b9ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1b9ce4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b9ce4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9ce8: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1b9ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
    // 0x1b9cec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b9cecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b9cf0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1b9cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1b9cf4: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1b9cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1b9cf8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1b9cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b9cfc: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x1b9cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x1b9d00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9d04: 0x0  nop
    ctx->pc = 0x1b9d04u;
    // NOP
    // 0x1b9d08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b9d08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b9d0c: 0xc04b6ee  jal         func_12DBB8
    ctx->pc = 0x1B9D0Cu;
    SET_GPR_U32(ctx, 31, 0x1B9D14u);
    ctx->pc = 0x1B9D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9D0Cu;
            // 0x1b9d10: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9D14u; }
        if (ctx->pc != 0x1B9D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9D14u; }
        if (ctx->pc != 0x1B9D14u) { return; }
    }
    ctx->pc = 0x1B9D14u;
    // 0x1b9d14: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b9d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b9d18: 0x8c221bc8  lw          $v0, 0x1BC8($at)
    ctx->pc = 0x1b9d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7112)));
    // 0x1b9d1c: 0xc66100e4  lwc1        $f1, 0xE4($s3)
    ctx->pc = 0x1b9d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9d20: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1b9d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9d24: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b9d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b9d28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b9d28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b9d2c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1b9d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1b9d30: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1b9d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9d34: 0x8c221bc8  lw          $v0, 0x1BC8($at)
    ctx->pc = 0x1b9d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7112)));
    // 0x1b9d38: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1b9d38u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1b9d3c: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1b9d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9d40: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b9d40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9d44: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9D44u;
    {
        const bool branch_taken_0x1b9d44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9D44u;
            // 0x1b9d48: 0x3c023ba3  lui         $v0, 0x3BA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9d44) {
            ctx->pc = 0x1B9D58u;
            goto label_1b9d58;
        }
    }
    ctx->pc = 0x1B9D4Cu;
    // 0x1b9d4c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b9d4cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1b9d50: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B9D50u;
    {
        const bool branch_taken_0x1b9d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9D50u;
            // 0x1b9d54: 0xae6200e4  sw          $v0, 0xE4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9d50) {
            ctx->pc = 0x1B9D78u;
            goto label_1b9d78;
        }
    }
    ctx->pc = 0x1B9D58u;
label_1b9d58:
    // 0x1b9d58: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b9d58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9d5c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9D5Cu;
    {
        const bool branch_taken_0x1b9d5c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9D5Cu;
            // 0x1b9d60: 0x3c02bba3  lui         $v0, 0xBBA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48035 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9d5c) {
            ctx->pc = 0x1B9D70u;
            goto label_1b9d70;
        }
    }
    ctx->pc = 0x1B9D64u;
    // 0x1b9d64: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b9d64u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1b9d68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B9D68u;
    {
        const bool branch_taken_0x1b9d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9D68u;
            // 0x1b9d6c: 0xae6200e4  sw          $v0, 0xE4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9d68) {
            ctx->pc = 0x1B9D78u;
            goto label_1b9d78;
        }
    }
    ctx->pc = 0x1B9D70u;
label_1b9d70:
    // 0x1b9d70: 0xae6000e4  sw          $zero, 0xE4($s3)
    ctx->pc = 0x1b9d70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 228), GPR_U32(ctx, 0));
    // 0x1b9d74: 0x0  nop
    ctx->pc = 0x1b9d74u;
    // NOP
label_1b9d78:
    // 0x1b9d78: 0xc065d00  jal         func_197400
    ctx->pc = 0x1B9D78u;
    SET_GPR_U32(ctx, 31, 0x1B9D80u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9D80u; }
        if (ctx->pc != 0x1B9D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9D80u; }
        if (ctx->pc != 0x1B9D80u) { return; }
    }
    ctx->pc = 0x1B9D80u;
    // 0x1b9d80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b9d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b9d84: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9D84u;
    {
        const bool branch_taken_0x1b9d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b9d84) {
            ctx->pc = 0x1B9D98u;
            goto label_1b9d98;
        }
    }
    ctx->pc = 0x1B9D8Cu;
    // 0x1b9d8c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1B9D8Cu;
    {
        const bool branch_taken_0x1b9d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9D8Cu;
            // 0x1b9d90: 0x24100028  addiu       $s0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9d8c) {
            ctx->pc = 0x1B9DD0u;
            goto label_1b9dd0;
        }
    }
    ctx->pc = 0x1B9D94u;
    // 0x1b9d94: 0x0  nop
    ctx->pc = 0x1b9d94u;
    // NOP
label_1b9d98:
    // 0x1b9d98: 0xc065d00  jal         func_197400
    ctx->pc = 0x1B9D98u;
    SET_GPR_U32(ctx, 31, 0x1B9DA0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9DA0u; }
        if (ctx->pc != 0x1B9DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9DA0u; }
        if (ctx->pc != 0x1B9DA0u) { return; }
    }
    ctx->pc = 0x1B9DA0u;
    // 0x1b9da0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b9da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9da4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9DA4u;
    {
        const bool branch_taken_0x1b9da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b9da4) {
            ctx->pc = 0x1B9DB8u;
            goto label_1b9db8;
        }
    }
    ctx->pc = 0x1B9DACu;
    // 0x1b9dac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B9DACu;
    {
        const bool branch_taken_0x1b9dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9DACu;
            // 0x1b9db0: 0x24100019  addiu       $s0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9dac) {
            ctx->pc = 0x1B9DD0u;
            goto label_1b9dd0;
        }
    }
    ctx->pc = 0x1B9DB4u;
    // 0x1b9db4: 0x0  nop
    ctx->pc = 0x1b9db4u;
    // NOP
label_1b9db8:
    // 0x1b9db8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1B9DB8u;
    SET_GPR_U32(ctx, 31, 0x1B9DC0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9DC0u; }
        if (ctx->pc != 0x1B9DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9DC0u; }
        if (ctx->pc != 0x1B9DC0u) { return; }
    }
    ctx->pc = 0x1B9DC0u;
    // 0x1b9dc0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B9DC0u;
    {
        const bool branch_taken_0x1b9dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9dc0) {
            ctx->pc = 0x1B9DD0u;
            goto label_1b9dd0;
        }
    }
    ctx->pc = 0x1B9DC8u;
    // 0x1b9dc8: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x1b9dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b9dcc: 0x0  nop
    ctx->pc = 0x1b9dccu;
    // NOP
label_1b9dd0:
    // 0x1b9dd0: 0x8e620110  lw          $v0, 0x110($s3)
    ctx->pc = 0x1b9dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
    // 0x1b9dd4: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x1b9dd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1b9dd8: 0x10200051  beqz        $at, . + 4 + (0x51 << 2)
    ctx->pc = 0x1B9DD8u;
    {
        const bool branch_taken_0x1b9dd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9dd8) {
            ctx->pc = 0x1B9F20u;
            goto label_1b9f20;
        }
    }
    ctx->pc = 0x1B9DE0u;
    // 0x1b9de0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1b9de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1b9de4: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b9de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b9de8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b9de8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b9dec: 0x8c241bc8  lw          $a0, 0x1BC8($at)
    ctx->pc = 0x1b9decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7112)));
    // 0x1b9df0: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1b9df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1b9df4: 0x3c024218  lui         $v0, 0x4218
    ctx->pc = 0x1b9df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16920 << 16));
    // 0x1b9df8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b9df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9dfc: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1b9dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1b9e00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9e04: 0xc4830014  lwc1        $f3, 0x14($a0)
    ctx->pc = 0x1b9e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b9e08: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1b9e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b9e0c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b9e0cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b9e10: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1b9e10u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1b9e14: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1b9e14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1b9e18: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1b9e18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1b9e1c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b9e1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1b9e20: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b9e20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1b9e24: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b9e24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b9e28: 0x1010  mfhi        $v0
    ctx->pc = 0x1b9e28u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b9e2c: 0x44121000  mfc1        $s2, $f2
    ctx->pc = 0x1b9e2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x1b9e30: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x1b9e30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x1b9e34: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x1b9e34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1b9e38: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1B9E38u;
    {
        const bool branch_taken_0x1b9e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9e38) {
            ctx->pc = 0x1B9F30u;
            goto label_1b9f30;
        }
    }
    ctx->pc = 0x1B9E40u;
    // 0x1b9e40: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1B9E40u;
    SET_GPR_U32(ctx, 31, 0x1B9E48u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E48u; }
        if (ctx->pc != 0x1B9E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E48u; }
        if (ctx->pc != 0x1B9E48u) { return; }
    }
    ctx->pc = 0x1B9E48u;
    // 0x1b9e48: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x1b9e48u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)7u)));
    // 0x1b9e4c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b9e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b9e50: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1B9E50u;
    SET_GPR_U32(ctx, 31, 0x1B9E58u);
    ctx->pc = 0x1B9E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9E50u;
            // 0x1b9e54: 0x43a023  subu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E58u; }
        if (ctx->pc != 0x1B9E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E58u; }
        if (ctx->pc != 0x1B9E58u) { return; }
    }
    ctx->pc = 0x1B9E58u;
    // 0x1b9e58: 0x1a000019  blez        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1B9E58u;
    {
        const bool branch_taken_0x1b9e58 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1b9e58) {
            ctx->pc = 0x1B9EC0u;
            goto label_1b9ec0;
        }
    }
    ctx->pc = 0x1B9E60u;
    // 0x1b9e60: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1b9e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1b9e64: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1b9e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1b9e68: 0x8fa4008c  lw          $a0, 0x8C($sp)
    ctx->pc = 0x1b9e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1b9e6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b9e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9e70: 0x2543021  addu        $a2, $s2, $s4
    ctx->pc = 0x1b9e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x1b9e74: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1b9e74u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b9e78: 0x24620037  addiu       $v0, $v1, 0x37
    ctx->pc = 0x1b9e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 55));
    // 0x1b9e7c: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x1b9e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1b9e80: 0xc065480  jal         func_195200
    ctx->pc = 0x1B9E80u;
    SET_GPR_U32(ctx, 31, 0x1B9E88u);
    ctx->pc = 0x1B9E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9E80u;
            // 0x1b9e84: 0x502823  subu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E88u; }
        if (ctx->pc != 0x1B9E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E88u; }
        if (ctx->pc != 0x1B9E88u) { return; }
    }
    ctx->pc = 0x1B9E88u;
    // 0x1b9e88: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x1b9e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1b9e8c: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1b9e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1b9e90: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1b9e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1b9e94: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1b9e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1b9e98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b9e98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9e9c: 0x24420037  addiu       $v0, $v0, 0x37
    ctx->pc = 0x1b9e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 55));
    // 0x1b9ea0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1b9ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b9ea4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1b9ea4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1b9ea8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9ea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9eac: 0xc05d080  jal         func_174200
    ctx->pc = 0x1B9EACu;
    SET_GPR_U32(ctx, 31, 0x1B9EB4u);
    ctx->pc = 0x1B9EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9EACu;
            // 0x1b9eb0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9EB4u; }
        if (ctx->pc != 0x1B9EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9EB4u; }
        if (ctx->pc != 0x1B9EB4u) { return; }
    }
    ctx->pc = 0x1B9EB4u;
    // 0x1b9eb4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1B9EB4u;
    {
        const bool branch_taken_0x1b9eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9eb4) {
            ctx->pc = 0x1B9F30u;
            goto label_1b9f30;
        }
    }
    ctx->pc = 0x1B9EBCu;
    // 0x1b9ebc: 0x0  nop
    ctx->pc = 0x1b9ebcu;
    // NOP
label_1b9ec0:
    // 0x1b9ec0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1b9ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1b9ec4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b9ec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9ec8: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x1b9ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1b9ecc: 0x2543021  addu        $a2, $s2, $s4
    ctx->pc = 0x1b9eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x1b9ed0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1b9ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1b9ed4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1b9ed4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b9ed8: 0x712023  subu        $a0, $v1, $s1
    ctx->pc = 0x1b9ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1b9edc: 0x24420037  addiu       $v0, $v0, 0x37
    ctx->pc = 0x1b9edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 55));
    // 0x1b9ee0: 0xc065480  jal         func_195200
    ctx->pc = 0x1B9EE0u;
    SET_GPR_U32(ctx, 31, 0x1B9EE8u);
    ctx->pc = 0x1B9EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9EE0u;
            // 0x1b9ee4: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9EE8u; }
        if (ctx->pc != 0x1B9EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9EE8u; }
        if (ctx->pc != 0x1B9EE8u) { return; }
    }
    ctx->pc = 0x1B9EE8u;
    // 0x1b9ee8: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x1b9ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1b9eec: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1b9eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1b9ef0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1b9ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1b9ef4: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1b9ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1b9ef8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b9ef8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9efc: 0x24420037  addiu       $v0, $v0, 0x37
    ctx->pc = 0x1b9efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 55));
    // 0x1b9f00: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1b9f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b9f04: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1b9f04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1b9f08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9f08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9f0c: 0xc05d080  jal         func_174200
    ctx->pc = 0x1B9F0Cu;
    SET_GPR_U32(ctx, 31, 0x1B9F14u);
    ctx->pc = 0x1B9F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9F0Cu;
            // 0x1b9f10: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9F14u; }
        if (ctx->pc != 0x1B9F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9F14u; }
        if (ctx->pc != 0x1B9F14u) { return; }
    }
    ctx->pc = 0x1B9F14u;
    // 0x1b9f14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B9F14u;
    {
        const bool branch_taken_0x1b9f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9f14) {
            ctx->pc = 0x1B9F30u;
            goto label_1b9f30;
        }
    }
    ctx->pc = 0x1B9F1Cu;
    // 0x1b9f1c: 0x0  nop
    ctx->pc = 0x1b9f1cu;
    // NOP
label_1b9f20:
    // 0x1b9f20: 0x28410097  slti        $at, $v0, 0x97
    ctx->pc = 0x1b9f20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)151) ? 1 : 0);
    // 0x1b9f24: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B9F24u;
    {
        const bool branch_taken_0x1b9f24 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9f24) {
            ctx->pc = 0x1B9F30u;
            goto label_1b9f30;
        }
    }
    ctx->pc = 0x1B9F2Cu;
    // 0x1b9f2c: 0xae600110  sw          $zero, 0x110($s3)
    ctx->pc = 0x1b9f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 0));
label_1b9f30:
    // 0x1b9f30: 0x8e620110  lw          $v0, 0x110($s3)
    ctx->pc = 0x1b9f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
    // 0x1b9f34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b9f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b9f38: 0xae620110  sw          $v0, 0x110($s3)
    ctx->pc = 0x1b9f38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 2));
    // 0x1b9f3c: 0x0  nop
    ctx->pc = 0x1b9f3cu;
    // NOP
label_1b9f40:
    // 0x1b9f40: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b9f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b9f44: 0x8c231bc8  lw          $v1, 0x1BC8($at)
    ctx->pc = 0x1b9f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7112)));
    // 0x1b9f48: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1b9f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1b9f4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b9f4cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1b9f50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9f54: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1b9f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9f58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b9f58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9f5c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1B9F5Cu;
    {
        const bool branch_taken_0x1b9f5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9F5Cu;
            // 0x1b9f60: 0x24640014  addiu       $a0, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9f5c) {
            ctx->pc = 0x1B9F80u;
            goto label_1b9f80;
        }
    }
    ctx->pc = 0x1B9F64u;
    // 0x1b9f64: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b9f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1b9f68: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b9f68u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1b9f6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9f6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9f70: 0x0  nop
    ctx->pc = 0x1b9f70u;
    // NOP
    // 0x1b9f74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b9f74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b9f78: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b9f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1b9f7c: 0x0  nop
    ctx->pc = 0x1b9f7cu;
    // NOP
label_1b9f80:
    // 0x1b9f80: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b9f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b9f84: 0x8c231bc8  lw          $v1, 0x1BC8($at)
    ctx->pc = 0x1b9f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7112)));
    // 0x1b9f88: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b9f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1b9f8c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b9f8cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1b9f90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9f90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9f94: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1b9f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9f98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b9f98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9f9c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1B9F9Cu;
    {
        const bool branch_taken_0x1b9f9c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9F9Cu;
            // 0x1b9fa0: 0x24640014  addiu       $a0, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9f9c) {
            ctx->pc = 0x1B9FC0u;
            goto label_1b9fc0;
        }
    }
    ctx->pc = 0x1B9FA4u;
    // 0x1b9fa4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b9fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1b9fa8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b9fa8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1b9fac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9fb0: 0x0  nop
    ctx->pc = 0x1b9fb0u;
    // NOP
    // 0x1b9fb4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b9fb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b9fb8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b9fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1b9fbc: 0x0  nop
    ctx->pc = 0x1b9fbcu;
    // NOP
label_1b9fc0:
    // 0x1b9fc0: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x1B9FC0u;
    SET_GPR_U32(ctx, 31, 0x1B9FC8u);
    ctx->pc = 0x1B9FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9FC0u;
            // 0x1b9fc4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9FC8u; }
        if (ctx->pc != 0x1B9FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9FC8u; }
        if (ctx->pc != 0x1B9FC8u) { return; }
    }
    ctx->pc = 0x1B9FC8u;
    // 0x1b9fc8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1b9fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b9fcc: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1b9fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b9fd0: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x1B9FD0u;
    SET_GPR_U32(ctx, 31, 0x1B9FD8u);
    ctx->pc = 0x1B9FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9FD0u;
            // 0x1b9fd4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9FD8u; }
        if (ctx->pc != 0x1B9FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9FD8u; }
        if (ctx->pc != 0x1B9FD8u) { return; }
    }
    ctx->pc = 0x1B9FD8u;
    // 0x1b9fd8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1b9fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b9fdc: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1b9fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b9fe0: 0xc04b804  jal         func_12E010
    ctx->pc = 0x1B9FE0u;
    SET_GPR_U32(ctx, 31, 0x1B9FE8u);
    ctx->pc = 0x1B9FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9FE0u;
            // 0x1b9fe4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9FE8u; }
        if (ctx->pc != 0x1B9FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9FE8u; }
        if (ctx->pc != 0x1B9FE8u) { return; }
    }
    ctx->pc = 0x1B9FE8u;
    // 0x1b9fe8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1b9fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b9fec: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1b9fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b9ff0: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x1B9FF0u;
    SET_GPR_U32(ctx, 31, 0x1B9FF8u);
    ctx->pc = 0x1B9FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9FF0u;
            // 0x1b9ff4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9FF8u; }
        if (ctx->pc != 0x1B9FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9FF8u; }
        if (ctx->pc != 0x1B9FF8u) { return; }
    }
    ctx->pc = 0x1B9FF8u;
    // 0x1b9ff8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1b9ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b9ffc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b9ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba000: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x1BA000u;
    SET_GPR_U32(ctx, 31, 0x1BA008u);
    ctx->pc = 0x1BA004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA000u;
            // 0x1ba004: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA008u; }
        if (ctx->pc != 0x1BA008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA008u; }
        if (ctx->pc != 0x1BA008u) { return; }
    }
    ctx->pc = 0x1BA008u;
    // 0x1ba008: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1ba008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1ba00c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1ba00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1ba010: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1ba010u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ba014: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1BA014u;
    {
        const bool branch_taken_0x1ba014 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba014) {
            ctx->pc = 0x1BA068u;
            goto label_1ba068;
        }
    }
    ctx->pc = 0x1BA01Cu;
    // 0x1ba01c: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x1ba01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x1ba020: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA020u;
    {
        const bool branch_taken_0x1ba020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba020) {
            ctx->pc = 0x1BA038u;
            goto label_1ba038;
        }
    }
    ctx->pc = 0x1BA028u;
    // 0x1ba028: 0xc0604f0  jal         func_1813C0
    ctx->pc = 0x1BA028u;
    SET_GPR_U32(ctx, 31, 0x1BA030u);
    ctx->pc = 0x1BA02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA028u;
            // 0x1ba02c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA030u; }
        if (ctx->pc != 0x1BA030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA030u; }
        if (ctx->pc != 0x1BA030u) { return; }
    }
    ctx->pc = 0x1BA030u;
    // 0x1ba030: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA030u;
    {
        const bool branch_taken_0x1ba030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba030) {
            ctx->pc = 0x1BA040u;
            goto label_1ba040;
        }
    }
    ctx->pc = 0x1BA038u;
label_1ba038:
    // 0x1ba038: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1BA038u;
    SET_GPR_U32(ctx, 31, 0x1BA040u);
    ctx->pc = 0x1BA03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA038u;
            // 0x1ba03c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA040u; }
        if (ctx->pc != 0x1BA040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA040u; }
        if (ctx->pc != 0x1BA040u) { return; }
    }
    ctx->pc = 0x1BA040u;
label_1ba040:
    // 0x1ba040: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x1ba040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x1ba044: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA044u;
    {
        const bool branch_taken_0x1ba044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba044) {
            ctx->pc = 0x1BA058u;
            goto label_1ba058;
        }
    }
    ctx->pc = 0x1BA04Cu;
    // 0x1ba04c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1BA04Cu;
    {
        const bool branch_taken_0x1ba04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA04Cu;
            // 0x1ba050: 0xae60010c  sw          $zero, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba04c) {
            ctx->pc = 0x1BA078u;
            goto label_1ba078;
        }
    }
    ctx->pc = 0x1BA054u;
    // 0x1ba054: 0x0  nop
    ctx->pc = 0x1ba054u;
    // NOP
label_1ba058:
    // 0x1ba058: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ba058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba05c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA05Cu;
    {
        const bool branch_taken_0x1ba05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA05Cu;
            // 0x1ba060: 0xae62010c  sw          $v0, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba05c) {
            ctx->pc = 0x1BA078u;
            goto label_1ba078;
        }
    }
    ctx->pc = 0x1BA064u;
    // 0x1ba064: 0x0  nop
    ctx->pc = 0x1ba064u;
    // NOP
label_1ba068:
    // 0x1ba068: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1BA068u;
    SET_GPR_U32(ctx, 31, 0x1BA070u);
    ctx->pc = 0x1BA06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA068u;
            // 0x1ba06c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA070u; }
        if (ctx->pc != 0x1BA070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA070u; }
        if (ctx->pc != 0x1BA070u) { return; }
    }
    ctx->pc = 0x1BA070u;
    // 0x1ba070: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ba070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba074: 0xae62010c  sw          $v0, 0x10C($s3)
    ctx->pc = 0x1ba074u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
label_1ba078:
    // 0x1ba078: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1ba078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1ba07c: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x1ba07cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x1ba080: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1ba080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1ba084: 0x1c400020  bgtz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1BA084u;
    {
        const bool branch_taken_0x1ba084 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1ba084) {
            ctx->pc = 0x1BA108u;
            goto label_1ba108;
        }
    }
    ctx->pc = 0x1BA08Cu;
    // 0x1ba08c: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1ba08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1ba090: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1ba090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ba094: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1ba094u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ba098: 0x0  nop
    ctx->pc = 0x1ba098u;
    // NOP
    // 0x1ba09c: 0x0  nop
    ctx->pc = 0x1ba09cu;
    // NOP
    // 0x1ba0a0: 0x1010  mfhi        $v0
    ctx->pc = 0x1ba0a0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1ba0a4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA0A4u;
    {
        const bool branch_taken_0x1ba0a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba0a4) {
            ctx->pc = 0x1BA0C0u;
            goto label_1ba0c0;
        }
    }
    ctx->pc = 0x1BA0ACu;
    // 0x1ba0ac: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x1ba0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1ba0b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ba0b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ba0b4: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x1ba0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1ba0b8: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1BA0B8u;
    SET_GPR_U32(ctx, 31, 0x1BA0C0u);
    ctx->pc = 0x1BA0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA0B8u;
            // 0x1ba0bc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA0C0u; }
        if (ctx->pc != 0x1BA0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA0C0u; }
        if (ctx->pc != 0x1BA0C0u) { return; }
    }
    ctx->pc = 0x1BA0C0u;
label_1ba0c0:
    // 0x1ba0c0: 0x8e620120  lw          $v0, 0x120($s3)
    ctx->pc = 0x1ba0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
    // 0x1ba0c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA0C4u;
    {
        const bool branch_taken_0x1ba0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA0C4u;
            // 0x1ba0c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba0c4) {
            ctx->pc = 0x1BA0D8u;
            goto label_1ba0d8;
        }
    }
    ctx->pc = 0x1BA0CCu;
    // 0x1ba0cc: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1ba0ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1ba0d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA0D0u;
    {
        const bool branch_taken_0x1ba0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA0D0u;
            // 0x1ba0d4: 0xac221c08  sw          $v0, 0x1C08($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba0d0) {
            ctx->pc = 0x1BA0E8u;
            goto label_1ba0e8;
        }
    }
    ctx->pc = 0x1BA0D8u;
label_1ba0d8:
    // 0x1ba0d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ba0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba0dc: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1ba0dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1ba0e0: 0xac221c10  sw          $v0, 0x1C10($at)
    ctx->pc = 0x1ba0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7184), GPR_U32(ctx, 2));
    // 0x1ba0e4: 0x0  nop
    ctx->pc = 0x1ba0e4u;
    // NOP
label_1ba0e8:
    // 0x1ba0e8: 0x8e620124  lw          $v0, 0x124($s3)
    ctx->pc = 0x1ba0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 292)));
    // 0x1ba0ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ba0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ba0f0: 0xae620124  sw          $v0, 0x124($s3)
    ctx->pc = 0x1ba0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 292), GPR_U32(ctx, 2));
    // 0x1ba0f4: 0x8e650124  lw          $a1, 0x124($s3)
    ctx->pc = 0x1ba0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 292)));
    // 0x1ba0f8: 0xc0604b0  jal         func_1812C0
    ctx->pc = 0x1BA0F8u;
    SET_GPR_U32(ctx, 31, 0x1BA100u);
    ctx->pc = 0x1BA0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA0F8u;
            // 0x1ba0fc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA100u; }
        if (ctx->pc != 0x1BA100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA100u; }
        if (ctx->pc != 0x1BA100u) { return; }
    }
    ctx->pc = 0x1BA100u;
    // 0x1ba100: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1BA100u;
    {
        const bool branch_taken_0x1ba100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba100) {
            ctx->pc = 0x1BA188u;
            goto label_1ba188;
        }
    }
    ctx->pc = 0x1BA108u;
label_1ba108:
    // 0x1ba108: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x1ba108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1ba10c: 0x3c06001b  lui         $a2, 0x1B
    ctx->pc = 0x1ba10cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27 << 16));
    // 0x1ba110: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1ba110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ba114: 0x2665002c  addiu       $a1, $s3, 0x2C
    ctx->pc = 0x1ba114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
    // 0x1ba118: 0x24c67da0  addiu       $a2, $a2, 0x7DA0
    ctx->pc = 0x1ba118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32160));
    // 0x1ba11c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1ba11cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba120: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1ba120u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba124: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1ba124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x1ba128: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba12c: 0x0  nop
    ctx->pc = 0x1ba12cu;
    // NOP
    // 0x1ba130: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba130u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ba134: 0xe660002c  swc1        $f0, 0x2C($s3)
    ctx->pc = 0x1ba134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
    // 0x1ba138: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1ba138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1ba13c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1ba13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x1ba140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba144: 0x0  nop
    ctx->pc = 0x1ba144u;
    // NOP
    // 0x1ba148: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba148u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ba14c: 0xe6600030  swc1        $f0, 0x30($s3)
    ctx->pc = 0x1ba14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x1ba150: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x1ba150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1ba154: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ba154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ba158: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba15c: 0x0  nop
    ctx->pc = 0x1ba15cu;
    // NOP
    // 0x1ba160: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba160u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ba164: 0xe6600034  swc1        $f0, 0x34($s3)
    ctx->pc = 0x1ba164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    // 0x1ba168: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1ba168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1ba16c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ba16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ba170: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba174: 0x0  nop
    ctx->pc = 0x1ba174u;
    // NOP
    // 0x1ba178: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ba17c: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1BA17Cu;
    SET_GPR_U32(ctx, 31, 0x1BA184u);
    ctx->pc = 0x1BA180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA17Cu;
            // 0x1ba180: 0xe6600038  swc1        $f0, 0x38($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA184u; }
        if (ctx->pc != 0x1BA184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA184u; }
        if (ctx->pc != 0x1BA184u) { return; }
    }
    ctx->pc = 0x1BA184u;
    // 0x1ba184: 0x0  nop
    ctx->pc = 0x1ba184u;
    // NOP
label_1ba188:
    // 0x1ba188: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1ba188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1ba18c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ba18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ba190: 0xae630024  sw          $v1, 0x24($s3)
    ctx->pc = 0x1ba190u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 3));
    // 0x1ba194: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ba194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ba198: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ba198u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ba19c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ba19cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ba1a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ba1a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba1a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ba1a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba1a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ba1a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba1ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA1ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA1ACu;
            // 0x1ba1b0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B9CC0u: goto label_1b9cc0;
            case 0x1B9D58u: goto label_1b9d58;
            case 0x1B9D70u: goto label_1b9d70;
            case 0x1B9D78u: goto label_1b9d78;
            case 0x1B9D98u: goto label_1b9d98;
            case 0x1B9DB8u: goto label_1b9db8;
            case 0x1B9DD0u: goto label_1b9dd0;
            case 0x1B9EC0u: goto label_1b9ec0;
            case 0x1B9F20u: goto label_1b9f20;
            case 0x1B9F30u: goto label_1b9f30;
            case 0x1B9F40u: goto label_1b9f40;
            case 0x1B9F80u: goto label_1b9f80;
            case 0x1B9FC0u: goto label_1b9fc0;
            case 0x1BA038u: goto label_1ba038;
            case 0x1BA040u: goto label_1ba040;
            case 0x1BA058u: goto label_1ba058;
            case 0x1BA068u: goto label_1ba068;
            case 0x1BA078u: goto label_1ba078;
            case 0x1BA0C0u: goto label_1ba0c0;
            case 0x1BA0D8u: goto label_1ba0d8;
            case 0x1BA0E8u: goto label_1ba0e8;
            case 0x1BA108u: goto label_1ba108;
            case 0x1BA188u: goto label_1ba188;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BA1B4u;
}
