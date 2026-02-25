#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage1BossMove1
// Address: 0x1635e0 - 0x163d78
void Stage1BossMove1_0x1635e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage1BossMove1_0x1635e0");
#endif

    ctx->pc = 0x1635e0u;

    // 0x1635e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1635e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1635e4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1635e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1635e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1635e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1635ec: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1635ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1635f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1635f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1635f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1635f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1635f8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1635f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1635fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1635fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163600: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x163600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x163604: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x163604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x163608: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x163608u;
    SET_GPR_U32(ctx, 31, 0x163610u);
    ctx->pc = 0x16360Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163608u;
            // 0x16360c: 0xdc259d48  ld          $a1, -0x62B8($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294942024)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163610u; }
        if (ctx->pc != 0x163610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163610u; }
        if (ctx->pc != 0x163610u) { return; }
    }
    ctx->pc = 0x163610u;
    // 0x163610: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x163610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x163614: 0xac224be0  sw          $v0, 0x4BE0($at)
    ctx->pc = 0x163614u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19424), GPR_U32(ctx, 2));
    // 0x163618: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x163618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x16361c: 0x8c244be0  lw          $a0, 0x4BE0($at)
    ctx->pc = 0x16361cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19424)));
    // 0x163620: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x163620u;
    SET_GPR_U32(ctx, 31, 0x163628u);
    ctx->pc = 0x163624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163620u;
            // 0x163624: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163628u; }
        if (ctx->pc != 0x163628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163628u; }
        if (ctx->pc != 0x163628u) { return; }
    }
    ctx->pc = 0x163628u;
    // 0x163628: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x163628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x16362c: 0xac224be8  sw          $v0, 0x4BE8($at)
    ctx->pc = 0x16362cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19432), GPR_U32(ctx, 2));
    // 0x163630: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x163630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x163634: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x163634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x163638: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x163638u;
    {
        const bool branch_taken_0x163638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x163638) {
            ctx->pc = 0x163728u;
            goto label_163728;
        }
    }
    ctx->pc = 0x163640u;
    // 0x163640: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163644: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x163644u;
    {
        const bool branch_taken_0x163644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x163644) {
            ctx->pc = 0x163688u;
            goto label_163688;
        }
    }
    ctx->pc = 0x16364Cu;
    // 0x16364c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16364Cu;
    {
        const bool branch_taken_0x16364c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16364c) {
            ctx->pc = 0x163660u;
            goto label_163660;
        }
    }
    ctx->pc = 0x163654u;
    // 0x163654: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x163654u;
    {
        const bool branch_taken_0x163654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163654) {
            ctx->pc = 0x163AF8u;
            goto label_163af8;
        }
    }
    ctx->pc = 0x16365Cu;
    // 0x16365c: 0x0  nop
    ctx->pc = 0x16365cu;
    // NOP
label_163660:
    // 0x163660: 0x3c02bc23  lui         $v0, 0xBC23
    ctx->pc = 0x163660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
    // 0x163664: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x163664u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x163668: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x163668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x16366c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16366cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163670: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x163670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x163674: 0x8c224be8  lw          $v0, 0x4BE8($at)
    ctx->pc = 0x163674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19432)));
    // 0x163678: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x163678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16367c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16367cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x163680: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x163680u;
    {
        const bool branch_taken_0x163680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163680u;
            // 0x163684: 0xe4400014  swc1        $f0, 0x14($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x163680) {
            ctx->pc = 0x163AF8u;
            goto label_163af8;
        }
    }
    ctx->pc = 0x163688u;
label_163688:
    // 0x163688: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x163688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16368c: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x16368Cu;
    {
        const bool branch_taken_0x16368c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x16368c) {
            ctx->pc = 0x163700u;
            goto label_163700;
        }
    }
    ctx->pc = 0x163694u;
    // 0x163694: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x163694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163698: 0x3c02bc23  lui         $v0, 0xBC23
    ctx->pc = 0x163698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
    // 0x16369c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x16369cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1636a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1636a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1636a4: 0x0  nop
    ctx->pc = 0x1636a4u;
    // NOP
    // 0x1636a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1636a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1636ac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1636ACu;
    {
        const bool branch_taken_0x1636ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1636B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1636ACu;
            // 0x1636b0: 0x3c023b03  lui         $v0, 0x3B03 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1636ac) {
            ctx->pc = 0x1636C8u;
            goto label_1636c8;
        }
    }
    ctx->pc = 0x1636B4u;
    // 0x1636b4: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1636b4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1636b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1636b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1636bc: 0x0  nop
    ctx->pc = 0x1636bcu;
    // NOP
    // 0x1636c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1636c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1636c4: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x1636c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_1636c8:
    // 0x1636c8: 0x3c02bc23  lui         $v0, 0xBC23
    ctx->pc = 0x1636c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
    // 0x1636cc: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x1636ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1636d0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1636d0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1636d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1636d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1636d8: 0x0  nop
    ctx->pc = 0x1636d8u;
    // NOP
    // 0x1636dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1636dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1636e0: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1636E0u;
    {
        const bool branch_taken_0x1636e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1636E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1636E0u;
            // 0x1636e4: 0x3c023b03  lui         $v0, 0x3B03 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1636e0) {
            ctx->pc = 0x163708u;
            goto label_163708;
        }
    }
    ctx->pc = 0x1636E8u;
    // 0x1636e8: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1636e8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1636ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1636ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1636f0: 0x0  nop
    ctx->pc = 0x1636f0u;
    // NOP
    // 0x1636f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1636f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1636f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1636F8u;
    {
        const bool branch_taken_0x1636f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1636FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1636F8u;
            // 0x1636fc: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1636f8) {
            ctx->pc = 0x163708u;
            goto label_163708;
        }
    }
    ctx->pc = 0x163700u;
