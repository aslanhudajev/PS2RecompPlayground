#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage2BossMove2
// Address: 0x176d30 - 0x1774f8
void Stage2BossMove2_0x176d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage2BossMove2_0x176d30");
#endif

    ctx->pc = 0x176d30u;

    // 0x176d30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x176d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x176d34: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x176d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x176d38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x176d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x176d3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x176d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x176d40: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x176d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x176d44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x176d44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176d48: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x176d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x176d4c: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x176D4Cu;
    SET_GPR_U32(ctx, 31, 0x176D54u);
    ctx->pc = 0x176D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176D4Cu;
            // 0x176d50: 0xdc25a080  ld          $a1, -0x5F80($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294942848)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D54u; }
        if (ctx->pc != 0x176D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D54u; }
        if (ctx->pc != 0x176D54u) { return; }
    }
    ctx->pc = 0x176D54u;
    // 0x176d54: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x176d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x176d58: 0xac2227c8  sw          $v0, 0x27C8($at)
    ctx->pc = 0x176d58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10184), GPR_U32(ctx, 2));
    // 0x176d5c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x176d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x176d60: 0x8c2427c8  lw          $a0, 0x27C8($at)
    ctx->pc = 0x176d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10184)));
    // 0x176d64: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x176D64u;
    SET_GPR_U32(ctx, 31, 0x176D6Cu);
    ctx->pc = 0x176D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176D64u;
            // 0x176d68: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D6Cu; }
        if (ctx->pc != 0x176D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D6Cu; }
        if (ctx->pc != 0x176D6Cu) { return; }
    }
    ctx->pc = 0x176D6Cu;
    // 0x176d6c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x176d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x176d70: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x176d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x176d74: 0xac2227d0  sw          $v0, 0x27D0($at)
    ctx->pc = 0x176d74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10192), GPR_U32(ctx, 2));
    // 0x176d78: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x176d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x176d7c: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x176d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x176d80: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x176d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x176d84: 0xc05f3cc  jal         func_17CF30
    ctx->pc = 0x176D84u;
    SET_GPR_U32(ctx, 31, 0x176D8Cu);
    ctx->pc = 0x176D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176D84u;
            // 0x176d88: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CF30u;
    if (runtime->hasFunction(0x17CF30u)) {
        auto targetFn = runtime->lookupFunction(0x17CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D8Cu; }
        if (ctx->pc != 0x176D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x17cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D8Cu; }
        if (ctx->pc != 0x176D8Cu) { return; }
    }
    ctx->pc = 0x176D8Cu;
    // 0x176d8c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x176d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x176d90: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x176d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x176d94: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x176d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x176d98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x176d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x176d9c: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x176d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x176da0: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x176da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x176da4: 0x106200be  beq         $v1, $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x176DA4u;
    {
        const bool branch_taken_0x176da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x176DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176DA4u;
            // 0x176da8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176da4) {
            ctx->pc = 0x1770A0u;
            goto label_1770a0;
        }
    }
    ctx->pc = 0x176DACu;
    // 0x176dac: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x176DACu;
    {
        const bool branch_taken_0x176dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x176dac) {
            ctx->pc = 0x176EB8u;
            goto label_176eb8;
        }
    }
    ctx->pc = 0x176DB4u;
    // 0x176db4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x176db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176db8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x176DB8u;
    {
        const bool branch_taken_0x176db8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x176db8) {
            ctx->pc = 0x176DE8u;
            goto label_176de8;
        }
    }
    ctx->pc = 0x176DC0u;
    // 0x176dc0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x176DC0u;
    {
        const bool branch_taken_0x176dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x176dc0) {
            ctx->pc = 0x176DD0u;
            goto label_176dd0;
        }
    }
    ctx->pc = 0x176DC8u;
    // 0x176dc8: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x176DC8u;
    {
        const bool branch_taken_0x176dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176dc8) {
            ctx->pc = 0x177180u;
            goto label_177180;
        }
    }
    ctx->pc = 0x176DD0u;
label_176dd0:
    // 0x176dd0: 0x3c02bf99  lui         $v0, 0xBF99
    ctx->pc = 0x176dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49049 << 16));
    // 0x176dd4: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x176dd4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x176dd8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x176dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x176ddc: 0x8c2227d0  lw          $v0, 0x27D0($at)
    ctx->pc = 0x176ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10192)));
    // 0x176de0: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x176DE0u;
    {
        const bool branch_taken_0x176de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176DE0u;
            // 0x176de4: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176de0) {
            ctx->pc = 0x177180u;
            goto label_177180;
        }
    }
    ctx->pc = 0x176DE8u;
