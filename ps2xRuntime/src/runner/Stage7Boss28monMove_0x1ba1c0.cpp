#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage7Boss28monMove
// Address: 0x1ba1c0 - 0x1bac54
void Stage7Boss28monMove_0x1ba1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage7Boss28monMove_0x1ba1c0");
#endif

    ctx->pc = 0x1ba1c0u;

    // 0x1ba1c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ba1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ba1c4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1ba1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1ba1c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ba1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ba1cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ba1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ba1d0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ba1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ba1d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ba1d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba1d8: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x1ba1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x1ba1dc: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x1BA1DCu;
    SET_GPR_U32(ctx, 31, 0x1BA1E4u);
    ctx->pc = 0x1BA1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA1DCu;
            // 0x1ba1e0: 0xdc25a9f0  ld          $a1, -0x5610($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294945264)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA1E4u; }
        if (ctx->pc != 0x1BA1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA1E4u; }
        if (ctx->pc != 0x1BA1E4u) { return; }
    }
    ctx->pc = 0x1BA1E4u;
    // 0x1ba1e4: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1ba1e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1ba1e8: 0xac221bb0  sw          $v0, 0x1BB0($at)
    ctx->pc = 0x1ba1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7088), GPR_U32(ctx, 2));
    // 0x1ba1ec: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1ba1ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1ba1f0: 0x8c241bb0  lw          $a0, 0x1BB0($at)
    ctx->pc = 0x1ba1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7088)));
    // 0x1ba1f4: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x1BA1F4u;
    SET_GPR_U32(ctx, 31, 0x1BA1FCu);
    ctx->pc = 0x1BA1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA1F4u;
            // 0x1ba1f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA1FCu; }
        if (ctx->pc != 0x1BA1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA1FCu; }
        if (ctx->pc != 0x1BA1FCu) { return; }
    }
    ctx->pc = 0x1BA1FCu;
    // 0x1ba1fc: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1ba1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1ba200: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1ba200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1ba204: 0xac221bb8  sw          $v0, 0x1BB8($at)
    ctx->pc = 0x1ba204u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7096), GPR_U32(ctx, 2));
    // 0x1ba208: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ba208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ba20c: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1ba20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba210: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x1ba210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba214: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ba214u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ba218: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x1ba218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1ba21c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ba21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ba220: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1ba220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba224: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1ba224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba228: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ba228u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ba22c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1ba22cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1ba230: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ba230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ba234: 0xc60100d8  lwc1        $f1, 0xD8($s0)
    ctx->pc = 0x1ba234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba238: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x1ba238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba23c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ba23cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ba240: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x1ba240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x1ba244: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ba244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ba248: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x1ba248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba24c: 0xc4400114  lwc1        $f0, 0x114($v0)
    ctx->pc = 0x1ba24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba250: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ba250u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ba254: 0xe4400114  swc1        $f0, 0x114($v0)
    ctx->pc = 0x1ba254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
    // 0x1ba258: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ba258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ba25c: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x1ba25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba260: 0xc4400110  lwc1        $f0, 0x110($v0)
    ctx->pc = 0x1ba260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba264: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ba264u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ba268: 0xe4400110  swc1        $f0, 0x110($v0)
    ctx->pc = 0x1ba268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    // 0x1ba26c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ba26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ba270: 0xc60100e8  lwc1        $f1, 0xE8($s0)
    ctx->pc = 0x1ba270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba274: 0xc4400118  lwc1        $f0, 0x118($v0)
    ctx->pc = 0x1ba274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba278: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ba278u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ba27c: 0xe4400118  swc1        $f0, 0x118($v0)
    ctx->pc = 0x1ba27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
    // 0x1ba280: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ba280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ba284: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1ba284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ba288: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1ba288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ba28c: 0xc06edf8  jal         func_1BB7E0
    ctx->pc = 0x1BA28Cu;
    SET_GPR_U32(ctx, 31, 0x1BA294u);
    ctx->pc = 0x1BA290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA28Cu;
            // 0x1ba290: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB7E0u;
    if (runtime->hasFunction(0x1BB7E0u)) {
        auto targetFn = runtime->lookupFunction(0x1BB7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA294u; }
        if (ctx->pc != 0x1BA294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1bb7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA294u; }
        if (ctx->pc != 0x1BA294u) { return; }
    }
    ctx->pc = 0x1BA294u;
    // 0x1ba294: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1ba294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba298: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ba298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ba29c: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1ba29cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x1ba2a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ba2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba2a4: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1ba2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1ba2a8: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1ba2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1ba2ac: 0x106201da  beq         $v1, $v0, . + 4 + (0x1DA << 2)
    ctx->pc = 0x1BA2ACu;
    {
        const bool branch_taken_0x1ba2ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BA2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA2ACu;
            // 0x1ba2b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba2ac) {
            ctx->pc = 0x1BAA18u;
            goto label_1baa18;
        }
    }
    ctx->pc = 0x1BA2B4u;
    // 0x1ba2b4: 0x106201d8  beq         $v1, $v0, . + 4 + (0x1D8 << 2)
    ctx->pc = 0x1BA2B4u;
    {
        const bool branch_taken_0x1ba2b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ba2b4) {
            ctx->pc = 0x1BAA18u;
            goto label_1baa18;
        }
    }
    ctx->pc = 0x1BA2BCu;
    // 0x1ba2bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA2BCu;
    {
        const bool branch_taken_0x1ba2bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba2bc) {
            ctx->pc = 0x1BA2D0u;
            goto label_1ba2d0;
        }
    }
    ctx->pc = 0x1BA2C4u;
    // 0x1ba2c4: 0x100001d4  b           . + 4 + (0x1D4 << 2)
    ctx->pc = 0x1BA2C4u;
    {
        const bool branch_taken_0x1ba2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba2c4) {
            ctx->pc = 0x1BAA18u;
            goto label_1baa18;
        }
    }
    ctx->pc = 0x1BA2CCu;
    // 0x1ba2cc: 0x0  nop
    ctx->pc = 0x1ba2ccu;
    // NOP