label_163700:
    // 0x163700: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x163700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x163704: 0x0  nop
    ctx->pc = 0x163704u;
    // NOP
label_163708:
    // 0x163708: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x163708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x16370c: 0x8c224be8  lw          $v0, 0x4BE8($at)
    ctx->pc = 0x16370cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19432)));
    // 0x163710: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x163710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163714: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x163714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163718: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x163718u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16371c: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x16371Cu;
    {
        const bool branch_taken_0x16371c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16371Cu;
            // 0x163720: 0xe4400014  swc1        $f0, 0x14($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16371c) {
            ctx->pc = 0x163AF8u;
            goto label_163af8;
        }
    }
    ctx->pc = 0x163724u;
    // 0x163724: 0x0  nop
    ctx->pc = 0x163724u;
    // NOP
label_163728:
    // 0x163728: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x163728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16372c: 0x184000ea  blez        $v0, . + 4 + (0xEA << 2)
    ctx->pc = 0x16372Cu;
    {
        const bool branch_taken_0x16372c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x16372c) {
            ctx->pc = 0x163AD8u;
            goto label_163ad8;
        }
    }
    ctx->pc = 0x163734u;
    // 0x163734: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x163734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163738: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x163738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
    // 0x16373c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x16373cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x163740: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163744: 0x0  nop
    ctx->pc = 0x163744u;
    // NOP
    // 0x163748: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x163748u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16374c: 0x450000d4  bc1f        . + 4 + (0xD4 << 2)
    ctx->pc = 0x16374Cu;
    {
        const bool branch_taken_0x16374c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x163750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16374Cu;
            // 0x163750: 0x3c023ba3  lui         $v0, 0x3BA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16374c) {
            ctx->pc = 0x163AA0u;
            goto label_163aa0;
        }
    }
    ctx->pc = 0x163754u;
    // 0x163754: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x163754u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x163758: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16375c: 0x0  nop
    ctx->pc = 0x16375cu;
    // NOP
    // 0x163760: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x163760u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163764: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x163764u;
    SET_GPR_U32(ctx, 31, 0x16376Cu);
    ctx->pc = 0x163768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163764u;
            // 0x163768: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16376Cu; }
        if (ctx->pc != 0x16376Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16376Cu; }
        if (ctx->pc != 0x16376Cu) { return; }
    }
    ctx->pc = 0x16376Cu;
    // 0x16376c: 0xc065d00  jal         func_197400
    ctx->pc = 0x16376Cu;
    SET_GPR_U32(ctx, 31, 0x163774u);
    ctx->pc = 0x163770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16376Cu;
            // 0x163770: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163774u; }
        if (ctx->pc != 0x163774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163774u; }
        if (ctx->pc != 0x163774u) { return; }
    }
    ctx->pc = 0x163774u;
    // 0x163774: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x163774u;
    {
        const bool branch_taken_0x163774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163774) {
            ctx->pc = 0x163868u;
            goto label_163868;
        }
    }
    ctx->pc = 0x16377Cu;
    // 0x16377c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x16377cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x163780: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x163780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x163784: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x163784u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x163788: 0x0  nop
    ctx->pc = 0x163788u;
    // NOP
    // 0x16378c: 0x0  nop
    ctx->pc = 0x16378cu;
    // NOP
    // 0x163790: 0x1010  mfhi        $v0
    ctx->pc = 0x163790u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x163794: 0x144000c2  bnez        $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x163794u;
    {
        const bool branch_taken_0x163794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163794) {
            ctx->pc = 0x163AA0u;
            goto label_163aa0;
        }
    }
    ctx->pc = 0x16379Cu;
    // 0x16379c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16379cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1637a0: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1637a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1637a4: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1637a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1637a8: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1637a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1637ac: 0xc059a4c  jal         func_166930
    ctx->pc = 0x1637ACu;
    SET_GPR_U32(ctx, 31, 0x1637B4u);
    ctx->pc = 0x1637B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1637ACu;
            // 0x1637b0: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166930u;
    if (runtime->hasFunction(0x166930u)) {
        auto targetFn = runtime->lookupFunction(0x166930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1637B4u; }
        if (ctx->pc != 0x1637B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x166930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1637B4u; }
        if (ctx->pc != 0x1637B4u) { return; }
    }
    ctx->pc = 0x1637B4u;
    // 0x1637b4: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1637B4u;
    SET_GPR_U32(ctx, 31, 0x1637BCu);
    ctx->pc = 0x1637B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1637B4u;
            // 0x1637b8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1637BCu; }
        if (ctx->pc != 0x1637BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1637BCu; }
        if (ctx->pc != 0x1637BCu) { return; }
    }
    ctx->pc = 0x1637BCu;
    // 0x1637bc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1637bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1637c0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1637c0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1637c4: 0x0  nop
    ctx->pc = 0x1637c4u;
    // NOP
    // 0x1637c8: 0x0  nop
    ctx->pc = 0x1637c8u;
    // NOP
    // 0x1637cc: 0x8810  mfhi        $s1
    ctx->pc = 0x1637ccu;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x1637d0: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1637D0u;
    SET_GPR_U32(ctx, 31, 0x1637D8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1637D8u; }
        if (ctx->pc != 0x1637D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1637D8u; }
        if (ctx->pc != 0x1637D8u) { return; }
    }
    ctx->pc = 0x1637D8u;
    // 0x1637d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1637d8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1637dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1637DCu;
    {
        const bool branch_taken_0x1637dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1637dc) {
            ctx->pc = 0x1637F0u;
            goto label_1637f0;
        }
    }
    ctx->pc = 0x1637E4u;
    // 0x1637e4: 0x24120078  addiu       $s2, $zero, 0x78
    ctx->pc = 0x1637e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1637e8: 0x118823  negu        $s1, $s1
    ctx->pc = 0x1637e8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x1637ec: 0x0  nop
    ctx->pc = 0x1637ecu;
    // NOP