label_176de8:
    // 0x176de8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x176de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x176dec: 0x8c2227d0  lw          $v0, 0x27D0($at)
    ctx->pc = 0x176decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10192)));
    // 0x176df0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x176df0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176df4: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x176df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176df8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x176df8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176dfc: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x176DFCu;
    {
        const bool branch_taken_0x176dfc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x176E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176DFCu;
            // 0x176e00: 0x3c033c23  lui         $v1, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176dfc) {
            ctx->pc = 0x176E50u;
            goto label_176e50;
        }
    }
    ctx->pc = 0x176E04u;
    // 0x176e04: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x176e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x176e08: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x176e08u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
    // 0x176e0c: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x176e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
    // 0x176e10: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x176e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x176e14: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x176e14u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x176e18: 0x0  nop
    ctx->pc = 0x176e18u;
    // NOP
    // 0x176e1c: 0x0  nop
    ctx->pc = 0x176e1cu;
    // NOP
    // 0x176e20: 0x1010  mfhi        $v0
    ctx->pc = 0x176e20u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x176e24: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x176E24u;
    {
        const bool branch_taken_0x176e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176e24) {
            ctx->pc = 0x176E48u;
            goto label_176e48;
        }
    }
    ctx->pc = 0x176E2Cu;
    // 0x176e2c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x176e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176e30: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x176e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x176e34: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x176e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176e38: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x176e38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x176e3c: 0xc05d080  jal         func_174200
    ctx->pc = 0x176E3Cu;
    SET_GPR_U32(ctx, 31, 0x176E44u);
    ctx->pc = 0x176E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176E3Cu;
            // 0x176e40: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176E44u; }
        if (ctx->pc != 0x176E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176E44u; }
        if (ctx->pc != 0x176E44u) { return; }
    }
    ctx->pc = 0x176E44u;
    // 0x176e44: 0x0  nop
    ctx->pc = 0x176e44u;
    // NOP
label_176e48:
    // 0x176e48: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x176E48u;
    {
        const bool branch_taken_0x176e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176E48u;
            // 0x176e4c: 0xae000114  sw          $zero, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176e48) {
            ctx->pc = 0x176E98u;
            goto label_176e98;
        }
    }
    ctx->pc = 0x176E50u;
label_176e50:
    // 0x176e50: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x176e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x176e54: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x176e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x176e58: 0x8c2227d0  lw          $v0, 0x27D0($at)
    ctx->pc = 0x176e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10192)));
    // 0x176e5c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x176e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x176e60: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x176e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x176e64: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x176E64u;
    {
        const bool branch_taken_0x176e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176e64) {
            ctx->pc = 0x176E88u;
            goto label_176e88;
        }
    }
    ctx->pc = 0x176E6Cu;
    // 0x176e6c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x176e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176e70: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x176e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x176e74: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x176e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176e78: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x176e78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x176e7c: 0xc05d080  jal         func_174200
    ctx->pc = 0x176E7Cu;
    SET_GPR_U32(ctx, 31, 0x176E84u);
    ctx->pc = 0x176E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176E7Cu;
            // 0x176e80: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176E84u; }
        if (ctx->pc != 0x176E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176E84u; }
        if (ctx->pc != 0x176E84u) { return; }
    }
    ctx->pc = 0x176E84u;
    // 0x176e84: 0x0  nop
    ctx->pc = 0x176e84u;
    // NOP
label_176e88:
    // 0x176e88: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x176e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x176e8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x176e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x176e90: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x176e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x176e94: 0x0  nop
    ctx->pc = 0x176e94u;
    // NOP
label_176e98:
    // 0x176e98: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x176e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x176e9c: 0x8c2227d0  lw          $v0, 0x27D0($at)
    ctx->pc = 0x176e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10192)));
    // 0x176ea0: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x176ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176ea4: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x176ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176ea8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x176ea8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x176eac: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x176EACu;
    {
        const bool branch_taken_0x176eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176EACu;
            // 0x176eb0: 0xe4400014  swc1        $f0, 0x14($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x176eac) {
            ctx->pc = 0x177180u;
            goto label_177180;
        }
    }
    ctx->pc = 0x176EB4u;
    // 0x176eb4: 0x0  nop
    ctx->pc = 0x176eb4u;
    // NOP
label_176eb8:
    // 0x176eb8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x176eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x176ebc: 0x184000b0  blez        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x176EBCu;
    {
        const bool branch_taken_0x176ebc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x176EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176EBCu;
            // 0x176ec0: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176ebc) {
            ctx->pc = 0x177180u;
            goto label_177180;
        }
    }
    ctx->pc = 0x176EC4u;
    // 0x176ec4: 0x8c2227d0  lw          $v0, 0x27D0($at)
    ctx->pc = 0x176ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10192)));
    // 0x176ec8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x176ec8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176ecc: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x176eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176ed0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x176ed0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176ed4: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x176ED4u;
    {
        const bool branch_taken_0x176ed4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x176ed4) {
            ctx->pc = 0x176F30u;
            goto label_176f30;
        }
    }
    ctx->pc = 0x176EDCu;
    // 0x176edc: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x176edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x176ee0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x176ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x176ee4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x176ee4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x176ee8: 0x0  nop
    ctx->pc = 0x176ee8u;
    // NOP
    // 0x176eec: 0x0  nop
    ctx->pc = 0x176eecu;
    // NOP
    // 0x176ef0: 0x1010  mfhi        $v0
    ctx->pc = 0x176ef0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x176ef4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x176EF4u;
    {
        const bool branch_taken_0x176ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176ef4) {
            ctx->pc = 0x176F18u;
            goto label_176f18;
        }
    }
    ctx->pc = 0x176EFCu;
    // 0x176efc: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x176efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176f00: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x176f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x176f04: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x176f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176f08: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x176f08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x176f0c: 0xc05d080  jal         func_174200
    ctx->pc = 0x176F0Cu;
    SET_GPR_U32(ctx, 31, 0x176F14u);
    ctx->pc = 0x176F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176F0Cu;
            // 0x176f10: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F14u; }
        if (ctx->pc != 0x176F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F14u; }
        if (ctx->pc != 0x176F14u) { return; }
    }
    ctx->pc = 0x176F14u;
    // 0x176f14: 0x0  nop
    ctx->pc = 0x176f14u;
    // NOP
