#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage7BossSubhouMove
// Address: 0x1b91f0 - 0x1b9b94
void Stage7BossSubhouMove_0x1b91f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage7BossSubhouMove_0x1b91f0");
#endif

    ctx->pc = 0x1b91f0u;

    // 0x1b91f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b91f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b91f4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1b91f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1b91f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b91f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b91fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b91fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b9200: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1b9200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b9204: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b9204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9208: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x1b9208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x1b920c: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x1B920Cu;
    SET_GPR_U32(ctx, 31, 0x1B9214u);
    ctx->pc = 0x1B9210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B920Cu;
            // 0x1b9210: 0xdc25aa00  ld          $a1, -0x5600($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294945280)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9214u; }
        if (ctx->pc != 0x1B9214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9214u; }
        if (ctx->pc != 0x1B9214u) { return; }
    }
    ctx->pc = 0x1B9214u;
    // 0x1b9214: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b9214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b9218: 0xac221bd0  sw          $v0, 0x1BD0($at)
    ctx->pc = 0x1b9218u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7120), GPR_U32(ctx, 2));
    // 0x1b921c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b921cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b9220: 0x8c241bd0  lw          $a0, 0x1BD0($at)
    ctx->pc = 0x1b9220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7120)));
    // 0x1b9224: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x1B9224u;
    SET_GPR_U32(ctx, 31, 0x1B922Cu);
    ctx->pc = 0x1B9228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9224u;
            // 0x1b9228: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B922Cu; }
        if (ctx->pc != 0x1B922Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B922Cu; }
        if (ctx->pc != 0x1B922Cu) { return; }
    }
    ctx->pc = 0x1B922Cu;
    // 0x1b922c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b922cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b9230: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1b9230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1b9234: 0xac221bd8  sw          $v0, 0x1BD8($at)
    ctx->pc = 0x1b9234u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7128), GPR_U32(ctx, 2));
    // 0x1b9238: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b9238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b923c: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1b923cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9240: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x1b9240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9244: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b9244u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b9248: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x1b9248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1b924c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b924cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b9250: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1b9250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9254: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1b9254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9258: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b9258u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b925c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1b925cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1b9260: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b9260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b9264: 0xc60100d8  lwc1        $f1, 0xD8($s0)
    ctx->pc = 0x1b9264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9268: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x1b9268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b926c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b926cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b9270: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x1b9270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x1b9274: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b9274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b9278: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x1b9278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b927c: 0xc4400114  lwc1        $f0, 0x114($v0)
    ctx->pc = 0x1b927cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9280: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b9280u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b9284: 0xe4400114  swc1        $f0, 0x114($v0)
    ctx->pc = 0x1b9284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
    // 0x1b9288: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b9288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b928c: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x1b928cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9290: 0xc4400110  lwc1        $f0, 0x110($v0)
    ctx->pc = 0x1b9290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9294: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b9294u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b9298: 0xe4400110  swc1        $f0, 0x110($v0)
    ctx->pc = 0x1b9298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    // 0x1b929c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b929cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b92a0: 0xc60100e8  lwc1        $f1, 0xE8($s0)
    ctx->pc = 0x1b92a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b92a4: 0xc4400118  lwc1        $f0, 0x118($v0)
    ctx->pc = 0x1b92a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b92a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b92a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b92ac: 0xe4400118  swc1        $f0, 0x118($v0)
    ctx->pc = 0x1b92acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
    // 0x1b92b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b92b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b92b4: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1b92b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b92b8: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1b92b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b92bc: 0xc06edf8  jal         func_1BB7E0
    ctx->pc = 0x1B92BCu;
    SET_GPR_U32(ctx, 31, 0x1B92C4u);
    ctx->pc = 0x1B92C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B92BCu;
            // 0x1b92c0: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB7E0u;
    if (runtime->hasFunction(0x1BB7E0u)) {
        auto targetFn = runtime->lookupFunction(0x1BB7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B92C4u; }
        if (ctx->pc != 0x1B92C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1bb7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B92C4u; }
        if (ctx->pc != 0x1B92C4u) { return; }
    }
    ctx->pc = 0x1B92C4u;
    // 0x1b92c4: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1b92c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b92c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b92c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b92cc: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1b92ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x1b92d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b92d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b92d4: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1b92d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1b92d8: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1b92d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1b92dc: 0x1062018a  beq         $v1, $v0, . + 4 + (0x18A << 2)
    ctx->pc = 0x1B92DCu;
    {
        const bool branch_taken_0x1b92dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B92E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B92DCu;
            // 0x1b92e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b92dc) {
            ctx->pc = 0x1B9908u;
            goto label_1b9908;
        }
    }
    ctx->pc = 0x1B92E4u;
    // 0x1b92e4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B92E4u;
    {
        const bool branch_taken_0x1b92e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b92e4) {
            ctx->pc = 0x1B9300u;
            goto label_1b9300;
        }
    }
    ctx->pc = 0x1B92ECu;
    // 0x1b92ec: 0x10600186  beqz        $v1, . + 4 + (0x186 << 2)
    ctx->pc = 0x1B92ECu;
    {
        const bool branch_taken_0x1b92ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b92ec) {
            ctx->pc = 0x1B9908u;
            goto label_1b9908;
        }
    }
    ctx->pc = 0x1B92F4u;
    // 0x1b92f4: 0x10000184  b           . + 4 + (0x184 << 2)
    ctx->pc = 0x1B92F4u;
    {
        const bool branch_taken_0x1b92f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b92f4) {
            ctx->pc = 0x1B9908u;
            goto label_1b9908;
        }
    }
    ctx->pc = 0x1B92FCu;
    // 0x1b92fc: 0x0  nop
    ctx->pc = 0x1b92fcu;
    // NOP
label_1b9300:
    // 0x1b9300: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b9300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b9304: 0x18400180  blez        $v0, . + 4 + (0x180 << 2)
    ctx->pc = 0x1B9304u;
    {
        const bool branch_taken_0x1b9304 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b9304) {
            ctx->pc = 0x1B9908u;
            goto label_1b9908;
        }
    }
    ctx->pc = 0x1B930Cu;
    // 0x1b930c: 0x8e030120  lw          $v1, 0x120($s0)
    ctx->pc = 0x1b930cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1b9310: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1B9310u;
    {
        const bool branch_taken_0x1b9310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9310u;
            // 0x1b9314: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9310) {
            ctx->pc = 0x1B9340u;
            goto label_1b9340;
        }
    }
    ctx->pc = 0x1B9318u;
    // 0x1b9318: 0x8c221c08  lw          $v0, 0x1C08($at)
    ctx->pc = 0x1b9318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7176)));
    // 0x1b931c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B931Cu;
    {
        const bool branch_taken_0x1b931c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b931c) {
            ctx->pc = 0x1B9340u;
            goto label_1b9340;
        }
    }
    ctx->pc = 0x1B9324u;
    // 0x1b9324: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b9324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b9328: 0x8c221c10  lw          $v0, 0x1C10($at)
    ctx->pc = 0x1b9328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7184)));
    // 0x1b932c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B932Cu;
    {
        const bool branch_taken_0x1b932c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B932Cu;
            // 0x1b9330: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b932c) {
            ctx->pc = 0x1B9340u;
            goto label_1b9340;
        }
    }
    ctx->pc = 0x1B9334u;
    // 0x1b9334: 0x8c221c00  lw          $v0, 0x1C00($at)
    ctx->pc = 0x1b9334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7168)));
    // 0x1b9338: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B9338u;
    {
        const bool branch_taken_0x1b9338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9338) {
            ctx->pc = 0x1B9378u;
            goto label_1b9378;
        }
    }
    ctx->pc = 0x1B9340u;