label_1637f0:
    // 0x1637f0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1637f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1637f4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1637f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1637f8: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1637f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1637fc: 0x2463ffa2  addiu       $v1, $v1, -0x5E
    ctx->pc = 0x1637fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967202));
    // 0x163800: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x163800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x163804: 0x244200d2  addiu       $v0, $v0, 0xD2
    ctx->pc = 0x163804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 210));
    // 0x163808: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x163808u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16380c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16380cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163810: 0x0  nop
    ctx->pc = 0x163810u;
    // NOP
    // 0x163814: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x163814u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x163818: 0xc05d080  jal         func_174200
    ctx->pc = 0x163818u;
    SET_GPR_U32(ctx, 31, 0x163820u);
    ctx->pc = 0x16381Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163818u;
            // 0x16381c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163820u; }
        if (ctx->pc != 0x163820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163820u; }
        if (ctx->pc != 0x163820u) { return; }
    }
    ctx->pc = 0x163820u;
    // 0x163820: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x163820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x163824: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x163824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x163828: 0x2463ffa2  addiu       $v1, $v1, -0x5E
    ctx->pc = 0x163828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967202));
    // 0x16382c: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x16382cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x163830: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x163830u;
    SET_GPR_U32(ctx, 31, 0x163838u);
    ctx->pc = 0x163834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163830u;
            // 0x163834: 0x244500d2  addiu       $a1, $v0, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 210));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163838u; }
        if (ctx->pc != 0x163838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163838u; }
        if (ctx->pc != 0x163838u) { return; }
    }
    ctx->pc = 0x163838u;
    // 0x163838: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x163838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x16383c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x16383cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x163840: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x163840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x163844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163848: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x163848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16384c: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x16384cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x163850: 0x2482ffa2  addiu       $v0, $a0, -0x5E
    ctx->pc = 0x163850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967202));
    // 0x163854: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x163854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x163858: 0xc065480  jal         func_195200
    ctx->pc = 0x163858u;
    SET_GPR_U32(ctx, 31, 0x163860u);
    ctx->pc = 0x16385Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163858u;
            // 0x16385c: 0x246500d2  addiu       $a1, $v1, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 210));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163860u; }
        if (ctx->pc != 0x163860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163860u; }
        if (ctx->pc != 0x163860u) { return; }
    }
    ctx->pc = 0x163860u;
    // 0x163860: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x163860u;
    {
        const bool branch_taken_0x163860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163860) {
            ctx->pc = 0x163AA0u;
            goto label_163aa0;
        }
    }
    ctx->pc = 0x163868u;
label_163868:
    // 0x163868: 0xc065d00  jal         func_197400
    ctx->pc = 0x163868u;
    SET_GPR_U32(ctx, 31, 0x163870u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163870u; }
        if (ctx->pc != 0x163870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163870u; }
        if (ctx->pc != 0x163870u) { return; }
    }
    ctx->pc = 0x163870u;
    // 0x163870: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x163870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163874: 0x14430044  bne         $v0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x163874u;
    {
        const bool branch_taken_0x163874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x163874) {
            ctx->pc = 0x163988u;
            goto label_163988;
        }
    }
    ctx->pc = 0x16387Cu;
    // 0x16387c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x16387cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x163880: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x163880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x163884: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x163884u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x163888: 0x0  nop
    ctx->pc = 0x163888u;
    // NOP
    // 0x16388c: 0x0  nop
    ctx->pc = 0x16388cu;
    // NOP
    // 0x163890: 0x1010  mfhi        $v0
    ctx->pc = 0x163890u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x163894: 0x14400082  bnez        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x163894u;
    {
        const bool branch_taken_0x163894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163894) {
            ctx->pc = 0x163AA0u;
            goto label_163aa0;
        }
    }
    ctx->pc = 0x16389Cu;
    // 0x16389c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16389cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1638a0: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1638a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1638a4: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1638a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1638a8: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1638a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1638ac: 0xc059a4c  jal         func_166930
    ctx->pc = 0x1638ACu;
    SET_GPR_U32(ctx, 31, 0x1638B4u);
    ctx->pc = 0x1638B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1638ACu;
            // 0x1638b0: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166930u;
    if (runtime->hasFunction(0x166930u)) {
        auto targetFn = runtime->lookupFunction(0x166930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1638B4u; }
        if (ctx->pc != 0x1638B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x166930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1638B4u; }
        if (ctx->pc != 0x1638B4u) { return; }
    }
    ctx->pc = 0x1638B4u;
    // 0x1638b4: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1638B4u;
    SET_GPR_U32(ctx, 31, 0x1638BCu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1638BCu; }
        if (ctx->pc != 0x1638BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1638BCu; }
        if (ctx->pc != 0x1638BCu) { return; }
    }
    ctx->pc = 0x1638BCu;
    // 0x1638bc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1638bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1638c0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1638c0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1638c4: 0x0  nop
    ctx->pc = 0x1638c4u;
    // NOP
    // 0x1638c8: 0x0  nop
    ctx->pc = 0x1638c8u;
    // NOP
    // 0x1638cc: 0x9010  mfhi        $s2
    ctx->pc = 0x1638ccu;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x1638d0: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1638D0u;
    SET_GPR_U32(ctx, 31, 0x1638D8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1638D8u; }
        if (ctx->pc != 0x1638D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1638D8u; }
        if (ctx->pc != 0x1638D8u) { return; }
    }
    ctx->pc = 0x1638D8u;
    // 0x1638d8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1638d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1638dc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1638dcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1638e0: 0x0  nop
    ctx->pc = 0x1638e0u;
    // NOP
    // 0x1638e4: 0x0  nop
    ctx->pc = 0x1638e4u;
    // NOP
    // 0x1638e8: 0x8810  mfhi        $s1
    ctx->pc = 0x1638e8u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x1638ec: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1638ECu;
    SET_GPR_U32(ctx, 31, 0x1638F4u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1638F4u; }
        if (ctx->pc != 0x1638F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1638F4u; }
        if (ctx->pc != 0x1638F4u) { return; }
    }
    ctx->pc = 0x1638F4u;
    // 0x1638f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1638f4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1638f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1638F8u;
    {
        const bool branch_taken_0x1638f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1638f8) {
            ctx->pc = 0x163910u;
            goto label_163910;
        }
    }
    ctx->pc = 0x163900u;
    // 0x163900: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x163900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x163904: 0x118823  negu        $s1, $s1
    ctx->pc = 0x163904u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x163908: 0x529023  subu        $s2, $v0, $s2
    ctx->pc = 0x163908u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x16390c: 0x0  nop
    ctx->pc = 0x16390cu;
    // NOP