label_1ba2d0:
    // 0x1ba2d0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ba2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ba2d4: 0x184001d0  blez        $v0, . + 4 + (0x1D0 << 2)
    ctx->pc = 0x1BA2D4u;
    {
        const bool branch_taken_0x1ba2d4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ba2d4) {
            ctx->pc = 0x1BAA18u;
            goto label_1baa18;
        }
    }
    ctx->pc = 0x1BA2DCu;
    // 0x1ba2dc: 0xc065d00  jal         func_197400
    ctx->pc = 0x1BA2DCu;
    SET_GPR_U32(ctx, 31, 0x1BA2E4u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA2E4u; }
        if (ctx->pc != 0x1BA2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA2E4u; }
        if (ctx->pc != 0x1BA2E4u) { return; }
    }
    ctx->pc = 0x1BA2E4u;
    // 0x1ba2e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ba2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ba2e8: 0x144300df  bne         $v0, $v1, . + 4 + (0xDF << 2)
    ctx->pc = 0x1BA2E8u;
    {
        const bool branch_taken_0x1ba2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ba2e8) {
            ctx->pc = 0x1BA668u;
            goto label_1ba668;
        }
    }
    ctx->pc = 0x1BA2F0u;
    // 0x1ba2f0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ba2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ba2f4: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1ba2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1ba2f8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1ba2f8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ba2fc: 0x0  nop
    ctx->pc = 0x1ba2fcu;
    // NOP
    // 0x1ba300: 0x0  nop
    ctx->pc = 0x1ba300u;
    // NOP
    // 0x1ba304: 0x1010  mfhi        $v0
    ctx->pc = 0x1ba304u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1ba308: 0x144001c3  bnez        $v0, . + 4 + (0x1C3 << 2)
    ctx->pc = 0x1BA308u;
    {
        const bool branch_taken_0x1ba308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba308) {
            ctx->pc = 0x1BAA18u;
            goto label_1baa18;
        }
    }
    ctx->pc = 0x1BA310u;
    // 0x1ba310: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ba310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ba314: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1ba314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1ba318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba31c: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1ba31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba320: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ba320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba324: 0x450001bc  bc1f        . + 4 + (0x1BC << 2)
    ctx->pc = 0x1BA324u;
    {
        const bool branch_taken_0x1ba324 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BA328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA324u;
            // 0x1ba328: 0x3c02c2a0  lui         $v0, 0xC2A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba324) {
            ctx->pc = 0x1BAA18u;
            goto label_1baa18;
        }
    }
    ctx->pc = 0x1BA32Cu;
    // 0x1ba32c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba32cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba330: 0x0  nop
    ctx->pc = 0x1ba330u;
    // NOP
    // 0x1ba334: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ba334u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba338: 0x450101b7  bc1t        . + 4 + (0x1B7 << 2)
    ctx->pc = 0x1BA338u;
    {
        const bool branch_taken_0x1ba338 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba338) {
            ctx->pc = 0x1BAA18u;
            goto label_1baa18;
        }
    }
    ctx->pc = 0x1BA340u;
    // 0x1ba340: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1ba340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba344: 0x3c0241b8  lui         $v0, 0x41B8
    ctx->pc = 0x1ba344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16824 << 16));
    // 0x1ba348: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba34c: 0x0  nop
    ctx->pc = 0x1ba34cu;
    // NOP
    // 0x1ba350: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ba350u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba354: 0x45010040  bc1t        . + 4 + (0x40 << 2)
    ctx->pc = 0x1BA354u;
    {
        const bool branch_taken_0x1ba354 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba354) {
            ctx->pc = 0x1BA458u;
            goto label_1ba458;
        }
    }
    ctx->pc = 0x1BA35Cu;
    // 0x1ba35c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1ba35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba360: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba364: 0x2464fffb  addiu       $a0, $v1, -0x5
    ctx->pc = 0x1ba364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x1ba368: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1BA368u;
    SET_GPR_U32(ctx, 31, 0x1BA370u);
    ctx->pc = 0x1BA36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA368u;
            // 0x1ba36c: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA370u; }
        if (ctx->pc != 0x1BA370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA370u; }
        if (ctx->pc != 0x1BA370u) { return; }
    }
    ctx->pc = 0x1BA370u;
    // 0x1ba370: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x1ba370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1ba374: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1ba374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ba378: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1ba378u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
    // 0x1ba37c: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA37Cu;
    {
        const bool branch_taken_0x1ba37c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1BA380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA37Cu;
            // 0x1ba380: 0xae030110  sw          $v1, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba37c) {
            ctx->pc = 0x1BA390u;
            goto label_1ba390;
        }
    }
    ctx->pc = 0x1BA384u;
    // 0x1ba384: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BA384u;
    {
        const bool branch_taken_0x1ba384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba384) {
            ctx->pc = 0x1BA390u;
            goto label_1ba390;
        }
    }
    ctx->pc = 0x1BA38Cu;
    // 0x1ba38c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1ba38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1ba390:
    // 0x1ba390: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1BA390u;
    {
        const bool branch_taken_0x1ba390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba390) {
            ctx->pc = 0x1BA3F0u;
            goto label_1ba3f0;
        }
    }
    ctx->pc = 0x1BA398u;
    // 0x1ba398: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba39c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1ba39cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ba3a0: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1ba3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba3a4: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA3A4u;
    SET_GPR_U32(ctx, 31, 0x1BA3ACu);
    ctx->pc = 0x1BA3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA3A4u;
            // 0x1ba3a8: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA3ACu; }
        if (ctx->pc != 0x1BA3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA3ACu; }
        if (ctx->pc != 0x1BA3ACu) { return; }
    }
    ctx->pc = 0x1BA3ACu;
    // 0x1ba3ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba3b0: 0x24060073  addiu       $a2, $zero, 0x73
    ctx->pc = 0x1ba3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x1ba3b4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1ba3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba3b8: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA3B8u;
    SET_GPR_U32(ctx, 31, 0x1BA3C0u);
    ctx->pc = 0x1BA3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA3B8u;
            // 0x1ba3bc: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA3C0u; }
        if (ctx->pc != 0x1BA3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA3C0u; }
        if (ctx->pc != 0x1BA3C0u) { return; }
    }
    ctx->pc = 0x1BA3C0u;
    // 0x1ba3c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba3c4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1ba3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ba3c8: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1ba3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba3cc: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA3CCu;
    SET_GPR_U32(ctx, 31, 0x1BA3D4u);
    ctx->pc = 0x1BA3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA3CCu;
            // 0x1ba3d0: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA3D4u; }
        if (ctx->pc != 0x1BA3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA3D4u; }
        if (ctx->pc != 0x1BA3D4u) { return; }
    }
    ctx->pc = 0x1BA3D4u;
    // 0x1ba3d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba3d8: 0x2406006e  addiu       $a2, $zero, 0x6E
    ctx->pc = 0x1ba3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1ba3dc: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1ba3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba3e0: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA3E0u;
    SET_GPR_U32(ctx, 31, 0x1BA3E8u);
    ctx->pc = 0x1BA3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA3E0u;
            // 0x1ba3e4: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA3E8u; }
        if (ctx->pc != 0x1BA3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA3E8u; }
        if (ctx->pc != 0x1BA3E8u) { return; }
    }
    ctx->pc = 0x1BA3E8u;
    // 0x1ba3e8: 0x1000018b  b           . + 4 + (0x18B << 2)
    ctx->pc = 0x1BA3E8u;
    {
        const bool branch_taken_0x1ba3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba3e8) {
            ctx->pc = 0x1BAA18u;
            goto label_1baa18;
        }
    }
    ctx->pc = 0x1BA3F0u;
label_1ba3f0:
    // 0x1ba3f0: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1ba3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba3f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba3f8: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1ba3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ba3fc: 0x2464fffb  addiu       $a0, $v1, -0x5
    ctx->pc = 0x1ba3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x1ba400: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA400u;
    SET_GPR_U32(ctx, 31, 0x1BA408u);
    ctx->pc = 0x1BA404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA400u;
            // 0x1ba404: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA408u; }
        if (ctx->pc != 0x1BA408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA408u; }
        if (ctx->pc != 0x1BA408u) { return; }
    }
    ctx->pc = 0x1BA408u;
    // 0x1ba408: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1ba408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba40c: 0x24060069  addiu       $a2, $zero, 0x69
    ctx->pc = 0x1ba40cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x1ba410: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba414: 0x2464fffb  addiu       $a0, $v1, -0x5
    ctx->pc = 0x1ba414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x1ba418: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA418u;
    SET_GPR_U32(ctx, 31, 0x1BA420u);
    ctx->pc = 0x1BA41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA418u;
            // 0x1ba41c: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA420u; }
        if (ctx->pc != 0x1BA420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA420u; }
        if (ctx->pc != 0x1BA420u) { return; }
    }
    ctx->pc = 0x1BA420u;
    // 0x1ba420: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1ba420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba424: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1ba424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ba428: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba42c: 0x2464fffb  addiu       $a0, $v1, -0x5
    ctx->pc = 0x1ba42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x1ba430: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA430u;
    SET_GPR_U32(ctx, 31, 0x1BA438u);
    ctx->pc = 0x1BA434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA430u;
            // 0x1ba434: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA438u; }
        if (ctx->pc != 0x1BA438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA438u; }
        if (ctx->pc != 0x1BA438u) { return; }
    }
    ctx->pc = 0x1BA438u;
    // 0x1ba438: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1ba438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba43c: 0x2406006e  addiu       $a2, $zero, 0x6E
    ctx->pc = 0x1ba43cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1ba440: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba444: 0x2464fffb  addiu       $a0, $v1, -0x5
    ctx->pc = 0x1ba444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x1ba448: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA448u;
    SET_GPR_U32(ctx, 31, 0x1BA450u);
    ctx->pc = 0x1BA44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA448u;
            // 0x1ba44c: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA450u; }
        if (ctx->pc != 0x1BA450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA450u; }
        if (ctx->pc != 0x1BA450u) { return; }
    }
    ctx->pc = 0x1BA450u;
    // 0x1ba450: 0x10000171  b           . + 4 + (0x171 << 2)
    ctx->pc = 0x1BA450u;
    {
        const bool branch_taken_0x1ba450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba450) {
            ctx->pc = 0x1BAA18u;
            goto label_1baa18;
        }
    }
    ctx->pc = 0x1BA458u;