label_176f18:
    // 0x176f18: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x176f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x176f1c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x176f1cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x176f20: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x176f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
    // 0x176f24: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x176F24u;
    {
        const bool branch_taken_0x176f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176F24u;
            // 0x176f28: 0xae000114  sw          $zero, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176f24) {
            ctx->pc = 0x177080u;
            goto label_177080;
        }
    }
    ctx->pc = 0x176F2Cu;
    // 0x176f2c: 0x0  nop
    ctx->pc = 0x176f2cu;
    // NOP
label_176f30:
    // 0x176f30: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x176f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x176f34: 0xe60000e8  swc1        $f0, 0xE8($s0)
    ctx->pc = 0x176f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
    // 0x176f38: 0x8c2227d0  lw          $v0, 0x27D0($at)
    ctx->pc = 0x176f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10192)));
    // 0x176f3c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x176f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x176f40: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x176f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x176f44: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x176F44u;
    {
        const bool branch_taken_0x176f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176f44) {
            ctx->pc = 0x176F68u;
            goto label_176f68;
        }
    }
    ctx->pc = 0x176F4Cu;
    // 0x176f4c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x176f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176f50: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x176f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x176f54: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x176f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176f58: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x176f58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x176f5c: 0xc05d080  jal         func_174200
    ctx->pc = 0x176F5Cu;
    SET_GPR_U32(ctx, 31, 0x176F64u);
    ctx->pc = 0x176F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176F5Cu;
            // 0x176f60: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F64u; }
        if (ctx->pc != 0x176F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F64u; }
        if (ctx->pc != 0x176F64u) { return; }
    }
    ctx->pc = 0x176F64u;
    // 0x176f64: 0x0  nop
    ctx->pc = 0x176f64u;
    // NOP
label_176f68:
    // 0x176f68: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x176f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x176f6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x176f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x176f70: 0xc065d00  jal         func_197400
    ctx->pc = 0x176F70u;
    SET_GPR_U32(ctx, 31, 0x176F78u);
    ctx->pc = 0x176F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176F70u;
            // 0x176f74: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F78u; }
        if (ctx->pc != 0x176F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F78u; }
        if (ctx->pc != 0x176F78u) { return; }
    }
    ctx->pc = 0x176F78u;
    // 0x176f78: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x176f78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x176f7c: 0x14200016  bnez        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x176F7Cu;
    {
        const bool branch_taken_0x176f7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x176f7c) {
            ctx->pc = 0x176FD8u;
            goto label_176fd8;
        }
    }
    ctx->pc = 0x176F84u;
    // 0x176f84: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x176f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x176f88: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x176f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x176f8c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x176f8cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x176f90: 0x0  nop
    ctx->pc = 0x176f90u;
    // NOP
    // 0x176f94: 0x0  nop
    ctx->pc = 0x176f94u;
    // NOP
    // 0x176f98: 0x1010  mfhi        $v0
    ctx->pc = 0x176f98u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x176f9c: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x176F9Cu;
    {
        const bool branch_taken_0x176f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176f9c) {
            ctx->pc = 0x177080u;
            goto label_177080;
        }
    }
    ctx->pc = 0x176FA4u;
    // 0x176fa4: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x176fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x176fa8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x176fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x176fac: 0x24640080  addiu       $a0, $v1, 0x80
    ctx->pc = 0x176facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x176fb0: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x176FB0u;
    SET_GPR_U32(ctx, 31, 0x176FB8u);
    ctx->pc = 0x176FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176FB0u;
            // 0x176fb4: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FB8u; }
        if (ctx->pc != 0x176FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FB8u; }
        if (ctx->pc != 0x176FB8u) { return; }
    }
    ctx->pc = 0x176FB8u;
    // 0x176fb8: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x176fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x176fbc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x176fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x176fc0: 0x24640080  addiu       $a0, $v1, 0x80
    ctx->pc = 0x176fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x176fc4: 0xc06560c  jal         func_195830
    ctx->pc = 0x176FC4u;
    SET_GPR_U32(ctx, 31, 0x176FCCu);
    ctx->pc = 0x176FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176FC4u;
            // 0x176fc8: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FCCu; }
        if (ctx->pc != 0x176FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FCCu; }
        if (ctx->pc != 0x176FCCu) { return; }
    }
    ctx->pc = 0x176FCCu;
    // 0x176fcc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x176FCCu;
    {
        const bool branch_taken_0x176fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176fcc) {
            ctx->pc = 0x177080u;
            goto label_177080;
        }
    }
    ctx->pc = 0x176FD4u;
    // 0x176fd4: 0x0  nop
    ctx->pc = 0x176fd4u;
    // NOP