label_163910:
    // 0x163910: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x163910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x163914: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x163914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x163918: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x163918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x16391c: 0x2463ffa2  addiu       $v1, $v1, -0x5E
    ctx->pc = 0x16391cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967202));
    // 0x163920: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x163920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x163924: 0x244200d2  addiu       $v0, $v0, 0xD2
    ctx->pc = 0x163924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 210));
    // 0x163928: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x163928u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16392c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16392cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163930: 0x0  nop
    ctx->pc = 0x163930u;
    // NOP
    // 0x163934: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x163934u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x163938: 0xc05d080  jal         func_174200
    ctx->pc = 0x163938u;
    SET_GPR_U32(ctx, 31, 0x163940u);
    ctx->pc = 0x16393Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163938u;
            // 0x16393c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163940u; }
        if (ctx->pc != 0x163940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163940u; }
        if (ctx->pc != 0x163940u) { return; }
    }
    ctx->pc = 0x163940u;
    // 0x163940: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x163940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x163944: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x163944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x163948: 0x2463ffa2  addiu       $v1, $v1, -0x5E
    ctx->pc = 0x163948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967202));
    // 0x16394c: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x16394cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x163950: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x163950u;
    SET_GPR_U32(ctx, 31, 0x163958u);
    ctx->pc = 0x163954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163950u;
            // 0x163954: 0x244500d2  addiu       $a1, $v0, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 210));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163958u; }
        if (ctx->pc != 0x163958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163958u; }
        if (ctx->pc != 0x163958u) { return; }
    }
    ctx->pc = 0x163958u;
    // 0x163958: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x163958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x16395c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x16395cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x163960: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x163960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x163964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163968: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x163968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16396c: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x16396cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x163970: 0x2482ffa2  addiu       $v0, $a0, -0x5E
    ctx->pc = 0x163970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967202));
    // 0x163974: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x163974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x163978: 0xc065480  jal         func_195200
    ctx->pc = 0x163978u;
    SET_GPR_U32(ctx, 31, 0x163980u);
    ctx->pc = 0x16397Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163978u;
            // 0x16397c: 0x246500d2  addiu       $a1, $v1, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 210));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163980u; }
        if (ctx->pc != 0x163980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163980u; }
        if (ctx->pc != 0x163980u) { return; }
    }
    ctx->pc = 0x163980u;
    // 0x163980: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x163980u;
    {
        const bool branch_taken_0x163980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163980) {
            ctx->pc = 0x163AA0u;
            goto label_163aa0;
        }
    }
    ctx->pc = 0x163988u;