label_1b9340:
    // 0x1b9340: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b9340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9344: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B9344u;
    {
        const bool branch_taken_0x1b9344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B9348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9344u;
            // 0x1b9348: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9344) {
            ctx->pc = 0x1B9380u;
            goto label_1b9380;
        }
    }
    ctx->pc = 0x1B934Cu;
    // 0x1b934c: 0x8c221c10  lw          $v0, 0x1C10($at)
    ctx->pc = 0x1b934cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7184)));
    // 0x1b9350: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B9350u;
    {
        const bool branch_taken_0x1b9350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9350) {
            ctx->pc = 0x1B9380u;
            goto label_1b9380;
        }
    }
    ctx->pc = 0x1B9358u;
    // 0x1b9358: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b9358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b935c: 0x8c221c08  lw          $v0, 0x1C08($at)
    ctx->pc = 0x1b935cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7176)));
    // 0x1b9360: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9360u;
    {
        const bool branch_taken_0x1b9360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9360u;
            // 0x1b9364: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9360) {
            ctx->pc = 0x1B9380u;
            goto label_1b9380;
        }
    }
    ctx->pc = 0x1B9368u;
    // 0x1b9368: 0x8c221bf8  lw          $v0, 0x1BF8($at)
    ctx->pc = 0x1b9368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7160)));
    // 0x1b936c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B936Cu;
    {
        const bool branch_taken_0x1b936c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b936c) {
            ctx->pc = 0x1B9380u;
            goto label_1b9380;
        }
    }
    ctx->pc = 0x1B9374u;
    // 0x1b9374: 0x0  nop
    ctx->pc = 0x1b9374u;
    // NOP
label_1b9378:
    // 0x1b9378: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1B9378u;
    {
        const bool branch_taken_0x1b9378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B937Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9378u;
            // 0x1b937c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9378) {
            ctx->pc = 0x1B93C0u;
            goto label_1b93c0;
        }
    }
    ctx->pc = 0x1B9380u;
label_1b9380:
    // 0x1b9380: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9380u;
    {
        const bool branch_taken_0x1b9380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9380u;
            // 0x1b9384: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9380) {
            ctx->pc = 0x1B9398u;
            goto label_1b9398;
        }
    }
    ctx->pc = 0x1B9388u;
    // 0x1b9388: 0x8c221c08  lw          $v0, 0x1C08($at)
    ctx->pc = 0x1b9388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7176)));
    // 0x1b938c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B938Cu;
    {
        const bool branch_taken_0x1b938c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b938c) {
            ctx->pc = 0x1B93B0u;
            goto label_1b93b0;
        }
    }
    ctx->pc = 0x1B9394u;
    // 0x1b9394: 0x0  nop
    ctx->pc = 0x1b9394u;
    // NOP
label_1b9398:
    // 0x1b9398: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b9398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b939c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B939Cu;
    {
        const bool branch_taken_0x1b939c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B93A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B939Cu;
            // 0x1b93a0: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b939c) {
            ctx->pc = 0x1B93B8u;
            goto label_1b93b8;
        }
    }
    ctx->pc = 0x1B93A4u;
    // 0x1b93a4: 0x8c221c10  lw          $v0, 0x1C10($at)
    ctx->pc = 0x1b93a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7184)));
    // 0x1b93a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B93A8u;
    {
        const bool branch_taken_0x1b93a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b93a8) {
            ctx->pc = 0x1B93B8u;
            goto label_1b93b8;
        }
    }
    ctx->pc = 0x1B93B0u;
label_1b93b0:
    // 0x1b93b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B93B0u;
    {
        const bool branch_taken_0x1b93b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B93B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B93B0u;
            // 0x1b93b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b93b0) {
            ctx->pc = 0x1B93C0u;
            goto label_1b93c0;
        }
    }
    ctx->pc = 0x1B93B8u;
label_1b93b8:
    // 0x1b93b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b93b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b93bc: 0x0  nop
    ctx->pc = 0x1b93bcu;
    // NOP
label_1b93c0:
    // 0x1b93c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b93c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b93c4: 0x106200c0  beq         $v1, $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x1B93C4u;
    {
        const bool branch_taken_0x1b93c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B93C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B93C4u;
            // 0x1b93c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b93c4) {
            ctx->pc = 0x1B96C8u;
            goto label_1b96c8;
        }
    }
    ctx->pc = 0x1B93CCu;
    // 0x1b93cc: 0x10620060  beq         $v1, $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x1B93CCu;
    {
        const bool branch_taken_0x1b93cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b93cc) {
            ctx->pc = 0x1B9550u;
            goto label_1b9550;
        }
    }
    ctx->pc = 0x1B93D4u;
    // 0x1b93d4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B93D4u;
    {
        const bool branch_taken_0x1b93d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b93d4) {
            ctx->pc = 0x1B93E8u;
            goto label_1b93e8;
        }
    }
    ctx->pc = 0x1B93DCu;
    // 0x1b93dc: 0x1000014a  b           . + 4 + (0x14A << 2)
    ctx->pc = 0x1B93DCu;
    {
        const bool branch_taken_0x1b93dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b93dc) {
            ctx->pc = 0x1B9908u;
            goto label_1b9908;
        }
    }
    ctx->pc = 0x1B93E4u;
    // 0x1b93e4: 0x0  nop
    ctx->pc = 0x1b93e4u;
    // NOP
label_1b93e8:
    // 0x1b93e8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1B93E8u;
    SET_GPR_U32(ctx, 31, 0x1B93F0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B93F0u; }
        if (ctx->pc != 0x1B93F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B93F0u; }
        if (ctx->pc != 0x1B93F0u) { return; }
    }
    ctx->pc = 0x1B93F0u;
    // 0x1b93f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b93f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b93f4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B93F4u;
    {
        const bool branch_taken_0x1b93f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B93F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B93F4u;
            // 0x1b93f8: 0x24030078  addiu       $v1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b93f4) {
            ctx->pc = 0x1B9408u;
            goto label_1b9408;
        }
    }
    ctx->pc = 0x1B93FCu;
    // 0x1b93fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B93FCu;
    {
        const bool branch_taken_0x1b93fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b93fc) {
            ctx->pc = 0x1B9430u;
            goto label_1b9430;
        }
    }
    ctx->pc = 0x1B9404u;
    // 0x1b9404: 0x0  nop
    ctx->pc = 0x1b9404u;
    // NOP
label_1b9408:
    // 0x1b9408: 0xc065d00  jal         func_197400
    ctx->pc = 0x1B9408u;
    SET_GPR_U32(ctx, 31, 0x1B9410u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9410u; }
        if (ctx->pc != 0x1B9410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9410u; }
        if (ctx->pc != 0x1B9410u) { return; }
    }
    ctx->pc = 0x1B9410u;
    // 0x1b9410: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b9410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9414: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9414u;
    {
        const bool branch_taken_0x1b9414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B9418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9414u;
            // 0x1b9418: 0x240300b4  addiu       $v1, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9414) {
            ctx->pc = 0x1B9428u;
            goto label_1b9428;
        }
    }
    ctx->pc = 0x1B941Cu;
    // 0x1b941c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B941Cu;
    {
        const bool branch_taken_0x1b941c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b941c) {
            ctx->pc = 0x1B9430u;
            goto label_1b9430;
        }
    }
    ctx->pc = 0x1B9424u;
    // 0x1b9424: 0x0  nop
    ctx->pc = 0x1b9424u;
    // NOP
label_1b9428:
    // 0x1b9428: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x1b9428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1b942c: 0x0  nop
    ctx->pc = 0x1b942cu;
    // NOP