label_176fd8:
    // 0x176fd8: 0xc065d00  jal         func_197400
    ctx->pc = 0x176FD8u;
    SET_GPR_U32(ctx, 31, 0x176FE0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FE0u; }
        if (ctx->pc != 0x176FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FE0u; }
        if (ctx->pc != 0x176FE0u) { return; }
    }
    ctx->pc = 0x176FE0u;
    // 0x176fe0: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x176FE0u;
    {
        const bool branch_taken_0x176fe0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x176fe0) {
            ctx->pc = 0x177038u;
            goto label_177038;
        }
    }
    ctx->pc = 0x176FE8u;
    // 0x176fe8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x176fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x176fec: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x176fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x176ff0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x176ff0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x176ff4: 0x0  nop
    ctx->pc = 0x176ff4u;
    // NOP
    // 0x176ff8: 0x0  nop
    ctx->pc = 0x176ff8u;
    // NOP
    // 0x176ffc: 0x1010  mfhi        $v0
    ctx->pc = 0x176ffcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x177000: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x177000u;
    {
        const bool branch_taken_0x177000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x177000) {
            ctx->pc = 0x177080u;
            goto label_177080;
        }
    }
    ctx->pc = 0x177008u;
    // 0x177008: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x177008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x17700c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x17700cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177010: 0x24640080  addiu       $a0, $v1, 0x80
    ctx->pc = 0x177010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x177014: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x177014u;
    SET_GPR_U32(ctx, 31, 0x17701Cu);
    ctx->pc = 0x177018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177014u;
            // 0x177018: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17701Cu; }
        if (ctx->pc != 0x17701Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17701Cu; }
        if (ctx->pc != 0x17701Cu) { return; }
    }
    ctx->pc = 0x17701Cu;
    // 0x17701c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x17701cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x177020: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177024: 0x24640080  addiu       $a0, $v1, 0x80
    ctx->pc = 0x177024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x177028: 0xc06560c  jal         func_195830
    ctx->pc = 0x177028u;
    SET_GPR_U32(ctx, 31, 0x177030u);
    ctx->pc = 0x17702Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177028u;
            // 0x17702c: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177030u; }
        if (ctx->pc != 0x177030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177030u; }
        if (ctx->pc != 0x177030u) { return; }
    }
    ctx->pc = 0x177030u;
    // 0x177030: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x177030u;
    {
        const bool branch_taken_0x177030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177030) {
            ctx->pc = 0x177080u;
            goto label_177080;
        }
    }
    ctx->pc = 0x177038u;
label_177038:
    // 0x177038: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x177038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x17703c: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x17703cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x177040: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x177040u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x177044: 0x0  nop
    ctx->pc = 0x177044u;
    // NOP
    // 0x177048: 0x0  nop
    ctx->pc = 0x177048u;
    // NOP
    // 0x17704c: 0x1010  mfhi        $v0
    ctx->pc = 0x17704cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x177050: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x177050u;
    {
        const bool branch_taken_0x177050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x177050) {
            ctx->pc = 0x177080u;
            goto label_177080;
        }
    }
    ctx->pc = 0x177058u;
    // 0x177058: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x177058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x17705c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x17705cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177060: 0x24640080  addiu       $a0, $v1, 0x80
    ctx->pc = 0x177060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x177064: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x177064u;
    SET_GPR_U32(ctx, 31, 0x17706Cu);
    ctx->pc = 0x177068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177064u;
            // 0x177068: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17706Cu; }
        if (ctx->pc != 0x17706Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17706Cu; }
        if (ctx->pc != 0x17706Cu) { return; }
    }
    ctx->pc = 0x17706Cu;
    // 0x17706c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x17706cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x177070: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177074: 0x24640080  addiu       $a0, $v1, 0x80
    ctx->pc = 0x177074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x177078: 0xc06560c  jal         func_195830
    ctx->pc = 0x177078u;
    SET_GPR_U32(ctx, 31, 0x177080u);
    ctx->pc = 0x17707Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177078u;
            // 0x17707c: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177080u; }
        if (ctx->pc != 0x177080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177080u; }
        if (ctx->pc != 0x177080u) { return; }
    }
    ctx->pc = 0x177080u;
label_177080:
    // 0x177080: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x177080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x177084: 0x8c2227d0  lw          $v0, 0x27D0($at)
    ctx->pc = 0x177084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10192)));
    // 0x177088: 0xc60100e8  lwc1        $f1, 0xE8($s0)
    ctx->pc = 0x177088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17708c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x17708cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177090: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x177090u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x177094: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x177094u;
    {
        const bool branch_taken_0x177094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177094u;
            // 0x177098: 0xe4400018  swc1        $f0, 0x18($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x177094) {
            ctx->pc = 0x177180u;
            goto label_177180;
        }
    }
    ctx->pc = 0x17709Cu;
    // 0x17709c: 0x0  nop
    ctx->pc = 0x17709cu;
    // NOP
label_1770a0:
    // 0x1770a0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1770a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1770a4: 0x18400036  blez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1770A4u;
    {
        const bool branch_taken_0x1770a4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1770A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1770A4u;
            // 0x1770a8: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1770a4) {
            ctx->pc = 0x177180u;
            goto label_177180;
        }
    }
    ctx->pc = 0x1770ACu;
    // 0x1770ac: 0x3c02bebc  lui         $v0, 0xBEBC
    ctx->pc = 0x1770acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48828 << 16));
    // 0x1770b0: 0x8c2327d0  lw          $v1, 0x27D0($at)
    ctx->pc = 0x1770b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10192)));
    // 0x1770b4: 0x34426a7f  ori         $v0, $v0, 0x6A7F
    ctx->pc = 0x1770b4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)27263u)));
    // 0x1770b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1770b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1770bc: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1770bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1770c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1770c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1770c4: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x1770C4u;
    {
        const bool branch_taken_0x1770c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1770c4) {
            ctx->pc = 0x177120u;
            goto label_177120;
        }
    }
    ctx->pc = 0x1770CCu;
    // 0x1770cc: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x1770ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1770d0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1770d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1770d4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1770d4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1770d8: 0x0  nop
    ctx->pc = 0x1770d8u;
    // NOP
    // 0x1770dc: 0x0  nop
    ctx->pc = 0x1770dcu;
    // NOP
    // 0x1770e0: 0x1010  mfhi        $v0
    ctx->pc = 0x1770e0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1770e4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1770E4u;
    {
        const bool branch_taken_0x1770e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1770e4) {
            ctx->pc = 0x177108u;
            goto label_177108;
        }
    }
    ctx->pc = 0x1770ECu;
    // 0x1770ec: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1770ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1770f0: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x1770f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1770f4: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1770f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1770f8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1770f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1770fc: 0xc05d080  jal         func_174200
    ctx->pc = 0x1770FCu;
    SET_GPR_U32(ctx, 31, 0x177104u);
    ctx->pc = 0x177100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1770FCu;
            // 0x177100: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177104u; }
        if (ctx->pc != 0x177104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177104u; }
        if (ctx->pc != 0x177104u) { return; }
    }
    ctx->pc = 0x177104u;
    // 0x177104: 0x0  nop
    ctx->pc = 0x177104u;
    // NOP