label_1ba458:
    // 0x1ba458: 0x3c02c1b8  lui         $v0, 0xC1B8
    ctx->pc = 0x1ba458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49592 << 16));
    // 0x1ba45c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba45cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba460: 0x0  nop
    ctx->pc = 0x1ba460u;
    // NOP
    // 0x1ba464: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ba464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba468: 0x45000041  bc1f        . + 4 + (0x41 << 2)
    ctx->pc = 0x1BA468u;
    {
        const bool branch_taken_0x1ba468 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba468) {
            ctx->pc = 0x1BA570u;
            goto label_1ba570;
        }
    }
    ctx->pc = 0x1BA470u;
    // 0x1ba470: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1ba470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba474: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba478: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x1ba478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x1ba47c: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1BA47Cu;
    SET_GPR_U32(ctx, 31, 0x1BA484u);
    ctx->pc = 0x1BA480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA47Cu;
            // 0x1ba480: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA484u; }
        if (ctx->pc != 0x1BA484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA484u; }
        if (ctx->pc != 0x1BA484u) { return; }
    }
    ctx->pc = 0x1BA484u;
    // 0x1ba484: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x1ba484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1ba488: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1ba488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ba48c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1ba48cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
    // 0x1ba490: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA490u;
    {
        const bool branch_taken_0x1ba490 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1BA494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA490u;
            // 0x1ba494: 0xae030110  sw          $v1, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba490) {
            ctx->pc = 0x1BA4A4u;
            goto label_1ba4a4;
        }
    }
    ctx->pc = 0x1BA498u;
    // 0x1ba498: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BA498u;
    {
        const bool branch_taken_0x1ba498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba498) {
            ctx->pc = 0x1BA4A4u;
            goto label_1ba4a4;
        }
    }
    ctx->pc = 0x1BA4A0u;
    // 0x1ba4a0: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1ba4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1ba4a4:
    // 0x1ba4a4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BA4A4u;
    {
        const bool branch_taken_0x1ba4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba4a4) {
            ctx->pc = 0x1BA508u;
            goto label_1ba508;
        }
    }
    ctx->pc = 0x1BA4ACu;
    // 0x1ba4ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba4b0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1ba4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ba4b4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1ba4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba4b8: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA4B8u;
    SET_GPR_U32(ctx, 31, 0x1BA4C0u);
    ctx->pc = 0x1BA4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA4B8u;
            // 0x1ba4bc: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA4C0u; }
        if (ctx->pc != 0x1BA4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA4C0u; }
        if (ctx->pc != 0x1BA4C0u) { return; }
    }
    ctx->pc = 0x1BA4C0u;
    // 0x1ba4c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba4c4: 0x24060073  addiu       $a2, $zero, 0x73
    ctx->pc = 0x1ba4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x1ba4c8: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1ba4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba4cc: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA4CCu;
    SET_GPR_U32(ctx, 31, 0x1BA4D4u);
    ctx->pc = 0x1BA4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA4CCu;
            // 0x1ba4d0: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA4D4u; }
        if (ctx->pc != 0x1BA4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA4D4u; }
        if (ctx->pc != 0x1BA4D4u) { return; }
    }
    ctx->pc = 0x1BA4D4u;
    // 0x1ba4d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba4d8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1ba4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ba4dc: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1ba4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba4e0: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA4E0u;
    SET_GPR_U32(ctx, 31, 0x1BA4E8u);
    ctx->pc = 0x1BA4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA4E0u;
            // 0x1ba4e4: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA4E8u; }
        if (ctx->pc != 0x1BA4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA4E8u; }
        if (ctx->pc != 0x1BA4E8u) { return; }
    }
    ctx->pc = 0x1BA4E8u;
    // 0x1ba4e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba4ec: 0x2406006e  addiu       $a2, $zero, 0x6E
    ctx->pc = 0x1ba4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1ba4f0: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1ba4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba4f4: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA4F4u;
    SET_GPR_U32(ctx, 31, 0x1BA4FCu);
    ctx->pc = 0x1BA4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA4F4u;
            // 0x1ba4f8: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA4FCu; }
        if (ctx->pc != 0x1BA4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA4FCu; }
        if (ctx->pc != 0x1BA4FCu) { return; }
    }
    ctx->pc = 0x1BA4FCu;
    // 0x1ba4fc: 0x10000146  b           . + 4 + (0x146 << 2)
    ctx->pc = 0x1BA4FCu;
    {
        const bool branch_taken_0x1ba4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba4fc) {
            ctx->pc = 0x1BAA18u;
            goto label_1baa18;
        }
    }
    ctx->pc = 0x1BA504u;
    // 0x1ba504: 0x0  nop
    ctx->pc = 0x1ba504u;
    // NOP
label_1ba508:
    // 0x1ba508: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1ba508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba50c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba510: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1ba510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ba514: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x1ba514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x1ba518: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA518u;
    SET_GPR_U32(ctx, 31, 0x1BA520u);
    ctx->pc = 0x1BA51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA518u;
            // 0x1ba51c: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA520u; }
        if (ctx->pc != 0x1BA520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA520u; }
        if (ctx->pc != 0x1BA520u) { return; }
    }
    ctx->pc = 0x1BA520u;
    // 0x1ba520: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1ba520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba524: 0x24060069  addiu       $a2, $zero, 0x69
    ctx->pc = 0x1ba524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x1ba528: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba52c: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x1ba52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x1ba530: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA530u;
    SET_GPR_U32(ctx, 31, 0x1BA538u);
    ctx->pc = 0x1BA534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA530u;
            // 0x1ba534: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA538u; }
        if (ctx->pc != 0x1BA538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA538u; }
        if (ctx->pc != 0x1BA538u) { return; }
    }
    ctx->pc = 0x1BA538u;
    // 0x1ba538: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1ba538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba53c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1ba53cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ba540: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba544: 0x2464fffb  addiu       $a0, $v1, -0x5
    ctx->pc = 0x1ba544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x1ba548: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA548u;
    SET_GPR_U32(ctx, 31, 0x1BA550u);
    ctx->pc = 0x1BA54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA548u;
            // 0x1ba54c: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA550u; }
        if (ctx->pc != 0x1BA550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA550u; }
        if (ctx->pc != 0x1BA550u) { return; }
    }
    ctx->pc = 0x1BA550u;
    // 0x1ba550: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1ba550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba554: 0x2406006e  addiu       $a2, $zero, 0x6E
    ctx->pc = 0x1ba554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1ba558: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba55c: 0x2464fffb  addiu       $a0, $v1, -0x5
    ctx->pc = 0x1ba55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x1ba560: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA560u;
    SET_GPR_U32(ctx, 31, 0x1BA568u);
    ctx->pc = 0x1BA564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA560u;
            // 0x1ba564: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA568u; }
        if (ctx->pc != 0x1BA568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA568u; }
        if (ctx->pc != 0x1BA568u) { return; }
    }
    ctx->pc = 0x1BA568u;
    // 0x1ba568: 0x1000012b  b           . + 4 + (0x12B << 2)
    ctx->pc = 0x1BA568u;
    {
        const bool branch_taken_0x1ba568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba568) {
            ctx->pc = 0x1BAA18u;
            goto label_1baa18;
        }
    }
    ctx->pc = 0x1BA570u;