label_1b9430:
    // 0x1b9430: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1b9430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1b9434: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1b9434u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b9438: 0x0  nop
    ctx->pc = 0x1b9438u;
    // NOP
    // 0x1b943c: 0x0  nop
    ctx->pc = 0x1b943cu;
    // NOP
    // 0x1b9440: 0x1010  mfhi        $v0
    ctx->pc = 0x1b9440u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b9444: 0x14400130  bnez        $v0, . + 4 + (0x130 << 2)
    ctx->pc = 0x1B9444u;
    {
        const bool branch_taken_0x1b9444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9444) {
            ctx->pc = 0x1B9908u;
            goto label_1b9908;
        }
    }
    ctx->pc = 0x1B944Cu;
    // 0x1b944c: 0x8e030124  lw          $v1, 0x124($s0)
    ctx->pc = 0x1b944cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1b9450: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9450u;
    {
        const bool branch_taken_0x1b9450 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B9454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9450u;
            // 0x1b9454: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9450) {
            ctx->pc = 0x1B9464u;
            goto label_1b9464;
        }
    }
    ctx->pc = 0x1B9458u;
    // 0x1b9458: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B9458u;
    {
        const bool branch_taken_0x1b9458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9458) {
            ctx->pc = 0x1B9464u;
            goto label_1b9464;
        }
    }
    ctx->pc = 0x1B9460u;
    // 0x1b9460: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1b9460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1b9464:
    // 0x1b9464: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1B9464u;
    {
        const bool branch_taken_0x1b9464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9464) {
            ctx->pc = 0x1B94F0u;
            goto label_1b94f0;
        }
    }
    ctx->pc = 0x1B946Cu;
    // 0x1b946c: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x1b946cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x1b9470: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b9470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b9474: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b9474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9478: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B9478u;
    SET_GPR_U32(ctx, 31, 0x1B9480u);
    ctx->pc = 0x1B947Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9478u;
            // 0x1b947c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9480u; }
        if (ctx->pc != 0x1B9480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9480u; }
        if (ctx->pc != 0x1B9480u) { return; }
    }
    ctx->pc = 0x1B9480u;
    // 0x1b9480: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x1b9480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x1b9484: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b9484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b9488: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b9488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b948c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B948Cu;
    SET_GPR_U32(ctx, 31, 0x1B9494u);
    ctx->pc = 0x1B9490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B948Cu;
            // 0x1b9490: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9494u; }
        if (ctx->pc != 0x1B9494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9494u; }
        if (ctx->pc != 0x1B9494u) { return; }
    }
    ctx->pc = 0x1B9494u;
    // 0x1b9494: 0x3c02c334  lui         $v0, 0xC334
    ctx->pc = 0x1b9494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49972 << 16));
    // 0x1b9498: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b9498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b949c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b949cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b94a0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B94A0u;
    SET_GPR_U32(ctx, 31, 0x1B94A8u);
    ctx->pc = 0x1B94A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B94A0u;
            // 0x1b94a4: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B94A8u; }
        if (ctx->pc != 0x1B94A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B94A8u; }
        if (ctx->pc != 0x1B94A8u) { return; }
    }
    ctx->pc = 0x1B94A8u;
    // 0x1b94a8: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1b94a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1b94ac: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b94acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b94b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b94b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b94b4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B94B4u;
    SET_GPR_U32(ctx, 31, 0x1B94BCu);
    ctx->pc = 0x1B94B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B94B4u;
            // 0x1b94b8: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B94BCu; }
        if (ctx->pc != 0x1B94BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B94BCu; }
        if (ctx->pc != 0x1B94BCu) { return; }
    }
    ctx->pc = 0x1B94BCu;
    // 0x1b94bc: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x1b94bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x1b94c0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b94c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b94c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b94c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b94c8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B94C8u;
    SET_GPR_U32(ctx, 31, 0x1B94D0u);
    ctx->pc = 0x1B94CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B94C8u;
            // 0x1b94cc: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B94D0u; }
        if (ctx->pc != 0x1B94D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B94D0u; }
        if (ctx->pc != 0x1B94D0u) { return; }
    }
    ctx->pc = 0x1B94D0u;
    // 0x1b94d0: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1b94d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x1b94d4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b94d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b94d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b94d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b94dc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B94DCu;
    SET_GPR_U32(ctx, 31, 0x1B94E4u);
    ctx->pc = 0x1B94E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B94DCu;
            // 0x1b94e0: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B94E4u; }
        if (ctx->pc != 0x1B94E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B94E4u; }
        if (ctx->pc != 0x1B94E4u) { return; }
    }
    ctx->pc = 0x1B94E4u;
    // 0x1b94e4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B94E4u;
    {
        const bool branch_taken_0x1b94e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b94e4) {
            ctx->pc = 0x1B9540u;
            goto label_1b9540;
        }
    }
    ctx->pc = 0x1B94ECu;
    // 0x1b94ec: 0x0  nop
    ctx->pc = 0x1b94ecu;
    // NOP
label_1b94f0:
    // 0x1b94f0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b94f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b94f4: 0x3c02c2b4  lui         $v0, 0xC2B4
    ctx->pc = 0x1b94f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49844 << 16));
    // 0x1b94f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b94f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b94fc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B94FCu;
    SET_GPR_U32(ctx, 31, 0x1B9504u);
    ctx->pc = 0x1B9500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B94FCu;
            // 0x1b9500: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9504u; }
        if (ctx->pc != 0x1B9504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9504u; }
        if (ctx->pc != 0x1B9504u) { return; }
    }
    ctx->pc = 0x1B9504u;
    // 0x1b9504: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x1b9504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x1b9508: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b9508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b950c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b950cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9510: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B9510u;
    SET_GPR_U32(ctx, 31, 0x1B9518u);
    ctx->pc = 0x1B9514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9510u;
            // 0x1b9514: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9518u; }
        if (ctx->pc != 0x1B9518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9518u; }
        if (ctx->pc != 0x1B9518u) { return; }
    }
    ctx->pc = 0x1B9518u;
    // 0x1b9518: 0x3c02c387  lui         $v0, 0xC387
    ctx->pc = 0x1b9518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50055 << 16));
    // 0x1b951c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b951cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b9520: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b9520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9524: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B9524u;
    SET_GPR_U32(ctx, 31, 0x1B952Cu);
    ctx->pc = 0x1B9528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9524u;
            // 0x1b9528: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B952Cu; }
        if (ctx->pc != 0x1B952Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B952Cu; }
        if (ctx->pc != 0x1B952Cu) { return; }
    }
    ctx->pc = 0x1B952Cu;
    // 0x1b952c: 0x3c024387  lui         $v0, 0x4387
    ctx->pc = 0x1b952cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17287 << 16));
    // 0x1b9530: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b9530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b9534: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b9534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9538: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B9538u;
    SET_GPR_U32(ctx, 31, 0x1B9540u);
    ctx->pc = 0x1B953Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9538u;
            // 0x1b953c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9540u; }
        if (ctx->pc != 0x1B9540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9540u; }
        if (ctx->pc != 0x1B9540u) { return; }
    }
    ctx->pc = 0x1B9540u;
label_1b9540:
    // 0x1b9540: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x1b9540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1b9544: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b9544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b9548: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x1B9548u;
    {
        const bool branch_taken_0x1b9548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B954Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9548u;
            // 0x1b954c: 0xae020124  sw          $v0, 0x124($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9548) {
            ctx->pc = 0x1B9908u;
            goto label_1b9908;
        }
    }
    ctx->pc = 0x1B9550u;
label_1b9550:
    // 0x1b9550: 0xc065d00  jal         func_197400
    ctx->pc = 0x1B9550u;
    SET_GPR_U32(ctx, 31, 0x1B9558u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9558u; }
        if (ctx->pc != 0x1B9558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9558u; }
        if (ctx->pc != 0x1B9558u) { return; }
    }
    ctx->pc = 0x1B9558u;
    // 0x1b9558: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b9558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b955c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B955Cu;
    {
        const bool branch_taken_0x1b955c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B9560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B955Cu;
            // 0x1b9560: 0x24030064  addiu       $v1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b955c) {
            ctx->pc = 0x1B9570u;
            goto label_1b9570;
        }
    }
    ctx->pc = 0x1B9564u;
    // 0x1b9564: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B9564u;
    {
        const bool branch_taken_0x1b9564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9564) {
            ctx->pc = 0x1B9598u;
            goto label_1b9598;
        }
    }
    ctx->pc = 0x1B956Cu;
    // 0x1b956c: 0x0  nop
    ctx->pc = 0x1b956cu;
    // NOP