label_177108:
    // 0x177108: 0x3c02bba3  lui         $v0, 0xBBA3
    ctx->pc = 0x177108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48035 << 16));
    // 0x17710c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x17710cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x177110: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x177110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
    // 0x177114: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x177114u;
    {
        const bool branch_taken_0x177114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177114u;
            // 0x177118: 0xae000114  sw          $zero, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177114) {
            ctx->pc = 0x177168u;
            goto label_177168;
        }
    }
    ctx->pc = 0x17711Cu;
    // 0x17711c: 0x0  nop
    ctx->pc = 0x17711cu;
    // NOP
label_177120:
    // 0x177120: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x177120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x177124: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x177124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x177128: 0x8c2227d0  lw          $v0, 0x27D0($at)
    ctx->pc = 0x177128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10192)));
    // 0x17712c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x17712cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x177130: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x177130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x177134: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x177134u;
    {
        const bool branch_taken_0x177134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x177134) {
            ctx->pc = 0x177158u;
            goto label_177158;
        }
    }
    ctx->pc = 0x17713Cu;
    // 0x17713c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x17713cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177140: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x177140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x177144: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x177144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177148: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x177148u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x17714c: 0xc05d080  jal         func_174200
    ctx->pc = 0x17714Cu;
    SET_GPR_U32(ctx, 31, 0x177154u);
    ctx->pc = 0x177150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17714Cu;
            // 0x177150: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177154u; }
        if (ctx->pc != 0x177154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177154u; }
        if (ctx->pc != 0x177154u) { return; }
    }
    ctx->pc = 0x177154u;
    // 0x177154: 0x0  nop
    ctx->pc = 0x177154u;
    // NOP
label_177158:
    // 0x177158: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x177158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x17715c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17715cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x177160: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x177160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x177164: 0x0  nop
    ctx->pc = 0x177164u;
    // NOP
label_177168:
    // 0x177168: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x177168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17716c: 0x8c2227d0  lw          $v0, 0x27D0($at)
    ctx->pc = 0x17716cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10192)));
    // 0x177170: 0xc60100e8  lwc1        $f1, 0xE8($s0)
    ctx->pc = 0x177170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177174: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x177174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177178: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x177178u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x17717c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x17717cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_177180:
    // 0x177180: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x177180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x177184: 0x8c2327d0  lw          $v1, 0x27D0($at)
    ctx->pc = 0x177184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10192)));
    // 0x177188: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x177188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x17718c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x17718cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x177190: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x177190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177194: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x177194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177198: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x177198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17719c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x17719Cu;
    {
        const bool branch_taken_0x17719c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1771A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17719Cu;
            // 0x1771a0: 0x24640014  addiu       $a0, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17719c) {
            ctx->pc = 0x1771C0u;
            goto label_1771c0;
        }
    }
    ctx->pc = 0x1771A4u;
    // 0x1771a4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1771a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1771a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1771a8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1771ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1771acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1771b0: 0x0  nop
    ctx->pc = 0x1771b0u;
    // NOP
    // 0x1771b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1771b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1771b8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1771b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1771bc: 0x0  nop
    ctx->pc = 0x1771bcu;
    // NOP
label_1771c0:
    // 0x1771c0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1771c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1771c4: 0x8c2327d0  lw          $v1, 0x27D0($at)
    ctx->pc = 0x1771c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10192)));
    // 0x1771c8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1771c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1771cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1771ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1771d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1771d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1771d4: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1771d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1771d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1771d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1771dc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1771DCu;
    {
        const bool branch_taken_0x1771dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1771E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1771DCu;
            // 0x1771e0: 0x24640014  addiu       $a0, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1771dc) {
            ctx->pc = 0x177200u;
            goto label_177200;
        }
    }
    ctx->pc = 0x1771E4u;
    // 0x1771e4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1771e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1771e8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1771e8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1771ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1771ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1771f0: 0x0  nop
    ctx->pc = 0x1771f0u;
    // NOP
    // 0x1771f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1771f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1771f8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1771f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1771fc: 0x0  nop
    ctx->pc = 0x1771fcu;
    // NOP