label_1ba570:
    // 0x1ba570: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba574: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1ba574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba578: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1BA578u;
    SET_GPR_U32(ctx, 31, 0x1BA580u);
    ctx->pc = 0x1BA57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA578u;
            // 0x1ba57c: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA580u; }
        if (ctx->pc != 0x1BA580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA580u; }
        if (ctx->pc != 0x1BA580u) { return; }
    }
    ctx->pc = 0x1BA580u;
    // 0x1ba580: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x1ba580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1ba584: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1ba584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ba588: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1ba588u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
    // 0x1ba58c: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA58Cu;
    {
        const bool branch_taken_0x1ba58c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1BA590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA58Cu;
            // 0x1ba590: 0xae030110  sw          $v1, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba58c) {
            ctx->pc = 0x1BA5A0u;
            goto label_1ba5a0;
        }
    }
    ctx->pc = 0x1BA594u;
    // 0x1ba594: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BA594u;
    {
        const bool branch_taken_0x1ba594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba594) {
            ctx->pc = 0x1BA5A0u;
            goto label_1ba5a0;
        }
    }
    ctx->pc = 0x1BA59Cu;
    // 0x1ba59c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1ba59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1ba5a0:
    // 0x1ba5a0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1BA5A0u;
    {
        const bool branch_taken_0x1ba5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba5a0) {
            ctx->pc = 0x1BA600u;
            goto label_1ba600;
        }
    }
    ctx->pc = 0x1BA5A8u;
    // 0x1ba5a8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba5ac: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1ba5acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ba5b0: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1ba5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba5b4: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA5B4u;
    SET_GPR_U32(ctx, 31, 0x1BA5BCu);
    ctx->pc = 0x1BA5B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA5B4u;
            // 0x1ba5b8: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA5BCu; }
        if (ctx->pc != 0x1BA5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA5BCu; }
        if (ctx->pc != 0x1BA5BCu) { return; }
    }
    ctx->pc = 0x1BA5BCu;
    // 0x1ba5bc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba5c0: 0x24060073  addiu       $a2, $zero, 0x73
    ctx->pc = 0x1ba5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x1ba5c4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1ba5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba5c8: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA5C8u;
    SET_GPR_U32(ctx, 31, 0x1BA5D0u);
    ctx->pc = 0x1BA5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA5C8u;
            // 0x1ba5cc: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA5D0u; }
        if (ctx->pc != 0x1BA5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA5D0u; }
        if (ctx->pc != 0x1BA5D0u) { return; }
    }
    ctx->pc = 0x1BA5D0u;
    // 0x1ba5d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba5d4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1ba5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ba5d8: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1ba5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba5dc: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA5DCu;
    SET_GPR_U32(ctx, 31, 0x1BA5E4u);
    ctx->pc = 0x1BA5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA5DCu;
            // 0x1ba5e0: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA5E4u; }
        if (ctx->pc != 0x1BA5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA5E4u; }
        if (ctx->pc != 0x1BA5E4u) { return; }
    }
    ctx->pc = 0x1BA5E4u;
    // 0x1ba5e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba5e8: 0x2406006e  addiu       $a2, $zero, 0x6E
    ctx->pc = 0x1ba5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1ba5ec: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1ba5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba5f0: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA5F0u;
    SET_GPR_U32(ctx, 31, 0x1BA5F8u);
    ctx->pc = 0x1BA5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA5F0u;
            // 0x1ba5f4: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA5F8u; }
        if (ctx->pc != 0x1BA5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA5F8u; }
        if (ctx->pc != 0x1BA5F8u) { return; }
    }
    ctx->pc = 0x1BA5F8u;
    // 0x1ba5f8: 0x10000107  b           . + 4 + (0x107 << 2)
    ctx->pc = 0x1BA5F8u;
    {
        const bool branch_taken_0x1ba5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba5f8) {
            ctx->pc = 0x1BAA18u;
            goto label_1baa18;
        }
    }
    ctx->pc = 0x1BA600u;
label_1ba600:
    // 0x1ba600: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1ba600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba604: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba608: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1ba608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ba60c: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x1ba60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x1ba610: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA610u;
    SET_GPR_U32(ctx, 31, 0x1BA618u);
    ctx->pc = 0x1BA614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA610u;
            // 0x1ba614: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA618u; }
        if (ctx->pc != 0x1BA618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA618u; }
        if (ctx->pc != 0x1BA618u) { return; }
    }
    ctx->pc = 0x1BA618u;
    // 0x1ba618: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1ba618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba61c: 0x24060069  addiu       $a2, $zero, 0x69
    ctx->pc = 0x1ba61cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x1ba620: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba624: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x1ba624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x1ba628: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA628u;
    SET_GPR_U32(ctx, 31, 0x1BA630u);
    ctx->pc = 0x1BA62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA628u;
            // 0x1ba62c: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA630u; }
        if (ctx->pc != 0x1BA630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA630u; }
        if (ctx->pc != 0x1BA630u) { return; }
    }
    ctx->pc = 0x1BA630u;
    // 0x1ba630: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1ba630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba634: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1ba634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ba638: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba63c: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x1ba63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x1ba640: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA640u;
    SET_GPR_U32(ctx, 31, 0x1BA648u);
    ctx->pc = 0x1BA644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA640u;
            // 0x1ba644: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA648u; }
        if (ctx->pc != 0x1BA648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA648u; }
        if (ctx->pc != 0x1BA648u) { return; }
    }
    ctx->pc = 0x1BA648u;
    // 0x1ba648: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1ba648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba64c: 0x2406006e  addiu       $a2, $zero, 0x6E
    ctx->pc = 0x1ba64cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1ba650: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba654: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x1ba654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x1ba658: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA658u;
    SET_GPR_U32(ctx, 31, 0x1BA660u);
    ctx->pc = 0x1BA65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA658u;
            // 0x1ba65c: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA660u; }
        if (ctx->pc != 0x1BA660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA660u; }
        if (ctx->pc != 0x1BA660u) { return; }
    }
    ctx->pc = 0x1BA660u;
    // 0x1ba660: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x1BA660u;
    {
        const bool branch_taken_0x1ba660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba660) {
            ctx->pc = 0x1BAA18u;
            goto label_1baa18;
        }
    }
    ctx->pc = 0x1BA668u;
label_1ba668:
    // 0x1ba668: 0xc065d00  jal         func_197400
    ctx->pc = 0x1BA668u;
    SET_GPR_U32(ctx, 31, 0x1BA670u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA670u; }
        if (ctx->pc != 0x1BA670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA670u; }
        if (ctx->pc != 0x1BA670u) { return; }
    }
    ctx->pc = 0x1BA670u;
    // 0x1ba670: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ba670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba674: 0x144300a2  bne         $v0, $v1, . + 4 + (0xA2 << 2)
    ctx->pc = 0x1BA674u;
    {
        const bool branch_taken_0x1ba674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ba674) {
            ctx->pc = 0x1BA900u;
            goto label_1ba900;
        }
    }
    ctx->pc = 0x1BA67Cu;
    // 0x1ba67c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ba67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ba680: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1ba680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1ba684: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1ba684u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ba688: 0x0  nop
    ctx->pc = 0x1ba688u;
    // NOP
    // 0x1ba68c: 0x0  nop
    ctx->pc = 0x1ba68cu;
    // NOP
    // 0x1ba690: 0x1010  mfhi        $v0
    ctx->pc = 0x1ba690u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1ba694: 0x144000e0  bnez        $v0, . + 4 + (0xE0 << 2)
    ctx->pc = 0x1BA694u;
    {
        const bool branch_taken_0x1ba694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba694) {
            ctx->pc = 0x1BAA18u;
            goto label_1baa18;
        }
    }
    ctx->pc = 0x1BA69Cu;
    // 0x1ba69c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ba69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ba6a0: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1ba6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1ba6a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba6a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba6a8: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1ba6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba6ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ba6acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba6b0: 0x450000d9  bc1f        . + 4 + (0xD9 << 2)
    ctx->pc = 0x1BA6B0u;
    {
        const bool branch_taken_0x1ba6b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BA6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA6B0u;
            // 0x1ba6b4: 0x3c02c2a0  lui         $v0, 0xC2A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba6b0) {
            ctx->pc = 0x1BAA18u;
            goto label_1baa18;
        }
    }
    ctx->pc = 0x1BA6B8u;
    // 0x1ba6b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba6b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba6bc: 0x0  nop
    ctx->pc = 0x1ba6bcu;
    // NOP
    // 0x1ba6c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ba6c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba6c4: 0x450100d4  bc1t        . + 4 + (0xD4 << 2)
    ctx->pc = 0x1BA6C4u;
    {
        const bool branch_taken_0x1ba6c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba6c4) {
            ctx->pc = 0x1BAA18u;
            goto label_1baa18;
        }
    }
    ctx->pc = 0x1BA6CCu;
    // 0x1ba6cc: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1ba6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba6d0: 0x3c0241b8  lui         $v0, 0x41B8
    ctx->pc = 0x1ba6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16824 << 16));
    // 0x1ba6d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba6d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba6d8: 0x0  nop
    ctx->pc = 0x1ba6d8u;
    // NOP
    // 0x1ba6dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ba6dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba6e0: 0x4501002d  bc1t        . + 4 + (0x2D << 2)
    ctx->pc = 0x1BA6E0u;
    {
        const bool branch_taken_0x1ba6e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba6e0) {
            ctx->pc = 0x1BA798u;
            goto label_1ba798;
        }
    }
    ctx->pc = 0x1BA6E8u;
    // 0x1ba6e8: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1ba6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba6ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba6f0: 0x2464fffb  addiu       $a0, $v1, -0x5
    ctx->pc = 0x1ba6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x1ba6f4: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1BA6F4u;
    SET_GPR_U32(ctx, 31, 0x1BA6FCu);
    ctx->pc = 0x1BA6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA6F4u;
            // 0x1ba6f8: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA6FCu; }
        if (ctx->pc != 0x1BA6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA6FCu; }
        if (ctx->pc != 0x1BA6FCu) { return; }
    }
    ctx->pc = 0x1BA6FCu;
    // 0x1ba6fc: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x1ba6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1ba700: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1ba700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ba704: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1ba704u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
    // 0x1ba708: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA708u;
    {
        const bool branch_taken_0x1ba708 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1BA70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA708u;
            // 0x1ba70c: 0xae030110  sw          $v1, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba708) {
            ctx->pc = 0x1BA71Cu;
            goto label_1ba71c;
        }
    }
    ctx->pc = 0x1BA710u;
    // 0x1ba710: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BA710u;
    {
        const bool branch_taken_0x1ba710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba710) {
            ctx->pc = 0x1BA71Cu;
            goto label_1ba71c;
        }
    }
    ctx->pc = 0x1BA718u;
    // 0x1ba718: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1ba718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1ba71c:
    // 0x1ba71c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1BA71Cu;
    {
        const bool branch_taken_0x1ba71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba71c) {
            ctx->pc = 0x1BA760u;
            goto label_1ba760;
        }
    }
    ctx->pc = 0x1BA724u;
    // 0x1ba724: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1ba724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba728: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1ba728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ba72c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba730: 0x2464fffb  addiu       $a0, $v1, -0x5
    ctx->pc = 0x1ba730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x1ba734: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA734u;
    SET_GPR_U32(ctx, 31, 0x1BA73Cu);
    ctx->pc = 0x1BA738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA734u;
            // 0x1ba738: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA73Cu; }
        if (ctx->pc != 0x1BA73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA73Cu; }
        if (ctx->pc != 0x1BA73Cu) { return; }
    }
    ctx->pc = 0x1BA73Cu;
    // 0x1ba73c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1ba73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba740: 0x24060073  addiu       $a2, $zero, 0x73
    ctx->pc = 0x1ba740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x1ba744: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba748: 0x2464fffb  addiu       $a0, $v1, -0x5
    ctx->pc = 0x1ba748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x1ba74c: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA74Cu;
    SET_GPR_U32(ctx, 31, 0x1BA754u);
    ctx->pc = 0x1BA750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA74Cu;
            // 0x1ba750: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA754u; }
        if (ctx->pc != 0x1BA754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA754u; }
        if (ctx->pc != 0x1BA754u) { return; }
    }
    ctx->pc = 0x1BA754u;
    // 0x1ba754: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x1BA754u;
    {
        const bool branch_taken_0x1ba754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba754) {
            ctx->pc = 0x1BAA18u;
            goto label_1baa18;
        }
    }
    ctx->pc = 0x1BA75Cu;
    // 0x1ba75c: 0x0  nop
    ctx->pc = 0x1ba75cu;
    // NOP