label_1b9570:
    // 0x1b9570: 0xc065d00  jal         func_197400
    ctx->pc = 0x1B9570u;
    SET_GPR_U32(ctx, 31, 0x1B9578u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9578u; }
        if (ctx->pc != 0x1B9578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9578u; }
        if (ctx->pc != 0x1B9578u) { return; }
    }
    ctx->pc = 0x1B9578u;
    // 0x1b9578: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b9578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b957c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B957Cu;
    {
        const bool branch_taken_0x1b957c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B9580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B957Cu;
            // 0x1b9580: 0x24030096  addiu       $v1, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b957c) {
            ctx->pc = 0x1B9590u;
            goto label_1b9590;
        }
    }
    ctx->pc = 0x1B9584u;
    // 0x1b9584: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9584u;
    {
        const bool branch_taken_0x1b9584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9584) {
            ctx->pc = 0x1B9598u;
            goto label_1b9598;
        }
    }
    ctx->pc = 0x1B958Cu;
    // 0x1b958c: 0x0  nop
    ctx->pc = 0x1b958cu;
    // NOP
label_1b9590:
    // 0x1b9590: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x1b9590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1b9594: 0x0  nop
    ctx->pc = 0x1b9594u;
    // NOP
label_1b9598:
    // 0x1b9598: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1b9598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1b959c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1b959cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b95a0: 0x0  nop
    ctx->pc = 0x1b95a0u;
    // NOP
    // 0x1b95a4: 0x0  nop
    ctx->pc = 0x1b95a4u;
    // NOP
    // 0x1b95a8: 0x1010  mfhi        $v0
    ctx->pc = 0x1b95a8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b95ac: 0x144000d6  bnez        $v0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x1B95ACu;
    {
        const bool branch_taken_0x1b95ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b95ac) {
            ctx->pc = 0x1B9908u;
            goto label_1b9908;
        }
    }
    ctx->pc = 0x1B95B4u;
    // 0x1b95b4: 0x8e030124  lw          $v1, 0x124($s0)
    ctx->pc = 0x1b95b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1b95b8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B95B8u;
    {
        const bool branch_taken_0x1b95b8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B95BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B95B8u;
            // 0x1b95bc: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b95b8) {
            ctx->pc = 0x1B95CCu;
            goto label_1b95cc;
        }
    }
    ctx->pc = 0x1B95C0u;
    // 0x1b95c0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B95C0u;
    {
        const bool branch_taken_0x1b95c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b95c0) {
            ctx->pc = 0x1B95CCu;
            goto label_1b95cc;
        }
    }
    ctx->pc = 0x1B95C8u;
    // 0x1b95c8: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1b95c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1b95cc:
    // 0x1b95cc: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1B95CCu;
    {
        const bool branch_taken_0x1b95cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b95cc) {
            ctx->pc = 0x1B9640u;
            goto label_1b9640;
        }
    }
    ctx->pc = 0x1B95D4u;
    // 0x1b95d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b95d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b95d8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b95d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b95dc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B95DCu;
    SET_GPR_U32(ctx, 31, 0x1B95E4u);
    ctx->pc = 0x1B95E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B95DCu;
            // 0x1b95e0: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B95E4u; }
        if (ctx->pc != 0x1B95E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B95E4u; }
        if (ctx->pc != 0x1B95E4u) { return; }
    }
    ctx->pc = 0x1B95E4u;
    // 0x1b95e4: 0x3c02c334  lui         $v0, 0xC334
    ctx->pc = 0x1b95e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49972 << 16));
    // 0x1b95e8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b95e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b95ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b95ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b95f0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B95F0u;
    SET_GPR_U32(ctx, 31, 0x1B95F8u);
    ctx->pc = 0x1B95F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B95F0u;
            // 0x1b95f4: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B95F8u; }
        if (ctx->pc != 0x1B95F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B95F8u; }
        if (ctx->pc != 0x1B95F8u) { return; }
    }
    ctx->pc = 0x1B95F8u;
    // 0x1b95f8: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1b95f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1b95fc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b95fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b9600: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b9600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9604: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B9604u;
    SET_GPR_U32(ctx, 31, 0x1B960Cu);
    ctx->pc = 0x1B9608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9604u;
            // 0x1b9608: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B960Cu; }
        if (ctx->pc != 0x1B960Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B960Cu; }
        if (ctx->pc != 0x1B960Cu) { return; }
    }
    ctx->pc = 0x1B960Cu;
    // 0x1b960c: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x1b960cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x1b9610: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b9610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b9614: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b9614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9618: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B9618u;
    SET_GPR_U32(ctx, 31, 0x1B9620u);
    ctx->pc = 0x1B961Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9618u;
            // 0x1b961c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9620u; }
        if (ctx->pc != 0x1B9620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9620u; }
        if (ctx->pc != 0x1B9620u) { return; }
    }
    ctx->pc = 0x1B9620u;
    // 0x1b9620: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1b9620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x1b9624: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b9624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b9628: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b9628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b962c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B962Cu;
    SET_GPR_U32(ctx, 31, 0x1B9634u);
    ctx->pc = 0x1B9630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B962Cu;
            // 0x1b9630: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9634u; }
        if (ctx->pc != 0x1B9634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9634u; }
        if (ctx->pc != 0x1B9634u) { return; }
    }
    ctx->pc = 0x1B9634u;
    // 0x1b9634: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1B9634u;
    {
        const bool branch_taken_0x1b9634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9634) {
            ctx->pc = 0x1B96B8u;
            goto label_1b96b8;
        }
    }
    ctx->pc = 0x1B963Cu;
    // 0x1b963c: 0x0  nop
    ctx->pc = 0x1b963cu;
    // NOP
label_1b9640:
    // 0x1b9640: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b9640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b9644: 0x3c02c270  lui         $v0, 0xC270
    ctx->pc = 0x1b9644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49776 << 16));
    // 0x1b9648: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b9648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b964c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B964Cu;
    SET_GPR_U32(ctx, 31, 0x1B9654u);
    ctx->pc = 0x1B9650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B964Cu;
            // 0x1b9650: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9654u; }
        if (ctx->pc != 0x1B9654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9654u; }
        if (ctx->pc != 0x1B9654u) { return; }
    }
    ctx->pc = 0x1B9654u;
    // 0x1b9654: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1b9654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1b9658: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b9658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b965c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b965cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9660: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B9660u;
    SET_GPR_U32(ctx, 31, 0x1B9668u);
    ctx->pc = 0x1B9664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9660u;
            // 0x1b9664: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9668u; }
        if (ctx->pc != 0x1B9668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9668u; }
        if (ctx->pc != 0x1B9668u) { return; }
    }
    ctx->pc = 0x1B9668u;
    // 0x1b9668: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x1b9668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x1b966c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b966cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b9670: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b9670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9674: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B9674u;
    SET_GPR_U32(ctx, 31, 0x1B967Cu);
    ctx->pc = 0x1B9678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9674u;
            // 0x1b9678: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B967Cu; }
        if (ctx->pc != 0x1B967Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B967Cu; }
        if (ctx->pc != 0x1B967Cu) { return; }
    }
    ctx->pc = 0x1B967Cu;
    // 0x1b967c: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x1b967cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x1b9680: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b9680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b9684: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b9684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9688: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B9688u;
    SET_GPR_U32(ctx, 31, 0x1B9690u);
    ctx->pc = 0x1B968Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9688u;
            // 0x1b968c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9690u; }
        if (ctx->pc != 0x1B9690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9690u; }
        if (ctx->pc != 0x1B9690u) { return; }
    }
    ctx->pc = 0x1B9690u;
    // 0x1b9690: 0x3c02c387  lui         $v0, 0xC387
    ctx->pc = 0x1b9690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50055 << 16));
    // 0x1b9694: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b9694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b9698: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b9698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b969c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B969Cu;
    SET_GPR_U32(ctx, 31, 0x1B96A4u);
    ctx->pc = 0x1B96A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B969Cu;
            // 0x1b96a0: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B96A4u; }
        if (ctx->pc != 0x1B96A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B96A4u; }
        if (ctx->pc != 0x1B96A4u) { return; }
    }
    ctx->pc = 0x1B96A4u;
    // 0x1b96a4: 0x3c024387  lui         $v0, 0x4387
    ctx->pc = 0x1b96a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17287 << 16));
    // 0x1b96a8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b96a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b96ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b96acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b96b0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B96B0u;
    SET_GPR_U32(ctx, 31, 0x1B96B8u);
    ctx->pc = 0x1B96B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B96B0u;
            // 0x1b96b4: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B96B8u; }
        if (ctx->pc != 0x1B96B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B96B8u; }
        if (ctx->pc != 0x1B96B8u) { return; }
    }
    ctx->pc = 0x1B96B8u;