label_177200:
    // 0x177200: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x177200u;
    SET_GPR_U32(ctx, 31, 0x177208u);
    ctx->pc = 0x177204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177200u;
            // 0x177204: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177208u; }
        if (ctx->pc != 0x177208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177208u; }
        if (ctx->pc != 0x177208u) { return; }
    }
    ctx->pc = 0x177208u;
    // 0x177208: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x177208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17720c: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x17720cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x177210: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x177210u;
    SET_GPR_U32(ctx, 31, 0x177218u);
    ctx->pc = 0x177214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177210u;
            // 0x177214: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177218u; }
        if (ctx->pc != 0x177218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177218u; }
        if (ctx->pc != 0x177218u) { return; }
    }
    ctx->pc = 0x177218u;
    // 0x177218: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x177218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17721c: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x17721cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x177220: 0xc04b804  jal         func_12E010
    ctx->pc = 0x177220u;
    SET_GPR_U32(ctx, 31, 0x177228u);
    ctx->pc = 0x177224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177220u;
            // 0x177224: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177228u; }
        if (ctx->pc != 0x177228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177228u; }
        if (ctx->pc != 0x177228u) { return; }
    }
    ctx->pc = 0x177228u;
    // 0x177228: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x177228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17722c: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x17722cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x177230: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x177230u;
    SET_GPR_U32(ctx, 31, 0x177238u);
    ctx->pc = 0x177234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177230u;
            // 0x177234: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177238u; }
        if (ctx->pc != 0x177238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177238u; }
        if (ctx->pc != 0x177238u) { return; }
    }
    ctx->pc = 0x177238u;
    // 0x177238: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x177238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17723c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17723cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177240: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x177240u;
    SET_GPR_U32(ctx, 31, 0x177248u);
    ctx->pc = 0x177244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177240u;
            // 0x177244: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177248u; }
        if (ctx->pc != 0x177248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177248u; }
        if (ctx->pc != 0x177248u) { return; }
    }
    ctx->pc = 0x177248u;
    // 0x177248: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x177248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17724c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x17724cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x177250: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x177250u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x177254: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x177254u;
    {
        const bool branch_taken_0x177254 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x177254) {
            ctx->pc = 0x1772A8u;
            goto label_1772a8;
        }
    }
    ctx->pc = 0x17725Cu;
    // 0x17725c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x17725cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x177260: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x177260u;
    {
        const bool branch_taken_0x177260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x177260) {
            ctx->pc = 0x177278u;
            goto label_177278;
        }
    }
    ctx->pc = 0x177268u;
    // 0x177268: 0xc0604f0  jal         func_1813C0
    ctx->pc = 0x177268u;
    SET_GPR_U32(ctx, 31, 0x177270u);
    ctx->pc = 0x17726Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177268u;
            // 0x17726c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177270u; }
        if (ctx->pc != 0x177270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177270u; }
        if (ctx->pc != 0x177270u) { return; }
    }
    ctx->pc = 0x177270u;
    // 0x177270: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x177270u;
    {
        const bool branch_taken_0x177270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177270) {
            ctx->pc = 0x177280u;
            goto label_177280;
        }
    }
    ctx->pc = 0x177278u;
label_177278:
    // 0x177278: 0xc0604dc  jal         func_181370
    ctx->pc = 0x177278u;
    SET_GPR_U32(ctx, 31, 0x177280u);
    ctx->pc = 0x17727Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177278u;
            // 0x17727c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177280u; }
        if (ctx->pc != 0x177280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177280u; }
        if (ctx->pc != 0x177280u) { return; }
    }
    ctx->pc = 0x177280u;
label_177280:
    // 0x177280: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x177280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x177284: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x177284u;
    {
        const bool branch_taken_0x177284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x177284) {
            ctx->pc = 0x177298u;
            goto label_177298;
        }
    }
    ctx->pc = 0x17728Cu;
    // 0x17728c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17728Cu;
    {
        const bool branch_taken_0x17728c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17728Cu;
            // 0x177290: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17728c) {
            ctx->pc = 0x1772B8u;
            goto label_1772b8;
        }
    }
    ctx->pc = 0x177294u;
    // 0x177294: 0x0  nop
    ctx->pc = 0x177294u;
    // NOP
label_177298:
    // 0x177298: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x177298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17729c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17729Cu;
    {
        const bool branch_taken_0x17729c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1772A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17729Cu;
            // 0x1772a0: 0xae03010c  sw          $v1, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17729c) {
            ctx->pc = 0x1772B8u;
            goto label_1772b8;
        }
    }
    ctx->pc = 0x1772A4u;
    // 0x1772a4: 0x0  nop
    ctx->pc = 0x1772a4u;
    // NOP
label_1772a8:
    // 0x1772a8: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1772A8u;
    SET_GPR_U32(ctx, 31, 0x1772B0u);
    ctx->pc = 0x1772ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1772A8u;
            // 0x1772ac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1772B0u; }
        if (ctx->pc != 0x1772B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1772B0u; }
        if (ctx->pc != 0x1772B0u) { return; }
    }
    ctx->pc = 0x1772B0u;
    // 0x1772b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1772b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1772b4: 0xae03010c  sw          $v1, 0x10C($s0)
    ctx->pc = 0x1772b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
label_1772b8:
    // 0x1772b8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1772b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1772bc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1772bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1772c0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1772c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1772c4: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1772C4u;
    {
        const bool branch_taken_0x1772c4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1772c4) {
            ctx->pc = 0x177330u;
            goto label_177330;
        }
    }
    ctx->pc = 0x1772CCu;
    // 0x1772cc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1772ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1772d0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1772d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1772d4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1772d4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1772d8: 0x0  nop
    ctx->pc = 0x1772d8u;
    // NOP
    // 0x1772dc: 0x0  nop
    ctx->pc = 0x1772dcu;
    // NOP
    // 0x1772e0: 0x1010  mfhi        $v0
    ctx->pc = 0x1772e0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1772e4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1772E4u;
    {
        const bool branch_taken_0x1772e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1772e4) {
            ctx->pc = 0x177310u;
            goto label_177310;
        }
    }
    ctx->pc = 0x1772ECu;
    // 0x1772ec: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1772ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1772f0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1772f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1772f4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1772f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1772f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1772f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1772fc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1772fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x177300: 0x24840086  addiu       $a0, $a0, 0x86
    ctx->pc = 0x177300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 134));
    // 0x177304: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x177304u;
    SET_GPR_U32(ctx, 31, 0x17730Cu);
    ctx->pc = 0x177308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177304u;
            // 0x177308: 0x2465ffb0  addiu       $a1, $v1, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17730Cu; }
        if (ctx->pc != 0x17730Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17730Cu; }
        if (ctx->pc != 0x17730Cu) { return; }
    }
    ctx->pc = 0x17730Cu;
    // 0x17730c: 0x0  nop
    ctx->pc = 0x17730cu;
    // NOP