label_1ba760:
    // 0x1ba760: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1ba760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba764: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba768: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1ba768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ba76c: 0x2464fffb  addiu       $a0, $v1, -0x5
    ctx->pc = 0x1ba76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x1ba770: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA770u;
    SET_GPR_U32(ctx, 31, 0x1BA778u);
    ctx->pc = 0x1BA774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA770u;
            // 0x1ba774: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA778u; }
        if (ctx->pc != 0x1BA778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA778u; }
        if (ctx->pc != 0x1BA778u) { return; }
    }
    ctx->pc = 0x1BA778u;
    // 0x1ba778: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1ba778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba77c: 0x24060069  addiu       $a2, $zero, 0x69
    ctx->pc = 0x1ba77cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x1ba780: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba784: 0x2464fffb  addiu       $a0, $v1, -0x5
    ctx->pc = 0x1ba784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x1ba788: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA788u;
    SET_GPR_U32(ctx, 31, 0x1BA790u);
    ctx->pc = 0x1BA78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA788u;
            // 0x1ba78c: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA790u; }
        if (ctx->pc != 0x1BA790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA790u; }
        if (ctx->pc != 0x1BA790u) { return; }
    }
    ctx->pc = 0x1BA790u;
    // 0x1ba790: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x1BA790u;
    {
        const bool branch_taken_0x1ba790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba790) {
            ctx->pc = 0x1BAA18u;
            goto label_1baa18;
        }
    }
    ctx->pc = 0x1BA798u;
label_1ba798:
    // 0x1ba798: 0x3c02c1b8  lui         $v0, 0xC1B8
    ctx->pc = 0x1ba798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49592 << 16));
    // 0x1ba79c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba79cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba7a0: 0x0  nop
    ctx->pc = 0x1ba7a0u;
    // NOP
    // 0x1ba7a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ba7a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba7a8: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
    ctx->pc = 0x1BA7A8u;
    {
        const bool branch_taken_0x1ba7a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba7a8) {
            ctx->pc = 0x1BA860u;
            goto label_1ba860;
        }
    }
    ctx->pc = 0x1BA7B0u;
    // 0x1ba7b0: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1ba7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba7b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba7b8: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x1ba7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x1ba7bc: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1BA7BCu;
    SET_GPR_U32(ctx, 31, 0x1BA7C4u);
    ctx->pc = 0x1BA7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA7BCu;
            // 0x1ba7c0: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA7C4u; }
        if (ctx->pc != 0x1BA7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA7C4u; }
        if (ctx->pc != 0x1BA7C4u) { return; }
    }
    ctx->pc = 0x1BA7C4u;
    // 0x1ba7c4: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x1ba7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1ba7c8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1ba7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ba7cc: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1ba7ccu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
    // 0x1ba7d0: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA7D0u;
    {
        const bool branch_taken_0x1ba7d0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1BA7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA7D0u;
            // 0x1ba7d4: 0xae030110  sw          $v1, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba7d0) {
            ctx->pc = 0x1BA7E4u;
            goto label_1ba7e4;
        }
    }
    ctx->pc = 0x1BA7D8u;
    // 0x1ba7d8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BA7D8u;
    {
        const bool branch_taken_0x1ba7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba7d8) {
            ctx->pc = 0x1BA7E4u;
            goto label_1ba7e4;
        }
    }
    ctx->pc = 0x1BA7E0u;
    // 0x1ba7e0: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1ba7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1ba7e4:
    // 0x1ba7e4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1BA7E4u;
    {
        const bool branch_taken_0x1ba7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba7e4) {
            ctx->pc = 0x1BA828u;
            goto label_1ba828;
        }
    }
    ctx->pc = 0x1BA7ECu;
    // 0x1ba7ec: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1ba7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba7f0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1ba7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ba7f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba7f8: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x1ba7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x1ba7fc: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA7FCu;
    SET_GPR_U32(ctx, 31, 0x1BA804u);
    ctx->pc = 0x1BA800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA7FCu;
            // 0x1ba800: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA804u; }
        if (ctx->pc != 0x1BA804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA804u; }
        if (ctx->pc != 0x1BA804u) { return; }
    }
    ctx->pc = 0x1BA804u;
    // 0x1ba804: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1ba804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba808: 0x24060073  addiu       $a2, $zero, 0x73
    ctx->pc = 0x1ba808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x1ba80c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba810: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x1ba810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x1ba814: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA814u;
    SET_GPR_U32(ctx, 31, 0x1BA81Cu);
    ctx->pc = 0x1BA818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA814u;
            // 0x1ba818: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA81Cu; }
        if (ctx->pc != 0x1BA81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA81Cu; }
        if (ctx->pc != 0x1BA81Cu) { return; }
    }
    ctx->pc = 0x1BA81Cu;
    // 0x1ba81c: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x1BA81Cu;
    {
        const bool branch_taken_0x1ba81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba81c) {
            ctx->pc = 0x1BAA18u;
            goto label_1baa18;
        }
    }
    ctx->pc = 0x1BA824u;
    // 0x1ba824: 0x0  nop
    ctx->pc = 0x1ba824u;
    // NOP
label_1ba828:
    // 0x1ba828: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1ba828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba82c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba830: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1ba830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ba834: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x1ba834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x1ba838: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA838u;
    SET_GPR_U32(ctx, 31, 0x1BA840u);
    ctx->pc = 0x1BA83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA838u;
            // 0x1ba83c: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA840u; }
        if (ctx->pc != 0x1BA840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA840u; }
        if (ctx->pc != 0x1BA840u) { return; }
    }
    ctx->pc = 0x1BA840u;
    // 0x1ba840: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1ba840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba844: 0x24060069  addiu       $a2, $zero, 0x69
    ctx->pc = 0x1ba844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x1ba848: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba84c: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x1ba84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x1ba850: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA850u;
    SET_GPR_U32(ctx, 31, 0x1BA858u);
    ctx->pc = 0x1BA854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA850u;
            // 0x1ba854: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA858u; }
        if (ctx->pc != 0x1BA858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA858u; }
        if (ctx->pc != 0x1BA858u) { return; }
    }
    ctx->pc = 0x1BA858u;
    // 0x1ba858: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1BA858u;
    {
        const bool branch_taken_0x1ba858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba858) {
            ctx->pc = 0x1BAA18u;
            goto label_1baa18;
        }
    }
    ctx->pc = 0x1BA860u;