label_1b96b8:
    // 0x1b96b8: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x1b96b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1b96bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b96bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b96c0: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x1B96C0u;
    {
        const bool branch_taken_0x1b96c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B96C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B96C0u;
            // 0x1b96c4: 0xae020124  sw          $v0, 0x124($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b96c0) {
            ctx->pc = 0x1B9908u;
            goto label_1b9908;
        }
    }
    ctx->pc = 0x1B96C8u;
label_1b96c8:
    // 0x1b96c8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1B96C8u;
    SET_GPR_U32(ctx, 31, 0x1B96D0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B96D0u; }
        if (ctx->pc != 0x1B96D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B96D0u; }
        if (ctx->pc != 0x1B96D0u) { return; }
    }
    ctx->pc = 0x1B96D0u;
    // 0x1b96d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b96d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b96d4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B96D4u;
    {
        const bool branch_taken_0x1b96d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B96D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B96D4u;
            // 0x1b96d8: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b96d4) {
            ctx->pc = 0x1B96E8u;
            goto label_1b96e8;
        }
    }
    ctx->pc = 0x1B96DCu;
    // 0x1b96dc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B96DCu;
    {
        const bool branch_taken_0x1b96dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b96dc) {
            ctx->pc = 0x1B9710u;
            goto label_1b9710;
        }
    }
    ctx->pc = 0x1B96E4u;
    // 0x1b96e4: 0x0  nop
    ctx->pc = 0x1b96e4u;
    // NOP
label_1b96e8:
    // 0x1b96e8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1B96E8u;
    SET_GPR_U32(ctx, 31, 0x1B96F0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B96F0u; }
        if (ctx->pc != 0x1B96F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B96F0u; }
        if (ctx->pc != 0x1B96F0u) { return; }
    }
    ctx->pc = 0x1B96F0u;
    // 0x1b96f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b96f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b96f4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B96F4u;
    {
        const bool branch_taken_0x1b96f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B96F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B96F4u;
            // 0x1b96f8: 0x2403005a  addiu       $v1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b96f4) {
            ctx->pc = 0x1B9708u;
            goto label_1b9708;
        }
    }
    ctx->pc = 0x1B96FCu;
    // 0x1b96fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B96FCu;
    {
        const bool branch_taken_0x1b96fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b96fc) {
            ctx->pc = 0x1B9710u;
            goto label_1b9710;
        }
    }
    ctx->pc = 0x1B9704u;
    // 0x1b9704: 0x0  nop
    ctx->pc = 0x1b9704u;
    // NOP
label_1b9708:
    // 0x1b9708: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x1b9708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x1b970c: 0x0  nop
    ctx->pc = 0x1b970cu;
    // NOP
label_1b9710:
    // 0x1b9710: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1b9710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1b9714: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1b9714u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b9718: 0x0  nop
    ctx->pc = 0x1b9718u;
    // NOP
    // 0x1b971c: 0x0  nop
    ctx->pc = 0x1b971cu;
    // NOP
    // 0x1b9720: 0x1010  mfhi        $v0
    ctx->pc = 0x1b9720u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b9724: 0x14400078  bnez        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x1B9724u;
    {
        const bool branch_taken_0x1b9724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9724) {
            ctx->pc = 0x1B9908u;
            goto label_1b9908;
        }
    }
    ctx->pc = 0x1B972Cu;
    // 0x1b972c: 0x8e030124  lw          $v1, 0x124($s0)
    ctx->pc = 0x1b972cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1b9730: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9730u;
    {
        const bool branch_taken_0x1b9730 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B9734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9730u;
            // 0x1b9734: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9730) {
            ctx->pc = 0x1B9744u;
            goto label_1b9744;
        }
    }
    ctx->pc = 0x1B9738u;
    // 0x1b9738: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B9738u;
    {
        const bool branch_taken_0x1b9738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9738) {
            ctx->pc = 0x1B9744u;
            goto label_1b9744;
        }
    }
    ctx->pc = 0x1B9740u;
    // 0x1b9740: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1b9740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1b9744:
    // 0x1b9744: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1B9744u;
    {
        const bool branch_taken_0x1b9744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9744) {
            ctx->pc = 0x1B9830u;
            goto label_1b9830;
        }
    }
    ctx->pc = 0x1B974Cu;
    // 0x1b974c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b974cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9750: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b9750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b9754: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B9754u;
    SET_GPR_U32(ctx, 31, 0x1B975Cu);
    ctx->pc = 0x1B9758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9754u;
            // 0x1b9758: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B975Cu; }
        if (ctx->pc != 0x1B975Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B975Cu; }
        if (ctx->pc != 0x1B975Cu) { return; }
    }
    ctx->pc = 0x1B975Cu;
    // 0x1b975c: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x1b975cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
    // 0x1b9760: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b9760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b9764: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b9764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9768: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B9768u;
    SET_GPR_U32(ctx, 31, 0x1B9770u);
    ctx->pc = 0x1B976Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9768u;
            // 0x1b976c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9770u; }
        if (ctx->pc != 0x1B9770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9770u; }
        if (ctx->pc != 0x1B9770u) { return; }
    }
    ctx->pc = 0x1B9770u;
    // 0x1b9770: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1b9770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1b9774: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b9774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b9778: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b9778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b977c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B977Cu;
    SET_GPR_U32(ctx, 31, 0x1B9784u);
    ctx->pc = 0x1B9780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B977Cu;
            // 0x1b9780: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9784u; }
        if (ctx->pc != 0x1B9784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9784u; }
        if (ctx->pc != 0x1B9784u) { return; }
    }
    ctx->pc = 0x1B9784u;
    // 0x1b9784: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x1b9784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x1b9788: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b9788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b978c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b978cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9790: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B9790u;
    SET_GPR_U32(ctx, 31, 0x1B9798u);
    ctx->pc = 0x1B9794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9790u;
            // 0x1b9794: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9798u; }
        if (ctx->pc != 0x1B9798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9798u; }
        if (ctx->pc != 0x1B9798u) { return; }
    }
    ctx->pc = 0x1B9798u;
    // 0x1b9798: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x1b9798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x1b979c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b979cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b97a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b97a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b97a4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B97A4u;
    SET_GPR_U32(ctx, 31, 0x1B97ACu);
    ctx->pc = 0x1B97A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B97A4u;
            // 0x1b97a8: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B97ACu; }
        if (ctx->pc != 0x1B97ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B97ACu; }
        if (ctx->pc != 0x1B97ACu) { return; }
    }
    ctx->pc = 0x1B97ACu;
    // 0x1b97ac: 0x3c02c334  lui         $v0, 0xC334
    ctx->pc = 0x1b97acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49972 << 16));
    // 0x1b97b0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b97b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b97b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b97b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b97b8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B97B8u;
    SET_GPR_U32(ctx, 31, 0x1B97C0u);
    ctx->pc = 0x1B97BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B97B8u;
            // 0x1b97bc: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B97C0u; }
        if (ctx->pc != 0x1B97C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B97C0u; }
        if (ctx->pc != 0x1B97C0u) { return; }
    }
    ctx->pc = 0x1B97C0u;
    // 0x1b97c0: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1b97c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1b97c4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b97c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b97c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b97c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b97cc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B97CCu;
    SET_GPR_U32(ctx, 31, 0x1B97D4u);
    ctx->pc = 0x1B97D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B97CCu;
            // 0x1b97d0: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B97D4u; }
        if (ctx->pc != 0x1B97D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B97D4u; }
        if (ctx->pc != 0x1B97D4u) { return; }
    }
    ctx->pc = 0x1B97D4u;
    // 0x1b97d4: 0x3c02c370  lui         $v0, 0xC370
    ctx->pc = 0x1b97d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50032 << 16));
    // 0x1b97d8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b97d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b97dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b97dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b97e0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B97E0u;
    SET_GPR_U32(ctx, 31, 0x1B97E8u);
    ctx->pc = 0x1B97E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B97E0u;
            // 0x1b97e4: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B97E8u; }
        if (ctx->pc != 0x1B97E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B97E8u; }
        if (ctx->pc != 0x1B97E8u) { return; }
    }
    ctx->pc = 0x1B97E8u;
    // 0x1b97e8: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x1b97e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x1b97ec: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b97ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b97f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b97f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b97f4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B97F4u;
    SET_GPR_U32(ctx, 31, 0x1B97FCu);
    ctx->pc = 0x1B97F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B97F4u;
            // 0x1b97f8: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B97FCu; }
        if (ctx->pc != 0x1B97FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B97FCu; }
        if (ctx->pc != 0x1B97FCu) { return; }
    }
    ctx->pc = 0x1B97FCu;
    // 0x1b97fc: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x1b97fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x1b9800: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b9800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b9804: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b9804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9808: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B9808u;
    SET_GPR_U32(ctx, 31, 0x1B9810u);
    ctx->pc = 0x1B980Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9808u;
            // 0x1b980c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9810u; }
        if (ctx->pc != 0x1B9810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9810u; }
        if (ctx->pc != 0x1B9810u) { return; }
    }
    ctx->pc = 0x1B9810u;
    // 0x1b9810: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1b9810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x1b9814: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b9814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b9818: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b9818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b981c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B981Cu;
    SET_GPR_U32(ctx, 31, 0x1B9824u);
    ctx->pc = 0x1B9820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B981Cu;
            // 0x1b9820: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9824u; }
        if (ctx->pc != 0x1B9824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9824u; }
        if (ctx->pc != 0x1B9824u) { return; }
    }
    ctx->pc = 0x1B9824u;
    // 0x1b9824: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1B9824u;
    {
        const bool branch_taken_0x1b9824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9824) {
            ctx->pc = 0x1B98F8u;
            goto label_1b98f8;
        }
    }
    ctx->pc = 0x1B982Cu;
    // 0x1b982c: 0x0  nop
    ctx->pc = 0x1b982cu;
    // NOP