label_163988:
    // 0x163988: 0xc065d00  jal         func_197400
    ctx->pc = 0x163988u;
    SET_GPR_U32(ctx, 31, 0x163990u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163990u; }
        if (ctx->pc != 0x163990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163990u; }
        if (ctx->pc != 0x163990u) { return; }
    }
    ctx->pc = 0x163990u;
    // 0x163990: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x163990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x163994: 0x14430042  bne         $v0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x163994u;
    {
        const bool branch_taken_0x163994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x163994) {
            ctx->pc = 0x163AA0u;
            goto label_163aa0;
        }
    }
    ctx->pc = 0x16399Cu;
    // 0x16399c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x16399cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1639a0: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1639A0u;
    {
        const bool branch_taken_0x1639a0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1639A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1639A0u;
            // 0x1639a4: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1639a0) {
            ctx->pc = 0x1639B4u;
            goto label_1639b4;
        }
    }
    ctx->pc = 0x1639A8u;
    // 0x1639a8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1639A8u;
    {
        const bool branch_taken_0x1639a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1639a8) {
            ctx->pc = 0x1639B4u;
            goto label_1639b4;
        }
    }
    ctx->pc = 0x1639B0u;
    // 0x1639b0: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1639b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1639b4:
    // 0x1639b4: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1639B4u;
    {
        const bool branch_taken_0x1639b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1639b4) {
            ctx->pc = 0x163AA0u;
            goto label_163aa0;
        }
    }
    ctx->pc = 0x1639BCu;
    // 0x1639bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1639bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1639c0: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1639c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1639c4: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1639c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1639c8: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1639c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1639cc: 0xc059a4c  jal         func_166930
    ctx->pc = 0x1639CCu;
    SET_GPR_U32(ctx, 31, 0x1639D4u);
    ctx->pc = 0x1639D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1639CCu;
            // 0x1639d0: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166930u;
    if (runtime->hasFunction(0x166930u)) {
        auto targetFn = runtime->lookupFunction(0x166930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1639D4u; }
        if (ctx->pc != 0x1639D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x166930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1639D4u; }
        if (ctx->pc != 0x1639D4u) { return; }
    }
    ctx->pc = 0x1639D4u;
    // 0x1639d4: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1639D4u;
    SET_GPR_U32(ctx, 31, 0x1639DCu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1639DCu; }
        if (ctx->pc != 0x1639DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1639DCu; }
        if (ctx->pc != 0x1639DCu) { return; }
    }
    ctx->pc = 0x1639DCu;
    // 0x1639dc: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1639dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1639e0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1639e0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1639e4: 0x0  nop
    ctx->pc = 0x1639e4u;
    // NOP
    // 0x1639e8: 0x0  nop
    ctx->pc = 0x1639e8u;
    // NOP
    // 0x1639ec: 0x9010  mfhi        $s2
    ctx->pc = 0x1639ecu;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x1639f0: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1639F0u;
    SET_GPR_U32(ctx, 31, 0x1639F8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1639F8u; }
        if (ctx->pc != 0x1639F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1639F8u; }
        if (ctx->pc != 0x1639F8u) { return; }
    }
    ctx->pc = 0x1639F8u;
    // 0x1639f8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1639f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1639fc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1639fcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x163a00: 0x0  nop
    ctx->pc = 0x163a00u;
    // NOP
    // 0x163a04: 0x0  nop
    ctx->pc = 0x163a04u;
    // NOP
    // 0x163a08: 0x8810  mfhi        $s1
    ctx->pc = 0x163a08u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x163a0c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x163A0Cu;
    SET_GPR_U32(ctx, 31, 0x163A14u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163A14u; }
        if (ctx->pc != 0x163A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163A14u; }
        if (ctx->pc != 0x163A14u) { return; }
    }
    ctx->pc = 0x163A14u;
    // 0x163a14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x163a14u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x163a18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x163A18u;
    {
        const bool branch_taken_0x163a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x163a18) {
            ctx->pc = 0x163A30u;
            goto label_163a30;
        }
    }
    ctx->pc = 0x163A20u;
    // 0x163a20: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x163a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x163a24: 0x118823  negu        $s1, $s1
    ctx->pc = 0x163a24u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x163a28: 0x529023  subu        $s2, $v0, $s2
    ctx->pc = 0x163a28u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x163a2c: 0x0  nop
    ctx->pc = 0x163a2cu;
    // NOP
label_163a30:
    // 0x163a30: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x163a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x163a34: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x163a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x163a38: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x163a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x163a3c: 0x2463ffa2  addiu       $v1, $v1, -0x5E
    ctx->pc = 0x163a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967202));
    // 0x163a40: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x163a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x163a44: 0x244200d2  addiu       $v0, $v0, 0xD2
    ctx->pc = 0x163a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 210));
    // 0x163a48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x163a48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163a4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163a50: 0x0  nop
    ctx->pc = 0x163a50u;
    // NOP
    // 0x163a54: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x163a54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x163a58: 0xc05d080  jal         func_174200
    ctx->pc = 0x163A58u;
    SET_GPR_U32(ctx, 31, 0x163A60u);
    ctx->pc = 0x163A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163A58u;
            // 0x163a5c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163A60u; }
        if (ctx->pc != 0x163A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163A60u; }
        if (ctx->pc != 0x163A60u) { return; }
    }
    ctx->pc = 0x163A60u;
    // 0x163a60: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x163a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x163a64: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x163a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x163a68: 0x2463ffa2  addiu       $v1, $v1, -0x5E
    ctx->pc = 0x163a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967202));
    // 0x163a6c: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x163a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x163a70: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x163A70u;
    SET_GPR_U32(ctx, 31, 0x163A78u);
    ctx->pc = 0x163A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163A70u;
            // 0x163a74: 0x244500d2  addiu       $a1, $v0, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 210));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163A78u; }
        if (ctx->pc != 0x163A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163A78u; }
        if (ctx->pc != 0x163A78u) { return; }
    }
    ctx->pc = 0x163A78u;
    // 0x163a78: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x163a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x163a7c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x163a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x163a80: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x163a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x163a84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163a84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163a88: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x163a88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163a8c: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x163a8cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x163a90: 0x2482ffa2  addiu       $v0, $a0, -0x5E
    ctx->pc = 0x163a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967202));
    // 0x163a94: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x163a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x163a98: 0xc065480  jal         func_195200
    ctx->pc = 0x163A98u;
    SET_GPR_U32(ctx, 31, 0x163AA0u);
    ctx->pc = 0x163A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163A98u;
            // 0x163a9c: 0x246500d2  addiu       $a1, $v1, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 210));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163AA0u; }
        if (ctx->pc != 0x163AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163AA0u; }
        if (ctx->pc != 0x163AA0u) { return; }
    }
    ctx->pc = 0x163AA0u;