label_1ba860:
    // 0x1ba860: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba864: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1ba864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba868: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1BA868u;
    SET_GPR_U32(ctx, 31, 0x1BA870u);
    ctx->pc = 0x1BA86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA868u;
            // 0x1ba86c: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA870u; }
        if (ctx->pc != 0x1BA870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA870u; }
        if (ctx->pc != 0x1BA870u) { return; }
    }
    ctx->pc = 0x1BA870u;
    // 0x1ba870: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x1ba870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1ba874: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1ba874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ba878: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1ba878u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
    // 0x1ba87c: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA87Cu;
    {
        const bool branch_taken_0x1ba87c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1BA880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA87Cu;
            // 0x1ba880: 0xae030110  sw          $v1, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba87c) {
            ctx->pc = 0x1BA890u;
            goto label_1ba890;
        }
    }
    ctx->pc = 0x1BA884u;
    // 0x1ba884: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BA884u;
    {
        const bool branch_taken_0x1ba884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba884) {
            ctx->pc = 0x1BA890u;
            goto label_1ba890;
        }
    }
    ctx->pc = 0x1BA88Cu;
    // 0x1ba88c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1ba88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1ba890:
    // 0x1ba890: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1BA890u;
    {
        const bool branch_taken_0x1ba890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba890) {
            ctx->pc = 0x1BA8C8u;
            goto label_1ba8c8;
        }
    }
    ctx->pc = 0x1BA898u;
    // 0x1ba898: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba89c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1ba89cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ba8a0: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1ba8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba8a4: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA8A4u;
    SET_GPR_U32(ctx, 31, 0x1BA8ACu);
    ctx->pc = 0x1BA8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA8A4u;
            // 0x1ba8a8: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA8ACu; }
        if (ctx->pc != 0x1BA8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA8ACu; }
        if (ctx->pc != 0x1BA8ACu) { return; }
    }
    ctx->pc = 0x1BA8ACu;
    // 0x1ba8ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba8b0: 0x2406006e  addiu       $a2, $zero, 0x6E
    ctx->pc = 0x1ba8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1ba8b4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1ba8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba8b8: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA8B8u;
    SET_GPR_U32(ctx, 31, 0x1BA8C0u);
    ctx->pc = 0x1BA8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA8B8u;
            // 0x1ba8bc: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA8C0u; }
        if (ctx->pc != 0x1BA8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA8C0u; }
        if (ctx->pc != 0x1BA8C0u) { return; }
    }
    ctx->pc = 0x1BA8C0u;
    // 0x1ba8c0: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1BA8C0u;
    {
        const bool branch_taken_0x1ba8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba8c0) {
            ctx->pc = 0x1BAA18u;
            goto label_1baa18;
        }
    }
    ctx->pc = 0x1BA8C8u;
label_1ba8c8:
    // 0x1ba8c8: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1ba8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba8cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba8d0: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1ba8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ba8d4: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x1ba8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x1ba8d8: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA8D8u;
    SET_GPR_U32(ctx, 31, 0x1BA8E0u);
    ctx->pc = 0x1BA8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA8D8u;
            // 0x1ba8dc: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA8E0u; }
        if (ctx->pc != 0x1BA8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA8E0u; }
        if (ctx->pc != 0x1BA8E0u) { return; }
    }
    ctx->pc = 0x1BA8E0u;
    // 0x1ba8e0: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1ba8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba8e4: 0x24060069  addiu       $a2, $zero, 0x69
    ctx->pc = 0x1ba8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x1ba8e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba8ec: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x1ba8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x1ba8f0: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA8F0u;
    SET_GPR_U32(ctx, 31, 0x1BA8F8u);
    ctx->pc = 0x1BA8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA8F0u;
            // 0x1ba8f4: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA8F8u; }
        if (ctx->pc != 0x1BA8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA8F8u; }
        if (ctx->pc != 0x1BA8F8u) { return; }
    }
    ctx->pc = 0x1BA8F8u;
    // 0x1ba8f8: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1BA8F8u;
    {
        const bool branch_taken_0x1ba8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba8f8) {
            ctx->pc = 0x1BAA18u;
            goto label_1baa18;
        }
    }
    ctx->pc = 0x1BA900u;
label_1ba900:
    // 0x1ba900: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ba900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ba904: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1ba904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1ba908: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1ba908u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ba90c: 0x0  nop
    ctx->pc = 0x1ba90cu;
    // NOP
    // 0x1ba910: 0x0  nop
    ctx->pc = 0x1ba910u;
    // NOP
    // 0x1ba914: 0x1010  mfhi        $v0
    ctx->pc = 0x1ba914u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1ba918: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1BA918u;
    {
        const bool branch_taken_0x1ba918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba918) {
            ctx->pc = 0x1BAA18u;
            goto label_1baa18;
        }
    }
    ctx->pc = 0x1BA920u;
    // 0x1ba920: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ba920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ba924: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1ba924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1ba928: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba92c: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1ba92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba930: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ba930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba934: 0x45000038  bc1f        . + 4 + (0x38 << 2)
    ctx->pc = 0x1BA934u;
    {
        const bool branch_taken_0x1ba934 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BA938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA934u;
            // 0x1ba938: 0x3c02c2a0  lui         $v0, 0xC2A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba934) {
            ctx->pc = 0x1BAA18u;
            goto label_1baa18;
        }
    }
    ctx->pc = 0x1BA93Cu;
    // 0x1ba93c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba93cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba940: 0x0  nop
    ctx->pc = 0x1ba940u;
    // NOP
    // 0x1ba944: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ba944u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba948: 0x45010033  bc1t        . + 4 + (0x33 << 2)
    ctx->pc = 0x1BA948u;
    {
        const bool branch_taken_0x1ba948 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba948) {
            ctx->pc = 0x1BAA18u;
            goto label_1baa18;
        }
    }
    ctx->pc = 0x1BA950u;
    // 0x1ba950: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1ba950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba954: 0x3c0241b8  lui         $v0, 0x41B8
    ctx->pc = 0x1ba954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16824 << 16));
    // 0x1ba958: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba95c: 0x0  nop
    ctx->pc = 0x1ba95cu;
    // NOP
    // 0x1ba960: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ba960u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba964: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x1BA964u;
    {
        const bool branch_taken_0x1ba964 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba964) {
            ctx->pc = 0x1BA9A0u;
            goto label_1ba9a0;
        }
    }
    ctx->pc = 0x1BA96Cu;
    // 0x1ba96c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1ba96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba970: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba974: 0x2464fffb  addiu       $a0, $v1, -0x5
    ctx->pc = 0x1ba974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x1ba978: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1BA978u;
    SET_GPR_U32(ctx, 31, 0x1BA980u);
    ctx->pc = 0x1BA97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA978u;
            // 0x1ba97c: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA980u; }
        if (ctx->pc != 0x1BA980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA980u; }
        if (ctx->pc != 0x1BA980u) { return; }
    }
    ctx->pc = 0x1BA980u;
    // 0x1ba980: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1ba980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba984: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ba984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba988: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba98c: 0x2464fffb  addiu       $a0, $v1, -0x5
    ctx->pc = 0x1ba98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x1ba990: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA990u;
    SET_GPR_U32(ctx, 31, 0x1BA998u);
    ctx->pc = 0x1BA994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA990u;
            // 0x1ba994: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA998u; }
        if (ctx->pc != 0x1BA998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA998u; }
        if (ctx->pc != 0x1BA998u) { return; }
    }
    ctx->pc = 0x1BA998u;
    // 0x1ba998: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1BA998u;
    {
        const bool branch_taken_0x1ba998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba998) {
            ctx->pc = 0x1BAA18u;
            goto label_1baa18;
        }
    }
    ctx->pc = 0x1BA9A0u;