label_1b9830:
    // 0x1b9830: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b9830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b9834: 0x3c02c270  lui         $v0, 0xC270
    ctx->pc = 0x1b9834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49776 << 16));
    // 0x1b9838: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b9838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b983c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B983Cu;
    SET_GPR_U32(ctx, 31, 0x1B9844u);
    ctx->pc = 0x1B9840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B983Cu;
            // 0x1b9840: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9844u; }
        if (ctx->pc != 0x1B9844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9844u; }
        if (ctx->pc != 0x1B9844u) { return; }
    }
    ctx->pc = 0x1B9844u;
    // 0x1b9844: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1b9844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1b9848: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b9848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b984c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b984cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9850: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B9850u;
    SET_GPR_U32(ctx, 31, 0x1B9858u);
    ctx->pc = 0x1B9854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9850u;
            // 0x1b9854: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9858u; }
        if (ctx->pc != 0x1B9858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9858u; }
        if (ctx->pc != 0x1B9858u) { return; }
    }
    ctx->pc = 0x1B9858u;
    // 0x1b9858: 0x3c02c2b4  lui         $v0, 0xC2B4
    ctx->pc = 0x1b9858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49844 << 16));
    // 0x1b985c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b985cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b9860: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b9860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9864: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B9864u;
    SET_GPR_U32(ctx, 31, 0x1B986Cu);
    ctx->pc = 0x1B9868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9864u;
            // 0x1b9868: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B986Cu; }
        if (ctx->pc != 0x1B986Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B986Cu; }
        if (ctx->pc != 0x1B986Cu) { return; }
    }
    ctx->pc = 0x1B986Cu;
    // 0x1b986c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x1b986cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x1b9870: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b9870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b9874: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b9874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9878: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B9878u;
    SET_GPR_U32(ctx, 31, 0x1B9880u);
    ctx->pc = 0x1B987Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9878u;
            // 0x1b987c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9880u; }
        if (ctx->pc != 0x1B9880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9880u; }
        if (ctx->pc != 0x1B9880u) { return; }
    }
    ctx->pc = 0x1B9880u;
    // 0x1b9880: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x1b9880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x1b9884: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b9884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b9888: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b9888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b988c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B988Cu;
    SET_GPR_U32(ctx, 31, 0x1B9894u);
    ctx->pc = 0x1B9890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B988Cu;
            // 0x1b9890: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9894u; }
        if (ctx->pc != 0x1B9894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9894u; }
        if (ctx->pc != 0x1B9894u) { return; }
    }
    ctx->pc = 0x1B9894u;
    // 0x1b9894: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x1b9894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x1b9898: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b9898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b989c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b989cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b98a0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B98A0u;
    SET_GPR_U32(ctx, 31, 0x1B98A8u);
    ctx->pc = 0x1B98A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B98A0u;
            // 0x1b98a4: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B98A8u; }
        if (ctx->pc != 0x1B98A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B98A8u; }
        if (ctx->pc != 0x1B98A8u) { return; }
    }
    ctx->pc = 0x1B98A8u;
    // 0x1b98a8: 0x3c02c352  lui         $v0, 0xC352
    ctx->pc = 0x1b98a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50002 << 16));
    // 0x1b98ac: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b98acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b98b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b98b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b98b4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B98B4u;
    SET_GPR_U32(ctx, 31, 0x1B98BCu);
    ctx->pc = 0x1B98B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B98B4u;
            // 0x1b98b8: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B98BCu; }
        if (ctx->pc != 0x1B98BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B98BCu; }
        if (ctx->pc != 0x1B98BCu) { return; }
    }
    ctx->pc = 0x1B98BCu;
    // 0x1b98bc: 0x3c024352  lui         $v0, 0x4352
    ctx->pc = 0x1b98bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17234 << 16));
    // 0x1b98c0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b98c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b98c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b98c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b98c8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B98C8u;
    SET_GPR_U32(ctx, 31, 0x1B98D0u);
    ctx->pc = 0x1B98CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B98C8u;
            // 0x1b98cc: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B98D0u; }
        if (ctx->pc != 0x1B98D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B98D0u; }
        if (ctx->pc != 0x1B98D0u) { return; }
    }
    ctx->pc = 0x1B98D0u;
    // 0x1b98d0: 0x3c02c387  lui         $v0, 0xC387
    ctx->pc = 0x1b98d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50055 << 16));
    // 0x1b98d4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b98d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b98d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b98d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b98dc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B98DCu;
    SET_GPR_U32(ctx, 31, 0x1B98E4u);
    ctx->pc = 0x1B98E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B98DCu;
            // 0x1b98e0: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B98E4u; }
        if (ctx->pc != 0x1B98E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B98E4u; }
        if (ctx->pc != 0x1B98E4u) { return; }
    }
    ctx->pc = 0x1B98E4u;
    // 0x1b98e4: 0x3c024387  lui         $v0, 0x4387
    ctx->pc = 0x1b98e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17287 << 16));
    // 0x1b98e8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b98e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b98ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b98ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b98f0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1B98F0u;
    SET_GPR_U32(ctx, 31, 0x1B98F8u);
    ctx->pc = 0x1B98F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B98F0u;
            // 0x1b98f4: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B98F8u; }
        if (ctx->pc != 0x1B98F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B98F8u; }
        if (ctx->pc != 0x1B98F8u) { return; }
    }
    ctx->pc = 0x1B98F8u;
label_1b98f8:
    // 0x1b98f8: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x1b98f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1b98fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b98fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b9900: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x1b9900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    // 0x1b9904: 0x0  nop
    ctx->pc = 0x1b9904u;
    // NOP