label_163aa0:
    // 0x163aa0: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x163aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
    // 0x163aa4: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x163aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163aa8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x163aa8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x163aac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163aacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163ab0: 0x0  nop
    ctx->pc = 0x163ab0u;
    // NOP
    // 0x163ab4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x163ab4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163ab8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x163AB8u;
    {
        const bool branch_taken_0x163ab8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x163ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163AB8u;
            // 0x163abc: 0x3c023ba3  lui         $v0, 0x3BA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ab8) {
            ctx->pc = 0x163AE0u;
            goto label_163ae0;
        }
    }
    ctx->pc = 0x163AC0u;
    // 0x163ac0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x163ac0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x163ac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163ac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163ac8: 0x0  nop
    ctx->pc = 0x163ac8u;
    // NOP
    // 0x163acc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x163accu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x163ad0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x163AD0u;
    {
        const bool branch_taken_0x163ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163AD0u;
            // 0x163ad4: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ad0) {
            ctx->pc = 0x163AE0u;
            goto label_163ae0;
        }
    }
    ctx->pc = 0x163AD8u;
label_163ad8:
    // 0x163ad8: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x163ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x163adc: 0x0  nop
    ctx->pc = 0x163adcu;
    // NOP
label_163ae0:
    // 0x163ae0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x163ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x163ae4: 0x8c224be8  lw          $v0, 0x4BE8($at)
    ctx->pc = 0x163ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19432)));
    // 0x163ae8: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x163ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163aec: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x163aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163af0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x163af0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x163af4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x163af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_163af8:
    // 0x163af8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x163af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x163afc: 0x8c234be8  lw          $v1, 0x4BE8($at)
    ctx->pc = 0x163afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19432)));
    // 0x163b00: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x163b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x163b04: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163b04u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x163b08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163b08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163b0c: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x163b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163b10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x163b10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163b14: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x163B14u;
    {
        const bool branch_taken_0x163b14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x163B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163B14u;
            // 0x163b18: 0x24640014  addiu       $a0, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163b14) {
            ctx->pc = 0x163B38u;
            goto label_163b38;
        }
    }
    ctx->pc = 0x163B1Cu;
    // 0x163b1c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x163b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x163b20: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163b20u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x163b24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163b24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163b28: 0x0  nop
    ctx->pc = 0x163b28u;
    // NOP
    // 0x163b2c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x163b2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163b30: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x163b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x163b34: 0x0  nop
    ctx->pc = 0x163b34u;
    // NOP
label_163b38:
    // 0x163b38: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x163b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x163b3c: 0x8c234be8  lw          $v1, 0x4BE8($at)
    ctx->pc = 0x163b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19432)));
    // 0x163b40: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x163b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x163b44: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163b44u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x163b48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163b48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163b4c: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x163b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163b50: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x163b50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163b54: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x163B54u;
    {
        const bool branch_taken_0x163b54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x163B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163B54u;
            // 0x163b58: 0x24640014  addiu       $a0, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163b54) {
            ctx->pc = 0x163B78u;
            goto label_163b78;
        }
    }
    ctx->pc = 0x163B5Cu;
    // 0x163b5c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x163b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x163b60: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163b60u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x163b64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163b64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163b68: 0x0  nop
    ctx->pc = 0x163b68u;
    // NOP
    // 0x163b6c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x163b6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x163b70: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x163b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x163b74: 0x0  nop
    ctx->pc = 0x163b74u;
    // NOP