label_177310:
    // 0x177310: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x177310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x177314: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x177314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x177318: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x177318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x17731c: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x17731cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x177320: 0xc0604b0  jal         func_1812C0
    ctx->pc = 0x177320u;
    SET_GPR_U32(ctx, 31, 0x177328u);
    ctx->pc = 0x177324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177320u;
            // 0x177324: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177328u; }
        if (ctx->pc != 0x177328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177328u; }
        if (ctx->pc != 0x177328u) { return; }
    }
    ctx->pc = 0x177328u;
    // 0x177328: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x177328u;
    {
        const bool branch_taken_0x177328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177328) {
            ctx->pc = 0x1774D0u;
            goto label_1774d0;
        }
    }
    ctx->pc = 0x177330u;
label_177330:
    // 0x177330: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x177330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x177334: 0x24630046  addiu       $v1, $v1, 0x46
    ctx->pc = 0x177334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 70));
    // 0x177338: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x177338u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17733c: 0x0  nop
    ctx->pc = 0x17733cu;
    // NOP
    // 0x177340: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x177340u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x177344: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x177344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x177348: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x177348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17734c: 0x2463ffd8  addiu       $v1, $v1, -0x28
    ctx->pc = 0x17734cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
    // 0x177350: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x177350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177354: 0x0  nop
    ctx->pc = 0x177354u;
    // NOP
    // 0x177358: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x177358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17735c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x17735cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x177360: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x177360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x177364: 0x24630058  addiu       $v1, $v1, 0x58
    ctx->pc = 0x177364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
    // 0x177368: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x177368u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17736c: 0x0  nop
    ctx->pc = 0x17736cu;
    // NOP
    // 0x177370: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x177370u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x177374: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x177374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x177378: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x177378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17737c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17737cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x177380: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x177380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x177384: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x177384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x177388: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x177388u;
    {
        const bool branch_taken_0x177388 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17738Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177388u;
            // 0x17738c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177388) {
            ctx->pc = 0x1773B0u;
            goto label_1773b0;
        }
    }
    ctx->pc = 0x177390u;
    // 0x177390: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x177390u;
    {
        const bool branch_taken_0x177390 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x177394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177390u;
            // 0x177394: 0x3c060017  lui         $a2, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177390) {
            ctx->pc = 0x1773B0u;
            goto label_1773b0;
        }
    }
    ctx->pc = 0x177398u;
    // 0x177398: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x177398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17739c: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x17739cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1773a0: 0x24c65030  addiu       $a2, $a2, 0x5030
    ctx->pc = 0x1773a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20528));
    // 0x1773a4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1773a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1773a8: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1773A8u;
    SET_GPR_U32(ctx, 31, 0x1773B0u);
    ctx->pc = 0x1773ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1773A8u;
            // 0x1773ac: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1773B0u; }
        if (ctx->pc != 0x1773B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1773B0u; }
        if (ctx->pc != 0x1773B0u) { return; }
    }
    ctx->pc = 0x1773B0u;
label_1773b0:
    // 0x1773b0: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1773b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1773b4: 0x24630058  addiu       $v1, $v1, 0x58
    ctx->pc = 0x1773b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
    // 0x1773b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1773b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1773bc: 0x0  nop
    ctx->pc = 0x1773bcu;
    // NOP
    // 0x1773c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1773c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1773c4: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x1773c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x1773c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1773c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1773cc: 0x2463ff88  addiu       $v1, $v1, -0x78
    ctx->pc = 0x1773ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967176));
    // 0x1773d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1773d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1773d4: 0x0  nop
    ctx->pc = 0x1773d4u;
    // NOP
    // 0x1773d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1773d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1773dc: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x1773dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x1773e0: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1773e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1773e4: 0x2463006c  addiu       $v1, $v1, 0x6C
    ctx->pc = 0x1773e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 108));
    // 0x1773e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1773e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1773ec: 0x0  nop
    ctx->pc = 0x1773ecu;
    // NOP
    // 0x1773f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1773f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1773f4: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x1773f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x1773f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1773f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1773fc: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x1773fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x177400: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x177400u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177404: 0x0  nop
    ctx->pc = 0x177404u;
    // NOP
    // 0x177408: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x177408u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17740c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x17740cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x177410: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x177410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x177414: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x177414u;
    {
        const bool branch_taken_0x177414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x177418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177414u;
            // 0x177418: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177414) {
            ctx->pc = 0x177440u;
            goto label_177440;
        }
    }
    ctx->pc = 0x17741Cu;
    // 0x17741c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17741Cu;
    {
        const bool branch_taken_0x17741c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x177420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17741Cu;
            // 0x177420: 0x3c060017  lui         $a2, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17741c) {
            ctx->pc = 0x177440u;
            goto label_177440;
        }
    }
    ctx->pc = 0x177424u;
    // 0x177424: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x177424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x177428: 0x2605003c  addiu       $a1, $s0, 0x3C
    ctx->pc = 0x177428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x17742c: 0x24c65030  addiu       $a2, $a2, 0x5030
    ctx->pc = 0x17742cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20528));
    // 0x177430: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x177430u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177434: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x177434u;
    SET_GPR_U32(ctx, 31, 0x17743Cu);
    ctx->pc = 0x177438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177434u;
            // 0x177438: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17743Cu; }
        if (ctx->pc != 0x17743Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17743Cu; }
        if (ctx->pc != 0x17743Cu) { return; }
    }
    ctx->pc = 0x17743Cu;
    // 0x17743c: 0x0  nop
    ctx->pc = 0x17743cu;
    // NOP