label_1b9908:
    // 0x1b9908: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b9908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b990c: 0x8c231bd8  lw          $v1, 0x1BD8($at)
    ctx->pc = 0x1b990cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7128)));
    // 0x1b9910: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1b9910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1b9914: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b9914u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1b9918: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b991c: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1b991cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9920: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b9920u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9924: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1B9924u;
    {
        const bool branch_taken_0x1b9924 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9924u;
            // 0x1b9928: 0x24640014  addiu       $a0, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9924) {
            ctx->pc = 0x1B9948u;
            goto label_1b9948;
        }
    }
    ctx->pc = 0x1B992Cu;
    // 0x1b992c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b992cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1b9930: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b9930u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1b9934: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9938: 0x0  nop
    ctx->pc = 0x1b9938u;
    // NOP
    // 0x1b993c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b993cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b9940: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b9940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1b9944: 0x0  nop
    ctx->pc = 0x1b9944u;
    // NOP
label_1b9948:
    // 0x1b9948: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b9948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b994c: 0x8c231bd8  lw          $v1, 0x1BD8($at)
    ctx->pc = 0x1b994cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7128)));
    // 0x1b9950: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b9950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1b9954: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b9954u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1b9958: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b995c: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1b995cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9960: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b9960u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9964: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1B9964u;
    {
        const bool branch_taken_0x1b9964 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9964u;
            // 0x1b9968: 0x24640014  addiu       $a0, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9964) {
            ctx->pc = 0x1B9988u;
            goto label_1b9988;
        }
    }
    ctx->pc = 0x1B996Cu;
    // 0x1b996c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b996cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1b9970: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b9970u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1b9974: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9978: 0x0  nop
    ctx->pc = 0x1b9978u;
    // NOP
    // 0x1b997c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b997cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b9980: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b9980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1b9984: 0x0  nop
    ctx->pc = 0x1b9984u;
    // NOP
label_1b9988:
    // 0x1b9988: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b9988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b998c: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1b998cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1b9990: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1b9990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b9994: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1b9994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b9998: 0xc06edf8  jal         func_1BB7E0
    ctx->pc = 0x1B9998u;
    SET_GPR_U32(ctx, 31, 0x1B99A0u);
    ctx->pc = 0x1B999Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9998u;
            // 0x1b999c: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB7E0u;
    if (runtime->hasFunction(0x1BB7E0u)) {
        auto targetFn = runtime->lookupFunction(0x1BB7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B99A0u; }
        if (ctx->pc != 0x1B99A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1bb7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B99A0u; }
        if (ctx->pc != 0x1B99A0u) { return; }
    }
    ctx->pc = 0x1B99A0u;
    // 0x1b99a0: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1b99a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b99a4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1b99a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1b99a8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b99a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b99ac: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1b99acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1b99b0: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x1B99B0u;
    SET_GPR_U32(ctx, 31, 0x1B99B8u);
    ctx->pc = 0x1B99B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B99B0u;
            // 0x1b99b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B99B8u; }
        if (ctx->pc != 0x1B99B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B99B8u; }
        if (ctx->pc != 0x1B99B8u) { return; }
    }
    ctx->pc = 0x1B99B8u;
    // 0x1b99b8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b99b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b99bc: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1b99bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b99c0: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x1B99C0u;
    SET_GPR_U32(ctx, 31, 0x1B99C8u);
    ctx->pc = 0x1B99C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B99C0u;
            // 0x1b99c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B99C8u; }
        if (ctx->pc != 0x1B99C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B99C8u; }
        if (ctx->pc != 0x1B99C8u) { return; }
    }
    ctx->pc = 0x1B99C8u;
    // 0x1b99c8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b99c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b99cc: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1b99ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b99d0: 0xc04b804  jal         func_12E010
    ctx->pc = 0x1B99D0u;
    SET_GPR_U32(ctx, 31, 0x1B99D8u);
    ctx->pc = 0x1B99D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B99D0u;
            // 0x1b99d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B99D8u; }
        if (ctx->pc != 0x1B99D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B99D8u; }
        if (ctx->pc != 0x1B99D8u) { return; }
    }
    ctx->pc = 0x1B99D8u;
    // 0x1b99d8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b99d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b99dc: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1b99dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b99e0: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x1B99E0u;
    SET_GPR_U32(ctx, 31, 0x1B99E8u);
    ctx->pc = 0x1B99E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B99E0u;
            // 0x1b99e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B99E8u; }
        if (ctx->pc != 0x1B99E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B99E8u; }
        if (ctx->pc != 0x1B99E8u) { return; }
    }
    ctx->pc = 0x1B99E8u;
    // 0x1b99e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b99e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b99ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b99ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b99f0: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x1B99F0u;
    SET_GPR_U32(ctx, 31, 0x1B99F8u);
    ctx->pc = 0x1B99F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B99F0u;
            // 0x1b99f4: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B99F8u; }
        if (ctx->pc != 0x1B99F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B99F8u; }
        if (ctx->pc != 0x1B99F8u) { return; }
    }
    ctx->pc = 0x1B99F8u;
    // 0x1b99f8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1b99f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b99fc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1b99fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b9a00: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1b9a00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b9a04: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B9A04u;
    {
        const bool branch_taken_0x1b9a04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9a04) {
            ctx->pc = 0x1B9A58u;
            goto label_1b9a58;
        }
    }
    ctx->pc = 0x1B9A0Cu;
    // 0x1b9a0c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1b9a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1b9a10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9A10u;
    {
        const bool branch_taken_0x1b9a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9a10) {
            ctx->pc = 0x1B9A28u;
            goto label_1b9a28;
        }
    }
    ctx->pc = 0x1B9A18u;
    // 0x1b9a18: 0xc0604f0  jal         func_1813C0
    ctx->pc = 0x1B9A18u;
    SET_GPR_U32(ctx, 31, 0x1B9A20u);
    ctx->pc = 0x1B9A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9A18u;
            // 0x1b9a1c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9A20u; }
        if (ctx->pc != 0x1B9A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9A20u; }
        if (ctx->pc != 0x1B9A20u) { return; }
    }
    ctx->pc = 0x1B9A20u;
    // 0x1b9a20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B9A20u;
    {
        const bool branch_taken_0x1b9a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9a20) {
            ctx->pc = 0x1B9A30u;
            goto label_1b9a30;
        }
    }
    ctx->pc = 0x1B9A28u;
label_1b9a28:
    // 0x1b9a28: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1B9A28u;
    SET_GPR_U32(ctx, 31, 0x1B9A30u);
    ctx->pc = 0x1B9A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9A28u;
            // 0x1b9a2c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9A30u; }
        if (ctx->pc != 0x1B9A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9A30u; }
        if (ctx->pc != 0x1B9A30u) { return; }
    }
    ctx->pc = 0x1B9A30u;
label_1b9a30:
    // 0x1b9a30: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1b9a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1b9a34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9A34u;
    {
        const bool branch_taken_0x1b9a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9a34) {
            ctx->pc = 0x1B9A48u;
            goto label_1b9a48;
        }
    }
    ctx->pc = 0x1B9A3Cu;
    // 0x1b9a3c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B9A3Cu;
    {
        const bool branch_taken_0x1b9a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9A3Cu;
            // 0x1b9a40: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9a3c) {
            ctx->pc = 0x1B9A68u;
            goto label_1b9a68;
        }
    }
    ctx->pc = 0x1B9A44u;
    // 0x1b9a44: 0x0  nop
    ctx->pc = 0x1b9a44u;
    // NOP
label_1b9a48:
    // 0x1b9a48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b9a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9a4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B9A4Cu;
    {
        const bool branch_taken_0x1b9a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9A4Cu;
            // 0x1b9a50: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9a4c) {
            ctx->pc = 0x1B9A68u;
            goto label_1b9a68;
        }
    }
    ctx->pc = 0x1B9A54u;
    // 0x1b9a54: 0x0  nop
    ctx->pc = 0x1b9a54u;
    // NOP