label_163b78:
    // 0x163b78: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x163b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x163b7c: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x163b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x163b80: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x163b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x163b84: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x163b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x163b88: 0xc059a4c  jal         func_166930
    ctx->pc = 0x163B88u;
    SET_GPR_U32(ctx, 31, 0x163B90u);
    ctx->pc = 0x163B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163B88u;
            // 0x163b8c: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166930u;
    if (runtime->hasFunction(0x166930u)) {
        auto targetFn = runtime->lookupFunction(0x166930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163B90u; }
        if (ctx->pc != 0x163B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x166930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163B90u; }
        if (ctx->pc != 0x163B90u) { return; }
    }
    ctx->pc = 0x163B90u;
    // 0x163b90: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x163b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x163b94: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x163b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x163b98: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x163b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x163b9c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x163b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x163ba0: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x163BA0u;
    SET_GPR_U32(ctx, 31, 0x163BA8u);
    ctx->pc = 0x163BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163BA0u;
            // 0x163ba4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163BA8u; }
        if (ctx->pc != 0x163BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163BA8u; }
        if (ctx->pc != 0x163BA8u) { return; }
    }
    ctx->pc = 0x163BA8u;
    // 0x163ba8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x163ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x163bac: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x163bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x163bb0: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x163BB0u;
    SET_GPR_U32(ctx, 31, 0x163BB8u);
    ctx->pc = 0x163BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163BB0u;
            // 0x163bb4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163BB8u; }
        if (ctx->pc != 0x163BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163BB8u; }
        if (ctx->pc != 0x163BB8u) { return; }
    }
    ctx->pc = 0x163BB8u;
    // 0x163bb8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x163bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x163bbc: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x163bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x163bc0: 0xc04b804  jal         func_12E010
    ctx->pc = 0x163BC0u;
    SET_GPR_U32(ctx, 31, 0x163BC8u);
    ctx->pc = 0x163BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163BC0u;
            // 0x163bc4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163BC8u; }
        if (ctx->pc != 0x163BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163BC8u; }
        if (ctx->pc != 0x163BC8u) { return; }
    }
    ctx->pc = 0x163BC8u;
    // 0x163bc8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x163bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x163bcc: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x163bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x163bd0: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x163BD0u;
    SET_GPR_U32(ctx, 31, 0x163BD8u);
    ctx->pc = 0x163BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163BD0u;
            // 0x163bd4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163BD8u; }
        if (ctx->pc != 0x163BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163BD8u; }
        if (ctx->pc != 0x163BD8u) { return; }
    }
    ctx->pc = 0x163BD8u;
    // 0x163bd8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x163bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x163bdc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x163bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163be0: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x163BE0u;
    SET_GPR_U32(ctx, 31, 0x163BE8u);
    ctx->pc = 0x163BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163BE0u;
            // 0x163be4: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163BE8u; }
        if (ctx->pc != 0x163BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163BE8u; }
        if (ctx->pc != 0x163BE8u) { return; }
    }
    ctx->pc = 0x163BE8u;
    // 0x163be8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x163be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x163bec: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x163becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x163bf0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x163bf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x163bf4: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x163BF4u;
    {
        const bool branch_taken_0x163bf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x163bf4) {
            ctx->pc = 0x163C48u;
            goto label_163c48;
        }
    }
    ctx->pc = 0x163BFCu;
    // 0x163bfc: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x163bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x163c00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x163C00u;
    {
        const bool branch_taken_0x163c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x163c00) {
            ctx->pc = 0x163C18u;
            goto label_163c18;
        }
    }
    ctx->pc = 0x163C08u;
    // 0x163c08: 0xc0604f0  jal         func_1813C0
    ctx->pc = 0x163C08u;
    SET_GPR_U32(ctx, 31, 0x163C10u);
    ctx->pc = 0x163C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163C08u;
            // 0x163c0c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163C10u; }
        if (ctx->pc != 0x163C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163C10u; }
        if (ctx->pc != 0x163C10u) { return; }
    }
    ctx->pc = 0x163C10u;
    // 0x163c10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x163C10u;
    {
        const bool branch_taken_0x163c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163c10) {
            ctx->pc = 0x163C20u;
            goto label_163c20;
        }
    }
    ctx->pc = 0x163C18u;
label_163c18:
    // 0x163c18: 0xc0604dc  jal         func_181370
    ctx->pc = 0x163C18u;
    SET_GPR_U32(ctx, 31, 0x163C20u);
    ctx->pc = 0x163C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163C18u;
            // 0x163c1c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163C20u; }
        if (ctx->pc != 0x163C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163C20u; }
        if (ctx->pc != 0x163C20u) { return; }
    }
    ctx->pc = 0x163C20u;
label_163c20:
    // 0x163c20: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x163c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x163c24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x163C24u;
    {
        const bool branch_taken_0x163c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x163c24) {
            ctx->pc = 0x163C38u;
            goto label_163c38;
        }
    }
    ctx->pc = 0x163C2Cu;
    // 0x163c2c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x163C2Cu;
    {
        const bool branch_taken_0x163c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163C2Cu;
            // 0x163c30: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163c2c) {
            ctx->pc = 0x163C58u;
            goto label_163c58;
        }
    }
    ctx->pc = 0x163C34u;
    // 0x163c34: 0x0  nop
    ctx->pc = 0x163c34u;
    // NOP
label_163c38:
    // 0x163c38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163c3c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x163C3Cu;
    {
        const bool branch_taken_0x163c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163C3Cu;
            // 0x163c40: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163c3c) {
            ctx->pc = 0x163C58u;
            goto label_163c58;
        }
    }
    ctx->pc = 0x163C44u;
    // 0x163c44: 0x0  nop
    ctx->pc = 0x163c44u;
    // NOP
label_163c48:
    // 0x163c48: 0xc0604dc  jal         func_181370
    ctx->pc = 0x163C48u;
    SET_GPR_U32(ctx, 31, 0x163C50u);
    ctx->pc = 0x163C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163C48u;
            // 0x163c4c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163C50u; }
        if (ctx->pc != 0x163C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163C50u; }
        if (ctx->pc != 0x163C50u) { return; }
    }
    ctx->pc = 0x163C50u;
    // 0x163c50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163c54: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x163c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_163c58:
    // 0x163c58: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x163c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x163c5c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x163c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x163c60: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x163c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x163c64: 0x1c40001a  bgtz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x163C64u;
    {
        const bool branch_taken_0x163c64 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x163c64) {
            ctx->pc = 0x163CD0u;
            goto label_163cd0;
        }
    }
    ctx->pc = 0x163C6Cu;
    // 0x163c6c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x163c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x163c70: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x163c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x163c74: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x163c74u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x163c78: 0x0  nop
    ctx->pc = 0x163c78u;
    // NOP
    // 0x163c7c: 0x0  nop
    ctx->pc = 0x163c7cu;
    // NOP
    // 0x163c80: 0x1010  mfhi        $v0
    ctx->pc = 0x163c80u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x163c84: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x163C84u;
    {
        const bool branch_taken_0x163c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163c84) {
            ctx->pc = 0x163CB0u;
            goto label_163cb0;
        }
    }
    ctx->pc = 0x163C8Cu;
    // 0x163c8c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x163c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x163c90: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x163c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
    // 0x163c94: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x163c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x163c98: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x163c98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x163c9c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x163c9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x163ca0: 0x2484ffa2  addiu       $a0, $a0, -0x5E
    ctx->pc = 0x163ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967202));
    // 0x163ca4: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x163CA4u;
    SET_GPR_U32(ctx, 31, 0x163CACu);
    ctx->pc = 0x163CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163CA4u;
            // 0x163ca8: 0x24650078  addiu       $a1, $v1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163CACu; }
        if (ctx->pc != 0x163CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163CACu; }
        if (ctx->pc != 0x163CACu) { return; }
    }
    ctx->pc = 0x163CACu;
    // 0x163cac: 0x0  nop
    ctx->pc = 0x163cacu;
    // NOP