label_1ba9a0:
    // 0x1ba9a0: 0x3c02c1b8  lui         $v0, 0xC1B8
    ctx->pc = 0x1ba9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49592 << 16));
    // 0x1ba9a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba9a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba9a8: 0x0  nop
    ctx->pc = 0x1ba9a8u;
    // NOP
    // 0x1ba9ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ba9acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba9b0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1BA9B0u;
    {
        const bool branch_taken_0x1ba9b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba9b0) {
            ctx->pc = 0x1BA9F0u;
            goto label_1ba9f0;
        }
    }
    ctx->pc = 0x1BA9B8u;
    // 0x1ba9b8: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1ba9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba9bc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba9c0: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x1ba9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x1ba9c4: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1BA9C4u;
    SET_GPR_U32(ctx, 31, 0x1BA9CCu);
    ctx->pc = 0x1BA9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA9C4u;
            // 0x1ba9c8: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA9CCu; }
        if (ctx->pc != 0x1BA9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA9CCu; }
        if (ctx->pc != 0x1BA9CCu) { return; }
    }
    ctx->pc = 0x1BA9CCu;
    // 0x1ba9cc: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1ba9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba9d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ba9d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba9d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba9d8: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x1ba9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x1ba9dc: 0xc065508  jal         func_195420
    ctx->pc = 0x1BA9DCu;
    SET_GPR_U32(ctx, 31, 0x1BA9E4u);
    ctx->pc = 0x1BA9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA9DCu;
            // 0x1ba9e0: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA9E4u; }
        if (ctx->pc != 0x1BA9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA9E4u; }
        if (ctx->pc != 0x1BA9E4u) { return; }
    }
    ctx->pc = 0x1BA9E4u;
    // 0x1ba9e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1BA9E4u;
    {
        const bool branch_taken_0x1ba9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba9e4) {
            ctx->pc = 0x1BAA18u;
            goto label_1baa18;
        }
    }
    ctx->pc = 0x1BA9ECu;
    // 0x1ba9ec: 0x0  nop
    ctx->pc = 0x1ba9ecu;
    // NOP
label_1ba9f0:
    // 0x1ba9f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ba9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba9f4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1ba9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ba9f8: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1BA9F8u;
    SET_GPR_U32(ctx, 31, 0x1BAA00u);
    ctx->pc = 0x1BA9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA9F8u;
            // 0x1ba9fc: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAA00u; }
        if (ctx->pc != 0x1BAA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAA00u; }
        if (ctx->pc != 0x1BAA00u) { return; }
    }
    ctx->pc = 0x1BAA00u;
    // 0x1baa00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1baa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1baa04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1baa04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baa08: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1baa08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1baa0c: 0xc065508  jal         func_195420
    ctx->pc = 0x1BAA0Cu;
    SET_GPR_U32(ctx, 31, 0x1BAA14u);
    ctx->pc = 0x1BAA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAA0Cu;
            // 0x1baa10: 0x2445001e  addiu       $a1, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAA14u; }
        if (ctx->pc != 0x1BAA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAA14u; }
        if (ctx->pc != 0x1BAA14u) { return; }
    }
    ctx->pc = 0x1BAA14u;
    // 0x1baa14: 0x0  nop
    ctx->pc = 0x1baa14u;
    // NOP
label_1baa18:
    // 0x1baa18: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1baa18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1baa1c: 0x8c231bb8  lw          $v1, 0x1BB8($at)
    ctx->pc = 0x1baa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7096)));
    // 0x1baa20: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1baa20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1baa24: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1baa24u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1baa28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1baa28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1baa2c: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1baa2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1baa30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1baa30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1baa34: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1BAA34u;
    {
        const bool branch_taken_0x1baa34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BAA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAA34u;
            // 0x1baa38: 0x24640014  addiu       $a0, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa34) {
            ctx->pc = 0x1BAA58u;
            goto label_1baa58;
        }
    }
    ctx->pc = 0x1BAA3Cu;
    // 0x1baa3c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1baa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1baa40: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1baa40u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1baa44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1baa44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1baa48: 0x0  nop
    ctx->pc = 0x1baa48u;
    // NOP
    // 0x1baa4c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1baa4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1baa50: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1baa50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1baa54: 0x0  nop
    ctx->pc = 0x1baa54u;
    // NOP
label_1baa58:
    // 0x1baa58: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1baa58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1baa5c: 0x8c231bb8  lw          $v1, 0x1BB8($at)
    ctx->pc = 0x1baa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7096)));
    // 0x1baa60: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1baa60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1baa64: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1baa64u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1baa68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1baa68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1baa6c: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1baa6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1baa70: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1baa70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1baa74: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1BAA74u;
    {
        const bool branch_taken_0x1baa74 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BAA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAA74u;
            // 0x1baa78: 0x24640014  addiu       $a0, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa74) {
            ctx->pc = 0x1BAA98u;
            goto label_1baa98;
        }
    }
    ctx->pc = 0x1BAA7Cu;
    // 0x1baa7c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1baa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1baa80: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1baa80u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1baa84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1baa84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1baa88: 0x0  nop
    ctx->pc = 0x1baa88u;
    // NOP
    // 0x1baa8c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1baa8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1baa90: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1baa90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1baa94: 0x0  nop
    ctx->pc = 0x1baa94u;
    // NOP
label_1baa98:
    // 0x1baa98: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x1BAA98u;
    SET_GPR_U32(ctx, 31, 0x1BAAA0u);
    ctx->pc = 0x1BAA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAA98u;
            // 0x1baa9c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAAA0u; }
        if (ctx->pc != 0x1BAAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAAA0u; }
        if (ctx->pc != 0x1BAAA0u) { return; }
    }
    ctx->pc = 0x1BAAA0u;
    // 0x1baaa0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1baaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1baaa4: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1baaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1baaa8: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x1BAAA8u;
    SET_GPR_U32(ctx, 31, 0x1BAAB0u);
    ctx->pc = 0x1BAAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAAA8u;
            // 0x1baaac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAAB0u; }
        if (ctx->pc != 0x1BAAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAAB0u; }
        if (ctx->pc != 0x1BAAB0u) { return; }
    }
    ctx->pc = 0x1BAAB0u;
    // 0x1baab0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1baab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1baab4: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1baab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1baab8: 0xc04b804  jal         func_12E010
    ctx->pc = 0x1BAAB8u;
    SET_GPR_U32(ctx, 31, 0x1BAAC0u);
    ctx->pc = 0x1BAABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAAB8u;
            // 0x1baabc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAAC0u; }
        if (ctx->pc != 0x1BAAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAAC0u; }
        if (ctx->pc != 0x1BAAC0u) { return; }
    }
    ctx->pc = 0x1BAAC0u;
    // 0x1baac0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1baac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1baac4: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1baac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1baac8: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x1BAAC8u;
    SET_GPR_U32(ctx, 31, 0x1BAAD0u);
    ctx->pc = 0x1BAACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAAC8u;
            // 0x1baacc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAAD0u; }
        if (ctx->pc != 0x1BAAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAAD0u; }
        if (ctx->pc != 0x1BAAD0u) { return; }
    }
    ctx->pc = 0x1BAAD0u;
    // 0x1baad0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1baad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1baad4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1baad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baad8: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x1BAAD8u;
    SET_GPR_U32(ctx, 31, 0x1BAAE0u);
    ctx->pc = 0x1BAADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAAD8u;
            // 0x1baadc: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAAE0u; }
        if (ctx->pc != 0x1BAAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAAE0u; }
        if (ctx->pc != 0x1BAAE0u) { return; }
    }
    ctx->pc = 0x1BAAE0u;
    // 0x1baae0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1baae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1baae4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1baae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1baae8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1baae8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1baaec: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1BAAECu;
    {
        const bool branch_taken_0x1baaec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baaec) {
            ctx->pc = 0x1BAB40u;
            goto label_1bab40;
        }
    }
    ctx->pc = 0x1BAAF4u;
    // 0x1baaf4: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1baaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1baaf8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BAAF8u;
    {
        const bool branch_taken_0x1baaf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baaf8) {
            ctx->pc = 0x1BAB10u;
            goto label_1bab10;
        }
    }
    ctx->pc = 0x1BAB00u;
    // 0x1bab00: 0xc0604f0  jal         func_1813C0
    ctx->pc = 0x1BAB00u;
    SET_GPR_U32(ctx, 31, 0x1BAB08u);
    ctx->pc = 0x1BAB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAB00u;
            // 0x1bab04: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAB08u; }
        if (ctx->pc != 0x1BAB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAB08u; }
        if (ctx->pc != 0x1BAB08u) { return; }
    }
    ctx->pc = 0x1BAB08u;
    // 0x1bab08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BAB08u;
    {
        const bool branch_taken_0x1bab08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bab08) {
            ctx->pc = 0x1BAB18u;
            goto label_1bab18;
        }
    }
    ctx->pc = 0x1BAB10u;