label_177440:
    // 0x177440: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x177440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x177444: 0x2463006c  addiu       $v1, $v1, 0x6C
    ctx->pc = 0x177444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 108));
    // 0x177448: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x177448u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17744c: 0x0  nop
    ctx->pc = 0x17744cu;
    // NOP
    // 0x177450: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x177450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x177454: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x177454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x177458: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x177458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17745c: 0x2463ff88  addiu       $v1, $v1, -0x78
    ctx->pc = 0x17745cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967176));
    // 0x177460: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x177460u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177464: 0x0  nop
    ctx->pc = 0x177464u;
    // NOP
    // 0x177468: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x177468u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17746c: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x17746cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x177470: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x177470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x177474: 0x24630094  addiu       $v1, $v1, 0x94
    ctx->pc = 0x177474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 148));
    // 0x177478: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x177478u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17747c: 0x0  nop
    ctx->pc = 0x17747cu;
    // NOP
    // 0x177480: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x177480u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x177484: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x177484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x177488: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x177488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17748c: 0x2463ffb0  addiu       $v1, $v1, -0x50
    ctx->pc = 0x17748cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967216));
    // 0x177490: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x177490u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177494: 0x0  nop
    ctx->pc = 0x177494u;
    // NOP
    // 0x177498: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x177498u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17749c: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x17749cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x1774a0: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x1774a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1774a4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1774A4u;
    {
        const bool branch_taken_0x1774a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1774A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1774A4u;
            // 0x1774a8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1774a4) {
            ctx->pc = 0x1774D0u;
            goto label_1774d0;
        }
    }
    ctx->pc = 0x1774ACu;
    // 0x1774ac: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1774ACu;
    {
        const bool branch_taken_0x1774ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1774B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1774ACu;
            // 0x1774b0: 0x3c060017  lui         $a2, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1774ac) {
            ctx->pc = 0x1774D0u;
            goto label_1774d0;
        }
    }
    ctx->pc = 0x1774B4u;
    // 0x1774b4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1774b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1774b8: 0x2605004c  addiu       $a1, $s0, 0x4C
    ctx->pc = 0x1774b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x1774bc: 0x24c65030  addiu       $a2, $a2, 0x5030
    ctx->pc = 0x1774bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20528));
    // 0x1774c0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1774c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1774c4: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1774C4u;
    SET_GPR_U32(ctx, 31, 0x1774CCu);
    ctx->pc = 0x1774C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1774C4u;
            // 0x1774c8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1774CCu; }
        if (ctx->pc != 0x1774CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1774CCu; }
        if (ctx->pc != 0x1774CCu) { return; }
    }
    ctx->pc = 0x1774CCu;
    // 0x1774cc: 0x0  nop
    ctx->pc = 0x1774ccu;
    // NOP
label_1774d0:
    // 0x1774d0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1774d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1774d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1774d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1774d8: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x1774d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x1774dc: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x1774dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1774e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1774e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1774e4: 0xae030110  sw          $v1, 0x110($s0)
    ctx->pc = 0x1774e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 3));
    // 0x1774e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1774e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1774ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1774ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1774f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1774F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1774F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1774F0u;
            // 0x1774f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176DD0u: goto label_176dd0;
            case 0x176DE8u: goto label_176de8;
            case 0x176E48u: goto label_176e48;
            case 0x176E50u: goto label_176e50;
            case 0x176E88u: goto label_176e88;
            case 0x176E98u: goto label_176e98;
            case 0x176EB8u: goto label_176eb8;
            case 0x176F18u: goto label_176f18;
            case 0x176F30u: goto label_176f30;
            case 0x176F68u: goto label_176f68;
            case 0x176FD8u: goto label_176fd8;
            case 0x177038u: goto label_177038;
            case 0x177080u: goto label_177080;
            case 0x1770A0u: goto label_1770a0;
            case 0x177108u: goto label_177108;
            case 0x177120u: goto label_177120;
            case 0x177158u: goto label_177158;
            case 0x177168u: goto label_177168;
            case 0x177180u: goto label_177180;
            case 0x1771C0u: goto label_1771c0;
            case 0x177200u: goto label_177200;
            case 0x177278u: goto label_177278;
            case 0x177280u: goto label_177280;
            case 0x177298u: goto label_177298;
            case 0x1772A8u: goto label_1772a8;
            case 0x1772B8u: goto label_1772b8;
            case 0x177310u: goto label_177310;
            case 0x177330u: goto label_177330;
            case 0x1773B0u: goto label_1773b0;
            case 0x177440u: goto label_177440;
            case 0x1774D0u: goto label_1774d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1774F8u;
}