label_163cb0:
    // 0x163cb0: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x163cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x163cb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x163cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x163cb8: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x163cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x163cbc: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x163cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x163cc0: 0xc0604b0  jal         func_1812C0
    ctx->pc = 0x163CC0u;
    SET_GPR_U32(ctx, 31, 0x163CC8u);
    ctx->pc = 0x163CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163CC0u;
            // 0x163cc4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163CC8u; }
        if (ctx->pc != 0x163CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163CC8u; }
        if (ctx->pc != 0x163CC8u) { return; }
    }
    ctx->pc = 0x163CC8u;
    // 0x163cc8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x163CC8u;
    {
        const bool branch_taken_0x163cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163cc8) {
            ctx->pc = 0x163D50u;
            goto label_163d50;
        }
    }
    ctx->pc = 0x163CD0u;
label_163cd0:
    // 0x163cd0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x163cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x163cd4: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x163cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x163cd8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x163cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x163cdc: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x163cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x163ce0: 0x24c61ad0  addiu       $a2, $a2, 0x1AD0
    ctx->pc = 0x163ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6864));
    // 0x163ce4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x163ce4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163ce8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x163ce8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163cec: 0x2442ff8e  addiu       $v0, $v0, -0x72
    ctx->pc = 0x163cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967182));
    // 0x163cf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163cf4: 0x0  nop
    ctx->pc = 0x163cf4u;
    // NOP
    // 0x163cf8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x163cf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x163cfc: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x163cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x163d00: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x163d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x163d04: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x163d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x163d08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163d08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163d0c: 0x0  nop
    ctx->pc = 0x163d0cu;
    // NOP
    // 0x163d10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x163d10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x163d14: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x163d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x163d18: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x163d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x163d1c: 0x2442ffb6  addiu       $v0, $v0, -0x4A
    ctx->pc = 0x163d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967222));
    // 0x163d20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163d24: 0x0  nop
    ctx->pc = 0x163d24u;
    // NOP
    // 0x163d28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x163d28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x163d2c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x163d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x163d30: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x163d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x163d34: 0x244200c8  addiu       $v0, $v0, 0xC8
    ctx->pc = 0x163d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x163d38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163d38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163d3c: 0x0  nop
    ctx->pc = 0x163d3cu;
    // NOP
    // 0x163d40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x163d40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x163d44: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x163D44u;
    SET_GPR_U32(ctx, 31, 0x163D4Cu);
    ctx->pc = 0x163D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163D44u;
            // 0x163d48: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163D4Cu; }
        if (ctx->pc != 0x163D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163D4Cu; }
        if (ctx->pc != 0x163D4Cu) { return; }
    }
    ctx->pc = 0x163D4Cu;
    // 0x163d4c: 0x0  nop
    ctx->pc = 0x163d4cu;
    // NOP
label_163d50:
    // 0x163d50: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x163d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x163d54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x163d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x163d58: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x163d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x163d5c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x163d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x163d60: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x163d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x163d64: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x163d64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x163d68: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x163d68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163d6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x163d6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163d70: 0x3e00008  jr          $ra
    ctx->pc = 0x163D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163D70u;
            // 0x163d74: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163660u: goto label_163660;
            case 0x163688u: goto label_163688;
            case 0x1636C8u: goto label_1636c8;
            case 0x163700u: goto label_163700;
            case 0x163708u: goto label_163708;
            case 0x163728u: goto label_163728;
            case 0x1637F0u: goto label_1637f0;
            case 0x163868u: goto label_163868;
            case 0x163910u: goto label_163910;
            case 0x163988u: goto label_163988;
            case 0x1639B4u: goto label_1639b4;
            case 0x163A30u: goto label_163a30;
            case 0x163AA0u: goto label_163aa0;
            case 0x163AD8u: goto label_163ad8;
            case 0x163AE0u: goto label_163ae0;
            case 0x163AF8u: goto label_163af8;
            case 0x163B38u: goto label_163b38;
            case 0x163B78u: goto label_163b78;
            case 0x163C18u: goto label_163c18;
            case 0x163C20u: goto label_163c20;
            case 0x163C38u: goto label_163c38;
            case 0x163C48u: goto label_163c48;
            case 0x163C58u: goto label_163c58;
            case 0x163CB0u: goto label_163cb0;
            case 0x163CD0u: goto label_163cd0;
            case 0x163D50u: goto label_163d50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x163D78u;
}