label_1bab10:
    // 0x1bab10: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1BAB10u;
    SET_GPR_U32(ctx, 31, 0x1BAB18u);
    ctx->pc = 0x1BAB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAB10u;
            // 0x1bab14: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAB18u; }
        if (ctx->pc != 0x1BAB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAB18u; }
        if (ctx->pc != 0x1BAB18u) { return; }
    }
    ctx->pc = 0x1BAB18u;
label_1bab18:
    // 0x1bab18: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1bab18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1bab1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BAB1Cu;
    {
        const bool branch_taken_0x1bab1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bab1c) {
            ctx->pc = 0x1BAB30u;
            goto label_1bab30;
        }
    }
    ctx->pc = 0x1BAB24u;
    // 0x1bab24: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1BAB24u;
    {
        const bool branch_taken_0x1bab24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAB24u;
            // 0x1bab28: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab24) {
            ctx->pc = 0x1BAB50u;
            goto label_1bab50;
        }
    }
    ctx->pc = 0x1BAB2Cu;
    // 0x1bab2c: 0x0  nop
    ctx->pc = 0x1bab2cu;
    // NOP
label_1bab30:
    // 0x1bab30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bab30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bab34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BAB34u;
    {
        const bool branch_taken_0x1bab34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAB34u;
            // 0x1bab38: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab34) {
            ctx->pc = 0x1BAB50u;
            goto label_1bab50;
        }
    }
    ctx->pc = 0x1BAB3Cu;
    // 0x1bab3c: 0x0  nop
    ctx->pc = 0x1bab3cu;
    // NOP
label_1bab40:
    // 0x1bab40: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1BAB40u;
    SET_GPR_U32(ctx, 31, 0x1BAB48u);
    ctx->pc = 0x1BAB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAB40u;
            // 0x1bab44: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAB48u; }
        if (ctx->pc != 0x1BAB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAB48u; }
        if (ctx->pc != 0x1BAB48u) { return; }
    }
    ctx->pc = 0x1BAB48u;
    // 0x1bab48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bab48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bab4c: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1bab4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1bab50:
    // 0x1bab50: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1bab50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bab54: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1bab54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1bab58: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1bab58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bab5c: 0x1c400016  bgtz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BAB5Cu;
    {
        const bool branch_taken_0x1bab5c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1bab5c) {
            ctx->pc = 0x1BABB8u;
            goto label_1babb8;
        }
    }
    ctx->pc = 0x1BAB64u;
    // 0x1bab64: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1bab64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bab68: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1bab68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1bab6c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1bab6cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1bab70: 0x0  nop
    ctx->pc = 0x1bab70u;
    // NOP
    // 0x1bab74: 0x0  nop
    ctx->pc = 0x1bab74u;
    // NOP
    // 0x1bab78: 0x1010  mfhi        $v0
    ctx->pc = 0x1bab78u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1bab7c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BAB7Cu;
    {
        const bool branch_taken_0x1bab7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bab7c) {
            ctx->pc = 0x1BAB98u;
            goto label_1bab98;
        }
    }
    ctx->pc = 0x1BAB84u;
    // 0x1bab84: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1bab84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1bab88: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bab88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bab8c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1bab8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1bab90: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1BAB90u;
    SET_GPR_U32(ctx, 31, 0x1BAB98u);
    ctx->pc = 0x1BAB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAB90u;
            // 0x1bab94: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAB98u; }
        if (ctx->pc != 0x1BAB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAB98u; }
        if (ctx->pc != 0x1BAB98u) { return; }
    }
    ctx->pc = 0x1BAB98u;
label_1bab98:
    // 0x1bab98: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x1bab98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1bab9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1baba0: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x1baba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    // 0x1baba4: 0x8e050124  lw          $a1, 0x124($s0)
    ctx->pc = 0x1baba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1baba8: 0xc0604b0  jal         func_1812C0
    ctx->pc = 0x1BABA8u;
    SET_GPR_U32(ctx, 31, 0x1BABB0u);
    ctx->pc = 0x1BABACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BABA8u;
            // 0x1babac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BABB0u; }
        if (ctx->pc != 0x1BABB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BABB0u; }
        if (ctx->pc != 0x1BABB0u) { return; }
    }
    ctx->pc = 0x1BABB0u;
    // 0x1babb0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1BABB0u;
    {
        const bool branch_taken_0x1babb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1babb0) {
            ctx->pc = 0x1BAC38u;
            goto label_1bac38;
        }
    }
    ctx->pc = 0x1BABB8u;
label_1babb8:
    // 0x1babb8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1babb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1babbc: 0x3c06001b  lui         $a2, 0x1B
    ctx->pc = 0x1babbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27 << 16));
    // 0x1babc0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1babc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1babc4: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1babc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1babc8: 0x24c67e50  addiu       $a2, $a2, 0x7E50
    ctx->pc = 0x1babc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32336));
    // 0x1babcc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1babccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1babd0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1babd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1babd4: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1babd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x1babd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1babd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1babdc: 0x0  nop
    ctx->pc = 0x1babdcu;
    // NOP
    // 0x1babe0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1babe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1babe4: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1babe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1babe8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1babe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1babec: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1babecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x1babf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1babf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1babf4: 0x0  nop
    ctx->pc = 0x1babf4u;
    // NOP
    // 0x1babf8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1babf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1babfc: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1babfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1bac00: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1bac00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1bac04: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1bac04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1bac08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bac08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bac0c: 0x0  nop
    ctx->pc = 0x1bac0cu;
    // NOP
    // 0x1bac10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bac10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bac14: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1bac14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1bac18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1bac18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bac1c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1bac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1bac20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bac20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bac24: 0x0  nop
    ctx->pc = 0x1bac24u;
    // NOP
    // 0x1bac28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bac28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bac2c: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1BAC2Cu;
    SET_GPR_U32(ctx, 31, 0x1BAC34u);
    ctx->pc = 0x1BAC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAC2Cu;
            // 0x1bac30: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC34u; }
        if (ctx->pc != 0x1BAC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC34u; }
        if (ctx->pc != 0x1BAC34u) { return; }
    }
    ctx->pc = 0x1BAC34u;
    // 0x1bac34: 0x0  nop
    ctx->pc = 0x1bac34u;
    // NOP
label_1bac38:
    // 0x1bac38: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1bac38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bac3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1bac3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bac40: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x1bac40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x1bac44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bac44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bac48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bac48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bac4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAC4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAC4Cu;
            // 0x1bac50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BA2D0u: goto label_1ba2d0;
            case 0x1BA390u: goto label_1ba390;
            case 0x1BA3F0u: goto label_1ba3f0;
            case 0x1BA458u: goto label_1ba458;
            case 0x1BA4A4u: goto label_1ba4a4;
            case 0x1BA508u: goto label_1ba508;
            case 0x1BA570u: goto label_1ba570;
            case 0x1BA5A0u: goto label_1ba5a0;
            case 0x1BA600u: goto label_1ba600;
            case 0x1BA668u: goto label_1ba668;
            case 0x1BA71Cu: goto label_1ba71c;
            case 0x1BA760u: goto label_1ba760;
            case 0x1BA798u: goto label_1ba798;
            case 0x1BA7E4u: goto label_1ba7e4;
            case 0x1BA828u: goto label_1ba828;
            case 0x1BA860u: goto label_1ba860;
            case 0x1BA890u: goto label_1ba890;
            case 0x1BA8C8u: goto label_1ba8c8;
            case 0x1BA900u: goto label_1ba900;
            case 0x1BA9A0u: goto label_1ba9a0;
            case 0x1BA9F0u: goto label_1ba9f0;
            case 0x1BAA18u: goto label_1baa18;
            case 0x1BAA58u: goto label_1baa58;
            case 0x1BAA98u: goto label_1baa98;
            case 0x1BAB10u: goto label_1bab10;
            case 0x1BAB18u: goto label_1bab18;
            case 0x1BAB30u: goto label_1bab30;
            case 0x1BAB40u: goto label_1bab40;
            case 0x1BAB50u: goto label_1bab50;
            case 0x1BAB98u: goto label_1bab98;
            case 0x1BABB8u: goto label_1babb8;
            case 0x1BAC38u: goto label_1bac38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BAC54u;
}