label_1b9a58:
    // 0x1b9a58: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1B9A58u;
    SET_GPR_U32(ctx, 31, 0x1B9A60u);
    ctx->pc = 0x1B9A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9A58u;
            // 0x1b9a5c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9A60u; }
        if (ctx->pc != 0x1B9A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9A60u; }
        if (ctx->pc != 0x1B9A60u) { return; }
    }
    ctx->pc = 0x1B9A60u;
    // 0x1b9a60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b9a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9a64: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1b9a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1b9a68:
    // 0x1b9a68: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b9a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b9a6c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1b9a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1b9a70: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b9a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b9a74: 0x1c400020  bgtz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1B9A74u;
    {
        const bool branch_taken_0x1b9a74 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1b9a74) {
            ctx->pc = 0x1B9AF8u;
            goto label_1b9af8;
        }
    }
    ctx->pc = 0x1B9A7Cu;
    // 0x1b9a7c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b9a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1b9a80: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1b9a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1b9a84: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b9a84u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b9a88: 0x0  nop
    ctx->pc = 0x1b9a88u;
    // NOP
    // 0x1b9a8c: 0x0  nop
    ctx->pc = 0x1b9a8cu;
    // NOP
    // 0x1b9a90: 0x1010  mfhi        $v0
    ctx->pc = 0x1b9a90u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b9a94: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B9A94u;
    {
        const bool branch_taken_0x1b9a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9a94) {
            ctx->pc = 0x1B9AB0u;
            goto label_1b9ab0;
        }
    }
    ctx->pc = 0x1B9A9Cu;
    // 0x1b9a9c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1b9a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1b9aa0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b9aa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9aa4: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1b9aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1b9aa8: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1B9AA8u;
    SET_GPR_U32(ctx, 31, 0x1B9AB0u);
    ctx->pc = 0x1B9AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9AA8u;
            // 0x1b9aac: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9AB0u; }
        if (ctx->pc != 0x1B9AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9AB0u; }
        if (ctx->pc != 0x1B9AB0u) { return; }
    }
    ctx->pc = 0x1B9AB0u;
label_1b9ab0:
    // 0x1b9ab0: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x1b9ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1b9ab4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9AB4u;
    {
        const bool branch_taken_0x1b9ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9AB4u;
            // 0x1b9ab8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9ab4) {
            ctx->pc = 0x1B9AC8u;
            goto label_1b9ac8;
        }
    }
    ctx->pc = 0x1B9ABCu;
    // 0x1b9abc: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b9abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b9ac0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9AC0u;
    {
        const bool branch_taken_0x1b9ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9AC0u;
            // 0x1b9ac4: 0xac221bf8  sw          $v0, 0x1BF8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9ac0) {
            ctx->pc = 0x1B9AD8u;
            goto label_1b9ad8;
        }
    }
    ctx->pc = 0x1B9AC8u;
label_1b9ac8:
    // 0x1b9ac8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b9ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9acc: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b9accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b9ad0: 0xac221c00  sw          $v0, 0x1C00($at)
    ctx->pc = 0x1b9ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7168), GPR_U32(ctx, 2));
    // 0x1b9ad4: 0x0  nop
    ctx->pc = 0x1b9ad4u;
    // NOP
label_1b9ad8:
    // 0x1b9ad8: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x1b9ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1b9adc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b9adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b9ae0: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x1b9ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    // 0x1b9ae4: 0x8e050124  lw          $a1, 0x124($s0)
    ctx->pc = 0x1b9ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1b9ae8: 0xc0604b0  jal         func_1812C0
    ctx->pc = 0x1B9AE8u;
    SET_GPR_U32(ctx, 31, 0x1B9AF0u);
    ctx->pc = 0x1B9AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9AE8u;
            // 0x1b9aec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9AF0u; }
        if (ctx->pc != 0x1B9AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9AF0u; }
        if (ctx->pc != 0x1B9AF0u) { return; }
    }
    ctx->pc = 0x1B9AF0u;
    // 0x1b9af0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1B9AF0u;
    {
        const bool branch_taken_0x1b9af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9af0) {
            ctx->pc = 0x1B9B78u;
            goto label_1b9b78;
        }
    }
    ctx->pc = 0x1B9AF8u;
label_1b9af8:
    // 0x1b9af8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1b9af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b9afc: 0x3c06001b  lui         $a2, 0x1B
    ctx->pc = 0x1b9afcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27 << 16));
    // 0x1b9b00: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b9b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b9b04: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1b9b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1b9b08: 0x24c67cf0  addiu       $a2, $a2, 0x7CF0
    ctx->pc = 0x1b9b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31984));
    // 0x1b9b0c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b9b0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9b10: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1b9b10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9b14: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1b9b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x1b9b18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9b1c: 0x0  nop
    ctx->pc = 0x1b9b1cu;
    // NOP
    // 0x1b9b20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b9b20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b9b24: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1b9b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1b9b28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b9b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b9b2c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1b9b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x1b9b30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9b34: 0x0  nop
    ctx->pc = 0x1b9b34u;
    // NOP
    // 0x1b9b38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b9b38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b9b3c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1b9b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1b9b40: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1b9b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b9b44: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1b9b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1b9b48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9b48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9b4c: 0x0  nop
    ctx->pc = 0x1b9b4cu;
    // NOP
    // 0x1b9b50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b9b50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b9b54: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1b9b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1b9b58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b9b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b9b5c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1b9b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1b9b60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9b60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9b64: 0x0  nop
    ctx->pc = 0x1b9b64u;
    // NOP
    // 0x1b9b68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b9b68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b9b6c: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1B9B6Cu;
    SET_GPR_U32(ctx, 31, 0x1B9B74u);
    ctx->pc = 0x1B9B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9B6Cu;
            // 0x1b9b70: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9B74u; }
        if (ctx->pc != 0x1B9B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9B74u; }
        if (ctx->pc != 0x1B9B74u) { return; }
    }
    ctx->pc = 0x1B9B74u;
    // 0x1b9b74: 0x0  nop
    ctx->pc = 0x1b9b74u;
    // NOP
label_1b9b78:
    // 0x1b9b78: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b9b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1b9b7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b9b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b9b80: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x1b9b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x1b9b84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b9b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9b88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b9b88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9B8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9B8Cu;
            // 0x1b9b90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B9300u: goto label_1b9300;
            case 0x1B9340u: goto label_1b9340;
            case 0x1B9378u: goto label_1b9378;
            case 0x1B9380u: goto label_1b9380;
            case 0x1B9398u: goto label_1b9398;
            case 0x1B93B0u: goto label_1b93b0;
            case 0x1B93B8u: goto label_1b93b8;
            case 0x1B93C0u: goto label_1b93c0;
            case 0x1B93E8u: goto label_1b93e8;
            case 0x1B9408u: goto label_1b9408;
            case 0x1B9428u: goto label_1b9428;
            case 0x1B9430u: goto label_1b9430;
            case 0x1B9464u: goto label_1b9464;
            case 0x1B94F0u: goto label_1b94f0;
            case 0x1B9540u: goto label_1b9540;
            case 0x1B9550u: goto label_1b9550;
            case 0x1B9570u: goto label_1b9570;
            case 0x1B9590u: goto label_1b9590;
            case 0x1B9598u: goto label_1b9598;
            case 0x1B95CCu: goto label_1b95cc;
            case 0x1B9640u: goto label_1b9640;
            case 0x1B96B8u: goto label_1b96b8;
            case 0x1B96C8u: goto label_1b96c8;
            case 0x1B96E8u: goto label_1b96e8;
            case 0x1B9708u: goto label_1b9708;
            case 0x1B9710u: goto label_1b9710;
            case 0x1B9744u: goto label_1b9744;
            case 0x1B9830u: goto label_1b9830;
            case 0x1B98F8u: goto label_1b98f8;
            case 0x1B9908u: goto label_1b9908;
            case 0x1B9948u: goto label_1b9948;
            case 0x1B9988u: goto label_1b9988;
            case 0x1B9A28u: goto label_1b9a28;
            case 0x1B9A30u: goto label_1b9a30;
            case 0x1B9A48u: goto label_1b9a48;
            case 0x1B9A58u: goto label_1b9a58;
            case 0x1B9A68u: goto label_1b9a68;
            case 0x1B9AB0u: goto label_1b9ab0;
            case 0x1B9AC8u: goto label_1b9ac8;
            case 0x1B9AD8u: goto label_1b9ad8;
            case 0x1B9AF8u: goto label_1b9af8;
            case 0x1B9B78u: goto label_1b9b78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B9B94u;
}
